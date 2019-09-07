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
}
