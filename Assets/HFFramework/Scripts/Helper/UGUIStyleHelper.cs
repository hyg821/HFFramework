using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public enum UGUIStyle
{
    Default,
    Normal,
    Gray
}

public class UGUIStyleHelper : MonoBehaviour {

    public List<Image> imageList;

    public List<Button> buttonList;

    public List<Outline> outLineList;

    public List<Text> textList;

    public List<Color> textColorList = new List<Color>();

    public Material grayMaterial;

    private UGUIStyle style = UGUIStyle.Default;

    void Awake()
    {
        Image image = GetComponent<Image>();
        Image[] images = GetComponentsInChildren<Image>();
        imageList = new List<Image>(images);
        if (image != null)
        {
            imageList.Add(image);
        }

        Button button = GetComponent<Button>();
        Button[] buttons = GetComponentsInChildren<Button>();
        buttonList = new List<Button>(buttons);
        if (button != null)
        {
            buttonList.Add(button);
        }

        Outline outline = GetComponent<Outline>();
        Outline[] outlines = GetComponentsInChildren<Outline>();
        outLineList = new List<Outline>(outlines);
        if (outline != null)
        {
            outLineList.Add(outline);
        }

        Text text = GetComponent<Text>();
        Text[] texts = GetComponentsInChildren<Text>();
        textList = new List<Text>(texts);
        if (text != null)
        {
            textList.Add(text);
        }

        foreach (var item in textList)
        {
            textColorList.Add(item.color);
        }

        AssetBundlePackage ab = HAResourceManager.self.LoadAssetBundleFromFile("common_material");
        grayMaterial = ab.LoadAssetWithCache<Material>("UIGrayETC");
    }


    public void SetStyle(UGUIStyle style)
    {
        if (this.style!=style)
        {
            this.style = style;
            if (style == UGUIStyle.Normal)
            {
                foreach (var item in imageList)
                {
                    item.material = null;
                }

                foreach (var item in buttonList)
                {
                    item.enabled = true;
                }

                foreach (var item in outLineList)
                {
                    item.enabled = true;
                }

                for (int i = 0; i < textList.Count; i++)
                {
                    textList[i].color = textColorList[i];
                }

            }
            else if (style == UGUIStyle.Gray)
            {
                if (Application.platform == RuntimePlatform.Android)
                {
                    foreach (var item in imageList)
                    {
                        item.material = grayMaterial;
                    }
                }

                else if (Application.platform == RuntimePlatform.IPhonePlayer)
                {
                    print("平台是ios");
                }

                else
                {
                    foreach (var item in imageList)
                    {
                        item.material = grayMaterial;
                    }
                }


                foreach (var item in buttonList)
                {
                    item.enabled = false;
                }

                foreach (var item in outLineList)
                {
                    item.enabled = false;
                }

                for (int i = 0; i < textList.Count; i++)
                {
                    textList[i].color = Color.white;
                }
            }
        }
    }
}
