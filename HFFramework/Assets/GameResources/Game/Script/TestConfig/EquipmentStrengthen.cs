using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Text;
using System.IO;
using System;
using HFFramework;

namespace HFConfig
{ 
    [System.Serializable]
    public class EquipmentStrengthen
    { 
        /// <summary>
        /// 强化等级
        /// <summary>
        public int strengthenLv;
        /// <summary>
        /// 强化消耗材料
        /// <summary>
        public string strengthencostItem;
        /// <summary>
        /// 强化消耗金币
        /// <summary>
        public string strengthencostGold;
        /// <summary>
        /// 强化效果
        /// <summary>
        public int strengthenEffect;
    }

    [System.Serializable]
    public class HFConfigEquipmentStrengthen
    { 

        public static string[] split = new string[] { "," };
        public static string[] splitArray = new string[] { ";", "[", "]" };

        private static HFConfigEquipmentStrengthen instance;
        public static HFConfigEquipmentStrengthen Instance
        { 
            get 
            { 
                if (instance==null) 
                { 
                     instance = new HFConfigEquipmentStrengthen ();
                } 
                return instance;
            } 
        } 

        public Dictionary<int , EquipmentStrengthen> dic = new Dictionary<int , EquipmentStrengthen>();

        public List<EquipmentStrengthen> list = new List<EquipmentStrengthen>();

        public EquipmentStrengthen Get(int id)
        {
            EquipmentStrengthen temp;
            dic.TryGetValue(id, out temp);
            return temp;
        }

        public void StartAnalysis()
        {
            AssetBundlePackage package = HAResourceManager.Instance.LoadAssetBundleFromFile("Config");
            TextAsset textAsset = package.LoadAssetWithCache<TextAsset>("EquipmentStrengthen");
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
                    EquipmentStrengthen config = new EquipmentStrengthen();
                    int.TryParse(strs[0], out config.strengthenLv);
                    config.strengthencostItem = strs[1];
                    config.strengthencostGold = strs[2];
                    int.TryParse(strs[3], out config.strengthenEffect);
                    dic.Add(config.strengthenLv, config );
                    list.Add(config);
               }
           }
           notes = null;
           names = null;
           types = null;
        }
    }
}
