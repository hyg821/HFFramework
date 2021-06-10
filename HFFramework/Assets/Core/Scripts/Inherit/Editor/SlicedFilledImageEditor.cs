using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
#if UNITY_2017_4 || UNITY_2018_2_OR_NEWER
using UnityEngine.U2D;
#endif
using Sprites = UnityEngine.Sprites;

using UnityEditor;
// Custom Editor to order the variables in the Inspector similar to Image component
[CustomEditor( typeof( SlicedFilledImage ) )]
[CanEditMultipleObjects]
public class SlicedFilledImageEditor : Editor
{
    private SerializedProperty spriteProp, colorProp;
    private GUIContent spriteLabel;

    private void OnEnable()
    {
        spriteProp = serializedObject.FindProperty( "m_Sprite" );
        colorProp = serializedObject.FindProperty( "m_Color" );
        spriteLabel = new GUIContent( "Source Image" );
    }

    public override void OnInspectorGUI()
    {
        serializedObject.Update();

        EditorGUILayout.PropertyField( spriteProp, spriteLabel );
        EditorGUILayout.PropertyField( colorProp );
        DrawPropertiesExcluding( serializedObject, "m_Script", "m_Sprite", "m_Color", "m_OnCullStateChanged" );

        serializedObject.ApplyModifiedProperties();
    }
}