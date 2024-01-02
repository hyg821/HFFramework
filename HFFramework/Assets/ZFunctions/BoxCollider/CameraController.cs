using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

namespace HFFramework.Functions
{
    public enum CameraState
    {
        Unkown = -1,
        View0,
        View1,
        View2,
        View3,
    }

    public class CameraController : MonoBehaviour
    {
        private CameraState state = CameraState.Unkown;

        public List<ViewConfig> configList = new List<ViewConfig>();

        public ViewConfig view;

        /// <summary>
        ///  拖动比例
        /// </summary>
        public float ratio = 0.1f;

        /// <summary>
        ///  点击位置
        /// </summary>
        public Vector2 startPosition;

        /// <summary>
        ///  上一次位置
        /// </summary>
        public Vector2 lastPosition;

        /// <summary>
        ///  当前位置
        /// </summary>
        public Vector2 nowPosition;

        /// <summary>
        ///  当前滑行速度
        /// </summary>
        public Vector3 currentVelocity;

        /// <summary>
        ///  滑行距离
        /// </summary>
        public Vector3 dir;

        /// <summary>
        /// 滑动时间
        /// </summary>
        public float dirTime = 0.1f;

        /// <summary>
        ///  滑行目标点位置
        /// </summary>
        public Vector3 targetPosition;

        /// <summary>
        ///  按压帧数
        /// </summary>
        public int frame = 0;

        /// <summary>
        ///  滑行限制帧数
        /// </summary>
        public int count = 10;

        /// <summary>
        ///  程序过度动画
        /// </summary>
        public bool autoControl = false;

        // Use this for initialization
        void Start()
        {
            SetState(CameraState.View0);
        }

        public void SetState(CameraState state)
        {
            if (this.state != state)
            {
                this.state = state;
                OnCommon();
            }
        }

        public void OnCommon()
        {
            view = configList[(int)state];
            transform.DOLocalRotate(new Vector3(view.xRoation, 0, 0), 0.6f);
            transform.DOMove(view.startPosition.transform.position, 0.6f);
            targetPosition = view.startPosition.transform.position;
            DOVirtual.DelayedCall(1.1f, delegate ()
            {
                autoControl = false;
            });
        }

        public void Scale(float scale)
        {
            if (scale > 0)
            {
                if ((int)state < configList.Count - 1)
                {
                    autoControl = true;
                    SetState((CameraState)((int)state + 1));
                }
            }
            else
            {
                if ((int)state > 0)
                {
                    autoControl = true;
                    SetState((CameraState)((int)state - 1));
                }
            }
        }

        void Update()
        {
            if (autoControl == false)
            {
                float scale = Input.GetAxis("Mouse ScrollWheel");
                if (scale != 0)
                {
                    Revert();
                    Scale(scale);
                }
            }

            if (autoControl == true)
            {
                return;
            }

            if (Input.GetKeyDown(KeyCode.Mouse0))
            {
                Revert();
            }
            else if (Input.GetKey(KeyCode.Mouse0))
            {
                nowPosition = Input.mousePosition;
                if (lastPosition != Vector2.zero)
                {
                    Vector2 delta = nowPosition - lastPosition;
                    Vector3 target = transform.position + (new Vector3(delta.x, 0, delta.y) * ratio);
                    transform.position = view.box.Clamp(target);
                }
                lastPosition = nowPosition;
                frame++;
            }
            else if (Input.GetKeyUp(KeyCode.Mouse0))
            {
                nowPosition = Input.mousePosition;
                Vector2 temp = nowPosition - startPosition;
                dir = new Vector3(temp.x, 0, temp.y) / frame * dirTime;
                targetPosition = transform.position + dir;
                targetPosition = view.box.Clamp(targetPosition);
            }
            else
            {
                if (frame < count && targetPosition != Vector3.zero)
                {
                    transform.position = Vector3.SmoothDamp(transform.position, targetPosition, ref currentVelocity, dirTime, 100);
                }
            }
        }

        public void Revert()
        {
            frame = 0;
            lastPosition = Vector2.zero;
            nowPosition = Vector2.zero;
            startPosition = Input.mousePosition;
            currentVelocity = Vector3.zero;
        }

    }

}