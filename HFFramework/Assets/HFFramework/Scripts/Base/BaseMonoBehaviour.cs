using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    public class BaseMonoBehaviour : MonoBehaviour
    {
        public Transform m_Transform;
        public void Awake()
        {
            m_Transform = gameObject.transform;
        }
    }
}
