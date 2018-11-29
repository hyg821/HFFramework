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
        });

        print(ConfigMan.Get(0).Address.city);
        print(ConfigMan.Get(0).love.Count);
        print(ConfigMan.Get(0).sex);

    }
}
