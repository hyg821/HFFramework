using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;


namespace UnityEditor
{
    /// <summary>
    ///  不能使用命名空间  如果使用系统无法反射到导入对象
    /// </summary>
    public class HFTextureImporter : AssetPostprocessor
    {
        /// <summary>
        ///  图片导入之前的设置
        /// </summary>
        void OnPreprocessTexture()
        {

        }

        /// <summary>
        ///  图片导入时候的设置
        /// </summary>
        /// <param name="texture"></param>
        void OnPostprocessTexture(Texture2D texture)
        {

        }

        public void Demo(Texture2D texture)
        {
            string TextureExtension = "_[TA]";
            //可以通过 资源路径 是否包含 自定义的 字符串 比如 “_[A]” 之类的来判断一些东西
            if (assetPath.Contains(TextureExtension))
            {

            }
        }
    }
}