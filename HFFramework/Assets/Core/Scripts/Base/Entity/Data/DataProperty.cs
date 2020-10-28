using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

namespace HFFramework
{
    public class DataProperty<T> where T: IComparable
    {
        private T m_value;

        public virtual T value
        {
            get
            {
                return m_value;
            }
        }

        private List<Observer<T>> notifyList = new List<Observer<T>>();

        public virtual void SetValue(T value,bool notify = true)
        {
            if (Compare<T>.CompareGeneric(m_value, value))
            {
                m_value = value;
                if (notify)
                {
                    Dispatch();
                }
            }
        }

        public void OnValueChanged(Entity entity,Action<T> notify)
        {
            Observer<T> dop = new Observer<T>(entity, notify);
            notifyList.Add(dop);
        }

        private void Dispatch()
        {
            for (int i = notifyList.Count-1; i >=0 ; i--)
            {
                Observer<T> observer = notifyList[i];
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

    public class Observer<T>
    {
        public Entity entity;
        public Action<T> notify;

        public Observer(Entity entity, Action<T> notify)
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

    public class Compare<T> where T : IComparable
    {
        //使用泛型实现的比较方法
        public static bool CompareGeneric(T t1, T t2)
        {
            if (t1.CompareTo(t2) > 0)
            {
                return false;
            }
            else
            {
                return true;
            }
        }
    }
}
