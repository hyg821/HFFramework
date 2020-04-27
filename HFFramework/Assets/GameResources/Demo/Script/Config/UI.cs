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
    public class UI
    { 
        /// <summary>
        /// 类型（ClassName）
        /// </summary>
        public string Type;
        /// <summary>
        /// 层级
        /// </summary>
        public int LayerIndex;
        /// <summary>
        /// 包名
        /// </summary>
        public string AssetbundleName;
        /// <summary>
        /// 资源名字
        /// </summary>
        public string AssetName;
        /// <summary>
        /// 显示动画
        /// </summary>
        public string ShowAnimation;
        /// <summary>
        /// 消失动画
        /// </summary>
        public string HideAnimation;
        /// <summary>
        /// 缓存类型
        /// </summary>
        public int CacheType;
    }

    [System.Serializable]
    public class ConfigUI
    { 
        public static string[] split = new string[] { "," };
        public static string[] splitArray = new string[] { ";", "[", "]" };

        private static ConfigUI instance;
        public static ConfigUI Instance
        { 
            get 
            { 
                if (instance==null) 
                { 
                     instance = new ConfigUI ();
                } 
                return instance;
            } 
        } 

        public Dictionary<string , UI> dic = new Dictionary<string , UI>();

        public List<UI> list = new List<UI>();

        public static UI Get(string id)
        {
            UI temp;
            Instance.dic.TryGetValue(id, out temp);
            return temp;
        }

        public void StartAnalysis()
        {
            TextAsset textAsset  = HFResourceManager.Instance.GetAsset<TextAsset>("Config","UI");
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
                    UI config = new UI();
                    string[] air = null;
                    config.Type = strs[0];
                    int.TryParse(strs[1], out config.LayerIndex);
                    config.AssetbundleName = strs[2];
                    config.AssetName = strs[3];
                    config.ShowAnimation = strs[4];
                    config.HideAnimation = strs[5];
                    int.TryParse(strs[6], out config.CacheType);
                    dic.Add(config.Type, config );
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
