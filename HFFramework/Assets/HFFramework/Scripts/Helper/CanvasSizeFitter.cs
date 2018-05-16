using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
namespace HFFramework
{
    public class CanvasSizeFitter : MonoBehaviour
    {

        CanvasScaler canvasScaler;

        void Awake()
        {
            canvasScaler = GetComponent<CanvasScaler>();
        }

        void Start()
        {
            if (canvasScaler != null)
            {
                if ((Screen.width / Screen.height) > (GameSetter.Instance.ServerSceneWidth / GameSetter.Instance.ServerSceneHeight))
                {
                    canvasScaler.matchWidthOrHeight = 1f;
                }
                else
                {
                    canvasScaler.matchWidthOrHeight = 0f;
                }
            }
        }
    }
}


