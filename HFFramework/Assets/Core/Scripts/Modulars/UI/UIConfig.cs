using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    public class UIConfigRoot
    {
        public List<UIConfig> List { get; set; }
    }

    public class UIConfig
    {
        /// <summary>
        /// 
        /// </summary>
        public string Type { get; set; }
        /// <summary>
        /// 
        /// </summary>
        public int LayerIndex { get; set; }
        /// <summary>
        /// 
        /// </summary>
        public string AssetbundleName { get; set; }
        /// <summary>
        /// 
        /// </summary>
        public string AssetName { get; set; }
        /// <summary>
        /// 
        /// </summary>
        public int ShowAnimation { get; set; }
        /// <summary>
        /// 
        /// </summary>
        public int HideAnimation { get; set; }
        /// <summary>
        /// 
        /// </summary>
        public string ClassName { get; set; }
    }
}
