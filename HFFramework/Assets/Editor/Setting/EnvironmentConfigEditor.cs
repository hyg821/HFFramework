using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

namespace HFFramework.Editor
{
    public class EnvironmentConfigEditor : EditorWindow
    {
        private UnityEditor.Editor editor;

        [MenuItem("项目设置/运行时框架设置",false,1)]
        public static void ShowObjectWindow()
        {
            var window = EditorWindow.GetWindow<EnvironmentConfigEditor>(true, "EnvironmentConfig", true);
            // 直接根据ScriptableObject构造一个Editor
            window.editor = UnityEditor.Editor.CreateEditor(AssetDatabase.LoadAssetAtPath<EnvironmentConfig>(GameConst.EnvironmentConfigPath));
        }

        private void OnGUI()
        {
            // 直接调用Inspector的绘制显示
            this.editor.OnInspectorGUI();
        }
    }
}


