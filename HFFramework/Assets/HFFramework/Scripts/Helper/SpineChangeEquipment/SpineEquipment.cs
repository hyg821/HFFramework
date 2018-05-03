using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    public class EquipmentItem
    {
        /// <summary>
        ///  某一件装备的id
        /// </summary>
        public string ID { get; set; }
        /// <summary>
        /// 装备的assetbundle包名
        /// </summary>
        public string equipmentAssetbundleName { get; set; }
        /// <summary>
        /// 装备的Atlas图集名字
        /// </summary>
        public string equipmentAtlasAssetName { get; set; }
        /// <summary>
        /// 在Atlas图集的具体一个装备图片的名字
        /// </summary>
        public string equipmentImageName { get; set; }
        /// <summary>
        /// 插槽名字
        /// </summary>
        public string slotName { get; set; }
        /// <summary>
        /// 插槽Placeholder的名字
        /// </summary>
        public string slotPlaceholderName { get; set; }
        /// <summary>
        /// 默认皮肤名字
        /// </summary>
        public string defaultSkinName { get; set; }
        /// <summary>
        /// 装备类型（部位）
        /// </summary>
        public string spineEquipmentTypeName { get; set; }
        /// <summary>
        /// 网格还是图片
        /// </summary>
        public int attachmentType { get; set; }
    }

    public class SpineEquipment
    {
        /// <summary>
        /// 
        /// </summary>
        public List<EquipmentItem> Equipment { get; set; }
    }
}


