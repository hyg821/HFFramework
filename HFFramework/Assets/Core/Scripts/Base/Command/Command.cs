using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cysharp.Threading.Tasks;
using System;

namespace HFFramework
{
    public class Command
    {
        private UniTaskCompletionSource taskCompletionSource = new UniTaskCompletionSource();

        private Func<UniTask> asyncFunction;

        private Action function;

        public Command(Func<UniTask> function)
        {
            SetFunction(function);
        }

        public Command(Action function)
        {
            this.function = function;
        }

        public void SetFunction(Func<UniTask> function)
        {
            this.asyncFunction = function;
        }

        public async virtual UniTask ExecuteAsync()
        {
            if (asyncFunction != null)
            {
                await asyncFunction();
            }
            else
            {
                await taskCompletionSource.Task;
            }
        }

        public virtual void Execute()
        {
            if (function!=null)
            {
                function();
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
            taskCompletionSource.TrySetCanceled();
            taskCompletionSource = null;
            asyncFunction = null;
            function = null;
        }
    }
}
