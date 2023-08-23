# ImpinjPackagingTool

## Building instruction

To run the Impinj Builder server on an Ubuntu 20 machine, a script named `setup.sh` is given to handle dependencies installation, building and setting up the server to start at boot. All you need to do is:

1. Make sure to run all commands below with root privilege, `sudo su` is recommended.
2. Install git and clone this repository.
3. Run the setup script `sudo ./setup.sh`.

The `setup.sh` script adds the `ImpinjBuilder` file as a Sysv Init script, which is translated to a systemd init service. So you can start or stop both the server and the web interface by `systemctl start ImpinjBuilder` and `systemctl stop ImpinjBuilder`.

Access the server at: `http://{hostname}`

## Troubleshooting

1. To check if the server and web interface are running.
    * `systemctl status ImpinjBuilder`  
    > Make sure that the service is actively running, and that both `/root/ImpinjBuilder/server/server` and `http-server` are present under CGroup.
    > If not try restarting the service by `systemctl restart ImpinjBuilder`.  
2. The logs of the server and web interface is located at `/root/ImpinjBuilder/server.log` and `/root/ImpinjBuilder/UI.log`. The server log is usually more helpful.
3. If the UPGX file generated could not be installed throught the Impinj Web Interface. Check if the following are compatible: 
   * the firmware version of the Impinj device. *(run in Impinj RShell: `show image summary`)* 
   * and the version of the Embedded Development Tools. *(In this repo: `R420/VERSION` and `/R700/VERSION`)* 
   > Impinj R420 ETK info: [R420](https://support.impinj.com/hc/en-us/articles/202755288-Speedway-Revolution-Embedded-Development-Tools-and-Sample-Application-ETK-)  
   > Impinj R700 ETK info: [R700](https://support.impinj.com/hc/en-us/articles/360011676720)
