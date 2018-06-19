using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Text;
using System.IO;
using System;
using HFFramework;

namespace HFConfig
{ 
    public class UI
    { 
        /// <summary>
        /// 名字
        /// <summary>
        public string type;
        /// <summary>
        /// 包名
        /// <summary>
        public string assetbundleName;
        /// <summary>
        /// 预设体名字
        /// <summary>
        public string prefabName;
        /// <summary>
        /// 显示层级
        /// <summary>
        public int layerIndex;
        /// <summary>
        /// 缓存模式
        /// <summary>
        public int cacheType;
        /// <summary>
        /// 打开动画
        /// <summary>
        public string openAnimation;
        /// <summary>
        /// 关闭动画
        /// <summary>
        public string closeAnimation;
        /// <summary>
        /// 互斥组
        /// <summary>
        public int mutexId;
        /// <summary>
        /// 类名
        /// <summary>
        public string className;
    }

    public class HFConfigUI
    { 

        public static string[] split = new string[] { "," };
        public static string[] splitArray = new string[] { ";", "[", "]" };

        private static HFConfigUI instance;
        public static HFConfigUI Instance
        { 
            get 
            { 
                if (instance==null) 
                { 
                     instance = new HFConfigUI ();
                } 
                return instance;
            } 
        } 

        public Dictionary<string , UI> dic = new Dictionary<string , UI>();

        public List<UI> list = new List<UI>();

        public UI Get(string id)
        {
            UI temp;
            dic.TryGetValue(id, out temp);
            return temp;
        }

        public void StartAnalysis()
        {
            AssetBundlePackage package = HAResourceManager.Instance.LoadAssetBundleFromFile("Config");
            TextAsset textAsset = package.LoadAssetWithCache<TextAsset>("UI");
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
                    UI config = new UI();
                    config.type = strs[0];
                    config.assetbundleName = strs[1];
                    config.prefabName = strs[2];
                    int.TryParse(strs[3], out config.layerIndex);
                    int.TryParse(strs[4], out config.cacheType);
                    config.openAnimation = strs[5];
                    config.closeAnimation = strs[6];
                    int.TryParse(strs[7], out config.mutexId);
                    config.className = strs[8];
                    dic.Add(config.type, config );
                    list.Add(config);
               }
           }
        }
    }
}
