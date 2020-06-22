using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework.Demo
{
    public class Test1BehaviorComponent : BehaviorComponent
    {

        Test1DataComponent data;

        public override void Awake()
        {
            base.Awake();
            IsNeedUpdate = true;
        }

        public override void Start()
        {
            base.Start();
            data = parent.GetCompoment<Test1DataComponent>();
        }

        public override void OnUpdate(float deltaTime)
        {
            base.OnUpdate(deltaTime);
            float x = Mathf.Lerp(transform.position.x, data.x, 0.1f);
            float y = Mathf.Lerp(transform.position.y, data.y, 0.1f);
            transform.position = new Vector3(x, y, 0);
        }
    }
}
