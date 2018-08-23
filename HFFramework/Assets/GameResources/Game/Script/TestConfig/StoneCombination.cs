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
    public class StoneCombination
    { 
        /// <summary>
        /// 组合id
        /// <summary>
        public int combinationId;
        /// <summary>
        /// 组合分类
        /// <summary>
        public int combinationType;
        /// <summary>
        /// 所需魂石id
        /// <summary>
        public string stoneId;
        /// <summary>
        /// 效果id
        /// <summary>
        public int effectId;
        /// <summary>
        /// 效果数值
        /// <summary>
        public int effectNum;
        /// <summary>
        /// 技能id
        /// <summary>
        public int skillId;
        /// <summary>
        /// 是否显示
        /// <summary>
        public bool isShow;
        /// <summary>
        /// 组合名称
        /// <summary>
        public string combinationName;
        /// <summary>
        /// 效果描述
        /// <summary>
        public string combinationDescription;
    }

    [System.Serializable]
    public class ConfigStoneCombination
    { 
        public static string[] split = new string[] { "," };
        public static string[] splitArray = new string[] { ";", "[", "]" };

        private static ConfigStoneCombination instance;
        public static ConfigStoneCombination Instance
        { 
            get 
            { 
                if (instance==null) 
                { 
                     instance = new ConfigStoneCombination ();
                } 
                return instance;
            } 
        } 

        public Dictionary<int , StoneCombination> dic = new Dictionary<int , StoneCombination>();

        public List<StoneCombination> list = new List<StoneCombination>();

        public StoneCombination Get(int id)
        {
            StoneCombination temp;
            dic.TryGetValue(id, out temp);
            return temp;
        }

        public void StartAnalysis()
        {
            AssetBundlePackage package = HAResourceManager.Instance.LoadAssetBundleFromFile("Config");
            TextAsset textAsset = package.LoadAssetWithCache<TextAsset>("StoneCombination");
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
                    StoneCombination config = new StoneCombination();
                    int.TryParse(strs[0], out config.combinationId);
                    int.TryParse(strs[1], out config.combinationType);
                    config.stoneId = strs[2];
                    int.TryParse(strs[3], out config.effectId);
                    int.TryParse(strs[4], out config.effectNum);
                    int.TryParse(strs[5], out config.skillId);
                    bool.TryParse(strs[6], out config.isShow);
                    config.combinationName = strs[7];
                    config.combinationDescription = strs[8];
                    dic.Add(config.combinationId, config );
                    list.Add(config);
               }
           }
           notes = null;
           names = null;
           types = null;
        }
    }
}
