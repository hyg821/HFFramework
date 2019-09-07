using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    public enum AssetbundleNameType
    {
        Default,
        Custom
    }

    /// <summary>
    /// ScriptableObject 必须放在单独的一个 文件里 否则会出现内容空白的情况
    /// </summary>
    public class AssetConfig : ScriptableObject
    {
        public AssetbundleNameType assetbundleNameType = AssetbundleNameType.Custom;
        public string assetbundleName;
    }
}