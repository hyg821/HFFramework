Shader "Test/UICustomMask"
{
    Properties
    {
        _Rect("Rect",Vector) = (0,0,0,0)
    }
    
    SubShader
    {
        Tags { "RenderType" = "Transparent" }
        Blend SrcAlpha OneMinusSrcAlpha
        
        Pass
        {
            CGPROGRAM

            #include "UnityCG.cginc"
            #include "UnityUI.cginc"

            #pragma vertex Vertex
            #pragma fragment Fragment

            float4 _Rect;
            
            struct Appdata
            {
                float4 position: POSITION;
                float2 uv:TEXCORRD;
            };

            struct V2F
            {
                float4 position:SV_POSITION;
            };

            V2F Vertex(Appdata data)
            {
                V2F result;
                result.position = mul(unity_MatrixMVP,data.position);
                return result;
            }

            float4 Fragment(V2F data):SV_Target
            {
                return float4(1,1,0, 1 - UnityGet2DClipping(data.position,_Rect));
            }
            
            ENDCG
            
        }
    }

}