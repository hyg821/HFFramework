using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

namespace HFFramework.Editor
{
    public class BuildConfigWindow : EditorWindow
    {
        private UnityEditor.Editor editor;

        [MenuItem("构建/构建项目", false, 1)]
        public static void ShowObjectWindow()
        {
            var window = EditorWindow.GetWindow<BuildConfigWindow>(true, "BuildConfigWindow", true);
            // 直接根据ScriptableObject构造一个Editor
            window.editor = UnityEditor.Editor.CreateEditor(AssetDatabase.LoadAssetAtPath<BuildConfig>(GameConst.BuildConfigPath));
        }

        private void OnGUI()
        {
            // 直接调用Inspector的绘制显示
            this.editor.OnInspectorGUI();
        }
    }
}



