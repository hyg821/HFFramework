using System;
using UnityEngine.UI;
using UnityEngine;
using System.Collections.Generic;
using System.Collections;

namespace HFFramework
{
    public class HFButton : Button
    {

        /// <summary>
        ///  区别button的标记
        /// </summary>
        public string myTag;

        private Action<string> callback;

        private int daly;

        private WaitForSeconds wait;

        private bool isCanOnClick = true;

        protected override void Awake()
        {
            base.Awake();
            onClick.AddListener(OnClick);
        }

        private void OnClick()
        {
            if (callback != null)
            {
                if (daly == 0)
                {
                    if (callback != null)
                    {
                        callback(myTag);
                    }
                }
                else
                {
                    if (isCanOnClick == true)
                    {
                        StartCoroutine(DalyOnClick());
                    }
                }
            }
        }

        IEnumerator DalyOnClick()
        {
            isCanOnClick = false;
            if (callback != null)
            {
                callback(myTag);
            }
            yield return wait;
            isCanOnClick = true;
        }

        public void InitWithTagCallback(int daly, string myTag, Action<string> callback)
        {
            this.myTag = myTag;
            this.callback = callback;
            this.daly = daly;
            if (daly != 0)
            {
                wait = new WaitForSeconds(daly);
            }
        }
    }
}
