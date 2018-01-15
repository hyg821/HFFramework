using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    public class InputManager : MonoBehaviour
    {
        public static InputManager self;

        void Awake()
        {
            self = this;
        }

        // Use this for initialization
        void Start()
        {

        }

        public void DestroyManager()
        {
            self = null;
        }
    }
}



