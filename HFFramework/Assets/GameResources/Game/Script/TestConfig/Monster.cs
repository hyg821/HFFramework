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
    public class Monster
    { 
        /// <summary>
        /// 怪物id
        /// <summary>
        public int monsterId;
        /// <summary>
        /// 怪物icon
        /// <summary>
        public string monsterIcon;
        /// <summary>
        /// 怪物icon路径
        /// <summary>
        public string monstericonPath;
        /// <summary>
        /// 怪物包名
        /// <summary>
        public string monsterAvatarBundlerName;
        /// <summary>
        /// 怪物预设名称
        /// <summary>
        public string monsterAvatarPrefabName;
        /// <summary>
        /// 怪物名称
        /// <summary>
        public string monsterName;
        /// <summary>
        /// 怪物类型
        /// <summary>
        public int monsterType;
        /// <summary>
        /// 攻击速度
        /// <summary>
        public float attackSpeed;
        /// <summary>
        /// 攻击距离
        /// <summary>
        public int attackDistance;
        /// <summary>
        /// 当前等级
        /// <summary>
        public int Lv;
        /// <summary>
        /// 怒气上限
        /// <summary>
        public float maxAnger;
        /// <summary>
        /// 攻击怒气增加
        /// <summary>
        public float attackAnger;
        /// <summary>
        /// 被攻击怒气增加
        /// <summary>
        public float beAttactedAnger;
        /// <summary>
        /// 普通攻击
        /// <summary>
        public int commonAttack;
        /// <summary>
        /// 主动技能
        /// <summary>
        public int activeSkill;
        /// <summary>
        /// 被动技能1
        /// <summary>
        public int passiveSkill1;
        /// <summary>
        /// 被动技能2
        /// <summary>
        public int passiveSkill2;
        /// <summary>
        /// 被动技能3
        /// <summary>
        public int passiveSkill3;
        /// <summary>
        /// 生命值
        /// <summary>
        public int hp;
        /// <summary>
        /// 攻击力
        /// <summary>
        public int atk;
        /// <summary>
        /// 防御力
        /// <summary>
        public int def;
        /// <summary>
        /// 暴击率
        /// <summary>
        public int critPercent;
        /// <summary>
        /// 暴击伤害
        /// <summary>
        public int critdamPercent;
        /// <summary>
        /// 格挡率
        /// <summary>
        public int blockPercent;
    }

    [System.Serializable]
    public class HFConfigMonster
    { 

        public static string[] split = new string[] { "," };
        public static string[] splitArray = new string[] { ";", "[", "]" };

        private static HFConfigMonster instance;
        public static HFConfigMonster Instance
        { 
            get 
            { 
                if (instance==null) 
                { 
                     instance = new HFConfigMonster ();
                } 
                return instance;
            } 
        } 

        public Dictionary<int , Monster> dic = new Dictionary<int , Monster>();

        public List<Monster> list = new List<Monster>();

        public Monster Get(int id)
        {
            Monster temp;
            dic.TryGetValue(id, out temp);
            return temp;
        }

        public void StartAnalysis()
        {
            AssetBundlePackage package = HAResourceManager.Instance.LoadAssetBundleFromFile("Config");
            TextAsset textAsset = package.LoadAssetWithCache<TextAsset>("Monster");
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
                    Monster config = new Monster();
                    int.TryParse(strs[0], out config.monsterId);
                    config.monsterIcon = strs[1];
                    config.monstericonPath = strs[2];
                    config.monsterAvatarBundlerName = strs[3];
                    config.monsterAvatarPrefabName = strs[4];
                    config.monsterName = strs[5];
                    int.TryParse(strs[6], out config.monsterType);
                    float.TryParse(strs[7], out config.attackSpeed);
                    int.TryParse(strs[8], out config.attackDistance);
                    int.TryParse(strs[9], out config.Lv);
                    float.TryParse(strs[10], out config.maxAnger);
                    float.TryParse(strs[11], out config.attackAnger);
                    float.TryParse(strs[12], out config.beAttactedAnger);
                    int.TryParse(strs[13], out config.commonAttack);
                    int.TryParse(strs[14], out config.activeSkill);
                    int.TryParse(strs[15], out config.passiveSkill1);
                    int.TryParse(strs[16], out config.passiveSkill2);
                    int.TryParse(strs[17], out config.passiveSkill3);
                    int.TryParse(strs[18], out config.hp);
                    int.TryParse(strs[19], out config.atk);
                    int.TryParse(strs[20], out config.def);
                    int.TryParse(strs[21], out config.critPercent);
                    int.TryParse(strs[22], out config.critdamPercent);
                    int.TryParse(strs[23], out config.blockPercent);
                    dic.Add(config.monsterId, config );
                    list.Add(config);
               }
           }
           notes = null;
           names = null;
           types = null;
        }
    }
}
