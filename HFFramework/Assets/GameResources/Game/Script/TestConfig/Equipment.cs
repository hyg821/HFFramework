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
    public class Equipment
    { 
        /// <summary>
        /// 模板ID
        /// <summary>
        public int id;
        /// <summary>
        /// 名称
        /// <summary>
        public string name;
        /// <summary>
        /// Icon
        /// <summary>
        public string icon;
        /// <summary>
        /// Icon路径
        /// <summary>
        public string iconPath;
        /// <summary>
        /// 描述
        /// <summary>
        public string description;
        /// <summary>
        /// 装备品质
        /// <summary>
        public int quality;
        /// <summary>
        /// 穿戴等级
        /// <summary>
        public int useLv;
        /// <summary>
        /// 部位
        /// <summary>
        public int place;
        /// <summary>
        /// 是否获得绑定
        /// <summary>
        public bool isBinding;
        /// <summary>
        /// 是否可分解
        /// <summary>
        public bool isDecomposition;
        /// <summary>
        /// 分解策略ID
        /// <summary>
        public int decompositionId;
        /// <summary>
        /// 是否可继承
        /// <summary>
        public bool isInherit;
        /// <summary>
        /// 最大叠加数量
        /// <summary>
        public int maxStackingnum;
        /// <summary>
        /// 最大强化等级
        /// <summary>
        public int maxstrengthenLv;
        /// <summary>
        /// 是否可购买
        /// <summary>
        public bool isBuy;
        /// <summary>
        /// 获取渠道
        /// <summary>
        public string buyPath;
        /// <summary>
        /// 是否可出售
        /// <summary>
        public bool isSale;
        /// <summary>
        /// 出售货币类型
        /// <summary>
        public int salemoneyType;
        /// <summary>
        /// 出售价格
        /// <summary>
        public int saleprice;
        /// <summary>
        /// 装备技能
        /// <summary>
        public string equipmentSkill;
        /// <summary>
        /// 生命值增加
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
        /// 额外生命上限数值
        /// <summary>
        public string extrahpNum;
        /// <summary>
        /// 额外生命上限百分比
        /// <summary>
        public string extrahpPercent;
        /// <summary>
        /// 额外攻击值
        /// <summary>
        public string extraatkNum;
        /// <summary>
        /// 额外攻击百分比
        /// <summary>
        public string extraatkPercent;
        /// <summary>
        /// 额外防御值
        /// <summary>
        public string extradefNum;
        /// <summary>
        /// 额外防御百分比
        /// <summary>
        public string extradefPercent;
        /// <summary>
        /// 额外暴击百分比
        /// <summary>
        public string extracritPercent;
        /// <summary>
        /// 额外暴伤百分比
        /// <summary>
        public string extracritdamPercent;
        /// <summary>
        /// 额外增伤百分比
        /// <summary>
        public string extraadddamPercent;
        /// <summary>
        /// 额外减伤百分比
        /// <summary>
        public string extrasubdamPercent;
        /// <summary>
        /// 额外攻击怒气获取百分比
        /// <summary>
        public string extraatkangerPercent;
        /// <summary>
        /// 额外被击怒气获取百分比
        /// <summary>
        public string extradefangerPercent;
        /// <summary>
        /// 额外提升攻速百分比
        /// <summary>
        public string extraatkspeedPercent;
        /// <summary>
        /// 无额外属性
        /// <summary>
        public string noneExtra;
    }

    [System.Serializable]
    public class HFConfigEquipment
    { 

        public static string[] split = new string[] { "," };
        public static string[] splitArray = new string[] { ";", "[", "]" };

        private static HFConfigEquipment instance;
        public static HFConfigEquipment Instance
        { 
            get 
            { 
                if (instance==null) 
                { 
                     instance = new HFConfigEquipment ();
                } 
                return instance;
            } 
        } 

        public Dictionary<int , Equipment> dic = new Dictionary<int , Equipment>();

        public List<Equipment> list = new List<Equipment>();

        public Equipment Get(int id)
        {
            Equipment temp;
            dic.TryGetValue(id, out temp);
            return temp;
        }

        public void StartAnalysis()
        {
            AssetBundlePackage package = HAResourceManager.Instance.LoadAssetBundleFromFile("Config");
            TextAsset textAsset = package.LoadAssetWithCache<TextAsset>("Equipment");
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
                    Equipment config = new Equipment();
                    int.TryParse(strs[0], out config.id);
                    config.name = strs[1];
                    config.icon = strs[2];
                    config.iconPath = strs[3];
                    config.description = strs[4];
                    int.TryParse(strs[5], out config.quality);
                    int.TryParse(strs[6], out config.useLv);
                    int.TryParse(strs[7], out config.place);
                    bool.TryParse(strs[8], out config.isBinding);
                    bool.TryParse(strs[9], out config.isDecomposition);
                    int.TryParse(strs[10], out config.decompositionId);
                    bool.TryParse(strs[11], out config.isInherit);
                    int.TryParse(strs[12], out config.maxStackingnum);
                    int.TryParse(strs[13], out config.maxstrengthenLv);
                    bool.TryParse(strs[14], out config.isBuy);
                    config.buyPath = strs[15];
                    bool.TryParse(strs[16], out config.isSale);
                    int.TryParse(strs[17], out config.salemoneyType);
                    int.TryParse(strs[18], out config.saleprice);
                    config.equipmentSkill = strs[19];
                    int.TryParse(strs[20], out config.hp);
                    int.TryParse(strs[21], out config.atk);
                    int.TryParse(strs[22], out config.def);
                    config.extrahpNum = strs[23];
                    config.extrahpPercent = strs[24];
                    config.extraatkNum = strs[25];
                    config.extraatkPercent = strs[26];
                    config.extradefNum = strs[27];
                    config.extradefPercent = strs[28];
                    config.extracritPercent = strs[29];
                    config.extracritdamPercent = strs[30];
                    config.extraadddamPercent = strs[31];
                    config.extrasubdamPercent = strs[32];
                    config.extraatkangerPercent = strs[33];
                    config.extradefangerPercent = strs[34];
                    config.extraatkspeedPercent = strs[35];
                    config.noneExtra = strs[36];
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
