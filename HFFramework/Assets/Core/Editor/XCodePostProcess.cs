#if UNITY_IOS
using UnityEditor;
using UnityEditor.Build;
using UnityEditor.Build.Reporting;
using UnityEditor.iOS.Xcode;
using UnityEngine;
 
public class XCodePostProcess : IPostprocessBuildWithReport
{
    public int callbackOrder => 100;
 
    public void OnPostprocessBuild(BuildReport report)
    {
        Debug.Log("开始后处理Xcode工程");
        var pathToBuiltProject = report.summary.outputPath;
        var target = report.summary.platform;
        Debug.LogFormat("Postprocessing build at \"{0}\" for target {1}", pathToBuiltProject, target);
        if (target != BuildTarget.iOS)
            return;
 
 
        PBXProject proj = new PBXProject();
        string pbxFilename = pathToBuiltProject + "/Unity-iPhone.xcodeproj/project.pbxproj";
        proj.ReadFromFile(pbxFilename);
 
        string targetName = PBXProject.GetUnityTargetName();
        string guid = proj.TargetGuidByName(targetName);
 
        proj.SetBuildProperty(guid, "USYM_UPLOAD_AUTH_TOKEN", "FakeToken");

        proj.SetBuildProperty(guid, "ENABLE_BITCODE", "NO");
        proj.AddBuildProperty(guid, "OTHER_LDFLAGS", "-ObjC");
        proj.AddFrameworkToProject(guid, "libresolv.9.tbd", false);

        proj.WriteToFile(pbxFilename);

        Debug.Log("后处理Xcode工程结束");
    }


    /*
    public static void OnPostProcessBuild(BuildTarget target, string pathToBuiltProject)
    {
        var projPath = pathToBuiltProject + "/Unity-iPhone.xcodeproj/project.pbxproj";
        var proj = new PBXProject();
        proj.ReadFromFile(projPath);
        var targetGUID = proj.TargetGuidByName("Unity-iPhone");
        proj.SetBuildProperty(targetGUID, "USYM_UPLOAD_AUTH_TOKEN", "FakeToken");
        proj.SetBuildProperty(targetGUID, "ENABLE_BITCODE", "NO");
        proj.AddBuildProperty(targetGUID, "OTHER_LDFLAGS", "-ObjC");
        proj.AddFrameworkToProject(targetGUID, "libresolv.9.tbd", false);
        //proj.AddFrameworkToProject(targetGUID, "WebKit.framework", false);


        proj.WriteToFile(projPath);
    }
    */
}
#endif