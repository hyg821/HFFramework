using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace HFFramework
{
    public class HFScrollView : ScrollRect
    {
        [Tooltip("是否 只能同一时间 横向或者纵向 滑动")]
        public bool isOnlyHorizontalOrVertical = true;

        private Vector2 lastPostion;

        protected override void Start()
        {
            base.Start();
            if (isOnlyHorizontalOrVertical)
            {
                onValueChanged.AddListener(ValueChange);
            }
        }

        public override void OnBeginDrag(PointerEventData eventData)
        {
            base.OnBeginDrag(eventData);
            if (isOnlyHorizontalOrVertical)
            {
                Init();
                lastPostion = normalizedPosition;
            }
        }

        public override void OnEndDrag(PointerEventData eventData)
        {
            base.OnEndDrag(eventData);
            if (isOnlyHorizontalOrVertical)
            {
                Init();
            }
        }

        public void Init()
        {
            horizontal = true;
            vertical = true;
        }

        public void ValueChange(Vector2 position)
        {
            float x = Mathf.Abs(position.x - lastPostion.x);
            float y = Mathf.Abs(position.y - lastPostion.y);

            if (x / y > 1)
            {
                horizontal = true;
                vertical = false;
            }
            else if (x / y < 1)
            {
                horizontal = false;
                vertical = true;
            }
            else
            {
                horizontal = true;
                vertical = true;
            }

            lastPostion = position;
        }
    }

}
