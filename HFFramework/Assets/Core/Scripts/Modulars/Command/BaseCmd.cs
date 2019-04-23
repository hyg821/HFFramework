using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    public abstract class BaseCmd 
    {
        public virtual void Execute()
        {

        }
        public virtual void Undo()
        {

        }

        public virtual void Update()
        {

        }

        public virtual void OnComplete()
        {

        }

        public ICmdControl Control { set; get; }
        public CmdQueue CmdQueue { set; get; }
    }
}
