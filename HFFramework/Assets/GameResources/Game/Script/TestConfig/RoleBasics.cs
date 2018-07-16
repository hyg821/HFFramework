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
    public class RoleBasics
    { 
        /// <summary>
        /// id
        /// <summary>
        public int id;
        /// <summary>
        /// 名称
        /// <summary>
        public string name;
        /// <summary>
        /// 头像Icon
        /// <summary>
        public string headIcon;
        /// <summary>
        /// 头像Icon路径
        /// <summary>
        public string headIconpath;
        /// <summary>
        /// 卡牌Icon
        /// <summary>
        public string cardIcon;
        /// <summary>
        /// 卡牌Icon路径
        /// <summary>
        public string cardIconpath;
        /// <summary>
        /// 3头身
        /// <summary>
        public string images;
        /// <summary>
        /// 3头身路径
        /// <summary>
        public string imagespath;
        /// <summary>
        /// 立绘
        /// <summary>
        public string picture;
        /// <summary>
        /// 立绘路径
        /// <summary>
        public string picturepath;
        /// <summary>
        /// 品质
        /// <summary>
        public int quality;
        /// <summary>
        /// 星级
        /// <summary>
        public int starlv;
        /// <summary>
        /// 特性
        /// <summary>
        public int characteristic;
        /// <summary>
        /// 性别
        /// <summary>
        public int sex;
        /// <summary>
        /// 阵营
        /// <summary>
        public int camp;
        /// <summary>
        /// 阵营Icon
        /// <summary>
        public string campIcon;
        /// <summary>
        /// 阵营Icon路径
        /// <summary>
        public string campIconpath;
        /// <summary>
        /// 碎片id
        /// <summary>
        public int fragmentID;
        /// <summary>
        /// 分解碎片个数
        /// <summary>
        public int decompositionNum;
        /// <summary>
        /// 等级上限
        /// <summary>
        public int maxLv;
        /// <summary>
        /// 最大觉醒等级
        /// <summary>
        public int maxawakeLv;
        /// <summary>
        /// 最大突破等级
        /// <summary>
        public int maxbreakLv;
        /// <summary>
        /// 攻击距离
        /// <summary>
        public int attackDistance;
        /// <summary>
        /// 攻击速度
        /// <summary>
        public float attackSpeed;
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
        /// 初始生命
        /// <summary>
        public int initialHp;
        /// <summary>
        /// 初始攻击力
        /// <summary>
        public int initialAttack;
        /// <summary>
        /// 初始防御力
        /// <summary>
        public int initialDefense;
        /// <summary>
        /// 普通攻击
        /// <summary>
        public int commonAttack;
        /// <summary>
        /// 主动技能
        /// <summary>
        public int activeSkill;
        /// <summary>
        /// 主动解锁于突破等级
        /// <summary>
        public int breakthroughs;
        /// <summary>
        /// 被动技能1
        /// <summary>
        public int passiveSkill1;
        /// <summary>
        /// 被动1解锁于突破等级
        /// <summary>
        public int passivethroughs1;
        /// <summary>
        /// 被动技能2
        /// <summary>
        public int passiveSkill2;
        /// <summary>
        /// 被动2解锁于突破等级
        /// <summary>
        public int passivethroughs2;
        /// <summary>
        /// 被动技能3
        /// <summary>
        public int passiveSkill3;
        /// <summary>
        /// 被动3解锁于突破等级
        /// <summary>
        public int passivethroughs3;
    }

    [System.Serializable]
    public class HFConfigRoleBasics
    { 

        public static string[] split = new string[] { "," };
        public static string[] splitArray = new string[] { ";", "[", "]" };

        private static HFConfigRoleBasics instance;
        public static HFConfigRoleBasics Instance
        { 
            get 
            { 
                if (instance==null) 
                { 
                     instance = new HFConfigRoleBasics ();
                } 
                return instance;
            } 
        } 

        public Dictionary<int , RoleBasics> dic = new Dictionary<int , RoleBasics>();

        public List<RoleBasics> list = new List<RoleBasics>();

        public RoleBasics Get(int id)
        {
            RoleBasics temp;
            dic.TryGetValue(id, out temp);
            return temp;
        }

        public void StartAnalysis()
        {
            AssetBundlePackage package = HAResourceManager.Instance.LoadAssetBundleFromFile("Config");
            TextAsset textAsset = package.LoadAssetWithCache<TextAsset>("RoleBasics");
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
                    RoleBasics config = new RoleBasics();
                    int.TryParse(strs[0], out config.id);
                    config.name = strs[1];
                    config.headIcon = strs[2];
                    config.headIconpath = strs[3];
                    config.cardIcon = strs[4];
                    config.cardIconpath = strs[5];
                    config.images = strs[6];
                    config.imagespath = strs[7];
                    config.picture = strs[8];
                    config.picturepath = strs[9];
                    int.TryParse(strs[10], out config.quality);
                    int.TryParse(strs[11], out config.starlv);
                    int.TryParse(strs[12], out config.characteristic);
                    int.TryParse(strs[13], out config.sex);
                    int.TryParse(strs[14], out config.camp);
                    config.campIcon = strs[15];
                    config.campIconpath = strs[16];
                    int.TryParse(strs[17], out config.fragmentID);
                    int.TryParse(strs[18], out config.decompositionNum);
                    int.TryParse(strs[19], out config.maxLv);
                    int.TryParse(strs[20], out config.maxawakeLv);
                    int.TryParse(strs[21], out config.maxbreakLv);
                    int.TryParse(strs[22], out config.attackDistance);
                    float.TryParse(strs[23], out config.attackSpeed);
                    float.TryParse(strs[24], out config.maxAnger);
                    float.TryParse(strs[25], out config.attackAnger);
                    float.TryParse(strs[26], out config.beAttactedAnger);
                    int.TryParse(strs[27], out config.initialHp);
                    int.TryParse(strs[28], out config.initialAttack);
                    int.TryParse(strs[29], out config.initialDefense);
                    int.TryParse(strs[30], out config.commonAttack);
                    int.TryParse(strs[31], out config.activeSkill);
                    int.TryParse(strs[32], out config.breakthroughs);
                    int.TryParse(strs[33], out config.passiveSkill1);
                    int.TryParse(strs[34], out config.passivethroughs1);
                    int.TryParse(strs[35], out config.passiveSkill2);
                    int.TryParse(strs[36], out config.passivethroughs2);
                    int.TryParse(strs[37], out config.passiveSkill3);
                    int.TryParse(strs[38], out config.passivethroughs3);
                    dic.Add(config.id, config );
                    list.Add(config);
               }
           }
        }
    }
}
