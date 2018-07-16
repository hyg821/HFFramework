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
    public class GuildLevelup
    { 
        /// <summary>
        /// id
        /// <summary>
        public int id;
        /// <summary>
        /// 类型
        /// <summary>
        public int type;
        /// <summary>
        /// 种类
        /// <summary>
        public int kind;
        /// <summary>
        /// 等级
        /// <summary>
        public int Lv;
        /// <summary>
        /// 下一等级
        /// <summary>
        public int nextLv;
        /// <summary>
        /// 效果1
        /// <summary>
        public int effect1Type;
        /// <summary>
        /// 效果1数值
        /// <summary>
        public int effect1Num;
        /// <summary>
        /// 效果2
        /// <summary>
        public int effect2Type;
        /// <summary>
        /// 效果2数值
        /// <summary>
        public int effect2Num;
        /// <summary>
        /// 解锁建筑
        /// <summary>
        public string unlockBuilding;
        /// <summary>
        /// 解锁科技
        /// <summary>
        public string unlockTechnology;
        /// <summary>
        /// 消耗公会资金
        /// <summary>
        public int costguildGold;
    }

    [System.Serializable]
    public class HFConfigGuildLevelup
    { 

        public static string[] split = new string[] { "," };
        public static string[] splitArray = new string[] { ";", "[", "]" };

        private static HFConfigGuildLevelup instance;
        public static HFConfigGuildLevelup Instance
        { 
            get 
            { 
                if (instance==null) 
                { 
                     instance = new HFConfigGuildLevelup ();
                } 
                return instance;
            } 
        } 

        public Dictionary<int , GuildLevelup> dic = new Dictionary<int , GuildLevelup>();

        public List<GuildLevelup> list = new List<GuildLevelup>();

        public GuildLevelup Get(int id)
        {
            GuildLevelup temp;
            dic.TryGetValue(id, out temp);
            return temp;
        }

        public void StartAnalysis()
        {
            AssetBundlePackage package = HAResourceManager.Instance.LoadAssetBundleFromFile("Config");
            TextAsset textAsset = package.LoadAssetWithCache<TextAsset>("GuildLevelup");
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
                    GuildLevelup config = new GuildLevelup();
                    int.TryParse(strs[0], out config.id);
                    int.TryParse(strs[1], out config.type);
                    int.TryParse(strs[2], out config.kind);
                    int.TryParse(strs[3], out config.Lv);
                    int.TryParse(strs[4], out config.nextLv);
                    int.TryParse(strs[5], out config.effect1Type);
                    int.TryParse(strs[6], out config.effect1Num);
                    int.TryParse(strs[7], out config.effect2Type);
                    int.TryParse(strs[8], out config.effect2Num);
                    config.unlockBuilding = strs[9];
                    config.unlockTechnology = strs[10];
                    int.TryParse(strs[11], out config.costguildGold);
                    dic.Add(config.id, config );
                    list.Add(config);
               }
           }
        }
    }
}
