using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.IO;
using System.Text;
using System.Threading.Tasks;

namespace HFFramework
{
    /// <summary>
    ///  负责写入log 到本地
    /// </summary>
    public class LogCat : MonoBehaviour
    {
        public const string logFolderName = "Log";

        private StringBuilder logStr;

        public string timeTag;

        public int cacheCount = 50;

        private void Start()
        {
            bool isNewCreate = GameUtils.CreateFolder(logFolderName);
            if (isNewCreate==false)
            {
                int fileCount = GameUtils.GetFileCountInFolder(logFolderName);
                if (fileCount > cacheCount)
                {
                    GameUtils.DeleteFolder(logFolderName);
                    GameUtils.CreateFolder(logFolderName);
                }
            }

            logStr = new StringBuilder();
            timeTag = "Log/"+DateTime.Now.ToString().Replace(@"/","_");
            timeTag = timeTag.Replace(@"\", "_");
            timeTag = timeTag.Replace(@" ", "_");
            timeTag = timeTag.Replace(@":", "_");
            timeTag = timeTag + "Log.txt";
            GameUtils.WriteFile(timeTag,Encoding.UTF8.GetBytes(logStr.ToString()));
            Application.logMessageReceived += LogMessageReceived;
        }

        public void LogMessageReceived(string condition, string stackTrace, LogType type)
        {
            lock (logStr)
            {
                logStr.Clear();       
                logStr.AppendLine("--------------------------------时间 : "+DateTime.Now.ToString("yyyy - MM - dd hh: mm:ss fff")+"   日志类型 : "+ type.ToString()+ "--------------------------------------");
                logStr.AppendLine();
                logStr.AppendLine(condition);
                logStr.AppendLine();
                logStr.AppendLine(stackTrace);
                logStr.AppendLine();
            }
            Task.Run(delegate ()
            {
                lock (logStr)
                {
                    GameUtils.WriteFile(timeTag, Encoding.UTF8.GetBytes(logStr.ToString()), FileMode.Append);
                }
            });
        }

        private void OnDestroy()
        {
            Application.logMessageReceived -= LogMessageReceived;
            logStr.Clear();
        }
    }
}
