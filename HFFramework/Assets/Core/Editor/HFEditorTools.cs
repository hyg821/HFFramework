using UnityEngine;
using UnityEditor;
using System.Collections.Generic;
using System.IO;
using ICSharpCode.SharpZipLib.Zip;
using System;
using System.Text;
using LitJson;
using UnityEditor.ProjectWindowCallback;

namespace HFFramework
{
    public class HFEditorTools
    {
        public const string AssetFolderIde = "[A]";
        public const string SpriteFolderIde = "[S]";

        /// <summary>
        /// 资源打包
        /// </summary>
        [MenuItem("游戏辅助工具/AssetBundles/构建 所有 AssetBundles")]
        static void BuildAllAssetBundles()
        {
            ReNameDLL();

            BuildTarget target;
            #if UNITY_STANDALONE_WIN
            target = BuildTarget.StandaloneWindows;
            #elif UNITY_STANDALONE_OSX
            target = BuildTarget.StandaloneOSXIntel;
            #elif UNITY_IPHONE
            target = BuildTarget.iOS;
            #elif UNITY_ANDROID
            target = BuildTarget.Android;
            #endif

            string AssetBundlesPath = Application.dataPath + "/StreamingAssets/AssetBundles";
            if (!Directory.Exists(AssetBundlesPath))
            {
                Directory.CreateDirectory(AssetBundlesPath);
            }

            AssetBundleManifest abm = BuildPipeline.BuildAssetBundles("Assets/StreamingAssets/AssetBundles", BuildAssetBundleOptions.ChunkBasedCompression, target);
            BuildZip();
            if (abm)
            {
                string[] assetBundles = abm.GetAllAssetBundles();
                List<AssetsBundleMD5> configList = new List<AssetsBundleMD5>();
                for (int i = 0; i < assetBundles.Length; i++)
                {
                    AssetsBundleMD5 item = new AssetsBundleMD5();
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
        }

        [MenuItem("游戏辅助工具/AssetBundles/构建 所有 AssetBundles  并且自动命名 ")]
        static void SetAssetBundleNameAndBuildAllAssetBundles()
        {
            Caching.ClearCache();
            SetAssetbundlesNames();
            BuildAllAssetBundles();
        }

        [MenuItem("游戏辅助工具/AssetBundles/构建 单个Assetbundle")]
        static void BuildSomeAssetBundles()
        {
            List<AssetBundleBuild> list = new List<AssetBundleBuild>();
            //需要build 什么就写在这
            string[] bundleNames = new string[] { };
            for (int i = 0; i < bundleNames.Length; i++)
            {
                AssetBundleBuild build = new AssetBundleBuild();
                build.assetBundleName = bundleNames[i];
                build.assetNames = AssetDatabase.GetAssetPathsFromAssetBundle(build.assetBundleName);
                list.Add(build);
            }

            BuildSomeAssetBundles(Application.dataPath + "/StreamingAssets/SimpleAssetBundles", list.ToArray());

            File.Delete(Application.dataPath + "/StreamingAssets/AssetBundlesMiniGame/" + "AssetBundlesMiniGame");
            File.Delete(Application.dataPath + "/StreamingAssets/AssetBundlesMiniGame/" + "AssetBundlesMiniGame.manifest");

            AssetDatabase.Refresh();
        }

        static void BuildSomeAssetBundles(string outPath, AssetBundleBuild[] builds)
        {
            BuildTarget target;
            #if UNITY_STANDALONE_WIN
            target = BuildTarget.StandaloneWindows;
            #elif UNITY_STANDALONE_OSX
            target = BuildTarget.StandaloneOSXIntel;
            #elif UNITY_IPHONE
            target = BuildTarget.iOS;
            #elif UNITY_ANDROID
            target = BuildTarget.Android;
            #endif

            if (!Directory.Exists(outPath))
            {
                Directory.CreateDirectory(outPath);
            }

            BuildPipeline.BuildAssetBundles(outPath, builds, BuildAssetBundleOptions.ChunkBasedCompression, target);

            //刷新编辑器
            AssetDatabase.Refresh();
        }

        [MenuItem("游戏辅助工具/AssetBundles/设置AssetbundleName")]
        public static void SetAssetbundlesNames()
        {
            //ClearAssetBundlesName();
            string resourcesPath = Application.dataPath + "/GameResources";
            ReNameDLL();
            m_SetAssetbundlesNames(resourcesPath);
        }

        [MenuItem("游戏辅助工具/AssetBundles/设置DLL到具体资源目录")]
        public static void ReNameDLL()
        {
            string str = "/GameResources/Game/DLL" + AssetFolderIde + "/";
            string target = GameConst.HotFixDLLName + ".dll";
            string sourcePath = Application.streamingAssetsPath + "/DLL/" + target;
            string reNamePath = Application.dataPath + str + target + ".bytes";
            File.Copy(sourcePath, reNamePath, true);
            AssetDatabase.Refresh();
        }

        [MenuItem("游戏辅助工具/AssetBundles/清除所有的AssetbundleName")]
        static void ClearAssetBundlesName()
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
        }    

        /// <summary>
        ///  获得所有编辑器的AssetBundleName
        /// </summary>
        static string[] GetAllAssetBundlesName()
        {
            AssetDatabase.RemoveUnusedAssetBundleNames();
            return AssetDatabase.GetAllAssetBundleNames();
        }
    
        public static void m_SetAssetbundlesNames(string path)
        {
            if (!Directory.Exists(path))//若文件夹不存在则新建文件夹   
            {
                Directory.CreateDirectory(path); //新建文件夹   
                AssetDatabase.Refresh();
            }

            DirectoryInfo directory = new DirectoryInfo(path);
            if (directory.Name.Contains(AssetFolderIde))
            {
                FileInfo[] file = directory.GetFiles();
                AssetBundleConfig config = null;

                //找一下配置文件
                foreach (FileInfo nextFile in file)
                {
                    if (nextFile.Name == "AssetConfig.json")
                    {
                        using (StreamReader sr = nextFile.OpenText())
                        {
                            string str = sr.ReadToEnd();
                            HFAssetConfigRoot root = JsonMapper.ToObject<HFAssetConfigRoot>(str);
                            config = root.AssetBundleConfig;
                        }
                        break;
                    }
                }

                //遍历设置
                foreach (FileInfo nextFile in file)
                {
                    if (nextFile.Name != "AssetConfig.json" && nextFile.Extension!=".cs")
                    {
                        string ex = Path.GetExtension(nextFile.FullName);
                        if (ex != ".meta")
                        {
                            string newItem = nextFile.FullName.Replace("\\", "/");
                            newItem = newItem.Substring(newItem.IndexOf("Assets"));
                            //再拿到他的AssetImporter
                            AssetImporter assetImporter = AssetImporter.GetAtPath(newItem);
 
                            if (config != null)
                            {
                                string bundleName = string.Empty;
                                if (config.assetbundleNameType == "Default")
                                {
                                    bundleName = GetMD5(newItem);
                                }
                                else if (config.assetbundleNameType == "Custom")
                                {
                                    bundleName = config.assetbundleName;
                                }
                                if (assetImporter.assetBundleName != bundleName)
                                {
                                    assetImporter.assetBundleName = bundleName;
                                }
                            }
                        }
                    }
                }
            }

            //获取子文件夹
            DirectoryInfo[] subDirectory = directory.GetDirectories();
            if (subDirectory.Length != 0)
            {
                //便利递归子文件夹
                foreach (DirectoryInfo nextDirectory in subDirectory)
                {
                    string newItem = nextDirectory.FullName.Replace("\\", "/");
                    //设置名字
                    m_SetAssetbundlesNames(newItem);
                }
            }
        }

        [MenuItem("游戏辅助工具/AssetBundles/删除 所有 AssetBundles")]
        public static void DeleteAllAssetbundle()
        {
            AssetDatabase.DeleteAsset("Assets/StreamingAssets/AssetBundles");
            Debug.Log("删除所有 AssetBundles 完成");
        }

        /// <summary>
        ///  MD5写入本地
        /// </summary>
        /// <param name="date"></param>
        public static void WriteMD5Diff(String date)
        {
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
                StringBuilder sb = new StringBuilder();
                for (int i = 0; i < retVal.Length; i++)
                {
                    sb.Append(retVal[i].ToString("x2"));
                }
                return sb.ToString();
            }
        }

