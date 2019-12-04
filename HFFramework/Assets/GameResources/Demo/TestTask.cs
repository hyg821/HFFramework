using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Threading;
using System.Threading.Tasks;
using System.Linq;
using HFFramework;

public class TestTask
{
    public Thread thread;

    private Dictionary<int, TaskCompletionSource<object>> taskCache = new Dictionary<int, TaskCompletionSource<object>>();

    public void Start()
    {
        thread = new Thread(RunLoop);
        thread.Start();
    }

    public async Task<object> Call(int id, object o)
    {
        TaskCompletionSource<object> taskCompletion;
        lock (taskCache)
        {
            if (!taskCache.TryGetValue(id, out taskCompletion))
            {
                taskCompletion = new TaskCompletionSource<object>();
                taskCache.Add(id, taskCompletion);
            }
        }
        return await taskCompletion.Task;
    }

    public void RunLoop()
    {
        while (true)
        {
            Thread.Sleep(4000);
            lock (taskCache)
            {
                if (taskCache.Keys.Count>0)
                {
                    int key = taskCache.Keys.ToList()[0];
                    TaskCompletionSource<object> com = taskCache[key];
                    taskCache.Remove(key);
                    Debug.Log("调用中" + Thread.CurrentThread.ManagedThreadId);
                    com.SetResult(key.ToString());
                }
            }
        }
    }

    public void Close()
    {
        thread.Abort();
    }
}
