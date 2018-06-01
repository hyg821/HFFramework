using UnityEngine;
using System;
using System.Collections;

namespace HotFix
{
    /// <summary>
    /// This is the base class that all cell views should derive from
    /// </summary>
    public class EnhancedScrollerCellView : BaseElement
    {
        /// <summary>
        /// The cellIdentifier is a unique string that allows the scroller
        /// to handle different types of cells in a single list. Each type
        /// of cell should have its own identifier
        /// </summary>
        public string cellIdentifier;

        /// <summary>
        /// The cell index of the cell view
        /// This will differ from the dataIndex if the list is looping
        /// </summary>
        public int cellIndex;

        /// <summary>
        /// The data index of the cell view
        /// </summary>
        public int dataIndex;

        /// <summary>
        /// Whether the cell is active or recycled
        /// </summary>
        public bool active;

        /// <summary>
        /// This method is called by the scroller when the RefreshActiveCellViews is called on the scroller
        /// You can override it to update your cell's view UID
        /// </summary>
        public virtual void RefreshCellView() { }
    }
}