using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Text;
using System.IO;
using System;
using HFFramework;
namespace HFConfig
{ 
    public class HFTableManager
    { 
        private static HFTableManager instance;
        public static HFTableManager Instance
        { 
            get 
            { 
                if (instance==null) 
                { 
                     instance = new HFTableManager ();
                } 
                return instance;
            } 
        } 
        public void Init()
        { 
            HFTableItem.Instance.StartAnalysis();
            HAResourceManager.Instance.UnloadAssetBundle("Config", false); 
        } 
    } 
} 
