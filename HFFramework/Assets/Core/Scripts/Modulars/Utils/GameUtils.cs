using UnityEngine;
using System.Text;
using System.IO;
using System;
using System.Collections;
using System.Threading;

namespace HFFramework
{
    public class GameUtils : MonoBehaviour,IManager
    {
        public static GameUtils Instance;

        public void Awake()
        {
            Instance = this;
            CreateCustomFilePathFolder();
        }

        IEnumerator AsyncRead(string path, Action<string> callback)
        {
            path = "file:///"+ path;
            print(path);
            WWW w = new WWW(path);
            yield return w;
            if (string.IsNullOrEmpty(w.error))
            {
                if (callback != null)
                {
                    callback(w.text);
                }
            }
            else
            {
                print("有问题"+w.error);
            }
            w.Dispose();
            w = null;
        }

        /// <summary>
        ///  创建自定义读写文件基础文件夹
        /// </summary>
        public void CreateCustomFilePathFolder()
        {
            HFLog.C("自定义读写根目录 " + PathManager.Instance.PersistentDataCustomPath);
            if (!Directory.Exists(PathManager.Instance.PersistentDataCustomPath))
            {
                Directory.CreateDirectory(PathManager.Instance.PersistentDataCustomPath);
            }
        }

        /// <summary>
        ///  创建文件夹 
        /// </summary>
        /// <param name="folderName"> 文件夹名字 </param>
        /// <param name="isRelative"> 是否是相对于RootPath 的相对路径 </param>
        public static bool CreateFolder(string folderName, bool isRelative= true)
        {
            string path = GetPath(folderName, isRelative);
            if (!Directory.Exists(path))
            {
                Directory.CreateDirectory(path);
                return true;
            }
            return false;
        }

        /// <summary>
        ///  获取一个文件夹下 文件个数
        /// </summary>
        /// <param name="folderName"></param>
        /// <param name="isRelative"></param>
        /// <returns></returns>
        public static int GetFileCountInFolder(string folderName, bool isRelative = true)
        {
            DirectoryInfo logFolder = new DirectoryInfo(GameUtils.GetPath(folderName, true));
            return logFolder.GetFiles().Length;
        }

        /// <summary>
        ///  删除一个文件
        /// </summary>
        /// <param name="folderName"></param>
        /// <param name="isRelative"></param>
        public static void DeleteFolder(string folderName, bool isRelative = true)
        {
            string path = GetPath(folderName, isRelative);
            if (Directory.Exists(path))
            {
                Directory.Delete(path,true);
            }
        }

        private static ReaderWriterLockSlim writeLock = new ReaderWriterLockSlim();

        /// <summary>
        ///  写入一个文件 
        /// </summary>
        /// <param name="folderName">文件路径</param>
        /// <param name="content">内容</param>
        /// <param name="isRelative"></param>
        public static void WriteFile(string folderName, byte[] content , FileMode mode = FileMode.Create, bool isRelative = true)
        {
            string path = GetPath(folderName, isRelative);         
            writeLock.EnterWriteLock();
            using (FileStream f = new FileStream(path, mode))
            {
                f.Write(content, 0, content.Length);
                f.Flush();
            }
            writeLock.ExitWriteLock();
        }

        /// <summary>
        ///  读取一个文件 同步
        /// </summary>
        /// <param name="folderName"></param>
        /// <param name="isRelative"></param>
        /// <returns></returns>
        public static string SyncReadFile(string folderName, bool isRelative = true)
        {
            string path = GetPath(folderName, isRelative);
            if (File.Exists(path))
            {
                using (FileStream f = new FileStream(path, FileMode.Open))
                {
                    byte[] heByte = new byte[(int)f.Length];
                    f.Read(heByte, 0, heByte.Length);
                    return Encoding.UTF8.GetString(heByte);
                }
            }
            else
            {
                return "";
            }
        }

        /// <summary>
        ///  异步读取一个文件
        /// </summary>
        /// <param name="folderName"></param>
        /// <param name="isRelative"></param>
        /// <returns></returns>
        public static void AsyncReadFile(string folderName, Action<string> callback, bool isRelative = true)
        {
            string path = GetPath(folderName, isRelative);
            GameUtils.Instance.StartCoroutine(GameUtils.Instance.AsyncRead(path, callback));
        }

        public static void DeleteFile(string folderName, bool isRelative = true)
        {
            string path = GetPath(folderName, isRelative);
            if (File.Exists(path))
            {
                File.Delete(path);
            }
        }

        public static string GetPath(string folderName, bool isRelative)
        {
            string path = "";
            if (isRelative)
            {
                path = PathManager.Instance.PersistentDataCustomPath + "/" + folderName;
            }
            else
            {
                path = folderName;
            }
            return path;
        }

        public static string SetColor(object obj, string color)
        {
            StringBuilder sb = new StringBuilder();
            sb.AppendFormat("<color=#{0}>{1}</color>", color, obj);
            return sb.ToString();
        }

        public void DestroyManager()
        {
            Instance = null;
        }
    }
}
