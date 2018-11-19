using System;
using System.IO;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using Mono.Cecil.Pdb;

namespace HFFramework
{
    public class HAResourceManager : MonoBehaviour,IManager
    {
        // 注意 
        // 必须每一个场景一个包 并且场景不可以和别的资源放在同一个包里
        // 场景的包  热更新代码的包  Manifest包 不被管理  
        // 场景不可以依赖别的包里的资源 因为场景没有做依赖递归加载 
        // 如果有依赖请把依赖做成预设体 通过加载预设体的方式 实现

        public static HAResourceManager Instance;

        /// <summary>
        ///  assetbundle位置的根目录   默认的是所有的assetbundle 都放在一个文件夹下   
        /// </summary>
        public string ResourceRootPath;
        public string ResourceSpareRootPath;
        public string MainfestName;

        /// <summary>
        ///  缓存AssetBundlePackage字典
        /// </summary>
        public Dictionary<string, AssetBundlePackage> allAssetBundleDic = new Dictionary<string, AssetBundlePackage>();

        /// <summary>
        ///  主要记录AssetBundle 之间的互相引用
        /// </summary>
        private AssetBundleManifest manifest;

        public void Awake()
        {
            Instance = this;
        }

        /// <summary>
        ///  自动寻找Assetbundle 在 persistentDataPath文件夹下（优先）  或者 StreamingAssets 文件夹下
        /// </summary>
        /// <param name="path"> 基础路径 </param>
        /// <param name="isWWW"> 是否通过www读取</param>
        /// <returns></returns>
        public string AutoGetResourcePath(string path, bool isWWW)
        {
            string newPath;
            if (isWWW)
            {
                //如果持久化路径有 就直接用
                if (File.Exists(ResourceRootPath + path))
                {
                    newPath = "file://" + ResourceRootPath + path;
                }
                //否则使用 StreamingAssets 文件夹下的
                else
                {
                    if (GameEnvironment.Instance.runtimePlatform == GamePlatform.Android || GameEnvironment.Instance.runtimePlatform == GamePlatform.iOS)
                    {
                        newPath = ResourceSpareRootPath + path;
                    }
                    else
                    {
                        newPath = "file://" + ResourceSpareRootPath + path;
                    }
                }
            }
            else
            {
                //如果持久化路径有 就直接用
                if (File.Exists(ResourceRootPath + path))
                {
                    newPath = ResourceRootPath + path;
                }
                //否则使用 StreamingAssets 文件夹下的
                else
                {
                    newPath = ResourceSpareRootPath + path;
                }
            }

            return newPath;
        }

        /// <summary>
        ///  初始化方法 一般只执行一次
        /// </summary>
        /// <param name="path"></param>
        public void InitWithRootPath(string resourceRootPath, string resourceSpareRootPath, string mainfestName)
        {

            print("正式资源地址" + resourceRootPath);
            print("备用资源地址" + resourceSpareRootPath);
            Caching.ClearCache();

            if (!string.IsNullOrEmpty(resourceRootPath) && !string.IsNullOrEmpty(resourceSpareRootPath))
            {
                if (!string.Equals(resourceRootPath.Substring(resourceRootPath.Length - 1), @"/"))
                {
                    resourceRootPath = resourceRootPath + @"/";
                }

                if (!string.Equals(resourceSpareRootPath.Substring(resourceSpareRootPath.Length - 1), @"/"))
                {
                    resourceSpareRootPath = resourceSpareRootPath + @"/";
                }

                ResourceRootPath = resourceRootPath;
                ResourceSpareRootPath = resourceSpareRootPath;
                MainfestName = mainfestName;
                GetAssetBundleManifest();
            }
        }

        /// <summary>
        ///  拿到AssetBundleManifest 以便于收集 所有的assetbundle 依赖
        /// </summary>
        private void GetAssetBundleManifest()
        {
            AssetBundle manifestAB = AssetBundle.LoadFromFile(AutoGetResourcePath(MainfestName, false));  // 加载总ManifestAssetBundle
            if (manifestAB != null)
            {
                manifest = (AssetBundleManifest)manifestAB.LoadAsset("AssetBundleManifest");
                manifestAB.Unload(false);  // 释放AssetBundle
            }
        }

