using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using EnhancedUI;
using EnhancedUI.EnhancedScroller;

namespace HFFramework
{
    public struct LogInfo
    {
        public string condition;
        public string stackTrace;
        public LogType type;
        public float height;
    }

    public class LogView : MonoBehaviour, IEnhancedScrollerDelegate
    {
        private SmallList<LogInfo> logInfos = new SmallList<LogInfo>();

        /// <summary>
        /// This is our scroller we will be a delegate for
        /// </summary>
        public EnhancedScroller scroller;

        public EnhancedScrollerCellView cellPrefab;

        private TextGenerator cacheTextGenerator;

        private TextGenerationSettings textGenerationSettings;

        private void Awake()
        {
            GameObject prefab = ResourceManager.Instance.GetAsset<GameObject>("ui_prefab", "LogCell");
            cellPrefab = prefab.GetComponent<EnhancedScrollerCellView>();
            Text text = prefab.transform.Find("Text").GetComponent<Text>();
            textGenerationSettings = text.GetGenerationSettings(new Vector2(700,0));
            cacheTextGenerator = text.cachedTextGenerator;
            scroller = GetComponent<EnhancedScroller>();
            scroller.Delegate = this;
        }

        public void SetData(string condition, string stackTrace, LogType type)
        {
            if (logInfos.Count>300)
            {
                logInfos.Clear();
            }

            logInfos.Add(new LogInfo
            {
                condition = condition,
                stackTrace = stackTrace,
                type = type,
                height = -1
            });
            scroller.ReloadData(1);
        }

        public int GetNumberOfCells(EnhancedScroller scroller)
        {
            // in this example, we just pass the number of our data elements
            return logInfos.Count;
        }

        /// <summary>
        /// This tells the scroller what the size of a given cell will be. Cells can be any size and do not have
        /// to be uniform. For vertical scrollers the cell size will be the height. For horizontal scrollers the
        /// cell size will be the width.
        /// </summary>
        /// <param name="scroller">The scroller requesting the cell size</param>
        /// <param name="dataIndex">The index of the data that the scroller is requesting</param>
        /// <returns>The size of the cell</returns>
        public float GetCellViewSize(EnhancedScroller scroller, int dataIndex)
        {
            LogInfo info = logInfos[dataIndex];
            if (info.height==-1)
            {
                info.height = cacheTextGenerator.GetPreferredHeight(logInfos[dataIndex].condition, textGenerationSettings);
            }
            return info.height;
        }

        /// <summary>
        /// Gets the cell to be displayed. You can have numerous cell types, allowing variety in your list.
        /// Some examples of this would be headers, footers, and other grouping cells.
        /// </summary>
        /// <param name="scroller">The scroller requesting the cell</param>
        /// <param name="dataIndex">The index of the data that the scroller is requesting</param>
        /// <param name="cellIndex">The index of the list. This will likely be different from the dataIndex if the scroller is looping</param>
        /// <returns>The cell for the scroller to use</returns>
        public EnhancedScrollerCellView GetCellView(EnhancedScroller scroller, int dataIndex, int cellIndex)
        {
            // first, we get a cell from the scroller by passing a prefab.
            // if the scroller finds one it can recycle it will do so, otherwise
            // it will create a new cell.
            LogCell cellView = scroller.GetCellView(cellPrefab) as LogCell;

            // in this example, we just pass the data to our cell's view which will update its UI
            cellView.SetData(logInfos[dataIndex],cellIndex);

            // return the cell to the scroller
            return cellView;
        }


    }
}
