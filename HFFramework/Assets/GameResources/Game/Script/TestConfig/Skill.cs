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
    public class Skill
    { 
        /// <summary>
        /// 技能ID
        /// <summary>
        public int skillId;
        /// <summary>
        /// 技能类型
        /// <summary>
        public int skillType;
        /// <summary>
        /// 技能组
        /// <summary>
        public int skillGroup;
        /// <summary>
        /// 最大等级
        /// <summary>
        public int maxLv;
        /// <summary>
        /// 技能范围
        /// <summary>
        public int skillRange;
        /// <summary>
        /// 作用目标
        /// <summary>
        public int skillTarget;
        /// <summary>
        /// 人数
        /// <summary>
        public int num;
        /// <summary>
        /// 冷却时间
        /// <summary>
        public int cd;
        /// <summary>
        /// 消耗怒气
        /// <summary>
        public int costAnger;
        /// <summary>
        /// 消耗血量百分比
        /// <summary>
        public int costHpPer;
        /// <summary>
        /// buff效果ID
        /// <summary>
        public int buffId;
        /// <summary>
        /// 技能icon
        /// <summary>
        public string skillIcon;
        /// <summary>
        /// icon路径
        /// <summary>
        public string iconPath;
        /// <summary>
        /// 技能描述
        /// <summary>
        public string description;
        /// <summary>
        /// 技能名称
        /// <summary>
        public string name;
        /// <summary>
        /// 技能战力
        /// <summary>
        public int skillPower;
    }

    [System.Serializable]
    public class ConfigSkill
    { 
        public static string[] split = new string[] { "," };
        public static string[] splitArray = new string[] { ";", "[", "]" };

        private static ConfigSkill instance;
        public static ConfigSkill Instance
        { 
            get 
            { 
                if (instance==null) 
                { 
                     instance = new ConfigSkill ();
                } 
                return instance;
            } 
        } 

        public Dictionary<int , Skill> dic = new Dictionary<int , Skill>();

        public List<Skill> list = new List<Skill>();

        public Skill Get(int id)
        {
            Skill temp;
            dic.TryGetValue(id, out temp);
            return temp;
        }

        public void StartAnalysis()
        {
            AssetBundlePackage package = HAResourceManager.Instance.LoadAssetBundleFromFile("Config");
            TextAsset textAsset = package.LoadAssetWithCache<TextAsset>("Skill");
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
                    Skill config = new Skill();
                    int.TryParse(strs[0], out config.skillId);
                    int.TryParse(strs[1], out config.skillType);
                    int.TryParse(strs[2], out config.skillGroup);
                    int.TryParse(strs[3], out config.maxLv);
                    int.TryParse(strs[4], out config.skillRange);
                    int.TryParse(strs[5], out config.skillTarget);
                    int.TryParse(strs[6], out config.num);
                    int.TryParse(strs[7], out config.cd);
                    int.TryParse(strs[8], out config.costAnger);
                    int.TryParse(strs[9], out config.costHpPer);
                    int.TryParse(strs[10], out config.buffId);
                    config.skillIcon = strs[11];
                    config.iconPath = strs[12];
                    config.description = strs[13];
                    config.name = strs[14];
                    int.TryParse(strs[15], out config.skillPower);
                    dic.Add(config.skillId, config );
                    list.Add(config);
               }
           }
           notes = null;
           names = null;
           types = null;
        }
    }
}
