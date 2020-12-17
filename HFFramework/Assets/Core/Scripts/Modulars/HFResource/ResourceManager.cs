using System;
using System.IO;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.U2D;
using Cysharp.Threading.Tasks;

#if UNITY_EDITOR
using UnityEditor;
#endif

namespace HFFramework
{
    /// <summary>
    /// 资源加载管理器
    /// </summary>
    public class ResourceManager : MonoBehaviour, IManager
    {
        // 注意 
        // 一个assetbundle包合适的大小在 1-10 mb 之间
        // 热更新代码的包  Manifest包 不被管理  
        // 必须每一个场景一个包 并且场景不可以和别的资源放在同一个包里
        // 如果有依赖请把依赖做成预设体 通过加载预设体的方式 实现
        // 如果是编辑器开发模式 那么场景需要build assetbundle 才能看到效果 其他的不需要build 因为编辑器会走AssetDatabase直接加载
        // 正常卸载明确的的bundle 比如 prefab sprite  不明确的并且被依赖的资源通过UnloadUnusedAssetBundle 来卸载（没有经过测试 谨慎使用）
        // 转场的时候 推荐使用UnLoad(true) 卸载资源 卸载的比较干净
        // 推荐shader 通过ShaderVariantCollection 收集所有变体 最开始就全部加载出来 并且都放在一个bundle下

