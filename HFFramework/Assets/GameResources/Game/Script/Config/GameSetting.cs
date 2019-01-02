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
    public class GameSetting
    { 
        /// <summary>
        /// 模式
        /// <summary>
        public string id;
        /// <summary>
        /// 开发类型
        /// <summary>
        public string Mode;
        /// <summary>
        /// app版本
        /// <summary>
        public string AppVersion;
        /// <summary>
        ///  资源版本
        /// <summary>
        public string ResourceVersion;
        /// <summary>
        /// 是否热更新检测
        /// <summary>
        public bool AssetbundleName;
        /// <summary>
        /// 是否开启log
        /// <summary>
        public bool IsOpenLog;
        /// <summary>
        /// log是否写入本地
        /// <summary>
        public bool IsOpenLoaclLog;
        /// <summary>
        /// 模拟设备宽度
        /// <summary>
        public float ServerSceneWidth;
        /// <summary>
        /// 模拟设备高度
        /// <summary>
        public float ServerSceneHeight;
        /// <summary>
        /// update帧数
        /// <summary>
        public int TargetFrame;
        /// <summary>
        /// fixed帧数
        /// <summary>
        public int FixedUpdateFrame;
    }

    [System.Serializable]
    public class ConfigGameSetting
    { 
        public static string[] split = new string[] { "," };
        public static string[] splitArray = new string[] { ";", "[", "]" };

        private static ConfigGameSetting instance;
        public static ConfigGameSetting Instance
        { 
            get 
            { 
                if (instance==null) 
                { 
                     instance = new ConfigGameSetting ();
                } 
                return instance;
            } 
        } 

        public Dictionary<string , GameSetting> dic = new Dictionary<string , GameSetting>();

        public List<GameSetting> list = new List<GameSetting>();

        public  static GameSetting Get(string id)
        {
            GameSetting temp;
            Instance.dic.TryGetValue(id, out temp);
            return temp;
        }

        public void StartAnalysis()
        {
            AssetBundlePackage package = HFResourceManager.Instance.LoadAssetBundleFromFile("Config");
            TextAsset textAsset = package.LoadAssetWithCache<TextAsset>("GameSetting");
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
                    GameSetting config = new GameSetting();
                    string[] air = null;
                    config.id = strs[0];
                    config.Mode = strs[1];
                    config.AppVersion = strs[2];
                    config.ResourceVersion = strs[3];
                    bool.TryParse(strs[4], out config.AssetbundleName);
                    bool.TryParse(strs[5], out config.IsOpenLog);
                    bool.TryParse(strs[6], out config.IsOpenLoaclLog);
                    float.TryParse(strs[7], out config.ServerSceneWidth);
                    float.TryParse(strs[8], out config.ServerSceneHeight);
                    int.TryParse(strs[9], out config.TargetFrame);
                    int.TryParse(strs[10], out config.FixedUpdateFrame);
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
