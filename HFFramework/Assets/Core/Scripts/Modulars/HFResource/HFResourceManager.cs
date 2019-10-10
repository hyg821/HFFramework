using System;
using System.IO;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.U2D;
using Sirenix.OdinInspector;
using System.Threading.Tasks;

#if UNITY_EDITOR
using UnityEditor;
#endif

namespace HFFramework
{
    public class HFResourceManager : SerializedMonoBehaviour, IManager
    {
        // 注意 
        // 热更新代码的包  Manifest包 不被管理  
        // 必须每一个场景一个包 并且场景不可以和别的资源放在同一个包里
        // 如果有依赖请把依赖做成预设体 通过加载预设体的方式 实现
        // 如果是编辑器开发模式 那么场景需要build assetbundle 才能看到效果 其他的不需要build 因为编辑器会走AssetDatabase直接加载
        // 正常卸载明确的的bundle 比如 prefab sprite  不明确的并且被依赖的资源通过UnloadUnusedAssetBundle 来卸载（没有经过测试 谨慎使用）
        // 推荐shader 最开始就全部加载出来 并且都放在一个bundle下

        public static HFResourceManager Instance;

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
        ///  临时存引用计数为0的数组
        /// </summary>
        private List<AssetBundlePackage> unusedAssetBundleList = new List<AssetBundlePackage>();

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
                    if (GameEnvironment.Instance.Platform == GamePlatform.Android)
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

            if (!Directory.Exists(resourceRootPath))
            {
                Directory.CreateDirectory(resourceRootPath);
            }

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
        ///  拿到AssetBundleManifest 以便于收集 所有的assetbundle 依赖  如果存在动态下载 一定要刷新调用这个方法  刷新所有依赖
        /// </summary>
        public void GetAssetBundleManifest()
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
            if (GameEnvironment.Instance.ResourcesType == GameResourcesType.Editor)
            {
                return EditorLoadAsset<GameObject>(packageName, assetName);
            }
            else
            {
                AssetBundlePackage ab = HFResourceManager.Instance.LoadAssetBundleFromFile(packageName);
                GameObject g = ab.LoadAsset<GameObject>(assetName);
                return g;
            }
        }

        /// <summary>
        /// 获取 Sprite 通过缓存 不会自动卸载
        /// </summary>
        /// <param name="name"></param>
        /// <returns></returns>
        public Sprite GetSprite(string packageName, string assetName)
        {
            if (GameEnvironment.Instance.ResourcesType == GameResourcesType.Editor)
            {
                return EditorLoadAsset<Sprite>(packageName, assetName);
            }
            else
            {
                AssetBundlePackage ab = HFResourceManager.Instance.LoadAssetBundleFromFile(packageName);
                Sprite sp = ab.LoadAsset<Sprite>(assetName);
                return sp;
            }
        }

        /// <summary>
        ///  使用这个方法  如果在编辑器首先需要在 EditorSetting 里把 SpritePacker 设置成Always Enabled 在运行之前build一下图集 才能显示
        /// </summary>
        /// <param name="packageName">assetbundle名字</param>
        /// <param name="atlasName">图集名字</param>
        /// <param name="spriteName">图片名字</param>
        /// <returns></returns>
        public Sprite GetSpriteByAtlas(string packageName, string atlasName, string spriteName)
        {
            AssetBundlePackage ab = HFResourceManager.Instance.LoadAssetBundleFromFile(packageName);
            SpriteAtlas atlas = ab.LoadAsset<SpriteAtlas>(atlasName);
            return atlas.GetSprite(spriteName);
        }

        /// <summary>
        ///  这个函数推荐最开始就加载
        /// </summary>
        /// <param name="shaderPackageName"></param>
        public void CacheAllShader(string shaderPackageName)
        {
            AssetBundlePackage ab = HFResourceManager.Instance.LoadAssetBundleFromFile(shaderPackageName);
            ab.CacheAllAsset();
            Shader.WarmupAllShaders();
        }

        /// <summary>
        /// 获取shader
        /// </summary>
        /// <param name="packageName"></param>
        /// <param name="abName"></param>
        /// <returns></returns>
        public Shader GetShader(string packageName, string assetName)
        {
            if (GameEnvironment.Instance.ResourcesType == GameResourcesType.Editor)
            {
                Shader shader = EditorLoadAsset<Shader>(packageName, assetName);
                return shader;
            }
            else
            {
                AssetBundlePackage ab = HFResourceManager.Instance.LoadAssetBundleFromFile(packageName);
                Shader shader = ab.LoadAsset<Shader>(assetName);
                return shader;
            }
        }

        /// <summary>
        ///  通用的以同步方式获取一个资源  封装了编辑器 和 ab 两种加载方法
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="packageName"></param>
        /// <param name="assetName"></param>
        /// <returns></returns>
        public T GetAsset<T>(string packageName, string assetName) where T : UnityEngine.Object
        {
            if (GameEnvironment.Instance.ResourcesType == GameResourcesType.Editor)
            {
                return EditorLoadAsset<T>(packageName, assetName);
            }
            else
            {
                AssetBundlePackage ab = HFResourceManager.Instance.LoadAssetBundleFromFile(packageName);
                return ab.LoadAsset<T>(assetName);
            }
        }

