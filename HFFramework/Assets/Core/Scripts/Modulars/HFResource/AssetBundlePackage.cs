using System;
using System.Collections;
using System.Collections.Generic;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.U2D;

namespace HFFramework
{
    public class AssetBundlePackage
    {
        /// <summary>
        /// 名字
        /// </summary>
        public string name;

        /// <summary>
        ///  bundle
        /// </summary>
        public AssetBundle assetBundle;

        /// <summary>
        ///  引用计数 不需要手动修改
        /// </summary>
        public int refCount = 0;

        /// <summary>
        /// 是否正在卸载
        /// </summary>
        public bool unloading = false;

        /// <summary>
        ///  最好不要手动调用这个方法会使引用计数+1
        /// </summary>
        public void Retain()
        {
            refCount++;
            //HFLog.C("AssetBundle : " + name + " 引用计数 : " + refCount);
        }

        /// <summary>
        ///  最好不要手动调用这个方法会使引用计数-1
        /// </summary>
        public void Release()
        {
            if (refCount > 0)
            {
                refCount--;
            }
        }

        private Dictionary<string, UnityEngine.Object> cacheDic;
        public Dictionary<string, UnityEngine.Object> CacheDic
        {
            set
            {
                cacheDic = value;
            }
            get
            {
                if (cacheDic == null)
                {
                    cacheDic = new Dictionary<string, UnityEngine.Object>();
                }
                return cacheDic;
            }
        }

        public AssetBundlePackage(AssetBundle bundle, string name)
        {
            this.name = name.ToLower();
            assetBundle = bundle;
        }

        /// <summary>
        /// 不要手动调用这个接口 通过manager卸载
        /// </summary>
        /// <param name="t"></param>
        public void Unload(bool unloadAllLoadedObjects)
        {
            if (assetBundle != null)
            {
                unloading = false;
                refCount = 0;
                CacheDic.Clear();
                assetBundle.Unload(unloadAllLoadedObjects);
                CacheDic = null;
                assetBundle = null;
                name = null;
            }
        }

        /// <summary>
        ///  同步读取一个资源
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="name"></param>
        /// <returns></returns>
        public T LoadAsset<T>(string name) where T : UnityEngine.Object
        {
            if (CacheDic.ContainsKey(name))
            {
                return CacheDic[name] as T;
            }
            else
            {
                T t1 = assetBundle.LoadAsset<T>(name);
                if (t1 != null)
                {
                    CacheDic.Add(name, t1);
                }
                return t1;
            }
        }

        /// <summary>
        /// 做一个特殊判断 因为新图集有bug
        /// </summary>
        /// <param name="atlasName"></param>
        /// <param name="spriteName"></param>
        /// <returns></returns>
        public Sprite LoadSprite(string atlasName, string spriteName)
        {
            //先加载一下图集
            SpriteAtlas atlas = LoadAsset<SpriteAtlas>(atlasName);
            return m_loadSprite(atlas, spriteName);
        }

        private Sprite m_loadSprite(SpriteAtlas atlas, string spriteName)
        {
            if (CacheDic.ContainsKey(spriteName))
            {
                return CacheDic[spriteName] as Sprite;
            }
            else
            {
                Sprite sprite = atlas.GetSprite(spriteName);
                CacheDic.Add(spriteName, sprite);
                return sprite;
            }
        }

        public UnityEngine.Object LoadAsset(string name)
        {
            return LoadAsset<UnityEngine.Object>(name);
        }

        /// <summary>
        ///  异步读取一个资源
        /// </summary>
        /// <param name="name"></param>
        /// <returns></returns>
        public async UniTask<T> LoadAssetAsync<T>(string name) where T : UnityEngine.Object
        {
            try
            {
                UniTaskCompletionSource<T> completion = new UniTaskCompletionSource<T>();
                UnityEngine.Object obj = null;
                if (CacheDic.TryGetValue(name, out obj))
                {
                    completion.TrySetResult(obj as T);
                }
                else
                {
                    T t = await assetBundle.LoadAssetAsync<T>(name) as T;
                    CacheDic.Add(name, t);
                    completion.TrySetResult(t);
                }
                return await completion.Task;
            }
            catch (Exception e)
            {
                Debug.LogError(e);
                throw;
            }
        }

        /// <summary>
        ///  缓存所有的包内资源 
        /// </summary>
        public void CacheAllAsset()
        {
            UnityEngine.Object[] assetArray = assetBundle.LoadAllAssets();
            for (int i = 0; i < assetArray.Length; i++)
            {
                UnityEngine.Object asset = assetArray[i];
                if (!CacheDic.ContainsKey(asset.name))
                {
                    CacheDic.Add(asset.name, asset);
                }
            }
        }
    }
}

