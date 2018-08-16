using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    public class InputManager : MonoBehaviour, IManager
    {
        public static InputManager Instance;

        void Awake()
        {
            Instance = this;
        }

        public void DestroyManager()
        {
            Instance = null;
        }
    }
}



