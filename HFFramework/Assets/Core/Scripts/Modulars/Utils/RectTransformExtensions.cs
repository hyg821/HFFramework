using UnityEngine;

public static class RectTransformExtensions
{
    //Move Sides
    public static void SetLeft(this RectTransform rt, float left)
    {
        rt.offsetMin = new Vector2(left, rt.offsetMin.y);
    }
    public static void SetRight(this RectTransform rt, float right)
    {
        rt.offsetMax = new Vector2(-right, rt.offsetMax.y);
    }
    public static void SetTop(this RectTransform rt, float top)
    {
        rt.offsetMax = new Vector2(rt.offsetMax.x, -top);
    }
    public static void SetBottom(this RectTransform rt, float bottom)
    {
        rt.offsetMin = new Vector2(rt.offsetMin.x, bottom);
    }

    //Move Corners
    public static void SetTopLeft(this RectTransform rt, float top, float left)
    {
        rt.offsetMin = new Vector2(left, rt.offsetMin.y);
        rt.offsetMax = new Vector2(rt.offsetMax.x, top);
    }

    public static void SetTopRight(this RectTransform rt, float top, float right)
    {
        rt.offsetMax = new Vector2(right, top);
    }

    public static void SetBottomLeft(this RectTransform rt, float bottom, float left)
    {
        rt.offsetMin = new Vector2(left, bottom);
    }

    public static void SetBottomRight(this RectTransform rt, float bottom, float right)
    {
        rt.offsetMin = new Vector2(rt.offsetMin.x, bottom);
        rt.offsetMax = new Vector2(right, rt.offsetMax.y);
    }

    //Anchor to Sides
    public static void SetAnchorTop(this RectTransform rt, bool positionAtAnchor = false)
    {
        rt.anchorMin = new Vector2(0.5f, 1f);
        rt.anchorMax = new Vector2(0.5f, 1f);
        if (positionAtAnchor)
        {
            rt.anchoredPosition = Vector2.zero;
        }
    }

    public static void SetAnchorBottom(this RectTransform rt, bool positionAtAnchor = false)
    {
        rt.anchorMin = new Vector2(0.5f, 0f);
        rt.anchorMax = new Vector2(0.5f, 0f);
        if (positionAtAnchor)
        {
            rt.anchoredPosition = Vector2.zero;
        }
    }

    public static void SetAnchorLeft(this RectTransform rt, bool positionAtAnchor = false)
    {
        rt.anchorMin = new Vector2(0f, 0.5f);
        rt.anchorMax = new Vector2(0f, 0.5f);
        if (positionAtAnchor)
        {
            rt.anchoredPosition = Vector2.zero;
        }
    }

    public static void SetAnchorRight(this RectTransform rt, bool positionAtAnchor = false)
    {
        rt.anchorMin = new Vector2(1f, 0.5f);
        rt.anchorMax = new Vector2(1f, 0.5f);
        if (positionAtAnchor)
        {
            rt.anchoredPosition = Vector2.zero;
        }
    }

    //Anchor to Corners
    public static void SetAnchorTopLeft(this RectTransform rt, bool positionAtAnchor = false)
    {
        rt.anchorMin = new Vector2(0f, 1f);
        rt.anchorMax = new Vector2(0f, 1f);
        if (positionAtAnchor)
        {
            rt.anchoredPosition = Vector2.zero;
        }
    }

    public static void SetAnchorTopRight(this RectTransform rt, bool positionAtAnchor = false)
    {
        rt.anchorMin = new Vector2(1f, 1f);
        rt.anchorMax = new Vector2(1f, 1f);
        if (positionAtAnchor)
        {
            rt.anchoredPosition = Vector2.zero;
        }
    }

    public static void SetAnchorBottomLeft(this RectTransform rt, bool positionAtAnchor = false)
    {
        rt.anchorMin = new Vector2(0f, 0f);
        rt.anchorMax = new Vector2(0f, 0f);
        if (positionAtAnchor)
        {
            rt.anchoredPosition = Vector2.zero;
        }
    }

    public static void SetAnchorBottomRight(this RectTransform rt, bool positionAtAnchor = false)
    {
        rt.anchorMin = new Vector2(1f, 0f);
        rt.anchorMax = new Vector2(1f, 0f);
        if (positionAtAnchor)
        {
            rt.anchoredPosition = Vector2.zero;
        }
    }

    //Stretch Across Verticle & Horizontal
    public static void SetAnchorAndStrectchVerticle(this RectTransform rt, float width = 1f)
    {
        rt.offsetMin = new Vector2(0f, rt.offsetMax.y);
        rt.offsetMax = new Vector2(width, rt.offsetMax.y);
        rt.anchorMin = new Vector2(0.5f, 0);
        rt.anchorMax = new Vector2(0.5f, 1f);
        rt.anchoredPosition = Vector2.zero;
    }
    public static void SetAnchorAndStrectchHorizontal(this RectTransform rt, float height = 1f)
    {
        rt.offsetMin = new Vector2(rt.offsetMax.x, -height);
        rt.offsetMax = new Vector2(rt.offsetMax.x, 0f);
        rt.anchorMin = new Vector2(0f, 0.5f);
        rt.anchorMax = new Vector2(1f, 0.5f);
        rt.anchoredPosition = Vector2.zero;
    }

    //Stretch Sides
    public static void SetAnchorAndStretchAcrossTop(this RectTransform rt, float height = 1f)
    {
        rt.offsetMin = new Vector2(rt.offsetMax.x, -height);
        rt.offsetMax = new Vector2(rt.offsetMax.x, 0f);
        rt.anchorMin = new Vector2(0f, 1);
        rt.anchorMax = new Vector2(1f, 1f);
        rt.anchoredPosition = Vector2.zero;
    }

    public static void SetAnchorAndStretchAcrossBottom(this RectTransform rt, float height = 1f)
    {
        rt.offsetMin = new Vector2(rt.offsetMax.x, 0f);
        rt.offsetMax = new Vector2(rt.offsetMax.x, height);
        rt.anchorMin = new Vector2(0f, 0);
        rt.anchorMax = new Vector2(1f, 0f);
        rt.anchoredPosition = Vector2.zero;
    }

    public static void SetAnchorAndStretchAcrossLeft(this RectTransform rt, float width = 1f)
    {
        rt.offsetMin = new Vector2(-width, rt.offsetMax.y);
        rt.offsetMax = new Vector2(0f, rt.offsetMax.y);
        rt.anchorMin = new Vector2(0f, 0);
        rt.anchorMax = new Vector2(0f, 1f);
        rt.anchoredPosition = Vector2.zero;
    }

    public static void SetAnchorAndStrectchAcrossRight(this RectTransform rt, float width = 1f)
    {
        rt.offsetMin = new Vector2(0f, rt.offsetMax.y);
        rt.offsetMax = new Vector2(width, rt.offsetMax.y);
        rt.anchorMin = new Vector2(1f, 0);
        rt.anchorMax = new Vector2(1f, 1f);
        rt.anchoredPosition = Vector2.zero;
    }
}
