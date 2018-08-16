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
    public class BuffShow
    { 
        /// <summary>
        /// BuffID
        /// <summary>
        public int BuffId;
        /// <summary>
        /// Buff类型(0增益，1减益)
        /// <summary>
        public int BuffType;
        /// <summary>
        /// Buff动作名称
        /// <summary>
        public string AnimationName;
        /// <summary>
        /// Buff动作时长 单位 毫秒
        /// <summary>
        public int AnimationLength;
        /// <summary>
        /// Buff作用类型 1加血 2减血 3其他
        /// <summary>
        public int BuffEffectType;
        /// <summary>
        /// BuffIcon路径
        /// <summary>
        public string BuffIconPath;
        /// <summary>
        /// BuffIcon名称
        /// <summary>
        public string BuffIconName;
        /// <summary>
        /// BUFF特效包名(中间用|分割)
        /// <summary>
        public string BuffEffectBunlderName;
        /// <summary>
        /// BUFF特效名称(中间用|分割)
        /// <summary>
        public string BuffEffectName;
        /// <summary>
        /// BUFF特效骨骼名称(中间用|分割)
        /// <summary>
        public string BuffEffectBone;
        /// <summary>
        /// BUFF特效生存时间(中间用|分割)
        /// <summary>
        public string BuffEffectLifeTime;
        /// <summary>
        /// BUFF特效延迟时间(中间用|分割)
        /// <summary>
        public string BuffEffectDelayTime;
        /// <summary>
        /// BUFF特效是否可被打断 0可打断 1不可打断(中间用|分割)
        /// <summary>
        public string BuffEffectIsBreak;
    }

    [System.Serializable]
    public class HFConfigBuffShow
    { 

        public static string[] split = new string[] { "," };
        public static string[] splitArray = new string[] { ";", "[", "]" };

        private static HFConfigBuffShow instance;
        public static HFConfigBuffShow Instance
        { 
            get 
            { 
                if (instance==null) 
                { 
                     instance = new HFConfigBuffShow ();
                } 
                return instance;
            } 
        } 

        public Dictionary<int , BuffShow> dic = new Dictionary<int , BuffShow>();

        public List<BuffShow> list = new List<BuffShow>();

        public BuffShow Get(int id)
        {
            BuffShow temp;
            dic.TryGetValue(id, out temp);
            return temp;
        }

        public void StartAnalysis()
        {
            AssetBundlePackage package = HAResourceManager.Instance.LoadAssetBundleFromFile("Config");
            TextAsset textAsset = package.LoadAssetWithCache<TextAsset>("BuffShow");
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
                    BuffShow config = new BuffShow();
                    int.TryParse(strs[0], out config.BuffId);
                    int.TryParse(strs[1], out config.BuffType);
                    config.AnimationName = strs[2];
                    int.TryParse(strs[3], out config.AnimationLength);
                    int.TryParse(strs[4], out config.BuffEffectType);
                    config.BuffIconPath = strs[5];
                    config.BuffIconName = strs[6];
                    config.BuffEffectBunlderName = strs[7];
                    config.BuffEffectName = strs[8];
                    config.BuffEffectBone = strs[9];
                    config.BuffEffectLifeTime = strs[10];
                    config.BuffEffectDelayTime = strs[11];
                    config.BuffEffectIsBreak = strs[12];
                    dic.Add(config.BuffId, config );
                    list.Add(config);
               }
           }
           notes = null;
           names = null;
           types = null;
        }
    }
}