        /// <summary>
        ///  异步加载场景 如果从编辑器直接读取 需要把场景添加到Build Settings 里 
        ///  2018 添加了 直接editor 加载的接口 只能等2018了
        /// </summary>
        /// <param name="assetBundleName"></param>
        /// <param name="autoJump"></param>
        /// <param name="sceneName"></param>
        /// <param name="finishCallBack"></param>
        public void LoadScene(string assetBundleName,  string sceneName, Action finishCallback)
        {
            if (GameEnvironment.Instance.ResourcesType == GameResourcesType.Editor)
            {
                SceneManager.LoadScene(sceneName);
                if (finishCallback != null)
                {
                    finishCallback();
                }
            }
            else
            {
                StartCoroutine(m_LoadScene(assetBundleName, sceneName, finishCallback));
            }
        }

        private IEnumerator m_LoadScene(string assetBundleName, string sceneName, Action finishCallback)
        {
            /*
            assetBundleName = assetBundleName.ToLower();
            string url = AutoGetResourcePath(assetBundleName, true);
            WWW www = WWW.LoadFromCacheOrDownload(url, 0);
            yield return www;
            AssetBundle bundle = www.assetBundle;
            if (autoJump && !string.IsNullOrEmpty(sceneName))
            {
                yield return StartCoroutine(LoadSceneAsync(sceneName));
            }
            bundle.Unload(false);
            www.Dispose();
            www = null;
            */

            yield return StartCoroutine(m_LoadAssetBundleFromFileAsync(assetBundleName.ToLower()));
            yield return StartCoroutine(LoadSceneAsync(sceneName));
            UnloadAssetBundle(assetBundleName, false);
            yield return Resources.UnloadUnusedAssets();
            if (finishCallback!=null)
            {
                finishCallback();
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
            AssetBundlePackage ab = HFResourceManager.Instance.LoadAssetBundleFromFile(packageName);
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
            AssetBundlePackage ab = HFResourceManager.Instance.LoadAssetBundleFromFile(packageName);
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
                AssetBundlePackage tmpAssetBundle = new AssetBundlePackage(bundle, assetBundleName);
                AddAssetBundleToDic(tmpAssetBundle);
                //HFLog.L("同步加载AssetBundle   " + assetBundleName);
                return tmpAssetBundle;
            }
            else
            {
                AssetBundlePackage ab = allAssetBundleDic[assetBundleName];
                ab.Retain();
                return ab;
            }
        }

        /// <summary>
        ///  异步递归加载 assetbundle
        /// </summary>
        /// <param name="assetBundleName"></param>
        /// <param name="finishCallback"></param>
        public void LoadAssetBundleFromFileAsync(string assetBundleName, Action<AssetBundlePackage> finishCallback)
        {
            StartCoroutine(m_LoadAssetBundleFromFileAsync(assetBundleName, finishCallback));
        }

