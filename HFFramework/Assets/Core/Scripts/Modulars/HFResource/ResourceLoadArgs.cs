using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    public class ResourceLoadArgs
    {
        public bool canceled = false;

        public void SetCanceled()
        {
            canceled = true;
        }
    }
}
