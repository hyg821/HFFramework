using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    public class GameSetter : MonoBehaviour
    {
        public static GameSetter Instance;
        /// <summary>
        ///  模拟设备宽度
        /// </summary>
        public float ServerSceneWidth = 1280.0f;

        /// <summary>
        ///  模拟设备高度
        /// </summary>
        public float ServerSceneHeight = 720.0f;

        /// <summary>
        ///  默认帧数
        /// </summary>
        public int targetFrame = 60;

        public void Awake()
        {
            Instance = this;

            ServerSceneWidth = 1280.0f;

            ServerSceneHeight = 720.0f;

            targetFrame = 60;

            Application.runInBackground = true;

            Application.targetFrameRate = targetFrame;

            Screen.sleepTimeout = SleepTimeout.NeverSleep;

            Time.fixedDeltaTime = 1.0f / Application.targetFrameRate;
        }

        public void DestroyManager()
        {
            Instance = null;
        }
    }
}


