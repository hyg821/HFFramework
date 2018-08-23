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
    public class Cardlvgrowcost
    { 
        /// <summary>
        /// 卡牌等级
        /// <summary>
        public int cardLv;
        /// <summary>
        /// 消耗道具
        /// <summary>
        public string costItem;
        /// <summary>
        /// 消耗金币
        /// <summary>
        public string costGold;
    }

    [System.Serializable]
    public class ConfigCardlvgrowcost
    { 
        public static string[] split = new string[] { "," };
        public static string[] splitArray = new string[] { ";", "[", "]" };

        private static ConfigCardlvgrowcost instance;
        public static ConfigCardlvgrowcost Instance
        { 
            get 
            { 
                if (instance==null) 
                { 
                     instance = new ConfigCardlvgrowcost ();
                } 
                return instance;
            } 
        } 

        public Dictionary<int , Cardlvgrowcost> dic = new Dictionary<int , Cardlvgrowcost>();

        public List<Cardlvgrowcost> list = new List<Cardlvgrowcost>();

        public Cardlvgrowcost Get(int id)
        {
            Cardlvgrowcost temp;
            dic.TryGetValue(id, out temp);
            return temp;
        }

        public void StartAnalysis()
        {
            AssetBundlePackage package = HAResourceManager.Instance.LoadAssetBundleFromFile("Config");
            TextAsset textAsset = package.LoadAssetWithCache<TextAsset>("Cardlvgrowcost");
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
                    Cardlvgrowcost config = new Cardlvgrowcost();
                    int.TryParse(strs[0], out config.cardLv);
                    config.costItem = strs[1];
                    config.costGold = strs[2];
                    dic.Add(config.cardLv, config );
                    list.Add(config);
               }
           }
           notes = null;
           names = null;
           types = null;
        }
    }
}
