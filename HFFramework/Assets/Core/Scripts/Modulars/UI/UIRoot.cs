using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    public class UIRoot : BaseMonoBehaviour
    {
        public override void MyAwake()
        {
            base.MyAwake();
            myTransform.position = Vector3.zero;
            transform.rotation = Quaternion.identity;
        }
    }
}
