using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    public enum TouchState
    {
        Unkonw,
        TouchDown,
        TouchClick,
        TouchUp,
        TouchDrag,
        TouchScale
    }

    /// <summary>
    /// 游戏设置控制器
    /// </summary>
    public class InputManager : MonoBehaviour, IManager
    {
        public static InputManager Instance;

        public TouchState touchState = TouchState.Unkonw;

        public int touchFrame = 0;

        public bool IsDownUI
        {
            get
            {
                if (Application.isEditor)
                {
                    return UnityEngine.EventSystems.EventSystem.current.IsPointerOverGameObject();
                }
                else
                {
                    Touch touch = Input.GetTouch(0);
                    return UnityEngine.EventSystems.EventSystem.current.IsPointerOverGameObject(touch.fingerId);
                }
            }
        }

        void Awake()
        {
            Instance = this;
        }

        private void Update()
        {
            if (Application.isEditor)
            {
                TouchEditor();
            }
            else
            {
                TouchMobile();
            }
        }

        public void TouchFrame()
        {
            if (touchState == TouchState.TouchDown || touchState == TouchState.TouchDrag || touchState == TouchState.TouchUp)
            {
                touchFrame++;
            }
            else
            {
                touchFrame = 0;
            }
        }

        public void TouchEditor()
        {
            if (Input.GetKeyDown(KeyCode.Mouse0))
            {
                TouchDown();
                return;
            }

            if (Input.GetKeyUp(KeyCode.Mouse0))
            {
                TouchUp();
                return;
            }

            if (Input.GetKey(KeyCode.Mouse0))
            {
                TouchDrag();
                return;
            }

            float scale = Input.GetAxis("Mouse ScrollWheel");
            if (scale != 0)
            {
                TouchScale();
                return;
            }
        }

        public void TouchMobile()
        {
            if (Input.touchCount == 1)
            {
                Touch touch = Input.GetTouch(0);
                switch (touch.phase)
                {
                    case TouchPhase.Began:
                        TouchDown();
                        break;
                    case TouchPhase.Moved:
                        TouchDrag();
                        break;
                    case TouchPhase.Stationary:
                        break;
                    case TouchPhase.Ended:
                        TouchUp();
                        break;
                    case TouchPhase.Canceled:
                        TouchUp();
                        break;
                    default:
                        break;
                }
            }
            else if (Input.touchCount > 1)
            {
                Touch touch0 = Input.GetTouch(0);
                Touch touch1 = Input.GetTouch(1);

                Vector2 touchZeroPrevPos = touch0.position - touch0.deltaPosition;
                Vector2 touchOnePrevPos = touch1.position - touch1.deltaPosition;

                float prevTouchDeltaMag = (touchZeroPrevPos - touchOnePrevPos).magnitude;
                float touchDeltaMag = (touch0.position - touch1.position).magnitude;

                float deltaMagnitudeDiff = prevTouchDeltaMag - touchDeltaMag;

                if (deltaMagnitudeDiff != 0)
                {
                    TouchScale();
                }
            }
        }

        public void TouchDown()
        {
            touchState = TouchState.TouchDown;
        }

        public void TouchUp()
        {
            //&& Vector2.Distance(nowPosition, startPosition) < 50
            if (touchFrame >= 2 && touchFrame <= 11)
            {
                TouchClick();
            }
        }

        public void TouchClick()
        {
            touchState = TouchState.TouchClick;
        }

        /// <summary>
        /// 拖拽事件
        /// </summary>
        /// <param name="list"></param>
        public void TouchDrag()
        {
            touchState = TouchState.TouchDrag;
        }

        /// <summary>
        /// 缩放
        /// </summary>
        /// <param name="list"></param>
        public void TouchScale()
        {
            touchState = TouchState.TouchScale;
        }

        public void Shutdown()
        {
            Instance = null;
        }
    }
}



