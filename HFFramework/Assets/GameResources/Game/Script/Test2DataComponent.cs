using HFFramework;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework.Demo
{
    public class Test2DataComponent : DataComponent
    {
        public DataProperty<int> hp = new DataProperty<int>();

        Timer timer;

        public override void Awake()
        {
            base.Awake();
            timer = TimerManager.Schedule(0.05f, 0, -1, Update);
        }

        public void Update(Timer timer)
        {
            hp.SetValue(hp.value + 1);
        }

        public override void OnDestroy()
        {
            Extensions.CloseTimer(timer);
            base.OnDestroy();
        }
    }
}
