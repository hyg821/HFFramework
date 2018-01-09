using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace HotFix
{
    public class BaseTabBarItem:ElementBase
    {
        Action<int, bool> tabBarItemCallback;

        public int index;

        public Button button;

        public bool isOn;

        public Image disSelectImage;
        public Image selectImage;
        public Image selectTextImage;

        public override void Awake()
        {
            base.Awake();
            LoadResources();
            FindElement();
        }

        public override void LoadResources()
        {
            base.LoadResources();
        }

        public override void FindElement()
        {
            base.FindElement();
            InitButton();
        }

        public void InitButton()
        {
            if (button != null)
            {
                button.onClick.AddListener(delegate()
                {
                    tabBarItemCallback(index, isOn);
                });
            }
        }

        public void Init(int index, Action<int, bool> tabBarItemCallback)
        {
            this.index = index;
            this.tabBarItemCallback = tabBarItemCallback;
            if (this.index == 0)
            {
                Open();
            }
            else
            {
                Close();
            }
        }

        public virtual void Open()
        {
            if (isOn==false)
            {
                isOn = true;
                disSelectImage.enabled = !isOn;
                selectImage.enabled = isOn;
            }
        }

        public virtual void Close()
        {
            isOn = false;
            disSelectImage.enabled = !isOn;
            selectImage.enabled = isOn;
        }

    }
}
