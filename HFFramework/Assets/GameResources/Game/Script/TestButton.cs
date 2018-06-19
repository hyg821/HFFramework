using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using HFFramework;

public class TestButton : MonoBehaviour {

	// Use this for initialization
	void Start () {
        GetComponent<HFButton>().InitWithTagCallback(1, "hyg", delegate (string tg)
        {
            HFLog.L(tg);
        });
    }
}
