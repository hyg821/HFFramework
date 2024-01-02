using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework.Functions
{
    public class T2Type : MonoBehaviour
    {

        // Use this for initialization
        void Start()
        {
            Test<string>();
        }

        public void Test<T>()
        {
            Type type = typeof(T);
            print(type);

            bool b = gameObject.GetType() == typeof(T);
            print(b);
        }
    }
}


