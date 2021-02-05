using UnityEngine;
using System.Text;
using System.IO;
using System;
using System.Collections;
using System.Threading;

namespace HFFramework
{
    /// <summary>
    /// 工具箱
    /// </summary>
    public class GameUtils : MonoBehaviour,IManager
    {
        public static GameUtils Instance;

        private static ReaderWriterLockSlim writeLock = new ReaderWriterLockSlim();

        public void Awake()
        {
            Instance = this;
            CreateCustomDirectory();
        }

        /// <summary>
        ///  创建自定义读写文件基础文件夹
        /// </summary>
        public void CreateCustomDirectory()
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
        public static void CreateDirectory(string directory, bool isRelative= true)
        {
            string path = GetPath(directory, isRelative);
            if (!Directory.Exists(path))
            {
                Directory.CreateDirectory(path);
            }
        }

        /// <summary>
        ///  删除文件夹
        /// </summary>
        /// <param name="folderName"></param>
        /// <param name="isRelative"></param>
        public static void DeleteDirectory(string directory, bool isRelative = true)
        {
            string path = GetPath(directory, isRelative);
            if (Directory.Exists(path))
            {
                Directory.Delete(path,true);
            }
        }

        /// <summary>
        ///  写入一个文件 
        /// </summary>
        /// <param name="folderName">文件路径</param>
        /// <param name="content">内容</param>
        /// <param name="isRelative"></param>
        public static void WriteFile(string directory, byte[] content , FileMode mode = FileMode.Create, bool isRelative = true)
        {
            string path = GetPath(directory, isRelative);         
            writeLock.EnterWriteLock();
            using (FileStream f = new FileStream(path, mode))
            {
                f.Write(content, 0, content.Length);
                f.Flush();
            }
            writeLock.ExitWriteLock();
        }

        /// <summary>
        ///  读取一个文件
        /// </summary>
        /// <param name="folderName"></param>
        /// <param name="isRelative"></param>
        /// <returns></returns>
        public static string ReadFile(string directory, bool isRelative = true)
        {
            string path = GetPath(directory, isRelative);
            string result = string.Empty;
            if (File.Exists(path))
            {
                using (FileStream f = new FileStream(path, FileMode.Open))
                {
                    byte[] bytes = new byte[(int)f.Length];
                    f.Read(bytes, 0, bytes.Length);
                    result = Encoding.UTF8.GetString(bytes);
                }
            }
            return result;
        }

        /// <summary>
        /// 删除文件
        /// </summary>
        /// <param name="folderName"></param>
        /// <param name="isRelative"></param>
        public static void DeleteFile(string directory, bool isRelative = true)
        {
            string path = GetPath(directory, isRelative);
            if (File.Exists(path))
            {
                File.Delete(path);
            }
        }

        public static string GetPath(string directory, bool isRelative)
        {
            string path = "";
            if (isRelative)
            {
                path = PathManager.Instance.PersistentDataCustomPath + "/" + directory;
            }
            else
            {
                path = directory;
            }
            return path;
        }

        public static string SetColor(object obj, string color)
        {
            StringBuilder sb = new StringBuilder();
            sb.AppendFormat("<color=#{0}>{1}</color>", color, obj);
            return sb.ToString();
        }

        public void Dispose()
        {
            Instance = null;
        }
    }
}
