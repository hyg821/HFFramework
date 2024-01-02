using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

namespace HFFramework.Editor
{
    public class AssetConfigInfo
    {
        public string path;
        public AssetConfig config;

        public AssetConfigInfo(string path, AssetConfig config)
        {
            this.path = path;
            this.config = config;
        }
    }

    public class AssetBundleWindow : EditorWindow
    {
        [MenuItem("资源/总览窗口",false,0)]
        public static void ShowWindow()
        {
            AssetBundleWindow window = GetWindow<AssetBundleWindow>();
            window.Show();
        }

        public List<AssetConfigInfo> configList = new List<AssetConfigInfo>();

        private void OnEnable()
        {
            configList.Clear();
            string[] guids = AssetDatabase.FindAssets("t:AssetConfig");
            for (int i = 0; i < guids.Length; i++)
            {
                string guid = guids[i];
                string configPath = AssetDatabase.GUIDToAssetPath(guid);
                AssetConfig assetConfig = AssetDatabase.LoadAssetAtPath(configPath, typeof(AssetConfig)) as AssetConfig;
                configList.Add(new AssetConfigInfo(configPath, assetConfig));
            }
        }

        private void OnGUI()
        {
            EditorGUILayout.BeginVertical();

            for (int i = 0; i < configList.Count; i++)
            {
                AssetConfigInfo configInfo = configList[i];
                EditorGUILayout.ObjectField(configInfo.config.assetbundleName, configInfo.config, typeof(AssetConfig),true);
                if (Application.isPlaying&&AssetManager.Instance!=null)
                {
                    AssetPackage ap = AssetManager.Instance.GetAssetBundle(configInfo.config.assetbundleName);
                    int refCount = 0;
                    if (ap!=null)
                    {
                        refCount = ap.refCount;
                    }

                    EditorGUILayout.LabelField("RefCount : " + refCount);

                    EditorGUILayout.Space();
                }
            }

            EditorGUILayout.EndVertical();
        }
    }
}