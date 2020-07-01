using UnityEngine;
using UnityEditor;
using System.Collections.Generic;
using System.IO;
using ICSharpCode.SharpZipLib.Zip;
using System;
using System.Text;
using LitJson;
using UnityEditor.ProjectWindowCallback;
using UnityEngine.U2D;
using UnityEditor.U2D;

namespace HFFramework.Editor
{
    [InitializeOnLoad]
    public class HFEditorTools
    {
        static HFEditorTools()
        {
            HFLog.C("编辑器工具刷新");
        }

        [InitializeOnLoadMethod]
        static void ReLoadMethod()
        {
            HFLog.C("编辑器工具刷新方法");
        }

        [MenuItem("游戏辅助工具/项目默认设置")]
        static void ProjectSetting()
        {
            PlayerSettings.companyName = "hyg";
            PlayerSettings.productName = "HFFramework";
            string identifier = "com" + "." + PlayerSettings.companyName + "." + PlayerSettings.productName;
            PlayerSettings.SetApplicationIdentifier(BuildTargetGroup.Standalone, identifier);
            PlayerSettings.SetApplicationIdentifier(BuildTargetGroup.Android, identifier);
            PlayerSettings.SetApplicationIdentifier(BuildTargetGroup.iOS, identifier);
            PlayerSettings.bundleVersion = "1.0.0";

            //垂直同步关闭
            QualitySettings.vSyncCount = 0;

            //模式 3d  
            EditorSettings.defaultBehaviorMode = EditorBehaviorMode.Mode3D;

            //序列化模式 2进制
            EditorSettings.serializationMode = SerializationMode.ForceBinary;

            EditorSettings.spritePackerMode = SpritePackerMode.AlwaysOnAtlas;

            //可见meta 文件
            EditorSettings.externalVersionControl = "Visible Meta Files";

            //不允许横竖旋转 并且不允许上下旋转
            PlayerSettings.allowedAutorotateToPortrait = false;
            PlayerSettings.allowedAutorotateToPortraitUpsideDown = false;
            //左右横向显示
            PlayerSettings.allowedAutorotateToLandscapeLeft = false;
            PlayerSettings.allowedAutorotateToLandscapeRight = false;

            PlayerSettings.defaultInterfaceOrientation = UIOrientation.LandscapeLeft;

            //安卓 ARMv7 包体减小 
            PlayerSettings.Android.targetArchitectures = AndroidArchitecture.ARMv7;

            //.net 4.6 代码运行
            PlayerSettings.scriptingRuntimeVersion = ScriptingRuntimeVersion.Latest;

            //安卓 mono运行
            PlayerSettings.SetScriptingBackend(BuildTargetGroup.Android, ScriptingImplementation.Mono2x);
            //iOS IL2CPP 运行
            PlayerSettings.SetScriptingBackend(BuildTargetGroup.iOS, ScriptingImplementation.IL2CPP);

            PlayerSettings.allowUnsafeCode = true;

            //关闭剥离引擎代码
            PlayerSettings.stripEngineCode = false;

            //设置编辑器 高级debug
            //EditorPrefs.SetBool("DeveloperMode", false);

            AssetDatabase.Refresh();
            Debug.Log("设置完成");
        }

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
            return target;
        }

        /// <summary>
        /// 资源打包
        /// </summary>
        [MenuItem("游戏辅助工具/资源设置/构建 所有 AssetBundles")]
        static void BuildAllAssetBundles()
        {
            ReNameDLL();

            PackingAtlas();

            string AssetBundlesPath = Application.dataPath + "/StreamingAssets/AssetBundles";
            if (!Directory.Exists(AssetBundlesPath))
            {
                Directory.CreateDirectory(AssetBundlesPath);
            }
            AssetBundleManifest abm = BuildPipeline.BuildAssetBundles("Assets/StreamingAssets/AssetBundles", BuildAssetBundleOptions.ChunkBasedCompression | BuildAssetBundleOptions.DisableWriteTypeTree, GetBuildTarget());
            //BuildZip();
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

        [MenuItem("游戏辅助工具/资源设置/构建 所有 AssetBundles  并且自动命名 (只需要在打包的时候使用)")]
        static void SetAssetBundleNameAndBuildAllAssetBundles()
        {
            Caching.ClearCache();
            SetAssetbundlesNames();
            BuildAllAssetBundles();
        }

        [MenuItem("游戏辅助工具/资源设置/构建 单个Assetbundle")]
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
            if (!Directory.Exists(outPath))
            {
                Directory.CreateDirectory(outPath);
            }

            BuildPipeline.BuildAssetBundles(outPath, builds, BuildAssetBundleOptions.ChunkBasedCompression, GetBuildTarget());

            //刷新编辑器
            AssetDatabase.Refresh();
        }