        /// <summary>
        ///  压缩 资源
        /// </summary>
        //[MenuItem("Game Editor/Build zip")]
        private static void BuildZip()
        {
            GoCompress(Application.streamingAssetsPath + "/AssetBundles", Application.streamingAssetsPath + "/HotFixResources" + "/AssetBundles");
        }

        public static void GoCompress(string SourceFile, string TartgetFile)
        {
            string Source = SourceFile;
            string Tartget = TartgetFile + ".zip";
            Directory.CreateDirectory(Path.GetDirectoryName(Tartget));
            using (ZipOutputStream s = new ZipOutputStream(File.Create(Tartget)))
            {
                s.SetLevel(6);
                Compress(Source, s);
                s.Finish();
                s.Close();
            }
        }

        public static void Compress(string source, ZipOutputStream s)
        {
            string[] filenames = Directory.GetFileSystemEntries(source);
            foreach (string file in filenames)
            {
                if (Directory.Exists(file))
                {
                    // 递归压缩子文件夹
                    Compress(file, s);
                }
                else
                {
                    using (FileStream fs = File.OpenRead(file))
                    {
                        byte[] buffer = new byte[4 * 1024];
                        ZipEntry entry = new ZipEntry(Path.GetFileName(file));
                        entry.DateTime = DateTime.Now;
                        s.PutNextEntry(entry);
                        int sourceBytes;
                        do
                        {
                            sourceBytes = fs.Read(buffer, 0, buffer.Length);
                            s.Write(buffer, 0, sourceBytes);
                        } while (sourceBytes > 0);
                    }
                }
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

        [MenuItem("Assets/Create/HFFramework/创建一个Asset 打包配置文件", false, 80)]
        public static void CreateAssetbundleConfig()
        {
            ProjectWindowUtil.StartNameEditingIfProjectWindowExists(0, ScriptableObject.CreateInstance<CreateScriptAssetAction>(), GetSelectedPathOrFallback() + "/AssetConfig.json", null, "Assets/Core/Template/AssetConfig.json");
        }

        public static string GetSelectedPathOrFallback()
        {
            string path = "Assets";
            foreach (UnityEngine.Object obj in Selection.GetFiltered(typeof(UnityEngine.Object), SelectionMode.Assets))
            {
                path = AssetDatabase.GetAssetPath(obj);
                if (!string.IsNullOrEmpty(path) && File.Exists(path))
                {
                    path = Path.GetDirectoryName(path);
                    break;
                }
            }
            return path;
        }
    }

    public class CreateScriptAssetAction : EndNameEditAction
    {
        public override void Action(int instanceId, string pathName, string resourceFile)
        {
            //创建资源
            UnityEngine.Object obj = CreateAssetFromTemplate(pathName, resourceFile);
            //高亮显示该资源
            ProjectWindowUtil.ShowCreatedAsset(obj);
        }
        internal static UnityEngine.Object CreateAssetFromTemplate(string pahtName, string resourceFile)
        {
            //获取要创建的资源的绝对路径
            string fullName = Path.GetFullPath(pahtName);
            //读取本地模板文件
            StreamReader reader = new StreamReader(resourceFile);
            string content = reader.ReadToEnd();
            reader.Close();

            //获取资源的文件名
            // string fileName = Path.GetFileNameWithoutExtension(pahtName);
            //替换默认的文件名
            content = content.Replace("#TIME", System.DateTime.Now.ToString("yyyy年MM月dd日 HH:mm:ss dddd"));

            //写入新文件
            StreamWriter writer = new StreamWriter(fullName, false, System.Text.Encoding.UTF8);
            writer.Write(content);
            writer.Close();

            //刷新本地资源
            AssetDatabase.ImportAsset(pahtName);
            AssetDatabase.Refresh();

            return AssetDatabase.LoadAssetAtPath(pahtName, typeof(UnityEngine.Object));
        }
    }
}

