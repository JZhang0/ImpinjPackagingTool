import { Component } from '@angular/core';
import { HttpClient } from '@angular/common/http';
import { HostListener } from '@angular/core';

@Component({
  selector: 'app-root',
  templateUrl: './app.component.html',
  styleUrls: ['./app.component.css']
})
export class AppComponent {
  title = 'Impinj Building';

  readonly Url = 'http://' + window.location.hostname + ':5193/';
  isBeingUsed = true;

  constructor(
    private http: HttpClient,
  ) {}

  ngOnInit()
  {
    this.http.get("http://api.ipify.org/?format=json").subscribe((res: any) => {
      this.http.get(this.Url + 'build/user/' + res.ip, 
                    {observe: 'response'}
      ).subscribe(response => {
        this.isBeingUsed = !response.ok;
        if (this.isBeingUsed)
        {
          alert("The service is being used by another user. Please try again later!");
        }
      });
    });  
  }

  @HostListener('window:beforeunload', ['event'])
  unloadHandler(event: Event)
  {
    if(this.isBeingUsed == false)
    {
      this.http.get(this.Url + 'build/user/0.0.0.0').subscribe((data: any) => {
        console.log(data);
      });
    }
  }
}
