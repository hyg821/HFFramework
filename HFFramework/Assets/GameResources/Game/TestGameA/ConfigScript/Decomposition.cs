using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Text;
using System.IO;
using System;
using HFFramework;

namespace HFConfig
{ 
    public class Decomposition
    { 
        /// <summary>
        /// 分解ID
        /// <summary>
        public int decompositionId;
        /// <summary>
        /// 分解种类
        /// <summary>
        public int decompositionType;
        /// <summary>
        /// 固定掉落
        /// <summary>
        public string drop;
        /// <summary>
        /// 额外产出个数
        /// <summary>
        public string extradropNum;
        /// <summary>
        /// 额外产出物品
        /// <summary>
        public string extraDrop;
    }

    public class HFConfigDecomposition
    { 

        public static string[] split = new string[] { "," };
        public static string[] splitArray = new string[] { ";", "[", "]" };

        private static HFConfigDecomposition instance;
        public static HFConfigDecomposition Instance
        { 
            get 
            { 
                if (instance==null) 
                { 
                     instance = new HFConfigDecomposition ();
                } 
                return instance;
            } 
        } 

        public Dictionary<int , Decomposition> dic = new Dictionary<int , Decomposition>();

        public List<Decomposition> list = new List<Decomposition>();

        public Decomposition Get(int id)
        {
            Decomposition temp;
            dic.TryGetValue(id, out temp);
            return temp;
        }

        public void StartAnalysis()
        {
            AssetBundlePackage package = HAResourceManager.Instance.LoadAssetBundleFromFile("Config");
            TextAsset textAsset = package.LoadAssetWithCache<TextAsset>("Decomposition");
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
                    Decomposition config = new Decomposition();
                    int.TryParse(strs[0], out config.decompositionId);
                    int.TryParse(strs[1], out config.decompositionType);
                    config.drop = strs[2];
                    config.extradropNum = strs[3];
                    config.extraDrop = strs[4];
                    dic.Add(config.decompositionId, config );
                    list.Add(config);
               }
           }
        }
    }
}
