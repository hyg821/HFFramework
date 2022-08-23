using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Text;
using System.IO;
using System;
using HFFramework;
using System.Reflection;

namespace Config
{ 
    [System.Serializable]
    public class Address
    { 
        /// <summary>
        /// 索引
        /// </summary>
        public string id;
        /// <summary>
        /// 国家
        /// </summary>
        public string country;
        /// <summary>
        /// 省市
        /// </summary>
        public string city;
        /// <summary>
        /// 街道
        /// </summary>
        public string street;
    }
        
    [System.Serializable]
    public partial class ConfigAddress
    { 
        public static string[] split = new string[] {"	"};
        public static string[] splitArray = new string[] { ";", "[", "]" };

        private static ConfigAddress instance;
        public static ConfigAddress Instance
        { 
            get 
            { 
                if (instance==null) 
                { 
                     instance = new ConfigAddress();
                } 
                return instance;
            } 
        } 

        public Dictionary<string , Address> dic = new Dictionary<string , Address>();

        public List<Address> list = new List<Address>();

        public static Address Get(string id)
        {
            Address temp;
            Instance.dic.TryGetValue(id, out temp);
            return temp;
        }

        public void Init()
        {
            TextAsset textAsset  = AssetManager.Instance.GetAsset<TextAsset>("Config","Address");
            StringReader reader = new StringReader(textAsset.text);
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
                    Address config = new Address();
                    string[] air = null;
                    config.id = strs[0];
                    config.country = strs[1];
                    config.city = strs[2];
                    config.street = strs[3];
                    dic.Add(config.id, config);
                    list.Add(config);
                }
            }
            reader.Close();
            Type type = GetType();
            MethodInfo method = type.GetMethod( "PostProcessing");
            if (method!=null)
            {
                method.Invoke(this,null);
            }
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
