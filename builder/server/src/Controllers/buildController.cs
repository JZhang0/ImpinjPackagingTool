using System;
using System.IO;
using System.Text;
using System.Net;
using System.Timers;
using Microsoft.AspNetCore.Mvc;
using RouteAttribute = Microsoft.AspNetCore.Mvc.RouteAttribute;
using NuGet.Packaging;
using Microsoft.AspNetCore.Cors;
using Microsoft.Extensions.Primitives;
using System.Security.AccessControl;
using System.Runtime.InteropServices;
using System.Diagnostics;
using NuGet.DependencyResolver;
using Microsoft.Build.Tasks;

namespace server.Controllers
{
    [ApiController]
    public class buildController : ControllerBase
    {
        [DllImport("libc", SetLastError = true)]
        private static extern int chmod(string pathname, int mode);

        private const string buildPath = "/root/ImpinjBuilder/";
        private static string currentUserIp = "";
        private static System.Timers.Timer timer = new System.Timers.Timer(2 * 60 * 60 * 1000);
        private static object _lock = new object();
        private readonly ILogger<buildController> _logger;

        public buildController(ILogger<buildController> logger)
        {
            _logger = logger;

            if(!timer.Enabled)
            {
                timer.Elapsed += new ElapsedEventHandler(resetCurrentIp);
                timer.Start();
            }
        }

        [HttpGet("[controller]/user/{ip?}")]
        [EnableCors]
        public IActionResult updateIp(string ip)
        {
            _logger.LogInformation("\n[{time}] IP accessing the service: {ip}\n", DateTime.Now.ToString("dddd, yyyy/MM/dd - HH:mm:ss EST"), currentUserIp);
            _logger.LogInformation("\n[{time}] IP attempting to access: {ip}\n", DateTime.Now.ToString("dddd, yyyy/MM/dd - HH:mm:ss EST"), ip);
            lock(_lock)
            {
                if(ip == "0.0.0.0")
                {
                    _logger.LogInformation("\n[{time}] Current user with ip: {ip} has ended session\n", DateTime.Now.ToString("dddd, yyyy/MM/dd - HH:mm:ss EST"), currentUserIp);
                    resetCurrentIp(null, null);
                    return Ok();
                }
                else if(String.IsNullOrEmpty(currentUserIp))
                {
                    currentUserIp = ip;
                    _logger.LogInformation("\n[{time}] Current user's ip has been updated to: {ip}\n", DateTime.Now.ToString("dddd, yyyy/MM/dd - HH:mm:ss EST"), ip);
                    timer.Stop();
                    timer.Start();
                    return Ok();
                }
                else
                {
                    if(ip == currentUserIp)
                    {
                        _logger.LogInformation("\n[{time}] Current user's ip has not changed: {ip}\n", DateTime.Now.ToString("dddd, yyyy/MM/dd - HH:mm:ss EST"), ip);
                        return Ok();
                    }
                    return BadRequest();
                }
            }
        }

        [HttpGet("[controller]/{impinjType?}/clean")]
        [EnableCors]
        public IActionResult clean(string impinjType)
        {
            impinjType = impinjType.ToUpper();
            cleanBuildEnvironment(impinjType);
            return Ok();
        }

        [HttpPost("[controller]/r420")]
        [EnableCors]
        public async Task<IActionResult> buildImpinjR420()
        {
            cleanBuildEnvironment("R420");

            StringValues enableFTP, enableRShell, RShellPassword;

            enableFTP = HttpContext.Request.Form["enableFTP"];
            enableRShell = HttpContext.Request.Form["enableRShell"];
            RShellPassword = HttpContext.Request.Form["RShellPassword"];

            var fileList = HttpContext.Request.Form.Files;
            var appFile = fileList.GetFile("app");
            var configFile = fileList.GetFile("config.ini");
            if (configFile == null)
            {
                configFile = fileList.GetFile("Config.ini");
                if (configFile == null || appFile == null)
                {
                    return BadRequest();
                }
            }

            _logger.LogInformation("\n[{time}] Creating Impinj {type} Cap directory from template\n", DateTime.Now.ToString("dddd, yyyy/MM/dd - HH:mm:ss EST"), "R420");
            CopyDirectory(buildPath + "R420/examples/cap/cap_template", buildPath + "R420/examples/cap/cap", true);
            System.IO.DirectoryInfo dir = new System.IO.DirectoryInfo(buildPath + "R420/examples/cap/cap/sys");
            foreach (FileInfo file in dir.GetFiles())
            {
                file.Delete();
            }

            await using (var appFileWriteStream = System.IO.File.Create(buildPath + "R420/examples/cap/cap/appDir/app"))
            {
                await appFile.CopyToAsync(appFileWriteStream);
            };
            const int _0755 = 0x100 | 0x80 | 0x40 | 0x20 | 0x8 | 0x4 | 0x1;
            chmod(buildPath + "R420/examples/cap/cap/appDir/app", (int)_0755);

            await using (var configFileWriteStream = System.IO.File.Create(buildPath + "R420/examples/cap/cap/appDir/Config.ini"))
            {
                await configFile.CopyToAsync(configFileWriteStream);
            };

            var built = buildUPGXFile(  "R420",
                                        enableFTP.Equals("true"),
                                        enableRShell.Equals("true"),
                                        RShellPassword);

            if (!built)
            {
                return BadRequest();
            }
            else{
                return Ok();
            }
        }

