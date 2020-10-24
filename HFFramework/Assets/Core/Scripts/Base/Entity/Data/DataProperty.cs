using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

namespace HFFramework
{
    public class DataProperty<T>
    {
        private T m_value;

        public virtual T value
        {
            get
            {
                return m_value;
            }
        }

        private List<DataObserverPackage<T>> notifyList = new List<DataObserverPackage<T>>();

        public virtual void SetValue(T value,bool notify = true)
        {
            m_value = value;
            if (notify)
            {
                Dispatch();
            }
        }

        public void OnValueChanged(Entity entity,Action<T> notify)
        {
            DataObserverPackage<T> dop = new DataObserverPackage<T>(entity, notify);
            notifyList.Add(dop);
        }

        private void Dispatch()
        {
            for (int i = notifyList.Count-1; i >=0 ; i--)
            {
                DataObserverPackage<T> observer = notifyList[i];
                if (observer.entity.IsDisposed)
                {
                    observer.Clear();
                    notifyList.RemoveAt(i);
                }
                else
                {
                    observer.notify(value);
                }
            }
        }

        public void Clear()
        {
            for (int i = 0; i < notifyList.Count; i++)
            {
                notifyList[i].Clear();
            }
            notifyList.Clear();
        }
    }

    public class DataObserverPackage<T>
    {
        public Entity entity;
        public Action<T> notify;

        public DataObserverPackage(Entity entity, Action<T> notify)
        {
            this.entity = entity;
            this.notify = notify;
        }

        public void Clear()
        {
            entity = null;
            notify = null;
        }
    }
}
