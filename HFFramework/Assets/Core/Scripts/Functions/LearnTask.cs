using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading;
using System.Threading.Tasks;
using UnityEngine;

public class LearnTask : MonoBehaviour
{
	void Start ()
    {
        //Task ~~ Coroutine
        //Await ~~ yield return
        //Async ~~ IEnumerator

        Task.Run(delegate()
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


        Test3();

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

    public async  void Test3()
    {
        string str = await Test4();
        print(str);
        print("Test3当前线程id " + Thread.CurrentThread.ManagedThreadId);
    }

    public async Task<string>Test4()
    {
        print("Test4开始");
        await Task.Delay(TimeSpan.FromSeconds(3));
        print("Test4当前线程id " + Thread.CurrentThread.ManagedThreadId);
        return "sss";
    }

}
