using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using EnhancedUI.EnhancedScroller;

namespace HFFramework
{
    public class LogCell : EnhancedScrollerCellView
    {
        public Text cellText;

        public void SetData(LogInfo info)
        {
            cellText.text = info.condition;
        }
    }
}

