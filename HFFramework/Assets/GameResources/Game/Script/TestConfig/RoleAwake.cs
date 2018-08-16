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
    public class RoleAwake
    { 
        /// <summary>
        /// id
        /// <summary>
        public string id;
        /// <summary>
        /// 生命加成
        /// <summary>
        public int hpAdd;
        /// <summary>
        /// 攻击加成
        /// <summary>
        public int atkAdd;
        /// <summary>
        /// 防御加成
        /// <summary>
        public int defAdd;
        /// <summary>
        /// 技能点数
        /// <summary>
        public int skillPoint;
        /// <summary>
        /// 孔数
        /// <summary>
        public int holeNum;
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
    public class HFConfigRoleAwake
    { 

        public static string[] split = new string[] { "," };
        public static string[] splitArray = new string[] { ";", "[", "]" };

        private static HFConfigRoleAwake instance;
        public static HFConfigRoleAwake Instance
        { 
            get 
            { 
                if (instance==null) 
                { 
                     instance = new HFConfigRoleAwake ();
                } 
                return instance;
            } 
        } 

        public Dictionary<string , RoleAwake> dic = new Dictionary<string , RoleAwake>();

        public List<RoleAwake> list = new List<RoleAwake>();

        public RoleAwake Get(string id)
        {
            RoleAwake temp;
            dic.TryGetValue(id, out temp);
            return temp;
        }

        public void StartAnalysis()
        {
            AssetBundlePackage package = HAResourceManager.Instance.LoadAssetBundleFromFile("Config");
            TextAsset textAsset = package.LoadAssetWithCache<TextAsset>("RoleAwake");
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
                    RoleAwake config = new RoleAwake();
                    config.id = strs[0];
                    int.TryParse(strs[1], out config.hpAdd);
                    int.TryParse(strs[2], out config.atkAdd);
                    int.TryParse(strs[3], out config.defAdd);
                    int.TryParse(strs[4], out config.skillPoint);
                    int.TryParse(strs[5], out config.holeNum);
                    config.costItem = strs[6];
                    config.costGold = strs[7];
                    dic.Add(config.id, config );
                    list.Add(config);
               }
           }
           notes = null;
           names = null;
           types = null;
        }
    }
}
