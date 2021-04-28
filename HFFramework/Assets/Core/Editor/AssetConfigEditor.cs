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
                string path = Application.dataPath.Substring(0, Application.dataPath.LastIndexOf("/Assets")) +"/"+ AssetDatabase.GetAssetPath(info);
                path = path.Substring(0, path.LastIndexOf("/"));
                info.RefreshSetting();
                AssetDatabase.Refresh();
            }
        }
    }
}