        /// <summary>
        ///  拿到具体的某一个Assetbundle 的所有依赖  很多情况需要递归加载
        /// </summary>
        /// <param name="assetbundleName"></param>
        /// <returns></returns>
        public string[] GetAssetBundleDependencies(string assetbundleName)
        {
            return manifest.GetAllDependencies(assetbundleName);  // 结果 sprite1.ab 
        }

        /// <summary>
        /// 获取 GameObject 通过缓存 不会自动销毁
        /// </summary>
        /// <param name="name"></param>
        /// <returns></returns>
        public GameObject GetPrefab(string packageName, string assetName)
        {
            AssetBundlePackage ab = HAResourceManager.Instance.LoadAssetBundleFromFile(packageName);
            GameObject g = ab.LoadAssetWithCache<GameObject>(assetName);
            return g;
        }

        /// <summary>
        /// 获取 Sprite 通过缓存 不会自动卸载
        /// </summary>
        /// <param name="name"></param>
        /// <returns></returns>
        public Sprite GetSprite(string packageName, string abName)
        {
            AssetBundlePackage ab = HAResourceManager.Instance.LoadAssetBundleFromFile(packageName);
            Sprite sp = ab.LoadAssetWithCache<Sprite>(abName);
            return sp;
        }

        /// <summary>
        /// 获取 Audio
        /// </summary>
        /// <param name="name"></param>
        /// <returns></returns>
        public AudioClip GetAudio(string packageName, string abName)
        {
            AssetBundlePackage ab = HAResourceManager.Instance.LoadAssetBundleFromFile(packageName);
            AudioClip audio = ab.LoadAssetWithCache<AudioClip>(abName);
            return audio;
        }

        /// <summary>
        ///  异步加载场景
        /// </summary>
        /// <param name="assetBundleName"></param>
        /// <param name="autoJump"></param>
        /// <param name="sceneName"></param>
        /// <param name="finishCallBack"></param>
        public void LoadScene(string assetBundleName, bool autoJump, string sceneName, Action finishCallback)
        {
            StartCoroutine(m_LoadScene(assetBundleName, autoJump, sceneName, finishCallback));
        }

        /// <summary>
        ///  加载场景  不参与 assetbundle的缓存  直接加载之后释放 所以场景里不要对别的包有依赖
        /// </summary>
        /// <param name="assetBundleName"></param>
        /// <param name="finishCallBack"></param>
        /// <returns></returns>
        private IEnumerator m_LoadScene(string assetBundleName, bool autoJump, string sceneName, Action finishCallback)
        {
            assetBundleName = assetBundleName.ToLower();
            WWW www = WWW.LoadFromCacheOrDownload(AutoGetResourcePath(assetBundleName, true), 0);
            yield return www;
            AssetBundle bundle = www.assetBundle;
            if (finishCallback != null && autoJump && !string.IsNullOrEmpty(sceneName))
            {
                yield return StartCoroutine(LoadSceneAsync(sceneName));
                bundle.Unload(false);
                www.Dispose();
                Resources.UnloadUnusedAssets();
                finishCallback();
            }
            else
            {
                bundle.Unload(false);
                www.Dispose();
                Resources.UnloadUnusedAssets();
                if (finishCallback != null)
                {
                    finishCallback();
                }
            }
        }

        private IEnumerator LoadSceneAsync(string sceneName)
        {
            AsyncOperation ab = SceneManager.LoadSceneAsync(sceneName);
            yield return ab;
        }

        /// <summary>
        ///  获取资源 在callback 之后自动卸载assetbundle 
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="packageName"></param>
        /// <param name="assetName"></param>
        /// <param name="callBack"></param>
        public void LoadAssetWithAutoKill<T>(string packageName, string assetName, Action<T> callback) where T : UnityEngine.Object
        {
            AssetBundlePackage ab = HAResourceManager.Instance.LoadAssetBundleFromFile(packageName);
            T ta = ab.assetBundle.LoadAsset<T>(assetName);
            callback(ta);
            UnloadAssetBundle(ab, false);
        }

