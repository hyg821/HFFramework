using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniRx.Async;

public class aaa : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        qqq();
    }

    public async UniTaskVoid qqq()
    {
        await www();
        await eee();
    }

    public async UniTaskVoid www()
    {
        await UniTask.Delay(2000);
        print("www");
    }
    public async UniTaskVoid eee()
    {
        await UniTask.Delay(1000);
        print("eee");
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