        [MenuItem("游戏辅助工具/资源设置/设置AssetbundleName")]
        public static void SetAssetbundlesNames()
        {
            //ClearAssetBundlesName();
            string resourcesPath = Application.dataPath + "/GameResources";
            ReNameDLL();
            SetAssetConfig(resourcesPath,true,false);
        }

        [MenuItem("游戏辅助工具/资源设置/设置DLL到具体资源目录")]
        public static void ReNameDLL()
        {
            string str = "/GameResources/DLL" + GameConst.AssetFolderIde + "/";
            string target = GameConst.HotFixDLLName + ".dll";
            string sourcePath = Application.streamingAssetsPath + "/DLL/" + target;
            string reNamePath = Application.dataPath + str + target + ".bytes";
            File.Copy(sourcePath, reNamePath, true);
            AssetDatabase.Refresh();
        }

        [MenuItem("游戏辅助工具/资源设置/清除所有的AssetbundleName")]
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

        [MenuItem("游戏辅助工具/资源设置/删除 所有 AssetBundles")]
        public static void DeleteAllAssetbundle()
        {
            AssetDatabase.DeleteAsset("Assets/StreamingAssets/AssetBundles");
            Debug.Log("删除所有 AssetBundles 完成");
        }

        [MenuItem("游戏辅助工具/资源设置/刷新图集")]
        public static void PackingAtlas()
        {
            string resourcesPath = Application.dataPath + "/GameResources";
            SetAssetConfig(resourcesPath, false, true);
            SpriteAtlasUtility.PackAllAtlases(EditorUserBuildSettings.activeBuildTarget);
            AssetDatabase.Refresh();
        }

