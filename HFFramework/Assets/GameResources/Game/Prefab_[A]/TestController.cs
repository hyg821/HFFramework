﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using HFFramework;
using System;

public class TestController : UIController {

    public override void OnAwake()
    {
        base.OnAwake();
    }

    public override void DoHideAnimation(Action callback)
    {
        base.DoHideAnimation(callback);
        callback();
    }

    public override void DoShowAnimation(Action callback)
    {
        base.DoShowAnimation(callback);
        callback();
    }

}
