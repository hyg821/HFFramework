using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HotFix
{
    public class ObjectPoolManager : Entity
    {
        private Dictionary<string, ObjectPool> cache = new Dictionary<string, ObjectPool>();

        /// <summary>
        ///  获取一个Pool
        /// </summary>
        /// <param name="name"></param>
        /// <returns></returns>
        public ObjectPool GetObjectPool(string name)
        {
            ObjectPool pool;
            if (!cache.TryGetValue(name, out pool))
            {
                pool = new ObjectPool(name);
                cache.Add(name, pool);
            }
            return pool;
        }

        /// <summary>
        ///  销毁一个Pool
        /// </summary>
        /// <param name="name"></param>
        public void DestroyObjectPool(string name)
        {
            ObjectPool pool;
            if (cache.TryGetValue(name, out pool))
            {
                cache.Remove(name);
                pool.Destroy();
            }
        }

        public void Clear()
        {
            foreach (var item in cache)
            {
                item.Value.Destroy();
            }
            cache.Clear();
        }

        public override void Destory()
        {
            base.Destory();
            Clear();
        }
    }
}