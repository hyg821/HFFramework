using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using HFFramework;

namespace HotFix
{
    public class HotFixHelper
    {
        public static object ReflectCreate(string nameSpace,string className)
        {
            Type t = Type.GetType(nameSpace+ "." + className);
            object obj = Activator.CreateInstance(t);
            return obj;
        }
    }
}
