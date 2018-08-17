using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using HFFramework;
using System.Reflection;
using System;
using HFConfig;
using Centersdk.Protobuf;
using Google.Protobuf;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;

public class Demo : BaseMonoBehaviour
{
    public UICanvas myCanvas;
    public UINavigationController navi;

    public List<UIController> testList = new List<UIController>();

    public bool isOpenUpdate = false;

    public byte[] bytes;

    CoroutineQueue queue;

    public void AssetBundleTest()
    {
        GameObject prefab = HAResourceManager.Instance.GetPrefab("Prefab", "Cube");
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

    public override void OnUpdate(float f)
    {
        base.OnUpdate(f);
        Debug.Log("MyUpdate");
    }

    public override void OnFixedUpdate(float f)
    {
        base.OnFixedUpdate(f);
        Debug.Log("MyFixedUpdate");
    }

    public override void OnLateUpdate(float f)
    {
        base.OnLateUpdate(f);
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
        TestController  test = UIManager.Instance.GetController<TestController>("Login");
        navi.PushController(test, PushType.Model);
    }

    public void pop移除ViewController()
    {
        navi.PopController(PopType.Destroy);
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

    public void 解析配置文件()
    {

        HFConfigManager.Instance.Init();
        foreach (var item in HFConfigItem.Instance.dic)
        {
            print(item.Value.name+"   "+ item.Value.stoneLv + "   " + item.Value.isUse + "   " + item.Value.composite2Id);
            print("");
        }

        HFConfig.Item it = HFConfigItem.Instance.Get(10001);
        for (int i = 0; i < it.type.Count; i++)
        {
            print("AAAAAAAAAA    =" + it.type[i]);
        }
    }


    public void 序列化ProtoBuf()
    {
        IntegerValue intx = new IntegerValue();
        intx.Val = 100;
        bytes = intx.ToByteArray();    
    }

    public void 反序列化ProtoBuf()
    {
        IntegerValue ims = new IntegerValue();
        ims.MergeFrom(bytes);
        print(ims.ToString());

        //测试序列化();
        ims = Deserialize(IntegerValue.Parser, bytes);
        print(ims.ToString());
    }

    public T Deserialize<T>(MessageParser<T> parser,byte[] bys) where T : IMessage<T>
    {
        return parser.ParseFrom(bys);
    }

    /// <summary>
    ///  正反泛型序列化
    /// </summary>
    public void 正反序列化ProtoBuf()
    {
        MessageConverter.AddMessageParser(1, IntegerValue.Parser);
        MessageConverter.AddMessageParser(2, ShopItemList.Parser);
        MessageConverter.AddMessageParser(3, ArenaChallenge.Parser);

        //正反 序列化大概GC 1.5kb
        IntegerValue i1 = new IntegerValue();
        i1.Val = 256;
        MessageConverter.Deserialize(1,MessageConverter.Serialize(i1));

        ShopItemList i2 = new ShopItemList();
        i2.ShopId = 528;
        i2.RefreshMillis = 1000;
        MessageConverter.Deserialize(2, MessageConverter.Serialize(i2));

        BattleBuff i3 = new BattleBuff();
        i3.BuffId = 8888;
        MessageConverter.Deserialize(3, MessageConverter.Serialize(i3));

        //print(i1.ToString());
        //print(i2.ToString());
        //print(i3.ToString());
    }

    private void Update()
    {
        //正反序列化ProtoBuf();
    }

    public void 测试序列化()
    {
        FileStream steam = new FileStream(Application.dataPath + "/xxx", FileMode.Create);
        BinaryFormatter formatter = new BinaryFormatter();
        formatter.Serialize(steam, HFConfigItem.Instance);
        steam.Dispose();

        steam = new FileStream(Application.dataPath + "/xxx", FileMode.Open);
        formatter = new BinaryFormatter();
        HFConfigItem x = formatter.Deserialize(steam) as HFConfigItem;
        steam.Dispose();
    }

    public void 反射创建()
    {
        GameObject obj = GameFactory.ReflectCreate<GameObject>();
        obj.name = "reflect";

        GameObject obj1 = GameFactory.ReflectCreate("UnityEngine.GameObject,UnityEngine") as GameObject;
        obj1.name = "reflect1";
    }




}
