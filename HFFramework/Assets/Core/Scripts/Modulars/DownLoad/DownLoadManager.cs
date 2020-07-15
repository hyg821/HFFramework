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
    public class UrlDiskPath
    {
        /// <summary>
        ///  服务器地址
        /// </summary>
        public string url;

        /// <summary>
        ///  本地路径
        /// </summary>
        public string diskPath;
    }

    public class DownLoadManager : MonoBehaviour,IManager
    {
        public static DownLoadManager Instance;

        public int maxDownLoaderCount = 0;

        private List<DownLoader> cache = new List<DownLoader>();

        public void Awake()
        {
            Instance = this;
            SetMaxDownLoaderCount(2);
        }

        public void SetMaxDownLoaderCount(byte count)
        {
            maxDownLoaderCount = count;
            HTTPManager.MaxConnectionPerServer = count;
        }

        public  DownLoader GetDownLoader()
        {
            DownLoader temp = null;
            if (Instance.cache.Count < maxDownLoaderCount)
            {
                temp = new DownLoader();
            }
            return temp;
        }

        public void DestroyManager()
        {
            foreach (var item in cache)
            {
                item.Dispose();
            }
            Instance = null;
        }
    }

    public class DownLoader
    {
        /// <summary>
        /// 任务总数
        /// </summary>
        public int taskCount = 0;

        /// <summary>
        /// 完成个数
        /// </summary>
        public int finishCount = 0;

        /// <summary>
        /// 下载队列
        /// </summary>
        public Queue<DownLoadTask> queue = new Queue<DownLoadTask>();

        /// <summary>
        /// 当前任务
        /// </summary>
        public DownLoadTask currentTask;

        /// <summary>
        ///  进度
        /// </summary>
        public Action<float> progress;

        /// <summary>
        ///  失败回调
        /// </summary>
        public Action<string> error;

        public void DownLoadFiles(UrlDiskPath[] paths, Action<float> progress, Action<string> error)
        {
            this.progress = progress;
            this.error = error;
            this.taskCount = paths.Length;
            for (int i = 0; i < paths.Length; i++)
            {
                DownLoadTask task = new DownLoadTask(i,"Task"+i, paths[i], TaskProgress, TaskComplete, TaskError);
                queue.Enqueue(task);
            }
            Start();
        }

        private void Start()
        {
            if (queue.Count>0)
            {
                currentTask = queue.Dequeue();
                currentTask.Start();
            }
        }

        private void TaskProgress(float f)
        {
            //HFLog.C("下载进度 " + f * 100 + "%");
            if (f < 1)
            {
                f += finishCount ;
            }
            f /= taskCount;
            progress(f);
        }

        private void TaskComplete()
        {
            finishCount++;
            Start();
        }

        private void TaskError(string error)
        {
            HFLog.C(error);
            currentTask.Start();
        }

        /// <summary>
        ///  如果报错 上层代码调用clear 再创建新的
        /// </summary>
        public void Dispose()
        {
            while (queue.Count>0)
            {
                DownLoadTask task = queue.Dequeue();
                task.Dispose();
            }
        }
    }

    public class DownLoadTask
    {
        public ReaderWriterLockSlim loc = new ReaderWriterLockSlim();

        public HTTPRequest request;

        public int index;

        public string name;

        public UrlDiskPath path;

        public Action complete;

        public Action<float> progress;

        public Action<string> error;

        public DownLoadTask(int index, string name, UrlDiskPath path,Action<float>progress ,Action complete, Action<string> error)
        {
            this.index = index;
            this.name = name;
            this.path = path;
            this.complete = complete;
            this.progress = progress;
            this.error = error;
        }

        public void Start()
        {
            if (GameEnvironment.Instance.Platform ==GamePlatform.Editor|| GameEnvironment.Instance.Platform == GamePlatform.Windows|| GameEnvironment.Instance.Platform == GamePlatform.Mac)
            {
                path.diskPath = path.diskPath.Replace("file://", "");
            }

            if (File.Exists(path.diskPath))
            {
                HFLog.L(name + "文件存在删除  " + path.diskPath);
                File.Delete(path.diskPath);
            }

            HFLog.L(name + "开始下载  " + path.diskPath);

            request = new HTTPRequest(new Uri(path.url), OnRequest);
            request.OnProgress = OnUploadProgress;
            request.Timeout = new TimeSpan(0, 0, 20);
            request.ConnectTimeout = new TimeSpan(0, 0, 20);
            request.UseStreaming = true;
            request.StreamFragmentSize = 1 * 256 * 256;
            request.DisableCache = true;
            request.Send();
        }

        public void OnRequest(HTTPRequest req, HTTPResponse resp)
        {
            if (req != null && resp != null)
            {
                List<byte[]> fragments = resp.GetStreamedFragments();
                loc.EnterWriteLock();
                using (FileStream fs = new FileStream(path.diskPath, FileMode.Append))
                {
                    if (fs != null && fragments != null)
                    {
                        foreach (byte[] data in fragments)
                        {
                            fs.Write(data, 0, data.Length);
                        }
                    }
                }
                loc.ExitWriteLock();
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
                    complete();
                    break;
                case HTTPRequestStates.Error:
                    error(req.State.ToString());
                    break;
                case HTTPRequestStates.Aborted:
                    break;
                case HTTPRequestStates.ConnectionTimedOut:
                    error(req.State.ToString());
                    break;
                case HTTPRequestStates.TimedOut:
                    error(req.State.ToString());
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

        private void OnUploadProgress(HTTPRequest originalRequest, long uploaded, long uploadLeng)
        {
            float progressPercent = (uploaded / (float)uploadLeng);
            progress(progressPercent);
        }

        public void Dispose()
        {
            if (request!=null)
            {
                request.Abort();
                request.Dispose();
                request = null;
            }
        }


        /*
using (WebClient client = new WebClient())
{
client.DownloadProgressChanged += WebClientDownloadProgressChanged;
client.DownloadFileCompleted += WebClientDownloadCompleted;
client.DownloadFileAsync(new Uri(currentPath.webUrl), currentPath.localPath);
}
*/

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
    }
}
