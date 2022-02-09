using UnityEngine;
using UnityEditor;
using System.Collections.Generic;
using System.IO;
using System;
using System.Text;
using LitJson;
using UnityEngine.U2D;
using UnityEditor.U2D;

namespace HFFramework.Editor
{
    public class AssetBundleTools
    {
        public static BuildTarget GetBuildTarget()
        {
            BuildTarget target = BuildTarget.NoTarget;
#if UNITY_STANDALONE_WIN
            target = BuildTarget.StandaloneWindows;
#elif UNITY_STANDALONE_OSX
            target = BuildTarget.StandaloneOSXIntel;
#elif UNITY_IPHONE
            target = BuildTarget.iOS;
#elif UNITY_ANDROID
            target = BuildTarget.Android;
#endif
            HFLog.C("目标平台 " + target);
            return target;
        }

        /// <summary>
        /// 资源打包
        /// </summary>
        [MenuItem("资源/构建 所有 AssetBundles")]
        public static void BuildAllAssetBundles()
        {
            Caching.ClearCache();

            ClearAssetBundlesName();

            PackingAtlas();

            AutoCompilerEditor.CompilerHotFixDLL(delegate()
            {
                CopyDLL();

                string AssetBundlesPath = Application.dataPath + "/StreamingAssets/AssetBundles";
                if (!Directory.Exists(AssetBundlesPath))
                {
                    Directory.CreateDirectory(AssetBundlesPath);
                }

                List<AssetBundleBuild> buildsInfos = new List<AssetBundleBuild>();
                foreach (var item in GetAssetBundleInfos())
                {
                    AssetBundleBuild build = new AssetBundleBuild();
                    build.assetBundleName = item.Key;
                    build.assetNames = item.Value.ToArray();
                    buildsInfos.Add(build);

                    /*
                    Debug.LogError("----------------assetBundleName " + build.assetBundleName);
                    foreach (var xxx in build.assetNames)
                    {
                        Debug.LogError(xxx);
                    }
                    */
                }

                AssetBundleManifest abm = BuildPipeline.BuildAssetBundles("Assets/StreamingAssets/AssetBundles", buildsInfos.ToArray(), BuildAssetBundleOptions.ChunkBasedCompression | BuildAssetBundleOptions.DisableWriteTypeTree, GetBuildTarget());
                //BuildZip();
                if (abm)
                {
                    string[] assetBundles = abm.GetAllAssetBundles();
                    List<AssetBundleMD5> configList = new List<AssetBundleMD5>();
                    for (int i = 0; i < assetBundles.Length; i++)
                    {
                        AssetBundleMD5 item = new AssetBundleMD5();
                        string path = Application.streamingAssetsPath + "/AssetBundles/" + assetBundles[i];
                        item.value = GetMD5HashFromFile(path);
                        item.key = assetBundles[i];
                        configList.Add(item);
                    }
                    MD5Diff config = new MD5Diff();
                    config.AssetsBundleMD5List = configList;
                    string json = JsonMapper.ToJson(config);
                    WriteMD5Diff(json);
                }
                //刷新编辑器
                AssetDatabase.Refresh();
                Debug.Log("Assetbundle Build 完成");
            });
        }

        public static Dictionary<string, List<string>> GetAssetBundleInfos()
        {
            Dictionary<string, List<string>> result = new Dictionary<string, List<string>>();
            ForeachAssetConfig(delegate (int index, AssetConfig assetConfig)
            {
                //合并bundleName一样的配置
                if (assetConfig.assetbundleName != null)
                {
                    List<string> list;
                    if (!result.TryGetValue(assetConfig.assetbundleName, out list))
                    {
                        list = new List<string>();
                        result.Add(assetConfig.assetbundleName, list);
                    }
                    foreach (var item in assetConfig.GetAllAssetInFolder())
                    {
                        list.Add(item);
                    }
                }
            });
            return result;
        }

        [MenuItem("资源/检测循环引用")]
        public static void CheckCircularReference()
        {
            string path = Application.streamingAssetsPath + "/" + "AssetBundles"+"/" + "AssetBundles";
            AssetBundle bundle = AssetBundle.LoadFromFile(path);
            AssetBundleManifest manifest = (AssetBundleManifest)bundle.LoadAsset("AssetBundleManifest");
            string[] names = manifest.GetAllAssetBundles();
            foreach (var item in names)
            {
                CircularReferenceSet set = new CircularReferenceSet();
                set.name = item;
                m_CheckCircularReference(set, manifest);
            }
            bundle.Unload(true);
        }

        private static void m_CheckCircularReference(CircularReferenceSet set, AssetBundleManifest manifest)
        {
            HFLog.C("--------------------------------------");
            HFLog.C("开始检测 " + set.name);
            string[] str = manifest.GetAllDependencies(set.name);
            foreach (var item in str)
            {
                m_CheckCircularReference(set,item, manifest);
            }
            HFLog.C("检测完成√ " + set.name);
        }

        private static void m_CheckCircularReference(CircularReferenceSet set, string name, AssetBundleManifest manifest)
        {
            if (set.Contains(name))
            {
                HFLog.E("循环引用 " + set.name + "   " + name);
                return;
            }

            HFLog.C("检测中 " + set.name  + "  "+ name);

            set.Add(name);

            string[] str = manifest.GetAllDependencies(name);
            foreach (var item in str)
            {
                m_CheckCircularReference(set,item, manifest);
            }
        }

