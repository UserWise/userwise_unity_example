using UnityEngine;
using UnityEditor;
using UnityEditor.Callbacks;
using UnityEditor.iOS.Xcode;
using UnityEditor.iOS.Xcode.Extensions;
using System.IO;

public class UserWisePostBuildProcessor
{
    [PostProcessBuildAttribute(1)]
    public static void OnPostprocessBuild(BuildTarget buildTarget, string buildPath)
    {
        if (buildTarget == BuildTarget.iOS)
        {
            Debug.Log("UserWise: OnPostprocessBuild");
            UpdateProject(buildTarget, buildPath + "/Unity-iPhone.xcodeproj/project.pbxproj");
            UpdateProjectPlist(buildTarget, buildPath + "/Info.plist");
        }
    }

    private static void UpdateProject(BuildTarget buildTarget, string projectPath)
    {
        PBXProject project = new PBXProject();
        project.ReadFromString(File.ReadAllText(projectPath));

        string targetId = project.GetUnityFrameworkTargetGuid();

        string sdkPath = "Frameworks/Plugins/iOS/";
        string frameworkName = "UserWiseSDK.framework";

        string frameworkGuid = project.AddFile(sdkPath + "/" + frameworkName, frameworkName);
        PBXProjectExtensions.AddFileToEmbedFrameworks(project, targetId, frameworkGuid);

        // Required Other Linker Flags
        project.AddBuildProperty(targetId, "OTHER_LDFLAGS", "-ObjC");
        project.AddBuildProperty(targetId, "OTHER_LDFLAGS", "-fobjc-arc");

        project.AddFrameworkToProject(targetId, "Foundation.framework", false);
        project.AddFrameworkToProject(targetId, "AdSupport.framework", false);
        project.AddFrameworkToProject(targetId, "CoreTelephony.framework", false);
        project.AddFrameworkToProject(targetId, "UIKit.framework", false);
        project.AddFrameworkToProject(targetId, "Webkit.framework", false);

        File.WriteAllText(projectPath, project.WriteToString());
    }

    private static void UpdateProjectPlist(BuildTarget buildTarget, string plistPath)
    {
        PlistDocument plist = new PlistDocument();
        plist.ReadFromString(File.ReadAllText(plistPath));

        File.WriteAllText(plistPath, plist.WriteToString());
        File.WriteAllText(plistPath + ".new", plist.WriteToString());
    }
}
