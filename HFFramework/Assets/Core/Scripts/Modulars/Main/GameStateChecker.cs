using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    public class GameStateChecker : MonoBehaviour,IManager
    {
        //客户端内部通信 基础消息号
        public const long GAME_MESSAGE_BASE = -123456;

        /// <summary>
        ///  程序暂停
        /// </summary>
        public const long MESSAGE_APPPAUSE = GAME_MESSAGE_BASE + 1;

        public static GameStateChecker Instance;

        private bool isPaused = false;
        /// <summary>
        ///  是否暂停
        /// </summary>
        public bool IsPaused
        {
            set
            {
                isPaused = value;
                NotificationCenter.PostNotification(new NotificationMessage(MESSAGE_APPPAUSE, this, isPaused));
            }
            get
            {
                return isPaused;
            }
        }

        void Awake()
        {
            Instance = this;
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


