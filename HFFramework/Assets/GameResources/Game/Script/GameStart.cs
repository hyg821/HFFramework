using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    public class GameStart : MonoBehaviour
    {
        private void Start()
        {
            InitUI();   
        }

        public void InitUI()
        {
            //初始化配置文件
            Config.HFConfigManager.Instance.Init();
            //添加canvas
            UIManager.Instance.AddCanvas(0);
            //创建控制器
            LoginController controller = UIManager.Instance.GetController<LoginController>("Login");
            controller.Open();

            DebugController debug = UIManager.Instance.GetController<DebugController>("Debug");
            debug.Open();
        }
    }
}
