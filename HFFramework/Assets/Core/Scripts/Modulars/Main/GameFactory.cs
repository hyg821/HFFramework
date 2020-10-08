using System;
using System.Collections;
using System.Collections.Generic;
using UniRx.Async;
using UnityEngine;

namespace HFFramework
{
    /// <summary>
    /// 游戏工厂
    /// </summary>
    public class GameFactory : MonoBehaviour, IManager
    {
        public static GameFactory Instance;

        /// <summary>
        /// 单帧 加载数量限制
        /// </summary>
        public int instantiateLimit = 10;

        /// <summary>
        /// 创建出来的entity的引用集合
        /// </summary>
        private Dictionary<long, Entity> entityRefrences = new Dictionary<long, Entity>();

        /// <summary>
        /// 加载队列
        /// </summary>
        private Queue<InstantiateTask> instantiateQueue = new Queue<InstantiateTask>();

        private void Awake()
        {
            Instance = this;
        }

        /// <summary>
        ///  默认通过 传入一个泛型 mono 创建一个绑定了mono的gameObject
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        public static T CreateSingleton<T>() where T : MonoBehaviour,IManager
        {
            GameObject obj = new GameObject();
            T t = obj.AddComponent<T>();
            obj.name = typeof(T).Name;
            DontDestroyOnLoad(obj);
            return t;
        }

        /// <summary>
        ///  通过类型反射创建
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        public static T ReflectCreate<T>()
        {
            return Activator.CreateInstance<T>();
        }

        /// <summary>
        ///  普通类 只需要命名空间.类名即可 
        ///  Unity的对象 需要 UnityEngine.GameObject,UnityEngine 类似这样
        /// </summary>
        /// <param name="nameSpace"></param>
        /// <param name="className"></param>
        /// <returns></returns>
        public static object ReflectCreate(string name)
        {
            Type t = Type.GetType(name);
            return Activator.CreateInstance(t);
        }

        /// <summary>
        ///  销毁自己 new 出来的 object 比如texture
        /// </summary>
        /// <param name="asset"></param>
        public static void DestroyAsset(UnityEngine.Object asset)
        {
            UnityEngine.Object.Destroy(asset);
        }

        public static T NewEntity<T>() where T : Entity, new()
        {
            T t = new T();
            CacheEntity(t);
            return t;
        }

        public static T CreateEntity<T>() where T : Entity, new()
        {
            T t = NewEntity<T>();
            t.Awake();
            t.Start();
            return t;
        }

        public static T CreateEntity<T>(GameObject gameObject = null, Entity parent = null, bool worldPositionStays = false) where T : Entity, new()
        {
            T t = NewEntity<T>();
            t.SetGameObject(gameObject);
            if (parent!=null)
            {
                t.SetParent(parent, worldPositionStays);
            }
            t.Awake();
            t.Start();
            return t;
        }

        public static async UniTask<T> CreateEntityAsync<T>(string packageName, string assetName) where T : Entity, new()
        {
            try
            {
                T t = NewEntity<T>();
                t.isAsync = true;
                await t.LoadResourcesAsync(packageName, assetName);
                t.Awake();
                t.Start();
                return t;
            }
            catch (Exception e)
            {
                Debug.LogError(e);
                throw;
            }
        }

        public static T CreateComponent<T>(Entity entity) where T : Component, new()
        {
            T t = new T();
            t.SetEntity(entity);
            t.Awake();
            return t;
        }

        private static void CacheEntity<T>(T t)where T:Entity
        {
            if (!Instance.entityRefrences.ContainsKey(t.instanceID))
            {
                Instance.entityRefrences.Add(t.instanceID, t);
            }
            else
            {
                HFLog.E(typeof(T).Name + t.instanceID + "引用重复添加");
            }
        }

        public static void RemoveEntity<T>(T t) where T:Entity
        {
            if (Instance.entityRefrences.ContainsKey(t.instanceID))
            {
                Instance.entityRefrences.Remove(t.instanceID);
            }
            else
            {
                HFLog.E(typeof(T).Name + t.instanceID + "引用移除失败");
            }
        }

        public static GameObject Instantiate(GameObject prefab)
        {
            GameObject gameObject = GameObject.Instantiate(prefab);
            gameObject.name = prefab.name;
            return gameObject;
        }

        /// <summary>
        /// 单线程异步分帧加载
        /// </summary>
        /// <param name="prefab"></param>
        /// <returns></returns>
        public static UniTask<GameObject> InstantiateAsync(GameObject prefab)
        {
            UniTaskCompletionSource<GameObject> source = new UniTaskCompletionSource<GameObject>();
            InstantiateTask task = new InstantiateTask(prefab, source, null);
            Instance.instantiateQueue.Enqueue(task);
            return source.Task;
        }

        /// <summary>
        /// 单线程异步分帧加载
        /// </summary>
        /// <param name="prefab"></param>
        /// <returns></returns>
        public static void InstantiateAsync(GameObject prefab, Action<GameObject> callback)
        {
            InstantiateTask task = new InstantiateTask(prefab, null, callback);
            Instance.instantiateQueue.Enqueue(task);
        }

        public void Update()
        {
            int count = 0;
            if (instantiateQueue.Count > instantiateLimit)
            {
                count = instantiateLimit;
            }
            else
            {
                count = instantiateQueue.Count;
            }

            for (int i = 0; i < count; i++)
            {
                InstantiateTask task = instantiateQueue.Dequeue();
                GameObject result = Instantiate(task.prefab);
                if (task.callback!=null)
                {
                    task.callback(result);
                }
                if (task.completion!=null)
                {
                    task.completion.TrySetResult(result);
                }
            }
        }

        public void Shutdown()
        {
            entityRefrences.Clear();
            instantiateQueue.Clear();
            Instance = null;
        }
    }
}