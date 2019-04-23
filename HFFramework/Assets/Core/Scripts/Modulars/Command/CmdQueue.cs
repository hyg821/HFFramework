using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    /// <summary>
    ///  命令队列 默认 执行完一个再执行下一个
    /// </summary>
    public class CmdQueue
    {
        private Queue<BaseCmd> queue = new Queue<BaseCmd>(20);

        public BaseCmd currentCmd;

        public void Enqueue(BaseCmd cmd)
        {
            cmd.CmdQueue = this;
            queue.Enqueue(cmd);
        }

        public void Start()
        {
            if (currentCmd == null)
            {
                MoveNext();
            }
        }

        public void MoveNext()
        {
            if (queue.Count != 0)
            {
                BaseCmd cmd = queue.Dequeue();
                currentCmd = cmd;
                cmd.Execute();
            }
            else
            {
                currentCmd = null;
            }
        }

        public void Update()
        {
            if (currentCmd!=null)
            {
                currentCmd.Update();
            }
        }

        public void Clear()
        {
            currentCmd = null;
            queue.Clear();
        }
    }
}