        [HttpPost("[controller]/r700")]
        [EnableCors]
        public async Task<IActionResult> buildImpinjR700()
        {
            cleanBuildEnvironment("R700");

            StringValues enableFTP, enableRShell, RShellPassword;

            enableFTP = HttpContext.Request.Form["enableFTP"];
            enableRShell = HttpContext.Request.Form["enableRShell"];
            RShellPassword = HttpContext.Request.Form["RShellPassword"];

            var fileList = HttpContext.Request.Form.Files;
            var appFile = fileList.GetFile("app");
            var configFile = fileList.GetFile("config.ini");
            if (configFile == null)
            {
                configFile = fileList.GetFile("Config.ini");
                if (configFile == null || appFile == null)
                {
                    return BadRequest();
                }
            }

            _logger.LogInformation("\n[{time}] Creating Impinj {type} Cap directory from template\n", DateTime.Now.ToString("dddd, yyyy/MM/dd - HH:mm:ss EST"), "R700");
            CopyDirectory(buildPath + "R700/examples/cap/cap_template", buildPath + "R700/examples/cap/cap", true);
            System.IO.DirectoryInfo dir = new System.IO.DirectoryInfo(buildPath + "R700/examples/cap/cap/sys");
            foreach (FileInfo file in dir.GetFiles())
            {
                file.Delete();
            }

            await using (var appFileWriteStream = System.IO.File.Create(buildPath + "R700/examples/cap/cap/appDir/app"))
            {
                await appFile.CopyToAsync(appFileWriteStream);
            };
            const int _0755 = 0x100 | 0x80 | 0x40 | 0x20 | 0x8 | 0x4 | 0x1;
            chmod(buildPath + "R700/examples/cap/cap/appDir/app", (int)_0755);

            await using (var configFileWriteStream = System.IO.File.Create(buildPath + "R700/examples/cap/cap/appDir/Config.ini"))
            {
                await configFile.CopyToAsync(configFileWriteStream);
            };

            var built = buildUPGXFile(  "R700",
                                        enableFTP.Equals("true"),
                                        enableRShell.Equals("true"),
                                        RShellPassword);

            if (!built)
            {
                return BadRequest();
            }
            else{
                return Ok();
            }
        }

        [HttpGet("[controller]/{impinjType?}/retrieve")]
        [EnableCors]
        public IActionResult GetUPGX(string impinjType)
        {
            impinjType = impinjType.ToUpper();

            if(!System.IO.File.Exists(buildPath + impinjType + "/examples/cap/app.upgx"))
            {
                return BadRequest();
            }

            var content = System.IO.File.ReadAllBytes(buildPath + impinjType + "/examples/cap/app.upgx");

            var contentDisposition = new System.Net.Mime.ContentDisposition{
                FileName = "app.upgx",
                Inline = false
            };
            Response.Headers.Add("Content-Disposition", contentDisposition.ToString());
            return File(content, "application/octet-stream");
        }

