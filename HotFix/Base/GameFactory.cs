using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniRx.Async;

namespace HotFix
{
    public class GameFactory
    {
        public static object ReflectCreate(string nameSpace,string className)
        {
            Type t = Type.GetType(nameSpace+ "." + className);
            object obj = Activator.CreateInstance(t);
            return obj;
        }

        public static T CreateEntity<T>() where T : Entity, new()
        {
            T t = new T();
            t.Awake();
            return t;
        }

        public static T CreateComponent<T>(GameObject gameObject) where T : Entity, new()
        {
            T t = new T();
            t.SetGameObject(gameObject);
            t.Awake();
            return t;
        }

        public static T CreateEntity<T>(GameObject gameObject = null, Entity parent = null, bool worldPositionStays = false) where T : Entity, new()
        {
            T t = new T();
            t.SetGameObject(gameObject);
            if (parent != null)
            {
                t.SetParent(parent, worldPositionStays);
            }
            t.Awake();
            return t;
        }

        public async static UniTask<T> CreateEntityAsync<T>(string packageName, string assetName) where T : Entity, new()
        {
            try
            {
                T t = new T();
                t.isAsync = true;
                await t.LoadResourcesAsync(packageName, assetName);
                t.Awake();
                return t;
            }
            catch (Exception e)
            {
                Debug.LogError(e);
                throw;
            }
        }

        public static async UniTask<GameObject> InstantiateAsync(GameObject prefab)
        {
            return await HFFramework.GameFactory.InstantiateAsync(prefab);
        }
    }
}
