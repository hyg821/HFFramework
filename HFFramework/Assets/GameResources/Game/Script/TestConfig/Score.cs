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
    public class Score
    { 
        /// <summary>
        /// 属性id
        /// <summary>
        public int attributeId;
        /// <summary>
        /// 属性名称
        /// <summary>
        public string attributeName;
        /// <summary>
        /// 评分
        /// <summary>
        public float score;
    }

    [System.Serializable]
    public class HFConfigScore
    { 

        public static string[] split = new string[] { "," };
        public static string[] splitArray = new string[] { ";", "[", "]" };

        private static HFConfigScore instance;
        public static HFConfigScore Instance
        { 
            get 
            { 
                if (instance==null) 
                { 
                     instance = new HFConfigScore ();
                } 
                return instance;
            } 
        } 

        public Dictionary<int , Score> dic = new Dictionary<int , Score>();

        public List<Score> list = new List<Score>();

        public Score Get(int id)
        {
            Score temp;
            dic.TryGetValue(id, out temp);
            return temp;
        }

        public void StartAnalysis()
        {
            AssetBundlePackage package = HAResourceManager.Instance.LoadAssetBundleFromFile("Config");
            TextAsset textAsset = package.LoadAssetWithCache<TextAsset>("Score");
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
                    Score config = new Score();
                    int.TryParse(strs[0], out config.attributeId);
                    config.attributeName = strs[1];
                    float.TryParse(strs[2], out config.score);
                    dic.Add(config.attributeId, config );
                    list.Add(config);
               }
           }
           notes = null;
           names = null;
           types = null;
        }
    }
}
