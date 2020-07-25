using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    public interface IPoolObject
    {
        /// <summary>
        ///  被对象池吃掉
        /// </summary>
        void BeEat();

        /// <summary>
        ///  被对象池吐出来
        /// </summary>
        void BeVomiting();

        /// <summary>
        ///  被销毁
        /// </summary>
        void BeDestroy();
    }
}