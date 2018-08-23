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
    public class Shop
    { 
        /// <summary>
        /// 商城id
        /// <summary>
        public int shopId;
        /// <summary>
        /// 显示个数
        /// <summary>
        public int num;
        /// <summary>
        /// 商城时间
        /// <summary>
        public int time;
        /// <summary>
        /// 商城自动刷新时间
        /// <summary>
        public int shoprefreshTime;
        /// <summary>
        /// 按钮自动刷新时间
        /// <summary>
        public int buttonrefreshTime;
        /// <summary>
        /// 刷新钻石消耗
        /// <summary>
        public string refreshCost;
    }

    [System.Serializable]
    public class ConfigShop
    { 
        public static string[] split = new string[] { "," };
        public static string[] splitArray = new string[] { ";", "[", "]" };

        private static ConfigShop instance;
        public static ConfigShop Instance
        { 
            get 
            { 
                if (instance==null) 
                { 
                     instance = new ConfigShop ();
                } 
                return instance;
            } 
        } 

        public Dictionary<int , Shop> dic = new Dictionary<int , Shop>();

        public List<Shop> list = new List<Shop>();

        public Shop Get(int id)
        {
            Shop temp;
            dic.TryGetValue(id, out temp);
            return temp;
        }

        public void StartAnalysis()
        {
            AssetBundlePackage package = HAResourceManager.Instance.LoadAssetBundleFromFile("Config");
            TextAsset textAsset = package.LoadAssetWithCache<TextAsset>("Shop");
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
                    Shop config = new Shop();
                    int.TryParse(strs[0], out config.shopId);
                    int.TryParse(strs[1], out config.num);
                    int.TryParse(strs[2], out config.time);
                    int.TryParse(strs[3], out config.shoprefreshTime);
                    int.TryParse(strs[4], out config.buttonrefreshTime);
                    config.refreshCost = strs[5];
                    dic.Add(config.shopId, config );
                    list.Add(config);
               }
           }
           notes = null;
           names = null;
           types = null;
        }
    }
}
