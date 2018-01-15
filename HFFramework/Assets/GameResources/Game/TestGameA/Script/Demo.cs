using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using HFFramework;

public class Demo : BaseMonoBehaviour
{

    public bool isOpenUpdate = false;

    public void AssetBundleTest()
    {
        GameObject prefab = HAResourceManager.self.GetGameObject("Prefab", "Cube");
        GameObject.Instantiate(prefab);

        AssetBundlePackage ab = HAResourceManager.self.LoadAssetBundleFromFile("Prefab");
        GameObject g = ab.LoadAssetWithCache<GameObject>("Sphere");
        GameObject.Instantiate(g);

        HAResourceManager.self.UnloadAssetBundle(ab, false);

        GameObject ob = new GameObject();
        HFLog.L(ob.GetInstanceID().ToString());
    }

    public void HotFixJump()
    {
        AppDomainManager.self.Jump(0, "HotFixDll", "HFFrameworkHotFix", "HotFixEnter");
    }

    public void OpenUpdate()
    {
        IsNeedUpdate = !IsNeedUpdate;
    }

    public void OpenFixedUpdate()
    {
        IsNeedFixedUpdate = !IsNeedFixedUpdate;
    }

    public void OpenLateUpdate()
    {
        IsNeedLateUpdate = !IsNeedLateUpdate;
    }

    public override void MyUpdate()
    {
        base.MyUpdate();
        Debug.Log("MyUpdate");
    }

    public override void MyFixedUpdate()
    {
        base.MyFixedUpdate();
        Debug.Log("MyFixedUpdate");
    }

    public override void MyLateUpdate()
    {
        base.MyLateUpdate();
        Debug.Log("MyLateUpdate");
    }

    public void 添加观察者()
    {
        ReceiveNotificationMessage(this, 100, delegate (NotificationMessage msg)
        {
            Debug.Log("拿到的信息是" + msg.obj as string);
        });
    }

    public void 发送消息()
    {
        SendNotificationMessage(100, "天下无敌");
    }

}
