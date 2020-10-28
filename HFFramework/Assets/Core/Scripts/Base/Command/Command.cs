using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniRx.Async;
using System;

namespace HFFramework
{
    public class Command
    {
        private UniTaskCompletionSource taskCompletionSource = new UniTaskCompletionSource();

        private Func<UniTask> function;

        public Command(Func<UniTask> function)
        {
            SetFunction(function);
        }

        public void SetFunction(Func<UniTask> function)
        {
            this.function = function;
        }

        public async virtual UniTask Execute()
        {
            if (function!=null)
            {
                await function();
            }
            else
            {
                await taskCompletionSource.Task;
            }
        }

        protected virtual void ExecuteCompleted()
        {
            taskCompletionSource.TrySetResult();
        }

        public virtual void UnExecute()
        {

        }

        public void OnDestroy()
        {
            taskCompletionSource = null;
            function = null;
        }
    }
}
