Shader "Test/UICustomMask"
{
    Properties
    {
        _MaskTex("MaskTex",2D) = "white"{}
        _Rect("Rect",Vector) = (0,0,0,0)
        _Gray("Gray",float) = 0.4
        _Alpha("Alpha",float) = 0.4
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
            sampler2D _MaskTex;
            float _Gray;
            float _Alpha;
            
            struct Appdata
            {
                float4 position: POSITION;
                float2 uv:TEXCOORD0;
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
                float isIn = UnityGet2DClipping(data.position,_Rect);

                float2 uv = float2(0,0);

                float4 color = float4(0,0,0,0);
                
                
                if (isIn == 1)
                {
                    float x0 = _Rect.x;
                    float x1 = _Rect.z;

                    float y0 = _Rect.y;
                    float y1 = _Rect.w;

                    float u = (data.position.x - x0)/(x1-x0);
                    float v = (data.position.y - y0)/(y1-y0);

                    uv = float2(u,v);

                    color = 1 - tex2D(_MaskTex,uv);

                    color = float4(min(_Gray,color.r),min(_Gray,color.g),min(_Gray,color.b),min(_Alpha,color.a));
                    
                }
                else
                {
                    color = float4(_Gray,_Gray,_Gray,_Alpha);
                }
                
                //return float4(r,g,b, a);
                return  color;
            }
            
            ENDCG
            
        }
    }

}