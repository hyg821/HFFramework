using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Threading;
using System;

namespace HFFramework.Functions
{
    public class LearnCoroutine : MonoBehaviour
    {
        public bool isOpenWorkThread = true;

        public List<TestCoroutine> temp = new List<TestCoroutine>();

        void Start()
        {
            Test t = new Test();
            foreach (var item in t)
            {
                print(item);
            }

            print("--------------------------------------------------");

            t = new Test();
            IEnumerator ie = t.GetEnumerator();
            while (ie.MoveNext())
            {
                if (ie.Current!=null)
                {
                    print(ie.Current);
                }
            }

            print("--------------------------------------------------");

            Test2 t2 = new Test2();
            IEnumerator ie2 = t2.GetEnumerator();
            while (ie2.MoveNext())
            {
                if ((string)ie2.Current=="fxk")
                {
                    Thread.Sleep(200);
                }
                print(ie2.Current + "   "+Time.realtimeSinceStartup);
            }

            print("--------------------------------------------------");

            TestStartCoroutine(TestIEnumerator());
            ThreadPool.QueueUserWorkItem(delegate (object o)
            {
                while (isOpenWorkThread)
                {
                    lock (temp)
                    {
                        for (int i = 0; i < temp.Count; i++)
                        {
                            TestCoroutine tc = temp[i];
                            IEnumerator ixe = tc.GetEnumerator();
                            if (tc.isStart == false)
                            {
                                tc.isStart = true;
                                ixe.MoveNext();
                                break;
                            }
                            else
                            {
                                if (ixe.Current == null)
                                {
                                    ixe.MoveNext();
                                    break;
                                }
                                else if (ixe.Current is TestWaitMillisecond)
                                {
                                    TestWaitMillisecond tsc = ixe.Current as TestWaitMillisecond;
                                    if (tc.time>= tsc.sec)
                                    {
                                        tc.time = 0;
                                        ixe.MoveNext();
                                    }
                                    else
                                    {
                                        tc.time += 16;
                                    }
                                    break;
                                }
                            }
                        }
                    }
                    
                    Thread.Sleep(16);
                }
            });
        }

        public void TestStartCoroutine(IEnumerator routine)
        {
            TestCoroutine tt =  new TestCoroutine(routine);
            lock (temp)
            {
                temp.Add(tt);
            }
        }

        public IEnumerator TestIEnumerator()
        {
            yield return null;
            Debug.Log("aaaaaa  " + DateTime.Now.ToString("HH:mm:ss fff"));

            yield return null;
            Debug.Log("bbbbb  " + DateTime.Now.ToString("HH:mm:ss fff"));

            yield return null;
            Debug.Log("cccccc  " + DateTime.Now.ToString("HH:mm:ss fff"));

            yield return null;
            Debug.Log("ddddd  " + DateTime.Now.ToString("HH:mm:ss fff"));

            yield return null;
            Debug.Log("eeeeee  " + DateTime.Now.ToString("HH:mm:ss fff"));

            yield return new TestWaitMillisecond(300);
            Debug.Log("hhhhh  " + DateTime.Now.ToString("HH:mm:ss fff"));
        }

        private void OnDestroy()
        {
            isOpenWorkThread = false;
        }

    }

    public class Test : IEnumerable
    {
        int[] a = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

        public IEnumerator GetEnumerator()
        {
            return new TestEnumerator(a);
        }
    }

    public struct TestEnumerator : IEnumerator
    {
        int index;

        int[] a;

        public TestEnumerator(int[] a)
        {
            this.a = a;
            index = -1;
        }

        public object Current
        {
            get
            {
                return a[index];
            }
        }

        public bool MoveNext()
        {
            index++;
            return index < a.Length;
        }

        public void Reset()
        {
            index = -1;
        }
    }

    //IEnumerable 实际加不加都行 
    public class Test2 : IEnumerable
    {
        public IEnumerator GetEnumerator()
        {
            //实际此处会在编译的时候生成一个类  具体是下方注释的类
            yield return "hyg";
            Debug.Log("aaaaaaaaaaaaa");
            yield return "fxk";
            Debug.Log("bbbbbbbbbbb");
        }
    }

    /*
    public class HelloCollection : IEnumerable
    {
        public IEnumerator GetEnumerator()
        {
            Enumerator enumerator = new Enumerator(0);
            return enumerator;
        }

        public class Enumerator : IEnumerator, IDisposable
        {
            private int state;
            private object current;

            public Enumerator(int state)
            {
                this.state = state;
            }

            public bool MoveNext()
            {
                switch (state)
                {
                    case 0:
                        current = "Hello";
                        state = 1;
                        return true;
                    case 1:
                        current = "World";
                        state = 2;
                        return true;
                    case 2:
                        break;
                }
                return false;
            }

            public void Reset()
            {
                throw new NotSupportedException();
            }

            public object Current
            {
                get { return current; }
            }

            public void Dispose()
            {
            }
        }
    }
     */



    public class TestCoroutine
    {
        public bool isStart = false;
        public int time;
        public IEnumerator ie;
        public TestCoroutine(IEnumerator ie)
        {
            this.ie = ie;
        }
        public IEnumerator GetEnumerator()
        {
            return ie;
        }
    }

    public class TestWaitMillisecond
    {
        public int sec;
        public TestWaitMillisecond(int sec)
        {
            this.sec = sec;
        }
    }

}

