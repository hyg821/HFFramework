using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using HFFramework;
using System;

public class TestController : UIController {

    public override void MyAwake()
    {
        base.MyAwake();
        controllerTag = "HYG";
    }
}
