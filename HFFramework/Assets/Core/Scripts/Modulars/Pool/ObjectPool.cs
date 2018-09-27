using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    public class ObjectPool : MonoBehaviour
    {
        public Stack<IPool> pool = new Stack<IPool>();
        public Func<IPool> Create;

        /// <summary>
        ///  必须要调用的方法 否则有可能 吐出对象为 null
        /// </summary>
        /// <param name="CreateFunc"></param>
        public void Init(Func<IPool> CreateFunc)
        {
            this.Create = CreateFunc;
        }

        /// <summary>
        ///  吃一个对象
        /// </summary>
        /// <param name="i"></param>
        public void Eat(IPool i)
        {
            pool.Push(i);
            i.BeEat();
        }

        /// <summary>
        ///  吐一个对象
        /// </summary>
        /// <returns></returns>
        public IPool Vomiting()
        {
            IPool temp = null;
            if (pool.Count > 0)
            {
                temp = pool.Pop();
            }
            else
            {
                if (Create!=null)
                {
                    temp = Create();
                }
            }
            if (temp!=null)
            {
                temp.BeVomiting();
            }
            return temp;
        }

        /// <summary>
        ///  通过ObjectPoolManager 调用销毁方法
        /// </summary>
        public void Destroy()
        {
            foreach (var item in pool)
            {
                item.BeDestroy();
            }
            pool.Clear();
            Create = null;
        }
    }
}
