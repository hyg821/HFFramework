using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    public class AssetsBundleMD5
    {
        /// <summary>
        /// 
        /// </summary>
        public string key { get; set; }
        /// <summary>
        /// 
        /// </summary>
        public string value { get; set; }
    }

    public class MD5Diff
    {
        /// <summary>
        /// 
        /// </summary>
        public List<AssetsBundleMD5> AssetsBundleMD5List { get; set; }
    }

    public class AssetBundleConfig
    {
        /// <summary>
        /// Default 代表使用 默认MD5创建的assetbundleName 
        /// Custom 代表使用 自定义的assetbundleName
        /// </summary>
        public string assetbundleNameType { get; set; }
        /// <summary>
        /// 
        /// </summary>
        public string assetbundleName { get; set; }
    }

    public class HFAssetConfigRoot
    {
        /// <summary>
        /// 
        /// </summary>
        public AssetBundleConfig AssetBundleConfig { get; set; }
    }
}
