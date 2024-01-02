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
        /// </summary>
        public List<string>love = new List<string>();
        /// <summary>
        /// 标记
        /// </summary>
        public List<int>index = new List<int>();
    }

    [System.Serializable]
    public partial class ConfigMan
    { 
        public static string[] split = new string[] {"	"};
        public static string[] splitArray = new string[] { ";", "[", "]" };

        private static ConfigMan instance;
        public static ConfigMan Instance
        { 
            get 
            { 
                if (instance==null) 
                { 
                     instance = new ConfigMan();
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

        public void Init()
        {
            TextAsset textAsset  = AssetManager.Instance.GetAsset<TextAsset>("Config","Man");
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
                    Man config = new Man();
                    string[] air = null;
                    int.TryParse(strs[0], out config.id);
                    config.name = strs[1];
                    bool.TryParse(strs[2], out config.sex);
                    config.address = strs[3];
                    air = strs[4].Split(splitArray, StringSplitOptions.RemoveEmptyEntries);
                    for (int x = 0; x < air.Length; x++)
                    {
                       config.love.Add(air[x]);
                    }
                    air = strs[5].Split(splitArray, StringSplitOptions.RemoveEmptyEntries);
                    for (int x = 0; x < air.Length; x++)
                    {
                       int ite = 0;
                       int.TryParse(air[x], out ite);
                       config.index.Add(ite);
                    }
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
