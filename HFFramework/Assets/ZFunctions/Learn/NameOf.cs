using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework.Functions
{
    public class NameOf : MonoBehaviour
    {
        int hyg;

        List<int> hyg1 = null; 

        public void ZZZ()
        {

        }

        public void Awake()
        {
            print(nameof(hyg));
            print(nameof(hyg1));
            print(nameof(NameOf));
            print(nameof(ZZZ));
            print(nameof(ZZZ).GetType());
        }
    }
}
