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

            //序列化模式 2进制
            EditorSettings.serializationMode = SerializationMode.ForceBinary;

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
            PlayerSettings.scriptingRuntimeVersion = ScriptingRuntimeVersion.Latest;

            //安卓 mono运行
            PlayerSettings.SetScriptingBackend(BuildTargetGroup.Android, ScriptingImplementation.IL2CPP);
            //iOS IL2CPP 运行
            PlayerSettings.SetScriptingBackend(BuildTargetGroup.iOS, ScriptingImplementation.IL2CPP);

            //安卓 ARMv7 包体减小 
            PlayerSettings.Android.targetArchitectures = AndroidArchitecture.ARMv7 | AndroidArchitecture.ARM64;

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

