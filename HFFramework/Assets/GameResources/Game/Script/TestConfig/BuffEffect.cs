using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Text;
using System.IO;
using System;
using HFFramework;

namespace HFConfig
{ 
    public class BuffEffect
    { 
        /// <summary>
        /// buffId
        /// <summary>
        public int buffId;
        /// <summary>
        /// 目标转换
        /// <summary>
        public int transformTarget;
        /// <summary>
        /// 是否前端显示
        /// <summary>
        public int isFront;
        /// <summary>
        /// 效果类型
        /// <summary>
        public int effectType;
        /// <summary>
        /// 持续时间
        /// <summary>
        public int continueTime;
        /// <summary>
        /// 触发间隔
        /// <summary>
        public int triggerCd;
        /// <summary>
        /// 触发次数
        /// <summary>
        public int triggerTimes;
        /// <summary>
        /// 再次产生效果CD
        /// <summary>
        public int againCd;
        /// <summary>
        /// 叠加上限
        /// <summary>
        public int maxStacking;
        /// <summary>
        /// 叠加类型
        /// <summary>
        public int stackingType;
        /// <summary>
        /// 被动触发方式
        /// <summary>
        public int triggerType;
        /// <summary>
        /// 触发条件
        /// <summary>
        public string condition;
        /// <summary>
        /// 触发条件2
        /// <summary>
        public string condition2;
        /// <summary>
        /// BUFF组
        /// <summary>
        public int buffGroup;
        /// <summary>
        /// 触发几率
        /// <summary>
        public int triggerPercent;
        /// <summary>
        /// up
        /// <summary>
        public string up;
        /// <summary>
        /// 上沿效果计算
        /// <summary>
        public string upEffect;
        /// <summary>
        /// 上沿效果依赖
        /// <summary>
        public string upDepend;
        /// <summary>
        /// down
        /// <summary>
        public string down;
        /// <summary>
        /// 下沿效果计算
        /// <summary>
        public string downEffect;
    }

    public class HFConfigBuffEffect
    { 

        public static string[] split = new string[] { "," };
        public static string[] splitArray = new string[] { ";", "[", "]" };

        private static HFConfigBuffEffect instance;
        public static HFConfigBuffEffect Instance
        { 
            get 
            { 
                if (instance==null) 
                { 
                     instance = new HFConfigBuffEffect ();
                } 
                return instance;
            } 
        } 

        public Dictionary<int , BuffEffect> dic = new Dictionary<int , BuffEffect>();

        public List<BuffEffect> list = new List<BuffEffect>();

        public BuffEffect Get(int id)
        {
            BuffEffect temp;
            dic.TryGetValue(id, out temp);
            return temp;
        }

        public void StartAnalysis()
        {
            AssetBundlePackage package = HAResourceManager.Instance.LoadAssetBundleFromFile("Config");
            TextAsset textAsset = package.LoadAssetWithCache<TextAsset>("BuffEffect");
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
                    BuffEffect config = new BuffEffect();
                    int.TryParse(strs[0], out config.buffId);
                    int.TryParse(strs[1], out config.transformTarget);
                    int.TryParse(strs[2], out config.isFront);
                    int.TryParse(strs[3], out config.effectType);
                    int.TryParse(strs[4], out config.continueTime);
                    int.TryParse(strs[5], out config.triggerCd);
                    int.TryParse(strs[6], out config.triggerTimes);
                    int.TryParse(strs[7], out config.againCd);
                    int.TryParse(strs[8], out config.maxStacking);
                    int.TryParse(strs[9], out config.stackingType);
                    int.TryParse(strs[10], out config.triggerType);
                    config.condition = strs[11];
                    config.condition2 = strs[12];
                    int.TryParse(strs[13], out config.buffGroup);
                    int.TryParse(strs[14], out config.triggerPercent);
                    config.up = strs[15];
                    config.upEffect = strs[16];
                    config.upDepend = strs[17];
                    config.down = strs[18];
                    config.downEffect = strs[19];
                    dic.Add(config.buffId, config );
                    list.Add(config);
               }
           }
        }
    }
}
