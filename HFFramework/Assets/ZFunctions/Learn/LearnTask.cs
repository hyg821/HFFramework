using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Threading;
using System.Threading.Tasks;
using UnityEngine;

namespace HFFramework.Functions
{
    public class LearnTask : MonoBehaviour
    {
        //https://www.cnblogs.com/qiandi/p/4704255.html

        void Start()
        {
            //Task ~~ Coroutine
            //Await ~~ yield return
            //Async ~~ IEnumerator

            Task.Run(delegate ()
            {
                Thread.Sleep(1000);
                print("当前线程id " + Thread.CurrentThread.ManagedThreadId);
            });

            print("当前线程id " + Thread.CurrentThread.ManagedThreadId);

            Task task1 = new Task(new Action(Test1));
            //用法二
            Task task2 = new Task(delegate
            {
                Test1();
            });
            //用法三
            Task task3 = new Task(() => Test1());
            Task task4 = new Task(() =>
            {
                Test1();
            });

            task1.Start();
            task2.Start();
            task3.Start();
            task4.Start();


            Task.Run(async delegate ()
            {
                int count = await Test5();
                print("TaskCompletionSource 结果是 :" + count);
            });


            Task task = Task.Run(delegate ()
            {
                Debug.Log("我正在执行任务的线程id" + Thread.CurrentThread.ManagedThreadId);
                Thread.Sleep(5);
            });
            TaskAwaiter awaiter = task.GetAwaiter();
            awaiter.OnCompleted(delegate ()
            {
                Debug.Log("我完成了的回调任务的线程id" + Thread.CurrentThread.ManagedThreadId);
            });
            //print("最后结尾");
        }


        public async void Test2()
        {
            await Task.Delay(TimeSpan.FromSeconds(1));
            print("Test2当前线程id " + Thread.CurrentThread.ManagedThreadId);
        }

        public void Test1()
        {
            print("Test1当前线程id " + Thread.CurrentThread.ManagedThreadId);
        }

        public async void Test3()
        {
            string str = await Test4();
            print(str);
            print("Test3当前线程id " + Thread.CurrentThread.ManagedThreadId);
        }

        public async Task<string> Test4()
        {
            print("Test4开始");
            await Task.Delay(TimeSpan.FromSeconds(3));
            print("Test4当前线程id " + Thread.CurrentThread.ManagedThreadId);
            return "sss";
        }


        public async Task<int> Test5()
        {
            await Task.Delay(1000);
            TaskCompletionSource<int> ts = new TaskCompletionSource<int>();
            ts.SetResult(100);
            await ts.Task;
            return ts.Task.Result;
        }
    }

}

