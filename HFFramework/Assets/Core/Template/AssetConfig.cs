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

        public string folderPath
        {
            get
            {
                string path = AssetDatabase.GetAssetPath(this);
                return path.Substring(0, path.LastIndexOf('/'));
            }
        }

        /// <summary>
        /// 刷新所有 同层 的资源 bundle name
        /// </summary>
        public void RefreshSetting()
        {
            string [] guids = AssetDatabase.FindAssets(null, new string[] { folderPath });
            foreach (var guid in guids)
            {
                string assetPath = AssetDatabase.GUIDToAssetPath(guid);
                if (!assetPath.EndsWith(".cs")&& !assetPath.EndsWith("AssetConfig.asset"))
                {
                    AssetImporter assetImporter = AssetImporter.GetAtPath(assetPath);
                    string bundleName = assetbundleName;
                    assetImporter.assetBundleName = bundleName;
                    EditorUtility.SetDirty(assetImporter);
                }
            }

            AssetDatabase.SaveAssets();
            AssetDatabase.Refresh();
        }

        public void RefreshAtlas()
        {
            string[] guids = AssetDatabase.FindAssets("t:spriteatlas", new string[] { folderPath });
            SpriteAtlas atlas = null;
            foreach (var guid in guids)
            {
                string assetPath = AssetDatabase.GUIDToAssetPath(guid);
                atlas = AssetDatabase.LoadAssetAtPath<SpriteAtlas>(assetPath);
                if (atlas != null)
                {
                    break;
                }
            }

            if (atlas == null&&!string.IsNullOrEmpty(atlasName))
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
                    maxTextureSize = 2048,
                    format = TextureImporterFormat.Automatic,
                    crunchedCompression = true,
                    textureCompression = TextureImporterCompression.Compressed,
                    compressionQuality = 50,
                };
                atlas.SetPlatformSettings(platformSetting);
                AssetDatabase.CreateAsset(atlas, folderPath + "/" + atlasName+ ".spriteatlas");
            }

            if (atlas!=null)
            {
                UnityEngine.Object obj = AssetDatabase.LoadAssetAtPath<UnityEngine.Object>(folderPath);
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