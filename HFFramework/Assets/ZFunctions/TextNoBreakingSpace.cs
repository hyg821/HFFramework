using UnityEngine.UI;
using UnityEngine;

namespace HFFramework.Functions
{
    /// <summary>
    ///  Text 有的时候会出现 空格换行的情况  因为默认空格输入 是换行空格  动态替换成不能换行的空格就行了
    /// </summary>
    [RequireComponent(typeof(Text))]
    public class TextNoBreakingSpace : MonoBehaviour
    {
        public static readonly string no_breaking_space = "\u00A0";

        protected Text text;
        // Use this for initialization
        void Awake()
        {
            text = this.GetComponent<Text>();
            text.RegisterDirtyVerticesCallback(OnTextChange);
        }

        public void OnTextChange()
        {
            if (text.text.Contains(" "))
            {
                text.text = text.text.Replace(" ", no_breaking_space);
            }
        }

    }
}