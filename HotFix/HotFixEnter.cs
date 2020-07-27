using UnityEngine;
using HotFix;
using HFFramework;
using System.Collections.Generic;

public class HotFixEnter
{
    public static void Main()
    {
        Debug.Log("热更新代码开始运行 Main()");        
    }

    public static void Update()
    {
       HotFix.GameLooper.Instance.Update();
    }

    public static void FixedUpdate()
    {
        HotFix.GameLooper.Instance.FixedUpdate();
    }

    public static void LateUpdate()
    {
        HotFix.GameLooper.Instance.LateUpdate();
    }

    public static void Test(string a,string b,string c)
    {
        HFLog.C("a " + a);
        HFLog.C("b " + b);
        HFLog.C("c " + c);
    }

    public static void Destroy()
    {
        HotFix.GameLooper.Instance.Destroy();
        Debug.Log("热更新被销毁");
    }
}



