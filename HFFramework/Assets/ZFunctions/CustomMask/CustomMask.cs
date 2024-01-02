using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CustomMask : MonoBehaviour
{
    public RectTransform keyPoint;

    public Vector3[] corner;

    public Vector3[] canvasCorner;

    public Material mat;
    
    public Vector4 rect;
    
    public RectTransform canvasTransform;

    private void Awake()
    {
        corner  = new Vector3[4];
        canvasCorner = new Vector3[4];
    }

    void Update()
    {
        canvasTransform.GetWorldCorners(canvasCorner);
        keyPoint.GetWorldCorners(corner);

        float height = (canvasCorner[1].y - canvasCorner[0].y) / 2;
        float width = (canvasCorner[2].x - canvasCorner[1].x) / 2;

        Vector3 v = new Vector3(width, height, 0);
        
        Vector3 左下 = corner[0] + v;
        Vector3 左上 = corner[1] + v;
        Vector3 右上 = corner[2] + v;
        Vector3 右下 = corner[3] + v;
        
        float f = 1/canvasTransform.localScale.x;
        
        float x = 左下.x*f;
        float y = 左下.y*f;
        float z = 右上.x*f;
        float w = 右上.y*f;

        rect = new Vector4(x, y, z, w);
        mat.SetVector("_Rect",rect);
       
    }
}
