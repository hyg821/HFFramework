using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    public class GameFlowController : MonoBehaviour
    {
        public static GameFlowController Instance;

        private void Awake()
        {
            Instance = this;
        }
    }
}

