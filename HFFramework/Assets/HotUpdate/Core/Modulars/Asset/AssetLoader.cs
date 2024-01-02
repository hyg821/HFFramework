using System;
using System.Collections;
using System.Collections.Generic;
using Cysharp.Threading.Tasks;
#if UNITY_EDITOR
using UnityEditor;
#endif
using UnityEngine;
using UnityEngine.U2D;

namespace HFFramework
{
    public class AssetLoader
    {
        private Dictionary<string, AssetPackage> cacheDic;
        public Dictionary<string, AssetPackage> CacheDic
        {
            get
            {
                if (cacheDic == null)
                {
                    cacheDic = new Dictionary<string, AssetPackage>();
                }
                return cacheDic;
            }
        }
        
        public void Release()
        {
            foreach (var item in CacheDic)
            {
                AssetManager.Instance.ReleaseAssetBundle(item.Value.name);
            }
        }

        private AssetPackage GetAssetBundle(string packageName)
        {
            AssetPackage package = null;
            if (!CacheDic.TryGetValue(packageName,out package))
            {
                package = AssetManager.Instance.LoadAssetBundle(packageName);
            }
            return package;
        }
        
        /// <summary>
        ///  同步读取一个资源
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="name"></param>
        /// <returns></returns>
        public T LoadAsset<T>(string packageName,string name) where T : UnityEngine.Object
        {
#if UNITY_EDITOR
            return AssetDatabase.LoadAssetAtPath<T>(AssetManager.Instance.GetAssetPath(packageName,name));
#else
            
            AssetPackage package = GetAssetBundle(packageName);
            return package.LoadAsset<T>(name);
#endif
        }

        /// <summary>
        ///  异步读取一个资源
        /// </summary>
        /// <param name="name"></param>
        /// <returns></returns>
        public async UniTask<T> LoadAssetAsync<T>(string packageName,string name) where T : UnityEngine.Object
        {
#if UNITY_EDITOR
            return AssetDatabase.LoadAssetAtPath<T>(AssetManager.Instance.GetAssetPath(packageName,name));
#else
            AssetPackage package = GetAssetBundle(packageName);
            return await package.LoadAssetAsync<T>(name);
#endif
        }
    }
}

