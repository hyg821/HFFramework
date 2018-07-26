using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HotFix
{
    public class ObjectPool
    {
        public string name;

        public Queue<IPoolInterface> pool = new Queue<IPoolInterface>();

        private ObjectPool()
        {

        }

        public ObjectPool (string name)
        {
            this.name = name;
        }

        /// <summary>
        ///  吃一个对象
        /// </summary>
        /// <param name="i"></param>
        public void Eat(IPoolInterface i)
        {
            pool.Enqueue(i);
            i.BeEat();
        }

        /// <summary>
        ///  吐一个对象
        /// </summary>
        /// <returns></returns>
        public IPoolInterface Vomiting()
        {
            if (pool.Count>0)
            {
                IPoolInterface i = pool.Dequeue();
                i.BeVomiting();
                return  i;
            }
            return null;
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
        }
    }
}
