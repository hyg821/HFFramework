using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ParticleSystemHelper : MonoBehaviour {

    public bool IsLoop=false;

    public bool IsFree;

    public Action<GameObject> finishCallback;

    private ParticleSystem[] particleSystems;

    private Renderer[] renderers;

    private bool isNeedCheckFinish;

    private bool allStopped;

    void Awake()
    {
        particleSystems = GetComponentsInChildren<ParticleSystem>();
        renderers = GetComponentsInChildren<Renderer>();
    }

    void OnEnable()
    {
        IsFree = false;
        if (IsLoop==false)
        {
            StartCoroutine(CheckFinish());
        }
    }

    void OnDisable()
    {
        IsFree = true;
    }

    public void SetOrderInLayer(int i)
    {
        foreach (var item in renderers)
        {
            i++;
            item.sortingOrder = i;
        }
    }

    IEnumerator CheckFinish()
    {
        isNeedCheckFinish = true;
        while (true)
        {
            yield return null;
            allStopped = true;
            if (isNeedCheckFinish == true)
            {           
                foreach (ParticleSystem ps in particleSystems)
                {
                    allStopped &= ps.isStopped;
                }
                if (allStopped == true)
                {
                    isNeedCheckFinish = false;
                    if (finishCallback != null)
                    {
                        finishCallback(gameObject);
                        yield break;
                    }
                }
            }
        }
    }

}
