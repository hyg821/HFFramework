using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    public class GameStateChecker : MonoBehaviour
    {

        //客户端内部通信 基础消息号
        public const long GAME_MESSAGE_BASE = -123456;

        /// <summary>
        ///  网络无法连接
        /// </summary>
        public const long MESSAGE_NETWORK_UNUSE = GAME_MESSAGE_BASE + 1;

        /// <summary>
        ///  程序暂停
        /// </summary>
        public const long MESSAGE_APPPAUSE = GAME_MESSAGE_BASE + 2;


        public static GameStateChecker self;

        public bool networkCanUsed = false;

        private bool isPaused = false;
        public bool IsPaused
        {
            set
            {
                isPaused = value;
                NotificationCenter.self.PostNotification(new NotificationMessage(MESSAGE_APPPAUSE, this, isPaused));
            }
            get
            {
                return isPaused;
            }
        }

        void Awake()
        {
            self = this;
            CheckNetWork();
        }


        // Update is called once per frame
        void Update()
        {
            CheckNetWork(6);
        }

        public void CheckNetWork()
        {
            if (Application.internetReachability == NetworkReachability.NotReachable)
            {
                networkCanUsed = false;
                NotificationCenter.self.PostNotification(new NotificationMessage(MESSAGE_NETWORK_UNUSE, this, null));
            }
            else
            {
                networkCanUsed = true;
            }
        }

        void CheckNetWork(int sec)
        {
            //每10秒检测一次 网络是否能连接（物理层面）
            if (Time.frameCount % sec * 100 == 0)
            {
                CheckNetWork();
            }
        }

        void OnApplicationFocus(bool hasFocus)
        {
#if UNITY_EDITOR
#else
        IsPaused = !hasFocus;
#endif
        }

        void OnApplicationPause(bool pauseStatus)
        {
#if UNITY_EDITOR
#else
       IsPaused = pauseStatus;
#endif
        }
    }
}


