#if UNITY_IOS

using UnityEngine;
using UnityEditor;
using UnityEditor.Callbacks;
using System.IO;

using UnityEditor.iOS.Xcode;

public class UserWisePostBuildProcessor
{

    [PostProcessBuildAttribute(1)]
    public static void OnPostprocessBuild(BuildTarget buildTarget, string buildPath)
    {
        if (buildTarget == BuildTarget.iOS)
        {
            string projectPath = PBXProject.GetPBXProjectPath(buildPath);

            PBXProject project = new PBXProject();
            project.ReadFromString(File.ReadAllText(projectPath));

            string targetId = project.GetUnityFrameworkTargetGuid();
            project.AddFrameworkToProject(targetId, "WebKit.framework", false);

            File.WriteAllText(projectPath, project.WriteToString());
        }
    }
}
#endif