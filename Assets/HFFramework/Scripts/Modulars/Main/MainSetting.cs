using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MainSetting : MonoBehaviour
{

    public const float ServerSceneWidth = 1200.0f;

    public const float ServerSceneHeight = 675.0f;

    public const int targetFrame = 45;

    public void Awake()
    {

        Application.runInBackground = true;

        Screen.sleepTimeout = SleepTimeout.NeverSleep;

        Application.targetFrameRate = targetFrame;

        Time.fixedDeltaTime = 1.0f / Application.targetFrameRate;

    }
}
