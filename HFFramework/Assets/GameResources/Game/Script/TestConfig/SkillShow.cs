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
    public class SkillShow
    { 
        /// <summary>
        /// 技能ID
        /// <summary>
        public int skillId;
        /// <summary>
        /// 技能类型(0近战特效，1技能特效)
        /// <summary>
        public int skillType;
        /// <summary>
        /// 技能动作名称
        /// <summary>
        public string AnimationName;
        /// <summary>
        /// 技能动作时长 单位 毫秒
        /// <summary>
        public int AnimationLength;
        /// <summary>
        /// 近战特效包名(中间用|分割)
        /// <summary>
        public string AtkEffectBunlderName;
        /// <summary>
        /// 近战特效名称(中间用|分割)
        /// <summary>
        public string AtkEffectName;
        /// <summary>
        /// 近战特效骨骼名称(中间用|分割)
        /// <summary>
        public string AtkEffectBone;
        /// <summary>
        /// 近战特效生存时间(中间用|分割)
        /// <summary>
        public string AtkEffectLifeTime;
        /// <summary>
        /// 近战特效延迟时间(中间用|分割)
        /// <summary>
        public string AtkEffectDelayTime;
        /// <summary>
        /// 特效是否可被打断 0可打断 1不可打断(中间用|分割)
        /// <summary>
        public string AtkEffectIsBreak;
        /// <summary>
        /// 子弹特效包名(中间用|分割)
        /// <summary>
        public string BulletEffectBunlderName;
        /// <summary>
        /// 子弹特效名称(中间用|分割)
        /// <summary>
        public string BulletEffectName;
        /// <summary>
        /// 子弹特效发射骨骼(中间用|分割)
        /// <summary>
        public string BulletEffectBone;
        /// <summary>
        /// 子弹特效生存时间(中间用|分割)
        /// <summary>
        public string BulletEffectLifeTime;
        /// <summary>
        /// 子弹特效延迟时间(中间用|分割)
        /// <summary>
        public string BulletEffectDelayTime;
        /// <summary>
        /// 子弹特效是否可被打断 0可打断 1不可打断(中间用|分割)
        /// <summary>
        public string BulletEffectIsBreak;
        /// <summary>
        /// 子弹特效速度 单位 米/s(中间用|分割)
        /// <summary>
        public string BulletEffectSpeed;
        /// <summary>
        /// 攻击音效(中间用|分割)
        /// <summary>
        public string AtkSoundName;
        /// <summary>
        /// 攻击音效延迟时间(中间用|分割)
        /// <summary>
        public string AtkSoundDelayTime;
        /// <summary>
        /// 被击动作名称
        /// <summary>
        public string HitAnimationName;
        /// <summary>
        /// 被击动作时长 单位 毫秒
        /// <summary>
        public int HitAnimationLength;
        /// <summary>
        /// 被击特效包名(中间用|分割)
        /// <summary>
        public string BehitEffectBundlerName;
        /// <summary>
        /// 被击特效名称(中间用|分割)
        /// <summary>
        public string BehitEffectName;
        /// <summary>
        /// 被击特效骨骼点(中间用|分割)
        /// <summary>
        public string BehitEffectBone;
        /// <summary>
        /// 被击特效生存时间(中间用|分割)
        /// <summary>
        public string BehitEffectLifeTime;
        /// <summary>
        /// 被击特效延迟时间(中间用|分割)
        /// <summary>
        public string BehitEffectDelayTime;
        /// <summary>
        /// 被击特效是否被打断 0可打断 1不可打断(中间用|分割)
        /// <summary>
        public string BehitEffectIsBreak;
        /// <summary>
        /// 被击音效(中间用|分割)
        /// <summary>
        public string BehitSoundName;
        /// <summary>
        /// 被击音效延迟时间(中间用|分割)
        /// <summary>
        public string BehitSoundDelayTime;
    }

    [System.Serializable]
    public class HFConfigSkillShow
    { 

        public static string[] split = new string[] { "," };
        public static string[] splitArray = new string[] { ";", "[", "]" };

        private static HFConfigSkillShow instance;
        public static HFConfigSkillShow Instance
        { 
            get 
            { 
                if (instance==null) 
                { 
                     instance = new HFConfigSkillShow ();
                } 
                return instance;
            } 
        } 

        public Dictionary<int , SkillShow> dic = new Dictionary<int , SkillShow>();

        public List<SkillShow> list = new List<SkillShow>();

        public SkillShow Get(int id)
        {
            SkillShow temp;
            dic.TryGetValue(id, out temp);
            return temp;
        }

        public void StartAnalysis()
        {
            AssetBundlePackage package = HAResourceManager.Instance.LoadAssetBundleFromFile("Config");
            TextAsset textAsset = package.LoadAssetWithCache<TextAsset>("SkillShow");
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
                    SkillShow config = new SkillShow();
                    int.TryParse(strs[0], out config.skillId);
                    int.TryParse(strs[1], out config.skillType);
                    config.AnimationName = strs[2];
                    int.TryParse(strs[3], out config.AnimationLength);
                    config.AtkEffectBunlderName = strs[4];
                    config.AtkEffectName = strs[5];
                    config.AtkEffectBone = strs[6];
                    config.AtkEffectLifeTime = strs[7];
                    config.AtkEffectDelayTime = strs[8];
                    config.AtkEffectIsBreak = strs[9];
                    config.BulletEffectBunlderName = strs[10];
                    config.BulletEffectName = strs[11];
                    config.BulletEffectBone = strs[12];
                    config.BulletEffectLifeTime = strs[13];
                    config.BulletEffectDelayTime = strs[14];
                    config.BulletEffectIsBreak = strs[15];
                    config.BulletEffectSpeed = strs[16];
                    config.AtkSoundName = strs[17];
                    config.AtkSoundDelayTime = strs[18];
                    config.HitAnimationName = strs[19];
                    int.TryParse(strs[20], out config.HitAnimationLength);
                    config.BehitEffectBundlerName = strs[21];
                    config.BehitEffectName = strs[22];
                    config.BehitEffectBone = strs[23];
                    config.BehitEffectLifeTime = strs[24];
                    config.BehitEffectDelayTime = strs[25];
                    config.BehitEffectIsBreak = strs[26];
                    config.BehitSoundName = strs[27];
                    config.BehitSoundDelayTime = strs[28];
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
