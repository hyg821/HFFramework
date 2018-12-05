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
    public class HFConfigManager
    { 
        private static HFConfigManager instance;
        public static HFConfigManager Instance
        { 
            get 
            { 
                if (instance==null) 
                { 
                     instance = new HFConfigManager ();
                } 
                return instance;
            } 
        } 

        public void Init()
        { 
            ConfigAddress.Instance.StartAnalysis();
            ConfigAttribute.Instance.StartAnalysis();
            ConfigBackground.Instance.StartAnalysis();
            ConfigChat.Instance.StartAnalysis();
            ConfigGameSetting.Instance.StartAnalysis();
            ConfigMan.Instance.StartAnalysis();
            ConfigRole.Instance.StartAnalysis();
            ConfigUI.Instance.StartAnalysis();
            HAResourceManager.Instance.UnloadAssetBundle("Config", true); 
            GC.Collect();
        } 

        public void Dispose()
        {
            ConfigAddress.Instance.Dispose();
            ConfigAttribute.Instance.Dispose();
            ConfigBackground.Instance.Dispose();
            ConfigChat.Instance.Dispose();
            ConfigGameSetting.Instance.Dispose();
            ConfigMan.Instance.Dispose();
            ConfigRole.Instance.Dispose();
            ConfigUI.Instance.Dispose();
            instance = null;
            GC.Collect();
        }
    } 
} 
