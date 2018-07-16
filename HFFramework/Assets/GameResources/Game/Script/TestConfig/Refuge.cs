using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Text;
using System.IO;
using System;
using HFFramework;

namespace HFConfig
{ 
    public class Refuge
    { 
        /// <summary>
        /// 唯一id
        /// <summary>
        public string id;
        /// <summary>
        /// 建筑id
        /// <summary>
        public int buildID;
        /// <summary>
        /// 建筑等级
        /// <summary>
        public int buildLevel;
        /// <summary>
        /// 建筑名称
        /// <summary>
        public string buildName;
        /// <summary>
        /// 效果类型
        /// <summary>
        public int effectType;
        /// <summary>
        /// 效果数值
        /// <summary>
        public int effectValue;
        /// <summary>
        /// 入驻后效果
        /// <summary>
        public int cardInEffect;
        /// <summary>
        /// 升级条件类型
        /// <summary>
        public int levelUpType;
        /// <summary>
        /// 升级条件数值
        /// <summary>
        public int levelUpValue;
        /// <summary>
        /// 升级消耗道具
        /// <summary>
        public int levelCostID;
        /// <summary>
        /// 升级消耗数量
        /// <summary>
        public int levelUpCostCount;
    }

    public class HFConfigRefuge
    { 

        public static string[] split = new string[] { "," };
        public static string[] splitArray = new string[] { ";", "[", "]" };

        private static HFConfigRefuge instance;
        public static HFConfigRefuge Instance
        { 
            get 
            { 
                if (instance==null) 
                { 
                     instance = new HFConfigRefuge ();
                } 
                return instance;
            } 
        } 

        public Dictionary<string , Refuge> dic = new Dictionary<string , Refuge>();

        public List<Refuge> list = new List<Refuge>();

        public Refuge Get(string id)
        {
            Refuge temp;
            dic.TryGetValue(id, out temp);
            return temp;
        }

        public void StartAnalysis()
        {
            AssetBundlePackage package = HAResourceManager.Instance.LoadAssetBundleFromFile("Config");
            TextAsset textAsset = package.LoadAssetWithCache<TextAsset>("Refuge");
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
                    Refuge config = new Refuge();
                    config.id = strs[0];
                    int.TryParse(strs[1], out config.buildID);
                    int.TryParse(strs[2], out config.buildLevel);
                    config.buildName = strs[3];
                    int.TryParse(strs[4], out config.effectType);
                    int.TryParse(strs[5], out config.effectValue);
                    int.TryParse(strs[6], out config.cardInEffect);
                    int.TryParse(strs[7], out config.levelUpType);
                    int.TryParse(strs[8], out config.levelUpValue);
                    int.TryParse(strs[9], out config.levelCostID);
                    int.TryParse(strs[10], out config.levelUpCostCount);
                    dic.Add(config.id, config );
                    list.Add(config);
               }
           }
        }
    }
}
