using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using Cysharp.Threading.Tasks;

namespace HFFramework
{
    /// <summary>
    ///  局部更新任务（适用于 短时间用update 更新的任务）
    /// </summary>
    public class LambdaUpdateTask<T> : Entity
    {
        private Action<LambdaUpdateTask<T>,T> update;

        private UniTaskCompletionSource taskCompletionSource;

        private T args;
        
        public override void Awake()
        {
            base.Awake();
            IsNeedUpdate = true;
        }

        public async virtual UniTask Wait(Action<LambdaUpdateTask<T>, T> update, UniTaskCompletionSource taskCompletionSource,T args)
        {
            this.update = update;
            this.taskCompletionSource = taskCompletionSource;
            this.args = args;
            await taskCompletionSource.Task;
        }

        public void CompleteTask()
        {
            if (taskCompletionSource!=null)
            {
                taskCompletionSource.TrySetResult();
                Destroy();
            }
        }

        public void CancelTask()
        {
            if (taskCompletionSource != null)
            {
                taskCompletionSource.TrySetCanceled();
                Destroy();
            }
        }

        public override void OnUpdate(float deltaTime)
        {
            base.OnUpdate(deltaTime);
            if (update != null)
            {
                update(this, args);
            }
        }
    }
}
