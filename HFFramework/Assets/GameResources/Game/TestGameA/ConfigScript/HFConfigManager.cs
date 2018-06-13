using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Text;
using System.IO;
using System;
using HFFramework;
namespace HFConfig
{ 
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
            HFConfigItem.Instance.StartAnalysis();
            HAResourceManager.Instance.UnloadAssetBundle("Config", false); 
        } 
    } 
} 
