﻿#if UNITY_EDITOR
using UnityEditor;
using UnityEngine;
using System;
using System.Collections.Generic;

[System.Reflection.Obfuscation(Exclude = true)]
public class ILRuntimeCLRBinding
{
    [MenuItem("ILRuntime/Generate CLR Binding Code")]
    static void GenerateCLRBinding()
    {
        List<Type> types = new List<Type>();
        types.Add(typeof(int));
        types.Add(typeof(float));
        types.Add(typeof(long));
        types.Add(typeof(object));
        types.Add(typeof(string));
        types.Add(typeof(Array));
        types.Add(typeof(Dictionary<long, long>));
        types.Add(typeof(Dictionary<int, int>));
        types.Add(typeof(Dictionary<string, string>));
        types.Add(typeof(Dictionary<int, object>));
        types.Add(typeof(Dictionary<string, object>));
        types.Add(typeof(Dictionary<int, float>));
        types.Add(typeof(Vector2));
        types.Add(typeof(Vector3));
        types.Add(typeof(Quaternion));
        types.Add(typeof(GameObject));
        types.Add(typeof(UnityEngine.Object));
        types.Add(typeof(Transform));
        types.Add(typeof(RectTransform));
        types.Add(typeof(Time));
        types.Add(typeof(Debug));

        //所有DLL内的类型的真实C#类型都是ILTypeInstance
        types.Add(typeof(List<ILRuntime.Runtime.Intepreter.ILTypeInstance>));
        ILRuntime.Runtime.CLRBinding.BindingCodeGenerator.GenerateBindingCode(types, "Assets/Game/Scripts/Libs/ILRuntime/Generated");
    }

    [MenuItem("ILRuntime/Generate CLR Binding Code by Analysis")]
    static void GenerateCLRBindingByAnalysis()
    {
        Debug.Log("开始自动分析");
        //用新的分析热更dll调用引用来生成绑定代码
        //ILRuntime.Runtime.Enviorment.AppDomain domain = new ILRuntime.Runtime.Enviorment.AppDomain();
        /*
        using (System.IO.FileStream fs = new System.IO.FileStream("Assets/StreamingAssets/fishgamehall.dll", System.IO.FileMode.Open, System.IO.FileAccess.Read))
        {
            domain.LoadAssembly(fs);
        }
        using (System.IO.FileStream fs = new System.IO.FileStream("Assets/StreamingAssets/fishgamehotfix.dll", System.IO.FileMode.Open, System.IO.FileAccess.Read))
        {
            domain.LoadAssembly(fs);
        }
        using (System.IO.FileStream fs = new System.IO.FileStream("Assets/StreamingAssets/jiejigamehotfix.dll", System.IO.FileMode.Open, System.IO.FileAccess.Read))
        {
            domain.LoadAssembly(fs);
        }
        using (System.IO.FileStream fs = new System.IO.FileStream("Assets/StreamingAssets/texaspokerhotfix.dll", System.IO.FileMode.Open, System.IO.FileAccess.Read))
        {
            domain.LoadAssembly(fs);
        }
        //Crossbind Adapter is needed to generate the correct binding code
        InitILRuntime(domain);
        ILRuntime.Runtime.CLRBinding.BindingCodeGenerator.GenerateBindingCode(domain, "Assets/Game/Scripts/Libs/ILRuntime/Generated");
        */
    }

    static void InitILRuntime(ILRuntime.Runtime.Enviorment.AppDomain domain)
    {
        //这里需要注册所有热更DLL中用到的跨域继承Adapter，否则无法正确抓取引用
        domain.RegisterCrossBindingAdaptor(new MonoBehaviourAdapter());
        domain.RegisterCrossBindingAdaptor(new CoroutineAdapter());
        //domain.RegisterCrossBindingAdaptor(new InheritanceAdapter());
    }
}
#endif
