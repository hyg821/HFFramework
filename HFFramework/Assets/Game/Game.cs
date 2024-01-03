using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Reflection;
using HybridCLR;

[DefaultExecutionOrder(0)] 
[DisallowMultipleComponent] 
public class Game : MonoBehaviour
{ 
    public static Game Instance;

    public Assembly hotUpdateAssembly;
    
    void Awake()
    {
        if (Instance!=null)
        {
            Debug.LogError("框架重复加载 Game预设体放在起始场景 起始场景不要重复加载");
            Destroy(gameObject);
            return;
        }

        Instance = this;

        DontDestroyOnLoad(gameObject);

        MemoryClear();

        //检查热更新
            
        //加载热更代码 进入逻辑
        LoadHotUpdateAssembly("HotUpdate", "HotUpdate");        
    }
    
    public string AutoGetResourcePath(string path)
    {
        path = path.ToLower();
        string ResourceRootPath = Application.persistentDataPath + "/AssetBundles/";
        string ResourceSpareRootPath = Application.streamingAssetsPath + "/AssetBundles/";
        string newPath;
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
        return newPath;
    }
        
    public void LoadHotUpdateAssembly(string packageName, string dllName)
    {
        //代码 在编辑器 里默认走streamingAssets 生成dll 运行即可
        bool isEditor = Application.isEditor;
        //isEditor = true;
        if (isEditor)
        {
            hotUpdateAssembly = System.AppDomain.CurrentDomain.GetAssemblies().First(a => a.GetName().Name == "HotUpdate");
        }
        else
        {
            AssetBundle bundle = AssetBundle.LoadFromFile(AutoGetResourcePath(packageName));
            
            foreach (var aotDllName in AOTGenericReferences.PatchedAOTAssemblyList)
            {
                byte[] dllBytes = bundle.LoadAsset<TextAsset>(aotDllName).bytes;
                LoadImageErrorCode err = HybridCLR.RuntimeApi.LoadMetadataForAOTAssembly(dllBytes, HomologousImageMode.SuperSet);
                Debug.Log($"LoadMetadataForAOTAssembly:{aotDllName}. ret:{err}");
            }

            TextAsset text = bundle?.LoadAsset<TextAsset>(dllName + ".dll");
            hotUpdateAssembly = Assembly.Load(text.bytes);
            
            bundle.Unload(true);
        }

        HotUpdateAssemblyInvoke("HFFramework.HotUpdate", "Main");
    }


    public void HotUpdateAssemblyInvoke(string className, string methodName ,object obj = null, object[] parameters = null)
    {
        Type type = hotUpdateAssembly.GetType(className);
        MethodInfo method = type.GetMethod(methodName);
        method?.Invoke(null,null);
    }

    /// <summary>
    /// 内存清理
    /// </summary>
    public void MemoryClear()
    {
        Resources.UnloadUnusedAssets();
        for (int i = 0; i < 6; i++)
        {
            GC.Collect();
        }
    }

    /// <summary>
    /// 清理关闭控制器
    /// </summary>
    public void Dispose()
    {
        HotUpdateAssemblyInvoke("HFFramework.HotUpdate", "Dispose");
        MemoryClear();
        Destroy(gameObject);
        Instance = null;
    }

    private void OnApplicationQuit()
    {
        Dispose();
        Debug.Log("应用退出");
    }

    /// <summary>
    /// 退出app
    /// </summary>
    public void Quit()
    {
#if UNITY_ANDROID
            Application.Quit();
#elif UNITY_IOS
            NativeBridge.Exit();
#endif
    }
}