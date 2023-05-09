using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cysharp.Threading.Tasks;

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

        private static T NewEntity<T>(Entity domain = null) where T : Entity, new()
        {
            T t = new T();
            t.SetDomain(domain);
            return t;
        }


        public static T CreateEntity<T>(Entity domain = null) where T : Entity, new()
        {
            T t = NewEntity<T>(domain);
            t.Awake();
            t.Start();
            return t;
        }

        public static T CreateComponent<T>(Entity entity) where T : Component, new()
        {
            T t = new T();
            t.SetEntity(entity);
            t.Awake();
            return t;
        }

        public static T CreateEntity<T>(GameObject gameObject,GameObject parent = null,bool worldPositionStays = false,Entity domain = null) where T : Entity, new()
        {
            T t = NewEntity<T>();
            t.SetGameObject(gameObject);
            t.SetParent(parent,worldPositionStays);
            t.Awake();
            t.Start();
            return t;
        }

        public async static UniTask<T> CreateEntityAsync<T>(string packageName, string assetName) where T : Entity, new()
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

        public static UniTask<GameObject> InstantiateAsync(GameObject prefab)
        {
            return HFFramework.GameFactory.InstantiateAsync(prefab);
        }
    }
}
