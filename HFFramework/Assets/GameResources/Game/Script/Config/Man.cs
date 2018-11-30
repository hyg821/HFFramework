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
    public class Man
    { 
        /// <summary>
        /// 索引
        /// <summary>
        public int id;
        /// <summary>
        /// 人名
        /// <summary>
        public string name;
        /// <summary>
        /// 性别
        /// <summary>
        public bool sex;
        /// <summary>
        /// 家庭地址
        /// <summary>
        public string address;
        public Address Address
        { 
            get 
            { 
                return ConfigAddress.Get(address);
            } 
        } 
        /// <summary>
        /// 爱好
        /// <summary>
        public List<string>love = new List<string>();
    }

    [System.Serializable]
    public class ConfigMan
    { 
        public static string[] split = new string[] { "," };
        public static string[] splitArray = new string[] { ";", "[", "]" };

        private static ConfigMan instance;
        public static ConfigMan Instance
        { 
            get 
            { 
                if (instance==null) 
                { 
                     instance = new ConfigMan ();
                } 
                return instance;
            } 
        } 

        public Dictionary<int , Man> dic = new Dictionary<int , Man>();

        public List<Man> list = new List<Man>();

        public  static Man Get(int id)
        {
            Man temp;
            Instance.dic.TryGetValue(id, out temp);
            return temp;
        }

        public void StartAnalysis()
        {
            AssetBundlePackage package = HAResourceManager.Instance.LoadAssetBundleFromFile("Config");
            TextAsset textAsset = package.LoadAssetWithCache<TextAsset>("Man");
            StringReader reader = new StringReader(textAsset.text);
            string notes = reader.ReadLine();
            string names = reader.ReadLine();
            reader.ReadLine();
            reader.ReadLine();
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
                    Man config = new Man();
                    int.TryParse(strs[0], out config.id);
                    config.name = strs[1];
                    bool.TryParse(strs[2], out config.sex);
                    config.address = strs[3];
                    string[] air = strs[4].Split(splitArray, StringSplitOptions.RemoveEmptyEntries);
                    for (int x = 0; x < air.Length; x++)
                    {
                       config.love.Add(air[x]);
                     }
                    dic.Add(config.id, config );
                    list.Add(config);
               }
           }
           notes = null;
           names = null;
           types = null;
           reader.Close();
        }

        public void Dispose()
        {
            dic.Clear();
            list.Clear();
            list = null;
            dic = null;
            instance = null;
        }
    }
}
