using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
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

        public async void Run()
        {
            while (queue.Count != 0)
            {
                await queue.Dequeue().Execute();
            }
        }
    }
}
