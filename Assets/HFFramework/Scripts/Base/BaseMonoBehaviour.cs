using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BaseMonoBehaviour : MonoBehaviour {

    public Transform m_Transform;

	void Awake(){
        m_Transform = gameObject.transform;
	}
}
