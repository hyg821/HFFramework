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
using UniRx.Async;
using System.Runtime.CompilerServices;
using UnityEngine.Profiling;

namespace HFFramework.Demo
{
    public class FunctionController : UIController
    {
        public Text TitleLabel;
        public Button fun0;
        public Button fun1;
        public Button fun2;
        #region
        public override void FindElement()
        {
            TitleLabel = AutoFind<Text>("TopBar/Text");
            fun0 = AutoFind<Button>("ScrollView/Viewport/Content/Cell/Button");
            fun1 = AutoFind<Button>("ScrollView/Viewport/Content/Cell (1)/Button");
            fun2 = AutoFind<Button>("ScrollView/Viewport/Content/Cell (2)/Button");
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
        }

        public void Entity创建()
        {
            Close();
            for (int i = 0; i < 10; i++)
            {
                Entity entity = GameFactory.CreateEntity<Entity>(GameObject.CreatePrimitive(PrimitiveType.Cube));
                entity.transform.position = new Vector3(i, i, 0);
            }
        }

        public async void Entity作为控制器()
        {
            Close();
            for (int i = 0; i < 10; i++)
            {
                TestEntity entity = GameFactory.CreateEntity<TestEntity>(GameObject.CreatePrimitive(PrimitiveType.Cube));
                await UniTask.Delay(100);
            }
        }

        public async void Entity数据显示分离()
        {
            Close();
            for (int i = 0; i < 10; i++)
            {
                Test1Entity entity = GameFactory.CreateEntity<Test1Entity>(GameObject.CreatePrimitive(PrimitiveType.Cube));
                entity.Start();
                await UniTask.Delay(100);
            }
        }

        public override void PlayShowAnimation()
        {
            base.PlayShowAnimation();
            transform.localScale = Vector3.zero;
            transform.DOScale(Vector3.one, 1).OnComplete(OnShowComplete);
            HFLog.C("播放打开动画");
        }

        public override void OnShowComplete()
        {
            base.OnShowComplete();
            HFLog.C("页面完全显示");
            HFFramework.AppDomainManager.Instance.ExcuteHotFix("hotfixdll", "HotFix");

            /*
            DownLoader loader = DownLoadManager.Instance.GetDownLoader();
            UrlDiskPath path = new UrlDiskPath();
            path.url = "https://xiazai.xiazaiba.com/Soft/C/Chrome_74.0.3729.108_XiaZaiBa.zip";
            path.diskPath = PathManager.Instance.PersistentDataCustomPath+"/ccc.zip";

            UrlDiskPath path1 = new UrlDiskPath();
            path1.url = "https://xiazai.xiazaiba.com/Soft/C/Chrome_74.0.3729.108_XiaZaiBa.zip";
            path1.diskPath = PathManager.Instance.PersistentDataCustomPath + "/ccc1.zip";

            UrlDiskPath path2 = new UrlDiskPath();
            path2.url = "https://xiazai.xiazaiba.com/Soft/C/Chrome_74.0.3729.108_XiaZaiBa.zip";
            path2.diskPath = PathManager.Instance.PersistentDataCustomPath + "/ccc2.zip";

            loader.DownLoadFiles(new UrlDiskPath[] { path, path1, path2 }, AAA, BBB);
            */
        }

        public void AAA(float f)
        {
            //HFLog.C("总进度" + f);
        }

        public void BBB(string s)
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

                bg.sprite = HFResourceManager.Instance.GetSpriteByAtlas("texture", "TestAtlas", "A");

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
            await HFResourceManager.Instance.LoadScene("SceneA", "SceneA");
            await UIManager.Close<FunctionController>();
        }

        public async void Test()
        {

            HFLog.C("-------------------------------------------------------------");
            HFLog.C("调用之前 "+Thread.CurrentThread.ManagedThreadId.ToString());
            object o = await task.Call(UnityEngine.Random.Range(1, 100), null);
            HFLog.C("调用之后 " + Thread.CurrentThread.ManagedThreadId.ToString());
            HFLog.C(o.ToString());





            GameObject prefab = HFResourceManager.Instance.GetPrefab("prefab", "Capsule");
            GameObject.Instantiate(prefab);

            System.Diagnostics.Stopwatch watch = null;
            TimeSpan timespan ;

            watch = new System.Diagnostics.Stopwatch();
            watch.Start();  //开始监视代码运行时间
            AssetBundlePackage package = await HFResourceManager.Instance.LoadAssetBundleFromFileAsync("prefab");
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


            HFResourceManager.Instance.UnloadAssetBundle(package);


            AssetBundlePackage package = HFResourceManager.Instance.LoadAssetBundleFromFile("prefab");
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