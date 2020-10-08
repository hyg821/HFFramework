using System;
using System.Collections;
using System.Collections.Generic;
using UniRx.Async;
using UnityEngine;

namespace HFFramework
{
    public class InstantiateTask
    {
        public GameObject prefab;

        public UniTaskCompletionSource<GameObject> completion;

        public Action<GameObject> callback;

        public InstantiateTask(GameObject prefab, UniTaskCompletionSource<GameObject> completion, Action<GameObject> callback)
        {
            this.prefab = prefab;
            this.completion = completion;
            this.callback = callback;
        }
    }
}
