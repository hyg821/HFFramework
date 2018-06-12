using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Text;
using System.IO;
using System;
using HFFramework;

namespace HFConfig
{ 
    public class Item
    { 
        public int id;
        public string name;
        public string description;
        public string itemIcon;
        public string iconPath;
        public int type;
        public int module;
        public int stoneType;
        public int stoneLv;
        public bool isUse;
        public bool isComposite1;
        public bool isComposite2;
        public string composite1Id;
        public string composite2Id;
        public bool isDecomposition;
        public string decompositionItem;
        public int decompositionId;
        public bool isStacking;
        public int maxStackingnum;
        public bool isBuy;
        public string buyPath;
        public bool isSale;
        public int salemoneyType;
        public int salePrice;
        public int hp;
        public int atk;
        public int def;
        public int extrahpNum;
        public int extrahpPercent;
        public int extraatkNum;
        public int extraatkPercent;
        public int extradefNum;
        public int extradefPercent;
        public int extracritPercent;
        public int extracritdamPercent;
        public int extraadddamPercent;
        public int extrasubdamPercent;
        public int extraatkangerPercent;
        public int extradefangerPercent;
        public int extraatkspeedPercent;
    }

    public class HFTableItem
    { 

        public static string[] split = new string[] { "," };

        private static HFTableItem instance;
        public static HFTableItem Instance
        { 
            get 
            { 
                if (instance==null) 
                { 
                     instance = new HFTableItem ();
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
                    for (int i = 0; i < strs.Length; i++) 
                    {
                        int.TryParse(strs[0], out config.id);
                        config.name = strs[1];
                        config.description = strs[2];
                        config.itemIcon = strs[3];
                        config.iconPath = strs[4];
                        int.TryParse(strs[5], out config.type);
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
                    }
                    dic.Add(config.id, config );
                    list.Add(config);
               }
           }
        }
    }
}
