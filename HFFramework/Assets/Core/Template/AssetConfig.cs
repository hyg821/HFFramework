using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.U2D;

#if UNITY_EDITOR
using UnityEditor;
using UnityEditor.U2D;
#endif


namespace HFFramework
{
    /// <summary>
    /// ScriptableObject 必须放在单独的一个 文件里 否则会出现内容空白的情况
    /// </summary>
    public class AssetConfig : ScriptableObject
    {
        /// <summary>
        /// bundle 名字
        /// </summary>
        public string assetbundleName;

        /// <summary>
        /// 图集名字
        /// </summary>
        public string atlasName;

#if UNITY_EDITOR

        public string FolderPath
        {
            get
            {
                string path = AssetDatabase.GetAssetPath(this);
                return path.Substring(0, path.LastIndexOf('/'));
            }
        }

        public List<string> GetAllAssetInFolder()
        {
            List<string> result = new List<string>();

            string subPath = Application.dataPath.Substring(0, Application.dataPath.LastIndexOf("Assets"));
            string fullPath = subPath + FolderPath;

            DirectoryInfo dir = new DirectoryInfo(fullPath);
            foreach (var item in dir.GetFiles())
            {
                string temp = item.FullName.Replace("\\", "/");
                int index = temp.IndexOf("Assets");
                string str = temp.Substring(index, temp.Length - index);
                if (!str.EndsWith(".cs")&&!str.EndsWith(".meta"))
                {
                    result.Add(str);
                }
            }
            return result;
        }

        /// <summary>
        /// 刷新所有 同层 的资源 bundle name
        /// </summary>
        public void RefreshSetting()
        {
            //Debug.LogError("---------------------------------------------------");
            //D:/HFFramework/HFFramework/Assets
            //Assets/GameResources/Game/Prefab[A]/AssetConfig.asset
            foreach (var assetPath in GetAllAssetInFolder())
            {
                //Debug.LogError("assetPath " + assetPath);
                AssetImporter assetImporter = AssetImporter.GetAtPath(assetPath);
                string bundleName = string.Empty;
                if (assetPath.Contains("AssetConfig.asset"))
                {
                    bundleName = string.Empty;
                }
                else
                {
                    bundleName = assetbundleName;
                }
                assetImporter.assetBundleName = bundleName;
                assetImporter.SaveAndReimport();
                EditorUtility.SetDirty(assetImporter);
            }

            AssetDatabase.SaveAssets();
            AssetDatabase.Refresh();
        }

        public void RefreshAtlas()
        {
            if (string.IsNullOrEmpty(atlasName))
            {
                return;
            }

            SpriteAtlas atlas = null;
            foreach (var assetPath in GetAllAssetInFolder())
            {
                atlas = AssetDatabase.LoadAssetAtPath<SpriteAtlas>(assetPath);
                if (atlas != null)
                {
                    break;
                }
            }

            if (atlas == null)
            {
                atlas = new SpriteAtlas();
                // 设置参数 可根据项目具体情况进行设置
                SpriteAtlasPackingSettings packSetting = new SpriteAtlasPackingSettings()
                {
                    blockOffset = 1,
                    enableRotation = false,
                    enableTightPacking = false,
                    padding = 2,
                };
                atlas.SetPackingSettings(packSetting);

                SpriteAtlasTextureSettings textureSetting = new SpriteAtlasTextureSettings()
                {
                    readable = false,
                    generateMipMaps = false,
                    sRGB = true,
                    filterMode = FilterMode.Bilinear,
                };
                atlas.SetTextureSettings(textureSetting);

                TextureImporterPlatformSettings platformSetting = new TextureImporterPlatformSettings()
                {
                    maxTextureSize = 1024,
                    format = TextureImporterFormat.Automatic,
                    crunchedCompression = true,
                    textureCompression = TextureImporterCompression.Compressed,
                    compressionQuality = 50,
                };
                atlas.SetPlatformSettings(platformSetting);
                AssetDatabase.CreateAsset(atlas, FolderPath + "/" + atlasName + ".spriteatlas");
            }

            if (atlas != null)
            {
                UnityEngine.Object obj = AssetDatabase.LoadAssetAtPath<UnityEngine.Object>(FolderPath);
                atlas.Remove(atlas.GetPackables());
                atlas.Add(new[] { obj });
                EditorUtility.SetDirty(atlas);
                AssetDatabase.SaveAssets();
            }

            AssetDatabase.Refresh();
        }

#endif

    }
}