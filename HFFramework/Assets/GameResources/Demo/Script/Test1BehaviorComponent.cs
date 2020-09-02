using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

namespace HFFramework.Demo
{
    public class Test1BehaviorComponent : BehaviorComponent
    {

        Test1DataComponent data;

        Vector3 value;

        public override void Awake()
        {
            base.Awake();
        }

        public override void Start()
        {
            base.Start();
            data = entity.GetCompoment<Test1DataComponent>();
            data.AddObserver("position", DataChanged);
        }

        public void DataChanged(DataComponent data)
        {
            Test1DataComponent t1 = data as Test1DataComponent;
            value = t1.position;
        }

        public override void OnUpdate(float deltaTime)
        {
            base.OnUpdate(deltaTime);
            float x = Mathf.Lerp(entity.transform.position.x, value.x, 0.1f);
            float y = Mathf.Lerp(entity.transform.position.y, value.y, 0.1f);
            entity.transform.position = new Vector3(x, y, 0);
        }
    }
}
