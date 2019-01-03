using UnityEngine;
using HotFix;
using HFFramework;

public class HotFixEnter
{
    public static void AwakeDLL()
    {
        Debug.Log("AwakeDLL");
    }

    public static void Update()
    {
        GameUpdate.Instance.Update();
        // Debug.Log("热更新执行Update");
    }

    public static void FixedUpdate()
    {
        GameUpdate.Instance.FixedUpdate();
        //Debug.Log("热更新执行FixedUpdate");
    }

    public static void LateUpdate()
    {
        GameUpdate.Instance.LateUpdate();
        //Debug.Log("热更新执行LateUpdate");
    }

    public static void Destroy()
    {
        GameUpdate.Instance.Destroy();
        Debug.Log("热更新被销毁");
    }

}



