using UnityEngine;
using HotFix;

public class HotFixEnter
{
    public static void AwakeDLL()
    {
        Debug.Log("AwakeDLL");
        //HFFramework.HFSocket
    }

    public static void Update()
    {
        // Debug.Log("热更新执行Update");
    }

    public static void FixedUpdate()
    {
        //Debug.Log("热更新执行FixedUpdate");
    }

    public static void LateUpdate()
    {
        //Debug.Log("热更新执行LateUpdate");
    }

    public static void Destroy()
    {
        Debug.Log("热更新被销毁");
    }

}



