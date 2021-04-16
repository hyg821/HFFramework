using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    public class AssetLoadArgs
    {
        public bool canceled = false;

        public void SetCanceled()
        {
            canceled = true;
        }
    }
}
