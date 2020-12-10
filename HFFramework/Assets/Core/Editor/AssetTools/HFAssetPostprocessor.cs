using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using HFFramework;
using HFFramework.Editor;
using LitJson;
using System.IO;
using UnityEditor.Presets;

namespace UnityEditor
{
    /// <summary>
    ///  不能使用命名空间  如果使用系统无法反射到导入对象
    /// </summary>
    public class HFAssetPostprocessor : AssetPostprocessor
    {
        /// <summary>
        /// 在导入任意数量的资产完成后（当资产进度条已到达结束时）调用此方法。
        /// </summary>
        static void OnPostprocessAllAssets(string[] importedAssets, string[] deletedAssets, string[] movedAssets, string[] movedFromAssetPaths)
        {
            for (int i = 0; i < importedAssets.Length; i++)
            {
                SetAssetbundleName(importedAssets[i]);
            }

            for (int i = 0; i < movedAssets.Length; i++)
            {
                SetAssetbundleName(movedAssets[i]);
            }

            for (int i = 0; i < movedFromAssetPaths.Length; i++)
            {
                SetAssetbundleName(movedFromAssetPaths[i]);
            }
        }

        /// <summary>
        /// 提供源材料。
        /// </summary>
        void OnAssignMaterialModel(Material material, Renderer renderer)
        {

        }

        /// <summary>
        /// 当AnimationClip完成导入时，将调用此函数。
        /// </summary>
        void OnPostprocessAnimation(GameObject gameObject, AnimationClip animationClip)
        {

        }

        /// <summary>
        /// 处理程序在将资产分配给不同的资产包时调用。
        /// </summary>
        void OnPostprocessAssetbundleNameChanged(string str, string str1, string str2)
        {

        }

        /// <summary>
        /// 将此函数添加到子类以在音频剪辑完成导入时获取通知。
        /// </summary>
        void OnPostprocessAudio(AudioClip audioClip)
        {

        }

        /// <summary>
        /// 将此函数添加到子类以在立方体贴图纹理完成导入之前获取通知。
        /// </summary>
        void OnPostprocessCubemap(Cubemap texture)
        {

        }

        /// <summary>
        /// 完成自定义属性的动画曲线导入时，将调用此函数。
        /// </summary>
        void OnPostprocessGameObjectWithAnimatedUserProperties(GameObject go, EditorCurveBinding[] bindings)
        {

        }

        /// <summary>
        /// 为每个在导入文件中附加了至少一个用户属性的GameObject调用。
        /// </summary>
        void OnPostprocessGameObjectWithUserProperties(GameObject go, string[] propNames, System.Object[] values)
        {

        }

        /// <summary>
        /// 将此函数添加到子类以在Material资产完成导入时获取通知。
        /// </summary>
        void OnPostprocessMaterial(Material material)
        {

        }

        /// <summary>
        /// 当新的转换层次结构完成导入时，将调用此函数。
        /// </summary>
        void OnPostprocessMeshHierarchy(GameObject gameObject)
        {

        }

        /// <summary>
        /// 将此函数添加到子类以在模型完成导入时获取通知。
        /// </summary>
        void OnPostprocessModel(GameObject gameObject)
        {

        }

        /// <summary>
        /// 将此函数添加到子类以在SpeedTree资产完成导入时获取通知。
        /// </summary>
        void OnPostprocessSpeedTree(GameObject gameObject)
        {

        }

        /// <summary>
        /// 将此函数添加到子类以在精灵纹理完成导入时获取通知。
        /// </summary>
        void OnPostprocessSprites(Texture2D texture, Sprite[] sprites)
        {

        }

        /// <summary>
        /// 将此函数添加到子类以在纹理完成之前导入时获取通知。
        /// </summary>
        void OnPostprocessTexture(Texture2D texture)
        {

        }

        /// <summary>
        /// 将此函数添加到子类以在导入模型（.fbx，.mb文件等）的动画之前获取通知。
        /// </summary>
        void OnPreprocessAnimation()
        {
            //ModelImporter modelImporter = assetImporter as ModelImporter;
            //modelImporter.clipAnimations = modelImporter.defaultClipAnimations;
        }

        /// <summary>
        /// 将此函数添加到子类以在导入任何Asset之前获取通知。
        /// </summary>
        void OnPreprocessAsset()
        {
            // 确保我们在第一次导入资源时应用预设。
            if (assetImporter.importSettingsMissing)
            {
                // 获取当前导入的资源文件夹。
                var path = Path.GetDirectoryName(assetPath);
                while (!string.IsNullOrEmpty(path))
                {
                    // 查找此文件夹中的所有预设资源。
                    var presetGuids = AssetDatabase.FindAssets("t:Preset", new[] { path });
                    foreach (var presetGuid in presetGuids)
                    {
                        // 确保不是在子文件夹中测试预设。
                        string presetPath = AssetDatabase.GUIDToAssetPath(presetGuid);
                        if (Path.GetDirectoryName(presetPath) == path)
                        {
                            //加载预设，然后尝试将其应用于导入器。
                            var preset = AssetDatabase.LoadAssetAtPath<Preset>(presetPath);
                            if (preset.ApplyTo(assetImporter))
                                return;
                        }
                    }

                    //在父文件夹中重试。
                    path = Path.GetDirectoryName(path);
                }
            }
        }

        /// <summary>
        /// 将此函数添加到子类以在导入音频剪辑之前获取通知。
        /// </summary>
        void OnPreprocessAudio()
        {

        }

        /// <summary>
        /// 将此函数添加到子类以在导入模型（.fbx，.mb文件等）之前获取通知。
        /// </summary>
        void OnPreprocessModel()
        {

        }

        /// <summary>
        /// 将此函数添加到子类以在导入SpeedTree资产（.spm文件）之前获取通知。
        /// </summary>
        void OnPreprocessSpeedTree()
        {

        }

        /// <summary>
        /// 将此函数添加到子类以在运行纹理导入器之前获取通知。
        /// </summary>
        void OnPreprocessTexture()
        {

        }

        public static void SetAssetbundleName(string assetPath)
        {
            if (assetPath.Contains("GameResources") && assetPath.Contains(GameConst.AssetFolderIde))
            {
                Debug.Log("导入或者移动 文件到 [A] 文件夹 "+ assetPath);
                AssetImporter assetImporter = AssetImporter.GetAtPath(assetPath);
                int index = assetPath.LastIndexOf("/");
                string configPath = assetPath.Substring(0, index);
                AssetConfig config = AssetDatabase.LoadAssetAtPath<AssetConfig>(configPath + "/" + "AssetConfig");
                AssetBundleTools.SetAssetbundleByAssetImporter(assetImporter, config);
            }
        }
    }
}
