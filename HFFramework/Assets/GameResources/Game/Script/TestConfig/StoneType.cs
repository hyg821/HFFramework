using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Text;
using System.IO;
using System;
using HFFramework;

namespace HFConfig
{ 
    public class StoneType
    { 
        /// <summary>
        /// id
        /// <summary>
        public int id;
        /// <summary>
        /// 魂石类型
        /// <summary>
        public int stoneType;
        /// <summary>
        /// 类型icon
        /// <summary>
        public string typeIcon;
        /// <summary>
        /// 类型icon路径
        /// <summary>
        public string typeiconPath;
    }

    public class HFConfigStoneType
    { 

        public static string[] split = new string[] { "," };
        public static string[] splitArray = new string[] { ";", "[", "]" };

        private static HFConfigStoneType instance;
        public static HFConfigStoneType Instance
        { 
            get 
            { 
                if (instance==null) 
                { 
                     instance = new HFConfigStoneType ();
                } 
                return instance;
            } 
        } 

        public Dictionary<int , StoneType> dic = new Dictionary<int , StoneType>();

        public List<StoneType> list = new List<StoneType>();

        public StoneType Get(int id)
        {
            StoneType temp;
            dic.TryGetValue(id, out temp);
            return temp;
        }

        public void StartAnalysis()
        {
            AssetBundlePackage package = HAResourceManager.Instance.LoadAssetBundleFromFile("Config");
            TextAsset textAsset = package.LoadAssetWithCache<TextAsset>("StoneType");
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
                    StoneType config = new StoneType();
                    int.TryParse(strs[0], out config.id);
                    int.TryParse(strs[1], out config.stoneType);
                    config.typeIcon = strs[2];
                    config.typeiconPath = strs[3];
                    dic.Add(config.id, config );
                    list.Add(config);
               }
           }
        }
    }
}
