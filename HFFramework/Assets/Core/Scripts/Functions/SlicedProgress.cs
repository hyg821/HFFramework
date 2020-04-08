using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace HFFramework
{
    /// <summary>
    ///  适用于 九宫图片进图条
    /// </summary>
    [ExecuteInEditMode]
    public class SlicedProgress : MonoBehaviour
    {
        [Range(0, 1)]
        public float progress;

        public float width;
        private Image image;
        private RectTransform rectTransform;
        private void Start()
        {
            image = GetComponent<Image>();
            image.type = Image.Type.Sliced;
            GetWidth();
            rectTransform = transform as RectTransform;
        }

        public void GetWidth()
        {
            width = image.rectTransform.rect.width;
        }

        public void OnEnable()
        {
            GetWidth();
        }

        void Update()
        {
            rectTransform.sizeDelta = new Vector2(width * progress, rectTransform.sizeDelta.y);
        }
    }
}


