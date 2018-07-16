using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

namespace HFFramework
{
    /// <summary>
    ///  这个类 的主要作用是 点击事件转发 可以做点击事件渗透 比如一个按钮挡住了别的按钮
    ///   这个类变换之后 就可以实现 所有的事件转发 比如 scrollview 滑动嵌套 的转发 
    /// </summary>
    public class ClickEventForward : MonoBehaviour,IPointerClickHandler, ISubmitHandler, IEventSystemHandler
    {
        public GameObject forwardTarget;

        //监听点击
        public void OnPointerClick(PointerEventData eventData)
        {
            PassEvent(eventData, ExecuteEvents.pointerClickHandler);
        }

        public void OnSubmit(BaseEventData eventData)
        {
            PassEvent(eventData, ExecuteEvents.pointerClickHandler);
        }

        //把事件透下去
        public void PassEvent<T>(BaseEventData data, ExecuteEvents.EventFunction<T> function)where T : IEventSystemHandler
        {
            ExecuteEvents.Execute(forwardTarget, data, function);
        }
    }

}