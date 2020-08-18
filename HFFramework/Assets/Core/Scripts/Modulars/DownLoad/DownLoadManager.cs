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

        /// <summary>
        ///  文件目录
        /// </summary>
        public string dirPath;

        private UrlDiskPath()
        {

        }

        public UrlDiskPath(string url, string diskPath)
        {
            this.url = url;
            this.diskPath = diskPath;
            this.dirPath = diskPath.Substring(0, diskPath.LastIndexOf("/"));
            //HFLog.C("dirPath  " + dirPath);
        }
    }

    /// <summary>
    /// 文件下载器
    /// </summary>
    public class DownLoadManager : MonoBehaviour, IManager
    {
        public static DownLoadManager Instance;

        public int maxDownLoaderCount = 0;

        private List<DownLoader> downLoaders = new List<DownLoader>();

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

        public DownLoader GetDownLoader()
        {
            DownLoader result = null;
            for (int i = 0; i < downLoaders.Count; i++)
            {
                DownLoader temp = downLoaders[i];
                if (temp.IsFree)
                {
                    result = temp;
                    break;
                }
            }

            if (result == null && downLoaders.Count < maxDownLoaderCount)
            {
                result = new DownLoader();
                downLoaders.Add(result);
            }

            return result;
        }

        public void Shutdown()
        {
            foreach (var item in downLoaders)
            {
                item.Dispose();
            }
            downLoaders.Clear();
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
        /// 是否空闲
        /// </summary>
        public bool IsFree
        {
            get
            {
                return finishCount == taskCount;
            }
        }

        /// <summary>
        /// 下载队列
        /// </summary>
        private Queue<DownLoadTask> queue = new Queue<DownLoadTask>();

        /// <summary>
        /// 当前任务
        /// </summary>
        public DownLoadTask currentTask;

        /// <summary>
        /// 完成
        /// </summary>
        private Action complete;

        /// <summary>
        ///  进度
        /// </summary>
        private Action<float> progress;

        /// <summary>
        ///  失败回调
        /// </summary>
        private Action<string> error;

        public void DownLoadFiles(UrlDiskPath[] paths, Action complete, Action<float> progress, Action<string> error)
        {
            this.complete = complete;
            this.progress = progress;
            this.error = error;
            this.taskCount = paths.Length;
            for (int i = 0; i < paths.Length; i++)
            {
                DownLoadTask task = new DownLoadTask(i, "Task" + i, paths[i], TaskProgress, TaskComplete, TaskError);
                queue.Enqueue(task);
            }
            Start();
        }

        private void Start()
        {
            if (queue.Count > 0)
            {
                currentTask = queue.Dequeue();
                currentTask.Start();
            }
        }

        private void TaskProgress(float f)
        {
            //HFLog.C("下载进度 " + f * 100 + "%");
            f += finishCount;
            f /= taskCount;
            progress(f);
        }

        private void TaskComplete()
        {
            finishCount++;
            if (finishCount >= taskCount)
            {
                HFLog.C("所有下载任务完成");
                complete();
            }
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
            while (queue.Count > 0)
            {
                DownLoadTask task = queue.Dequeue();
                task.Dispose();
            }
            queue = null;
        }
    }

    public class DownLoadTask
    {
        private ReaderWriterLockSlim loc = new ReaderWriterLockSlim();

        private HTTPRequest request;

        private FileStream fileStream;

        public int index;

        public string name;

        public UrlDiskPath path;

        private Action complete;

        private Action<float> progress;

        private Action<string> error;

        public DownLoadTask(int index, string name, UrlDiskPath path, Action<float> progress, Action complete, Action<string> error)
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
            if (GameEnvironment.Instance.Platform == GamePlatform.Editor || GameEnvironment.Instance.Platform == GamePlatform.Windows || GameEnvironment.Instance.Platform == GamePlatform.Mac)
            {
                path.diskPath = path.diskPath.Replace("file://", "");
            }

            if (File.Exists(path.diskPath))
            {
                File.Delete(path.diskPath);
            }

            if (!Directory.Exists(path.dirPath))
            {
                Directory.CreateDirectory(path.dirPath);
            }

            fileStream = new FileStream(path.diskPath, FileMode.Append);

            HFLog.L(name + " 开始下载  ");
            HFLog.L(name + " path.url  " + path.url);
            HFLog.L(name + " path.diskPath  " + path.diskPath);

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
                if (fragments != null)
                {
                    for (int i = 0; i < fragments.Count; i++)
                    {
                        byte[] data = fragments[i];
                        fileStream.Write(data, 0, data.Length);
                        fileStream.Flush();
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
                    Clear(false);
                    complete();
                    break;
                case HTTPRequestStates.Error:
                    Clear(true);
                    error(req.State.ToString());
                    break;
                case HTTPRequestStates.Aborted:
                    break;
                case HTTPRequestStates.ConnectionTimedOut:
                    Clear(true);
                    error(req.State.ToString());
                    break;
                case HTTPRequestStates.TimedOut:
                    Clear(true);
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
            //HFLog.C(name +"   "+ progressPercent);
            progress(progressPercent);
        }

        public void Clear(bool abort)
        {
            if (request != null)
            {
                request.OnUploadProgress = null;
                if (abort)
                {
                    request.Abort();
                }
                request.Clear();
                request.Dispose();
            }

            if (fileStream != null)
            {
                fileStream.Close();
                fileStream.Dispose();
            }
        }

        public void Dispose()
        {
            Clear(true);
            loc = null;
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
