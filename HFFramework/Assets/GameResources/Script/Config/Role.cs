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
    public class Role
    { 
        /// <summary>
        /// 人物id
        /// </summary>
        public int id;
        /// <summary>
        /// 名字
        /// </summary>
        public string name;
        /// <summary>
        /// 时间场景1
        /// </summary>
        public List<int>time1 = new List<int>();
        public Background GetTime1(int key)
        { 
              return ConfigBackground.Get(key);
        } 
        /// <summary>
        /// 时间场景2
        /// </summary>
        public List<int>time2 = new List<int>();
        public Background GetTime2(int key)
        { 
              return ConfigBackground.Get(key);
        } 
        /// <summary>
        /// 时间场景3
        /// </summary>
        public List<int>time3 = new List<int>();
        public Background GetTime3(int key)
        { 
              return ConfigBackground.Get(key);
        } 
        /// <summary>
        /// 时间场景4
        /// </summary>
        public List<int>time4 = new List<int>();
        public Background GetTime4(int key)
        { 
              return ConfigBackground.Get(key);
        } 
        /// <summary>
        /// 场景服装1
        /// </summary>
        public List<string>clothes1 = new List<string>();
        /// <summary>
        /// 场景服装2
        /// </summary>
        public List<string>clothes2 = new List<string>();
        /// <summary>
        /// 场景服装3
        /// </summary>
        public List<string>clothes3 = new List<string>();
        /// <summary>
        /// 场景服装4
        /// </summary>
        public List<string>clothes4 = new List<string>();
    }

    [System.Serializable]
    public class ConfigRole
    { 
        public static string[] split = new string[] { "," };
        public static string[] splitArray = new string[] { ";", "[", "]" };

        private static ConfigRole instance;
        public static ConfigRole Instance
        { 
            get 
            { 
                if (instance==null) 
                { 
                     instance = new ConfigRole ();
                } 
                return instance;
            } 
        } 

        public Dictionary<int , Role> dic = new Dictionary<int , Role>();

        public List<Role> list = new List<Role>();

        public static Role Get(int id)
        {
            Role temp;
            Instance.dic.TryGetValue(id, out temp);
            return temp;
        }

        public void StartAnalysis()
        {
            TextAsset textAsset  = HFResourceManager.Instance.GetAsset<TextAsset>("Config","Role");
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
                    Role config = new Role();
                    string[] air = null;
                    int.TryParse(strs[0], out config.id);
                    config.name = strs[1];
                    air = strs[2].Split(splitArray, StringSplitOptions.RemoveEmptyEntries);
                    for (int x = 0; x < air.Length; x++)
                    {
                       int ite = 0;
                       int.TryParse(air[x], out ite);
                       config.time1.Add(ite);
                     }
                    air = strs[3].Split(splitArray, StringSplitOptions.RemoveEmptyEntries);
                    for (int x = 0; x < air.Length; x++)
                    {
                       int ite = 0;
                       int.TryParse(air[x], out ite);
                       config.time2.Add(ite);
                     }
                    air = strs[4].Split(splitArray, StringSplitOptions.RemoveEmptyEntries);
                    for (int x = 0; x < air.Length; x++)
                    {
                       int ite = 0;
                       int.TryParse(air[x], out ite);
                       config.time3.Add(ite);
                     }
                    air = strs[5].Split(splitArray, StringSplitOptions.RemoveEmptyEntries);
                    for (int x = 0; x < air.Length; x++)
                    {
                       int ite = 0;
                       int.TryParse(air[x], out ite);
                       config.time4.Add(ite);
                     }
                    air = strs[6].Split(splitArray, StringSplitOptions.RemoveEmptyEntries);
                    for (int x = 0; x < air.Length; x++)
                    {
                       config.clothes1.Add(air[x]);
                     }
                    air = strs[7].Split(splitArray, StringSplitOptions.RemoveEmptyEntries);
                    for (int x = 0; x < air.Length; x++)
                    {
                       config.clothes2.Add(air[x]);
                     }
                    air = strs[8].Split(splitArray, StringSplitOptions.RemoveEmptyEntries);
                    for (int x = 0; x < air.Length; x++)
                    {
                       config.clothes3.Add(air[x]);
                     }
                    air = strs[9].Split(splitArray, StringSplitOptions.RemoveEmptyEntries);
                    for (int x = 0; x < air.Length; x++)
                    {
                       config.clothes4.Add(air[x]);
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
