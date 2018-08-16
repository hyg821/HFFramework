using System;
using System.Collections;
using System.Collections.Generic;
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
        public static T Create<T>(string name,bool isDontDestroy = false) where T : MonoBehaviour
        {
            GameObject temp = new GameObject();
            T t1 = temp.AddComponent<T>();
            temp.name = name;
            if (isDontDestroy)
            {
                GameObject.DontDestroyOnLoad(temp);
            }
            return t1;
        }

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

        public void DestroyManager()
        {
            Instance = null;
        }
    }

}