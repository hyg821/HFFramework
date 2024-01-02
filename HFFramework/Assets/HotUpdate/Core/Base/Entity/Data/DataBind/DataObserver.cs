using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    public class DataObserver<T>
    {
        public IDataPropertyObserver observer;
        public Action<T> notify;

        public DataObserver(IDataPropertyObserver observer, Action<T> notify)
        {
            this.observer = observer;
            this.notify = notify;
        }

        public void Clear()
        {
            observer = null;
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