        /// <summary>
        ///  获取资源 在callback 之后自动卸载assetbundle 并且销毁对应的prefab
        /// </summary>
        /// <param name="packageName"></param>
        /// <param name="assetName"></param>
        /// <param name="autoKillPrefab"></param>
        /// <param name="callBack"></param>
        public void LoadPrefabWithAutoKill(string packageName, string assetName, Action<GameObject> callback)
        {
            AssetBundlePackage ab = HAResourceManager.Instance.LoadAssetBundleFromFile(packageName);
            GameObject prefab = ab.assetBundle.LoadAsset<GameObject>(assetName);
            callback(prefab);
            UnloadAssetBundle(ab, false);
        }

        /// <summary>
        ///  一般来说，尽可能使用AssetBundle.LoadFromFile。该API在速度，磁盘使用率和运行时内存使用方面是最有效的
        /// </summary>
        public AssetBundlePackage LoadAssetBundleFromFile(string assetBundleName)
        {
            assetBundleName = assetBundleName.ToLower();
            string[] list = Instance.GetAssetBundleDependencies(assetBundleName);
            if (list.Length != 0)
            {
                for (int i = 0; i < list.Length; i++)
                {
                    LoadAssetBundleFromFile(list[i]);
                }
            }

            if (!allAssetBundleDic.ContainsKey(assetBundleName))
            {
                AssetBundle bundle = AssetBundle.LoadFromFile(AutoGetResourcePath(assetBundleName, false));
                //HFLog.L("同步加载AssetBundle   " + assetBundleName);
                AssetBundlePackage tmpAssetBundle = new AssetBundlePackage(bundle, assetBundleName);
                AddAssetBundleToDic(tmpAssetBundle);
                return tmpAssetBundle;
            }
            else
            {
                return allAssetBundleDic[assetBundleName];
            }
        }

        /// <summary>
        ///  异步递归加载 assetbundle
        /// </summary>
        /// <param name="assetBundleName"></param>
        /// <param name="finishCallback"></param>
        public void LoadAssetBundleFromFileAsync(string assetBundleName, Action<AssetBundlePackage> finishCallback)
        {
            StartCoroutine(m_LoadAssetBundleFromFileAsyncWithCallback(assetBundleName, finishCallback));
        }

        private IEnumerator m_LoadAssetBundleFromFileAsyncWithCallback(string assetBundleName, Action<AssetBundlePackage> finishCallback)
        {
            assetBundleName = assetBundleName.ToLower();
            yield return StartCoroutine(m_LoadAssetBundleFromFileAsync(assetBundleName));
            if (finishCallback != null)
            {
                finishCallback(allAssetBundleDic[assetBundleName]);
            }
        }

        private IEnumerator m_LoadAssetBundleFromFileAsync(string assetBundleName)
        {
            string[] list = Instance.GetAssetBundleDependencies(assetBundleName);
            if (list.Length != 0)
            {
                for (int i = 0; i < list.Length; i++)
                {
                    yield return StartCoroutine(m_LoadAssetBundleFromFileAsync(list[i]));
                }
            }

            if (!allAssetBundleDic.ContainsKey(assetBundleName))
            {
                AssetBundleCreateRequest request = AssetBundle.LoadFromFileAsync(AutoGetResourcePath(assetBundleName, false));
                //HFLog.L("异步加载AssetBundle   " + assetBundleName);
                yield return request;
                if (!allAssetBundleDic.ContainsKey(assetBundleName))
                {
                    AssetBundle bundle = request.assetBundle;
                    AssetBundlePackage tmpAssetBundle = new AssetBundlePackage(bundle, assetBundleName);
                    AddAssetBundleToDic(tmpAssetBundle);
                }
            }
            else
            {
                //HFLog.L("异步 通过缓存加载");
            }
        }

        /// <summary>
        ///  加载一系列 的assetbundle
        /// </summary>
        /// <param name="list"></param>
        /// <returns></returns>
        public List<AssetBundlePackage> LoadAssetsBundlesFromFile(string[] list, Action<float> progressCallback)
        {
            List<AssetBundlePackage> bundles = new List<AssetBundlePackage>();
            for (int i = 0; i < list.Length; i++)
            {
                AssetBundlePackage bundle = LoadAssetBundleFromFile(list[i]);
                if (bundle != null)
                {
                    bundles.Add(bundle);
                }
                if (progressCallback != null)
                {
                    progressCallback((bundles.Count + 0.0f) / list.Length);
                }
            }
            return bundles;
        }

