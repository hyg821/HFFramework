using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    [Serializable]
    public class ObjectPool : MonoBehaviour
    {
        /// <summary>
        ///  create
        /// </summary>
        public Func<IPoolObject> Create;

        /// <summary>
        ///  容量
        /// </summary>
        public int capacity = 20;

        /// <summary>
        ///  pool
        /// </summary>
        private Stack<IPoolObject> pool = new Stack<IPoolObject>();

        /// <summary>
        ///  必须要调用的方法 否则有可能 吐出对象为 null
        /// </summary>
        /// <param name="CreateFunc"></param>
        public void Init(Func<IPoolObject> CreateFunc,int capacity = 20)
        {
            this.Create = CreateFunc;
            this.capacity = capacity;
        }

        /// <summary>
        ///  吃一个对象
        /// </summary>
        /// <param name="i"></param>
        public void Eat(IPoolObject i)
        {
            //如果小于容量 那么直接进入
            if (pool.Count<capacity)
            {
                pool.Push(i);
                i.BeEat();
            }
            //否则直接销毁
            else
            {
                i.BeEat();
                i.BeDestroy();
            }
        }

        /// <summary>
        ///  吐一个对象
        /// </summary>
        /// <returns></returns>
        public IPoolObject Vomiting()
        {
            IPoolObject temp = null;
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
