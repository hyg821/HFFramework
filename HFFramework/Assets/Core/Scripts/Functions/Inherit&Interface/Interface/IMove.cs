using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework.Functions
{
    /// <summary>
    /// 移动接口
    /// </summary>
    public interface IMove
    {
        Vector3 Position { set; get; }
        void Walk();
        void Run();
    }
}
