using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Text;
using System.IO;
using System;
using HFFramework;

namespace HFConfig
{ 
    public class Recruit
    { 
        /// <summary>
        /// 招募卡池id
        /// <summary>
        public int recruitId;
        /// <summary>
        /// icon
        /// <summary>
        public string icon;
        /// <summary>
        /// icon路径
        /// <summary>
        public string iconPath;
        /// <summary>
        /// 是否可单次招募
        /// <summary>
        public bool isoneRecruit;
        /// <summary>
        /// 是否可五连招募
        /// <summary>
        public bool isfiveRecruit;
        /// <summary>
        /// 是否可十连招募
        /// <summary>
        public bool istenRecruit;
        /// <summary>
        /// 单次招募消耗道具
        /// <summary>
        public string onerecruitCost;
        /// <summary>
        /// 五连招募消耗道具
        /// <summary>
        public string fiverecruitCost;
        /// <summary>
        /// 十连招募消耗道具
        /// <summary>
        public string tenrecruitCost;
        /// <summary>
        /// 招募卡牌概率
        /// <summary>
        public string recruitcardPer;
        /// <summary>
        /// 招募道具概率
        /// <summary>
        public string recruititemPer;
        /// <summary>
        /// 卡池描述
        /// <summary>
        public string cardpoolDescription;
        /// <summary>
        /// 卡牌
        /// <summary>
        public string card;
        /// <summary>
        /// 碎片
        /// <summary>
        public string fragment;
        /// <summary>
        /// 道具
        /// <summary>
        public string item;
        /// <summary>
        /// 概率图片
        /// <summary>
        public string perPicture;
        /// <summary>
        /// 概率图片路径
        /// <summary>
        public string perpicturePath;
    }

    public class HFConfigRecruit
    { 

        public static string[] split = new string[] { "," };
        public static string[] splitArray = new string[] { ";", "[", "]" };

        private static HFConfigRecruit instance;
        public static HFConfigRecruit Instance
        { 
            get 
            { 
                if (instance==null) 
                { 
                     instance = new HFConfigRecruit ();
                } 
                return instance;
            } 
        } 

        public Dictionary<int , Recruit> dic = new Dictionary<int , Recruit>();

        public List<Recruit> list = new List<Recruit>();

        public Recruit Get(int id)
        {
            Recruit temp;
            dic.TryGetValue(id, out temp);
            return temp;
        }

        public void StartAnalysis()
        {
            AssetBundlePackage package = HAResourceManager.Instance.LoadAssetBundleFromFile("Config");
            TextAsset textAsset = package.LoadAssetWithCache<TextAsset>("Recruit");
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
                    Recruit config = new Recruit();
                    int.TryParse(strs[0], out config.recruitId);
                    config.icon = strs[1];
                    config.iconPath = strs[2];
                    bool.TryParse(strs[3], out config.isoneRecruit);
                    bool.TryParse(strs[4], out config.isfiveRecruit);
                    bool.TryParse(strs[5], out config.istenRecruit);
                    config.onerecruitCost = strs[6];
                    config.fiverecruitCost = strs[7];
                    config.tenrecruitCost = strs[8];
                    config.recruitcardPer = strs[9];
                    config.recruititemPer = strs[10];
                    config.cardpoolDescription = strs[11];
                    config.card = strs[12];
                    config.fragment = strs[13];
                    config.item = strs[14];
                    config.perPicture = strs[15];
                    config.perpicturePath = strs[16];
                    dic.Add(config.recruitId, config );
                    list.Add(config);
               }
           }
        }
    }
}
