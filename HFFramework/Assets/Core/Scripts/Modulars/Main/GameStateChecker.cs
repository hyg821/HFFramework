using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    public class GameStateChecker : MonoBehaviour,IManager
    {
        public static GameStateChecker Instance;

        /// <summary>
        ///  程序暂停
        /// </summary>
        public const int APPPAUSE = 1;

        private bool isPaused = false;
        /// <summary>
        ///  是否暂停
        /// </summary>
        public bool IsPaused
        {
            set
            {
                if (isPaused!=value)
                {
                    isPaused = value;
                    NotificationCenter.PostNotification(new NotificationMessage(GameConst.MSG_STATE, APPPAUSE, this, isPaused));
                }
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


