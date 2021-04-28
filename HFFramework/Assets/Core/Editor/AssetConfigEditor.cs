using UnityEngine;
using UnityEditor;
using System.Collections.Generic;
using UnityEditor.Experimental.SceneManagement;
using UnityEditor.SceneManagement;

namespace HFFramework.Editor
{
    [CustomEditor(typeof(AssetConfig))]
    public class AssetConfigEditor : UnityEditor.Editor
    {
        public override void OnInspectorGUI()
        {
            DrawDefaultInspector();

            AssetConfig info = target as AssetConfig;

            if (GUILayout.Button("设置文件夹AssetBundleName"))
            {
                info.RefreshSetting();
                AssetDatabase.Refresh();
            }

            if (GUILayout.Button("创建图集"))
            {
                info.RefreshAtlas();
                AssetDatabase.Refresh();
            }
        }
    }
}

