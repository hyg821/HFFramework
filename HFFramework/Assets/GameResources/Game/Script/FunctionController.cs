﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using HFFramework;
using UnityEngine.UI;
using Config;
using BestHTTP;
using System.Net.Sockets;
using System.IO;
using System;
using Lobbyservice.Protobuf;
using Google.Protobuf;
using Centersdk.Protobuf;
using Loginservice.Protobuf;
using UnityEngine.SceneManagement;
using DG.Tweening;
using System.Threading.Tasks;
using System.Threading;
using TMPro;
using Cysharp.Threading.Tasks;
using System.Runtime.CompilerServices;
using UnityEngine.Profiling;
using LitJson;
using System.Runtime.Serialization.Formatters.Binary;

namespace HFFramework.Demo
{
    public class FunctionController : UIController
    {
        public Text TitleLabel;
        public Button fun0;
        public Button fun1;
        public Button fun2;
        public Button fun3;
        public Button fun4;
        public Button fun5;
        public Button fun6;
        public UILabel Label;
        public Button fun7;
        public Button fun8;
        #region
        public override void FindElement()
        {
            TitleLabel = AutoFind<Text>("TopBar/Text");
            fun0 = AutoFind<Button>("ScrollView/Viewport/Content/Cell/Button");
            fun1 = AutoFind<Button>("ScrollView/Viewport/Content/Cell (1)/Button");
            fun2 = AutoFind<Button>("ScrollView/Viewport/Content/Cell (2)/Button");
            fun3 = AutoFind<Button>("ScrollView/Viewport/Content/Cell (3)/Button");
            fun4 = AutoFind<Button>("ScrollView/Viewport/Content/Cell (4)/Button");
            fun5 = AutoFind<Button>("ScrollView/Viewport/Content/Cell (5)/Button");
            fun6 = AutoFind<Button>("ScrollView/Viewport/Content/Cell (6)/Button");
            Label = AutoFind<UILabel>("ScrollView/Viewport/Content/Cell (6)/Button/Text");
            fun7 = AutoFind<Button>("ScrollView/Viewport/Content/Cell (7)/Button");
            fun8 = AutoFind<Button>("ScrollView/Viewport/Content/Cell (8)/Button");
        }
        #endregion









        public override void Awake()
        {
            base.Awake();
            TitleLabel.text = "框架入门";
            HFLog.C("页面初始化完成");
            IsNeedUpdate = true;
        }

        public override void ElementInit()
        {
            base.ElementInit();
            fun0.onClick.AddListener(Entity创建);
            fun1.onClick.AddListener(Entity作为控制器);
            fun2.onClick.AddListener(Entity数据显示分离);
            fun3.onClick.AddListener(数据观察另一种实现);
            fun4.onClick.AddListener(命令队列);
            fun5.onClick.AddListener(UniTask取消);
            fun6.onClick.AddListener(数据绑定控件);
            fun7.onClick.AddListener(CancellationToken取消UniTask);
            fun8.onClick.AddListener(局部刷新Task);
        }

        public async void Entity创建()
        {
            Close();
            for (int i = 0; i < 10; i++)
            {
                TestEntity entity = await GameFactory.CreateEntityAsync<TestEntity>("prefab", "Cube");
            }
        }

        public async void Entity作为控制器()
        {
            Close();
            for (int i = 0; i < 10; i++)
            {
                TestEntity entity =await GameFactory.CreateEntityAsync<TestEntity>("prefab","Cube");
                await UniTask.Delay(100);
            }
        }

        public List<Test1Entity> temp = new List<Test1Entity>();
        
        public async void Entity数据显示分离()
        {
            Close();
            for (int i = 0; i < 10; i++)
            {
                Test1Entity entity = await GameFactory.CreateEntityAsync<Test1Entity>("prefab", "Cube");
                temp.Add(entity);
                await UniTask.Delay(100);
            }

            TimerManager.Schedule(0, 10, 1, delegate (Timer t)
            {
                Extensions.Clear(temp);
            });
        }

        public void 数据观察另一种实现()
        {
            Test2Entity entity = GameFactory.CreateEntity<Test2Entity>();
        }

