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
    public class Composite
    { 
        /// <summary>
        /// 配方id
        /// <summary>
        public int formulaId;
        /// <summary>
        /// 合成id
        /// <summary>
        public int compositeId;
        /// <summary>
        /// 合成类型
        /// <summary>
        public int compositeType;
        /// <summary>
        /// 所需道具1id
        /// <summary>
        public int item1Id;
        /// <summary>
        /// 所需道具1数量
        /// <summary>
        public int item1Num;
        /// <summary>
        /// 所需道具2id
        /// <summary>
        public int item2Id;
        /// <summary>
        /// 所需道具2数量
        /// <summary>
        public int item2Num;
        /// <summary>
        /// 所需道具3id
        /// <summary>
        public int item3Id;
        /// <summary>
        /// 所需道具3数量
        /// <summary>
        public int item3Num;
    }

    [System.Serializable]
    public class ConfigComposite
    { 
        public static string[] split = new string[] { "," };
        public static string[] splitArray = new string[] { ";", "[", "]" };

        private static ConfigComposite instance;
        public static ConfigComposite Instance
        { 
            get 
            { 
                if (instance==null) 
                { 
                     instance = new ConfigComposite ();
                } 
                return instance;
            } 
        } 

        public Dictionary<int , Composite> dic = new Dictionary<int , Composite>();

        public List<Composite> list = new List<Composite>();

        public Composite Get(int id)
        {
            Composite temp;
            dic.TryGetValue(id, out temp);
            return temp;
        }

        public void StartAnalysis()
        {
            AssetBundlePackage package = HAResourceManager.Instance.LoadAssetBundleFromFile("Config");
            TextAsset textAsset = package.LoadAssetWithCache<TextAsset>("Composite");
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
                    Composite config = new Composite();
                    int.TryParse(strs[0], out config.formulaId);
                    int.TryParse(strs[1], out config.compositeId);
                    int.TryParse(strs[2], out config.compositeType);
                    int.TryParse(strs[3], out config.item1Id);
                    int.TryParse(strs[4], out config.item1Num);
                    int.TryParse(strs[5], out config.item2Id);
                    int.TryParse(strs[6], out config.item2Num);
                    int.TryParse(strs[7], out config.item3Id);
                    int.TryParse(strs[8], out config.item3Num);
                    dic.Add(config.formulaId, config );
                    list.Add(config);
               }
           }
           notes = null;
           names = null;
           types = null;
        }
    }
}
