﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MainSetting : MonoBehaviour
{
    /// <summary>
    ///  模拟设备宽度
    /// </summary>
    public const float ServerSceneWidth = 1280.0f;

    /// <summary>
    ///  模拟设备高度
    /// </summary>
    public const float ServerSceneHeight = 720.0f;

    /// <summary>
    ///  默认帧数
    /// </summary>
    public const int targetFrame = 60;

    public void Awake()
    {
        Application.runInBackground = true;
        Screen.sleepTimeout = SleepTimeout.NeverSleep;
        Application.targetFrameRate = targetFrame;
        Time.fixedDeltaTime = 1.0f / Application.targetFrameRate;
    }

}
