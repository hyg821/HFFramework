using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using HFFramework;
using UnityEngine.UI;
using Config;
using BestHTTP;
using System.Net.Sockets;
using System.IO;

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
            AppDomainManager.Instance.JumpToHotFix("hotfixdll", "HotFix", "HotFixEnter");


            HFSocket socket = HFSocketManager.Instance.GetSocket("hyg");
            socket.Init("10.2.0.207", 8002, delegate ()
             {
                 HFLog.C("连接成功");
             }, delegate (int a, byte[] bb)
             {
                 HFLog.C("开始接受");
             }, delegate ()
             {
                 HFLog.C("连接关闭");
             }, delegate ()
             {
                 HFLog.C("连接失败 重新连接");
                 socket.ReConnect();
             });

            socket.StartConnect();

            /*
            ClientSocket socket = new ClientSocket(AddressFamily.InterNetwork, SocketType.Stream, ProtocolType.Tcp);
            socket.beginConnectedCallback = delegate(bool b) {
                GameLooper.BackToMainThread(delegate ()
                {
                    HFLog.C("链接成功");
                });
            };
            socket.connectErrorCallback = delegate() { };
            socket.messageDispatchReceiveDelegate = delegate(int a, MemoryStream b) { };
            socket.Connecting("10.2.0.207", 8002);

            */
        });

        print(ConfigMan.Get(0).GetAddress("1"));
        print(ConfigMan.Get(0).love.Count);
        print(ConfigMan.Get(0).sex);

        print(ConfigChat.Get(1).ChooseCtype.name);

        print(ConfigRole.Get(1).GetTime1(1).name);
    }
}
