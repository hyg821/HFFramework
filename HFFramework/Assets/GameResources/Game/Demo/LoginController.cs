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

public class LoginController : UIController {
    public InputField input;
    public Button loginBtn;
    #region
    public override void FindElement()
    {
        input = AutoFind<InputField>("InputField");
        loginBtn = AutoFind<Button>("Button");
    }
    #endregion

    // Use this for initialization
    void Start()
    {
        FindElement();
        loginBtn.onClick.AddListener(delegate ()
        {
            HFLog.C("点击登录的名称是" + input.text);
            HFFramework.AppDomainManager.Instance.JumpToHotFix("hotfixdll", "HotFix", "HotFixEnter");
         
            HFSocket socket = HFSocketManager.Instance.GetSocket("hyg");
            socket.Init("10.2.0.207", 8002, delegate ()
             {
                 HFLog.C("连接成功");

                 
                 LoginRequest request = new LoginRequest();
                 request.OpenId = "zcc";
                 request.ProductId = "1";
                 request.Pf = "AND";
                 request.Channel = "";
                 request.ChannelUid = "";
                 request.Version = "1.0.0";
                 socket.SendMessage(1,request);
                 
             }, delegate (int msgID, byte[] bb)
             {
                 HFLog.C("开始接受"+msgID);
                 
                 if (msgID==1)
                 {
                     LoginResponse res = LoginResponse.Parser.ParseFrom(bb);
                     HFLog.C(res.ToString());
                 }
                 
             }, delegate ()
             {
                 HFLog.C("连接关闭");
             }, delegate ()
             {
                 HFLog.C("连接失败 重新连接");
                 socket.ReConnect();
             });

            socket.StartConnect();
        });

        print(ConfigMan.Get(0).GetAddress("1"));
        print(ConfigMan.Get(0).love.Count);
        print(ConfigMan.Get(0).sex);

        print(ConfigChat.Get(1).ChooseCtype.name);

        print(ConfigRole.Get(1).GetTime1(1).name);
    }
}
