// Unity built-in shader source. Copyright (c) 2016 Unity Technologies. MIT license (see license.txt)

Shader "UIGray/DefaultETC1"
{
	Properties
	{
		[PerRendererData] _MainTex("Sprite Texture", 2D) = "white" {}
	[PerRendererData] _AlphaTex("Sprite Alpha Texture", 2D) = "white" {}
	_Color("Tint", Color) = (1,1,1,1)

		_StencilComp("Stencil Comparison", Float) = 8
		_Stencil("Stencil ID", Float) = 0
		_StencilOp("Stencil Operation", Float) = 0
		_StencilWriteMask("Stencil Write Mask", Float) = 255
		_StencilReadMask("Stencil Read Mask", Float) = 255

		_ColorMask("Color Mask", Float) = 15

		[Toggle(UNITY_UI_ALPHACLIP)] _UseUIAlphaClip("Use Alpha Clip", Float) = 0
	}

		SubShader
	{
		Tags
	{
		"Queue" = "Transparent"
		"IgnoreProjector" = "True"
		"RenderType" = "Transparent"
		"PreviewType" = "Plane"
		"CanUseSpriteAtlas" = "True"
	}

		Stencil
	{
		Ref[_Stencil]
		Comp[_StencilComp]
		Pass[_StencilOp]
		ReadMask[_StencilReadMask]
		WriteMask[_StencilWriteMask]
	}

		Cull Off
		Lighting Off
		ZWrite Off
		ZTest[unity_GUIZTestMode]
		Blend SrcAlpha OneMinusSrcAlpha
		ColorMask[_ColorMask]

		Pass
	{
		Name "Default"
		CGPROGRAM
#pragma vertex vert
#pragma fragment frag
#pragma target 2.0

#include "UnityCG.cginc"
#include "UnityUI.cginc"

#pragma multi_compile __ UNITY_UI_ALPHACLIP

		struct appdata_t
	{
		float4 vertex   : POSITION;
		float4 color    : COLOR;
		float2 texcoord : TEXCOORD0;
	};

	struct v2f
	{
		float4 vertex   : SV_POSITION;
		fixed4 color : COLOR;
		float2 texcoord  : TEXCOORD0;
		float4 worldPosition : TEXCOORD1;
	};

	fixed4 _Color;
	fixed4 _TextureSampleAdd;
	float4 _ClipRect;

	v2f vert(appdata_t IN)
	{
		v2f OUT;
		OUT.worldPosition = IN.vertex;
		OUT.vertex = UnityObjectToClipPos(OUT.worldPosition);

		OUT.texcoord = IN.texcoord;

#ifdef UNITY_HALF_TEXEL_OFFSET
		OUT.vertex.xy += (_ScreenParams.zw - 1.0) * float2(-1,1) * OUT.vertex.w;
#endif

		OUT.color = IN.color * _Color;
		return OUT;
	}

	sampler2D _MainTex;
	sampler2D _AlphaTex;

fixed4 frag(v2f IN) : SV_Target
{
    // 这里首先获取MainTex中的rgb颜色信息                          
    fixed4 colorTex = (tex2D(_MainTex, IN.texcoord) + _TextureSampleAdd) * IN.color;
    
    // 之后获取AlphaTex中的透明通道信息，注意透明通道保存的在r通道中
    fixed AlphaTexAlpha = tex2D(_AlphaTex, IN.texcoord).r + _TextureSampleAdd.a;

    // 创建color变量，设置透明通道为colorTex.a和AlphaTexAlpha的乘积
    fixed4 color = fixed4(colorTex.rgb, colorTex.a * AlphaTexAlpha);
    color.a *= UnityGet2DClipping(IN.worldPosition.xy, _ClipRect);
                
    #ifdef UNITY_UI_ALPHACLIP
    clip (color.a - 0.001);
    #endif

    color.rgb = Luminance(color.rgb);

    return color;
}
		ENDCG
	}
	}
}