        public static ResourceManager Instance;

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
            InitWithRootPath(PathManager.Instance.PersistentDataAssetBundlesPath, PathManager.Instance.StreamingAssetsAssetBundlesPath, "AssetBundles");
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
                    if (GameEnvironment.Instance.config.Platform == GamePlatform.Android)
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
            HFLog.C("正式资源地址" + resourceRootPath);
            HFLog.C("备用资源地址" + resourceSpareRootPath);

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
                RefreshAssetBundleManifest();
            }
        }

        /// <summary>
        ///  拿到AssetBundleManifest 以便于收集 所有的assetbundle 依赖  如果存在动态下载 一定要刷新调用这个方法  刷新所有依赖
        /// </summary>
        public void RefreshAssetBundleManifest()
        {
            if (GameEnvironment.Instance.config.LoadAssetPathType == LoadAssetPathType.AssetBundle)
            {
                AssetBundle manifestAB = AssetBundle.LoadFromFile(AutoGetResourcePath(MainfestName, false));  // 加载总ManifestAssetBundle
                if (manifestAB != null)
                {
                    manifest = (AssetBundleManifest)manifestAB.LoadAsset("AssetBundleManifest");
                    manifestAB.Unload(false);  // 释放AssetBundle
                }
            }
        }

        /// <summary>
        ///  拿到具体的某一个Assetbundle 的所有依赖  很多情况需要递归加载
        /// </summary>
        /// <param name="assetbundleName"></param>
        /// <returns></returns>
        public string[] GetAssetBundleDependencies(string packageName)
        {
            return manifest.GetAllDependencies(packageName);
        }

        /// <summary>
        /// 获取 GameObject 通过缓存 不会自动销毁
        /// </summary>
        /// <param name="name"></param>
        /// <returns></returns>
        public GameObject GetPrefab(string packageName, string assetName)
        {
            return GetAsset<GameObject>(packageName, assetName);
        }

        public async UniTask<GameObject> GetPrefabAsync(string packageName, string assetName)
        {
            return await GetAssetAsync<GameObject>(packageName, assetName);
        }

        /// <summary>
        /// 获取 Sprite 通过缓存 不会自动卸载
        /// </summary>
        /// <param name="name"></param>
        /// <returns></returns>
        public Sprite GetSprite(string packageName, string assetName)
        {
            return GetAsset<Sprite>(packageName, assetName);
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
            if (GameEnvironment.Instance.config.LoadAssetPathType == LoadAssetPathType.Editor)
            {
                SpriteAtlas atlas = EditorLoadAsset<SpriteAtlas>(packageName, atlasName);
                return atlas.GetSprite(spriteName);
            }
            else
            {
                AssetBundlePackage ab = LoadAssetBundleFromFile(packageName);
                Sprite sp = ab.LoadSprite(atlasName, spriteName);
                ab.Release();
                return sp;
            }
        }

        /// <summary>
        ///  这个函数推荐最开始就加载
        /// </summary>
        /// <param name="shaderPackageName"></param>
        public void CacheAllShader(string packageName)
        {
            AssetBundlePackage ab = LoadAssetBundleFromFile(packageName);
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
            return GetAsset<Shader>(packageName, assetName);
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
            if (GameEnvironment.Instance.config.LoadAssetPathType == LoadAssetPathType.Editor)
            {
                return EditorLoadAsset<T>(packageName, assetName);
            }
            else
            {
                AssetBundlePackage ab = LoadAssetBundleFromFile(packageName);
                T result = ab.LoadAsset<T>(assetName);
                ab.Release();
                return result;
            }
        }

        public async UniTask<T> GetAssetAsync<T>(string packageName, string assetName, ResourceLoadArgs args = null) where T : UnityEngine.Object
        {
            if (GameEnvironment.Instance.config.LoadAssetPathType == LoadAssetPathType.Editor)
            {
                return EditorLoadAsset<T>(packageName, assetName);
            }
            else
            {
                AssetBundlePackage ab = await LoadAssetBundleFromFileAsync(packageName);
                T result = await ab.LoadAssetAsync<T>(assetName);
                ab.Release();

                if (args!=null&&args.canceled)
                {
                    throw new OperationCanceledException(); 
                }

                return result;
            }
        }

        /// <summary>
        /// 加载场景
        /// </summary>
        /// <param name="packageName"></param>
        /// <param name="sceneName"></param>
        /// <returns></returns>
        public async UniTask LoadScene(string packageName,  string sceneName)
        {
            try
            {
                if (GameEnvironment.Instance.config.LoadAssetPathType == LoadAssetPathType.Editor)
                {
                    await SceneManager.LoadSceneAsync(sceneName);
                }
                else
                {
                    await m_LoadScene(packageName, sceneName);
                }
            }
            catch (Exception e)
            {
                Debug.LogError(e);
                throw;
            }
        }

        private async UniTask m_LoadScene(string packageName, string sceneName)
        {
            AssetBundlePackage ab = await m_LoadAssetBundleFromFileAsync(packageName.ToLower());
            await SceneManager.LoadSceneAsync(sceneName);
            ab.Release();
            await Resources.UnloadUnusedAssets();
        }

        /// <summary>
        ///  一般来说，尽可能使用AssetBundle.LoadFromFile。该API在速度，磁盘使用率和运行时内存使用方面是最有效的
        /// </summary>
        public AssetBundlePackage LoadAssetBundleFromFile(string packageName)
        {
            packageName = packageName.ToLower();
            string[] list = GetAssetBundleDependencies(packageName);
            if (list.Length != 0)
            {
                for (int i = 0; i < list.Length; i++)
                {
                    LoadAssetBundleFromFile(list[i]);
                }
            }

            AssetBundlePackage assetBundlePackage = null;
            if (!allAssetBundleDic.ContainsKey(packageName))
            {
                AssetBundle bundle = AssetBundle.LoadFromFile(AutoGetResourcePath(packageName, false));
                assetBundlePackage = new AssetBundlePackage(bundle, packageName);
                allAssetBundleDic.Add(bundle.name, assetBundlePackage);
                //HFLog.L("同步加载AssetBundle   " + assetBundleName);
            }
            else
            {
                assetBundlePackage = allAssetBundleDic[packageName];     
            }
            assetBundlePackage.Retain();
            return assetBundlePackage;
        }

        /// <summary>
        ///  异步递归加载 assetbundle
        /// </summary>
        /// <param name="assetBundleName"></param>
        /// <param name="finishCallback"></param>
        public async UniTask<AssetBundlePackage> LoadAssetBundleFromFileAsync(string packageName)
        {
            try
            {
                packageName = packageName.ToLower();
                return await m_LoadAssetBundleFromFileAsync(packageName);
            }
            catch (Exception exception)
            {
                Debug.LogError(exception);
                throw;
            }       
        }

        private async UniTask<AssetBundlePackage> m_LoadAssetBundleFromFileAsync(string packageName)
        {
            string[] list = GetAssetBundleDependencies(packageName);
            if (list.Length != 0)
            {
                for (int i = 0; i < list.Length; i++)
                {
                    await m_LoadAssetBundleFromFileAsync(list[i]);
                }
            }

            AssetBundlePackage assetBundlePackage = null;
            if (!allAssetBundleDic.TryGetValue(packageName, out assetBundlePackage))
            {
                AssetBundle assetbundle = await AssetBundle.LoadFromFileAsync(AutoGetResourcePath(packageName, false));
                if (!allAssetBundleDic.TryGetValue(packageName, out assetBundlePackage))
                {
                    assetBundlePackage = new AssetBundlePackage(assetbundle, packageName);
                    allAssetBundleDic.Add(assetBundlePackage.name, assetBundlePackage);
                }
            }
            assetBundlePackage.Retain();
            return assetBundlePackage;
        }

        /// <summary>
        ///  加载一系列 的assetbundle
        /// </summary>
        /// <param name="list"></param>
        /// <returns></returns>
        public List<AssetBundlePackage> LoadAssetBundlesFromFile(string[] list)
        {
            List<AssetBundlePackage> bundles = new List<AssetBundlePackage>();
            for (int i = 0; i < list.Length; i++)
            {
                AssetBundlePackage bundle = LoadAssetBundleFromFile(list[i]);
                if (bundle != null)
                {
                    bundles.Add(bundle);
                }
            }
            return bundles;
        }

        /// <summary>
        ///  同步加载 若干assetbundle 但是使用了 协程 让每一次加载完成 都回调一个进度
        /// </summary>
        /// <param name="list"></param>
        /// <param name="progressCallback"></param>
        public void LoadAssetsBundlesFromFileAsync(string[] list, Action<float> progressCallback)
        {
            m_LoadAssetsBundlesFromFileAsync(list, progressCallback).Forget();
        }

        private async UniTaskVoid m_LoadAssetsBundlesFromFileAsync(string[] list, Action<float> progressCallback)
        {
            List<AssetBundlePackage> bundles = new List<AssetBundlePackage>();
            for (int i = 0; i < list.Length; i++)
            {
                AssetBundlePackage bundle = await LoadAssetBundleFromFileAsync(list[i]);
                if (bundle != null)
                {
                    bundles.Add(bundle);
                }
                if (progressCallback != null)
                {
                    progressCallback((bundles.Count + 0.0f) / list.Length);
                }
            }
        }

        public void LoadHotFixAssembly(string packageName, string dllName, Action<byte[],byte[]> callback)
        {
            //代码 在编辑器 里默认走streamingAssets 生成dll 运行即可
            if (GameEnvironment.Instance.config.LoadAssetPathType == LoadAssetPathType.Editor)
            {
                EditorLoadHotFixAssembly(packageName, dllName, callback);
            }
            else
            {
                AssetBundlePackage ab = LoadAssetBundleFromFile(packageName);
                TextAsset text = ab.LoadAsset<TextAsset>(dllName + ".dll");
                if (callback != null)
                {
                    callback(text.bytes,null);
                }
                UnloadAssetBundle(ab, true);
            }
        }

        private void EditorLoadHotFixAssembly(string packageName, string dllName, Action<byte[],byte[]> callback)
        {
            byte[] codeBytes =File.ReadAllBytes(PathManager.Instance.StreamingAssetsPath + "DLL/" + dllName + ".dll");
            byte[] pdbBytes = File.ReadAllBytes(PathManager.Instance.StreamingAssetsPath + "DLL/" + dllName + ".pdb");
            if (callback != null)
            {
                callback(codeBytes, pdbBytes);
            }
        }

        public AssetBundlePackage GetAssetBundle(string packageName)
        {
            packageName = packageName.ToLower();
            AssetBundlePackage result = null;
            allAssetBundleDic.TryGetValue(packageName, out result);
            return result;
        }

        /// <summary>
        ///  在编辑器开发的时候使用的加载方式
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="name"></param>
        public T EditorLoadAsset<T>(string packageName, string assetName) where T:UnityEngine.Object
        {
#if UNITY_EDITOR
            string[] s = AssetDatabase.GetAssetPathsFromAssetBundleAndAssetName(packageName.ToLower(), assetName);
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
        public void UnloadAssetBundle(string packageName, bool b = true)
        {
            if (GameEnvironment.Instance.config.LoadAssetPathType != LoadAssetPathType.Editor)
            {
                packageName = packageName.ToLower();
                AssetBundlePackage bundle = GetAssetBundle(packageName);
                if (bundle != null)
                {
                    UnloadAssetBundle(bundle, b);
                }
            }
        }

        public void UnloadAssetBundle(AssetBundlePackage bundle, bool b = true)
        {
            if (GameEnvironment.Instance.config.LoadAssetPathType != LoadAssetPathType.Editor)
            {
                HFLog.L("卸载Assetbundle  " + bundle.name);
                bundle.unloading = true;
                RecursionReleaseAssetBundle(bundle.name);
                allAssetBundleDic.Remove(bundle.name);
                bundle.Unload(b);
            }
        }

        /// <summary>
        /// 递归引用计数-1 碰到 引用计数为0 并且没有正在卸载的 bundle 自动卸载
        /// </summary>
        /// <param name="name"></param>
        public void RecursionReleaseAssetBundle(string packageName)
        {
            AssetBundlePackage bundle =  GetAssetBundle(packageName);
            if (bundle!=null)
            {
                bundle.Release();     
                if (bundle.refCount==0&&!bundle.unloading)
                {
                    UnloadAssetBundle(bundle, true);
                }
            }
            string[] list = GetAssetBundleDependencies(packageName);
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
        public async UniTask UnloadUnusedAssetBundle()
        {
            List<AssetBundlePackage> unusedAssetBundleList = new List<AssetBundlePackage>();

            foreach (var item in allAssetBundleDic)
            {
                if (item.Value.refCount == 0)
                {
                    unusedAssetBundleList.Add(item.Value);
                }
            }

            foreach (var item in unusedAssetBundleList)
            {
                UnloadAssetBundle(item.name, true);
            }

            await Resources.UnloadUnusedAssets();
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

        public void RefCount()
        {
            Debug.Log("---------------------------------------------------------");
            foreach (var item in allAssetBundleDic)
            {
                Debug.Log(item.Value.name + " 引用计数 ：" + item.Value.refCount);
            }
        }

        public void Shutdown()
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
}
