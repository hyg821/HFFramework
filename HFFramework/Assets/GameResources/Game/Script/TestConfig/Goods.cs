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
    public class Goods
    { 
        /// <summary>
        /// 商品id
        /// <summary>
        public int goodsId;
        /// <summary>
        /// 所属商城
        /// <summary>
        public int shopType;
        /// <summary>
        /// 商品
        /// <summary>
        public string goods;
        /// <summary>
        /// 商品类型
        /// <summary>
        public int goodsType;
        /// <summary>
        /// 每日最大购买数量
        /// <summary>
        public int dailymaxNum;
        /// <summary>
        /// 支付道具1
        /// <summary>
        public string payItem1;
        /// <summary>
        /// 支付道具2
        /// <summary>
        public string payItem2;
        /// <summary>
        /// 人民币价格
        /// <summary>
        public int RMBPrice;
    }

    [System.Serializable]
    public class ConfigGoods
    { 
        public static string[] split = new string[] { "," };
        public static string[] splitArray = new string[] { ";", "[", "]" };

        private static ConfigGoods instance;
        public static ConfigGoods Instance
        { 
            get 
            { 
                if (instance==null) 
                { 
                     instance = new ConfigGoods ();
                } 
                return instance;
            } 
        } 

        public Dictionary<int , Goods> dic = new Dictionary<int , Goods>();

        public List<Goods> list = new List<Goods>();

        public Goods Get(int id)
        {
            Goods temp;
            dic.TryGetValue(id, out temp);
            return temp;
        }

        public void StartAnalysis()
        {
            AssetBundlePackage package = HAResourceManager.Instance.LoadAssetBundleFromFile("Config");
            TextAsset textAsset = package.LoadAssetWithCache<TextAsset>("Goods");
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
                    Goods config = new Goods();
                    int.TryParse(strs[0], out config.goodsId);
                    int.TryParse(strs[1], out config.shopType);
                    config.goods = strs[2];
                    int.TryParse(strs[3], out config.goodsType);
                    int.TryParse(strs[4], out config.dailymaxNum);
                    config.payItem1 = strs[5];
                    config.payItem2 = strs[6];
                    int.TryParse(strs[7], out config.RMBPrice);
                    dic.Add(config.goodsId, config );
                    list.Add(config);
               }
           }
           notes = null;
           names = null;
           types = null;
        }
    }
}
