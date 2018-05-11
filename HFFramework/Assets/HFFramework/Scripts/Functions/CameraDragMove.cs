using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{

    public enum DragType
    {
        NoTouch,
        Down,
        Up
    }

    public class CameraDragMove : BaseMonoBehaviour
    {
        private const int rate = 1600;
        public DragType dragType;

        private Vector2 startTouchPosition;
        private Vector2 endTouchPosition;
        private Vector2 deltaPosition;

        private float startTime;
        private float endTime;
        private float deltaTime;

        public int decelerationFrameCount;
        public float errorValue;
        public float maxSpeed;
        public bool isBeginUp = false;
        public Vector2 speed;


        private void Start()
        {
            errorValue = 0.002f;
            maxSpeed = 1f;
            decelerationFrameCount = 15;
        }

        private void Update()
        {
            bool isDown = Input.GetKey(KeyCode.Mouse0);
            bool isUp = Input.GetKeyUp(KeyCode.Mouse0);

            if (isDown==false&&isDown==false)
            {
                dragType = DragType.NoTouch;
            }

            if (isDown==true && isUp==false)
            {
                dragType = DragType.Down;
            }

            if (isUp==true)
            {
                dragType = DragType.Up;
            }

            switch (dragType)
            {
                case DragType.NoTouch:
                    break;
                case DragType.Down:
                    Down();
                    break;
                case DragType.Up:
                    Up();
                    break;
                default:
                    break;
            }
        }

        public void Down()
        {
            if (isBeginUp == false)
            {
                deltaPosition = Vector2.zero;
                startTouchPosition = Input.mousePosition;
                startTime = Time.realtimeSinceStartup;
                isBeginUp = true;
            }
            else
            {
                endTouchPosition = Input.mousePosition;
                endTime = Time.realtimeSinceStartup;
                deltaPosition = endTouchPosition - startTouchPosition;
                deltaTime = endTime - startTime;
                speed = deltaPosition / deltaTime / rate;

                startTime = endTime;
                startTouchPosition = endTouchPosition;
            }
        }

        public void Up()
        {
            endTouchPosition = Input.mousePosition;
            endTime = Time.realtimeSinceStartup;
            deltaPosition = endTouchPosition - startTouchPosition;
            deltaTime = endTime - startTime;
            speed = deltaPosition / deltaTime / rate;
            isBeginUp = false;
        }

        private void LateUpdate()
        {
            if (speed!=Vector2.zero)
            {
                if (speed.x > maxSpeed)
                {
                    speed.x = maxSpeed;
                }
                if (speed.x < -maxSpeed)
                {
                    speed.x = -maxSpeed;
                }

                if (speed.y > maxSpeed)
                {
                    speed.y = maxSpeed;
                }
                if (speed.y < -maxSpeed)
                {
                    speed.y = -maxSpeed;
                }

                speed -= (speed / decelerationFrameCount);

                float x = speed.x;
                float y = speed.y;

                if ((x < errorValue && x > 0) || (x > -errorValue && x < 0))
                {
                    x = 0;
                }

                if ((y < errorValue && y > 0) || (y > -errorValue && y < 0))
                {
                    y = 0;
                }

                speed = new Vector2(x, y);
                Vector3 temp = speed;
                myTransform.position -= temp;
            }
        }
    }
}

