using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

/// <summary>
///  负责捕鱼 所有的 update 开启 和关闭
/// </summary>
public class MainUpdate : MonoBehaviour {

    public static MainUpdate self;

    public Action startAction = null;
    public Action updateAction = null;
    public Action fixedUpdateAction = null;
    public Action lateUpdateAction = null;

    void Awake()
    {
        self = this;
    }

    public void Start()
    {
        if (startAction != null)
        {
            startAction();
        }
    }

    void Update()
    {
        if (updateAction != null)
        {
            updateAction();
        }
    }


    public void FixedUpdate()
    {
        if (fixedUpdateAction != null)
        {
            fixedUpdateAction();
        }
    }

    public void LateUpdate()
    {
        if (lateUpdateAction != null)
        {
            lateUpdateAction();
        }
    }
}
