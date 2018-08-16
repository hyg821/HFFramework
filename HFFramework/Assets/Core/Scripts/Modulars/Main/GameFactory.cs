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

        public static T AddComponent<T>(GameObject obj) where T : MonoBehaviour
        {
            return  obj.AddComponent<T>();
        }

        public static T GetComponent<T>(GameObject obj) where T : MonoBehaviour
        {
            return obj.GetComponent<T>();
        }

        public void DestroyManager()
        {
            Instance = null;
        }
    }

}