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
    }
}
