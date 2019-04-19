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
        private Queue<ICmd> queue = new Queue<ICmd>(20);

        public ICmd currentCmd;

        public void Enqueue(ICmd cmd)
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
            if (queue.Count!=0)
            {
                ICmd cmd = queue.Dequeue();
                cmd.Execute();
            }
        }

        public void Clear()
        {
            queue.Clear();
        }
    }
}
