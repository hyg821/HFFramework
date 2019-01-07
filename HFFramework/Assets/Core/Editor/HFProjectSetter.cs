using UnityEngine;
using UnityEditor;
using System.Collections.Generic;
using System.IO;
using System;

namespace HFFramework
{
    public class HFProjectSetter
    {
        /// <summary>
        /// 资源打包
        /// </summary>
        [MenuItem("游戏辅助工具/构建项目初始化设置(只需要运行第一次)")]
        static void ProjectInit()
        {
            PlayerSettings.companyName = "hyg";
            PlayerSettings.productName = "HFFramework";
            string identifier = "com" + "." + PlayerSettings.companyName + "." + PlayerSettings.productName;
            PlayerSettings.SetApplicationIdentifier(BuildTargetGroup.Standalone, identifier);
            PlayerSettings.SetApplicationIdentifier(BuildTargetGroup.Android, identifier) ;
            PlayerSettings.SetApplicationIdentifier(BuildTargetGroup.iOS, identifier);
            PlayerSettings.bundleVersion = "1.0.0";

            //模式 3d  
            EditorSettings.defaultBehaviorMode = EditorBehaviorMode.Mode3D;

            //序列化模式 2进制
            EditorSettings.serializationMode = SerializationMode.ForceBinary;

            //老精灵图集模式 并且在打包的时候才 build图集
            EditorSettings.spritePackerMode = SpritePackerMode.BuildTimeOnly;

            //可见meta 文件
            EditorSettings.externalVersionControl = "Visible Meta Files";

            //左右横向显示
            PlayerSettings.allowedAutorotateToLandscapeLeft = true;
            PlayerSettings.allowedAutorotateToLandscapeRight = true;

            //安卓 ARMv7 包体减小 
            PlayerSettings.Android.targetDevice = AndroidTargetDevice.ARMv7;

            //.net 4.6 代码运行
            PlayerSettings.scriptingRuntimeVersion = ScriptingRuntimeVersion.Latest;

            //安卓 mono运行
            PlayerSettings.SetScriptingBackend(BuildTargetGroup.Android, ScriptingImplementation.Mono2x);
            //iOS IL2CPP 运行
            PlayerSettings.SetScriptingBackend(BuildTargetGroup.iOS, ScriptingImplementation.IL2CPP);

            //关闭剥离引擎代码
            PlayerSettings.stripEngineCode = false;

            AssetDatabase.Refresh();
            Debug.Log("设置完成");
        }
    }
}
