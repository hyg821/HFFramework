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

        public static GameStateChecker Instance;

        /// <summary>
        ///  检测间隔
        /// </summary>
        private WaitForSeconds wait;

        /// <summary>
        ///  网络是否可以使用
        /// </summary>
        public bool networkCanUse = false;

        private bool isPaused = false;
        /// <summary>
        ///  是否暂停
        /// </summary>
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
            Instance = this;
            wait = new WaitForSeconds(5);
            StartCoroutine(CheckNetWork());
        }

        public IEnumerator CheckNetWork()
        {
            if (Application.internetReachability == NetworkReachability.NotReachable)
            {
                networkCanUse = false;
                NotificationCenter.self.PostNotification(new NotificationMessage(MESSAGE_NETWORK_UNUSE, this, null));
            }
            else
            {
                networkCanUse = true;
            }
            yield return wait;
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

        public void DestroyManager()
        {
            Instance = null;
        }

    }
}


