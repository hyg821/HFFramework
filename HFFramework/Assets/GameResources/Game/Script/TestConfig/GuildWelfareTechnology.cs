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
    public class GuildWelfareTechnology
    { 
        /// <summary>
        /// 科技id
        /// <summary>
        public int technologyId;
        /// <summary>
        /// 科技种类
        /// <summary>
        public int technologyType;
        /// <summary>
        /// 科技等级
        /// <summary>
        public int technologyLv;
        /// <summary>
        /// 科技数值
        /// <summary>
        public float technologyNum;
        /// <summary>
        /// 消耗贡献
        /// <summary>
        public int costContribution;
    }

    [System.Serializable]
    public class ConfigGuildWelfareTechnology
    { 
        public static string[] split = new string[] { "," };
        public static string[] splitArray = new string[] { ";", "[", "]" };

        private static ConfigGuildWelfareTechnology instance;
        public static ConfigGuildWelfareTechnology Instance
        { 
            get 
            { 
                if (instance==null) 
                { 
                     instance = new ConfigGuildWelfareTechnology ();
                } 
                return instance;
            } 
        } 

        public Dictionary<int , GuildWelfareTechnology> dic = new Dictionary<int , GuildWelfareTechnology>();

        public List<GuildWelfareTechnology> list = new List<GuildWelfareTechnology>();

        public GuildWelfareTechnology Get(int id)
        {
            GuildWelfareTechnology temp;
            dic.TryGetValue(id, out temp);
            return temp;
        }

        public void StartAnalysis()
        {
            AssetBundlePackage package = HAResourceManager.Instance.LoadAssetBundleFromFile("Config");
            TextAsset textAsset = package.LoadAssetWithCache<TextAsset>("GuildWelfareTechnology");
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
                    GuildWelfareTechnology config = new GuildWelfareTechnology();
                    int.TryParse(strs[0], out config.technologyId);
                    int.TryParse(strs[1], out config.technologyType);
                    int.TryParse(strs[2], out config.technologyLv);
                    float.TryParse(strs[3], out config.technologyNum);
                    int.TryParse(strs[4], out config.costContribution);
                    dic.Add(config.technologyId, config );
                    list.Add(config);
               }
           }
           notes = null;
           names = null;
           types = null;
        }
    }
}
