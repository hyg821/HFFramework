using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using BestHTTP;
using System;
using System.IO;
using System.Threading;
using System.Net;
using System.ComponentModel;

namespace HFFramework
{
    public class WebUrlLocalPath
    {
        /// <summary>
        ///  服务器地址
        /// </summary>
        public string webUrl;

        /// <summary>
        ///  本地路径
        /// </summary>
        public string localPath;
    }

    public class BestHttpHelper
    {
        private static BestHttpHelper instance = null;
        public static BestHttpHelper Instance
        {
            get
            {
                if (instance == null)
                {
                    instance = new BestHttpHelper();
                    HTTPManager.MaxConnectionPerServer = instance.MaxDownLoadCount;
                }
                return instance;
            }
        }

        private byte maxDownLoadCount = 2;
        public byte MaxDownLoadCount
        {
            set
            {
                maxDownLoadCount = value;
            }
            get
            {
                return maxDownLoadCount;
            }
        }

        public int currentDownLoadCount = 0;

        public static BestHttpDownLoadTask GetDownLoadTask()
        {
            if (Instance.currentDownLoadCount <= Instance.MaxDownLoadCount)
            {
                return new BestHttpDownLoadTask();
            }
            else
            {
                return null;
            }
        }
    }

    public class BestHttpDownLoadTask
    {
        private static ReaderWriterLockSlim writeLock = new ReaderWriterLockSlim();
        /// <summary>
        ///  全部任务路径
        /// </summary>
        public WebUrlLocalPath[] allTaskPath;

        /// <summary>
        ///  当前任务路径
        /// </summary>
        public WebUrlLocalPath currentPath;

        /// <summary>
        ///  当前任务名称
        /// </summary>
        public string currentTaskName;

        /// <summary>
        ///  当前需要下载的数量
        /// </summary>
        public int taskCount = 0;

        /// <summary>
        ///  当前任务索引
        /// </summary>
        public int currentTaskIndex = 0;

        /// <summary>
        ///  进度
        /// </summary>
        public Action<float> progress;

        /// <summary>
        ///  成功回调
        /// </summary>
        public Action<string> simpleTaskFinish;

        /// <summary>
        ///  失败回调
        /// </summary>
        public Action<string> fail;

        public HTTPRequest request;

        public void DownLoadFilesAndWriteToLocal(WebUrlLocalPath[] allTaskPath, Action<float> progress, Action<string> fail)
        {
            BestHttpHelper.Instance.currentDownLoadCount++;
            currentTaskIndex = 0;
            this.allTaskPath = allTaskPath;
            this.progress = progress;
            this.fail = fail;
            taskCount = allTaskPath.Length;
            DownLoadFile(allTaskPath[0]);
        }

        private void DownLoadFile(WebUrlLocalPath path)
        {
            StartDownLoadTask("Task" + currentTaskIndex, path, delegate (string taskName)
            {
                HFLog.L("单个下载完成");
                if (currentTaskIndex < taskCount - 1)
                {
                    if (progress != null)
                    {
                        progress((currentTaskIndex + 1.0f) / taskCount);
                    }
                    currentTaskIndex++;
                    DownLoadFile(allTaskPath[currentTaskIndex]);
                }
                else
                {
                    progress(1);
                    BestHttpHelper.Instance.currentDownLoadCount--;
                    HFLog.L("所有下载队列下载完成");
                }
            });
        }

        private void StartDownLoadTask(string taskName, WebUrlLocalPath paths, Action<string> simpleTaskFinish)
        {
            HFLog.L(taskName + "被创建了");
            this.currentTaskName = taskName;
            this.currentPath = paths;
            this.simpleTaskFinish = simpleTaskFinish;
            Start();
        }