        /// <summary>
        ///  同步加载 若干assetbundle 但是使用了 协程 让每一次加载完成 都回调一个进度
        /// </summary>
        /// <param name="list"></param>
        /// <param name="progressCallback"></param>
        public void LoadAssetsBundlesFromFileFakeAsync(string[] list, Action<float> progressCallback)
        {
            StartCoroutine(m_LoadAssetsBundlesFromFileAsync(list, progressCallback));
        }

        private IEnumerator m_LoadAssetsBundlesFromFileAsync(string[] list, Action<float> progressCallback)
        {
            List<AssetBundlePackage> bundles = new List<AssetBundlePackage>();
            for (int i = 0; i < list.Length; i++)
            {
                AssetBundlePackage bundle = LoadAssetBundleFromFile(list[i]);
                if (bundle != null)
                {
                    bundles.Add(bundle);
                }
                if (progressCallback != null)
                {
                    progressCallback((bundles.Count + 0.0f) / list.Length);
                }
                yield return null;
            }
        }

        public void LoadHotFixAssembly(string assetbundleName, string dllName, ILRuntime.Runtime.Enviorment.AppDomain appdomain, Action<bool> cbAction)
        {
            AssetBundlePackage ab = HAResourceManager.Instance.LoadAssetBundleFromFile(assetbundleName);
            TextAsset text = ab.LoadAssetWithCache<TextAsset>(dllName + ".dll");
            byte[] dll = text.bytes;
            using (MemoryStream fs = new MemoryStream(dll))
            {
                appdomain.LoadAssembly(fs, null, new PdbReaderProvider());
            }
            if (cbAction != null)
            {
                cbAction(true);
            }
        }

        public void EditorLoadHotFixAssembly(string assetbundleName, string dllName, ILRuntime.Runtime.Enviorment.AppDomain appdomain, Action<bool> cbAction)
        {
            StartCoroutine(m_EditorLoadHotFixAssembly(assetbundleName, dllName, appdomain, cbAction));
        }

        private IEnumerator m_EditorLoadHotFixAssembly(string assetbundleName, string dllName, ILRuntime.Runtime.Enviorment.AppDomain appdomain, Action<bool> cbAction)
        {
            WWW www = new WWW("file:///" + Application.streamingAssetsPath + "/DLL/" + dllName + ".dll");
            yield return www;
            byte[] dll = www.bytes;
            www.Dispose();
            using (MemoryStream fs = new MemoryStream(dll))
            {
                appdomain.LoadAssembly(fs, null, new PdbReaderProvider());
            }
            if (cbAction != null)
            {
                cbAction(true);
            }
        }

        public void AddAssetBundleToDic(AssetBundlePackage bundle)
        {
            if (!allAssetBundleDic.ContainsKey(bundle.name))
            {
                allAssetBundleDic.Add(bundle.name, bundle);
            }
        }

        public AssetBundlePackage GetAssetBundleWithName(string name)
        {
            name = name.ToLower();
            if (allAssetBundleDic.ContainsKey(name))
            {
                return allAssetBundleDic[name];
            }
            return null;
        }

        /*
        /// <summary>
        ///  在编辑器开发的时候使用的加载方式  在正式运行的时候需要改回正规写法
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="name"></param>
        public T EditorLoadAsset<T>(string name) where T:UnityEngine.Object
        {
            T tx = null;
            if (GameEnvironment.self.runtimePlatform== GamePlatform.Editor)
            {
               tx =  AssetDatabase.LoadAssetAtPath<T>(name);
            }
            return tx;
        }
        */

        /// <summary>
        ///  卸载某一个 assetbundle 通过名字
        /// </summary>
        /// <param name="name"></param>
        /// <param name="b">是否卸载压出来的的东西</param>
        public void UnloadAssetBundle(string name, bool b = true)
        {
            name = name.ToLower();
            AssetBundlePackage bundle = GetAssetBundleWithName(name);
            if (bundle != null)
            {
                //HFLog.L("卸载Assetbundle  " + bundle.name);
                bundle.Unload(b);
                allAssetBundleDic.Remove(name);
            }
        }