        [MenuItem("游戏辅助工具/安卓打包")]
        public static void BuildAndorid()
        {
            if (EditorUserBuildSettings.activeBuildTarget != BuildTarget.Android)
            {
                EditorUserBuildSettings.SwitchActiveBuildTarget(BuildTargetGroup.Android, BuildTarget.Android);
                AssetDatabase.Refresh();
            }

            //生成图集
            PackingAtlas();
            //更新配置
            HFConfigCreater.GenerateConfigByAnalysis();
            //清除bundleName
            ClearAssetBundlesName();
            SetAssetBundleNameAndBuildAllAssetBundles();
            string outPath = Path.GetDirectoryName(Application.dataPath).Replace("\\", "/") + "/Release/Android/"+ PlayerSettings.productName + ".apk";
            BuildPipeline.BuildPlayer(GetBuildScenes(), outPath, BuildTarget.Android, BuildOptions.None);
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
        ///  获得所有编辑器的AssetBundleName
        /// </summary>
        static string[] GetAllAssetBundlesName()
        {
            AssetDatabase.RemoveUnusedAssetBundleNames();
            return AssetDatabase.GetAllAssetBundleNames();
        }
    
        /// <summary>
        ///  根据 AssetConfig 设置assetbundleName 和 图集设置
        /// </summary>
        /// <param name="path"></param>
        public static void SetAssetConfig(string path,bool setAssetbundleName,bool setSpriteAtlas)
        {
            if (!Directory.Exists(path))//若文件夹不存在则新建文件夹   
            {
                Directory.CreateDirectory(path); //新建文件夹   
                AssetDatabase.Refresh();
            }

            DirectoryInfo directory = new DirectoryInfo(path);
            //如果 文件夹名称有[A] 并且是需要设置 assetbundle名字   或者 文件夹名称有[S]并且需要设置图集的
            if ((directory.Name.Contains(GameConst.AssetFolderIde)&& setAssetbundleName)||(directory.Name.Contains(GameConst.SpriteFolderIde) && setSpriteAtlas))
            {
                FileInfo[] file = directory.GetFiles();

                //找一下配置文件
                AssetConfig config = null;
                foreach (FileInfo nextFile in file)
                {
                    if (nextFile.Name == "AssetConfig.asset")
                    {
                        string assetPath = nextFile.FullName.Replace("\\", "/");
                        assetPath = assetPath.Substring(assetPath.IndexOf("Assets"));
                        config = AssetDatabase.LoadAssetAtPath<AssetConfig>(assetPath);
                        break;
                    }
                }

                //遍历设置
                foreach (FileInfo nextFile in file)
                {
                    if (nextFile.Name!= "AssetConfig.asset"&&nextFile.Extension!=".cs")
                    {
                        string ex = Path.GetExtension(nextFile.FullName);
                        if (ex != ".meta")
                        {
                            string assetPath = nextFile.FullName.Replace("\\", "/");
                            assetPath = assetPath.Substring(assetPath.IndexOf("Assets"));
                            if (setAssetbundleName)
                            {
                                //再拿到他的AssetImporter
                                AssetImporter assetImporter = AssetImporter.GetAtPath(assetPath);
                                SetAssetbundleByAssetImporter(assetImporter, config);
                            }

                            if (setSpriteAtlas&& ex== ".spriteatlas")
                            {
                                int index = assetPath.LastIndexOf("/");
                                string directoryPath = assetPath.Substring(0, index);
                                SpriteAtlas atlas = AssetDatabase.LoadAssetAtPath<SpriteAtlas>(assetPath);
                                if (atlas!=null)
                                {
                                    UnityEngine.Object obj = AssetDatabase.LoadAssetAtPath<UnityEngine.Object>(directoryPath);
                                    atlas.Remove(atlas.GetPackables());
                                    atlas.Add(new[] { obj });
                                    AssetDatabase.SaveAssets();
                                }
                                else
                                {
                                    HFLog.E(assetPath+" 没有找到 SpriteAtlas");
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
                    SetAssetConfig(newItem,setAssetbundleName,setSpriteAtlas); 
                }
            }
        }

        public static void SetAssetbundleByAssetImporter(AssetImporter assetImporter , AssetConfig config)
        {
            if (config != null)
            {
                string bundleName = string.Empty;
                if (config.assetbundleNameType == AssetbundleNameType.Default)
                {
                    bundleName = GetMD5(assetImporter.assetPath);
                }
                else if (config.assetbundleNameType == AssetbundleNameType.Custom)
                {
                    bundleName = config.assetbundleName;
                }
                if (assetImporter.assetBundleName != bundleName)
                {
                    assetImporter.assetBundleName = bundleName;
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

        [MenuItem("Assets/Create/HFFramework/创建一个Asset配置文件(ScriptableObject版本)", false, 80)]
        public static void CreateAssetConfigScriptableObject()
        {
            AssetConfig config = ScriptableObject.CreateInstance<AssetConfig>();
            AssetDatabase.CreateAsset(config, GetSelectedPathOrFallback() + "/AssetConfig.asset");
        }

        [MenuItem("Assets/Create/HFFramework/创建一个Asset配置文件 (json版本暂时没用)", false, 80)]
        public static void CreateAssetConfigJson()
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
        internal static UnityEngine.Object CreateAssetFromTemplate(string pathName, string resourceFile)
        {
            //获取要创建的资源的绝对路径
            string fullName = Path.GetFullPath(pathName);
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
            AssetDatabase.ImportAsset(pathName);
            AssetDatabase.Refresh();

            return AssetDatabase.LoadAssetAtPath(pathName, typeof(UnityEngine.Object));
        }
    }
}

