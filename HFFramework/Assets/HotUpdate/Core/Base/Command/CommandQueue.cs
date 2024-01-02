using System.Collections;
using System.Collections.Generic;
using Cysharp.Threading.Tasks;
using UnityEngine;

namespace HFFramework
{
    public enum CmdExecuteType
    {
        /// <summary>
        /// 同步 串行
        /// </summary>
        Neurowire,
        /// <summary>
        /// 异步串行
        /// </summary>
        AsynchronousSerial,
        /// <summary>
        /// 异步并行
        /// </summary>
        AsynchronousParallel,
    }

    public class CommandQueue
    {
        private const int capacity = 30;

        private Queue<Command> queue = new Queue<Command>(capacity);

        public void Enqueue(Command cmd)
        {
            queue.Enqueue(cmd);
        }

        private void ClearQueue()
        {
            while (queue.Count!=0)
            {
                queue.Dequeue().OnDestroy();
            }
            queue.Clear();
        }

        public async void Run(CmdExecuteType type)
        {
            while (queue.Count != 0)
            {
                switch (type)
                {
                    case CmdExecuteType.Neurowire:
                        queue.Dequeue().Execute();
                        break;
                    case CmdExecuteType.AsynchronousSerial:
                        await queue.Dequeue().ExecuteAsync();
                        break;
                    case CmdExecuteType.AsynchronousParallel:
                        queue.Dequeue().ExecuteAsync().Forget();
                        break;
                    default:
                        break;
                }
            }
        }
    }
}
