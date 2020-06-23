using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Reflection;

namespace HFFramework
{
    public class DataObserver
    {
        public FieldInfo fieldInfo;

        public event Action<DataComponent> onValueChanged;

        public void AddEvent(Action<DataComponent> onValueChanged)
        {
            this.onValueChanged += onValueChanged;
        }

        public void RemoveEvent(Action<DataComponent> onValueChanged)
        {
            this.onValueChanged -= onValueChanged;
        }

        public void Invoke(DataComponent data)
        {
            if (onValueChanged!=null)
            {
                onValueChanged(data);
            }
        }

        public void Destroy()
        {
            onValueChanged = null;
        }
    }

    /// <summary>
    ///  数据层
    /// </summary>
    public class DataComponent : Entity
    {
        private Dictionary<string, DataObserver> observers = new Dictionary<string, DataObserver>();

        private Type type;

        public override void Awake()
        {
            base.Awake();
            type = GetType();
        }

        public void AddObserver(string key,Action<DataComponent> onValueChanged)
        {
            DataObserver observer;
            if (!observers.TryGetValue(key,out observer))
            {
                observer = new DataObserver();
                observers.Add(key, observer);
            }
            observer.AddEvent(onValueChanged);
        }

        public void RemoveObserver(string key, Action<DataComponent> onValueChanged)
        {
            DataObserver observer;
            if (observers.TryGetValue(key, out observer))
            {
                observer.RemoveEvent(onValueChanged);
            }
        }

        public void SetValue(string key,object value)
        {
            DataObserver observer;
            if (!observers.TryGetValue(key, out observer))
            {
                observer = new DataObserver();
                observers.Add(key, observer);
            }
            if (observer.fieldInfo==null)
            {
                observer.fieldInfo = type.GetField(key);
            }
            observer.fieldInfo.SetValue(this, value);
            observer.Invoke(this);
        }

        public override void Destroy()
        {
            foreach (var item in observers)
            {
                item.Value.Destroy();
            }
            observers.Clear();
            observers = null;
            type = null;
            base.Destroy();
        }
    }
}


