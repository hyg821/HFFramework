using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Text;
using System.IO;
using System;
using HFFramework;

namespace HFConfig
{ 
    public class GuildGoods
    { 
        /// <summary>
        /// 商品id
        /// <summary>
        public int goodsId;
        /// <summary>
        /// 商品内容
        /// <summary>
        public string goods;
        /// <summary>
        /// 每日最大购买数量
        /// <summary>
        public int dailymaxNum;
        /// <summary>
        /// 消耗贡献
        /// <summary>
        public int costContribution;
    }

    public class HFConfigGuildGoods
    { 

        public static string[] split = new string[] { "," };
        public static string[] splitArray = new string[] { ";", "[", "]" };

        private static HFConfigGuildGoods instance;
        public static HFConfigGuildGoods Instance
        { 
            get 
            { 
                if (instance==null) 
                { 
                     instance = new HFConfigGuildGoods ();
                } 
                return instance;
            } 
        } 

        public Dictionary<int , GuildGoods> dic = new Dictionary<int , GuildGoods>();

        public List<GuildGoods> list = new List<GuildGoods>();

        public GuildGoods Get(int id)
        {
            GuildGoods temp;
            dic.TryGetValue(id, out temp);
            return temp;
        }

        public void StartAnalysis()
        {
            AssetBundlePackage package = HAResourceManager.Instance.LoadAssetBundleFromFile("Config");
            TextAsset textAsset = package.LoadAssetWithCache<TextAsset>("GuildGoods");
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
                    GuildGoods config = new GuildGoods();
                    int.TryParse(strs[0], out config.goodsId);
                    config.goods = strs[1];
                    int.TryParse(strs[2], out config.dailymaxNum);
                    int.TryParse(strs[3], out config.costContribution);
                    dic.Add(config.goodsId, config );
                    list.Add(config);
               }
           }
        }
    }
}
