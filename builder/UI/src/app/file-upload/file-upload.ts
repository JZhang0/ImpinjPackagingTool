import { Component, Input, Output, EventEmitter } from '@angular/core';
import { Subscription, finalize } from 'rxjs';
import { HttpClient, HttpEventType } from '@angular/common/http';
import { FormBuilder} from '@angular/forms';

@Component({
  selector: 'file-upload',
  templateUrl: './file-upload.html',
  styleUrls: ['./file-upload.css'],
})
export class FileUploadComponent {
  @Input() deviceType: string;
  @Output() buildComplete = new EventEmitter();

  readonly Url = 'http://' + window.location.hostname + ':5193/';

  fileName = '';
  uploadProgress: number;
  uploadSub: Subscription;

  formGroup = this._formBuilder.group({
    enableFTP: false,
    enableRShell: false,
    RShellPassword: '',
  })

  constructor(
    private http: HttpClient,
    private _formBuilder: FormBuilder
  ) {}

  ngOnInit()
  {
    this.buildComplete.emit(true);
  }

  onFileSelected(event: Event) {
    this.reset();

    const files = (event.target as HTMLInputElement).files;

    if (files && files.length == 2) {
      let areFilesCorrect = true;
      
      Array.from(files).forEach(file => {
        if(file.name !== "app" && file.name !== "config.ini" && file.name !== "Config.ini"){
          areFilesCorrect = false;
        }
      });

      if(!areFilesCorrect){
        alert("Both app and its configuration file are needed!");
        return;
      }

      const formData = new FormData();

      formData.append('enableFTP', String(this.formGroup.controls['enableFTP'].value));
      formData.append('enableRShell', String(this.formGroup.controls['enableRShell'].value));
      formData.append('RShellPassword', this.formGroup.controls['RShellPassword'].value);

      Array.from(files).forEach(file => {
        formData.append(file.name, file);
      });

      const upload$ = this.http
        .post(this.Url + 'build/' + this.deviceType, formData, {
          reportProgress: true,
          observe: 'events',
        })
        .pipe(finalize(() => {
          this.fileName = 'Upload Successful!' + ' - ';
          Array.from(files).forEach(file => {
            this.fileName +=  file.name + ' | ';
          });
          this.fileName = this.fileName.substring(0, this.fileName.length - 2);
          
          this.buildComplete.emit(false);
        }));

      this.uploadSub = upload$.subscribe(event => {
        if (event.type == HttpEventType.UploadProgress) {
          this.uploadProgress = Math.round(100 * (event.loaded / event.total));
        }
      });
    }
    else if(files && files.length != 2) {
      alert("Please upload the two required files!");
    }
    else {
      alert("Something is wrong - No file uploaded!");
    }
  }

  clearUpload(){
    if(this.uploadSub){
      this.uploadSub.unsubscribe();
    }
    this.formGroup.patchValue({enableFTP: false,
      enableRShell: false,
      RShellPassword: ''});
    this.reset();

    this.http.get(this.Url + 'build/' + this.deviceType + '/clean').subscribe((data: any) => {
      alert('Uploaded files cleaned!');
    });
  }

  reset(){
    this.uploadProgress = null;
    this.uploadSub = null;
    this.fileName = '';
    this.buildComplete.emit(true);
  }

}
