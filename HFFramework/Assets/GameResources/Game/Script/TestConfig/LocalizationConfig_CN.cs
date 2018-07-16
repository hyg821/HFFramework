using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Text;
using System.IO;
using System;
using HFFramework;

namespace HFConfig
{ 
    public class LocalizationConfig_CN
    { 
        /// <summary>
        /// 文本id
        /// <summary>
        public int id;
        /// <summary>
        /// 中文
        /// <summary>
        public string content;
    }

    public class HFConfigLocalizationConfig_CN
    { 

        public static string[] split = new string[] { "," };
        public static string[] splitArray = new string[] { ";", "[", "]" };

        private static HFConfigLocalizationConfig_CN instance;
        public static HFConfigLocalizationConfig_CN Instance
        { 
            get 
            { 
                if (instance==null) 
                { 
                     instance = new HFConfigLocalizationConfig_CN ();
                } 
                return instance;
            } 
        } 

        public Dictionary<int , LocalizationConfig_CN> dic = new Dictionary<int , LocalizationConfig_CN>();

        public List<LocalizationConfig_CN> list = new List<LocalizationConfig_CN>();

        public LocalizationConfig_CN Get(int id)
        {
            LocalizationConfig_CN temp;
            dic.TryGetValue(id, out temp);
            return temp;
        }

        public void StartAnalysis()
        {
            AssetBundlePackage package = HAResourceManager.Instance.LoadAssetBundleFromFile("Config");
            TextAsset textAsset = package.LoadAssetWithCache<TextAsset>("LocalizationConfig_CN");
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
                    LocalizationConfig_CN config = new LocalizationConfig_CN();
                    int.TryParse(strs[0], out config.id);
                    config.content = strs[1];
                    dic.Add(config.id, config );
                    list.Add(config);
               }
           }
        }
    }
}
