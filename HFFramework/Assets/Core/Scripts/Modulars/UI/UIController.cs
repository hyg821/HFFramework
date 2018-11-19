using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Config;

namespace HFFramework
{
    /// <summary>
    ///  对应UI的操作层
    /// </summary>
    /// <typeparam name="V"></typeparam>
    /// <typeparam name="M"></typeparam>
    public class UIController : UIBase 
    {
        private UI config;
        public UI Config
        {
            set
            {
                config = value;
                SetParent(UIManager.Instance.GetCanvas(config.LayerIndex), false);
            }
            get
            {
                return config;
            }
        }

        public override void OnAwake()
        {
            base.OnAwake();
        }

        public virtual void DoShowAnimation(Action callback)
        {

        }

        public virtual void DoHideAnimation(Action callback)
        {

        }

        public virtual void Open(Action callback)
        {
            IsShow = true;
            DoShowAnimation(callback);
        }

        public virtual void Close(Action callback)
        {
            DoHideAnimation(callback);
            IsShow = false;
        }

        public virtual void Refresh(string tag,object value)
        {

        }

        public override void Destroy()
        {
            base.Destroy();
            Destroy(gameObject);
        }

    }
}