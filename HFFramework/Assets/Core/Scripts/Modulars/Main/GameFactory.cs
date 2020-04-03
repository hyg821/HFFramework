using System;
using System.Collections;
using System.Collections.Generic;
using UniRx.Async;
using UnityEngine;

namespace HFFramework
{
    public class GameFactory : MonoBehaviour, IManager
    {
        public static GameFactory Instance;

        private void Awake()
        {
            Instance = this;
        }

        /// <summary>
        ///  默认通过 传入一个泛型 mono 创建一个绑定了mono的gameObject
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        public static T Create<T>(bool isDontDestroy = false, string name = null) where T : MonoBehaviour
        {
            GameObject temp = new GameObject();
            T t1 = temp.AddComponent<T>();
            temp.name = name==null?typeof(T).Name:name;
            if (isDontDestroy)
            {
                GameObject.DontDestroyOnLoad(temp);
            }
            return t1;
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

        public static GameObject Instantiate(GameObject prefab)
        {
            GameObject gameObject = GameObject.Instantiate(prefab);
            gameObject.name = prefab.name;
            return gameObject;
        }

        public static T CreateEntity<T>() where T : Entity, new()
        {
            T t = new T();
            t.Awake();
            return t;
        }

        public static T CreateEntity<T>(GameObject gameObject = null) where T : Entity, new()
        {
            T t = new T();
            t.SetGameObject(gameObject);
            t.Awake();
            return t;
        }

        public static T CreateEntity<T>(GameObject gameObject = null, Entity parent = null) where T : Entity, new()
        {
            T t = new T();
            t.parent = parent;
            t.SetGameObject(gameObject);
            t.Awake();
            return t;
        }

        public async static UniTask<T> CreateEntityAsync<T>(string packageName, string assetName) where T : Entity, new()
        {
            T t = new T();
            t.isAsync = true;
            await t.LoadResourcesAsync(packageName, assetName);
            t.Awake();
            return t;
        }

        public void DestroyManager()
        {
            Instance = null;
        }
    }

}