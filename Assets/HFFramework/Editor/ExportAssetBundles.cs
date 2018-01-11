using UnityEngine;
using UnityEditor;
using System.Collections.Generic;
using System.IO;
using ICSharpCode.SharpZipLib.Zip;
using System;
using System.Text;
using LitJson;

public class ExportAssetBundles
{
    public static Dictionary<string, string> assetbundleNameDic = new Dictionary<string, string>();

    /// <summary>
    /// 资源打包
    /// </summary>
    [MenuItem("游戏辅助工具HYG/构建 所有 AssetBundles")]
    static void BuildAllAssetBundles()
    {

        Caching.CleanCache();

        //SetAssetbundlesNames();

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

    /// <summary>
    ///  MD5写入本地
    /// </summary>
    /// <param name="date"></param>
    public static void WriteMD5Diff(String date)
    {
        string path = Application.streamingAssetsPath + "/HotFixResources" + "/MD5Diff.json";
        FileStream fs = new FileStream(path, FileMode.Create);
        //获得字节数组
        byte[] data = Encoding.Default.GetBytes(date);
        //开始写入
        fs.Write(data, 0, data.Length);
        //清空缓冲区、关闭流
        fs.Flush();
        fs.Close();
    }

    /// <summary>
    ///  MD5写入本地
    /// </summary>
    /// <param name="date"></param>
    public static void WriteAssetbundleNames(Dictionary<string, string> lx)
    {
        JsonData js = new JsonData();
        foreach (var item in lx)
        {
            js[item.Key] = item.Value;
        }
        string path = Application.dataPath + "/GameResources" + "/AssetbundleNames.json";
        FileStream fs = new FileStream(path, FileMode.Create);
        //获得字节数组
        byte[] data = Encoding.Default.GetBytes(js.ToJson());
        //开始写入
        fs.Write(data, 0, data.Length);
        //清空缓冲区、关闭流
        fs.Flush();
        fs.Close();
    }


    /// <summary>
    ///  对文件校验MD5
    /// </summary>
    /// <param name="fileName"></param>
    /// <returns></returns>
    private static string GetMD5HashFromFile(string fileName)
    {
        try
        {
            FileStream file = new FileStream(fileName, FileMode.Open);
            System.Security.Cryptography.MD5 md5 = new System.Security.Cryptography.MD5CryptoServiceProvider();
            byte[] retVal = md5.ComputeHash(file);
            file.Dispose();
            file.Close();

            StringBuilder sb = new StringBuilder();
            for (int i = 0; i < retVal.Length; i++)
            {
                sb.Append(retVal[i].ToString("x2"));
            }
            return sb.ToString();
        }
        catch (Exception ex)
        {
            throw new Exception("GetMD5HashFromFile() fail,error:" + ex.Message);
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

    /// <summary>
    ///  不能压缩二级目录
    /// </summary>
    /// <param name="dirPath"></param>
    /// <param name="zipFilePath"></param>
    /// <param name="err"></param>
    /// <returns></returns>
    private static bool M_BuildZip(string dirPath, string zipFilePath, string err)
    {
        if (dirPath == string.Empty)
        {
            Debug.Log("要压缩的文件夹不能为空！");
            return false;
        }
        if (!Directory.Exists(dirPath))
        {
            Debug.Log("要压缩的文件夹不存在！dirPath: " + dirPath);
            return false;
        }
        //压缩文件名为空时使用文件夹名＋.zip  
        if (zipFilePath == string.Empty)
        {
            if (dirPath.EndsWith("\\"))
            {
                dirPath = dirPath.Substring(0, dirPath.Length - 1);
            }
            zipFilePath = dirPath + ".zip";
        }
        try
        {
            string[] filenames = Directory.GetFiles(dirPath);
            using (ZipOutputStream s = new ZipOutputStream(File.Create(zipFilePath)))
            {
                s.SetLevel(9);
                byte[] buffer = new byte[4096];
                foreach (string file in filenames)
                {
                    ZipEntry entry = new ZipEntry(Path.GetFileName(file));
                    entry.DateTime = DateTime.Now;
                    s.PutNextEntry(entry);
                    using (FileStream fs = File.OpenRead(file))
                    {
                        int sourceBytes;
                        do
                        {
                            sourceBytes = fs.Read(buffer, 0, buffer.Length);
                            s.Write(buffer, 0, sourceBytes);
                        } while (sourceBytes > 0);
                    }
                }
                s.Finish();
                s.Close();
            }
        }
        catch (Exception ex)
        {
            err = ex.Message;
            return false;
        }
        return true;
    }


    [MenuItem("游戏辅助工具HYG/构建 单个Assetbundle")]
    static void BuildMiniGameAssetBundles()
    {
        List<AssetBundleBuild> list = new List<AssetBundleBuild>();
        JsonData jList = ReadMiniGameConfing();
        for (int i = 0; i < jList.Count; i++)
        {
            AssetBundleBuild a = new AssetBundleBuild();
            a.assetBundleName = jList[i].ToString();
            a.assetNames = AssetDatabase.GetAssetPathsFromAssetBundle(a.assetBundleName);
            list.Add(a);
        }

        BuildSomeAssetBundles(Application.dataPath + "/StreamingAssets/SimpleAssetBundles", list.ToArray());

        AssetDatabase.Refresh();

        try
        {
            File.Delete(Application.dataPath + "/StreamingAssets/AssetBundlesMiniGame/" + "AssetBundlesMiniGame");
            File.Delete(Application.dataPath + "/StreamingAssets/AssetBundlesMiniGame/" + "AssetBundlesMiniGame.manifest");
        }
        catch (Exception)
        {
        }
        AssetDatabase.Refresh();
    }

    static JsonData ReadMiniGameConfing()
    {
        string str = File.ReadAllText(Application.streamingAssetsPath + "/Config/Hall/ShieldGame.json", Encoding.UTF8);
        JsonData j = JsonMapper.ToObject(str);
        return j["Shield"];
    }


    static void BuildSomeAssetBundles(string outPath, AssetBundleBuild[] builds)
    {
        Caching.CleanCache();
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

        //AssetBundleBuild
        BuildPipeline.BuildAssetBundles(outPath, builds, BuildAssetBundleOptions.ChunkBasedCompression, target);

        //刷新编辑器
        AssetDatabase.Refresh();
    }

    /// <summary>
    ///  获得所有编辑器的AssetBundleName
    /// </summary>
    static string[] GetAllAssetBundlesName()
    {
        AssetDatabase.RemoveUnusedAssetBundleNames();
        string[] assetBundleNames = AssetDatabase.GetAllAssetBundleNames();
        int i = 0;
        foreach (var item in assetBundleNames)
        {
            i++;
            Debug.Log("序号" + i + "  " + item);
        }
        return assetBundleNames;
    }


    [MenuItem("游戏辅助工具HYG/设置AssetbundleName")]
    public static void SetAssetbundlesNames()
    {
        //ClearAssetBundlesName();
        string resourcesPath = Application.dataPath + "/GameResources";
        ReNameDLL();
        assetbundleNameDic.Clear();
        m_SetAssetbundlesNames(resourcesPath);
        WriteAssetbundleNames(assetbundleNameDic);
        assetbundleNameDic.Clear();
    }

    public static void ReNameDLL()
    {
        string str = "/GameResources/Game/TestGameA/DLL_@!/";
        string target = "HFFrameworkHotFix.dll";
        string sourcePath = Application.dataPath + str + target;
        string reNamePath = Application.dataPath + str + target + ".bytes";
        File.Copy(sourcePath, reNamePath, true);
    }

    [MenuItem("游戏辅助工具HYG/清除所有的AssetbundleName")]
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

    public static void m_SetAssetbundlesNames(string path)
    {
        if (!Directory.Exists(path))//若文件夹不存在则新建文件夹   
        {
            Directory.CreateDirectory(path); //新建文件夹   
        }

        AssetDatabase.Refresh();

        DirectoryInfo folder = new DirectoryInfo(path);

        if (folder.Name.Contains("_@!"))
        {
            FileInfo[] f = folder.GetFiles();


            
            //先找出AssetbundleConfig
            HFAssetbundleConfig config=null;
            foreach (FileInfo NextFile in f)
            {
                if (NextFile.Name== "AssetbundleConfig.json")
                {
                    using (StreamReader sr = NextFile.OpenText())
                    {
                        string  str = sr.ReadToEnd();
                        HFAssetbundleConfigRoot root = JsonMapper.ToObject<HFAssetbundleConfigRoot>(str);
                        config = root.HFAssetbundleConfig;
                        sr.Dispose();
                        sr.Close();
                    }
                    break;
                }
            }
            

            foreach (FileInfo NextFile in f)
            {
                if (NextFile.Name != "AssetbundleConfig.json")
                {
                    string ex = Path.GetExtension(NextFile.FullName);
                    if (ex != ".meta")
                    {
                        string newItem = NextFile.FullName.Replace("\\", "/");

                        newItem = newItem.Substring(newItem.IndexOf("Assets"));

                        //再拿到他的AssetImporter
                        AssetImporter assetImporter = AssetImporter.GetAtPath(newItem);

                        newItem = newItem.Substring(newItem.IndexOf("GameResources"));
                        newItem = newItem.Replace(@"/", "_");
                        int last_ = newItem.LastIndexOf("_");
                        newItem = newItem.Substring(0, last_);
                   
                        if (config!=null&&config.assetbundleNameType== "Default")
                        {
                            string md5Str = ExportAssetBundles.GetMD5(newItem);
                            // 通过文件路径 设置assetbundle 
                            assetImporter.assetBundleName = md5Str;

                            string md5;
                            if (assetbundleNameDic.TryGetValue(newItem, out md5) == false)
                            {
                                assetbundleNameDic.Add(newItem, md5Str);
                            }
                        }
                        if (config != null && config.assetbundleNameType == "Custom")
                        {
                            assetImporter.assetBundleName = config.assetbundleName;

                            string md5;
                            if (assetbundleNameDic.TryGetValue(newItem, out md5) == false)
                            {
                                assetbundleNameDic.Add(newItem, config.assetbundleName);
                            }
                        }
                    }
                }
            }
        }

        DirectoryInfo[] d = folder.GetDirectories();
        if (d.Length != 0)
        {
            foreach (DirectoryInfo NextFolder in d)
            {
                string newItem = NextFolder.FullName.Replace("\\", "/");
                m_SetAssetbundlesNames(newItem);
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


    [MenuItem("游戏辅助工具HYG/删除 所有 AssetBundles")]
    public static void DeleteAllAssetbundle()
    {
        AssetDatabase.DeleteAsset("Assets/StreamingAssets/AssetBundles");
        Debug.Log("删除所有 AssetBundles 完成");
    }
}


public class AssetsBundleMD5
{
    /// <summary>
    /// 
    /// </summary>
    public string key { get; set; }
    /// <summary>
    /// 
    /// </summary>
    public string value { get; set; }
}

public class MD5Diff
{
    /// <summary>
    /// 
    /// </summary>
    public List<AssetsBundleMD5> AssetsBundleMD5List { get; set; }
}

public class HFAssetbundleConfig
{
    /// <summary>
    /// Default 代表使用 默认MD5创建的assetbundleName 
    /// Custom 代表使用 自定义的assetbundleName
    /// </summary>
    public string assetbundleNameType { get; set; }
    /// <summary>
    /// 
    /// </summary>
    public string assetbundleName { get; set; }
}

public class HFAssetbundleConfigRoot
{
    /// <summary>
    /// 
    /// </summary>
    public HFAssetbundleConfig HFAssetbundleConfig { get; set; }
}