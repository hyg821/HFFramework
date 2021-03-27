using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework.Demo
{
    public class Test1Entity : Entity
    {
        public override void Awake()
        {
            base.Awake();
            IsNeedUpdate = true;
            AddComponent<Test1BehaviorComponent>();
            AddComponent<Test1DataComponent>();
        }
    }
}