        public void 命令队列()
        {
            CommandQueue queue =  new CommandQueue();
            Command cmd = new Command(async delegate ()
            {
                Debug.LogError("111");
                await UniTask.Delay(1000);
                Debug.LogError("2222");
                await UniTask.Delay(1000);
            });
            queue.Enqueue(cmd);
            cmd = new Command(async delegate ()
            {
                Debug.LogError("333");
                await UniTask.Delay(1000);
                Debug.LogError("4444");
            });
            queue.Enqueue(cmd);
            queue.Run(CmdExecuteType.AsynchronousSerial);
        }

        public async void UniTask取消()
        {
            await Test();
            Debug.Log("TaskCompletionSource 退出");
        }

        public async void 数据绑定控件()
        {
            DataProperty<int> hp = new DataProperty<int>();

            Bind(Label,hp,delegate(int value,Text label)
            {
                label.text = value.ToString();
            });

            
            TimerManager.Schedule(0, 3, 1, delegate (Timer t)
            {
                binder.Clear();
                GameFactory.Destroy(Label.gameObject);
            });
            

            TimerManager.Schedule(1, 0, 10, delegate (Timer t)
            {
                hp.SetValue(hp.value+1);
            });
        }

        public async void CancellationToken取消UniTask()
        {
            CancellationTokenSource cancellation = new CancellationTokenSource();

            TimerManager.Schedule(0, 1, 1, delegate (Timer t)
            {
                cancellation.Cancel();
            });

            await UniTask.Delay(5000,false,PlayerLoopTiming.Update, cancellation.Token);
            Debug.LogError("时间到");
        }

        public async void 局部刷新Task()
        {
            HFLog.C("开始局部刷新task");
            LambdaUpdateTask task = GameFactory.CreateEntity<LambdaUpdateTask>();
            int a = 0;
            await task.Wait(delegate (LambdaUpdateTask t,  object o)
            {
                a += (int)o;
                HFLog.C("局部刷新task " + a);
                if (a>=100)
                {
                    t.CompleteTask();
                }
            }, new UniTaskCompletionSource(), 1);
            HFLog.C("完成局部刷新task");
        }

        private async UniTask Test()
        {
            UniTaskCompletionSource sc = new UniTaskCompletionSource();
            TimerManager.Schedule(0, 1, 1, delegate (Timer timer)
            {
                sc.TrySetCanceled();
            });

            TimerManager.Schedule(0, 3, 1, delegate (Timer timer)
            {
                sc.TrySetResult();
            });

            await sc.Task;
        }

        public override void OnShowAnimation()
        {
            base.OnShowAnimation();
            transform.localScale = Vector3.zero;
            transform.DOScale(Vector3.one, 1).OnComplete(OnShow);
            HFLog.C("播放打开动画");
        }

        public async override void OnShow()
        {
            base.OnShow();
            HFLog.C("页面完全显示");
            HFFramework.HotFixManager.Instance.ExecuteHotFix("hotfixdll", "HotFix");

            /*
            FileStream fs = new FileStream(Application.dataPath+ "/1.bin", FileMode.Create);
            BinaryFormatter ff =  new BinaryFormatter();
            ff.Serialize(fs, ConfigAddress.Instance);
            fs.Close();

            fs = new FileStream(Application.dataPath + "/1.bin", FileMode.Open);
            ff = new BinaryFormatter();
            ConfigAddress ss = ff.Deserialize(fs) as ConfigAddress ;
            Debug.Log(ss);

            await UIManager.Instance.Close<FunctionController>();
            AssetManager.Instance.RefCount();
            AssetManager.Instance.UnloadUnusedAssetBundle();
            */

            return;
            TimerManager.Schedule(1, 5, -1, delegate (Timer timer)
            {
                HFFramework.HotFixManager.Instance.executor.Invoke("HotFixEnter", "Test", null, "1", "2", "3");
            });

            DownLoader loader = DownLoadManager.Instance.GetDownLoader();
            string url = "http://182.48.99.226:18080/SharedFiles/Res/Assetbundles/Android_Assetbundles/ABVersion.Json";
            string diskPath = PathManager.Instance.PersistentDataCustomPath+ "/ABVersion.Json";
            UrlDiskPath path = new UrlDiskPath(url, diskPath);
            loader.DownLoadFiles(new UrlDiskPath[] { path }, DownComp, ProgressCallback, Fail);       
        }

