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
        GameUpdate.Instance.Update();
    }

    public static void FixedUpdate()
    {
        GameUpdate.Instance.FixedUpdate();
    }

    public static void LateUpdate()
    {
        GameUpdate.Instance.LateUpdate();
    }

    public static void Destroy()
    {
        GameUpdate.Instance.Destroy();
        Debug.Log("热更新被销毁");
    }
}



