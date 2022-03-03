using System.IO;
using System.Text;
using System.Xml;
using UnityEditor.Android;

public class AddSurveyActivityManifest : IPostGenerateGradleAndroidProject
{

    public int callbackOrder { get { return 1; } }

    private string _manifestFilePath;

    public void OnPostGenerateGradleAndroidProject(string basePath)
    {
        var androidManifest = new AndroidManifest(GetManifestPath(basePath));

        androidManifest.SetMicrophonePermission();
        androidManifest.Save();
    }

    private string GetManifestPath(string basePath)
    {
        if (string.IsNullOrEmpty(_manifestFilePath))
        {
            var pathBuilder = new StringBuilder(basePath);
            pathBuilder.Append(Path.DirectorySeparatorChar).Append("src");
            pathBuilder.Append(Path.DirectorySeparatorChar).Append("main");
            pathBuilder.Append(Path.DirectorySeparatorChar).Append("AndroidManifest.xml");
            _manifestFilePath = pathBuilder.ToString();
        }

        return _manifestFilePath;
    }
}


internal class AndroidXmlDocument : XmlDocument
{
    public readonly string AndroidXmlNamespace = "http://schemas.android.com/apk/res/android";
    private string m_Path;
    protected XmlNamespaceManager nsMgr;

    public AndroidXmlDocument(string path)
    {
        m_Path = path;
        using (var reader = new XmlTextReader(m_Path))
        {
            reader.Read();
            Load(reader);
        }
        nsMgr = new XmlNamespaceManager(NameTable);
        nsMgr.AddNamespace("android", AndroidXmlNamespace);
    }

    public string Save()
    {
        return SaveAs(m_Path);
    }

    public string SaveAs(string path)
    {
        using (var writer = new XmlTextWriter(path, new UTF8Encoding(false)))
        {
            writer.Formatting = Formatting.Indented;
            Save(writer);
        }
        return path;
    }
}


internal class AndroidManifest : AndroidXmlDocument
{
    private readonly XmlElement ApplicationElement;

    public AndroidManifest(string path) : base(path)
    {
        ApplicationElement = SelectSingleNode("/manifest/application") as XmlElement;
    }

    internal void SetMicrophonePermission()
    {
        XmlElement activityEle = CreateElement("activity");
        activityEle.SetAttribute("name", AndroidXmlNamespace, "io.userwise.userwise_sdk.SurveyActivity");
        activityEle.SetAttribute("theme", AndroidXmlNamespace, "@android:style/Theme.NoTitleBar.Fullscreen");
        ApplicationElement.AppendChild(activityEle);
    }
}