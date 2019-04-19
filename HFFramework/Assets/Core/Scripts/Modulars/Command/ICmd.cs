using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    public interface ICmd 
    {
        void Init(ICmdControl control);
        void Execute();
        void Undo();
        void OnComplete();
        ICmdControl Control { set; get; }
        CmdQueue CmdQueue { set; get; }
    }
}
