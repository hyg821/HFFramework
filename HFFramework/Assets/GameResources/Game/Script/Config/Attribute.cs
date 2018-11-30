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
    public class Attribute
    { 
        /// <summary>
        /// id
        /// <summary>
        public int id;
        /// <summary>
        /// 名称
        /// <summary>
        public string name;
    }

    [System.Serializable]
    public class ConfigAttribute
    { 
        public static string[] split = new string[] { "," };
        public static string[] splitArray = new string[] { ";", "[", "]" };

        private static ConfigAttribute instance;
        public static ConfigAttribute Instance
        { 
            get 
            { 
                if (instance==null) 
                { 
                     instance = new ConfigAttribute ();
                } 
                return instance;
            } 
        } 

        public Dictionary<int , Attribute> dic = new Dictionary<int , Attribute>();

        public List<Attribute> list = new List<Attribute>();

        public  static Attribute Get(int id)
        {
            Attribute temp;
            Instance.dic.TryGetValue(id, out temp);
            return temp;
        }

        public void StartAnalysis()
        {
            AssetBundlePackage package = HAResourceManager.Instance.LoadAssetBundleFromFile("Config");
            TextAsset textAsset = package.LoadAssetWithCache<TextAsset>("Attribute");
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
                    Attribute config = new Attribute();
                    int.TryParse(strs[0], out config.id);
                    config.name = strs[1];
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
