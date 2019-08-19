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
    public class Background
    { 
        /// <summary>
        /// id
        /// </summary>
        public int id;
        /// <summary>
        /// 资源名称
        /// </summary>
        public string name;
        /// <summary>
        /// 场景类型
        /// </summary>
        public int type;
    }

    [System.Serializable]
    public class ConfigBackground
    { 
        public static string[] split = new string[] { "," };
        public static string[] splitArray = new string[] { ";", "[", "]" };

        private static ConfigBackground instance;
        public static ConfigBackground Instance
        { 
            get 
            { 
                if (instance==null) 
                { 
                     instance = new ConfigBackground ();
                } 
                return instance;
            } 
        } 

        public Dictionary<int , Background> dic = new Dictionary<int , Background>();

        public List<Background> list = new List<Background>();

        public static Background Get(int id)
        {
            Background temp;
            Instance.dic.TryGetValue(id, out temp);
            return temp;
        }

        public void StartAnalysis()
        {
            TextAsset textAsset  = HFResourceManager.Instance.GetAsset<TextAsset>("Config","Background");
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
                    Background config = new Background();
                    string[] air = null;
                    int.TryParse(strs[0], out config.id);
                    config.name = strs[1];
                    int.TryParse(strs[2], out config.type);
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
