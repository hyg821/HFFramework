using UnityEngine;
using HotFix;
using HFFramework;

public class HotFixEnter
{
    public static void Main()
    {
        Debug.Log("AwakeDLL");
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

    public static void Destroy()
    {
        HotFix.GameLooper.Instance.Destroy();
        Debug.Log("热更新被销毁");
    }
}



