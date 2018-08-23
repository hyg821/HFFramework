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
    public class GuildShop
    { 
        /// <summary>
        /// 商店id
        /// <summary>
        public int shopId;
        /// <summary>
        /// 显示个数
        /// <summary>
        public int showNum;
        /// <summary>
        /// 商店自动刷新时间
        /// <summary>
        public int shoprefreshTime;
        /// <summary>
        /// 刷新消耗贡献
        /// <summary>
        public string costContribution;
    }

    [System.Serializable]
    public class ConfigGuildShop
    { 
        public static string[] split = new string[] { "," };
        public static string[] splitArray = new string[] { ";", "[", "]" };

        private static ConfigGuildShop instance;
        public static ConfigGuildShop Instance
        { 
            get 
            { 
                if (instance==null) 
                { 
                     instance = new ConfigGuildShop ();
                } 
                return instance;
            } 
        } 

        public Dictionary<int , GuildShop> dic = new Dictionary<int , GuildShop>();

        public List<GuildShop> list = new List<GuildShop>();

        public GuildShop Get(int id)
        {
            GuildShop temp;
            dic.TryGetValue(id, out temp);
            return temp;
        }

        public void StartAnalysis()
        {
            AssetBundlePackage package = HAResourceManager.Instance.LoadAssetBundleFromFile("Config");
            TextAsset textAsset = package.LoadAssetWithCache<TextAsset>("GuildShop");
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
                    GuildShop config = new GuildShop();
                    int.TryParse(strs[0], out config.shopId);
                    int.TryParse(strs[1], out config.showNum);
                    int.TryParse(strs[2], out config.shoprefreshTime);
                    config.costContribution = strs[3];
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
