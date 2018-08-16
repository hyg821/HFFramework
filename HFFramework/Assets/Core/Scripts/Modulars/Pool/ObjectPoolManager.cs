using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    /// <summary>
    /// 对象池 只适合 继承IPoolInterface 接口的对象才能使用 （缺点）
    /// </summary>
    public class ObjectPoolManager : MonoBehaviour, IManager
    {
        public static ObjectPoolManager Instance;

        private Dictionary<string, ObjectPool> cache = new Dictionary<string, ObjectPool>();

        private void Awake()
        {
            Instance = this;
        }

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
                pool = GameFactory.Create<ObjectPool>(name);
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

        public void DestroyManager()
        {
            Instance = null;
            foreach (var item in cache)
            {
                item.Value.Destroy();
            }
            cache.Clear();
        }
    }

}