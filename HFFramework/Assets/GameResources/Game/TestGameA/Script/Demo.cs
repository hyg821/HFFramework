using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using HFFramework;
using System.Reflection;
using System;

public class Demo : BaseMonoBehaviour
{
    public UICanvas myCanvas;

    public List<UIController> testList = new List<UIController>();

    public bool isOpenUpdate = false;

    public void AssetBundleTest()
    {
        GameObject prefab = HAResourceManager.self.GetGameObject("Prefab", "Cube");
        GameObject.Instantiate(prefab);

        AssetBundlePackage ab = HAResourceManager.self.LoadAssetBundleFromFile("Prefab");
        GameObject g = ab.LoadAssetWithCache<GameObject>("Sphere");
        GameObject.Instantiate(g);

        HAResourceManager.self.UnloadAssetBundle(ab, false);

    }

    public void HotFixJump()
    {
        HFFramework.AppDomainManager.self.Jump(0, "HotFixDll", "HFFrameworkHotFix", "HotFixEnter");
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
        myCanvas = UIManager.self.AddCanvas(0);
    }

    public void push添加ViewController()
    {
        GameObject prefab = HAResourceManager.self.GetGameObject("Prefab", "VC");
        GameObject gx = GameObject.Instantiate(prefab);
        UIController testController = UIManager.GameObjectBindUIController<TestController, TestView, TestModel>(gx);
        myCanvas.PushController(testController,PushType.Navigation);
        testList.Add(testController);
    }

    public void pop移除ViewController()
    {
        if (testList.Count - 1>=0)
        {
            myCanvas.PopController(testList[testList.Count - 1], PopType.Cache);
            testList.RemoveAt(testList.Count - 1);
        }
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
        AssetBundlePackage ab = HAResourceManager.self.LoadAssetBundleFromFile("Config");
        ScriptableObjectTestA g = ab.LoadAssetWithCache<ScriptableObjectTestA>("ScriptObjectConfigTestA");
        print("付希凯的岁数是" + g.peopleAge);
        print("付希凯的城市是" + g.address[0].city);
        g.peopleAge = 10;
    }

}
