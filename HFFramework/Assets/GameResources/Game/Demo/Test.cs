using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using HFFramework;
using Config;

public class Test : MonoBehaviour {

	// Use this for initialization
	void Start () {
        HFConfigManager.Instance.Init();
        print(ConfigItem.Get(10001).Module.id);
        print(ConfigItem.Get(10001).Module.type.Count);
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
