using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

namespace HFFramework
{
    [CreateAssetMenu(menuName = "HFFramework/创建一个测试的 配置文件 ScriptableObjectTestA ")]
    public class ScriptableObjectTestA : ScriptableObject
    {
        public string peopleName;
        public int peopleAge;
        public List<Address> address;
        public Sprite peopleImage;
    }

    [Serializable]
    public class Address
    {
        public string country;
        public string city;
    }
}
