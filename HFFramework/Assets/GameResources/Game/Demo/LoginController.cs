using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using HFFramework;
using UnityEngine.UI;
using Config;

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

            TcpSocket socket = new TcpSocket();
            socket.Init("10.2.0.207", 8002, delegate ()
            {
                GameLooper.BackToMainThread(delegate ()
                {
                    HFLog.C("连接成功");
                });
            }, delegate (int mes, byte[] con)
            {
                GameLooper.BackToMainThread(delegate ()
                {
                    HFLog.C("接收消息");
                });
            }, delegate ()
            {
                GameLooper.BackToMainThread(delegate ()
                {
                    HFLog.C("连接关闭");
                });
            }, delegate ()
            {
                GameLooper.BackToMainThread(delegate ()
                {
                    HFLog.C("连接失败");
                    socket.Close();
                });
            });

            socket.StartConnect();
            //socket.Close();
        });

        print(ConfigMan.Get(0).GetAddress("1"));
        print(ConfigMan.Get(0).love.Count);
        print(ConfigMan.Get(0).sex);

        print(ConfigChat.Get(1).ChooseCtype.name);

        print(ConfigRole.Get(1).GetTime1(1).name);
    }
}
