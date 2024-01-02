using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    public interface IDataPropertyObserver
    {
        bool IsDisposed { get; }
    }
}