        private IEnumerator m_LoadAssetBundleFromFileAsync(string assetBundleName, Action<AssetBundlePackage> finishCallback)
        {
            assetBundleName = assetBundleName.ToLower();
            yield return StartCoroutine(m_LoadAssetBundleFromFileAsync(assetBundleName));
            if (finishCallback != null)
            {
                AssetBundlePackage ab = allAssetBundleDic[assetBundleName];
                ab.Retain();
                finishCallback(ab);
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
                AssetBundlePackage ab = allAssetBundleDic[assetBundleName];
                ab.Retain();
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

        public void LoadHotFixAssembly(string assetbundleName, string dllName, Action<byte[]> callback)
        {
            //代码 在编辑器 里默认走streamingAssets 生成dll 运行即可
            if (GameEnvironment.Instance.Platform == GamePlatform.Editor)
            {
                StartCoroutine(m_EditorLoadHotFixAssembly(assetbundleName, dllName, callback));
            }
            else
            {
                AssetBundlePackage ab = HFResourceManager.Instance.LoadAssetBundleFromFile(assetbundleName);
                TextAsset text = ab.LoadAsset<TextAsset>(dllName + ".dll");
                if (callback != null)
                {
                    callback(text.bytes);
                }
                UnloadAssetBundle(ab, true);
            }
        }

        private IEnumerator m_EditorLoadHotFixAssembly(string assetbundleName, string dllName, Action<byte[]> callback)
        {
            WWW www = new WWW("file:///" + Application.streamingAssetsPath + "/DLL/" + dllName + ".dll");
            yield return www;
            if (callback != null)
            {
                callback(www.bytes);
            }
            www.Dispose();
        }

        public void AddAssetBundleToDic(AssetBundlePackage bundle)
        {
            if (!allAssetBundleDic.ContainsKey(bundle.name))
            {
                allAssetBundleDic.Add(bundle.name, bundle);
            }
        }

        public AssetBundlePackage GetAssetBundle(string assetBundleName)
        {
            assetBundleName = assetBundleName.ToLower();
            if (allAssetBundleDic.ContainsKey(assetBundleName))
            {
                return allAssetBundleDic[assetBundleName];
            }
            return null;
        }


        /// <summary>
        ///  在编辑器开发的时候使用的加载方式
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="name"></param>
        public T EditorLoadAsset<T>(string assetBundleName, string assetName) where T:UnityEngine.Object
        {
#if UNITY_EDITOR
            string[] s = AssetDatabase.GetAssetPathsFromAssetBundleAndAssetName(assetBundleName.ToLower(), assetName);
            return AssetDatabase.LoadAssetAtPath<T>(s[0]);
#else
            return null;
#endif
        }


        /// <summary>
        ///  卸载某一个 assetbundle 通过名字
        /// </summary>
        /// <param name="name"></param>
        /// <param name="b">是否卸载压出来的的东西</param>
        public void UnloadAssetBundle(string assetBundleName, bool b = true)
        {
            if (GameEnvironment.Instance.ResourcesType != GameResourcesType.Editor)
            {
                assetBundleName = assetBundleName.ToLower();
                AssetBundlePackage bundle = GetAssetBundle(assetBundleName);
                if (bundle != null)
                {
                    UnloadAssetBundle(bundle, b);
                }
            }
        }

        public void UnloadAssetBundle(AssetBundlePackage bundle, bool b = true)
        {
            if (GameEnvironment.Instance.ResourcesType != GameResourcesType.Editor)
            {
                HFLog.L("卸载Assetbundle  " + bundle.name);
                RecursionReleaseAssetBundle(bundle.name);
                allAssetBundleDic.Remove(bundle.name);
                bundle.Unload(b);
            }
        }

        /// <summary>
        /// 递归 Release AssetBundle
        /// </summary>
        /// <param name="name"></param>
        public void RecursionReleaseAssetBundle(string assetBundleName)
        {
            AssetBundlePackage bundle =  GetAssetBundle(assetBundleName);
            if (bundle!=null)
            {
                bundle.Release();
            }
            string[] list = Instance.GetAssetBundleDependencies(assetBundleName);
            for (int i = 0; i < list.Length; i++)
            {
                RecursionReleaseAssetBundle(list[i]);
            }
        }

        /// <summary>
        ///  卸载一系列的 的assetbundle
        /// </summary>
        /// <param name="list"></param>
        public void UnloadAssetBundles(string[] list, bool b, Action<float> progressCallback)
        {
            for (int i = 0; i < list.Length; i++)
            {
                UnloadAssetBundle(list[i],b);
                if (progressCallback != null)
                {
                    progressCallback((i + 0.0f) / list.Length);
                }
            }
        }

        /// <summary>
        ///  释放引用计数为0的bundle
        /// </summary>
        public void UnloadUnusedAssetBundle()
        {
            unusedAssetBundleList.Clear();
            foreach (var item in allAssetBundleDic)
            {
                if (item.Value.refCount == 0)
                {
                    unusedAssetBundleList.Add(item.Value);
                }
            }

            foreach (var item in unusedAssetBundleList)
            {
                item.Unload(false);
                allAssetBundleDic.Remove(item.name);
            }

            Resources.UnloadUnusedAssets();
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

        public void Debug()
        {
            if (GameEnvironment.Instance.ResourcesType != GameResourcesType.Editor)
            {
                foreach (var item in allAssetBundleDic)
                {
                    HFLog.C(item.Key + " 引用计数 ：" + item.Value.refCount);
                }
            }
            else
            {
                HFLog.C("编辑器模式下 没有引用计数");
            }
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

    [Serializable]
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
        ///  最好不要手动调用这个方法会使引用计数+1
        /// </summary>
        public void Retain()
        {
            refCount++;
        }

        /// <summary>
        ///  最好不要手动调用这个方法会使引用计数-1
        /// </summary>
        public void Release()
        {
            if (refCount>0)
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
            refCount++;
        }

        /// <summary>
        /// 不要手动调用这个接口 通过manager卸载
        /// </summary>
        /// <param name="t"></param>
        public void Unload(bool t)
        {
            if (assetBundle != null)
            {
                refCount = 0;
                CacheDic.Clear();
                assetBundle.Unload(t);
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
                    return t1;
                }
                else
                {
                    return null;
                }
            }
        }

        public UnityEngine.Object LoadAsset(string name)
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
        ///  异步读取一个资源
        /// </summary>
        /// <param name="name"></param>
        /// <returns></returns>
        public async Task<T> LoadAssetAsync<T>(string name) where T : UnityEngine.Object
        {
            TaskCompletionSource<T> completion = new TaskCompletionSource<T>();
            UnityEngine.Object obj = null;
            if (CacheDic.TryGetValue(name, out obj))
            {
                completion.SetResult(obj as T);
            }
            else
            {
                AssetBundleRequest request = assetBundle.LoadAssetAsync<T>(name);
                Action<AsyncOperation> completed = null;
                completed = delegate (AsyncOperation temp)
                {
                    CacheDic.Add(name, request.asset);
                    request.completed -= completed;
                    completion.SetResult(request.asset as T);
                };
                request.completed += completed;
            }
            return await completion.Task;
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
