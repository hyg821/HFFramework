using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

namespace HFFramework.Functions
{
    public class LearnAttributes : MonoBehaviour
    {
        private void Awake()
        {
            foreach (Type type in typeof(Game).Assembly.GetTypes())
            {
                object[] attrs = type.GetCustomAttributes(typeof(TestAttribute), false);
                foreach (object attr in attrs)
                {
                    HFLog.C(attr.GetType());
                    XXX x = (XXX)Activator.CreateInstance(type);
                    x.Test();
                }
            }
        }
    }

    [AttributeUsage(AttributeTargets.Class, AllowMultiple = true)]
    public class BaseAttribute : Attribute
    {
        public Type AttributeType { get; }

        public BaseAttribute()
        {
            this.AttributeType = this.GetType();
        }
    }

    public class TestAttribute : BaseAttribute
    {
        public string type;

        public TestAttribute(string type)
        {
            this.type = type;
        }
    }

    public interface XXX
    {
        void Test();
    }

    [TestAttribute("AAA")]
    public class AAA : XXX
    {
        public void Test()
        {
            HFLog.C(this.GetType().Name);
        }
    }

    [TestAttribute("BBB")]
    public class BBB: XXX
    {
        public void Test()
        {
            HFLog.C(this.GetType().Name);
        }
    }

    [TestAttribute("CCC")]
    public class CCC: XXX
    {
        public void Test()
        {
            HFLog.C(this.GetType().Name);
        }
    }
}
