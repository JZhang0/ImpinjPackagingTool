// Addins that provide additional functionality
#addin Cake.FileHelpers
#addin nuget:?package=Saxon-HE

// Namespace references
using System.Text.RegularExpressions;
using System.Xml.Linq;
using System.Xml.Schema;
using Saxon.Api;

// Global variables
var target = Argument("Target", "Default");

var solutionFile = "LLRPDefinitions.sln";

var outputDirectory = Argument("OutputDirectory", ".");
var configuration = Argument("Configuration", "Release");

var publishFeed = "https://impinj.myget.org/F/octal/api/v2/package";
var apiKey = Argument("ApiKey", string.Empty);

Task("ValidateDefFiles")
    .Does(() => 
{
    var xmlFiles = new[] {@"Core\llrp-1x0-def.xml", 
                          @"Impinj.com\Impinjdef.xml", 
                          @"Impinj.com\ImpinjInternalDef.xml"};
    string xsdFile = "llrpdef.xsd";
    
    foreach(string xmlFile in xmlFiles)
    {
        XDocument xdoc = XDocument.Load(xmlFile);
        var schemas = new XmlSchemaSet();
        schemas.Add(xdoc.Root.Name.NamespaceName, xsdFile);
        // The null means throw an exception instead of use a
        // callback for validation errors.
        xdoc.Validate(schemas, null);
    }
});

Task("MakeImpinjXsd")
    .IsDependentOn("ValidateDefFiles")
    .Does(() =>
{
    var xmlFiles = new[] {@"Impinj.com\ImpinjInternalDef.xml", 
                          @"Impinj.com\Impinjdef.xml"};
    string xsltFile = @"Impinj.com\xslt\gen-impinj-xsd.xslt";

    foreach (string xmlFile in xmlFiles)
    {
        string xmlFileName = System.IO.Path.GetFileName(xmlFile);
        string xsdFileName = Regex.Replace(xmlFileName, @"def\.xml", ".xsd", RegexOptions.IgnoreCase);
        
        System.IO.Path.ChangeExtension(xmlFileName, ".xsd");
        string outputDirectory = "generated";
        if (!DirectoryExists(outputDirectory))
        {
            CreateDirectory(outputDirectory);
        }
        string xsdFileOutput = System.IO.Path.Combine(outputDirectory, xsdFileName);
        var processor = new Processor();
        XdmNode input = processor.NewDocumentBuilder().Build(new Uri(System.IO.Path.GetFullPath(xmlFile)));
        XsltTransformer transformer =
            processor.NewXsltCompiler().Compile(new Uri(System.IO.Path.GetFullPath(xsltFile))).Load();

        transformer.InitialContextNode = input;
        var serializer = processor.NewSerializer();
        serializer.SetOutputFile(xsdFileOutput);
        transformer.Run(serializer);
    }
});

Task("ValidateXsdFiles")
    .IsDependentOn("MakeImpinjXsd")
    .Does(() =>
{
    string[] xsdFiles = { @"generated\Impinj.xsd", 
                          @"generated\ImpinjInternal.xsd", 
                          @"Core\llrp-1x0.xsd" };

    foreach (string xsdFile in xsdFiles)
    {
        // The file is considered well formed if it can be loaded
        try
        {
            XDocument.Load(xsdFile);
        }
        catch(Exception)
        {
            Error("Failed to validate xsd file {0}", xsdFile);
            throw;
        }
    }
});

Task("Package")
    .IsDependentOn("ValidateXsdFiles")
    .Does(() => 
{
    DeleteFiles("*.nupkg");

    DotNetCorePack(solutionFile, new DotNetCorePackSettings()
    {
        Configuration = configuration,
        OutputDirectory = outputDirectory
    });
});

Task("Publish")
    .IsDependentOn("Package")
    .Does(() => 
{
    if (String.IsNullOrWhiteSpace(apiKey))
    {
        throw new ArgumentException("ApiKey", "You must provide an api key to publish nuget packages.");
    }

    var nugetPackages = GetFiles("*.nupkg");
    NuGetPush(nugetPackages, new NuGetPushSettings {
        Source = publishFeed,
        ApiKey = apiKey
    });
});

Task("XmlVersionBump")
    .Does(() => 
{
    var xmlVersions = Argument("XmlVersions", string.Empty);
    var versionNumbers = xmlVersions.Split(' ');
    if (versionNumbers.Length != 2) throw new ArgumentException("old and new versions required ex: -ScriptArgs '-XmlVersions=\"1.28 1.29\"'", "XmlVersions");

    var modifiedFiles = ReplaceRegexInFiles("**/*.xml", string.Format("xml/{0}", versionNumbers[0]), string.Format("xml/{0}", versionNumbers[1]));

    Information("Updated xml version from {0} to {1}:", versionNumbers[0], versionNumbers[1]);

    foreach(var modifiedFile in modifiedFiles)
    {
        Information(modifiedFile);
    }
});

Task("Default")
    .IsDependentOn("Package");

RunTarget(target);
