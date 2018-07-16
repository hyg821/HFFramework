using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Text;
using System.IO;
using System;
using HFFramework;

namespace HFConfig
{ 
    public class RoleBreak
    { 
        /// <summary>
        /// id
        /// <summary>
        public string id;
        /// <summary>
        /// 生命成长
        /// <summary>
        public float hpGrow;
        /// <summary>
        /// 攻击成长
        /// <summary>
        public float atkGrow;
        /// <summary>
        /// 防御成长
        /// <summary>
        public float defGrow;
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
        /// 等级上限
        /// <summary>
        public int maxLv;
        /// <summary>
        /// 技能等级上限
        /// <summary>
        public int maxSkillLv;
        /// <summary>
        /// 消耗道具
        /// <summary>
        public string costItem;
        /// <summary>
        /// 消耗金币
        /// <summary>
        public string costGold;
        /// <summary>
        /// 重生消耗道具
        /// <summary>
        public string reborncostItem;
    }

    public class HFConfigRoleBreak
    { 

        public static string[] split = new string[] { "," };
        public static string[] splitArray = new string[] { ";", "[", "]" };

        private static HFConfigRoleBreak instance;
        public static HFConfigRoleBreak Instance
        { 
            get 
            { 
                if (instance==null) 
                { 
                     instance = new HFConfigRoleBreak ();
                } 
                return instance;
            } 
        } 

        public Dictionary<string , RoleBreak> dic = new Dictionary<string , RoleBreak>();

        public List<RoleBreak> list = new List<RoleBreak>();

        public RoleBreak Get(string id)
        {
            RoleBreak temp;
            dic.TryGetValue(id, out temp);
            return temp;
        }

        public void StartAnalysis()
        {
            AssetBundlePackage package = HAResourceManager.Instance.LoadAssetBundleFromFile("Config");
            TextAsset textAsset = package.LoadAssetWithCache<TextAsset>("RoleBreak");
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
                    RoleBreak config = new RoleBreak();
                    config.id = strs[0];
                    float.TryParse(strs[1], out config.hpGrow);
                    float.TryParse(strs[2], out config.atkGrow);
                    float.TryParse(strs[3], out config.defGrow);
                    int.TryParse(strs[4], out config.hpAdd);
                    int.TryParse(strs[5], out config.atkAdd);
                    int.TryParse(strs[6], out config.defAdd);
                    int.TryParse(strs[7], out config.maxLv);
                    int.TryParse(strs[8], out config.maxSkillLv);
                    config.costItem = strs[9];
                    config.costGold = strs[10];
                    config.reborncostItem = strs[11];
                    dic.Add(config.id, config );
                    list.Add(config);
               }
           }
        }
    }
}
