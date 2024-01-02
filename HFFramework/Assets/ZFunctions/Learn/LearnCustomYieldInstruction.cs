using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework.Functions
{
    public class LearnCustomYieldInstruction : MonoBehaviour
    {
        IEnumerator  Start()
        {
            yield return StartCoroutine(Wait());
            print("我完成了");
        }

        public IEnumerator Wait()
        {
            yield return new WaitMouthDown();
        }
    }

    public class WaitMouthDown : CustomYieldInstruction
    {
        public override bool keepWaiting
        {
            get
            {
                Debug.Log("获取keepWaiting 状态");
                return !Input.GetKeyDown(KeyCode.Mouse0);
            }
        }
    }
}
