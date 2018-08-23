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
    public class Item
    { 
        /// <summary>
        /// 道具id
        /// <summary>
        public int id;
        /// <summary>
        /// 名称
        /// <summary>
        public string name;
        /// <summary>
        /// 描述
        /// <summary>
        public string description;
        /// <summary>
        /// 道具icon
        /// <summary>
        public string itemIcon;
        /// <summary>
        /// icon路径
        /// <summary>
        public string iconPath;
        /// <summary>
        /// 类别
        /// <summary>
        public List<int>type = new List<int>();
        /// <summary>
        /// 模块
        /// <summary>
        public int module;
        /// <summary>
        /// 魂石类型
        /// <summary>
        public int stoneType;
        /// <summary>
        /// 魂石等级
        /// <summary>
        public int stoneLv;
        /// <summary>
        /// 是否可使用
        /// <summary>
        public bool isUse;
        /// <summary>
        /// 是否可合成1
        /// <summary>
        public bool isComposite1;
        /// <summary>
        /// 是否可合成2
        /// <summary>
        public bool isComposite2;
        /// <summary>
        /// 合成1id
        /// <summary>
        public string composite1Id;
        /// <summary>
        /// 合成2id
        /// <summary>
        public string composite2Id;
        /// <summary>
        /// 是否可分解
        /// <summary>
        public bool isDecomposition;
        /// <summary>
        /// 分解所需道具
        /// <summary>
        public string decompositionItem;
        /// <summary>
        /// 分解id
        /// <summary>
        public int decompositionId;
        /// <summary>
        /// 是否可堆叠
        /// <summary>
        public bool isStacking;
        /// <summary>
        /// 最大堆叠数量
        /// <summary>
        public int maxStackingnum;
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
        public int salePrice;
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
        /// 额外生命上限数值
        /// <summary>
        public int extrahpNum;
        /// <summary>
        /// 额外生命上限百分比
        /// <summary>
        public int extrahpPercent;
        /// <summary>
        /// 额外攻击值
        /// <summary>
        public int extraatkNum;
        /// <summary>
        /// 额外攻击百分比
        /// <summary>
        public int extraatkPercent;
        /// <summary>
        /// 额外防御值
        /// <summary>
        public int extradefNum;
        /// <summary>
        /// 额外防御百分比
        /// <summary>
        public int extradefPercent;
        /// <summary>
        /// 额外暴击百分比
        /// <summary>
        public int extracritPercent;
        /// <summary>
        /// 额外暴伤百分比
        /// <summary>
        public int extracritdamPercent;
        /// <summary>
        /// 额外增伤百分比
        /// <summary>
        public int extraadddamPercent;
        /// <summary>
        /// 额外减伤百分比
        /// <summary>
        public int extrasubdamPercent;
        /// <summary>
        /// 额外攻击怒气获取百分比
        /// <summary>
        public int extraatkangerPercent;
        /// <summary>
        /// 额外被击怒气获取百分比
        /// <summary>
        public int extradefangerPercent;
        /// <summary>
        /// 额外提升攻速百分比
        /// <summary>
        public int extraatkspeedPercent;
    }

    [System.Serializable]
    public class ConfigItem
    { 
        public static string[] split = new string[] { "," };
        public static string[] splitArray = new string[] { ";", "[", "]" };

        private static ConfigItem instance;
        public static ConfigItem Instance
        { 
            get 
            { 
                if (instance==null) 
                { 
                     instance = new ConfigItem ();
                } 
                return instance;
            } 
        } 

        public Dictionary<int , Item> dic = new Dictionary<int , Item>();

        public List<Item> list = new List<Item>();

        public Item Get(int id)
        {
            Item temp;
            dic.TryGetValue(id, out temp);
            return temp;
        }

        public void StartAnalysis()
        {
            AssetBundlePackage package = HAResourceManager.Instance.LoadAssetBundleFromFile("Config");
            TextAsset textAsset = package.LoadAssetWithCache<TextAsset>("Item");
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
                    Item config = new Item();
                    int.TryParse(strs[0], out config.id);
                    config.name = strs[1];
                    config.description = strs[2];
                    config.itemIcon = strs[3];
                    config.iconPath = strs[4];
                    string[] air = strs[5].Split(splitArray, StringSplitOptions.RemoveEmptyEntries);
                    for (int x = 0; x < air.Length; x++)
                    {
                       int ite = 0;
                       int.TryParse(air[x], out ite);
                       config.type.Add(ite);
                     }
                    int.TryParse(strs[6], out config.module);
                    int.TryParse(strs[7], out config.stoneType);
                    int.TryParse(strs[8], out config.stoneLv);
                    bool.TryParse(strs[9], out config.isUse);
                    bool.TryParse(strs[10], out config.isComposite1);
                    bool.TryParse(strs[11], out config.isComposite2);
                    config.composite1Id = strs[12];
                    config.composite2Id = strs[13];
                    bool.TryParse(strs[14], out config.isDecomposition);
                    config.decompositionItem = strs[15];
                    int.TryParse(strs[16], out config.decompositionId);
                    bool.TryParse(strs[17], out config.isStacking);
                    int.TryParse(strs[18], out config.maxStackingnum);
                    bool.TryParse(strs[19], out config.isBuy);
                    config.buyPath = strs[20];
                    bool.TryParse(strs[21], out config.isSale);
                    int.TryParse(strs[22], out config.salemoneyType);
                    int.TryParse(strs[23], out config.salePrice);
                    int.TryParse(strs[24], out config.hp);
                    int.TryParse(strs[25], out config.atk);
                    int.TryParse(strs[26], out config.def);
                    int.TryParse(strs[27], out config.extrahpNum);
                    int.TryParse(strs[28], out config.extrahpPercent);
                    int.TryParse(strs[29], out config.extraatkNum);
                    int.TryParse(strs[30], out config.extraatkPercent);
                    int.TryParse(strs[31], out config.extradefNum);
                    int.TryParse(strs[32], out config.extradefPercent);
                    int.TryParse(strs[33], out config.extracritPercent);
                    int.TryParse(strs[34], out config.extracritdamPercent);
                    int.TryParse(strs[35], out config.extraadddamPercent);
                    int.TryParse(strs[36], out config.extrasubdamPercent);
                    int.TryParse(strs[37], out config.extraatkangerPercent);
                    int.TryParse(strs[38], out config.extradefangerPercent);
                    int.TryParse(strs[39], out config.extraatkspeedPercent);
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
