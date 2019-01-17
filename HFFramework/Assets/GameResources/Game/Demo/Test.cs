using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using HFFramework;

public class Test : MonoBehaviour
{
    void Start()
    {
        //初始化配置文件
        Config.HFConfigManager.Instance.Init();
        //添加canvas
        for (int i = 0; i < 1; i++)
        {
            UIManager.Instance.AddCanvas(i);
        }
        //创建控制器
        LoginController controller = UIManager.Instance.GetController<LoginController>("Login");
    }
}
