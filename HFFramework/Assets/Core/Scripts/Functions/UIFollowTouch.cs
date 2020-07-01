using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework.Functions
{
    public class UIFollowTouch : MonoBehaviour
    {
        public Canvas canvas;
        private RectTransform canvasRectTransform;
        private RectTransform rectTransform;
        // Use this for initialization
        void Start()
        {
            rectTransform = transform as RectTransform;
            if (canvas != null)
            {
                canvasRectTransform = canvas.transform as RectTransform;
            }
        }

        // Update is called once per frame
        void Update()
        {
            if (Input.GetKey(KeyCode.Mouse0))
            {
                Vector3 worldP;
                if (RectTransformUtility.ScreenPointToWorldPointInRectangle(canvasRectTransform, Input.mousePosition, canvas.worldCamera, out worldP))
                {
                    rectTransform.position = worldP;
                }
            }
        }
    }
}
