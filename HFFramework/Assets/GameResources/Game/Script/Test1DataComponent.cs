﻿using HFFramework;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework.Demo
{
    public class Test1DataComponent : DataComponent
    {
        public Vector3 position;
        public Timer timer;

        public override void Awake()
        {
            base.Awake();
            timer = TimerManager.Schedule(0.05f, 0, -1, Update);
        }

        public float time;

        public void Update(Timer timer)
        {
            time += timer.interval;
            if (time > 1)
            {
                time = 0;
            }

            float r = 5;
            float a = 360 * time;
            //HFLog.C("角度 " + a);
            a *= Mathf.Deg2Rad;
            //HFLog.C("弧度 " + a);

            position = new Vector3(r * Mathf.Cos(a), r * Mathf.Sin(a), 0);
            SetValue("position", position,true);
        }

        public override void OnDestroy()
        {
            TimerManager.CloseTimer(timer);
            base.OnDestroy();
        }
    }
}
