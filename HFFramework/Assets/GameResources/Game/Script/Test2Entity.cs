using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework.Demo
{
    public class Test2Entity : Entity,IDataPropertyObserver
    {
        public override void Awake()
        {
            base.Awake();
            Test2DataComponent t2 = AddCompoment<Test2DataComponent>();
            t2.hp.OnValueChanged(this, HPChanged);
        }

        public void HPChanged(int value)
        {
            HFLog.C("血量： " + value);
        }
    }
}

