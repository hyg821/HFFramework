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
    public class HangingCheckPoint
    { 
        /// <summary>
        /// 关卡id
        /// <summary>
        public int id;
        /// <summary>
        /// 关卡区域
        /// <summary>
        public int range;
        /// <summary>
        /// 关卡类型
        /// <summary>
        public int type;
        /// <summary>
        /// 关卡名称
        /// <summary>
        public string name;
        /// <summary>
        /// 关卡描述
        /// <summary>
        public string description;
        /// <summary>
        /// 战力限制
        /// <summary>
        public int powerLimit;
        /// <summary>
        /// 等级限制
        /// <summary>
        public int LvLimit;
        /// <summary>
        /// Boss关卡限制
        /// <summary>
        public int bossLimit;
        /// <summary>
        /// 下一关卡
        /// <summary>
        public int nextcheckPoint;
        /// <summary>
        /// 挂机时间
        /// <summary>
        public int hangingTime;
        /// <summary>
        /// 产出金币
        /// <summary>
        public int gold;
        /// <summary>
        /// 产出经验
        /// <summary>
        public int exp;
        /// <summary>
        /// 产出汽油
        /// <summary>
        public int gasoline;
        /// <summary>
        /// 掉落列表
        /// <summary>
        public string dropList;
        /// <summary>
        /// 单次掉落个数
        /// <summary>
        public int dropNum;
        /// <summary>
        /// 掉落cd
        /// <summary>
        public int dropCd;
        /// <summary>
        /// 怪物id
        /// <summary>
        public string monsterId;
        /// <summary>
        /// 掉落展示
        /// <summary>
        public string dropShow;
        /// <summary>
        /// Boss掉落道具
        /// <summary>
        public string bossdropItem;
        /// <summary>
        /// Boss掉落经验
        /// <summary>
        public int bossdropExp;
        /// <summary>
        /// Boss掉落金币
        /// <summary>
        public int bossdropGold;
        /// <summary>
        /// Boss掉落汽油
        /// <summary>
        public int bossdropgasoline;
        /// <summary>
        /// Bossid
        /// <summary>
        public string bossId;
    }

    [System.Serializable]
    public class ConfigHangingCheckPoint
    { 
        public static string[] split = new string[] { "," };
        public static string[] splitArray = new string[] { ";", "[", "]" };

        private static ConfigHangingCheckPoint instance;
        public static ConfigHangingCheckPoint Instance
        { 
            get 
            { 
                if (instance==null) 
                { 
                     instance = new ConfigHangingCheckPoint ();
                } 
                return instance;
            } 
        } 

        public Dictionary<int , HangingCheckPoint> dic = new Dictionary<int , HangingCheckPoint>();

        public List<HangingCheckPoint> list = new List<HangingCheckPoint>();

        public HangingCheckPoint Get(int id)
        {
            HangingCheckPoint temp;
            dic.TryGetValue(id, out temp);
            return temp;
        }

        public void StartAnalysis()
        {
            AssetBundlePackage package = HAResourceManager.Instance.LoadAssetBundleFromFile("Config");
            TextAsset textAsset = package.LoadAssetWithCache<TextAsset>("HangingCheckPoint");
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
                    HangingCheckPoint config = new HangingCheckPoint();
                    int.TryParse(strs[0], out config.id);
                    int.TryParse(strs[1], out config.range);
                    int.TryParse(strs[2], out config.type);
                    config.name = strs[3];
                    config.description = strs[4];
                    int.TryParse(strs[5], out config.powerLimit);
                    int.TryParse(strs[6], out config.LvLimit);
                    int.TryParse(strs[7], out config.bossLimit);
                    int.TryParse(strs[8], out config.nextcheckPoint);
                    int.TryParse(strs[9], out config.hangingTime);
                    int.TryParse(strs[10], out config.gold);
                    int.TryParse(strs[11], out config.exp);
                    int.TryParse(strs[12], out config.gasoline);
                    config.dropList = strs[13];
                    int.TryParse(strs[14], out config.dropNum);
                    int.TryParse(strs[15], out config.dropCd);
                    config.monsterId = strs[16];
                    config.dropShow = strs[17];
                    config.bossdropItem = strs[18];
                    int.TryParse(strs[19], out config.bossdropExp);
                    int.TryParse(strs[20], out config.bossdropGold);
                    int.TryParse(strs[21], out config.bossdropgasoline);
                    config.bossId = strs[22];
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
