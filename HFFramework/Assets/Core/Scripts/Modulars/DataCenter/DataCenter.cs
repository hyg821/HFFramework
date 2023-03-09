using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    public class DataCenter : Entity
    {
        public Dictionary<Type, DataModel> datas = new Dictionary<Type, DataModel>();

        public override void Awake()
        {
            base.Awake();
        }

        public T Get<T>() where T : DataModel, new()
        {
            DataModel t = null;
            if (datas.TryGetValue(typeof(T),out t))
            {
                t = GameFactory.CreateEntity<T>();
                datas.Add(typeof(T),t);
            }
            return t as T;
        }
    }
}
