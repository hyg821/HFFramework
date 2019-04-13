using System.Collections;
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

public class LoginController : UIController
{

    public Image bg;
    public InputField input;
    public Button loginBtn;
    public Image webImage;
    public Button JumpBtn;
    #region
    public override void FindElement()
    {
        bg = AutoFind<Image>("");
        input = AutoFind<InputField>("InputField");
        loginBtn = AutoFind<Button>("Button");
        webImage = AutoFind<Image>("Image");
        JumpBtn = AutoFind<Button>("Button2");
    }
    #endregion





    public int errorCount = 0;

    // Use this for initialization
    void Start()
    {
        FindElement();

        ReceiveNotificationMessage(this, GameConst.MSG_UI, 123, delegate (NotificationMessage msg)
        {
            //print("发送的消息是 " + msg.obj);
        });

        ReceiveNotificationMessage(this, GameConst.MSG_STATE, GameStateChecker.APPPAUSE, delegate (NotificationMessage msg)
        {
            print("是否暂停 " + msg.obj);
        });

        loginBtn.onClick.AddListener(delegate ()
        {
            HFLog.C("点击登录的名称是" + input.text);

            bg.sprite = HFResourceManager.Instance.GetSpriteByAtlas("textrure", "TestAtlas", "A");

            HFFramework.AppDomainManager.Instance.JumpToHotFix("hotfixdll", "HotFix", "HotFixEnter");

            errorCount = 0;
            HFSocket socket = HFSocketManager.Instance.GetSocket("hyg");
            socket.Init("10.2.0.207", 8002, delegate ()
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

            NotificationCenter.Instance.RemoveObserver(this, GameConst.MSG_UI, 123);
        });

        webImage.SetWebImage("https://timgsa.baidu.com/timg?image&quality=80&size=b9999_10000&sec=1550678703691&di=ffbd41f0ddfcde0dd19ce793dad58320&imgtype=0&src=http%3A%2F%2Fpic17.nipic.com%2F20111021%2F8633866_210108284151_2.jpg");

        print(ConfigMan.Get(0).GetAddress("1"));
        print(ConfigMan.Get(0).love.Count);
        print(ConfigMan.Get(0).sex);
        print(ConfigChat.Get(1).ChooseCtype.name);
        print(ConfigRole.Get(1).GetTime1(1).name);


        JumpBtn.onClick.AddListener(delegate ()
        {
            HFResourceManager.Instance.LoadScene("SceneA", "SceneA", true,delegate()
            {
                UIManager.Instance.CloseController("Login");
            });    
        });
    }

    private void Update()
    {
        SendNotificationMessage(GameConst.MSG_UI, 123, "str");
    }

    public T CreateMessage<T>(byte[] bytes) where T : IMessage, new()
    {
        T t1 = new T();
        t1.MergeFrom(bytes);
        return t1;
    }
}
