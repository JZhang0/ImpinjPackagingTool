import { Component } from '@angular/core';
import { HttpClient} from '@angular/common/http';

import { impinj } from '../impinj';

@Component({
  selector: 'impinj-list',
  templateUrl: './impinj-list.html',
  styleUrls: ['./impinj-list.css']
})
export class ImpinjListComponent {
  readonly Url = 'http://' + window.location.hostname + ':5193/';

  devices = [...impinj];
  buildButtonDisabled = false;

  constructor(
    private http: HttpClient,
  ) {}

  build(deviceType: string) {
    this.http.get(this.Url + 'build/' + deviceType + '/retrieve', {
          responseType: 'blob'
        }).subscribe(response => {
          let blob = new Blob([response], {type: response.type});
          let downloadLink = document.createElement('a');
          downloadLink.href = window.URL.createObjectURL(blob);

          if(deviceType == "r420")
          {
            downloadLink.setAttribute('download', 'app.upg');
          }
          else if(deviceType == "r700")
          {
            downloadLink.setAttribute('download', 'app.upgx');
          }

          document.body.appendChild(downloadLink);
          downloadLink.click();
        });
  }
}