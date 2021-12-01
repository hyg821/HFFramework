using UnityEngine;
using HotFix;
using HFFramework;
using System.Collections.Generic;
using System;

/// <summary>
/// 热更新逻辑里 尽量只使用 一层 await 不要嵌套 await 
/// 具体参考 HFSocket Call方法注释 能不要async的地方 尽量不用 直接返回 tcs.task 
/// </summary>
public class Program
{
    public static void Main()
    {
        Debug.Log("热更新代码开始运行 Main()");
        Debug.Log("测试自动编译是否成功");
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



