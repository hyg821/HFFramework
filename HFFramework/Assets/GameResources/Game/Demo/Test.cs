using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using HFFramework;

public class Test : MonoBehaviour {

	// Use this for initialization
	void Start () {
        for (int i = 0; i < 1; i++)
        {
            UIManager.Instance.AddCanvas(i);
        }
        LoginController controller = UIManager.Instance.GetController<LoginController>("Login");
    }
	
	// Update is called once per frame
	void Update () {
		
	}
}
