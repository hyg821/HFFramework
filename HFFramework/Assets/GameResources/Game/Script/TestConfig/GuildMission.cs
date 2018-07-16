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
    public class GuildMission
    { 
        /// <summary>
        /// 任务id
        /// <summary>
        public int missionId;
        /// <summary>
        /// 任务品质
        /// <summary>
        public int missionQuality;
        /// <summary>
        /// 任务名称
        /// <summary>
        public string missionName;
        /// <summary>
        /// 需要人数
        /// <summary>
        public string needNum;
        /// <summary>
        /// 每人条件数
        /// <summary>
        public string conditionNum;
        /// <summary>
        /// 可选等级
        /// <summary>
        public string Lv;
        /// <summary>
        /// 可选星级
        /// <summary>
        public string starLv;
        /// <summary>
        /// 可选特性
        /// <summary>
        public string characteristic;
        /// <summary>
        /// 可选性别
        /// <summary>
        public string sex;
        /// <summary>
        /// 可选阵营
        /// <summary>
        public string camp;
        /// <summary>
        /// 任务奖励类型
        /// <summary>
        public string missionrewardType;
        /// <summary>
        /// 一星碎片池
        /// <summary>
        public string star1pool;
        /// <summary>
        /// 二星碎片池
        /// <summary>
        public string star2pool;
        /// <summary>
        /// 三星碎片池
        /// <summary>
        public string star3pool;
        /// <summary>
        /// 钻石个数
        /// <summary>
        public int diamondNum;
        /// <summary>
        /// 金币个数
        /// <summary>
        public int goldNum;
        /// <summary>
        /// 升级点数
        /// <summary>
        public int growuppointNum;
        /// <summary>
        /// 一星个数
        /// <summary>
        public int star1Num;
        /// <summary>
        /// 二星个数
        /// <summary>
        public int star2Num;
        /// <summary>
        /// 三星个数
        /// <summary>
        public int star3Num;
        /// <summary>
        /// 任务时长
        /// <summary>
        public int missionTime;
        /// <summary>
        /// 可加速时间
        /// <summary>
        public int speedupTime;
        /// <summary>
        /// 可加速次数
        /// <summary>
        public int speedupNum;
        /// <summary>
        /// 单次加速奖励
        /// <summary>
        public string speedupReward;
    }

    [System.Serializable]
    public class HFConfigGuildMission
    { 

        public static string[] split = new string[] { "," };
        public static string[] splitArray = new string[] { ";", "[", "]" };

        private static HFConfigGuildMission instance;
        public static HFConfigGuildMission Instance
        { 
            get 
            { 
                if (instance==null) 
                { 
                     instance = new HFConfigGuildMission ();
                } 
                return instance;
            } 
        } 

        public Dictionary<int , GuildMission> dic = new Dictionary<int , GuildMission>();

        public List<GuildMission> list = new List<GuildMission>();

        public GuildMission Get(int id)
        {
            GuildMission temp;
            dic.TryGetValue(id, out temp);
            return temp;
        }

        public void StartAnalysis()
        {
            AssetBundlePackage package = HAResourceManager.Instance.LoadAssetBundleFromFile("Config");
            TextAsset textAsset = package.LoadAssetWithCache<TextAsset>("GuildMission");
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
                    GuildMission config = new GuildMission();
                    int.TryParse(strs[0], out config.missionId);
                    int.TryParse(strs[1], out config.missionQuality);
                    config.missionName = strs[2];
                    config.needNum = strs[3];
                    config.conditionNum = strs[4];
                    config.Lv = strs[5];
                    config.starLv = strs[6];
                    config.characteristic = strs[7];
                    config.sex = strs[8];
                    config.camp = strs[9];
                    config.missionrewardType = strs[10];
                    config.star1pool = strs[11];
                    config.star2pool = strs[12];
                    config.star3pool = strs[13];
                    int.TryParse(strs[14], out config.diamondNum);
                    int.TryParse(strs[15], out config.goldNum);
                    int.TryParse(strs[16], out config.growuppointNum);
                    int.TryParse(strs[17], out config.star1Num);
                    int.TryParse(strs[18], out config.star2Num);
                    int.TryParse(strs[19], out config.star3Num);
                    int.TryParse(strs[20], out config.missionTime);
                    int.TryParse(strs[21], out config.speedupTime);
                    int.TryParse(strs[22], out config.speedupNum);
                    config.speedupReward = strs[23];
                    dic.Add(config.missionId, config );
                    list.Add(config);
               }
           }
        }
    }
}
