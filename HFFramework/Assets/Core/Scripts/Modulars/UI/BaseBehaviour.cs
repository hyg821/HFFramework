using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    public class BaseBehaviour : MonoBehaviour
    {
        public void SetParent(GameObject parent, bool worldPositionStays = false)
        {
            transform.SetParent(parent.transform);
        }
    }
}

