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
        /// </summary>
        public int id;
        /// <summary>
        /// 人名
        /// </summary>
        public string name;
        /// <summary>
        /// 性别
        /// </summary>
        public bool sex;
        /// <summary>
        /// 家庭地址
        /// </summary>
        public List<string>address = new List<string>();
        public Address GetAddress(string key)
        { 
              return ConfigAddress.Get(key);
        } 
        /// <summary>
        /// 爱好
        /// </summary>
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

        public static Man Get(int id)
        {
            Man temp;
            Instance.dic.TryGetValue(id, out temp);
            return temp;
        }

        public void StartAnalysis()
        {
            AssetBundlePackage package = HFResourceManager.Instance.LoadAssetBundleFromFile("Config");
            TextAsset textAsset = package.LoadAssetWithCache<TextAsset>("Man");
            StringReader reader = new StringReader(textAsset.text);
            reader.ReadLine();
            reader.ReadLine();
            reader.ReadLine();
            reader.ReadLine();
            reader.ReadLine();
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
                    string[] air = null;
                    int.TryParse(strs[0], out config.id);
                    config.name = strs[1];
                    bool.TryParse(strs[2], out config.sex);
                    air = strs[3].Split(splitArray, StringSplitOptions.RemoveEmptyEntries);
                    for (int x = 0; x < air.Length; x++)
                    {
                       config.address.Add(air[x]);
                     }
                    air = strs[4].Split(splitArray, StringSplitOptions.RemoveEmptyEntries);
                    for (int x = 0; x < air.Length; x++)
                    {
                       config.love.Add(air[x]);
                     }
                    dic.Add(config.id, config );
                    list.Add(config);
               }
           }
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
