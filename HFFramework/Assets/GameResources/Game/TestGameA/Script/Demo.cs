using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using HFFramework;
using System.Reflection;
using System;

public class Demo : BaseMonoBehaviour
{
    public UICanvas myCanvas;
    public UINavigationController navi;

    public List<UIController> testList = new List<UIController>();

    public bool isOpenUpdate = false;

    CoroutineQueue queue;

    public void AssetBundleTest()
    {
        GameObject prefab = HAResourceManager.Instance.GetGameObject("Prefab", "Cube");
        GameObject.Instantiate(prefab);

        AssetBundlePackage ab = HAResourceManager.Instance.LoadAssetBundleFromFile("Prefab");
        GameObject g = ab.LoadAssetWithCache<GameObject>("Sphere");
        GameObject.Instantiate(g);

        HAResourceManager.Instance.UnloadAssetBundle(ab, false);


        AssetBundlePackage abx = HAResourceManager.Instance.LoadAssetBundleFromFile("Textrure");

        Sprite sss = abx.LoadAssetWithCache<Sprite>("aaa");
        Debug.Log("BBBBBBBBBBBBBBBBBBBB  " + sss.name);

        Sprite[] ss = abx.assetBundle.LoadAssetWithSubAssets<Sprite>("aaa");
        Debug.Log("XXXXXXXXXXXXXXXXX" + ss.Length);
    }

    public void HotFixJump()
    {
        HFFramework.AppDomainManager.Instance.Jump(0, "HotFixDll", "HFFrameworkHotFix", "HotFixEnter");
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

    public override void MyUpdate(float f)
    {
        base.MyUpdate(f);
        Debug.Log("MyUpdate");
    }

    public override void MyFixedUpdate(float f)
    {
        base.MyFixedUpdate(f);
        Debug.Log("MyFixedUpdate");
    }

    public override void MyLateUpdate(float f)
    {
        base.MyLateUpdate(f);
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

    public void 代码添加Canvas()
    {
        myCanvas = UIManager.Instance.AddCanvas(0);

        AssetBundlePackage abx = HAResourceManager.Instance.LoadAssetBundleFromFile("HFUI");
        GameObject prefab = abx.LoadAssetWithCache<GameObject>("UINavigation");
        navi = Instantiate(prefab).GetComponent<UINavigationController>();
        navi.SetParent(myCanvas);
    }

    public void push添加ViewController()
    {
        AssetBundlePackage abx = HAResourceManager.Instance.LoadAssetBundleFromFile("prefab");
        GameObject prefab = abx.LoadAssetWithCache<GameObject>("VC");
        TestController test = Instantiate(prefab).GetComponent<TestController>();
        navi.PushController(test,PushType.Model);
    }

    public void pop移除ViewController()
    {
        navi.PopController(PopType.Cache);
    }

    public void 创建文件夹()
    {
        UtilsManager.CreateFolder("侯英格");
    }

    public void 删除文件夹()
    {
        UtilsManager.DeleteFolder("侯英格");
    }

    public void 写入一个文件()
    {
        UtilsManager.CreateFile("HYG.txt", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA");
    }

    public void 同步读取一个文件()
    {
        string str =  UtilsManager.SyncReadFile("HYG.txt");
        print(str);
    }

    public void 异步读取一个文件()
    {
        UtilsManager.AsyncReadFile("HYG.txt", delegate (string str)
        {
            print(str);
        });
    }

    public void 删除一个文件()
    {
        UtilsManager.DeleteFile("HYG.txt");
    }

    public void 读取ScriptableObject配置文件()
    {
        AssetBundlePackage ab = HAResourceManager.Instance.LoadAssetBundleFromFile("Config");
        ScriptableObjectTestA g = ab.LoadAssetWithCache<ScriptableObjectTestA>("ScriptObjectConfigTestA");
        print("付希凯的岁数是" + g.peopleAge);
        print("付希凯的城市是" + g.address[0].city);
        g.peopleAge = 10;
    }

    public void 跳转到场景1()
    {
        HAResourceManager.Instance.LoadScene("Scene1", true, "BBB", delegate ()
        {
            print("跳转完成");
        });
    }

    public void 创建携程队列()
    {
        queue = GameTimer.CreateCoroutineQueue();
        queue.Append(new SingleCoroutine(CoroutineType.WaitForSeconds, 1, delegate ()
        {
            HFLog.C("第一个方法打印");
        })).Append(new SingleCoroutine(CoroutineType.WaitForSeconds, 2, delegate ()
        {
            HFLog.C("第二个方法打印");
        })).Append(new SingleCoroutine(CoroutineType.WaitForSeconds, 3, delegate ()
        {
            HFLog.C("第三个方法打印");
        })).Append(new SingleCoroutine(CoroutineType.WaitForSeconds, 4, delegate ()
        {
            HFLog.C("第四个方法打印");
        })).Append(new SingleCoroutine(CoroutineType.WaitNull, 1, delegate ()
        {
            HFLog.C("第五个方法打印");
        })).OnComplete(delegate ()
        {
            HFLog.C("我执行完了");
        });

        queue.Execute();
    }

    public void 停止携程队列()
    {
        queue.Stop();
    }

}
