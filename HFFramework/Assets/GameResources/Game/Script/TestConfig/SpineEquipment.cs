using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Text;
using System.IO;
using System;
using HFFramework;

namespace Config
{ 
    [System.Serializable]
    public class SpineEquipment
    { 
        /// <summary>
        /// spine装备唯一id
        /// <summary>
        public string spineID;
        /// <summary>
        /// 装备Assetbundle名字
        /// <summary>
        public string equipmentAssetbundleName;
        /// <summary>
        /// 装备AtlasAsset名字
        /// <summary>
        public string equipmentAtlasAssetName;
        /// <summary>
        /// AtlasAsset装备图的名字
        /// <summary>
        public string equipmentImageName;
        /// <summary>
        /// 默认皮肤名字
        /// <summary>
        public string defaultSkinName;
        /// <summary>
        /// 装备部位枚举名字
        /// <summary>
        public string spineEquipmentTypeName;
    }

    [System.Serializable]
    public class ConfigSpineEquipment
    { 
        public static string[] split = new string[] { "," };
        public static string[] splitArray = new string[] { ";", "[", "]" };

        private static ConfigSpineEquipment instance;
        public static ConfigSpineEquipment Instance
        { 
            get 
            { 
                if (instance==null) 
                { 
                     instance = new ConfigSpineEquipment ();
                } 
                return instance;
            } 
        } 

        public Dictionary<string , SpineEquipment> dic = new Dictionary<string , SpineEquipment>();

        public List<SpineEquipment> list = new List<SpineEquipment>();

        public SpineEquipment Get(string id)
        {
            SpineEquipment temp;
            dic.TryGetValue(id, out temp);
            return temp;
        }

        public void StartAnalysis()
        {
            AssetBundlePackage package = HAResourceManager.Instance.LoadAssetBundleFromFile("Config");
            TextAsset textAsset = package.LoadAssetWithCache<TextAsset>("SpineEquipment");
            StringReader reader = new StringReader(textAsset.text);
            string notes = reader.ReadLine();
            string names = reader.ReadLine();
            string types = reader.ReadLine();
            while (true)
            {
                string row = reader.ReadLine();
                if (string.IsNullOrEmpty(row))
                {
                    break;
                }
                string[] strs = row.Split(split, StringSplitOptions.None);
                if (strs.Length > 0)
                {
                    SpineEquipment config = new SpineEquipment();
                    config.spineID = strs[0];
                    config.equipmentAssetbundleName = strs[1];
                    config.equipmentAtlasAssetName = strs[2];
                    config.equipmentImageName = strs[3];
                    config.defaultSkinName = strs[4];
                    config.spineEquipmentTypeName = strs[5];
                    dic.Add(config.spineID, config );
                    list.Add(config);
               }
           }
           notes = null;
           names = null;
           types = null;
        }
    }
}
