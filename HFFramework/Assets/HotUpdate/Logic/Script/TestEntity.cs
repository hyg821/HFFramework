using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework.Demo
{
    public class TestEntity : Entity
    {
        public override void Awake()
        {
            base.Awake();
            IsNeedUpdate = true;
        }

        public float time;

        public override void OnUpdate(float deltaTime)
        {
            base.OnUpdate(deltaTime);
            time += deltaTime;
            if (time>1)
            {
                time = 0;
            }

            float r = 5;
            float a = 360 * time;
            //HFLog.C("角度 " + a);
            a *= Mathf.Deg2Rad;
            //HFLog.C("弧度 " + a);
            float x = r * Mathf.Cos(a);
            float y = r * Mathf.Sin(a);
            transform.position = new Vector3(x, y, 0);
        }
    }
}