using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

namespace HFFramework.Editor
{
    public class ProjectSetting
    {
        [MenuItem("项目设置/初始框架设置（新配置项目的时候运行一次）", false, 0)]
        static void Setting()
        {
            PlayerSettings.companyName = "hyg";
            PlayerSettings.productName = "HFFramework";
            string identifier = "com" + "." + PlayerSettings.companyName + "." + PlayerSettings.productName;
            PlayerSettings.SetApplicationIdentifier(BuildTargetGroup.Standalone, identifier);
            PlayerSettings.SetApplicationIdentifier(BuildTargetGroup.Android, identifier);
            PlayerSettings.SetApplicationIdentifier(BuildTargetGroup.iOS, identifier);
            PlayerSettings.bundleVersion = "1.0.0";

            PlayerSettings.SetScriptingDefineSymbolsForGroup(BuildTargetGroup.Standalone, GameConst.DebugDefineSymbol + ";" + GameConst.ILRuntimeDefineSymbol);

            //垂直同步关闭
            QualitySettings.vSyncCount = 0;

            //模式 3d  
            EditorSettings.defaultBehaviorMode = EditorBehaviorMode.Mode3D;

            //序列化模式
            EditorSettings.serializationMode = SerializationMode.ForceText;

            EditorSettings.spritePackerMode = SpritePackerMode.AlwaysOnAtlas;

            //可见meta 文件
            EditorSettings.externalVersionControl = "Visible Meta Files";

            //不允许横竖旋转 并且不允许上下旋转
            PlayerSettings.allowedAutorotateToPortrait = false;
            PlayerSettings.allowedAutorotateToPortraitUpsideDown = false;
            //左右横向显示
            PlayerSettings.allowedAutorotateToLandscapeLeft = false;
            PlayerSettings.allowedAutorotateToLandscapeRight = false;

            PlayerSettings.defaultInterfaceOrientation = UIOrientation.LandscapeLeft;

            //.net 4.6 代码运行
            PlayerSettings.SetApiCompatibilityLevel(BuildTargetGroup.Android, ApiCompatibilityLevel.NET_4_6);
            PlayerSettings.SetApiCompatibilityLevel(BuildTargetGroup.iOS, ApiCompatibilityLevel.NET_4_6);
            PlayerSettings.SetApiCompatibilityLevel(BuildTargetGroup.Standalone, ApiCompatibilityLevel.NET_4_6);

            //安卓 ARMv7 包体减小  64位 必须使用cpp 打包
            PlayerSettings.Android.targetArchitectures = AndroidArchitecture.ARMv7;// | AndroidArchitecture.ARM64;
            //安卓 mono运行
            PlayerSettings.SetScriptingBackend(BuildTargetGroup.Android, ScriptingImplementation.Mono2x);

            //iOS IL2CPP 运行
            PlayerSettings.SetScriptingBackend(BuildTargetGroup.iOS, ScriptingImplementation.IL2CPP);

            PlayerSettings.allowUnsafeCode = true;

            //关闭剥离引擎代码
            PlayerSettings.stripEngineCode = false;

            //设置编辑器 高级debug
            //EditorPrefs.SetBool("DeveloperMode", false);

            AssetDatabase.Refresh();
            Debug.Log("设置完成");
        }
    }    
}

