using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class MainThreadHelper : MonoBehaviour {

    /// <summary>
    ///  单例
    /// </summary>
    private static MainThreadHelper instance = null;
    public static MainThreadHelper Instance
    {
        set
        {
            instance = value;
        }
        get { return instance; }
    }

    private Queue<Action> eventQueue = new Queue<Action>();

    void Awake()
    {
        Instance = this;  
    }

    public static void BackToMainThread(Action e)
    {
        if (e != null)
        {
            Instance.eventQueue.Enqueue(e);
        }
    }

	// Update is called once per frame
	void Update () {
        while (eventQueue.Count > 0)
        {
            //吐出所有的 delegate
            Action e = eventQueue.Dequeue();
            e();
        }
    }
}
