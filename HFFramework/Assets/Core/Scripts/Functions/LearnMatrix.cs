using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    public class LearnMatrix : MonoBehaviour
    {
        void Start()
        {
            print(gameObject.transform.localToWorldMatrix);
        }
    }
}

