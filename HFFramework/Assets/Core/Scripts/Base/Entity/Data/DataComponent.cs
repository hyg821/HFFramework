using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Reflection;

namespace HFFramework
{
    /// <summary>
    ///  数据层
    /// </summary>
    public class DataComponent : Component
    {
        private Dictionary<string, ReflectionDataObserver> observers = new Dictionary<string, ReflectionDataObserver>();

        private Type type;

        public override void Awake()
        {
            base.Awake();
            type = GetType();
        }

        public void AddObserver(string key,Action<DataComponent> onValueChanged)
        {
            ReflectionDataObserver observer = GetObserver(key);
            observer.AddEvent(onValueChanged);
        }

        public void RemoveObserver(string key, Action<DataComponent> onValueChanged)
        {
            ReflectionDataObserver observer;
            if (observers.TryGetValue(key, out observer))
            {
                observer.RemoveEvent(onValueChanged);
            }
        }

        public void SetValue<T>(string key,T value,bool notify = false)
        {
            ReflectionDataObserver observer = GetObserver(key);
            if (observer.fieldInfo!=null)
            {
                observer.fieldInfo.SetValue(this, value);
                if (notify)
                {
                    observer.Invoke(this);
                }
                return;
            }

            if (observer.propertyInfo!=null)
            {
                observer.propertyInfo.SetValue(this, value);
                if (notify)
                {
                    observer.Invoke(this);
                }
                return;
            }
        }


        public ReflectionDataObserver GetObserver(string key)
        {
            ReflectionDataObserver observer;
            if (!observers.TryGetValue(key, out observer))
            {
                observer = new ReflectionDataObserver(key, type);
                observers.Add(key, observer);
            }
            return observer;
        }

        public override void OnDestroy()
        {
            foreach (var item in observers)
            {
                item.Value.Destroy();
            }
            observers.Clear();
            observers = null;
            type = null;
            base.OnDestroy();
        }
    }
}


