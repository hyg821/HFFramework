using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using BestHTTP;
using System;
using System.IO;

namespace HFFramework
{
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

        private byte maxDownLoadCount = 4;
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

        public void DownLoadFileAndWriteToLocal(string taskName, string webUrl, string localPath, Action<string> success, Action<string> fail)
        {
            BestHttpDownLoadTask b = new BestHttpDownLoadTask(taskName, webUrl, localPath, success, fail);
            b.StartDownLoad();
        }

        public int maxTaskCount = 0;
        public int currentTaskIndex = 0;
        public Action<float> progress;

        public void DownLoadFilesAndWriteToLocal(string[] webUrl, string[] localPath, Action<float> progress)
        {
            currentTaskIndex = 0;
            maxTaskCount = webUrl.Length;
            this.progress = progress;
            DownLoadFile(webUrl, localPath);
        }

        public void DownLoadFile(string[] webUrl, string[] localPath)
        {
            DownLoadFileAndWriteToLocal("Task" + currentTaskIndex, webUrl[currentTaskIndex], localPath[currentTaskIndex], delegate (string taskName)
            {
                HFLog.L("单个下载完成");
                if (currentTaskIndex < maxTaskCount - 1)
                {
                    if (progress != null)
                    {
                        progress((currentTaskIndex + 1.0f) / maxTaskCount);
                    }
                    currentTaskIndex++;
                    DownLoadFile(webUrl, localPath);
                }
                else
                {
                    progress(1);
                    HFLog.L("所有下载队列下载完成");
                }
            }, delegate (string taskName)
            {
                HFLog.L("下载出现错误");
            });
        }

    }

    public class BestHttpDownLoadTask
    {
        public string taskName;
        public string webUrl;
        public string localPath;
        public Action<string> success;
        public Action<string> fail;

        public BestHttpDownLoadTask(string taskName, string webUrl, string localPath, Action<string> success, Action<string> fail)
        {
            HFLog.L(taskName + "被创建了");
            this.taskName = taskName;
            this.webUrl = webUrl;
            this.localPath = localPath;
            this.success = success;
            this.fail = fail;
        }

        public void StartDownLoad()
        {
            if (Application.platform == RuntimePlatform.WindowsEditor || Application.platform == RuntimePlatform.OSXEditor)
            {
                localPath = localPath.Replace("file://", "");
            }

            if (File.Exists(localPath))
            {
                HFLog.L(taskName + "-----------------------文件存在 删除！" + localPath);
                File.Delete(localPath);
            }

            HTTPRequest request = new HTTPRequest(new Uri(webUrl), delegate (HTTPRequest req, HTTPResponse resp)
            {
                if (req != null && resp != null)
                {
                    List<byte[]> fragments = resp.GetStreamedFragments();
                    using (FileStream fs = new FileStream(localPath, FileMode.Append))
                    {
                        if (fs != null && fragments != null)
                        {
                            foreach (byte[] data in fragments)
                            {
                                fs.Write(data, 0, data.Length);
                            }
                        }
                    }
                    if (resp.IsStreamingFinished)
                    {
                        if (success != null)
                        {
                            success(taskName);
                        }
                    }

                    switch (req.State)
                    {
                        case HTTPRequestStates.Initial:
                            break;
                        case HTTPRequestStates.Queued:
                            break;
                        case HTTPRequestStates.Processing:

                            HFLog.L(taskName + "开始返回数据");
                            break;
                        case HTTPRequestStates.Finished:
                            break;
                        case HTTPRequestStates.Error:
                            HFLog.L("下载出现错误 开始重新下载");
                            StartDownLoad();
                            if (fail != null)
                            {
                                fail(taskName);
                            }
                            break;
                        case HTTPRequestStates.Aborted:
                            HFLog.L("下载出现错误 开始重新下载");
                            break;
                        case HTTPRequestStates.ConnectionTimedOut:
                            HFLog.L("下载出现错误 开始重新下载");
                            break;
                        case HTTPRequestStates.TimedOut:
                            HFLog.L("下载出现错误 开始重新下载");
                            if (fail != null)
                            {
                                fail(taskName);
                            }
                            break;
                        default:
                            break;
                    }
                }
                else
                {
                    StartDownLoad();
                }
            });

            request.UseStreaming = true;
            request.StreamFragmentSize = 1 * 1024 * 1024;
            request.DisableCache = true;
            request.Send();
        }
    }
}