        [MenuItem("资源/设置DLL到具体资源目录")]
        public static void CopyDLL()
        {
            string str = "/GameResources/DLL" + GameConst.AssetFolderIde + "/";
            string target = GameConst.HotFixDLLName + ".dll";
            string sourcePath = Application.streamingAssetsPath + "/DLL/" + target;
            string reNamePath = Application.dataPath + str + target + ".bytes";
            File.Copy(sourcePath, reNamePath, true);
            AssetDatabase.Refresh();
        }

        [MenuItem("资源/清除所有的AssetbundleName")]
        public static void ClearAssetBundlesName()
        {
            int length = AssetDatabase.GetAllAssetBundleNames().Length;
            string[] oldAssetBundleNames = new string[length];
            for (int i = 0; i < length; i++)
            {
                oldAssetBundleNames[i] = AssetDatabase.GetAllAssetBundleNames()[i];
            }
            Debug.Log("删除之前的所有AssetBundleNames个数  " + length);

            for (int j = 0; j < oldAssetBundleNames.Length; j++)
            {
                AssetDatabase.RemoveAssetBundleName(oldAssetBundleNames[j], true);
            }
            length = AssetDatabase.GetAllAssetBundleNames().Length;
            Debug.Log("删除之后的所有AssetBundleNames个数  " + length);
            AssetDatabase.Refresh();
        }

        [MenuItem("资源/删除 所有 AssetBundles")]
        public static void DeleteAllAssetbundle()
        {
            AssetDatabase.DeleteAsset("Assets/StreamingAssets/AssetBundles");
            Debug.Log("删除所有 AssetBundles 完成");
        }

        [MenuItem("资源/刷新图集")]
        public static void PackingAtlas()
        {
            SetAssetConfig(true);
            SpriteAtlasUtility.PackAllAtlases(EditorUserBuildSettings.activeBuildTarget);
            AssetDatabase.Refresh();
        }

        public static string[] GetBuildScenes()
        {
            List<string> names = new List<string>();
            foreach (EditorBuildSettingsScene e in EditorBuildSettings.scenes)
            {
                if (e != null&& e.enabled)
                {
                    HFLog.C(e.path);
                    names.Add(e.path);
                }
            }
            return names.ToArray();
        }

        /// <summary>
        ///  根据 AssetConfig 设置assetbundleName 和 图集设置
        /// </summary>
        /// <param name="path"></param>
        public static void SetAssetConfig(bool atlas)
        {
            string path = Application.dataPath + "/GameResources";
            if (!Directory.Exists(path))//若文件夹不存在则新建文件夹   
            {
                Directory.CreateDirectory(path); //新建文件夹   
                AssetDatabase.Refresh();
            }

            ForeachAssetConfig(delegate (int index,AssetConfig config)
            {
                if (atlas)
                {
                    config.RefreshAtlas();
                }
            });
        }

        private static void ForeachAssetConfig(Action<int,AssetConfig> calllback)
        {
            string[] guids = AssetDatabase.FindAssets("t:AssetConfig");
            for (int i = 0; i < guids.Length; i++)
            {
                string guid = guids[i];
                string configPath = AssetDatabase.GUIDToAssetPath(guid);
                AssetConfig assetConfig = AssetDatabase.LoadAssetAtPath(configPath, typeof(AssetConfig)) as AssetConfig;
                if (calllback!=null)
                {
                    calllback(i,assetConfig);
                }
            }
        }

        /// <summary>
        ///  MD5写入本地
        /// </summary>
        /// <param name="date"></param>
        public static void WriteMD5Diff(String date)
        {
            if (!Directory.Exists(Application.streamingAssetsPath + "/HotFixResources"))
            {
                Directory.CreateDirectory(Application.streamingAssetsPath + "/HotFixResources");
            }
            string path = Application.streamingAssetsPath + "/HotFixResources" + "/MD5Diff.json";
            using (FileStream fs = new FileStream(path, FileMode.Create))
            {
                //获得字节数组
                byte[] data = Encoding.Default.GetBytes(date);
                //开始写入
                fs.Write(data, 0, data.Length);
                //清空缓冲区、关闭流
                fs.Flush();
            }
        }

        /// <summary>
        ///  对文件校验MD5
        /// </summary>
        /// <param name="fileName"></param>
        /// <returns></returns>
        private static string GetMD5HashFromFile(string fileName)
        {
            using (FileStream file = new FileStream(fileName, FileMode.Open))
            {
                System.Security.Cryptography.MD5 md5 = new System.Security.Cryptography.MD5CryptoServiceProvider();
                byte[] retVal = md5.ComputeHash(file);
                md5.Dispose();
                StringBuilder sb = new StringBuilder();
                for (int i = 0; i < retVal.Length; i++)
                {
                    sb.Append(retVal[i].ToString("x2"));
                }
                return sb.ToString();
            }
        }

        public static string GetMD5(string sDataIn)
        {
            System.Security.Cryptography.MD5CryptoServiceProvider md5 = new System.Security.Cryptography.MD5CryptoServiceProvider();
            byte[] bytValue, bytHash;
            bytValue = Encoding.UTF8.GetBytes(sDataIn);
            bytHash = md5.ComputeHash(bytValue);
            md5.Clear();
            string sTemp = "";
            for (int i = 0; i < bytHash.Length; i++)
            {
                sTemp += bytHash[i].ToString("X").PadLeft(2, '0');
            }
            return sTemp.ToLower();
        }
    }

    public class CircularReferenceSet
    {
        public string name;
        public HashSet<string> set = new HashSet<string>();

        public void Add(string str)
        {
            set.Add(str);
        }

        public bool Contains(string str)
        {
            return set.Contains(str);
        }
    }
}

