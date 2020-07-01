using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace HFFramework.Functions
{
    [ExecuteInEditMode]
    public class SlicedProgress : MonoBehaviour
    {
        [Range(0, 1)]
        public float progress;

        public float width;
        private Image image;
        private RectTransform rectTransform;

        private void Awake()
        {
            image = GetComponent<Image>();
            rectTransform = transform as RectTransform;
            image.type = Image.Type.Sliced;
            GetWidth();
        }

        public void GetWidth()
        {
            if (image!=null)
            {
                width = image.rectTransform.rect.width;
            }
        }

        public void SetProgress(float progress)
        {
            this.progress = progress;
            Refresh();
        }

        public void Refresh()
        {
            rectTransform.sizeDelta = new Vector2(width * progress, rectTransform.sizeDelta.y);
        }

#if UNITY_EDITOR
        public void OnEnable()
        {
            if (!Application.isPlaying)
            {
                GetWidth();
            }
        }

        void Update()
        {
            Refresh();
        }
#endif
    }
}


