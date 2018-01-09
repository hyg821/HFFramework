using UnityEngine;
using System;
using System.Collections.Generic;

public class GameLooper : MonoBehaviour {

    public static GameLooper self;

    /// <summary>
    ///  
    /// </summary>
    private Action updateAction = null;

    /// <summary>
    /// 
    /// </summary>
    private Action fixedUpdateAction = null;

    /// <summary>
    /// 
    /// </summary>
    private Action lateUpdateAction = null;

    /// <summary>
    ///  event队列
    /// </summary>
    private Queue<Action> eventQueue = new Queue<Action>();

    void Awake()
    {
        self = this;
    }

    void Update()
    {
        //执行事件队列
        while (eventQueue.Count > 0)
        {
            //吐出所有的 delegate
            Action e = eventQueue.Dequeue();
            e();
        }

        // 执行 update
        if (updateAction != null)
        {
            updateAction();
        }
    }

    void FixedUpdate()
    {
        if (fixedUpdateAction != null)
        {
            fixedUpdateAction();
        }
    }

    void LateUpdate()
    {
        if (lateUpdateAction != null)
        {
            lateUpdateAction();
        }
    }

    void OnDestroy()
    {
        updateAction = null;
        fixedUpdateAction = null;
        lateUpdateAction = null;
        eventQueue.Clear();
        eventQueue = null;
        self = null;
    }

    public static void BackToMainThread(Action e)
    {
        if (e != null)
        {
            if (self!=null)
            {
                self.eventQueue.Enqueue(e);
            }
        }
    }

    public static  void AddUpdate(Action update)
    {
        self.updateAction += update;
    }

    public static void SubUpdate(Action update)
    {
        self.updateAction -= update;
    }

    public static void AddFixedUpdate(Action update)
    {
        self.fixedUpdateAction += update;
    }

    public static void SubFixedUpdate(Action update)
    {
        self.fixedUpdateAction -= update;
    }

    public static void AddLateUpdate(Action update)
    {
        self.lateUpdateAction += update;
    }

    public static void SubLateUpdate(Action update)
    {
        self.lateUpdateAction -= update;
    }
}
