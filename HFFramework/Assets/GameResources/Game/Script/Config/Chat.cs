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
    public class Chat
    { 
        /// <summary>
        /// id
        /// <summary>
        public int id;
        /// <summary>
        /// 问题
        /// <summary>
        public string question;
        /// <summary>
        /// 选项A
        /// <summary>
        public string chooseA;
        /// <summary>
        /// 选项A类型
        /// <summary>
        public int chooseAtype;
        public Attribute ChooseAtype
        { 
            get 
            { 
                return ConfigAttribute.Get(chooseAtype);
            } 
        } 
        /// <summary>
        /// 选项A数值
        /// <summary>
        public int chooseAnum;
        /// <summary>
        /// 选项B
        /// <summary>
        public string chooseB;
        /// <summary>
        /// 选项B类型
        /// <summary>
        public int chooseBtype;
        public Attribute ChooseBtype
        { 
            get 
            { 
                return ConfigAttribute.Get(chooseBtype);
            } 
        } 
        /// <summary>
        /// 选项B数值
        /// <summary>
        public int chooseBnum;
        /// <summary>
        /// 选项C
        /// <summary>
        public string chooseC;
        /// <summary>
        /// 选项C类型
        /// <summary>
        public int chooseCtype;
        public Attribute ChooseCtype
        { 
            get 
            { 
                return ConfigAttribute.Get(chooseCtype);
            } 
        } 
        /// <summary>
        /// 选项C数值
        /// <summary>
        public int chooseCnum;
    }

    [System.Serializable]
    public class ConfigChat
    { 
        public static string[] split = new string[] { "," };
        public static string[] splitArray = new string[] { ";", "[", "]" };

        private static ConfigChat instance;
        public static ConfigChat Instance
        { 
            get 
            { 
                if (instance==null) 
                { 
                     instance = new ConfigChat ();
                } 
                return instance;
            } 
        } 

        public Dictionary<int , Chat> dic = new Dictionary<int , Chat>();

        public List<Chat> list = new List<Chat>();

        public  static Chat Get(int id)
        {
            Chat temp;
            Instance.dic.TryGetValue(id, out temp);
            return temp;
        }

        public void StartAnalysis()
        {
            AssetBundlePackage package = HAResourceManager.Instance.LoadAssetBundleFromFile("Config");
            TextAsset textAsset = package.LoadAssetWithCache<TextAsset>("Chat");
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
                    Chat config = new Chat();
                    string[] air = null;
                    int.TryParse(strs[0], out config.id);
                    config.question = strs[1];
                    config.chooseA = strs[2];
                    int.TryParse(strs[3], out config.chooseAtype);
                    int.TryParse(strs[4], out config.chooseAnum);
                    config.chooseB = strs[5];
                    int.TryParse(strs[6], out config.chooseBtype);
                    int.TryParse(strs[7], out config.chooseBnum);
                    config.chooseC = strs[8];
                    int.TryParse(strs[9], out config.chooseCtype);
                    int.TryParse(strs[10], out config.chooseCnum);
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
