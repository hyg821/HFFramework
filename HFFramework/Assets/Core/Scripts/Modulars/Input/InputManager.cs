using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    public class InputManager : MonoBehaviour
    {
        public static InputManager Instance;

        void Awake()
        {
            Instance = this;
        }

        // Use this for initialization
        void Start()
        {

        }

        public void DestroyManager()
        {
            Instance = null;
        }
    }
}



