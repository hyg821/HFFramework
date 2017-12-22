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
    /// <summary>
    /// 资源打包
    /// </summary>
    [MenuItem("游戏辅助工具HYG/构建 所有 AssetBundles")]
    static void BuildAllAssetBundles()
    {
        Caching.CleanCache();

        BuildDLL();

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
    

            string outStreaming = Application.dataPath + "/" + "ReNameDLL" + "/";
            DirectoryInfo isx = new DirectoryInfo(outStreaming);
            isx.Delete(true);
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
        //M_BuildZip(Application.streamingAssetsPath + "/AssetBundles", "", "");
        //M_BuildZip(Application.streamingAssetsPath + "/Config", "", "");
        GoCompress(Application.streamingAssetsPath + "/AssetBundles", Application.streamingAssetsPath +"/HotFixResources"+ "/AssetBundles");
        GoCompress(Application.streamingAssetsPath + "/Config", Application.streamingAssetsPath + "/HotFixResources"+ "/Config");
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
                    // 此处去掉盘符，如D:\123\1.txt 去掉D:
                    //ZipEntry entry = new ZipEntry(file.Replace(Path.GetPathRoot(file), ""));
                    //  Debug.Log("===============:"+file.Replace(Path.GetPathRoot(file), ""));
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

    //[MenuItem("Game Editor/Build DLL")]
    public static void BuildDLL()
    {
        string streaming = Application.streamingAssetsPath + "/";
        string outStreaming = Application.dataPath + "/"+"ReNameDLL"+"/";
        string[] dllPath = new  string[] { streaming+"jiejigamehotfix.dll"};
        string[] outdllPath = new string[] { outStreaming + "jiejigamehotfix.dll.bytes"};
        string[] dllAssetbundleName = new string[] { "jiejigamehotfix_dll"};

        //如果不存在就创建file文件夹
        if (!Directory.Exists(outStreaming) )
        {
            Directory.CreateDirectory(outStreaming);
        }

        for (int i = 0; i < outdllPath.Length; i++)
        {
            string sourceFile = dllPath[i];
            string destinationFile = outdllPath[i];
            bool isrewrite = true; // true=覆盖已存在的同名文件,false则反之
            File.Copy(sourceFile, destinationFile, isrewrite);
            EditorUtility.DisplayProgressBar("重新命名dll", "", (i +1+0.0f)/ outdllPath.Length);
        }

        //刷新编辑器
        AssetDatabase.Refresh();

        for (int i = 0; i < outdllPath.Length; i++)
        {
            string destinationFile = outdllPath[i];
            destinationFile = destinationFile.Substring(destinationFile.IndexOf("Assets"));
            AssetImporter assetImporter = AssetImporter.GetAtPath(destinationFile);
            assetImporter.assetBundleName = dllAssetbundleName[i];
        }

        EditorUtility.ClearProgressBar();
        //刷新编辑器
        AssetDatabase.Refresh();
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


    [MenuItem("游戏辅助工具HYG/构建 AssetBundles 排除小游戏")]
    static void BuildAssetBundlesExcludeMiniGame()
    {
        string AssetBundlesPath = Application.dataPath + "/StreamingAssets/AssetBundles";
        string AssetBundlesExcludeMiniGamePath = Application.dataPath + "/StreamingAssets/AssetBundlesExcludeMiniGame";
        CopyDirectory(AssetBundlesPath, AssetBundlesExcludeMiniGamePath);

        JsonData jList = ReadMiniGameConfing();
        for (int i = 0; i < jList.Count; i++)
        {
            Debug.Log(i);
            File.Delete(Application.dataPath + "/StreamingAssets/AssetBundlesExcludeMiniGame/" + "AssetBundles/" + jList[i]);
            File.Delete(Application.dataPath + "/StreamingAssets/AssetBundlesExcludeMiniGame/" + "AssetBundles/" + jList[i] + ".meta");
            File.Delete(Application.dataPath + "/StreamingAssets/AssetBundlesExcludeMiniGame/" + "AssetBundles/" + jList[i] + ".manifest");
            File.Delete(Application.dataPath + "/StreamingAssets/AssetBundlesExcludeMiniGame/" + "AssetBundles/" + jList[i] + ".manifest.meta");
        }

        //刷新编辑器
        AssetDatabase.Refresh();

    }


    static void CopyDirectory(string sourcePath, string destPath)
    {
        //刷新编辑器
        AssetDatabase.Refresh();
        EditorUtility.DisplayProgressBar("复制assetbundle", "AssetBundlesExcludeMiniGame", 0);
      

        //刷新编辑器
        AssetDatabase.Refresh();

        string floderName = Path.GetFileName(sourcePath);
        DirectoryInfo di = Directory.CreateDirectory(Path.Combine(destPath, floderName));
        string[] files = Directory.GetFileSystemEntries(sourcePath);

        foreach (string file in files)
        {
            if (Directory.Exists(file))
            {
                CopyDirectory(file, di.FullName);
            }
            else
            {
                File.Copy(file, Path.Combine(di.FullName, Path.GetFileName(file)), true);
            }
        }

        EditorUtility.DisplayProgressBar("复制assetbundle", "啦啦啦啦", 0.5f);


        EditorUtility.ClearProgressBar();

        //刷新编辑器
        AssetDatabase.Refresh();

    }

    [MenuItem("游戏辅助工具HYG/构建 小游戏 AssetBundles")]
    static void BuildMiniGameAssetBundles()
    {
        BuildDLL();

        List<AssetBundleBuild> list = new List<AssetBundleBuild>();
        JsonData jList = ReadMiniGameConfing();
        for (int i = 0; i < jList.Count; i++)
        {
            AssetBundleBuild a = new AssetBundleBuild();
            a.assetBundleName = jList[i].ToString();
            a.assetNames = AssetDatabase.GetAssetPathsFromAssetBundle(a.assetBundleName);
            list.Add(a);
        }

        BuildSomeAssetBundles(Application.dataPath + "/StreamingAssets/AssetBundlesMiniGame", list.ToArray());

        string outStreaming = Application.dataPath + "/" + "ReNameDLL" + "/";
        DirectoryInfo isx = new DirectoryInfo(outStreaming);
        isx.Delete(true);

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


    [MenuItem("Tools/SetAssetbundlesNames")]
    public static void SetAssetbundlesNames()
    {
        ClearAssetBundlesName();
        string resourcesPath = Application.dataPath + "/MyResources";
        m_SetAssetbundlesNames(resourcesPath);
    }


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

        FileInfo[] f = folder.GetFiles();

        foreach (FileInfo NextFile in f)
        {

            string ex = Path.GetExtension(NextFile.FullName);
            if (ex != ".meta")
            {

                string newItem = NextFile.FullName.Replace("\\", "/");
                Debug.Log("普通文件=" + newItem);

                newItem = newItem.Substring(newItem.IndexOf("Assets"));

                UnityEngine.Object obj = AssetDatabase.LoadAssetAtPath<UnityEngine.Object>(newItem);
                Debug.Log("文件对象=" + obj.name);

                Debug.Log("路径=" + newItem);

                AssetImporter assetImporter = AssetImporter.GetAtPath(newItem);

                newItem = newItem.Substring(newItem.IndexOf("Assetbundles"));
                string[] pp = newItem.Split(new string[] { "." }, StringSplitOptions.RemoveEmptyEntries);

                // 通过文件路径 设置assetbundle 
                assetImporter.assetBundleName = pp[0];


                // 通过文件夹设置 assetbundle 
                string folderPath = path.Replace("\\", "/");
                string folderRelativePath = folderPath.Substring(folderPath.IndexOf("Assets"));
                assetImporter.assetBundleName = folderRelativePath;
            }
        }

        DirectoryInfo[] d = folder.GetDirectories();
        if (d.Length == 0)
        {
            return;
        }

        foreach (DirectoryInfo NextFolder in d)
        {
            string newItem = NextFolder.FullName.Replace("\\", "/");
            Debug.Log("文件夹=" + newItem);
            m_SetAssetbundlesNames(newItem);
        }
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



