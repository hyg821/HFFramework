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
    public class ConfigManager
    { 
        private static ConfigManager instance;
        public static ConfigManager Instance
        { 
            get 
            { 
                if (instance==null) 
                { 
                     instance = new ConfigManager ();
                } 
                return instance;
            } 
        } 

        public void Init()
        { 
            ConfigAddress.Instance.Init();
            ConfigMan.Instance.Init();
            ConfigUI.Instance.Init();
            ResourceManager.Instance.UnloadAssetBundle("Config", true); 
            GC.Collect();
        } 

        public void Dispose()
        {
            ConfigAddress.Instance.Dispose();
            ConfigMan.Instance.Dispose();
            ConfigUI.Instance.Dispose();
            instance = null;
            GC.Collect();
        }
    } 
} 