        public void DownComp()
        {
            string str = GameUtils.ReadFile("ABVersion.Json");
            JsonData data = JsonMapper.ToObject(str);
            JsonData entries = data["Entries"];

            DownLoader loader = DownLoadManager.Instance.GetDownLoader();
            List < UrlDiskPath > temp = new List<UrlDiskPath>();
            foreach (var item in entries.Keys)
            {
                JsonData it = entries[item];
                string url = "http://182.48.99.226:18080/SharedFiles/Res/Assetbundles/Android_Assetbundles/";
                string disk = (string)it["N"];
                url += disk;
                UrlDiskPath path = new UrlDiskPath(url, PathManager.Instance.PersistentDataCustomPath + "/" + disk);
                temp.Add(path);
            }

            loader.DownLoadFiles(temp.ToArray(), DownComp1, ProgressCallback1, Fail);
        }

        public void DownComp1()
        {

        }

        public void ProgressCallback(float f)
        {
            HFLog.C("总进度" + f);
        }

        public void ProgressCallback1(float f)
        {
            HFLog.C("总进度  " + f);
        }

        public void Fail(string s)
        {

        }
    
        public override void OnUpdate(float deltaTime)
        {
            base.OnUpdate(deltaTime);
        }

        /*
        public Image bg;
        public Button loginBtn;
        public Image webImage;
        public Button jumpBtn;
        public Button TaskBtn;
        public InputField input;
        #region
        public override void FindElement()
        {
            bg = AutoFind<Image>("");
            loginBtn = AutoFind<Button>("Button");
            webImage = AutoFind<Image>("Image");
            jumpBtn = AutoFind<Button>("Button2");
            TaskBtn = AutoFind<Button>("Button3");
            input = AutoFind<InputField>("InputField");
        }
        #endregion




        public int errorCount = 0;

        public TestTask task;
        // Use this for initialization

        public override void PlayShowAnimation()
        {
            base.PlayShowAnimation();
            transform.DOScale(Vector3.one, 1).OnComplete(OnShowComplete);
        }


        public override void Awake()
        {
            base.Awake();
            transform.localScale = Vector3.zero;

            task = new TestTask();
            task.Start();

            ReceiveNotificationMessage(this, GameConst.UI, 123, delegate (NotificationMessage msg)
            {
                //print("发送的消息是 " + msg.obj);
            });

            ReceiveNotificationMessage(this, GameConst.STATE, GameStateChecker.APPPAUSE, delegate (NotificationMessage msg)
            {
                HFLog.L("是否暂停 " + msg.content);
            });

            loginBtn.onClick.AddListener(delegate ()
            {


                HFLog.C("点击登录的名称是" + input.text);

                TimerManager.Schedule(1, 10, 5, delegate ()
                {
                    HFLog.E("定实地");
                });

                bg.sprite = HFAssetManager.Instance.GetSpriteByAtlas("texture", "TestAtlas", "A");

                HFFramework.AppDomainManager.Instance.JumpToHotFix("hotfixdll", "HotFix", "HotFixEnter");

                errorCount = 0;
                HFSocket socket = HFSocketManager.Instance.GetSocket("hyg");
                socket.Init("192.168.1.110", 8080, delegate ()
                {
                    errorCount = 0;
                    HFLog.C("连接成功");
                    Lobbyservice.Protobuf.LoginRequest request = new Lobbyservice.Protobuf.LoginRequest();
                    request.OpenId = "aaa";
                    request.ProductId = "1";
                    request.Pf = "AND";
                    request.Channel = "";
                    request.ChannelUid = "";
                    request.Version = "1.1.2";
                    socket.SendMessage(1, request);
                }, delegate (int msgID, byte[] bb)
                {
                    HFLog.C("开始接受" + msgID + "  消息长度" + bb.Length);
                    if (msgID == 1)
                    {
                        Lobbyservice.Protobuf.LoginResponse res = CreateMessage<Lobbyservice.Protobuf.LoginResponse>(bb);
                        HFLog.C(res.ToString());
                    }
                    if (msgID == 6)
                    {
                        QuickLoginInfo res = CreateMessage<QuickLoginInfo>(bb);
                        HFLog.C(res.ToString());
                        IntegerAndString value = new IntegerAndString();
                        value.IntVal = 1;
                        value.StringVal = "650768";
                        socket.SendMessage(504, value);
                    }
                    if (msgID == 504)
                    {
                        Paohuzi.Protobuf.MessageVideo msgObj = CreateMessage<Paohuzi.Protobuf.MessageVideo>(bb);
                        HFLog.C(msgObj.ToString());
                    }
                }, delegate ()
                {
                    HFLog.C("连接关闭");
                }, delegate ()
                {
                    HFLog.C("连接失败 重新连接");
                    if (errorCount < 5)
                    {
                        errorCount++;
                        HFLog.C("失败次数" + errorCount);
                        socket.ReConnect();
                    }
                });
                socket.StartConnect();

                NotificationCenter.Instance.RemoveObserver(this, GameConst.UI, 123);
            });

            webImage.SetWebImage("https://timgsa.baidu.com/timg?image&quality=80&size=b9999_10000&sec=1550678703691&di=ffbd41f0ddfcde0dd19ce793dad58320&imgtype=0&src=http%3A%2F%2Fpic17.nipic.com%2F20111021%2F8633866_210108284151_2.jpg");

            HFLog.L(ConfigMan.Get(0).GetAddress("1"));
            HFLog.L(ConfigMan.Get(0).love.Count);
            HFLog.L(ConfigMan.Get(0).sex);
            HFLog.L(ConfigChat.Get(1).ChooseCtype.name);
            HFLog.L(ConfigRole.Get(1).GetTime1(1).name);


            jumpBtn.onClick.AddListener(Jump);

            TaskBtn.onClick.AddListener(Test);


            Task.Run(async delegate()
            {
                for (int i = 0; i < 100; i++)
                {
                    await Task.Delay(100);
                    GameLooper.BackToMainThread(delegate (object state)
                    {
                        print("线程id" + Thread.CurrentThread.ManagedThreadId + " 参数" + state);
                    }, i);
                }
            });

        }

        public async void Jump()
        {
            await HFAssetManager.Instance.LoadScene("SceneA", "SceneA");
            await UIManager.Close<FunctionController>();
        }

        public async void Test()
        {

            HFLog.C("-------------------------------------------------------------");
            HFLog.C("调用之前 "+Thread.CurrentThread.ManagedThreadId.ToString());
            object o = await task.Call(UnityEngine.Random.Range(1, 100), null);
            HFLog.C("调用之后 " + Thread.CurrentThread.ManagedThreadId.ToString());
            HFLog.C(o.ToString());





            GameObject prefab = HFAssetManager.Instance.GetPrefab("prefab", "Capsule");
            GameObject.Instantiate(prefab);

            System.Diagnostics.Stopwatch watch = null;
            TimeSpan timespan ;

            watch = new System.Diagnostics.Stopwatch();
            watch.Start();  //开始监视代码运行时间
            AssetBundlePackage package = await HFAssetManager.Instance.LoadAssetBundleFromFileAsync("prefab");
            watch.Stop();  //停止监视
            timespan = watch.Elapsed;  //获取当前实例测量得出的总时间
            HFLog.C(timespan.TotalMilliseconds.ToString());

            watch = new System.Diagnostics.Stopwatch();
            watch.Start();  //开始监视代码运行时间
            GameObject prefab = await package.LoadAssetAsync<GameObject>("Capsule");
            watch.Stop();  //停止监视
            timespan = watch.Elapsed;  //获取当前实例测量得出的总时间
            HFLog.C(timespan.TotalMilliseconds.ToString());

            watch = new System.Diagnostics.Stopwatch();
            watch.Start();  //开始监视代码运行时间
            GameObject.Instantiate(prefab);
            watch.Stop();  //停止监视
            timespan = watch.Elapsed;  //获取当前实例测量得出的总时间
            HFLog.C(timespan.TotalMilliseconds.ToString());


            HFAssetManager.Instance.UnloadAssetBundle(package);


            AssetBundlePackage package = HFAssetManager.Instance.LoadAssetBundleFromFile("prefab");
            GameObject prefab = package.LoadAsset<GameObject>("Capsule");
            GameObject.Instantiate(prefab);



            HFLog.C(timespan.TotalMilliseconds.ToString());

        }

        private void Update()
        {
            SendNotificationMessage(GameConst.UI, 123, "str");
            FindElement();
        }

        public override void Destroy()
        {
            base.Destroy();
            task.Close();
        }

        public T CreateMessage<T>(byte[] bytes) where T : IMessage, new()
        {
            T t1 = new T();
            t1.MergeFrom(bytes);
            return t1;
        }
    */
    }

}