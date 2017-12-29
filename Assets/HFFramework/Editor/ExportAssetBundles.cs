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

    public static List<string> assetbundleNameList = new List<string>();

    /// <summary>
    /// 资源打包
    /// </summary>
    [MenuItem("游戏辅助工具HYG/构建 所有 AssetBundles")]
    static void BuildAllAssetBundles()
    {
        Caching.CleanCache();

        SetAssetbundlesNames();

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
    public static void WriteAssetbundleNames(List<string> lx)
    {
        string str="";
        foreach (var item in lx)
        {
            str +=( item+"\n");
        }
        string path = Application.dataPath + "/GameResources" + "/AssetbundleNames.txt";
        FileStream fs = new FileStream(path, FileMode.Create);
        //获得字节数组
        byte[] data = Encoding.Default.GetBytes(str);
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
        GoCompress(Application.streamingAssetsPath + "/AssetBundles", Application.streamingAssetsPath +"/HotFixResources"+ "/AssetBundles");
    }


    public static void GoCompress(string SourceFile, string TartgetFile)
    {
        string Source = SourceFile;
        string Tartget = TartgetFile+".zip";
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
        string str =  File.ReadAllText(Application.streamingAssetsPath + "/Config/Hall/ShieldGame.json", Encoding.UTF8);
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
        string[] assetBundleNames =  AssetDatabase.GetAllAssetBundleNames();
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
        assetbundleNameList.Clear();
        m_SetAssetbundlesNames(resourcesPath);
        WriteAssetbundleNames(assetbundleNameList);
        assetbundleNameList.Clear();
    }

    [MenuItem("游戏辅助工具HYG/清除所有的AssetbundleName")]
    static void ClearAssetBundlesName()
    {
        int length = AssetDatabase.GetAllAssetBundleNames().Length;
        Debug.Log(length);
        string[] oldAssetBundleNames = new string[length];
        for (int i = 0; i < length; i++)
        {
            oldAssetBundleNames[i] = AssetDatabase.GetAllAssetBundleNames()[i];
        }

        for (int j = 0; j < oldAssetBundleNames.Length; j++)
        {
            AssetDatabase.RemoveAssetBundleName(oldAssetBundleNames[j], true);
        }
        length = AssetDatabase.GetAllAssetBundleNames().Length;
        Debug.Log(length);
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

            foreach (FileInfo NextFile in f)
            {
                string ex = Path.GetExtension(NextFile.FullName);
                if (ex != ".meta")
                {
                    string newItem = NextFile.FullName.Replace("\\", "/");

                    newItem = newItem.Substring(newItem.IndexOf("Assets"));

                    //先在编辑器里拿到对象
                    //UnityEngine.Object obj = AssetDatabase.LoadAssetAtPath<UnityEngine.Object>(newItem);

                    //再拿到他的AssetImporter
                    AssetImporter assetImporter = AssetImporter.GetAtPath(newItem);

                    newItem = newItem.Substring(newItem.IndexOf("GameResources"));

                    newItem = newItem.Replace(@"/", "_");

                    int last_ = newItem.LastIndexOf("_");

                    newItem =  newItem.Substring(0, last_);


                    string md5Str = ExportAssetBundles.GetMD5(newItem);

                    // 通过文件路径 设置assetbundle 
                    assetImporter.assetBundleName = md5Str;

                    string temp = newItem + "   " + md5Str;
                    if (assetbundleNameList.Contains(temp)==false)
                    {
                        assetbundleNameList.Add(temp);
                    }
                }
            }
        }
   

        DirectoryInfo[] d = folder.GetDirectories();
        if (d.Length!=0)
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
        bytValue =Encoding.UTF8.GetBytes(sDataIn);
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