        /// <summary>
        ///  卸载一系列的 的assetbundle
        /// </summary>
        /// <param name="list"></param>
        public void UnloadAssetBundles(string[] list, Action<float> progressCallback)
        {
            for (int i = 0; i < list.Length; i++)
            {
                UnloadAssetBundle(list[i]);
                if (progressCallback != null)
                {
                    progressCallback((i + 0.0f) / list.Length);
                }
            }
        }


        public void UnloadAssetBundle(AssetBundlePackage bundle, bool b = true)
        {
            if (bundle != null && !string.IsNullOrEmpty(bundle.name))
            {
                //HFLog.L("卸载Assetbundle  " + bundle.name);
                allAssetBundleDic.Remove(bundle.name);
                bundle.Unload(b);
            }
        }


        /// <summary>
        ///  卸载所有的 assetBundle
        /// </summary>
        public void UnloadAllAssetBundle()
        {
            foreach (var item in allAssetBundleDic)
            {
                item.Value.Unload(true);
            }
            allAssetBundleDic.Clear();
            Resources.UnloadUnusedAssets();
        }

        public void DestroyManager()
        {
            UnloadAllAssetBundle();
            Instance = null;
        }

        /*
        public void UnloadAllAssetBundleAndSave(List<string> saveListName)
        {
            foreach (var item in allAssetBundleDic.Values)
            {
                item.Unload(true);
            }
            allAssetBundleDic.Clear();
            Resources.UnloadUnusedAssets();
        }
        */
    }


    public class AssetBundlePackage
    {
        public string name;
        public AssetBundle assetBundle;
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

        public AssetBundlePackage(AssetBundle bundle, string n)
        {
            n = n.ToLower();
            name = n;
            assetBundle = bundle;
        }

        public void Unload(bool t)
        {
            if (assetBundle != null)
            {
                CacheDic.Clear();
                assetBundle.Unload(t);
                CacheDic = null;
                assetBundle = null;
                name = null;
            }
        }


        /// <summary>
        ///  通过缓存读取 文件 比如很多情况下读取图片会有很多次 那么如果不缓存的话就会形成很多副本 
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="name"></param>
        /// <returns></returns>
        public T LoadAssetWithCache<T>(string name) where T : UnityEngine.Object
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
                    return t1;
                }
                else
                {
                    return null;
                }
            }
        }

        /// <summary>
        ///  通过缓存读取 文件 比如很多情况下读取图片会有很多次 那么如果不缓存的话就会形成很多副本 
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="name"></param>
        /// <returns></returns>
        public UnityEngine.Object LoadAssetWithCache(string name)
        {
            if (CacheDic.ContainsKey(name))
            {
                return CacheDic[name];
            }
            else
            {
                UnityEngine.Object t1 = assetBundle.LoadAsset(name);
                if (t1 != null)
                {
                    CacheDic.Add(name, t1);
                    return t1;
                }
                else
                {
                    return null;
                }
            }
        }

        /// <summary>
        ///  异步单独读取 无法使用递归加载 有可能出现 引用丢失的情况 适合读某一个图片
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="name"></param>
        /// <param name="callback"></param>
        public void LoadAssetWithCacheAsync<T>(string name, Action<T> callback) where T : UnityEngine.Object
        {
            GameLooper.Instance.StartCoroutine(m_LoadAssetWithCacheAsync(name, callback));
        }

        private IEnumerator m_LoadAssetWithCacheAsync<T>(string name, Action<T> callback) where T : UnityEngine.Object
        {
            // 先判断一次 是否存在
            if (CacheDic.ContainsKey(name))
            {
                callback(CacheDic[name] as T);
            }
            else
            {
                AssetBundleRequest request = assetBundle.LoadAssetAsync<T>(name);
                yield return request;

                //因为是异步的所以 可能出现多次加载的问题 所以 再判断一次是否存在
                if (CacheDic.ContainsKey(name))
                {
                    callback(CacheDic[name] as T);
                }
                //如果还是没有 那么就加载asset 并且放到缓存里
                else
                {
                    T t1 = request.asset as T;
                    if (t1 != null)
                    {
                        CacheDic.Add(name, t1);
                        callback(t1);
                    }
                    else
                    {
                        callback(null);
                    }
                }
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