        public void Start()
        {
            if (Application.platform == RuntimePlatform.WindowsEditor || Application.platform == RuntimePlatform.OSXEditor)
            {
                currentPath.localPath = currentPath.localPath.Replace("file://", "");
            }

            if (File.Exists(currentPath.localPath))
            {
                HFLog.L(currentTaskName + "文件存在 删除！" + currentPath.localPath);
                File.Delete(currentPath.localPath);
            }


            request = new HTTPRequest(new Uri(currentPath.webUrl), OnRequest);
            request.OnProgress = OnUploadProgress;
            request.Timeout = new TimeSpan(0, 0, 20);
            request.ConnectTimeout = new TimeSpan(0, 0, 20);
            request.UseStreaming = true;
            request.StreamFragmentSize = 1 * 256 * 256;
            request.DisableCache = true;
            request.Send();


            /*
            using (WebClient client = new WebClient())
            {
                client.DownloadProgressChanged += WebClientDownloadProgressChanged;
                client.DownloadFileCompleted += WebClientDownloadCompleted;
                client.DownloadFileAsync(new Uri(currentPath.webUrl), currentPath.localPath);
            }
            */
        }

        /*
        void WebClientDownloadProgressChanged(object sender, DownloadProgressChangedEventArgs e)
        {
            GameLooper.BackToMainThread(delegate ()
            {
                float progressPercent = e.ProgressPercentage / 100.0f;
                float allProgress = (currentTaskIndex + 0.0f) / taskCount + progressPercent / taskCount;
                if (allProgress != 1)
                {
                    progress(allProgress);
                }
            });
        }

        void WebClientDownloadCompleted(object sender, AsyncCompletedEventArgs e)
        {
            GameLooper.BackToMainThread(delegate ()
            {
                simpleTaskFinish(currentTaskName);
            });
        }
        */

        public void OnRequest(HTTPRequest req, HTTPResponse resp)
        {
            if (req != null && resp != null)
            {
                List<byte[]> fragments = resp.GetStreamedFragments();
                writeLock.EnterWriteLock();
                using (FileStream fs = new FileStream(currentPath.localPath, FileMode.Append))
                {
                    if (fs != null && fragments != null)
                    {
                        foreach (byte[] data in fragments)
                        {
                            fs.Write(data, 0, data.Length);
                        }
                    }
                }
                writeLock.ExitWriteLock();
                if (resp.IsStreamingFinished)
                {
                    if (simpleTaskFinish != null)
                    {
                        simpleTaskFinish(currentTaskName);
                    }
                }
            }

            switch (req.State)
            {
                case HTTPRequestStates.Initial:
                    break;
                case HTTPRequestStates.Queued:
                    break;
                case HTTPRequestStates.Processing:
                    break;
                case HTTPRequestStates.Finished:
                    break;
                case HTTPRequestStates.Error:
                    BestHttpHelper.Instance.currentDownLoadCount--;
                    fail(req.State.ToString());
                    break;
                case HTTPRequestStates.Aborted:
                    BestHttpHelper.Instance.currentDownLoadCount--;
                    fail(req.State.ToString());
                    break;
                case HTTPRequestStates.ConnectionTimedOut:
                    BestHttpHelper.Instance.currentDownLoadCount--;
                    fail(req.State.ToString());
                    break;
                case HTTPRequestStates.TimedOut:
                    BestHttpHelper.Instance.currentDownLoadCount--;
                    fail(req.State.ToString());
                    break;
                default:
                    break;
            }

            /*
            if (req.State != HTTPRequestStates.Processing)
            {
                HFLog.L("下载状态  " + req.State);
            }
            */
        }

        void OnUploadProgress(HTTPRequest originalRequest, long uploaded, long uploadLeng)
        {
            float progressPercent = (uploaded / (float)uploadLeng);
            float allProgress = (currentTaskIndex + 0.0f) / taskCount + progressPercent / taskCount;
            if (allProgress != 1)
            {
                progress(allProgress);
            }
        }

        /// <summary>
        ///  如果报错 上层代码调用clear 再创建新的
        /// </summary>
        public void Clear()
        {
            if (request != null)
            {
                request.Abort();
                request.Clear();
                request = null;
            }
        }
    }
}
