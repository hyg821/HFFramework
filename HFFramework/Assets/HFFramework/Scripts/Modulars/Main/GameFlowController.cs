using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    public class GameFlowController : MonoBehaviour
    {
        public static GameFlowController self;

        private void Awake()
        {
            self = this;
        }
    }
}

