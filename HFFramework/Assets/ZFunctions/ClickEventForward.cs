using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

namespace HFFramework.Functions
{
    /// <summary>
    ///  这个类 的主要作用是 点击事件转发 可以做点击事件渗透 比如一个按钮挡住了别的按钮
    ///   这个类变换之后 就可以实现 所有的事件转发 比如 scrollview 滑动嵌套 的转发 
    /// </summary>
    public class ClickEventForward : MonoBehaviour, IMoveHandler, IPointerDownHandler, IPointerUpHandler, IPointerEnterHandler, IPointerExitHandler, ISelectHandler, IDeselectHandler, IEventSystemHandler, IPointerClickHandler, ISubmitHandler
    {
        public GameObject forwardTarget;

        public void OnDeselect(BaseEventData eventData)
        {
            PassEvent(eventData, ExecuteEvents.deselectHandler);
        }

        public void OnMove(AxisEventData eventData)
        {
            PassEvent(eventData, ExecuteEvents.moveHandler);
        }

        public void OnPointerClick(PointerEventData eventData)
        {
            PassEvent(eventData, ExecuteEvents.pointerClickHandler);
        }

        public void OnPointerDown(PointerEventData eventData)
        {
            PassEvent(eventData, ExecuteEvents.pointerDownHandler);
        }

        public void OnPointerEnter(PointerEventData eventData)
        {
            PassEvent(eventData, ExecuteEvents.pointerEnterHandler);
        }

        public void OnPointerExit(PointerEventData eventData)
        {
            PassEvent(eventData, ExecuteEvents.pointerExitHandler);
        }

        public void OnPointerUp(PointerEventData eventData)
        {
            PassEvent(eventData, ExecuteEvents.pointerUpHandler);
        }

        public void OnSelect(BaseEventData eventData)
        {
            PassEvent(eventData, ExecuteEvents.selectHandler);
        }

        public void OnSubmit(BaseEventData eventData)
        {
            PassEvent(eventData, ExecuteEvents.submitHandler);
        }

        public void PassEvent<T>(BaseEventData data, ExecuteEvents.EventFunction<T> function)where T : IEventSystemHandler
        {
            ExecuteEvents.Execute(forwardTarget, data, function);
        }
    }
}