        private bool buildUPGXFile(String impinjType, bool enableFTP, bool enableRShell, String RshellPassword)
        {
            _logger.LogInformation("\n[{time}] Build impinj {type} with options: \n    - enableFTP: {enableFTP}\n    - enableRShell: {enableRShell}\n    - RshellPassword: {RshellPassword}\n", DateTime.Now.ToString("dddd, yyyy/MM/dd - HH:mm:ss EST"), impinjType, enableFTP, enableRShell, RshellPassword);
            if(impinjType == "R420")
            {
                if (enableFTP && enableRShell)
                {
                    System.IO.File.Copy(buildPath + impinjType + "/examples/cap/cap_template/sys/reader-FTP-RShell.conf", buildPath + impinjType + "/examples/cap/cap/sys/reader.conf");

                    if (!String.IsNullOrEmpty(RshellPassword))
                    {
                        System.IO.File.AppendAllText(buildPath + impinjType + "/examples/cap/cap/sys/reader.conf", RshellPassword);
                    }
                }
                else if (enableFTP)
                {
                    System.IO.File.Copy(buildPath + impinjType + "/examples/cap/cap_template/sys/reader-FTP.conf", buildPath + impinjType + "/examples/cap/cap/sys/reader.conf");
                }
                else if (enableRShell)
                {
                    System.IO.File.Copy(buildPath + impinjType + "/examples/cap/cap_template/sys/reader-RShell.conf", buildPath + impinjType + "/examples/cap/cap/sys/reader.conf");

                    if (!String.IsNullOrEmpty(RshellPassword))
                    {
                        System.IO.File.AppendAllText(buildPath + impinjType + "/examples/cap/cap/sys/reader.conf", RshellPassword);
                    }

                }
            }
            else if(impinjType == "R700")
            {
                if (enableRShell)
                {
                    System.IO.File.Copy(buildPath + impinjType + "/examples/cap/cap_template/sys/reader.conf", buildPath + impinjType + "/examples/cap/cap/sys/reader.conf");

                    if (!String.IsNullOrEmpty(RshellPassword))
                    {
                        System.IO.File.AppendAllText(buildPath + impinjType + "/examples/cap/cap/sys/reader.conf", RshellPassword);
                    }

                }
            }

            var command = "../../cap_gen.sh -v -d cap_description.in -o app.upgx";

            string timeBefore = DateTime.Now.ToString("dddd, yyyy/MM/dd - HH:mm:ss");
            var execOutput = Exec(command, buildPath + impinjType + "/examples/cap/");
            string timeAfter = DateTime.Now.ToString("dddd, yyyy/MM/dd - HH:mm:ss");

            _logger.LogInformation("\n[{timebefore}] Beginning of UPGX Building Output \n\n{execOutput} \n[{timeAfter}] End of UPGX Building Output\n", timeBefore, execOutput, timeAfter);

            if (!System.IO.File.Exists(buildPath + impinjType + "/examples/cap/app.upgx"))
            {
                _logger.LogInformation("\n[{time}] Failed to build Impinj UPGX package\n", DateTime.Now.ToString("dddd, yyyy/MM/dd - HH:mm:ss EST"));
                return false;
            }

            _logger.LogInformation("\n[{time}] Built Impinj UPGX package successfully\n", DateTime.Now.ToString("dddd, yyyy/MM/dd - HH:mm:ss EST"));
            return true;
        }

        private void resetCurrentIp(object source, ElapsedEventArgs e)
        {
            if (!String.IsNullOrEmpty(currentUserIp))
            {
                cleanBuildEnvironment("R420");
                cleanBuildEnvironment("R700");
                currentUserIp = "";

                lock(_lock)
                {
                    _logger.LogInformation("\n[{time}] Resetting ip: {ip}\n", DateTime.Now.ToString("dddd, yyyy/MM/dd - HH:mm:ss EST"), currentUserIp);
                    currentUserIp = "";
                }
            }
        }

        private void cleanBuildEnvironment(string impinjType)
        {
            if (System.IO.Directory.Exists(buildPath + impinjType + "/examples/cap/cap"))
            {
                System.IO.Directory.Delete(buildPath + impinjType + "/examples/cap/cap", true);
                _logger.LogInformation("\n[{time}] Build Environment for {type} has been cleaned.\n", DateTime.Now.ToString("dddd, yyyy/MM/dd - HH:mm:ss EST"), impinjType);
            }
            if (System.IO.File.Exists(buildPath + impinjType + "/examples/cap/app.upgx"))
            {
                System.IO.File.Delete(buildPath + impinjType + "/examples/cap/app.upgx");
            }
        }

        private void CopyDirectory(string sourceDir, string destinationDir, bool recursive)
        {
            var dir = new DirectoryInfo(sourceDir);

            if (!dir.Exists)
                throw new DirectoryNotFoundException($"Source directory not found: {dir.FullName}");

            DirectoryInfo[] dirs = dir.GetDirectories();

            Directory.CreateDirectory(destinationDir);

            foreach (FileInfo file in dir.GetFiles())
            {
                string targetFilePath = Path.Combine(destinationDir, file.Name);
                file.CopyTo(targetFilePath);
            }

            if (recursive)
            {
                foreach (DirectoryInfo subDir in dirs)
                {
                    string newDestinationDir = Path.Combine(destinationDir, subDir.Name);
                    CopyDirectory(subDir.FullName, newDestinationDir, true);
                }
            }
        }

        private string Exec(string command, string WorkingDirectory)
        {
            var proc = new Process
            {
                StartInfo = new ProcessStartInfo
                {
                    WorkingDirectory = WorkingDirectory,
                    FileName = "/bin/bash",
                    Arguments = command,
                    UseShellExecute = false,
                    RedirectStandardOutput = true,
                    CreateNoWindow = true
                }
            };

            proc.Start();
            proc.WaitForExit();

            return proc.StandardOutput.ReadToEnd();
        }
    }
}