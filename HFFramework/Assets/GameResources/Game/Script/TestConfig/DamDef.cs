using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Text;
using System.IO;
using System;
using HFFramework;

namespace HFConfig
{ 
    public class DamDef
    { 
        /// <summary>
        /// 等级区间
        /// <summary>
        public string lvRange;
        /// <summary>
        /// 防御系数1
        /// <summary>
        public float defNum1;
        /// <summary>
        /// 防御系数2
        /// <summary>
        public float defNum2;
    }

    public class HFConfigDamDef
    { 

        public static string[] split = new string[] { "," };
        public static string[] splitArray = new string[] { ";", "[", "]" };

        private static HFConfigDamDef instance;
        public static HFConfigDamDef Instance
        { 
            get 
            { 
                if (instance==null) 
                { 
                     instance = new HFConfigDamDef ();
                } 
                return instance;
            } 
        } 

        public Dictionary<string , DamDef> dic = new Dictionary<string , DamDef>();

        public List<DamDef> list = new List<DamDef>();

        public DamDef Get(string id)
        {
            DamDef temp;
            dic.TryGetValue(id, out temp);
            return temp;
        }

        public void StartAnalysis()
        {
            AssetBundlePackage package = HAResourceManager.Instance.LoadAssetBundleFromFile("Config");
            TextAsset textAsset = package.LoadAssetWithCache<TextAsset>("DamDef");
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
                    DamDef config = new DamDef();
                    config.lvRange = strs[0];
                    float.TryParse(strs[1], out config.defNum1);
                    float.TryParse(strs[2], out config.defNum2);
                    dic.Add(config.lvRange, config );
                    list.Add(config);
               }
           }
        }
    }
}
