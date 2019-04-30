#if UNITY_EDITOR
namespace HFFramework
{
    using Sirenix.OdinInspector.Editor;
    using UnityEngine;
    using Sirenix.Utilities.Editor;
    using Sirenix.Serialization;
    using UnityEditor;
    using Sirenix.Utilities;
    using Sirenix.OdinInspector;
    using System.IO;

    public class HFProjectWindow : OdinEditorWindow
    {
        [MenuItem("游戏辅助工具/项目设置")]
        private static void OpenWindow()
        {
            var window = GetWindow<HFProjectWindow>();
            window.titleContent.text = "项目设置";
            window.position = GUIHelper.GetEditorWindowRect().AlignCenter(1440, 900);
        }

        [Button("项目初始化 仅需要运行一次")]
        public void ProjectInit()
        {
            PlayerSettings.companyName = "hyg";
            PlayerSettings.productName = "HFFramework";
            string identifier = "com" + "." + PlayerSettings.companyName + "." + PlayerSettings.productName;
            PlayerSettings.SetApplicationIdentifier(BuildTargetGroup.Standalone, identifier);
            PlayerSettings.SetApplicationIdentifier(BuildTargetGroup.Android, identifier);
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

            //不允许横竖旋转 并且不允许上下旋转
            PlayerSettings.allowedAutorotateToPortrait = false;
            PlayerSettings.allowedAutorotateToPortraitUpsideDown = false;
            //左右横向显示
            PlayerSettings.allowedAutorotateToLandscapeLeft = true;
            PlayerSettings.allowedAutorotateToLandscapeRight = true;

            //安卓 ARMv7 包体减小 
            PlayerSettings.Android.targetArchitectures = AndroidArchitecture.ARMv7;

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
#endif