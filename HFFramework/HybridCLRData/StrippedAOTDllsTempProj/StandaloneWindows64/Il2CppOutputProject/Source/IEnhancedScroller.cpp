#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
struct List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B;
struct SmallList_1_tDD26C24E78CCBE316084977E23188B07A348B50E;
struct SmallList_1_tBAE11EB1B1FAAB50EAC44889F4A55E3A307B5BB2;
struct SmallList_1_tE02B1AA4E731131850BDD41356F586BAF1479594;
struct SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67;
struct UnityAction_1_t8FBFBC01962B7293F0E33F9D6F1CEAF2896D8669;
struct UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct EnhancedScrollerCellViewU5BU5D_tF5CB2774546A4E9540D0ADECEAE242F72CED0E5E;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct CellViewInstantiated_tD9FCFB13CC0F4A6DD1B1502099F73B8CB87F83CE;
struct CellViewReused_t735E2EC81E35C797096B5C527229607370898A18;
struct CellViewVisibilityChangedDelegate_t43F8249D9299E7AD6E37272385ADBEE1017BA3DD;
struct CellViewWillRecycleDelegate_tBFC8C3F20197FE3179695C4C338EFAF7D618875C;
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B;
struct EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892;
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
struct HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA;
struct HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnhancedScrollerDelegate_tC2488B96D04198ACAFE7EB43D3B931DEA4589C0B;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
struct LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5;
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E;
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3;
struct ScrollerScrolledDelegate_tCF28541FE97900820A53F56F09E540DC9E293E48;
struct ScrollerScrollingChangedDelegate_t7A163170666C2A9FCCFA49F6B466A8F85E432D2E;
struct ScrollerSnappedDelegate_t4FDC68A802920BE5ACF5E2025694C666773619D0;
struct ScrollerTweeningChangedDelegate_t3C04A0BE1392AA65C1FFE1831566EC3F474E147E;
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
struct String_t;
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
struct Type_t;
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_t3168337B6AFADDA3F1573794BC9A88FB9D0ECC20;
struct VerticalLayoutGroup_t06B5E51FC8051BF2009E6494876FBB9F3E5320B8;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct U3CTweenPositionU3Ed__140_tC04B98631A63B795840C2E8AB6B0123E33377257;
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
struct ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26;
struct ScrollEvent_tDDBE21D44D65DF069C54FE3ACF7668D976E6BBB6;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnhancedScrollerDelegate_tC2488B96D04198ACAFE7EB43D3B931DEA4589C0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SmallList_1_tBAE11EB1B1FAAB50EAC44889F4A55E3A307B5BB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SmallList_1_tDD26C24E78CCBE316084977E23188B07A348B50E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTweenPositionU3Ed__140_tC04B98631A63B795840C2E8AB6B0123E33377257_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t8FBFBC01962B7293F0E33F9D6F1CEAF2896D8669_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t83975C13FE483AC55DA39E0A7C111FF454AE97B9____9293D42B4F66070E2D456CD973849194CEB2B3AB8A6D42454D8BC2F2597474FE_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t83975C13FE483AC55DA39E0A7C111FF454AE97B9____D518718BE43152B354C808EA39B279F907DBFEEBDF7B89C454B6F71C519AFAE5_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral23623521A1F8CA7F2221F4CAD23AB500AD230DFE;
IL2CPP_EXTERN_C String_t* _stringLiteral899C4CA9F8694026FA5B50E67227A4F3E06AC520;
IL2CPP_EXTERN_C String_t* _stringLiteralD52B1901A8EEF152CE58338C36B2C7F16C12121B;
IL2CPP_EXTERN_C String_t* _stringLiteralF621B8341BA5525CD19F35458C986A52EEE81558;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisHorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E_m65D141B4A15249538919DC3E5A3EE3893617FE88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A_mBEDAB0EBAEF4ADA5377B97FC2318DE8020F2D639_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_m807654BF9CCD1E13E3FB8498D557BDDF13006518_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnhancedScroller_SnapJumpComplete_mDE1879F85C52C1D8CA887834ACB9BCEC94E31945_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnhancedScroller__ScrollRect_OnValueChanged_mD818C25308A816448664D48B7A89FD30441F664B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisHorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA_mDF05C81771378B8EEC5C01D6F0F85665B6BAB5D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisLayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A_mCAEF1A4C92D1C856A46417BA645409AE42F005D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisVerticalLayoutGroup_t06B5E51FC8051BF2009E6494876FBB9F3E5320B8_m8FC80304C9EFC42F9CAE9588753536DC6F224521_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisEnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892_mB557B5C2F13AF8EBE8CDC69B7E676F6CA5442D13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisLayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A_mB80DDAE1EBBC24C6967E5633AD129139079853E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmallList_1_AddStart_m461257E40DF2FC5164825CBDAB4DF463FDCB45D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmallList_1_Add_m863A7B12A65A5CA484B0CEC1F30B6B58225112A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmallList_1_Add_m98D21F5A6E30D31A761E7423CE4F3EF1ADB603CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmallList_1_Add_mAC9E45E1F58043048C633D81C99B8922DA144371_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmallList_1_Clear_m2F746E16645FA4E8F86DDCEC64EEE4700A27756D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmallList_1_Clear_mDB4C01826D3E56E78C6AB92E38808DC475A5BD3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmallList_1_First_mA0579D015FEC9453E4F7F91092D3B9343FA75D37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmallList_1_Last_m38E9D63D3245FC42162FC2ADF0B5BF65C510FD3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmallList_1_Last_mAF251EECBC2279CFDBFAA895792A8E071631A904_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmallList_1_RemoveAt_m5C1D2C94B96090D3DFCAAE7E1FCAAED3DE3D84C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmallList_1_Remove_m4E9186A4CFD0B62D54E45C8C5C946FBF96A6FC8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmallList_1__ctor_m2EFF2DC139E4A31E30137FD6EC85294FCF97BD0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmallList_1__ctor_m973BB700AE4E7A0C497EEFCCF88E457834F1DD1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmallList_1__ctor_mB2610A8FB28838A475ACE16D185F82D780382BBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmallList_1_get_Item_m4BE491B88C91180C9CD1691A8AB0C4E312E38260_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmallList_1_get_Item_m99EDA7FDFDE7C4514B5B579204D1447768EB91D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTweenPositionU3Ed__140_System_Collections_IEnumerator_Reset_mDEB8FE3BD56ADBC6AA42D053D2EEBBD046B9A805_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m2B74313C91E347D6AD24CE5B036E190E77E70851_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_mC741D450364141F0589857DD5CC0C27D4CF72D99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_tAC8C1BB89EA28711BB2F1DDA03B720D6C67354AD 
{
};
struct SmallList_1_tDD26C24E78CCBE316084977E23188B07A348B50E  : public RuntimeObject
{
	EnhancedScrollerCellViewU5BU5D_tF5CB2774546A4E9540D0ADECEAE242F72CED0E5E* ___data;
	int32_t ___Count;
};
struct SmallList_1_tBAE11EB1B1FAAB50EAC44889F4A55E3A307B5BB2  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___data;
	int32_t ___Count;
};
struct SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67  : public RuntimeObject
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___data;
	int32_t ___Count;
};
struct U3CPrivateImplementationDetailsU3E_t83975C13FE483AC55DA39E0A7C111FF454AE97B9  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls;
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls;
	bool ___m_CallsDirty;
};
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_t3168337B6AFADDA3F1573794BC9A88FB9D0ECC20  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};
struct U3CTweenPositionU3Ed__140_tC04B98631A63B795840C2E8AB6B0123E33377257  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	int32_t ___tweenType;
	float ___time;
	EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___U3CU3E4__this;
	float ___start;
	float ___end;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___tweenComplete;
	float ___U3CnewPositionU3E5__2;
};
struct UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	int32_t ___m_Mode;
	bool ___m_WrapAround;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight;
};
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode;
	int32_t ___m_WrapAround;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight;
};
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode;
	int32_t ___m_WrapAround;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin;
	float ___m_YMin;
	float ___m_Width;
	float ___m_Height;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite;
};
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite;
};
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D189_t56877E5466897C4ECAA9DCD4EBC8300AA75DB305 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D189_t56877E5466897C4ECAA9DCD4EBC8300AA75DB305__padding[189];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D306_tE9D193B6C1C6D257FBF0E82808D45F10DF39BDC3 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D306_tE9D193B6C1C6D257FBF0E82808D45F10DF39BDC3__padding[306];
	};
};
#pragma pack(pop, tp)
struct MonoScriptData_tB6C95DA0C7D3CBCB8CBB0F0AC396051FAF7B4879 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___FilePathsData;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	bool ___IsEditorOnly;
};
struct MonoScriptData_tB6C95DA0C7D3CBCB8CBB0F0AC396051FAF7B4879_marshaled_pinvoke
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct MonoScriptData_tB6C95DA0C7D3CBCB8CBB0F0AC396051FAF7B4879_marshaled_com
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents;
};
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor;
	float ___m_ColorMultiplier;
	float ___m_FadeDuration;
};
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	intptr_t ___m_Ptr;
};
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr;
};
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5  : public RuntimeObject
{
	intptr_t ___m_Ptr;
	RuntimeObject* ___m_SourceStyle;
};
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke
{
	intptr_t ___m_Ptr;
	Il2CppIUnknown* ___m_SourceStyle;
};
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com
{
	intptr_t ___m_Ptr;
	Il2CppIUnknown* ___m_SourceStyle;
};
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	intptr_t ___value;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26  : public UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932
{
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct UnityAction_1_t8FBFBC01962B7293F0E33F9D6F1CEAF2896D8669  : public MulticastDelegate_t
{
};
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct CellViewInstantiated_tD9FCFB13CC0F4A6DD1B1502099F73B8CB87F83CE  : public MulticastDelegate_t
{
};
struct CellViewReused_t735E2EC81E35C797096B5C527229607370898A18  : public MulticastDelegate_t
{
};
struct CellViewVisibilityChangedDelegate_t43F8249D9299E7AD6E37272385ADBEE1017BA3DD  : public MulticastDelegate_t
{
};
struct CellViewWillRecycleDelegate_tBFC8C3F20197FE3179695C4C338EFAF7D618875C  : public MulticastDelegate_t
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct ScrollerScrolledDelegate_tCF28541FE97900820A53F56F09E540DC9E293E48  : public MulticastDelegate_t
{
};
struct ScrollerScrollingChangedDelegate_t7A163170666C2A9FCCFA49F6B466A8F85E432D2E  : public MulticastDelegate_t
{
};
struct ScrollerSnappedDelegate_t4FDC68A802920BE5ACF5E2025694C666773619D0  : public MulticastDelegate_t
{
};
struct ScrollerTweeningChangedDelegate_t3C04A0BE1392AA65C1FFE1831566EC3F474E147E  : public MulticastDelegate_t
{
};
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource;
};
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};
struct EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	int32_t ___scrollDirection;
	float ___spacing;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___padding;
	bool ___loop;
	int32_t ___scrollbarVisibility;
	bool ___snapping;
	float ___snapVelocityThreshold;
	float ___snapWatchOffset;
	float ___snapJumpToOffset;
	float ___snapCellCenterOffset;
	bool ___snapUseCellSpacing;
	int32_t ___snapTweenType;
	float ___snapTweenTime;
	CellViewVisibilityChangedDelegate_t43F8249D9299E7AD6E37272385ADBEE1017BA3DD* ___cellViewVisibilityChanged;
	CellViewWillRecycleDelegate_tBFC8C3F20197FE3179695C4C338EFAF7D618875C* ___cellViewWillRecycle;
	ScrollerScrolledDelegate_tCF28541FE97900820A53F56F09E540DC9E293E48* ___scrollerScrolled;
	ScrollerSnappedDelegate_t4FDC68A802920BE5ACF5E2025694C666773619D0* ___scrollerSnapped;
	ScrollerScrollingChangedDelegate_t7A163170666C2A9FCCFA49F6B466A8F85E432D2E* ___scrollerScrollingChanged;
	ScrollerTweeningChangedDelegate_t3C04A0BE1392AA65C1FFE1831566EC3F474E147E* ___scrollerTweeningChanged;
	CellViewInstantiated_tD9FCFB13CC0F4A6DD1B1502099F73B8CB87F83CE* ___cellViewInstantiated;
	CellViewReused_t735E2EC81E35C797096B5C527229607370898A18* ___cellViewReused;
	bool ___U3CIsScrollingU3Ek__BackingField;
	bool ___U3CIsTweeningU3Ek__BackingField;
	bool ____initialized;
	bool ____updateSpacing;
	ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* ____scrollRect;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____scrollRectTransform;
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ____scrollbar;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____container;
	HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E* ____layoutGroup;
	RuntimeObject* ____delegate;
	bool ____reloadData;
	bool ____refreshActive;
	SmallList_1_tDD26C24E78CCBE316084977E23188B07A348B50E* ____recycledCellViews;
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ____firstPadder;
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ____lastPadder;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____recycledCellViewContainer;
	SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67* ____cellViewSizeArray;
	SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67* ____cellViewOffsetArray;
	float ____scrollPosition;
	SmallList_1_tDD26C24E78CCBE316084977E23188B07A348B50E* ____activeCellViews;
	int32_t ____activeCellViewsStartIndex;
	int32_t ____activeCellViewsEndIndex;
	int32_t ____loopFirstCellIndex;
	int32_t ____loopLastCellIndex;
	float ____loopFirstScrollPosition;
	float ____loopLastScrollPosition;
	float ____loopFirstJumpTrigger;
	float ____loopLastJumpTrigger;
	float ____lastScrollRectSize;
	bool ____lastLoop;
	int32_t ____snapCellViewIndex;
	int32_t ____snapDataIndex;
	bool ____snapJumping;
	bool ____snapInertia;
	int32_t ____lastScrollbarVisibility;
	float ____singleLoopGroupSize;
	float ____tweenTimeLeft;
};
struct EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	String_t* ___cellIdentifier;
	int32_t ___cellIndex;
	int32_t ___dataIndex;
	bool ___active;
};
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	bool ___m_IgnoreLayout;
	float ___m_MinWidth;
	float ___m_MinHeight;
	float ___m_PreferredWidth;
	float ___m_PreferredHeight;
	float ___m_FlexibleWidth;
	float ___m_FlexibleHeight;
	int32_t ___m_LayoutPriority;
};
struct LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Padding;
	int32_t ___m_ChildAlignment;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Rect;
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalMinSize;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalPreferredSize;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalFlexibleSize;
	List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* ___m_RectChildren;
};
struct ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Content;
	bool ___m_Horizontal;
	bool ___m_Vertical;
	int32_t ___m_MovementType;
	float ___m_Elasticity;
	bool ___m_Inertia;
	float ___m_DecelerationRate;
	float ___m_ScrollSensitivity;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Viewport;
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_HorizontalScrollbar;
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_VerticalScrollbar;
	int32_t ___m_HorizontalScrollbarVisibility;
	int32_t ___m_VerticalScrollbarVisibility;
	float ___m_HorizontalScrollbarSpacing;
	float ___m_VerticalScrollbarSpacing;
	ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26* ___m_OnValueChanged;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PointerStartLocalCursor;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ContentStartPosition;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_ViewRect;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_ContentBounds;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_ViewBounds;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Velocity;
	bool ___m_Dragging;
	bool ___m_Scrolling;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PrevPosition;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_PrevContentBounds;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_PrevViewBounds;
	bool ___m_HasRebuiltLayout;
	bool ___m_HSliderExpand;
	bool ___m_VSliderExpand;
	float ___m_HSliderHeight;
	float ___m_VSliderWidth;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Rect;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HorizontalScrollbarRect;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_VerticalScrollbarRect;
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners;
};
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	bool ___m_EnableCalled;
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation;
	int32_t ___m_Transition;
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors;
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState;
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers;
	bool ___m_Interactable;
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic;
	bool ___m_GroupsAllowInteraction;
	int32_t ___m_CurrentIndex;
	bool ___U3CisPointerInsideU3Ek__BackingField;
	bool ___U3CisPointerDownU3Ek__BackingField;
	bool ___U3ChasSelectionU3Ek__BackingField;
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache;
};
struct HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E  : public LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE
{
	float ___m_Spacing;
	bool ___m_ChildForceExpandWidth;
	bool ___m_ChildForceExpandHeight;
	bool ___m_ChildControlWidth;
	bool ___m_ChildControlHeight;
	bool ___m_ChildScaleWidth;
	bool ___m_ChildScaleHeight;
	bool ___m_ReverseArrangement;
};
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect;
	int32_t ___m_Direction;
	float ___m_Value;
	float ___m_Size;
	int32_t ___m_NumberOfSteps;
	ScrollEvent_tDDBE21D44D65DF069C54FE3ACF7668D976E6BBB6* ___m_OnValueChanged;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_ContainerRect;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset;
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker;
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_PointerDownRepeat;
	bool ___isPointerDownAndNotDragging;
	bool ___m_DelayedUpdateVisuals;
};
struct HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA  : public HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E
{
};
struct VerticalLayoutGroup_t06B5E51FC8051BF2009E6494876FBB9F3E5320B8  : public HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E
{
};
struct U3CPrivateImplementationDetailsU3E_t83975C13FE483AC55DA39E0A7C111FF454AE97B9_StaticFields
{
	__StaticArrayInitTypeSizeU3D189_t56877E5466897C4ECAA9DCD4EBC8300AA75DB305 ___9293D42B4F66070E2D456CD973849194CEB2B3AB8A6D42454D8BC2F2597474FE;
	__StaticArrayInitTypeSizeU3D306_tE9D193B6C1C6D257FBF0E82808D45F10DF39BDC3 ___D518718BE43152B354C808EA39B279F907DBFEEBDF7B89C454B6F71C519AFAE5;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SmallList_1_Last_mAF251EECBC2279CFDBFAA895792A8E071631A904_gshared (SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___0_original, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SmallList_1_get_Item_m73B1DD028FEA45AF63299BB18B7A65454E044C5A_gshared (SmallList_1_tE02B1AA4E731131850BDD41356F586BAF1479594* __this, int32_t ___0_i, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmallList_1_Clear_mAA8221B780EAAF54939790D0A18316A171828B1E_gshared (SmallList_1_tE02B1AA4E731131850BDD41356F586BAF1479594* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SmallList_1_get_Item_m4BE491B88C91180C9CD1691A8AB0C4E312E38260_gshared (SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67* __this, int32_t ___0_i, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmallList_1_Clear_mDB4C01826D3E56E78C6AB92E38808DC475A5BD3C_gshared (SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmallList_1_Add_m863A7B12A65A5CA484B0CEC1F30B6B58225112A0_gshared (SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67* __this, float ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SmallList_1_RemoveAt_mFE061F301220E74A983FC5F64FB91BF13850C3C2_gshared (SmallList_1_tE02B1AA4E731131850BDD41356F586BAF1479594* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmallList_1__ctor_mB2610A8FB28838A475ACE16D185F82D780382BBB_gshared (SmallList_1_tBAE11EB1B1FAAB50EAC44889F4A55E3A307B5BB2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmallList_1_Add_mAC9E45E1F58043048C633D81C99B8922DA144371_gshared (SmallList_1_tBAE11EB1B1FAAB50EAC44889F4A55E3A307B5BB2* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SmallList_1_First_mA0579D015FEC9453E4F7F91092D3B9343FA75D37_gshared (SmallList_1_tBAE11EB1B1FAAB50EAC44889F4A55E3A307B5BB2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SmallList_1_Last_m38E9D63D3245FC42162FC2ADF0B5BF65C510FD3E_gshared (SmallList_1_tBAE11EB1B1FAAB50EAC44889F4A55E3A307B5BB2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SmallList_1_Remove_m5AB7499EEABB13797C2FF9D911979D21722683BF_gshared (SmallList_1_tE02B1AA4E731131850BDD41356F586BAF1479594* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmallList_1_Add_m9933CA749661543AF11E8CDA82713749C8B7F648_gshared (SmallList_1_tE02B1AA4E731131850BDD41356F586BAF1479594* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmallList_1_AddStart_m0C3B8EF5275BF246B871DD86DDFBC087B3907683_gshared (SmallList_1_tE02B1AA4E731131850BDD41356F586BAF1479594* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m71C125B79EE35648CFC416CA7DBBC27C8DBAD45A_gshared (UnityAction_1_t8FBFBC01962B7293F0E33F9D6F1CEAF2896D8669* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m2B74313C91E347D6AD24CE5B036E190E77E70851_gshared (UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932* __this, UnityAction_1_t8FBFBC01962B7293F0E33F9D6F1CEAF2896D8669* ___0_call, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_mC741D450364141F0589857DD5CC0C27D4CF72D99_gshared (UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932* __this, UnityAction_1_t8FBFBC01962B7293F0E33F9D6F1CEAF2896D8669* ___0_call, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmallList_1__ctor_mAB8521EF5A3FC1E47115DBBADD6020DDC6F81A6F_gshared (SmallList_1_tE02B1AA4E731131850BDD41356F586BAF1479594* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmallList_1__ctor_m2EFF2DC139E4A31E30137FD6EC85294FCF97BD0B_gshared (SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67* __this, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_GetScrollPositionForCellViewIndex_m8593F367133D0F4E4DFBD4DACB6589BBEC48CA68 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, int32_t ___0_cellViewIndex, int32_t ___1_insertPosition, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_get_ScrollSize_mBD47F8C4531472104621271889C5DBC9CE64169B (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollRect_set_verticalNormalizedPosition_m4AF461113925E6710BF04F46A49CF1F856F7738C (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollRect_set_horizontalNormalizedPosition_m9B268C9AE7891FC73623DC7BE6B9900640C029B6 (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float EnhancedScroller_get_ScrollPosition_m00738952CFB5F288DA398A1F438B2F9122B61FE0_inline (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScroller__Resize_m074B12AF522F613E07169421DDD6C04011BFDDC7 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, bool ___0_keepPosition, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScroller_set_ScrollPosition_m703772A369D3E1676BD65C15F647CFA79481C223 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScroller_set_ScrollbarVisibility_m479E02CD0D9B48C63B3DEEBAC4949F7989A036B1 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
inline float SmallList_1_Last_mAF251EECBC2279CFDBFAA895792A8E071631A904 (SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67* __this, const RuntimeMethod* method)
{
	return ((  float (*) (SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67*, const RuntimeMethod*))SmallList_1_Last_mAF251EECBC2279CFDBFAA895792A8E071631A904_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_get_ScrollRectSize_m02A9E670D08C44359A2AFD26A3A666E8BE8AFE36 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ScrollRect_get_velocity_m8F7DDB02F52BFF2503F079C216FC5C89AA4875DC_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScrollRect_set_velocity_mBC8D4BC0A0184FCC3AEB359AE68E9130E811AFC2_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnhancedScroller_get_NumberOfCells_m60ECD04B3FDC301E066BB052258B697BEC6A98B7 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* EnhancedScroller__GetRecycledCellView_m6FDB3BF4D9857E558026D759504CD16F7196B1A1 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___0_cellPrefab, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___0_original, method);
}
inline EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* GameObject_GetComponent_TisEnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892_mB557B5C2F13AF8EBE8CDC69B7E676F6CA5442D13 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_p, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CellViewInstantiated_Invoke_m175D8E92654CAC26386CE53E21C25FB240C5A2CF_inline (CellViewInstantiated_tD9FCFB13CC0F4A6DD1B1502099F73B8CB87F83CE* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___1_cellView, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CellViewReused_Invoke_mE141EE791BFF71536F4AA1A04D688430AE1EDC32_inline (CellViewReused_t735E2EC81E35C797096B5C527229607370898A18* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___1_cellView, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScroller__RecycleAllCells_m95A25FE62C63C7650E6C8278AA05AE2F589B56DC (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScroller__RefreshActive_m098FD7B4385179FE74C7F609434685913195333C (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, const RuntimeMethod* method) ;
inline EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* SmallList_1_get_Item_m99EDA7FDFDE7C4514B5B579204D1447768EB91D1 (SmallList_1_tDD26C24E78CCBE316084977E23188B07A348B50E* __this, int32_t ___0_i, const RuntimeMethod* method)
{
	return ((  EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* (*) (SmallList_1_tDD26C24E78CCBE316084977E23188B07A348B50E*, int32_t, const RuntimeMethod*))SmallList_1_get_Item_m73B1DD028FEA45AF63299BB18B7A65454E044C5A_gshared)(__this, ___0_i, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScroller_ClearActive_m40785199AE2A788E604375115B109F02653C26FD (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScroller_ClearRecycled_mF3D47D6CDA9ED445BBC9F909EDF90357DBB87439 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
inline void SmallList_1_Clear_m2F746E16645FA4E8F86DDCEC64EEE4700A27756D (SmallList_1_tDD26C24E78CCBE316084977E23188B07A348B50E* __this, const RuntimeMethod* method)
{
	((  void (*) (SmallList_1_tDD26C24E78CCBE316084977E23188B07A348B50E*, const RuntimeMethod*))SmallList_1_Clear_mAA8221B780EAAF54939790D0A18316A171828B1E_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScroller_set_Loop_m252A198952FF2F8B99A8E46415B1AE9EF59C42BD (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectOffset_get_bottom_mDF9C1EC125F94245D5532C34FCFB65BE0F2A9D0B (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnhancedScroller_GetCellViewIndexAtPosition_m3CC8A4F573F53A48CE3A2283229C20F37409BEDA (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, float ___0_position, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_GetScrollPositionForDataIndex_mD134E662DB24AFEB91766F25047B957AAB6D57ED (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, int32_t ___0_dataIndex, int32_t ___1_insertPosition, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnhancedScroller_TweenPosition_m04E6809C0E3C31A86589BFAE485E960059A5FA01 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, int32_t ___0_tweenType, float ___1_time, float ___2_start, float ___3_end, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___4_tweenComplete, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScroller_set_LinearVelocity_mEF73C909E4214D54AE7804E208F2C55A19F64FC5 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ScrollRect_get_inertia_m10C8837B3E43787E1FA94C71683D19638FCEFFBF_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScrollRect_set_inertia_m8A17589561A5E7A2F5F543B8F2F6149458C68AC2_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScroller_JumpToDataIndex_mF4D46EFEE66269EC24AD63F4B7D844F73DC7273E (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, int32_t ___0_dataIndex, float ___1_scrollerOffset, float ___2_cellOffset, bool ___3_useSpacing, int32_t ___4_tweenType, float ___5_tweenTime, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___6_jumpComplete, int32_t ___7_loopJumpDirection, const RuntimeMethod* method) ;
inline float SmallList_1_get_Item_m4BE491B88C91180C9CD1691A8AB0C4E312E38260 (SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67* __this, int32_t ___0_i, const RuntimeMethod* method)
{
	return ((  float (*) (SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67*, int32_t, const RuntimeMethod*))SmallList_1_get_Item_m4BE491B88C91180C9CD1691A8AB0C4E312E38260_gshared)(__this, ___0_i, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectOffset_get_left_mA406D7AFF76E48507EF143CDB1D157C4D5430D90 (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectOffset_get_top_m82E49FB93A5BD417131136F5A7DBA0F251F10263 (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnhancedScroller__GetCellIndexAtPosition_mDE49D63C2830170E57673C5E3A8D0EC0BC5F08A2 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, float ___0_position, int32_t ___1_startIndex, int32_t ___2_endIndex, const RuntimeMethod* method) ;
inline void SmallList_1_Clear_mDB4C01826D3E56E78C6AB92E38808DC475A5BD3C (SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67* __this, const RuntimeMethod* method)
{
	((  void (*) (SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67*, const RuntimeMethod*))SmallList_1_Clear_mDB4C01826D3E56E78C6AB92E38808DC475A5BD3C_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller__AddCellViewSizes_mBAEE8901C95FF0702B59EE5F61C3F46679269D6C (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline (float ___0_f, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScroller__DuplicateCellViewSizes_m3E120655D1964CBE0A3461BEE768AB07CECDC663 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, int32_t ___0_numberOfTimes, int32_t ___1_cellCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScroller__CalculateCellViewOffsets_m20A6C1542E09EEA67F062A61C126D8A8D6F37B84 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectOffset_get_right_m07C826B0BC79B0CBC01F5FF489D456C553F047BF (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScroller__ResetVisibleCellViews_m6E81D1E99A31A498C69A81828A73D9DB36B8CB0A (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalOrVerticalLayoutGroup_set_spacing_m90373F54D37DA8DFA90E102DC60EC33E542FD859 (HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_get_NormalizedScrollPosition_m467D1C170121B01656AB151CCF00067CA575774E (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScroller_ReloadData_mB656E2A5C57D096C380610AF9BF56282D11A8DF8 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, float ___0_scrollPositionFactor, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float HorizontalOrVerticalLayoutGroup_get_spacing_m916C9BF57D4AB0EF76E6BC4EC5E1EA54B7918782_inline (HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E* __this, const RuntimeMethod* method) ;
inline void SmallList_1_Add_m863A7B12A65A5CA484B0CEC1F30B6B58225112A0 (SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67* __this, float ___0_item, const RuntimeMethod* method)
{
	((  void (*) (SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67*, float, const RuntimeMethod*))SmallList_1_Add_m863A7B12A65A5CA484B0CEC1F30B6B58225112A0_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
inline EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* SmallList_1_RemoveAt_m5C1D2C94B96090D3DFCAAE7E1FCAAED3DE3D84C4 (SmallList_1_tDD26C24E78CCBE316084977E23188B07A348B50E* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* (*) (SmallList_1_tDD26C24E78CCBE316084977E23188B07A348B50E*, int32_t, const RuntimeMethod*))SmallList_1_RemoveAt_mFE061F301220E74A983FC5F64FB91BF13850C3C2_gshared)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScroller__CalculateCurrentActiveCellRange_mDACD68A895B57121276E5F98F4E9F10E7658C147 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, int32_t* ___0_startIndex, int32_t* ___1_endIndex, const RuntimeMethod* method) ;
inline void SmallList_1__ctor_mB2610A8FB28838A475ACE16D185F82D780382BBB (SmallList_1_tBAE11EB1B1FAAB50EAC44889F4A55E3A307B5BB2* __this, const RuntimeMethod* method)
{
	((  void (*) (SmallList_1_tBAE11EB1B1FAAB50EAC44889F4A55E3A307B5BB2*, const RuntimeMethod*))SmallList_1__ctor_mB2610A8FB28838A475ACE16D185F82D780382BBB_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScroller__RecycleCell_mCA446FFDF7F8465B52C01ADFAA6101CFD03B1C19 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___0_cellView, const RuntimeMethod* method) ;
inline void SmallList_1_Add_mAC9E45E1F58043048C633D81C99B8922DA144371 (SmallList_1_tBAE11EB1B1FAAB50EAC44889F4A55E3A307B5BB2* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (SmallList_1_tBAE11EB1B1FAAB50EAC44889F4A55E3A307B5BB2*, int32_t, const RuntimeMethod*))SmallList_1_Add_mAC9E45E1F58043048C633D81C99B8922DA144371_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScroller__AddCellView_mD96692EF6D014D66A37D7C94D2CF042059B4EFFD (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, int32_t ___0_cellIndex, int32_t ___1_listPosition, const RuntimeMethod* method) ;
inline int32_t SmallList_1_First_mA0579D015FEC9453E4F7F91092D3B9343FA75D37 (SmallList_1_tBAE11EB1B1FAAB50EAC44889F4A55E3A307B5BB2* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SmallList_1_tBAE11EB1B1FAAB50EAC44889F4A55E3A307B5BB2*, const RuntimeMethod*))SmallList_1_First_mA0579D015FEC9453E4F7F91092D3B9343FA75D37_gshared)(__this, method);
}
inline int32_t SmallList_1_Last_m38E9D63D3245FC42162FC2ADF0B5BF65C510FD3E (SmallList_1_tBAE11EB1B1FAAB50EAC44889F4A55E3A307B5BB2* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SmallList_1_tBAE11EB1B1FAAB50EAC44889F4A55E3A307B5BB2*, const RuntimeMethod*))SmallList_1_Last_m38E9D63D3245FC42162FC2ADF0B5BF65C510FD3E_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScroller__SetPadders_mF35E2F1E9662C3AA5073B54F6407C986A6D8535C (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CellViewWillRecycleDelegate_Invoke_m4B873B37A7A3BA5E336CBC3281CBF933B3DDA2C4_inline (CellViewWillRecycleDelegate_tBFC8C3F20197FE3179695C4C338EFAF7D618875C* __this, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___0_cellView, const RuntimeMethod* method) ;
inline EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* SmallList_1_Remove_m4E9186A4CFD0B62D54E45C8C5C946FBF96A6FC8A (SmallList_1_tDD26C24E78CCBE316084977E23188B07A348B50E* __this, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___0_item, const RuntimeMethod* method)
{
	return ((  EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* (*) (SmallList_1_tDD26C24E78CCBE316084977E23188B07A348B50E*, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892*, const RuntimeMethod*))SmallList_1_Remove_m5AB7499EEABB13797C2FF9D911979D21722683BF_gshared)(__this, ___0_item, method);
}
inline void SmallList_1_Add_m98D21F5A6E30D31A761E7423CE4F3EF1ADB603CA (SmallList_1_tDD26C24E78CCBE316084977E23188B07A348B50E* __this, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (SmallList_1_tDD26C24E78CCBE316084977E23188B07A348B50E*, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892*, const RuntimeMethod*))SmallList_1_Add_m9933CA749661543AF11E8CDA82713749C8B7F648_gshared)(__this, ___0_item, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CellViewVisibilityChangedDelegate_Invoke_m8809BAE14177603BDD5AA7B730B14D108A7258EB_inline (CellViewVisibilityChangedDelegate_t43F8249D9299E7AD6E37272385ADBEE1017BA3DD* __this, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___0_cellView, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, bool ___1_worldPositionStays, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
inline LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* Component_GetComponent_TisLayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A_mBEDAB0EBAEF4ADA5377B97FC2318DE8020F2D639 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
inline LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* GameObject_AddComponent_TisLayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A_mCAEF1A4C92D1C856A46417BA645409AE42F005D2 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
inline void SmallList_1_AddStart_m461257E40DF2FC5164825CBDAB4DF463FDCB45D3 (SmallList_1_tDD26C24E78CCBE316084977E23188B07A348B50E* __this, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (SmallList_1_tDD26C24E78CCBE316084977E23188B07A348B50E*, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892*, const RuntimeMethod*))SmallList_1_AddStart_m0C3B8EF5275BF246B871DD86DDFBC087B3907683_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetSiblingIndex_m8A3B81F08B93991C05BFA89ADA2146836C4FC4B2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
inline ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* Component_GetComponent_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_m807654BF9CCD1E13E3FB8498D557BDDF13006518 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ScrollRect_get_content_m7878BCA28A96B7FBA02DC466A1ED2C9E191C6996_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m721D643351E55308EA4F5F41B67D5446D11C61F0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___1_components, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
inline VerticalLayoutGroup_t06B5E51FC8051BF2009E6494876FBB9F3E5320B8* GameObject_AddComponent_TisVerticalLayoutGroup_t06B5E51FC8051BF2009E6494876FBB9F3E5320B8_m8FC80304C9EFC42F9CAE9588753536DC6F224521 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  VerticalLayoutGroup_t06B5E51FC8051BF2009E6494876FBB9F3E5320B8* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
inline HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* GameObject_AddComponent_TisHorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA_mDF05C81771378B8EEC5C01D6F0F85665B6BAB5D4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_offsetMax_m5514D09D86516F2C0E25FA6D11A3A4274D3D002D (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_offsetMin_m07F38B4105C7CA9CC9FBDC9ED0DB008602880AB9 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScrollRect_set_content_m01BF6FE0205985CBD16C6D3BB4B6F345B3AF484E_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ScrollRect_get_verticalScrollbar_mCEB62CC858B43CE7FB07D287CAFC1363668E78C6_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ScrollRect_get_horizontalScrollbar_mDE0EC3FD5C1AC8FDB4D8E8EF4B093A77218DF534_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) ;
inline HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E* Component_GetComponent_TisHorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E_m65D141B4A15249538919DC3E5A3EE3893617FE88 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutGroup_set_padding_m9F415F3402E5E4AE684FD153493CE3E8D64D3EB7 (LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE* __this, RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutGroup_set_childAlignment_mA97DF1F2CF43C0CD1B83CFE7883626AA86ABB0AF (LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalOrVerticalLayoutGroup_set_childForceExpandHeight_mA144CF421614F41813DE346AA9D1C64621C6C2E5 (HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalOrVerticalLayoutGroup_set_childForceExpandWidth_m351827AA1A453ACD17C2EAC7B4DAB9C5DB1760E5 (HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScrollRect_set_horizontal_m99C076AF2B2B596C87435E1465EF0B104281B150_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScrollRect_set_vertical_m972088E788E72690AAE139E7C0F8F634C325E7CE_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, bool ___0_value, const RuntimeMethod* method) ;
inline LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* GameObject_GetComponent_TisLayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A_mB80DDAE1EBBC24C6967E5633AD129139079853E4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScroller__UpdateSpacing_m77C68FE45790FDB523167D8975289641E6749374 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, float ___0_spacing, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_get_LinearVelocity_m80BFA7929042E5C36E09E7D12B909D04B2D1DA08 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EnhancedScroller_get_IsScrolling_mFC65ADFE92845FB1122223B175C4C44F8BFB2DBA_inline (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EnhancedScroller_set_IsScrolling_m325C39C4DE217C88751EE6F457D58A3060654762_inline (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScrollerScrollingChangedDelegate_Invoke_mBA1C292A082F7418E135508D327D2B4B6ADA9AF9_inline (ScrollerScrollingChangedDelegate_t7A163170666C2A9FCCFA49F6B466A8F85E432D2E* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, bool ___1_scrolling, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26* ScrollRect_get_onValueChanged_mA6AF3832A97E82D31BB8C20BCD6E87A300E56C05_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) ;
inline void UnityAction_1__ctor_m71C125B79EE35648CFC416CA7DBBC27C8DBAD45A (UnityAction_1_t8FBFBC01962B7293F0E33F9D6F1CEAF2896D8669* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t8FBFBC01962B7293F0E33F9D6F1CEAF2896D8669*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m71C125B79EE35648CFC416CA7DBBC27C8DBAD45A_gshared)(__this, ___0_object, ___1_method, method);
}
inline void UnityEvent_1_AddListener_m2B74313C91E347D6AD24CE5B036E190E77E70851 (UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932* __this, UnityAction_1_t8FBFBC01962B7293F0E33F9D6F1CEAF2896D8669* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932*, UnityAction_1_t8FBFBC01962B7293F0E33F9D6F1CEAF2896D8669*, const RuntimeMethod*))UnityEvent_1_AddListener_m2B74313C91E347D6AD24CE5B036E190E77E70851_gshared)(__this, ___0_call, method);
}
inline void UnityEvent_1_RemoveListener_mC741D450364141F0589857DD5CC0C27D4CF72D99 (UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932* __this, UnityAction_1_t8FBFBC01962B7293F0E33F9D6F1CEAF2896D8669* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932*, UnityAction_1_t8FBFBC01962B7293F0E33F9D6F1CEAF2896D8669*, const RuntimeMethod*))UnityEvent_1_RemoveListener_mC741D450364141F0589857DD5CC0C27D4CF72D99_gshared)(__this, ___0_call, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScrollerScrolledDelegate_Invoke_m8E4D0F225AE4120CA90E40A433EFBBF33741F351_inline (ScrollerScrolledDelegate_tCF28541FE97900820A53F56F09E540DC9E293E48* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_val, float ___2_scrollPosition, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScroller_Snap_m811FE9385518C862C894756A541BB31C99C86E51 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScrollerSnappedDelegate_Invoke_m5EF631C0C36655E0AD064A299221B9439D44EE8E_inline (ScrollerSnappedDelegate_t4FDC68A802920BE5ACF5E2025694C666773619D0* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, int32_t ___1_cellIndex, int32_t ___2_dataIndex, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___3_cellView, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTweenPositionU3Ed__140__ctor_mFC89EEA84735653DA721CA58EA66E1F99BB79DED (U3CTweenPositionU3Ed__140_tC04B98631A63B795840C2E8AB6B0123E33377257* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeOutBounce_m107A5B4703F75CFC27CA2644499C5EC8BB3FDD38 (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeInBounce_m9734B25FD072D7A1793AC89F626C952B87F5EAC0 (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) ;
inline void SmallList_1__ctor_m973BB700AE4E7A0C497EEFCCF88E457834F1DD1A (SmallList_1_tDD26C24E78CCBE316084977E23188B07A348B50E* __this, const RuntimeMethod* method)
{
	((  void (*) (SmallList_1_tDD26C24E78CCBE316084977E23188B07A348B50E*, const RuntimeMethod*))SmallList_1__ctor_mAB8521EF5A3FC1E47115DBBADD6020DDC6F81A6F_gshared)(__this, method);
}
inline void SmallList_1__ctor_m2EFF2DC139E4A31E30137FD6EC85294FCF97BD0B (SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67* __this, const RuntimeMethod* method)
{
	((  void (*) (SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67*, const RuntimeMethod*))SmallList_1__ctor_m2EFF2DC139E4A31E30137FD6EC85294FCF97BD0B_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EnhancedScroller_set_IsTweening_m1319E704C500AB3971BD22151862C5A05F891E3A_inline (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScrollerTweeningChangedDelegate_Invoke_mF2B1B50F98E90D265595F057B820FEC892A85DB1_inline (ScrollerTweeningChangedDelegate_t3C04A0BE1392AA65C1FFE1831566EC3F474E147E* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, bool ___1_tweening, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_linear_mD0B889FA50D655E5FFD745B4638FCFD852232A37 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_spring_mF89E34318CC6755C99A1973ABEFB26081F486975 (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeInQuad_m2F542E1B3F85B0FB46C709216C807D5E447588C9 (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeOutQuad_mAAF4DB0C4C97A0A4F56D811B515EAA7A44ED374C (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeInOutQuad_m5C42B27D7CDB67CB877C16855115F8B333411ED6 (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeInCubic_m0F9B1345C9B90BE46842C4C19C97B4D2D05966A6 (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeOutCubic_mE10BA9EB8C22B2AF1B60467D2370361167566E20 (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeInOutCubic_m97F7B6DEBEC3B6B15E068AD1813864DB2B62AE76 (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeInQuart_mCF6D446D3A886BE1789C802C54A5B25A206D4367 (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeOutQuart_m515EFE522A84D96B62DD49F18D57F6337DD037B3 (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeInOutQuart_mBD02FB54D80397B694F4D817C0D1FAF2F7D3E1CB (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeInQuint_m79E89F75BEB38BB7EB2B16C34488B805D5BF7614 (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeOutQuint_m37C0D1681B79A8F0506409D9B5A234EE08D125C7 (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeInOutQuint_mEE67B2FB9325C23414EF653A8EABE89E2694CE05 (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeInSine_m3A5DF4067F6B19528549A3EA81111F5D7D8A5209 (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeOutSine_m4063B402292201F02031BC25EC54300A2D9489CD (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeInOutSine_m547500F2DD103187CCE1CF3B9EB8A191FC9D7B1E (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeInExpo_mFA0E64036C1622133FE85A7B1094C039690A106E (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeOutExpo_mD58F3FEAA23F281B1AAC714D016475E2EC16E429 (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeInOutExpo_m66A3E22CEBA00F71BC19CBBE8DCB8B8548106643 (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeInCirc_m20D1ED5788E1D7E74D78FE431C7D073FB55AF6E3 (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeOutCirc_mF22FC4E97AA4BB1BCA89F0D0FE7FC5C7DD16C9A0 (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeInOutCirc_m061A35F504A408BE151E478FA72F7DB65B9C4F1A (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeInOutBounce_mD8F1F11DDAF60E4889E6CD4B6C14323CE4572E2B (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeInBack_mDE6D05E7A4026A61E715804AA1E1ECA16B632CCF (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeOutBack_mF539316945EC27DE53D1485874A6F4C17BB6EDCD (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeInOutBack_m62F897D62006E235D9855C667A68E8C3D8C40220 (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeInElastic_m02B6FE8AB5EE80A40B0325D811DDC9F920DAC03F (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeOutElastic_m4ED4D8191DF7D81A998FEBF2DAE28700BF864A1E (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeInOutElastic_m103825B7AF7FB5322CEFC78864C6687C4E435A2B (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoScriptData_tB6C95DA0C7D3CBCB8CBB0F0AC396051FAF7B4879 UnitySourceGeneratedAssemblyMonoScriptTypes_v1_Get_m622D35C28946B93EB355B404CB4DBD9116597937 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t83975C13FE483AC55DA39E0A7C111FF454AE97B9____9293D42B4F66070E2D456CD973849194CEB2B3AB8A6D42454D8BC2F2597474FE_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t83975C13FE483AC55DA39E0A7C111FF454AE97B9____D518718BE43152B354C808EA39B279F907DBFEEBDF7B89C454B6F71C519AFAE5_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MonoScriptData_tB6C95DA0C7D3CBCB8CBB0F0AC396051FAF7B4879 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MonoScriptData_tB6C95DA0C7D3CBCB8CBB0F0AC396051FAF7B4879));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)306));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t83975C13FE483AC55DA39E0A7C111FF454AE97B9____D518718BE43152B354C808EA39B279F907DBFEEBDF7B89C454B6F71C519AFAE5_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		(&V_0)->___FilePathsData = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___FilePathsData), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)189));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t83975C13FE483AC55DA39E0A7C111FF454AE97B9____9293D42B4F66070E2D456CD973849194CEB2B3AB8A6D42454D8BC2F2597474FE_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		(&V_0)->___TypesData = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___TypesData), (void*)L_4);
		(&V_0)->___TotalFiles = 4;
		(&V_0)->___TotalTypes = 4;
		(&V_0)->___IsEditorOnly = (bool)0;
		MonoScriptData_tB6C95DA0C7D3CBCB8CBB0F0AC396051FAF7B4879 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__ctor_m098956F2464B4A41D666FD3DF9CE8DB975B16D95 (UnitySourceGeneratedAssemblyMonoScriptTypes_v1_t3168337B6AFADDA3F1573794BC9A88FB9D0ECC20* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void MonoScriptData_tB6C95DA0C7D3CBCB8CBB0F0AC396051FAF7B4879_marshal_pinvoke(const MonoScriptData_tB6C95DA0C7D3CBCB8CBB0F0AC396051FAF7B4879& unmarshaled, MonoScriptData_tB6C95DA0C7D3CBCB8CBB0F0AC396051FAF7B4879_marshaled_pinvoke& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_tB6C95DA0C7D3CBCB8CBB0F0AC396051FAF7B4879_marshal_pinvoke_back(const MonoScriptData_tB6C95DA0C7D3CBCB8CBB0F0AC396051FAF7B4879_marshaled_pinvoke& marshaled, MonoScriptData_tB6C95DA0C7D3CBCB8CBB0F0AC396051FAF7B4879& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___FilePathsData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___FilePathsData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePathsData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___FilePathsData));
	unmarshaled.___TypesData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___TypesData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TypesData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___TypesData));
	int32_t unmarshaledTotalTypes_temp_2 = 0;
	unmarshaledTotalTypes_temp_2 = marshaled.___TotalTypes;
	unmarshaled.___TotalTypes = unmarshaledTotalTypes_temp_2;
	int32_t unmarshaledTotalFiles_temp_3 = 0;
	unmarshaledTotalFiles_temp_3 = marshaled.___TotalFiles;
	unmarshaled.___TotalFiles = unmarshaledTotalFiles_temp_3;
	bool unmarshaledIsEditorOnly_temp_4 = false;
	unmarshaledIsEditorOnly_temp_4 = static_cast<bool>(marshaled.___IsEditorOnly);
	unmarshaled.___IsEditorOnly = unmarshaledIsEditorOnly_temp_4;
}
IL2CPP_EXTERN_C void MonoScriptData_tB6C95DA0C7D3CBCB8CBB0F0AC396051FAF7B4879_marshal_pinvoke_cleanup(MonoScriptData_tB6C95DA0C7D3CBCB8CBB0F0AC396051FAF7B4879_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
}
IL2CPP_EXTERN_C void MonoScriptData_tB6C95DA0C7D3CBCB8CBB0F0AC396051FAF7B4879_marshal_com(const MonoScriptData_tB6C95DA0C7D3CBCB8CBB0F0AC396051FAF7B4879& unmarshaled, MonoScriptData_tB6C95DA0C7D3CBCB8CBB0F0AC396051FAF7B4879_marshaled_com& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_tB6C95DA0C7D3CBCB8CBB0F0AC396051FAF7B4879_marshal_com_back(const MonoScriptData_tB6C95DA0C7D3CBCB8CBB0F0AC396051FAF7B4879_marshaled_com& marshaled, MonoScriptData_tB6C95DA0C7D3CBCB8CBB0F0AC396051FAF7B4879& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___FilePathsData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___FilePathsData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePathsData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___FilePathsData));
	unmarshaled.___TypesData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___TypesData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TypesData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___TypesData));
	int32_t unmarshaledTotalTypes_temp_2 = 0;
	unmarshaledTotalTypes_temp_2 = marshaled.___TotalTypes;
	unmarshaled.___TotalTypes = unmarshaledTotalTypes_temp_2;
	int32_t unmarshaledTotalFiles_temp_3 = 0;
	unmarshaledTotalFiles_temp_3 = marshaled.___TotalFiles;
	unmarshaled.___TotalFiles = unmarshaledTotalFiles_temp_3;
	bool unmarshaledIsEditorOnly_temp_4 = false;
	unmarshaledIsEditorOnly_temp_4 = static_cast<bool>(marshaled.___IsEditorOnly);
	unmarshaled.___IsEditorOnly = unmarshaledIsEditorOnly_temp_4;
}
IL2CPP_EXTERN_C void MonoScriptData_tB6C95DA0C7D3CBCB8CBB0F0AC396051FAF7B4879_marshal_com_cleanup(MonoScriptData_tB6C95DA0C7D3CBCB8CBB0F0AC396051FAF7B4879_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void CellViewVisibilityChangedDelegate_Invoke_m8809BAE14177603BDD5AA7B730B14D108A7258EB_Multicast(CellViewVisibilityChangedDelegate_t43F8249D9299E7AD6E37272385ADBEE1017BA3DD* __this, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___0_cellView, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CellViewVisibilityChangedDelegate_t43F8249D9299E7AD6E37272385ADBEE1017BA3DD* currentDelegate = reinterpret_cast<CellViewVisibilityChangedDelegate_t43F8249D9299E7AD6E37272385ADBEE1017BA3DD*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_cellView, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void CellViewVisibilityChangedDelegate_Invoke_m8809BAE14177603BDD5AA7B730B14D108A7258EB_OpenInst(CellViewVisibilityChangedDelegate_t43F8249D9299E7AD6E37272385ADBEE1017BA3DD* __this, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___0_cellView, const RuntimeMethod* method)
{
	NullCheck(___0_cellView);
	typedef void (*FunctionPointerType) (EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_cellView, method);
}
void CellViewVisibilityChangedDelegate_Invoke_m8809BAE14177603BDD5AA7B730B14D108A7258EB_OpenStatic(CellViewVisibilityChangedDelegate_t43F8249D9299E7AD6E37272385ADBEE1017BA3DD* __this, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___0_cellView, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_cellView, method);
}
void CellViewVisibilityChangedDelegate_Invoke_m8809BAE14177603BDD5AA7B730B14D108A7258EB_OpenVirtual(CellViewVisibilityChangedDelegate_t43F8249D9299E7AD6E37272385ADBEE1017BA3DD* __this, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___0_cellView, const RuntimeMethod* method)
{
	NullCheck(___0_cellView);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_cellView);
}
void CellViewVisibilityChangedDelegate_Invoke_m8809BAE14177603BDD5AA7B730B14D108A7258EB_OpenInterface(CellViewVisibilityChangedDelegate_t43F8249D9299E7AD6E37272385ADBEE1017BA3DD* __this, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___0_cellView, const RuntimeMethod* method)
{
	NullCheck(___0_cellView);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_cellView);
}
void CellViewVisibilityChangedDelegate_Invoke_m8809BAE14177603BDD5AA7B730B14D108A7258EB_OpenGenericVirtual(CellViewVisibilityChangedDelegate_t43F8249D9299E7AD6E37272385ADBEE1017BA3DD* __this, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___0_cellView, const RuntimeMethod* method)
{
	NullCheck(___0_cellView);
	GenericVirtualActionInvoker0::Invoke(method, ___0_cellView);
}
void CellViewVisibilityChangedDelegate_Invoke_m8809BAE14177603BDD5AA7B730B14D108A7258EB_OpenGenericInterface(CellViewVisibilityChangedDelegate_t43F8249D9299E7AD6E37272385ADBEE1017BA3DD* __this, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___0_cellView, const RuntimeMethod* method)
{
	NullCheck(___0_cellView);
	GenericInterfaceActionInvoker0::Invoke(method, ___0_cellView);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CellViewVisibilityChangedDelegate__ctor_mA759A39E2CD01EBE824FC089FABAB2F54D1DCB58 (CellViewVisibilityChangedDelegate_t43F8249D9299E7AD6E37272385ADBEE1017BA3DD* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&CellViewVisibilityChangedDelegate_Invoke_m8809BAE14177603BDD5AA7B730B14D108A7258EB_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&CellViewVisibilityChangedDelegate_Invoke_m8809BAE14177603BDD5AA7B730B14D108A7258EB_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&CellViewVisibilityChangedDelegate_Invoke_m8809BAE14177603BDD5AA7B730B14D108A7258EB_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&CellViewVisibilityChangedDelegate_Invoke_m8809BAE14177603BDD5AA7B730B14D108A7258EB_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&CellViewVisibilityChangedDelegate_Invoke_m8809BAE14177603BDD5AA7B730B14D108A7258EB_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&CellViewVisibilityChangedDelegate_Invoke_m8809BAE14177603BDD5AA7B730B14D108A7258EB_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&CellViewVisibilityChangedDelegate_Invoke_m8809BAE14177603BDD5AA7B730B14D108A7258EB_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CellViewVisibilityChangedDelegate_Invoke_m8809BAE14177603BDD5AA7B730B14D108A7258EB (CellViewVisibilityChangedDelegate_t43F8249D9299E7AD6E37272385ADBEE1017BA3DD* __this, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___0_cellView, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_cellView, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CellViewVisibilityChangedDelegate_BeginInvoke_m86350E87D5C4E83DBD94F008A0AA46A929E26B1B (CellViewVisibilityChangedDelegate_t43F8249D9299E7AD6E37272385ADBEE1017BA3DD* __this, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___0_cellView, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_cellView;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CellViewVisibilityChangedDelegate_EndInvoke_mD810B301ACC9EB37174AACF0F6139F333BC77523 (CellViewVisibilityChangedDelegate_t43F8249D9299E7AD6E37272385ADBEE1017BA3DD* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void CellViewWillRecycleDelegate_Invoke_m4B873B37A7A3BA5E336CBC3281CBF933B3DDA2C4_Multicast(CellViewWillRecycleDelegate_tBFC8C3F20197FE3179695C4C338EFAF7D618875C* __this, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___0_cellView, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CellViewWillRecycleDelegate_tBFC8C3F20197FE3179695C4C338EFAF7D618875C* currentDelegate = reinterpret_cast<CellViewWillRecycleDelegate_tBFC8C3F20197FE3179695C4C338EFAF7D618875C*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_cellView, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void CellViewWillRecycleDelegate_Invoke_m4B873B37A7A3BA5E336CBC3281CBF933B3DDA2C4_OpenInst(CellViewWillRecycleDelegate_tBFC8C3F20197FE3179695C4C338EFAF7D618875C* __this, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___0_cellView, const RuntimeMethod* method)
{
	NullCheck(___0_cellView);
	typedef void (*FunctionPointerType) (EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_cellView, method);
}
void CellViewWillRecycleDelegate_Invoke_m4B873B37A7A3BA5E336CBC3281CBF933B3DDA2C4_OpenStatic(CellViewWillRecycleDelegate_tBFC8C3F20197FE3179695C4C338EFAF7D618875C* __this, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___0_cellView, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_cellView, method);
}
void CellViewWillRecycleDelegate_Invoke_m4B873B37A7A3BA5E336CBC3281CBF933B3DDA2C4_OpenVirtual(CellViewWillRecycleDelegate_tBFC8C3F20197FE3179695C4C338EFAF7D618875C* __this, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___0_cellView, const RuntimeMethod* method)
{
	NullCheck(___0_cellView);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_cellView);
}
void CellViewWillRecycleDelegate_Invoke_m4B873B37A7A3BA5E336CBC3281CBF933B3DDA2C4_OpenInterface(CellViewWillRecycleDelegate_tBFC8C3F20197FE3179695C4C338EFAF7D618875C* __this, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___0_cellView, const RuntimeMethod* method)
{
	NullCheck(___0_cellView);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_cellView);
}
void CellViewWillRecycleDelegate_Invoke_m4B873B37A7A3BA5E336CBC3281CBF933B3DDA2C4_OpenGenericVirtual(CellViewWillRecycleDelegate_tBFC8C3F20197FE3179695C4C338EFAF7D618875C* __this, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___0_cellView, const RuntimeMethod* method)
{
	NullCheck(___0_cellView);
	GenericVirtualActionInvoker0::Invoke(method, ___0_cellView);
}
void CellViewWillRecycleDelegate_Invoke_m4B873B37A7A3BA5E336CBC3281CBF933B3DDA2C4_OpenGenericInterface(CellViewWillRecycleDelegate_tBFC8C3F20197FE3179695C4C338EFAF7D618875C* __this, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___0_cellView, const RuntimeMethod* method)
{
	NullCheck(___0_cellView);
	GenericInterfaceActionInvoker0::Invoke(method, ___0_cellView);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CellViewWillRecycleDelegate__ctor_m8AC3141197CAE26263637523943242FD00068432 (CellViewWillRecycleDelegate_tBFC8C3F20197FE3179695C4C338EFAF7D618875C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&CellViewWillRecycleDelegate_Invoke_m4B873B37A7A3BA5E336CBC3281CBF933B3DDA2C4_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&CellViewWillRecycleDelegate_Invoke_m4B873B37A7A3BA5E336CBC3281CBF933B3DDA2C4_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&CellViewWillRecycleDelegate_Invoke_m4B873B37A7A3BA5E336CBC3281CBF933B3DDA2C4_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&CellViewWillRecycleDelegate_Invoke_m4B873B37A7A3BA5E336CBC3281CBF933B3DDA2C4_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&CellViewWillRecycleDelegate_Invoke_m4B873B37A7A3BA5E336CBC3281CBF933B3DDA2C4_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&CellViewWillRecycleDelegate_Invoke_m4B873B37A7A3BA5E336CBC3281CBF933B3DDA2C4_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&CellViewWillRecycleDelegate_Invoke_m4B873B37A7A3BA5E336CBC3281CBF933B3DDA2C4_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CellViewWillRecycleDelegate_Invoke_m4B873B37A7A3BA5E336CBC3281CBF933B3DDA2C4 (CellViewWillRecycleDelegate_tBFC8C3F20197FE3179695C4C338EFAF7D618875C* __this, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___0_cellView, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_cellView, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CellViewWillRecycleDelegate_BeginInvoke_m07BC3768F546FC096728749263FD495C35D6A7F3 (CellViewWillRecycleDelegate_tBFC8C3F20197FE3179695C4C338EFAF7D618875C* __this, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___0_cellView, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_cellView;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CellViewWillRecycleDelegate_EndInvoke_m130D003D2C50E77C36EB595E4666470FC181E7CA (CellViewWillRecycleDelegate_tBFC8C3F20197FE3179695C4C338EFAF7D618875C* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ScrollerScrolledDelegate_Invoke_m8E4D0F225AE4120CA90E40A433EFBBF33741F351_Multicast(ScrollerScrolledDelegate_tCF28541FE97900820A53F56F09E540DC9E293E48* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_val, float ___2_scrollPosition, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ScrollerScrolledDelegate_tCF28541FE97900820A53F56F09E540DC9E293E48* currentDelegate = reinterpret_cast<ScrollerScrolledDelegate_tCF28541FE97900820A53F56F09E540DC9E293E48*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_scroller, ___1_val, ___2_scrollPosition, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void ScrollerScrolledDelegate_Invoke_m8E4D0F225AE4120CA90E40A433EFBBF33741F351_OpenInst(ScrollerScrolledDelegate_tCF28541FE97900820A53F56F09E540DC9E293E48* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_val, float ___2_scrollPosition, const RuntimeMethod* method)
{
	NullCheck(___0_scroller);
	typedef void (*FunctionPointerType) (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_scroller, ___1_val, ___2_scrollPosition, method);
}
void ScrollerScrolledDelegate_Invoke_m8E4D0F225AE4120CA90E40A433EFBBF33741F351_OpenStatic(ScrollerScrolledDelegate_tCF28541FE97900820A53F56F09E540DC9E293E48* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_val, float ___2_scrollPosition, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_scroller, ___1_val, ___2_scrollPosition, method);
}
void ScrollerScrolledDelegate_Invoke_m8E4D0F225AE4120CA90E40A433EFBBF33741F351_OpenVirtual(ScrollerScrolledDelegate_tCF28541FE97900820A53F56F09E540DC9E293E48* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_val, float ___2_scrollPosition, const RuntimeMethod* method)
{
	NullCheck(___0_scroller);
	VirtualActionInvoker2< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, float >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_scroller, ___1_val, ___2_scrollPosition);
}
void ScrollerScrolledDelegate_Invoke_m8E4D0F225AE4120CA90E40A433EFBBF33741F351_OpenInterface(ScrollerScrolledDelegate_tCF28541FE97900820A53F56F09E540DC9E293E48* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_val, float ___2_scrollPosition, const RuntimeMethod* method)
{
	NullCheck(___0_scroller);
	InterfaceActionInvoker2< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, float >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_scroller, ___1_val, ___2_scrollPosition);
}
void ScrollerScrolledDelegate_Invoke_m8E4D0F225AE4120CA90E40A433EFBBF33741F351_OpenGenericVirtual(ScrollerScrolledDelegate_tCF28541FE97900820A53F56F09E540DC9E293E48* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_val, float ___2_scrollPosition, const RuntimeMethod* method)
{
	NullCheck(___0_scroller);
	GenericVirtualActionInvoker2< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, float >::Invoke(method, ___0_scroller, ___1_val, ___2_scrollPosition);
}
void ScrollerScrolledDelegate_Invoke_m8E4D0F225AE4120CA90E40A433EFBBF33741F351_OpenGenericInterface(ScrollerScrolledDelegate_tCF28541FE97900820A53F56F09E540DC9E293E48* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_val, float ___2_scrollPosition, const RuntimeMethod* method)
{
	NullCheck(___0_scroller);
	GenericInterfaceActionInvoker2< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, float >::Invoke(method, ___0_scroller, ___1_val, ___2_scrollPosition);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollerScrolledDelegate__ctor_m77DE89FAD0D1F7FFD1ECCADB3E8F7C6770CF35CE (ScrollerScrolledDelegate_tCF28541FE97900820A53F56F09E540DC9E293E48* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&ScrollerScrolledDelegate_Invoke_m8E4D0F225AE4120CA90E40A433EFBBF33741F351_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&ScrollerScrolledDelegate_Invoke_m8E4D0F225AE4120CA90E40A433EFBBF33741F351_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&ScrollerScrolledDelegate_Invoke_m8E4D0F225AE4120CA90E40A433EFBBF33741F351_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&ScrollerScrolledDelegate_Invoke_m8E4D0F225AE4120CA90E40A433EFBBF33741F351_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&ScrollerScrolledDelegate_Invoke_m8E4D0F225AE4120CA90E40A433EFBBF33741F351_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&ScrollerScrolledDelegate_Invoke_m8E4D0F225AE4120CA90E40A433EFBBF33741F351_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&ScrollerScrolledDelegate_Invoke_m8E4D0F225AE4120CA90E40A433EFBBF33741F351_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollerScrolledDelegate_Invoke_m8E4D0F225AE4120CA90E40A433EFBBF33741F351 (ScrollerScrolledDelegate_tCF28541FE97900820A53F56F09E540DC9E293E48* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_val, float ___2_scrollPosition, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_scroller, ___1_val, ___2_scrollPosition, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScrollerScrolledDelegate_BeginInvoke_m9723EE9F1737952CE2515802208A52EAE3CD6647 (ScrollerScrolledDelegate_tCF28541FE97900820A53F56F09E540DC9E293E48* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_val, float ___2_scrollPosition, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___0_scroller;
	__d_args[1] = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &___1_val);
	__d_args[2] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___2_scrollPosition);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollerScrolledDelegate_EndInvoke_mF7D0470EAD7A351895B14A57A8784B1B01F74B50 (ScrollerScrolledDelegate_tCF28541FE97900820A53F56F09E540DC9E293E48* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ScrollerSnappedDelegate_Invoke_m5EF631C0C36655E0AD064A299221B9439D44EE8E_Multicast(ScrollerSnappedDelegate_t4FDC68A802920BE5ACF5E2025694C666773619D0* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, int32_t ___1_cellIndex, int32_t ___2_dataIndex, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___3_cellView, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ScrollerSnappedDelegate_t4FDC68A802920BE5ACF5E2025694C666773619D0* currentDelegate = reinterpret_cast<ScrollerSnappedDelegate_t4FDC68A802920BE5ACF5E2025694C666773619D0*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B*, int32_t, int32_t, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_scroller, ___1_cellIndex, ___2_dataIndex, ___3_cellView, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void ScrollerSnappedDelegate_Invoke_m5EF631C0C36655E0AD064A299221B9439D44EE8E_OpenInst(ScrollerSnappedDelegate_t4FDC68A802920BE5ACF5E2025694C666773619D0* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, int32_t ___1_cellIndex, int32_t ___2_dataIndex, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___3_cellView, const RuntimeMethod* method)
{
	NullCheck(___0_scroller);
	typedef void (*FunctionPointerType) (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B*, int32_t, int32_t, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_scroller, ___1_cellIndex, ___2_dataIndex, ___3_cellView, method);
}
void ScrollerSnappedDelegate_Invoke_m5EF631C0C36655E0AD064A299221B9439D44EE8E_OpenStatic(ScrollerSnappedDelegate_t4FDC68A802920BE5ACF5E2025694C666773619D0* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, int32_t ___1_cellIndex, int32_t ___2_dataIndex, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___3_cellView, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B*, int32_t, int32_t, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_scroller, ___1_cellIndex, ___2_dataIndex, ___3_cellView, method);
}
void ScrollerSnappedDelegate_Invoke_m5EF631C0C36655E0AD064A299221B9439D44EE8E_OpenVirtual(ScrollerSnappedDelegate_t4FDC68A802920BE5ACF5E2025694C666773619D0* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, int32_t ___1_cellIndex, int32_t ___2_dataIndex, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___3_cellView, const RuntimeMethod* method)
{
	NullCheck(___0_scroller);
	VirtualActionInvoker3< int32_t, int32_t, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_scroller, ___1_cellIndex, ___2_dataIndex, ___3_cellView);
}
void ScrollerSnappedDelegate_Invoke_m5EF631C0C36655E0AD064A299221B9439D44EE8E_OpenInterface(ScrollerSnappedDelegate_t4FDC68A802920BE5ACF5E2025694C666773619D0* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, int32_t ___1_cellIndex, int32_t ___2_dataIndex, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___3_cellView, const RuntimeMethod* method)
{
	NullCheck(___0_scroller);
	InterfaceActionInvoker3< int32_t, int32_t, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_scroller, ___1_cellIndex, ___2_dataIndex, ___3_cellView);
}
void ScrollerSnappedDelegate_Invoke_m5EF631C0C36655E0AD064A299221B9439D44EE8E_OpenGenericVirtual(ScrollerSnappedDelegate_t4FDC68A802920BE5ACF5E2025694C666773619D0* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, int32_t ___1_cellIndex, int32_t ___2_dataIndex, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___3_cellView, const RuntimeMethod* method)
{
	NullCheck(___0_scroller);
	GenericVirtualActionInvoker3< int32_t, int32_t, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* >::Invoke(method, ___0_scroller, ___1_cellIndex, ___2_dataIndex, ___3_cellView);
}
void ScrollerSnappedDelegate_Invoke_m5EF631C0C36655E0AD064A299221B9439D44EE8E_OpenGenericInterface(ScrollerSnappedDelegate_t4FDC68A802920BE5ACF5E2025694C666773619D0* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, int32_t ___1_cellIndex, int32_t ___2_dataIndex, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___3_cellView, const RuntimeMethod* method)
{
	NullCheck(___0_scroller);
	GenericInterfaceActionInvoker3< int32_t, int32_t, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* >::Invoke(method, ___0_scroller, ___1_cellIndex, ___2_dataIndex, ___3_cellView);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollerSnappedDelegate__ctor_m90133C53263774841870D36F50663D0BA80A0798 (ScrollerSnappedDelegate_t4FDC68A802920BE5ACF5E2025694C666773619D0* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 4;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&ScrollerSnappedDelegate_Invoke_m5EF631C0C36655E0AD064A299221B9439D44EE8E_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&ScrollerSnappedDelegate_Invoke_m5EF631C0C36655E0AD064A299221B9439D44EE8E_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&ScrollerSnappedDelegate_Invoke_m5EF631C0C36655E0AD064A299221B9439D44EE8E_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&ScrollerSnappedDelegate_Invoke_m5EF631C0C36655E0AD064A299221B9439D44EE8E_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&ScrollerSnappedDelegate_Invoke_m5EF631C0C36655E0AD064A299221B9439D44EE8E_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&ScrollerSnappedDelegate_Invoke_m5EF631C0C36655E0AD064A299221B9439D44EE8E_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&ScrollerSnappedDelegate_Invoke_m5EF631C0C36655E0AD064A299221B9439D44EE8E_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollerSnappedDelegate_Invoke_m5EF631C0C36655E0AD064A299221B9439D44EE8E (ScrollerSnappedDelegate_t4FDC68A802920BE5ACF5E2025694C666773619D0* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, int32_t ___1_cellIndex, int32_t ___2_dataIndex, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___3_cellView, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B*, int32_t, int32_t, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_scroller, ___1_cellIndex, ___2_dataIndex, ___3_cellView, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScrollerSnappedDelegate_BeginInvoke_m2DB6FFB3D5BCD894813ED6B9693AC2A85557D6F7 (ScrollerSnappedDelegate_t4FDC68A802920BE5ACF5E2025694C666773619D0* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, int32_t ___1_cellIndex, int32_t ___2_dataIndex, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___3_cellView, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___4_callback, RuntimeObject* ___5_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = ___0_scroller;
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___1_cellIndex);
	__d_args[2] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___2_dataIndex);
	__d_args[3] = ___3_cellView;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___4_callback, (RuntimeObject*)___5_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollerSnappedDelegate_EndInvoke_m3DB933FEAFC891E8B272F80FB4B8D16F1A2756D8 (ScrollerSnappedDelegate_t4FDC68A802920BE5ACF5E2025694C666773619D0* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ScrollerScrollingChangedDelegate_Invoke_mBA1C292A082F7418E135508D327D2B4B6ADA9AF9_Multicast(ScrollerScrollingChangedDelegate_t7A163170666C2A9FCCFA49F6B466A8F85E432D2E* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, bool ___1_scrolling, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ScrollerScrollingChangedDelegate_t7A163170666C2A9FCCFA49F6B466A8F85E432D2E* currentDelegate = reinterpret_cast<ScrollerScrollingChangedDelegate_t7A163170666C2A9FCCFA49F6B466A8F85E432D2E*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B*, bool, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_scroller, ___1_scrolling, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void ScrollerScrollingChangedDelegate_Invoke_mBA1C292A082F7418E135508D327D2B4B6ADA9AF9_OpenInst(ScrollerScrollingChangedDelegate_t7A163170666C2A9FCCFA49F6B466A8F85E432D2E* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, bool ___1_scrolling, const RuntimeMethod* method)
{
	NullCheck(___0_scroller);
	typedef void (*FunctionPointerType) (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_scroller, ___1_scrolling, method);
}
void ScrollerScrollingChangedDelegate_Invoke_mBA1C292A082F7418E135508D327D2B4B6ADA9AF9_OpenStatic(ScrollerScrollingChangedDelegate_t7A163170666C2A9FCCFA49F6B466A8F85E432D2E* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, bool ___1_scrolling, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_scroller, ___1_scrolling, method);
}
void ScrollerScrollingChangedDelegate_Invoke_mBA1C292A082F7418E135508D327D2B4B6ADA9AF9_OpenVirtual(ScrollerScrollingChangedDelegate_t7A163170666C2A9FCCFA49F6B466A8F85E432D2E* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, bool ___1_scrolling, const RuntimeMethod* method)
{
	NullCheck(___0_scroller);
	VirtualActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_scroller, ___1_scrolling);
}
void ScrollerScrollingChangedDelegate_Invoke_mBA1C292A082F7418E135508D327D2B4B6ADA9AF9_OpenInterface(ScrollerScrollingChangedDelegate_t7A163170666C2A9FCCFA49F6B466A8F85E432D2E* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, bool ___1_scrolling, const RuntimeMethod* method)
{
	NullCheck(___0_scroller);
	InterfaceActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_scroller, ___1_scrolling);
}
void ScrollerScrollingChangedDelegate_Invoke_mBA1C292A082F7418E135508D327D2B4B6ADA9AF9_OpenGenericVirtual(ScrollerScrollingChangedDelegate_t7A163170666C2A9FCCFA49F6B466A8F85E432D2E* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, bool ___1_scrolling, const RuntimeMethod* method)
{
	NullCheck(___0_scroller);
	GenericVirtualActionInvoker1< bool >::Invoke(method, ___0_scroller, ___1_scrolling);
}
void ScrollerScrollingChangedDelegate_Invoke_mBA1C292A082F7418E135508D327D2B4B6ADA9AF9_OpenGenericInterface(ScrollerScrollingChangedDelegate_t7A163170666C2A9FCCFA49F6B466A8F85E432D2E* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, bool ___1_scrolling, const RuntimeMethod* method)
{
	NullCheck(___0_scroller);
	GenericInterfaceActionInvoker1< bool >::Invoke(method, ___0_scroller, ___1_scrolling);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollerScrollingChangedDelegate__ctor_m517DA6032B439AAEC59F791B93C05D4F12EAD939 (ScrollerScrollingChangedDelegate_t7A163170666C2A9FCCFA49F6B466A8F85E432D2E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&ScrollerScrollingChangedDelegate_Invoke_mBA1C292A082F7418E135508D327D2B4B6ADA9AF9_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&ScrollerScrollingChangedDelegate_Invoke_mBA1C292A082F7418E135508D327D2B4B6ADA9AF9_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&ScrollerScrollingChangedDelegate_Invoke_mBA1C292A082F7418E135508D327D2B4B6ADA9AF9_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&ScrollerScrollingChangedDelegate_Invoke_mBA1C292A082F7418E135508D327D2B4B6ADA9AF9_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&ScrollerScrollingChangedDelegate_Invoke_mBA1C292A082F7418E135508D327D2B4B6ADA9AF9_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&ScrollerScrollingChangedDelegate_Invoke_mBA1C292A082F7418E135508D327D2B4B6ADA9AF9_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&ScrollerScrollingChangedDelegate_Invoke_mBA1C292A082F7418E135508D327D2B4B6ADA9AF9_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollerScrollingChangedDelegate_Invoke_mBA1C292A082F7418E135508D327D2B4B6ADA9AF9 (ScrollerScrollingChangedDelegate_t7A163170666C2A9FCCFA49F6B466A8F85E432D2E* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, bool ___1_scrolling, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_scroller, ___1_scrolling, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScrollerScrollingChangedDelegate_BeginInvoke_m9807198A1340286EE7B1B261EDDE1B877A9B9401 (ScrollerScrollingChangedDelegate_t7A163170666C2A9FCCFA49F6B466A8F85E432D2E* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, bool ___1_scrolling, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___0_scroller;
	__d_args[1] = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &___1_scrolling);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollerScrollingChangedDelegate_EndInvoke_mC47BBDFD07EE032E96123785579CE7455AB82CA8 (ScrollerScrollingChangedDelegate_t7A163170666C2A9FCCFA49F6B466A8F85E432D2E* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ScrollerTweeningChangedDelegate_Invoke_mF2B1B50F98E90D265595F057B820FEC892A85DB1_Multicast(ScrollerTweeningChangedDelegate_t3C04A0BE1392AA65C1FFE1831566EC3F474E147E* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, bool ___1_tweening, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ScrollerTweeningChangedDelegate_t3C04A0BE1392AA65C1FFE1831566EC3F474E147E* currentDelegate = reinterpret_cast<ScrollerTweeningChangedDelegate_t3C04A0BE1392AA65C1FFE1831566EC3F474E147E*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B*, bool, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_scroller, ___1_tweening, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void ScrollerTweeningChangedDelegate_Invoke_mF2B1B50F98E90D265595F057B820FEC892A85DB1_OpenInst(ScrollerTweeningChangedDelegate_t3C04A0BE1392AA65C1FFE1831566EC3F474E147E* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, bool ___1_tweening, const RuntimeMethod* method)
{
	NullCheck(___0_scroller);
	typedef void (*FunctionPointerType) (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_scroller, ___1_tweening, method);
}
void ScrollerTweeningChangedDelegate_Invoke_mF2B1B50F98E90D265595F057B820FEC892A85DB1_OpenStatic(ScrollerTweeningChangedDelegate_t3C04A0BE1392AA65C1FFE1831566EC3F474E147E* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, bool ___1_tweening, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_scroller, ___1_tweening, method);
}
void ScrollerTweeningChangedDelegate_Invoke_mF2B1B50F98E90D265595F057B820FEC892A85DB1_OpenVirtual(ScrollerTweeningChangedDelegate_t3C04A0BE1392AA65C1FFE1831566EC3F474E147E* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, bool ___1_tweening, const RuntimeMethod* method)
{
	NullCheck(___0_scroller);
	VirtualActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_scroller, ___1_tweening);
}
void ScrollerTweeningChangedDelegate_Invoke_mF2B1B50F98E90D265595F057B820FEC892A85DB1_OpenInterface(ScrollerTweeningChangedDelegate_t3C04A0BE1392AA65C1FFE1831566EC3F474E147E* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, bool ___1_tweening, const RuntimeMethod* method)
{
	NullCheck(___0_scroller);
	InterfaceActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_scroller, ___1_tweening);
}
void ScrollerTweeningChangedDelegate_Invoke_mF2B1B50F98E90D265595F057B820FEC892A85DB1_OpenGenericVirtual(ScrollerTweeningChangedDelegate_t3C04A0BE1392AA65C1FFE1831566EC3F474E147E* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, bool ___1_tweening, const RuntimeMethod* method)
{
	NullCheck(___0_scroller);
	GenericVirtualActionInvoker1< bool >::Invoke(method, ___0_scroller, ___1_tweening);
}
void ScrollerTweeningChangedDelegate_Invoke_mF2B1B50F98E90D265595F057B820FEC892A85DB1_OpenGenericInterface(ScrollerTweeningChangedDelegate_t3C04A0BE1392AA65C1FFE1831566EC3F474E147E* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, bool ___1_tweening, const RuntimeMethod* method)
{
	NullCheck(___0_scroller);
	GenericInterfaceActionInvoker1< bool >::Invoke(method, ___0_scroller, ___1_tweening);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollerTweeningChangedDelegate__ctor_mCD3EE3F46F0E351E7ECB98E5241802FCA63601C8 (ScrollerTweeningChangedDelegate_t3C04A0BE1392AA65C1FFE1831566EC3F474E147E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&ScrollerTweeningChangedDelegate_Invoke_mF2B1B50F98E90D265595F057B820FEC892A85DB1_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&ScrollerTweeningChangedDelegate_Invoke_mF2B1B50F98E90D265595F057B820FEC892A85DB1_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&ScrollerTweeningChangedDelegate_Invoke_mF2B1B50F98E90D265595F057B820FEC892A85DB1_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&ScrollerTweeningChangedDelegate_Invoke_mF2B1B50F98E90D265595F057B820FEC892A85DB1_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&ScrollerTweeningChangedDelegate_Invoke_mF2B1B50F98E90D265595F057B820FEC892A85DB1_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&ScrollerTweeningChangedDelegate_Invoke_mF2B1B50F98E90D265595F057B820FEC892A85DB1_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&ScrollerTweeningChangedDelegate_Invoke_mF2B1B50F98E90D265595F057B820FEC892A85DB1_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollerTweeningChangedDelegate_Invoke_mF2B1B50F98E90D265595F057B820FEC892A85DB1 (ScrollerTweeningChangedDelegate_t3C04A0BE1392AA65C1FFE1831566EC3F474E147E* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, bool ___1_tweening, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_scroller, ___1_tweening, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScrollerTweeningChangedDelegate_BeginInvoke_m281E291E231B5BC4F27B4B4A0B7C80FE9D644B35 (ScrollerTweeningChangedDelegate_t3C04A0BE1392AA65C1FFE1831566EC3F474E147E* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, bool ___1_tweening, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___0_scroller;
	__d_args[1] = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &___1_tweening);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollerTweeningChangedDelegate_EndInvoke_m9E9900F0FEAB440E0F02F52F48F343AEEA3270EF (ScrollerTweeningChangedDelegate_t3C04A0BE1392AA65C1FFE1831566EC3F474E147E* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void CellViewInstantiated_Invoke_m175D8E92654CAC26386CE53E21C25FB240C5A2CF_Multicast(CellViewInstantiated_tD9FCFB13CC0F4A6DD1B1502099F73B8CB87F83CE* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___1_cellView, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CellViewInstantiated_tD9FCFB13CC0F4A6DD1B1502099F73B8CB87F83CE* currentDelegate = reinterpret_cast<CellViewInstantiated_tD9FCFB13CC0F4A6DD1B1502099F73B8CB87F83CE*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B*, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_scroller, ___1_cellView, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void CellViewInstantiated_Invoke_m175D8E92654CAC26386CE53E21C25FB240C5A2CF_OpenInst(CellViewInstantiated_tD9FCFB13CC0F4A6DD1B1502099F73B8CB87F83CE* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___1_cellView, const RuntimeMethod* method)
{
	NullCheck(___0_scroller);
	typedef void (*FunctionPointerType) (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B*, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_scroller, ___1_cellView, method);
}
void CellViewInstantiated_Invoke_m175D8E92654CAC26386CE53E21C25FB240C5A2CF_OpenStatic(CellViewInstantiated_tD9FCFB13CC0F4A6DD1B1502099F73B8CB87F83CE* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___1_cellView, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B*, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_scroller, ___1_cellView, method);
}
void CellViewInstantiated_Invoke_m175D8E92654CAC26386CE53E21C25FB240C5A2CF_OpenVirtual(CellViewInstantiated_tD9FCFB13CC0F4A6DD1B1502099F73B8CB87F83CE* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___1_cellView, const RuntimeMethod* method)
{
	NullCheck(___0_scroller);
	VirtualActionInvoker1< EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_scroller, ___1_cellView);
}
void CellViewInstantiated_Invoke_m175D8E92654CAC26386CE53E21C25FB240C5A2CF_OpenInterface(CellViewInstantiated_tD9FCFB13CC0F4A6DD1B1502099F73B8CB87F83CE* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___1_cellView, const RuntimeMethod* method)
{
	NullCheck(___0_scroller);
	InterfaceActionInvoker1< EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_scroller, ___1_cellView);
}
void CellViewInstantiated_Invoke_m175D8E92654CAC26386CE53E21C25FB240C5A2CF_OpenGenericVirtual(CellViewInstantiated_tD9FCFB13CC0F4A6DD1B1502099F73B8CB87F83CE* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___1_cellView, const RuntimeMethod* method)
{
	NullCheck(___0_scroller);
	GenericVirtualActionInvoker1< EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* >::Invoke(method, ___0_scroller, ___1_cellView);
}
void CellViewInstantiated_Invoke_m175D8E92654CAC26386CE53E21C25FB240C5A2CF_OpenGenericInterface(CellViewInstantiated_tD9FCFB13CC0F4A6DD1B1502099F73B8CB87F83CE* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___1_cellView, const RuntimeMethod* method)
{
	NullCheck(___0_scroller);
	GenericInterfaceActionInvoker1< EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* >::Invoke(method, ___0_scroller, ___1_cellView);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CellViewInstantiated__ctor_m387145E8614BE8E66DB3FEA17000C3A58595D385 (CellViewInstantiated_tD9FCFB13CC0F4A6DD1B1502099F73B8CB87F83CE* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&CellViewInstantiated_Invoke_m175D8E92654CAC26386CE53E21C25FB240C5A2CF_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&CellViewInstantiated_Invoke_m175D8E92654CAC26386CE53E21C25FB240C5A2CF_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&CellViewInstantiated_Invoke_m175D8E92654CAC26386CE53E21C25FB240C5A2CF_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&CellViewInstantiated_Invoke_m175D8E92654CAC26386CE53E21C25FB240C5A2CF_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&CellViewInstantiated_Invoke_m175D8E92654CAC26386CE53E21C25FB240C5A2CF_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&CellViewInstantiated_Invoke_m175D8E92654CAC26386CE53E21C25FB240C5A2CF_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&CellViewInstantiated_Invoke_m175D8E92654CAC26386CE53E21C25FB240C5A2CF_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CellViewInstantiated_Invoke_m175D8E92654CAC26386CE53E21C25FB240C5A2CF (CellViewInstantiated_tD9FCFB13CC0F4A6DD1B1502099F73B8CB87F83CE* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___1_cellView, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B*, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_scroller, ___1_cellView, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CellViewInstantiated_BeginInvoke_mF8D615316591E3FEC0CE8BB47FE32ED5E01DA108 (CellViewInstantiated_tD9FCFB13CC0F4A6DD1B1502099F73B8CB87F83CE* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___1_cellView, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___0_scroller;
	__d_args[1] = ___1_cellView;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CellViewInstantiated_EndInvoke_m675A712EE096F4A4A0D191744EB67370F69FEF98 (CellViewInstantiated_tD9FCFB13CC0F4A6DD1B1502099F73B8CB87F83CE* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void CellViewReused_Invoke_mE141EE791BFF71536F4AA1A04D688430AE1EDC32_Multicast(CellViewReused_t735E2EC81E35C797096B5C527229607370898A18* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___1_cellView, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CellViewReused_t735E2EC81E35C797096B5C527229607370898A18* currentDelegate = reinterpret_cast<CellViewReused_t735E2EC81E35C797096B5C527229607370898A18*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B*, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_scroller, ___1_cellView, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void CellViewReused_Invoke_mE141EE791BFF71536F4AA1A04D688430AE1EDC32_OpenInst(CellViewReused_t735E2EC81E35C797096B5C527229607370898A18* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___1_cellView, const RuntimeMethod* method)
{
	NullCheck(___0_scroller);
	typedef void (*FunctionPointerType) (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B*, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_scroller, ___1_cellView, method);
}
void CellViewReused_Invoke_mE141EE791BFF71536F4AA1A04D688430AE1EDC32_OpenStatic(CellViewReused_t735E2EC81E35C797096B5C527229607370898A18* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___1_cellView, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B*, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_scroller, ___1_cellView, method);
}
void CellViewReused_Invoke_mE141EE791BFF71536F4AA1A04D688430AE1EDC32_OpenVirtual(CellViewReused_t735E2EC81E35C797096B5C527229607370898A18* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___1_cellView, const RuntimeMethod* method)
{
	NullCheck(___0_scroller);
	VirtualActionInvoker1< EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_scroller, ___1_cellView);
}
void CellViewReused_Invoke_mE141EE791BFF71536F4AA1A04D688430AE1EDC32_OpenInterface(CellViewReused_t735E2EC81E35C797096B5C527229607370898A18* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___1_cellView, const RuntimeMethod* method)
{
	NullCheck(___0_scroller);
	InterfaceActionInvoker1< EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_scroller, ___1_cellView);
}
void CellViewReused_Invoke_mE141EE791BFF71536F4AA1A04D688430AE1EDC32_OpenGenericVirtual(CellViewReused_t735E2EC81E35C797096B5C527229607370898A18* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___1_cellView, const RuntimeMethod* method)
{
	NullCheck(___0_scroller);
	GenericVirtualActionInvoker1< EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* >::Invoke(method, ___0_scroller, ___1_cellView);
}
void CellViewReused_Invoke_mE141EE791BFF71536F4AA1A04D688430AE1EDC32_OpenGenericInterface(CellViewReused_t735E2EC81E35C797096B5C527229607370898A18* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___1_cellView, const RuntimeMethod* method)
{
	NullCheck(___0_scroller);
	GenericInterfaceActionInvoker1< EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* >::Invoke(method, ___0_scroller, ___1_cellView);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CellViewReused__ctor_m9A1F52C2FB6C5C7B906EA7CDAB7DE9A36B3021B8 (CellViewReused_t735E2EC81E35C797096B5C527229607370898A18* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&CellViewReused_Invoke_mE141EE791BFF71536F4AA1A04D688430AE1EDC32_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&CellViewReused_Invoke_mE141EE791BFF71536F4AA1A04D688430AE1EDC32_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&CellViewReused_Invoke_mE141EE791BFF71536F4AA1A04D688430AE1EDC32_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&CellViewReused_Invoke_mE141EE791BFF71536F4AA1A04D688430AE1EDC32_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&CellViewReused_Invoke_mE141EE791BFF71536F4AA1A04D688430AE1EDC32_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&CellViewReused_Invoke_mE141EE791BFF71536F4AA1A04D688430AE1EDC32_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&CellViewReused_Invoke_mE141EE791BFF71536F4AA1A04D688430AE1EDC32_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CellViewReused_Invoke_mE141EE791BFF71536F4AA1A04D688430AE1EDC32 (CellViewReused_t735E2EC81E35C797096B5C527229607370898A18* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___1_cellView, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B*, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_scroller, ___1_cellView, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CellViewReused_BeginInvoke_m6DEA1BDEBBE9606076DC3DB6411C0D4C797D9F4B (CellViewReused_t735E2EC81E35C797096B5C527229607370898A18* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___1_cellView, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___0_scroller;
	__d_args[1] = ___1_cellView;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CellViewReused_EndInvoke_mCC8DD1273F1850CC66BB38EA5624F6764F015672 (CellViewReused_t735E2EC81E35C797096B5C527229607370898A18* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnhancedScroller_get_Delegate_m8D2BCE1AC0E9877A4FE55068FA66E68B5D23D589 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____delegate;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScroller_set_Delegate_m65D049B2C8AD3C8745D14C1353430A34FD8E0393 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->____delegate = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____delegate), (void*)L_0);
		__this->____reloadData = (bool)1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_get_ScrollPosition_m00738952CFB5F288DA398A1F438B2F9122B61FE0 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->____scrollPosition;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScroller_set_ScrollPosition_m703772A369D3E1676BD65C15F647CFA79481C223 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___loop;
		if (!L_0)
		{
			goto IL_0040;
		}
	}
	{
		float L_1 = ___0_value;
		float L_2 = __this->____loopLastJumpTrigger;
		if ((!(((float)L_1) > ((float)L_2))))
		{
			goto IL_0024;
		}
	}
	{
		float L_3 = __this->____loopFirstScrollPosition;
		float L_4 = ___0_value;
		float L_5 = __this->____loopLastJumpTrigger;
		___0_value = ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_subtract(L_4, L_5))));
		goto IL_0061;
	}

IL_0024:
	{
		float L_6 = ___0_value;
		float L_7 = __this->____loopFirstJumpTrigger;
		if ((!(((float)L_6) < ((float)L_7))))
		{
			goto IL_0061;
		}
	}
	{
		float L_8 = __this->____loopLastScrollPosition;
		float L_9 = __this->____loopFirstJumpTrigger;
		float L_10 = ___0_value;
		___0_value = ((float)il2cpp_codegen_subtract(L_8, ((float)il2cpp_codegen_subtract(L_9, L_10))));
		goto IL_0061;
	}

IL_0040:
	{
		float L_11 = ___0_value;
		SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67* L_12 = __this->____cellViewSizeArray;
		NullCheck(L_12);
		int32_t L_13 = L_12->___Count;
		float L_14;
		L_14 = EnhancedScroller_GetScrollPositionForCellViewIndex_m8593F367133D0F4E4DFBD4DACB6589BBEC48CA68(__this, ((int32_t)il2cpp_codegen_subtract(L_13, 1)), 0, NULL);
		float L_15;
		L_15 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_11, (0.0f), L_14, NULL);
		___0_value = L_15;
	}

IL_0061:
	{
		float L_16 = __this->____scrollPosition;
		float L_17 = ___0_value;
		if ((((float)L_16) == ((float)L_17)))
		{
			goto IL_00b0;
		}
	}
	{
		float L_18 = ___0_value;
		__this->____scrollPosition = L_18;
		int32_t L_19 = __this->___scrollDirection;
		if (L_19)
		{
			goto IL_0098;
		}
	}
	{
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_20 = __this->____scrollRect;
		float L_21 = __this->____scrollPosition;
		float L_22;
		L_22 = EnhancedScroller_get_ScrollSize_mBD47F8C4531472104621271889C5DBC9CE64169B(__this, NULL);
		NullCheck(L_20);
		ScrollRect_set_verticalNormalizedPosition_m4AF461113925E6710BF04F46A49CF1F856F7738C(L_20, ((float)il2cpp_codegen_subtract((1.0f), ((float)(L_21/L_22)))), NULL);
		return;
	}

IL_0098:
	{
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_23 = __this->____scrollRect;
		float L_24 = __this->____scrollPosition;
		float L_25;
		L_25 = EnhancedScroller_get_ScrollSize_mBD47F8C4531472104621271889C5DBC9CE64169B(__this, NULL);
		NullCheck(L_23);
		ScrollRect_set_horizontalNormalizedPosition_m9B268C9AE7891FC73623DC7BE6B9900640C029B6(L_23, ((float)(L_24/L_25)), NULL);
	}

IL_00b0:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_get_ScrollSize_mBD47F8C4531472104621271889C5DBC9CE64169B (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___scrollDirection;
		if (L_0)
		{
			goto IL_003a;
		}
	}
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->____container;
		NullCheck(L_1);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2;
		L_2 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_1, NULL);
		V_0 = L_2;
		float L_3;
		L_3 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8_inline((&V_0), NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = __this->____scrollRectTransform;
		NullCheck(L_4);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_5;
		L_5 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_4, NULL);
		V_0 = L_5;
		float L_6;
		L_6 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8_inline((&V_0), NULL);
		float L_7;
		L_7 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)il2cpp_codegen_subtract(L_3, L_6)), (0.0f), NULL);
		return L_7;
	}

IL_003a:
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8 = __this->____container;
		NullCheck(L_8);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_9;
		L_9 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_8, NULL);
		V_0 = L_9;
		float L_10;
		L_10 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9_inline((&V_0), NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = __this->____scrollRectTransform;
		NullCheck(L_11);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12;
		L_12 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_11, NULL);
		V_0 = L_12;
		float L_13;
		L_13 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9_inline((&V_0), NULL);
		float L_14;
		L_14 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)il2cpp_codegen_subtract(L_10, L_13)), (0.0f), NULL);
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_get_NormalizedScrollPosition_m467D1C170121B01656AB151CCF00067CA575774E (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, const RuntimeMethod* method) 
{
	{
		float L_0;
		L_0 = EnhancedScroller_get_ScrollPosition_m00738952CFB5F288DA398A1F438B2F9122B61FE0_inline(__this, NULL);
		if ((((float)L_0) <= ((float)(0.0f))))
		{
			goto IL_001b;
		}
	}
	{
		float L_1 = __this->____scrollPosition;
		float L_2;
		L_2 = EnhancedScroller_get_ScrollSize_mBD47F8C4531472104621271889C5DBC9CE64169B(__this, NULL);
		return ((float)(L_1/L_2));
	}

IL_001b:
	{
		return (0.0f);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnhancedScroller_get_Loop_mBA0D58C86BC58724F3E74DD3BFF5305F59B16293 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___loop;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScroller_set_Loop_m252A198952FF2F8B99A8E46415B1AE9EF59C42BD (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, bool ___0_value, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		bool L_0 = __this->___loop;
		bool L_1 = ___0_value;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0050;
		}
	}
	{
		float L_2 = __this->____scrollPosition;
		V_0 = L_2;
		bool L_3 = ___0_value;
		__this->___loop = L_3;
		EnhancedScroller__Resize_m074B12AF522F613E07169421DDD6C04011BFDDC7(__this, (bool)0, NULL);
		bool L_4 = __this->___loop;
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		float L_5 = __this->____loopFirstScrollPosition;
		float L_6 = V_0;
		EnhancedScroller_set_ScrollPosition_m703772A369D3E1676BD65C15F647CFA79481C223(__this, ((float)il2cpp_codegen_add(L_5, L_6)), NULL);
		goto IL_0044;
	}

IL_0036:
	{
		float L_7 = V_0;
		float L_8 = __this->____loopFirstScrollPosition;
		EnhancedScroller_set_ScrollPosition_m703772A369D3E1676BD65C15F647CFA79481C223(__this, ((float)il2cpp_codegen_subtract(L_7, L_8)), NULL);
	}

IL_0044:
	{
		int32_t L_9 = __this->___scrollbarVisibility;
		EnhancedScroller_set_ScrollbarVisibility_m479E02CD0D9B48C63B3DEEBAC4949F7989A036B1(__this, L_9, NULL);
	}

IL_0050:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnhancedScroller_get_ScrollbarVisibility_m33C8D6069A872572B529463AE8DB97BF3A63523A (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___scrollbarVisibility;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScroller_set_ScrollbarVisibility_m479E02CD0D9B48C63B3DEEBAC4949F7989A036B1 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmallList_1_Last_mAF251EECBC2279CFDBFAA895792A8E071631A904_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_value;
		__this->___scrollbarVisibility = L_0;
		Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* L_1 = __this->____scrollbar;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_007c;
		}
	}
	{
		SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67* L_3 = __this->____cellViewOffsetArray;
		if (!L_3)
		{
			goto IL_007c;
		}
	}
	{
		SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67* L_4 = __this->____cellViewOffsetArray;
		NullCheck(L_4);
		int32_t L_5 = L_4->___Count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_007c;
		}
	}
	{
		SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67* L_6 = __this->____cellViewOffsetArray;
		NullCheck(L_6);
		float L_7;
		L_7 = SmallList_1_Last_mAF251EECBC2279CFDBFAA895792A8E071631A904(L_6, SmallList_1_Last_mAF251EECBC2279CFDBFAA895792A8E071631A904_RuntimeMethod_var);
		float L_8;
		L_8 = EnhancedScroller_get_ScrollRectSize_m02A9E670D08C44359A2AFD26A3A666E8BE8AFE36(__this, NULL);
		if ((((float)L_7) < ((float)L_8)))
		{
			goto IL_0046;
		}
	}
	{
		bool L_9 = __this->___loop;
		if (!L_9)
		{
			goto IL_0060;
		}
	}

IL_0046:
	{
		Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* L_10 = __this->____scrollbar;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		int32_t L_12 = __this->___scrollbarVisibility;
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)((((int32_t)L_12) == ((int32_t)1))? 1 : 0), NULL);
		return;
	}

IL_0060:
	{
		Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* L_13 = __this->____scrollbar;
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_13, NULL);
		int32_t L_15 = __this->___scrollbarVisibility;
		NullCheck(L_14);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)((((int32_t)((((int32_t)L_15) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
	}

IL_007c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 EnhancedScroller_get_Velocity_m77891D2BEE3FBFD7FD4201AF2C3ED41D766F5D9C (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, const RuntimeMethod* method) 
{
	{
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_0 = __this->____scrollRect;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = ScrollRect_get_velocity_m8F7DDB02F52BFF2503F079C216FC5C89AA4875DC_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScroller_set_Velocity_mED27868D86B74965F1FDF1457C9CF87B36FB9458 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_0 = __this->____scrollRect;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___0_value;
		NullCheck(L_0);
		ScrollRect_set_velocity_mBC8D4BC0A0184FCC3AEB359AE68E9130E811AFC2_inline(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_get_LinearVelocity_m80BFA7929042E5C36E09E7D12B909D04B2D1DA08 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___scrollDirection;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_1 = __this->____scrollRect;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = ScrollRect_get_velocity_m8F7DDB02F52BFF2503F079C216FC5C89AA4875DC_inline(L_1, NULL);
		float L_3 = L_2.___x;
		return L_3;
	}

IL_0019:
	{
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_4 = __this->____scrollRect;
		NullCheck(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = ScrollRect_get_velocity_m8F7DDB02F52BFF2503F079C216FC5C89AA4875DC_inline(L_4, NULL);
		float L_6 = L_5.___y;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScroller_set_LinearVelocity_mEF73C909E4214D54AE7804E208F2C55A19F64FC5 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___scrollDirection;
		if (L_0)
		{
			goto IL_001f;
		}
	}
	{
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_1 = __this->____scrollRect;
		float L_2 = ___0_value;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_3), (0.0f), L_2, NULL);
		NullCheck(L_1);
		ScrollRect_set_velocity_mBC8D4BC0A0184FCC3AEB359AE68E9130E811AFC2_inline(L_1, L_3, NULL);
		return;
	}

IL_001f:
	{
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_4 = __this->____scrollRect;
		float L_5 = ___0_value;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), L_5, (0.0f), NULL);
		NullCheck(L_4);
		ScrollRect_set_velocity_mBC8D4BC0A0184FCC3AEB359AE68E9130E811AFC2_inline(L_4, L_6, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnhancedScroller_get_IsScrolling_mFC65ADFE92845FB1122223B175C4C44F8BFB2DBA (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsScrollingU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScroller_set_IsScrolling_m325C39C4DE217C88751EE6F457D58A3060654762 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CIsScrollingU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnhancedScroller_get_IsTweening_mB76EA1E7F858166D32972EB9A8D4CD7983AF2E78 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsTweeningU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScroller_set_IsTweening_m1319E704C500AB3971BD22151862C5A05F891E3A (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CIsTweeningU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnhancedScroller_get_StartCellViewIndex_mC4E1EC6C0586A3DF98E3C24192BCE0BF06DD163F (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____activeCellViewsStartIndex;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnhancedScroller_get_EndCellViewIndex_mD99C52A148F261F3B031880FB35F0B2457EA11D0 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____activeCellViewsEndIndex;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnhancedScroller_get_StartDataIndex_m605907CB0DCD178A80B0F9D9D9C9A1EB1C2710CA (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____activeCellViewsStartIndex;
		int32_t L_1;
		L_1 = EnhancedScroller_get_NumberOfCells_m60ECD04B3FDC301E066BB052258B697BEC6A98B7(__this, NULL);
		return ((int32_t)(L_0%L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnhancedScroller_get_EndDataIndex_mBE63F5654F32110B9AF681D676B9B67B2CCDFE46 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____activeCellViewsEndIndex;
		int32_t L_1;
		L_1 = EnhancedScroller_get_NumberOfCells_m60ECD04B3FDC301E066BB052258B697BEC6A98B7(__this, NULL);
		return ((int32_t)(L_0%L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnhancedScroller_get_NumberOfCells_m60ECD04B3FDC301E066BB052258B697BEC6A98B7 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnhancedScrollerDelegate_tC2488B96D04198ACAFE7EB43D3B931DEA4589C0B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____delegate;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->____delegate;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* >::Invoke(0, IEnhancedScrollerDelegate_tC2488B96D04198ACAFE7EB43D3B931DEA4589C0B_il2cpp_TypeInfo_var, L_1, __this);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* EnhancedScroller_get_ScrollRect_mAA610BC8B00120A0C229BA54D6E352ED5453500F (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, const RuntimeMethod* method) 
{
	{
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_0 = __this->____scrollRect;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_get_ScrollRectSize_m02A9E670D08C44359A2AFD26A3A666E8BE8AFE36 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___scrollDirection;
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->____scrollRectTransform;
		NullCheck(L_1);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2;
		L_2 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_1, NULL);
		V_0 = L_2;
		float L_3;
		L_3 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8_inline((&V_0), NULL);
		return L_3;
	}

IL_001c:
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = __this->____scrollRectTransform;
		NullCheck(L_4);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_5;
		L_5 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_4, NULL);
		V_0 = L_5;
		float L_6;
		L_6 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9_inline((&V_0), NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* EnhancedScroller_GetCellView_m94786F206A33612988DE14183A6BCAE2F2950775 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___0_cellPrefab, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892_mB557B5C2F13AF8EBE8CDC69B7E676F6CA5442D13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* V_0 = NULL;
	{
		EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* L_0 = ___0_cellPrefab;
		EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* L_1;
		L_1 = EnhancedScroller__GetRecycledCellView_m6FDB3BF4D9857E558026D759504CD16F7196B1A1(__this, L_0, NULL);
		V_0 = L_1;
		EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_006a;
		}
	}
	{
		EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* L_4 = ___0_cellPrefab;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_5, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		NullCheck(L_6);
		EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* L_7;
		L_7 = GameObject_GetComponent_TisEnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892_mB557B5C2F13AF8EBE8CDC69B7E676F6CA5442D13(L_6, GameObject_GetComponent_TisEnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892_mB557B5C2F13AF8EBE8CDC69B7E676F6CA5442D13_RuntimeMethod_var);
		V_0 = L_7;
		EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* L_8 = V_0;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = __this->____container;
		NullCheck(L_9);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_9, L_10, NULL);
		EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* L_11 = V_0;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_12);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_12, L_13, NULL);
		EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* L_14 = V_0;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_14, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_15);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_15, L_16, NULL);
		CellViewInstantiated_tD9FCFB13CC0F4A6DD1B1502099F73B8CB87F83CE* L_17 = __this->___cellViewInstantiated;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		CellViewInstantiated_tD9FCFB13CC0F4A6DD1B1502099F73B8CB87F83CE* L_18 = __this->___cellViewInstantiated;
		EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* L_19 = V_0;
		NullCheck(L_18);
		CellViewInstantiated_Invoke_m175D8E92654CAC26386CE53E21C25FB240C5A2CF_inline(L_18, __this, L_19, NULL);
		goto IL_007f;
	}

IL_006a:
	{
		CellViewReused_t735E2EC81E35C797096B5C527229607370898A18* L_20 = __this->___cellViewReused;
		if (!L_20)
		{
			goto IL_007f;
		}
	}
	{
		CellViewReused_t735E2EC81E35C797096B5C527229607370898A18* L_21 = __this->___cellViewReused;
		EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* L_22 = V_0;
		NullCheck(L_21);
		CellViewReused_Invoke_mE141EE791BFF71536F4AA1A04D688430AE1EDC32_inline(L_21, __this, L_22, NULL);
	}

IL_007f:
	{
		EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* L_23 = V_0;
		return L_23;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScroller_ReloadData_mB656E2A5C57D096C380610AF9BF56282D11A8DF8 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, float ___0_scrollPositionFactor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->____reloadData = (bool)0;
		EnhancedScroller__RecycleAllCells_m95A25FE62C63C7650E6C8278AA05AE2F589B56DC(__this, NULL);
		RuntimeObject* L_0 = __this->____delegate;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		EnhancedScroller__Resize_m074B12AF522F613E07169421DDD6C04011BFDDC7(__this, (bool)0, NULL);
	}

IL_001c:
	{
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_1 = __this->____scrollRect;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_0046;
		}
	}
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = __this->____scrollRectTransform;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_4)
		{
			goto IL_0046;
		}
	}
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->____container;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0052;
		}
	}

IL_0046:
	{
		__this->____scrollPosition = (0.0f);
		return;
	}

IL_0052:
	{
		float L_7 = ___0_scrollPositionFactor;
		float L_8;
		L_8 = EnhancedScroller_get_ScrollSize_mBD47F8C4531472104621271889C5DBC9CE64169B(__this, NULL);
		SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67* L_9 = __this->____cellViewSizeArray;
		NullCheck(L_9);
		int32_t L_10 = L_9->___Count;
		float L_11;
		L_11 = EnhancedScroller_GetScrollPositionForCellViewIndex_m8593F367133D0F4E4DFBD4DACB6589BBEC48CA68(__this, ((int32_t)il2cpp_codegen_subtract(L_10, 1)), 0, NULL);
		float L_12;
		L_12 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_multiply(L_7, L_8)), (0.0f), L_11, NULL);
		__this->____scrollPosition = L_12;
		int32_t L_13 = __this->___scrollDirection;
		if (L_13)
		{
			goto IL_009a;
		}
	}
	{
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_14 = __this->____scrollRect;
		float L_15 = ___0_scrollPositionFactor;
		NullCheck(L_14);
		ScrollRect_set_verticalNormalizedPosition_m4AF461113925E6710BF04F46A49CF1F856F7738C(L_14, ((float)il2cpp_codegen_subtract((1.0f), L_15)), NULL);
		goto IL_00a6;
	}

IL_009a:
	{
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_16 = __this->____scrollRect;
		float L_17 = ___0_scrollPositionFactor;
		NullCheck(L_16);
		ScrollRect_set_horizontalNormalizedPosition_m9B268C9AE7891FC73623DC7BE6B9900640C029B6(L_16, L_17, NULL);
	}

IL_00a6:
	{
		EnhancedScroller__RefreshActive_m098FD7B4385179FE74C7F609434685913195333C(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScroller_RefreshActiveCellViews_m99CABC55A5B14DAE18F7E4FD233E50D8ECF17664 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmallList_1_get_Item_m99EDA7FDFDE7C4514B5B579204D1447768EB91D1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0019;
	}

IL_0004:
	{
		SmallList_1_tDD26C24E78CCBE316084977E23188B07A348B50E* L_0 = __this->____activeCellViews;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* L_2;
		L_2 = SmallList_1_get_Item_m99EDA7FDFDE7C4514B5B579204D1447768EB91D1(L_0, L_1, SmallList_1_get_Item_m99EDA7FDFDE7C4514B5B579204D1447768EB91D1_RuntimeMethod_var);
		NullCheck(L_2);
		VirtualActionInvoker0::Invoke(4, L_2);
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0019:
	{
		int32_t L_4 = V_0;
		SmallList_1_tDD26C24E78CCBE316084977E23188B07A348B50E* L_5 = __this->____activeCellViews;
		NullCheck(L_5);
		int32_t L_6 = L_5->___Count;
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScroller_ClearAll_m76DBFDBEDE7EEBE7BAB7BC789B2C7BAA06A05778 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, const RuntimeMethod* method) 
{
	{
		EnhancedScroller_ClearActive_m40785199AE2A788E604375115B109F02653C26FD(__this, NULL);
		EnhancedScroller_ClearRecycled_mF3D47D6CDA9ED445BBC9F909EDF90357DBB87439(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScroller_ClearActive_m40785199AE2A788E604375115B109F02653C26FD (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmallList_1_Clear_m2F746E16645FA4E8F86DDCEC64EEE4700A27756D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmallList_1_get_Item_m99EDA7FDFDE7C4514B5B579204D1447768EB91D1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_001e;
	}

IL_0004:
	{
		SmallList_1_tDD26C24E78CCBE316084977E23188B07A348B50E* L_0 = __this->____activeCellViews;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* L_2;
		L_2 = SmallList_1_get_Item_m99EDA7FDFDE7C4514B5B579204D1447768EB91D1(L_0, L_1, SmallList_1_get_Item_m99EDA7FDFDE7C4514B5B579204D1447768EB91D1_RuntimeMethod_var);
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_3, NULL);
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_001e:
	{
		int32_t L_5 = V_0;
		SmallList_1_tDD26C24E78CCBE316084977E23188B07A348B50E* L_6 = __this->____activeCellViews;
		NullCheck(L_6);
		int32_t L_7 = L_6->___Count;
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0004;
		}
	}
	{
		SmallList_1_tDD26C24E78CCBE316084977E23188B07A348B50E* L_8 = __this->____activeCellViews;
		NullCheck(L_8);
		SmallList_1_Clear_m2F746E16645FA4E8F86DDCEC64EEE4700A27756D(L_8, SmallList_1_Clear_m2F746E16645FA4E8F86DDCEC64EEE4700A27756D_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScroller_ClearRecycled_mF3D47D6CDA9ED445BBC9F909EDF90357DBB87439 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmallList_1_Clear_m2F746E16645FA4E8F86DDCEC64EEE4700A27756D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmallList_1_get_Item_m99EDA7FDFDE7C4514B5B579204D1447768EB91D1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_001e;
	}

IL_0004:
	{
		SmallList_1_tDD26C24E78CCBE316084977E23188B07A348B50E* L_0 = __this->____recycledCellViews;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* L_2;
		L_2 = SmallList_1_get_Item_m99EDA7FDFDE7C4514B5B579204D1447768EB91D1(L_0, L_1, SmallList_1_get_Item_m99EDA7FDFDE7C4514B5B579204D1447768EB91D1_RuntimeMethod_var);
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_3, NULL);
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_001e:
	{
		int32_t L_5 = V_0;
		SmallList_1_tDD26C24E78CCBE316084977E23188B07A348B50E* L_6 = __this->____recycledCellViews;
		NullCheck(L_6);
		int32_t L_7 = L_6->___Count;
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0004;
		}
	}
	{
		SmallList_1_tDD26C24E78CCBE316084977E23188B07A348B50E* L_8 = __this->____recycledCellViews;
		NullCheck(L_8);
		SmallList_1_Clear_m2F746E16645FA4E8F86DDCEC64EEE4700A27756D(L_8, SmallList_1_Clear_m2F746E16645FA4E8F86DDCEC64EEE4700A27756D_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScroller_ToggleLoop_m4F02AD3C5B75EB165C8E3FEFC5A1A37236A620C8 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___loop;
		EnhancedScroller_set_Loop_m252A198952FF2F8B99A8E46415B1AE9EF59C42BD(__this, (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScroller_JumpToDataIndex_mF4D46EFEE66269EC24AD63F4B7D844F73DC7273E (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, int32_t ___0_dataIndex, float ___1_scrollerOffset, float ___2_cellOffset, bool ___3_useSpacing, int32_t ___4_tweenType, float ___5_tweenTime, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___6_jumpComplete, int32_t ___7_loopJumpDirection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnhancedScrollerDelegate_tC2488B96D04198ACAFE7EB43D3B931DEA4589C0B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	float G_B4_0 = 0.0f;
	float G_B35_0 = 0.0f;
	float G_B44_0 = 0.0f;
	float G_B51_0 = 0.0f;
	float G_B60_0 = 0.0f;
	float G_B65_0 = 0.0f;
	float G_B64_0 = 0.0f;
	float G_B66_0 = 0.0f;
	float G_B66_1 = 0.0f;
	{
		V_0 = (0.0f);
		float L_0 = ___2_cellOffset;
		if ((((float)L_0) == ((float)(0.0f))))
		{
			goto IL_0054;
		}
	}
	{
		RuntimeObject* L_1 = __this->____delegate;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		G_B4_0 = (0.0f);
		goto IL_002a;
	}

IL_001d:
	{
		RuntimeObject* L_2 = __this->____delegate;
		int32_t L_3 = ___0_dataIndex;
		NullCheck(L_2);
		float L_4;
		L_4 = InterfaceFuncInvoker2< float, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B*, int32_t >::Invoke(1, IEnhancedScrollerDelegate_tC2488B96D04198ACAFE7EB43D3B931DEA4589C0B_il2cpp_TypeInfo_var, L_2, __this, L_3);
		G_B4_0 = L_4;
	}

IL_002a:
	{
		V_3 = G_B4_0;
		bool L_5 = ___3_useSpacing;
		if (!L_5)
		{
			goto IL_0050;
		}
	}
	{
		float L_6 = V_3;
		float L_7 = __this->___spacing;
		V_3 = ((float)il2cpp_codegen_add(L_6, L_7));
		int32_t L_8 = ___0_dataIndex;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_9 = ___0_dataIndex;
		int32_t L_10;
		L_10 = EnhancedScroller_get_NumberOfCells_m60ECD04B3FDC301E066BB052258B697BEC6A98B7(__this, NULL);
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_10, 1)))))
		{
			goto IL_0050;
		}
	}
	{
		float L_11 = V_3;
		float L_12 = __this->___spacing;
		V_3 = ((float)il2cpp_codegen_add(L_11, L_12));
	}

IL_0050:
	{
		float L_13 = V_3;
		float L_14 = ___2_cellOffset;
		V_0 = ((float)il2cpp_codegen_multiply(L_13, L_14));
	}

IL_0054:
	{
		float L_15 = ___1_scrollerOffset;
		if ((!(((float)L_15) == ((float)(1.0f)))))
		{
			goto IL_006b;
		}
	}
	{
		float L_16 = V_0;
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_17 = __this->___padding;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = RectOffset_get_bottom_mDF9C1EC125F94245D5532C34FCFB65BE0F2A9D0B(L_17, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_16, ((float)L_18)));
	}

IL_006b:
	{
		float L_19 = ___1_scrollerOffset;
		float L_20;
		L_20 = EnhancedScroller_get_ScrollRectSize_m02A9E670D08C44359A2AFD26A3A666E8BE8AFE36(__this, NULL);
		float L_21 = V_0;
		V_1 = ((float)il2cpp_codegen_add(((-((float)il2cpp_codegen_multiply(L_19, L_20)))), L_21));
		V_2 = (0.0f);
		bool L_22 = __this->___loop;
		if (!L_22)
		{
			goto IL_025e;
		}
	}
	{
		int32_t L_23;
		L_23 = EnhancedScroller_get_NumberOfCells_m60ECD04B3FDC301E066BB052258B697BEC6A98B7(__this, NULL);
		V_4 = L_23;
		int32_t L_24 = __this->____loopFirstCellIndex;
		int32_t L_25 = V_4;
		int32_t L_26 = ___0_dataIndex;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_24, ((int32_t)il2cpp_codegen_subtract(L_25, L_26))));
		int32_t L_27 = __this->____loopFirstCellIndex;
		int32_t L_28 = ___0_dataIndex;
		V_6 = ((int32_t)il2cpp_codegen_add(L_27, L_28));
		int32_t L_29 = __this->____loopFirstCellIndex;
		int32_t L_30 = V_4;
		int32_t L_31 = ___0_dataIndex;
		V_7 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_29, L_30)), L_31));
		int32_t L_32 = V_5;
		float L_33;
		L_33 = EnhancedScroller_GetScrollPositionForCellViewIndex_m8593F367133D0F4E4DFBD4DACB6589BBEC48CA68(__this, L_32, 0, NULL);
		float L_34 = V_1;
		V_8 = ((float)il2cpp_codegen_add(L_33, L_34));
		int32_t L_35 = V_6;
		float L_36;
		L_36 = EnhancedScroller_GetScrollPositionForCellViewIndex_m8593F367133D0F4E4DFBD4DACB6589BBEC48CA68(__this, L_35, 0, NULL);
		float L_37 = V_1;
		V_9 = ((float)il2cpp_codegen_add(L_36, L_37));
		int32_t L_38 = V_7;
		float L_39;
		L_39 = EnhancedScroller_GetScrollPositionForCellViewIndex_m8593F367133D0F4E4DFBD4DACB6589BBEC48CA68(__this, L_38, 0, NULL);
		float L_40 = V_1;
		V_10 = ((float)il2cpp_codegen_add(L_39, L_40));
		float L_41 = __this->____scrollPosition;
		float L_42 = V_8;
		float L_43;
		L_43 = fabsf(((float)il2cpp_codegen_subtract(L_41, L_42)));
		V_11 = L_43;
		float L_44 = __this->____scrollPosition;
		float L_45 = V_9;
		float L_46;
		L_46 = fabsf(((float)il2cpp_codegen_subtract(L_44, L_45)));
		V_12 = L_46;
		float L_47 = __this->____scrollPosition;
		float L_48 = V_10;
		float L_49;
		L_49 = fabsf(((float)il2cpp_codegen_subtract(L_47, L_48)));
		V_13 = L_49;
		float L_50 = ___1_scrollerOffset;
		float L_51;
		L_51 = EnhancedScroller_get_ScrollRectSize_m02A9E670D08C44359A2AFD26A3A666E8BE8AFE36(__this, NULL);
		V_14 = ((-((float)il2cpp_codegen_multiply(L_50, L_51))));
		V_15 = 0;
		V_16 = 0;
		V_17 = 0;
		int32_t L_52 = ___7_loopJumpDirection;
		if ((((int32_t)L_52) == ((int32_t)1)))
		{
			goto IL_0129;
		}
	}
	{
		int32_t L_53 = ___7_loopJumpDirection;
		if ((!(((uint32_t)L_53) == ((uint32_t)2))))
		{
			goto IL_0172;
		}
	}

IL_0129:
	{
		float L_54 = __this->____scrollPosition;
		float L_55 = V_14;
		int32_t L_56;
		L_56 = EnhancedScroller_GetCellViewIndexAtPosition_m3CC8A4F573F53A48CE3A2283229C20F37409BEDA(__this, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_54, L_55)), (9.99999975E-05f))), NULL);
		V_16 = L_56;
		int32_t L_57 = V_16;
		int32_t L_58 = V_4;
		if ((((int32_t)L_57) >= ((int32_t)L_58)))
		{
			goto IL_014e;
		}
	}
	{
		V_15 = 1;
		int32_t L_59 = ___0_dataIndex;
		V_17 = L_59;
		goto IL_0172;
	}

IL_014e:
	{
		int32_t L_60 = V_16;
		int32_t L_61 = V_4;
		if ((((int32_t)L_60) < ((int32_t)L_61)))
		{
			goto IL_0167;
		}
	}
	{
		int32_t L_62 = V_16;
		int32_t L_63 = V_4;
		if ((((int32_t)L_62) >= ((int32_t)((int32_t)il2cpp_codegen_multiply(L_63, 2)))))
		{
			goto IL_0167;
		}
	}
	{
		V_15 = 2;
		int32_t L_64 = ___0_dataIndex;
		int32_t L_65 = V_4;
		V_17 = ((int32_t)il2cpp_codegen_add(L_64, L_65));
		goto IL_0172;
	}

IL_0167:
	{
		V_15 = 3;
		int32_t L_66 = ___0_dataIndex;
		int32_t L_67 = V_4;
		V_17 = ((int32_t)il2cpp_codegen_add(L_66, ((int32_t)il2cpp_codegen_multiply(L_67, 2))));
	}

IL_0172:
	{
		int32_t L_68 = ___7_loopJumpDirection;
		switch (L_68)
		{
			case 0:
			{
				goto IL_018a;
			}
			case 1:
			{
				goto IL_01bc;
			}
			case 2:
			{
				goto IL_0206;
			}
		}
	}
	{
		goto IL_024f;
	}

IL_018a:
	{
		float L_69 = V_11;
		float L_70 = V_12;
		if ((!(((float)L_69) < ((float)L_70))))
		{
			goto IL_01a6;
		}
	}
	{
		float L_71 = V_11;
		float L_72 = V_13;
		if ((!(((float)L_71) < ((float)L_72))))
		{
			goto IL_019e;
		}
	}
	{
		float L_73 = V_8;
		V_2 = L_73;
		goto IL_024f;
	}

IL_019e:
	{
		float L_74 = V_10;
		V_2 = L_74;
		goto IL_024f;
	}

IL_01a6:
	{
		float L_75 = V_12;
		float L_76 = V_13;
		if ((!(((float)L_75) < ((float)L_76))))
		{
			goto IL_01b4;
		}
	}
	{
		float L_77 = V_9;
		V_2 = L_77;
		goto IL_024f;
	}

IL_01b4:
	{
		float L_78 = V_10;
		V_2 = L_78;
		goto IL_024f;
	}

IL_01bc:
	{
		int32_t L_79 = V_17;
		int32_t L_80 = V_16;
		if ((((int32_t)L_79) >= ((int32_t)L_80)))
		{
			goto IL_01d9;
		}
	}
	{
		int32_t L_81 = V_15;
		if ((((int32_t)L_81) == ((int32_t)1)))
		{
			goto IL_01d4;
		}
	}
	{
		int32_t L_82 = V_15;
		if ((((int32_t)L_82) == ((int32_t)2)))
		{
			goto IL_01d0;
		}
	}
	{
		float L_83 = V_10;
		G_B35_0 = L_83;
		goto IL_01d6;
	}

IL_01d0:
	{
		float L_84 = V_9;
		G_B35_0 = L_84;
		goto IL_01d6;
	}

IL_01d4:
	{
		float L_85 = V_8;
		G_B35_0 = L_85;
	}

IL_01d6:
	{
		V_2 = G_B35_0;
		goto IL_024f;
	}

IL_01d9:
	{
		int32_t L_86 = V_15;
		if ((!(((uint32_t)L_86) == ((uint32_t)1))))
		{
			goto IL_01ef;
		}
	}
	{
		int32_t L_87 = V_16;
		int32_t L_88 = ___0_dataIndex;
		if ((!(((uint32_t)L_87) == ((uint32_t)L_88))))
		{
			goto IL_01ef;
		}
	}
	{
		float L_89 = V_8;
		float L_90 = __this->____singleLoopGroupSize;
		V_2 = ((float)il2cpp_codegen_subtract(L_89, L_90));
		goto IL_024f;
	}

IL_01ef:
	{
		int32_t L_91 = V_15;
		if ((((int32_t)L_91) == ((int32_t)1)))
		{
			goto IL_0201;
		}
	}
	{
		int32_t L_92 = V_15;
		if ((((int32_t)L_92) == ((int32_t)2)))
		{
			goto IL_01fd;
		}
	}
	{
		float L_93 = V_9;
		G_B44_0 = L_93;
		goto IL_0203;
	}

IL_01fd:
	{
		float L_94 = V_8;
		G_B44_0 = L_94;
		goto IL_0203;
	}

IL_0201:
	{
		float L_95 = V_10;
		G_B44_0 = L_95;
	}

IL_0203:
	{
		V_2 = G_B44_0;
		goto IL_024f;
	}

IL_0206:
	{
		int32_t L_96 = V_17;
		int32_t L_97 = V_16;
		if ((((int32_t)L_96) <= ((int32_t)L_97)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_98 = V_15;
		if ((((int32_t)L_98) == ((int32_t)1)))
		{
			goto IL_021e;
		}
	}
	{
		int32_t L_99 = V_15;
		if ((((int32_t)L_99) == ((int32_t)2)))
		{
			goto IL_021a;
		}
	}
	{
		float L_100 = V_10;
		G_B51_0 = L_100;
		goto IL_0220;
	}

IL_021a:
	{
		float L_101 = V_9;
		G_B51_0 = L_101;
		goto IL_0220;
	}

IL_021e:
	{
		float L_102 = V_8;
		G_B51_0 = L_102;
	}

IL_0220:
	{
		V_2 = G_B51_0;
		goto IL_024f;
	}

IL_0223:
	{
		int32_t L_103 = V_15;
		if ((!(((uint32_t)L_103) == ((uint32_t)3))))
		{
			goto IL_023a;
		}
	}
	{
		int32_t L_104 = V_16;
		int32_t L_105 = V_17;
		if ((!(((uint32_t)L_104) == ((uint32_t)L_105))))
		{
			goto IL_023a;
		}
	}
	{
		float L_106 = V_10;
		float L_107 = __this->____singleLoopGroupSize;
		V_2 = ((float)il2cpp_codegen_add(L_106, L_107));
		goto IL_024f;
	}

IL_023a:
	{
		int32_t L_108 = V_15;
		if ((((int32_t)L_108) == ((int32_t)1)))
		{
			goto IL_024c;
		}
	}
	{
		int32_t L_109 = V_15;
		if ((((int32_t)L_109) == ((int32_t)2)))
		{
			goto IL_0248;
		}
	}
	{
		float L_110 = V_8;
		G_B60_0 = L_110;
		goto IL_024e;
	}

IL_0248:
	{
		float L_111 = V_10;
		G_B60_0 = L_111;
		goto IL_024e;
	}

IL_024c:
	{
		float L_112 = V_9;
		G_B60_0 = L_112;
	}

IL_024e:
	{
		V_2 = G_B60_0;
	}

IL_024f:
	{
		bool L_113 = ___3_useSpacing;
		if (!L_113)
		{
			goto IL_029b;
		}
	}
	{
		float L_114 = V_2;
		float L_115 = __this->___spacing;
		V_2 = ((float)il2cpp_codegen_subtract(L_114, L_115));
		goto IL_029b;
	}

IL_025e:
	{
		int32_t L_116 = ___0_dataIndex;
		float L_117;
		L_117 = EnhancedScroller_GetScrollPositionForDataIndex_mD134E662DB24AFEB91766F25047B957AAB6D57ED(__this, L_116, 0, NULL);
		float L_118 = V_1;
		V_2 = ((float)il2cpp_codegen_add(L_117, L_118));
		float L_119 = V_2;
		bool L_120 = ___3_useSpacing;
		if (L_120)
		{
			G_B65_0 = L_119;
			goto IL_0275;
		}
		G_B64_0 = L_119;
	}
	{
		G_B66_0 = (0.0f);
		G_B66_1 = G_B64_0;
		goto IL_027b;
	}

IL_0275:
	{
		float L_121 = __this->___spacing;
		G_B66_0 = L_121;
		G_B66_1 = G_B65_0;
	}

IL_027b:
	{
		SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67* L_122 = __this->____cellViewSizeArray;
		NullCheck(L_122);
		int32_t L_123 = L_122->___Count;
		float L_124;
		L_124 = EnhancedScroller_GetScrollPositionForCellViewIndex_m8593F367133D0F4E4DFBD4DACB6589BBEC48CA68(__this, ((int32_t)il2cpp_codegen_subtract(L_123, 1)), 0, NULL);
		float L_125;
		L_125 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_subtract(G_B66_1, G_B66_0)), (0.0f), L_124, NULL);
		V_2 = L_125;
	}

IL_029b:
	{
		float L_126 = V_2;
		float L_127 = __this->____scrollPosition;
		if ((!(((float)L_126) == ((float)L_127))))
		{
			goto IL_02b0;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_128 = ___6_jumpComplete;
		if (!L_128)
		{
			goto IL_02af;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_129 = ___6_jumpComplete;
		NullCheck(L_129);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_129, NULL);
	}

IL_02af:
	{
		return;
	}

IL_02b0:
	{
		int32_t L_130 = ___4_tweenType;
		float L_131 = ___5_tweenTime;
		float L_132;
		L_132 = EnhancedScroller_get_ScrollPosition_m00738952CFB5F288DA398A1F438B2F9122B61FE0_inline(__this, NULL);
		float L_133 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_134 = ___6_jumpComplete;
		RuntimeObject* L_135;
		L_135 = EnhancedScroller_TweenPosition_m04E6809C0E3C31A86589BFAE485E960059A5FA01(__this, L_130, L_131, L_132, L_133, L_134, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_136;
		L_136 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_135, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScroller_Snap_m811FE9385518C862C894756A541BB31C99C86E51 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnhancedScroller_SnapJumpComplete_mDE1879F85C52C1D8CA887834ACB9BCEC94E31945_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		int32_t L_0;
		L_0 = EnhancedScroller_get_NumberOfCells_m60ECD04B3FDC301E066BB052258B697BEC6A98B7(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		__this->____snapJumping = (bool)1;
		EnhancedScroller_set_LinearVelocity_mEF73C909E4214D54AE7804E208F2C55A19F64FC5(__this, (0.0f), NULL);
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_1 = __this->____scrollRect;
		NullCheck(L_1);
		bool L_2;
		L_2 = ScrollRect_get_inertia_m10C8837B3E43787E1FA94C71683D19638FCEFFBF_inline(L_1, NULL);
		__this->____snapInertia = L_2;
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_3 = __this->____scrollRect;
		NullCheck(L_3);
		ScrollRect_set_inertia_m8A17589561A5E7A2F5F543B8F2F6149458C68AC2_inline(L_3, (bool)0, NULL);
		float L_4;
		L_4 = EnhancedScroller_get_ScrollPosition_m00738952CFB5F288DA398A1F438B2F9122B61FE0_inline(__this, NULL);
		float L_5;
		L_5 = EnhancedScroller_get_ScrollRectSize_m02A9E670D08C44359A2AFD26A3A666E8BE8AFE36(__this, NULL);
		float L_6 = __this->___snapWatchOffset;
		float L_7;
		L_7 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_6, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_4, ((float)il2cpp_codegen_multiply(L_5, L_7))));
		float L_8 = V_0;
		int32_t L_9;
		L_9 = EnhancedScroller_GetCellViewIndexAtPosition_m3CC8A4F573F53A48CE3A2283229C20F37409BEDA(__this, L_8, NULL);
		__this->____snapCellViewIndex = L_9;
		int32_t L_10 = __this->____snapCellViewIndex;
		int32_t L_11;
		L_11 = EnhancedScroller_get_NumberOfCells_m60ECD04B3FDC301E066BB052258B697BEC6A98B7(__this, NULL);
		__this->____snapDataIndex = ((int32_t)(L_10%L_11));
		int32_t L_12 = __this->____snapDataIndex;
		float L_13 = __this->___snapJumpToOffset;
		float L_14 = __this->___snapCellCenterOffset;
		bool L_15 = __this->___snapUseCellSpacing;
		int32_t L_16 = __this->___snapTweenType;
		float L_17 = __this->___snapTweenTime;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_18 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_18, __this, (intptr_t)((void*)EnhancedScroller_SnapJumpComplete_mDE1879F85C52C1D8CA887834ACB9BCEC94E31945_RuntimeMethod_var), NULL);
		EnhancedScroller_JumpToDataIndex_mF4D46EFEE66269EC24AD63F4B7D844F73DC7273E(__this, L_12, L_13, L_14, L_15, L_16, L_17, L_18, 0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_GetScrollPositionForCellViewIndex_m8593F367133D0F4E4DFBD4DACB6589BBEC48CA68 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, int32_t ___0_cellViewIndex, int32_t ___1_insertPosition, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmallList_1_get_Item_m4BE491B88C91180C9CD1691A8AB0C4E312E38260_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float G_B11_0 = 0.0f;
	float G_B10_0 = 0.0f;
	int32_t G_B12_0 = 0;
	float G_B12_1 = 0.0f;
	float G_B15_0 = 0.0f;
	float G_B14_0 = 0.0f;
	int32_t G_B16_0 = 0;
	float G_B16_1 = 0.0f;
	{
		int32_t L_0;
		L_0 = EnhancedScroller_get_NumberOfCells_m60ECD04B3FDC301E066BB052258B697BEC6A98B7(__this, NULL);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		return (0.0f);
	}

IL_000e:
	{
		int32_t L_1 = ___0_cellViewIndex;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		___0_cellViewIndex = 0;
	}

IL_0015:
	{
		int32_t L_2 = ___0_cellViewIndex;
		if (L_2)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_3 = ___1_insertPosition;
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		return (0.0f);
	}

IL_0021:
	{
		int32_t L_4 = ___0_cellViewIndex;
		SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67* L_5 = __this->____cellViewOffsetArray;
		NullCheck(L_5);
		int32_t L_6 = L_5->___Count;
		if ((((int32_t)L_4) >= ((int32_t)L_6)))
		{
			goto IL_0099;
		}
	}
	{
		int32_t L_7 = ___1_insertPosition;
		if (L_7)
		{
			goto IL_006a;
		}
	}
	{
		SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67* L_8 = __this->____cellViewOffsetArray;
		int32_t L_9 = ___0_cellViewIndex;
		NullCheck(L_8);
		float L_10;
		L_10 = SmallList_1_get_Item_m4BE491B88C91180C9CD1691A8AB0C4E312E38260(L_8, ((int32_t)il2cpp_codegen_subtract(L_9, 1)), SmallList_1_get_Item_m4BE491B88C91180C9CD1691A8AB0C4E312E38260_RuntimeMethod_var);
		float L_11 = __this->___spacing;
		int32_t L_12 = __this->___scrollDirection;
		if (!L_12)
		{
			G_B11_0 = ((float)il2cpp_codegen_add(L_10, L_11));
			goto IL_005c;
		}
		G_B10_0 = ((float)il2cpp_codegen_add(L_10, L_11));
	}
	{
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_13 = __this->___padding;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = RectOffset_get_left_mA406D7AFF76E48507EF143CDB1D157C4D5430D90(L_13, NULL);
		G_B12_0 = L_14;
		G_B12_1 = G_B10_0;
		goto IL_0067;
	}

IL_005c:
	{
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_15 = __this->___padding;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = RectOffset_get_top_m82E49FB93A5BD417131136F5A7DBA0F251F10263(L_15, NULL);
		G_B12_0 = L_16;
		G_B12_1 = G_B11_0;
	}

IL_0067:
	{
		return ((float)il2cpp_codegen_add(G_B12_1, ((float)G_B12_0)));
	}

IL_006a:
	{
		SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67* L_17 = __this->____cellViewOffsetArray;
		int32_t L_18 = ___0_cellViewIndex;
		NullCheck(L_17);
		float L_19;
		L_19 = SmallList_1_get_Item_m4BE491B88C91180C9CD1691A8AB0C4E312E38260(L_17, L_18, SmallList_1_get_Item_m4BE491B88C91180C9CD1691A8AB0C4E312E38260_RuntimeMethod_var);
		int32_t L_20 = __this->___scrollDirection;
		if (!L_20)
		{
			G_B15_0 = L_19;
			goto IL_008b;
		}
		G_B14_0 = L_19;
	}
	{
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_21 = __this->___padding;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = RectOffset_get_left_mA406D7AFF76E48507EF143CDB1D157C4D5430D90(L_21, NULL);
		G_B16_0 = L_22;
		G_B16_1 = G_B14_0;
		goto IL_0096;
	}

IL_008b:
	{
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_23 = __this->___padding;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = RectOffset_get_top_m82E49FB93A5BD417131136F5A7DBA0F251F10263(L_23, NULL);
		G_B16_0 = L_24;
		G_B16_1 = G_B15_0;
	}

IL_0096:
	{
		return ((float)il2cpp_codegen_add(G_B16_1, ((float)G_B16_0)));
	}

IL_0099:
	{
		SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67* L_25 = __this->____cellViewOffsetArray;
		SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67* L_26 = __this->____cellViewOffsetArray;
		NullCheck(L_26);
		int32_t L_27 = L_26->___Count;
		NullCheck(L_25);
		float L_28;
		L_28 = SmallList_1_get_Item_m4BE491B88C91180C9CD1691A8AB0C4E312E38260(L_25, ((int32_t)il2cpp_codegen_subtract(L_27, 2)), SmallList_1_get_Item_m4BE491B88C91180C9CD1691A8AB0C4E312E38260_RuntimeMethod_var);
		return L_28;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_GetScrollPositionForDataIndex_mD134E662DB24AFEB91766F25047B957AAB6D57ED (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, int32_t ___0_dataIndex, int32_t ___1_insertPosition, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnhancedScrollerDelegate_tC2488B96D04198ACAFE7EB43D3B931DEA4589C0B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* G_B2_0 = NULL;
	EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* G_B3_1 = NULL;
	{
		bool L_0 = __this->___loop;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_000c;
		}
		G_B1_0 = __this;
	}
	{
		int32_t L_1 = ___0_dataIndex;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_001a;
	}

IL_000c:
	{
		RuntimeObject* L_2 = __this->____delegate;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* >::Invoke(0, IEnhancedScrollerDelegate_tC2488B96D04198ACAFE7EB43D3B931DEA4589C0B_il2cpp_TypeInfo_var, L_2, __this);
		int32_t L_4 = ___0_dataIndex;
		G_B3_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		G_B3_1 = G_B2_0;
	}

IL_001a:
	{
		int32_t L_5 = ___1_insertPosition;
		NullCheck(G_B3_1);
		float L_6;
		L_6 = EnhancedScroller_GetScrollPositionForCellViewIndex_m8593F367133D0F4E4DFBD4DACB6589BBEC48CA68(G_B3_1, G_B3_0, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnhancedScroller_GetCellViewIndexAtPosition_m3CC8A4F573F53A48CE3A2283229C20F37409BEDA (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, float ___0_position, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_position;
		SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67* L_1 = __this->____cellViewOffsetArray;
		NullCheck(L_1);
		int32_t L_2 = L_1->___Count;
		int32_t L_3;
		L_3 = EnhancedScroller__GetCellIndexAtPosition_mDE49D63C2830170E57673C5E3A8D0EC0BC5F08A2(__this, L_0, 0, ((int32_t)il2cpp_codegen_subtract(L_2, 1)), NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* EnhancedScroller_GetCellViewAtDataIndex_m86A0CDE589891D31D55D79C85BEEC053F3EA8ED9 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, int32_t ___0_dataIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmallList_1_get_Item_m99EDA7FDFDE7C4514B5B579204D1447768EB91D1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0029;
	}

IL_0004:
	{
		SmallList_1_tDD26C24E78CCBE316084977E23188B07A348B50E* L_0 = __this->____activeCellViews;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* L_2;
		L_2 = SmallList_1_get_Item_m99EDA7FDFDE7C4514B5B579204D1447768EB91D1(L_0, L_1, SmallList_1_get_Item_m99EDA7FDFDE7C4514B5B579204D1447768EB91D1_RuntimeMethod_var);
		NullCheck(L_2);
		int32_t L_3 = L_2->___dataIndex;
		int32_t L_4 = ___0_dataIndex;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_0025;
		}
	}
	{
		SmallList_1_tDD26C24E78CCBE316084977E23188B07A348B50E* L_5 = __this->____activeCellViews;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* L_7;
		L_7 = SmallList_1_get_Item_m99EDA7FDFDE7C4514B5B579204D1447768EB91D1(L_5, L_6, SmallList_1_get_Item_m99EDA7FDFDE7C4514B5B579204D1447768EB91D1_RuntimeMethod_var);
		return L_7;
	}

IL_0025:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0029:
	{
		int32_t L_9 = V_0;
		SmallList_1_tDD26C24E78CCBE316084977E23188B07A348B50E* L_10 = __this->____activeCellViews;
		NullCheck(L_10);
		int32_t L_11 = L_10->___Count;
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0004;
		}
	}
	{
		return (EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892*)NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScroller__Resize_m074B12AF522F613E07169421DDD6C04011BFDDC7 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, bool ___0_keepPosition, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmallList_1_Clear_mDB4C01826D3E56E78C6AB92E38808DC475A5BD3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmallList_1_Last_mAF251EECBC2279CFDBFAA895792A8E071631A904_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		float L_0 = __this->____scrollPosition;
		V_0 = L_0;
		SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67* L_1 = __this->____cellViewSizeArray;
		NullCheck(L_1);
		SmallList_1_Clear_mDB4C01826D3E56E78C6AB92E38808DC475A5BD3C(L_1, SmallList_1_Clear_mDB4C01826D3E56E78C6AB92E38808DC475A5BD3C_RuntimeMethod_var);
		float L_2;
		L_2 = EnhancedScroller__AddCellViewSizes_mBAEE8901C95FF0702B59EE5F61C3F46679269D6C(__this, NULL);
		V_1 = L_2;
		bool L_3 = __this->___loop;
		if (!L_3)
		{
			goto IL_0088;
		}
	}
	{
		SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67* L_4 = __this->____cellViewSizeArray;
		NullCheck(L_4);
		int32_t L_5 = L_4->___Count;
		V_2 = L_5;
		float L_6 = V_1;
		float L_7;
		L_7 = EnhancedScroller_get_ScrollRectSize_m02A9E670D08C44359A2AFD26A3A666E8BE8AFE36(__this, NULL);
		if ((!(((float)L_6) < ((float)L_7))))
		{
			goto IL_0069;
		}
	}
	{
		float L_8;
		L_8 = EnhancedScroller_get_ScrollRectSize_m02A9E670D08C44359A2AFD26A3A666E8BE8AFE36(__this, NULL);
		float L_9 = V_1;
		int32_t L_10;
		L_10 = Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline(((float)(L_8/L_9)), NULL);
		int32_t L_11;
		L_11 = Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline(((float)(((float)L_10)/(2.0f))), NULL);
		V_3 = ((int32_t)il2cpp_codegen_multiply(L_11, 2));
		int32_t L_12 = V_3;
		int32_t L_13 = V_2;
		EnhancedScroller__DuplicateCellViewSizes_m3E120655D1964CBE0A3461BEE768AB07CECDC663(__this, L_12, L_13, NULL);
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		__this->____loopFirstCellIndex = ((int32_t)il2cpp_codegen_multiply(L_14, ((int32_t)il2cpp_codegen_add(1, ((int32_t)(L_15/2))))));
		goto IL_0070;
	}

IL_0069:
	{
		int32_t L_16 = V_2;
		__this->____loopFirstCellIndex = L_16;
	}

IL_0070:
	{
		int32_t L_17 = __this->____loopFirstCellIndex;
		int32_t L_18 = V_2;
		__this->____loopLastCellIndex = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_17, L_18)), 1));
		int32_t L_19 = V_2;
		EnhancedScroller__DuplicateCellViewSizes_m3E120655D1964CBE0A3461BEE768AB07CECDC663(__this, 2, L_19, NULL);
	}

IL_0088:
	{
		EnhancedScroller__CalculateCellViewOffsets_m20A6C1542E09EEA67F062A61C126D8A8D6F37B84(__this, NULL);
		int32_t L_20 = __this->___scrollDirection;
		if (L_20)
		{
			goto IL_00dd;
		}
	}
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_21 = __this->____container;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_22 = __this->____container;
		NullCheck(L_22);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_22, NULL);
		float L_24 = L_23.___x;
		SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67* L_25 = __this->____cellViewOffsetArray;
		NullCheck(L_25);
		float L_26;
		L_26 = SmallList_1_Last_mAF251EECBC2279CFDBFAA895792A8E071631A904(L_25, SmallList_1_Last_mAF251EECBC2279CFDBFAA895792A8E071631A904_RuntimeMethod_var);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_27 = __this->___padding;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = RectOffset_get_top_m82E49FB93A5BD417131136F5A7DBA0F251F10263(L_27, NULL);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_29 = __this->___padding;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = RectOffset_get_bottom_mDF9C1EC125F94245D5532C34FCFB65BE0F2A9D0B(L_29, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_31), L_24, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_26, ((float)L_28))), ((float)L_30))), NULL);
		NullCheck(L_21);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_21, L_31, NULL);
		goto IL_0122;
	}

IL_00dd:
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_32 = __this->____container;
		SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67* L_33 = __this->____cellViewOffsetArray;
		NullCheck(L_33);
		float L_34;
		L_34 = SmallList_1_Last_mAF251EECBC2279CFDBFAA895792A8E071631A904(L_33, SmallList_1_Last_mAF251EECBC2279CFDBFAA895792A8E071631A904_RuntimeMethod_var);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_35 = __this->___padding;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = RectOffset_get_left_mA406D7AFF76E48507EF143CDB1D157C4D5430D90(L_35, NULL);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_37 = __this->___padding;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = RectOffset_get_right_m07C826B0BC79B0CBC01F5FF489D456C553F047BF(L_37, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_39 = __this->____container;
		NullCheck(L_39);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40;
		L_40 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_39, NULL);
		float L_41 = L_40.___y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_42), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_34, ((float)L_36))), ((float)L_38))), L_41, NULL);
		NullCheck(L_32);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_32, L_42, NULL);
	}

IL_0122:
	{
		bool L_43 = __this->___loop;
		if (!L_43)
		{
			goto IL_0197;
		}
	}
	{
		int32_t L_44 = __this->____loopFirstCellIndex;
		float L_45;
		L_45 = EnhancedScroller_GetScrollPositionForCellViewIndex_m8593F367133D0F4E4DFBD4DACB6589BBEC48CA68(__this, L_44, 0, NULL);
		float L_46 = __this->___spacing;
		__this->____loopFirstScrollPosition = ((float)il2cpp_codegen_add(L_45, ((float)il2cpp_codegen_multiply(L_46, (0.5f)))));
		int32_t L_47 = __this->____loopLastCellIndex;
		float L_48;
		L_48 = EnhancedScroller_GetScrollPositionForCellViewIndex_m8593F367133D0F4E4DFBD4DACB6589BBEC48CA68(__this, L_47, 1, NULL);
		float L_49;
		L_49 = EnhancedScroller_get_ScrollRectSize_m02A9E670D08C44359A2AFD26A3A666E8BE8AFE36(__this, NULL);
		float L_50 = __this->___spacing;
		__this->____loopLastScrollPosition = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_48, L_49)), ((float)il2cpp_codegen_multiply(L_50, (0.5f)))));
		float L_51 = __this->____loopFirstScrollPosition;
		float L_52;
		L_52 = EnhancedScroller_get_ScrollRectSize_m02A9E670D08C44359A2AFD26A3A666E8BE8AFE36(__this, NULL);
		__this->____loopFirstJumpTrigger = ((float)il2cpp_codegen_subtract(L_51, L_52));
		float L_53 = __this->____loopLastScrollPosition;
		float L_54;
		L_54 = EnhancedScroller_get_ScrollRectSize_m02A9E670D08C44359A2AFD26A3A666E8BE8AFE36(__this, NULL);
		__this->____loopLastJumpTrigger = ((float)il2cpp_codegen_add(L_53, L_54));
	}

IL_0197:
	{
		EnhancedScroller__ResetVisibleCellViews_m6E81D1E99A31A498C69A81828A73D9DB36B8CB0A(__this, NULL);
		bool L_55 = ___0_keepPosition;
		if (!L_55)
		{
			goto IL_01a9;
		}
	}
	{
		float L_56 = V_0;
		EnhancedScroller_set_ScrollPosition_m703772A369D3E1676BD65C15F647CFA79481C223(__this, L_56, NULL);
		goto IL_01ca;
	}

IL_01a9:
	{
		bool L_57 = __this->___loop;
		if (!L_57)
		{
			goto IL_01bf;
		}
	}
	{
		float L_58 = __this->____loopFirstScrollPosition;
		EnhancedScroller_set_ScrollPosition_m703772A369D3E1676BD65C15F647CFA79481C223(__this, L_58, NULL);
		goto IL_01ca;
	}

IL_01bf:
	{
		EnhancedScroller_set_ScrollPosition_m703772A369D3E1676BD65C15F647CFA79481C223(__this, (0.0f), NULL);
	}

IL_01ca:
	{
		int32_t L_59 = __this->___scrollbarVisibility;
		EnhancedScroller_set_ScrollbarVisibility_m479E02CD0D9B48C63B3DEEBAC4949F7989A036B1(__this, L_59, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScroller__UpdateSpacing_m77C68FE45790FDB523167D8975289641E6749374 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, float ___0_spacing, const RuntimeMethod* method) 
{
	{
		__this->____updateSpacing = (bool)0;
		HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E* L_0 = __this->____layoutGroup;
		float L_1 = ___0_spacing;
		NullCheck(L_0);
		HorizontalOrVerticalLayoutGroup_set_spacing_m90373F54D37DA8DFA90E102DC60EC33E542FD859(L_0, L_1, NULL);
		float L_2;
		L_2 = EnhancedScroller_get_NormalizedScrollPosition_m467D1C170121B01656AB151CCF00067CA575774E(__this, NULL);
		EnhancedScroller_ReloadData_mB656E2A5C57D096C380610AF9BF56282D11A8DF8(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller__AddCellViewSizes_mBAEE8901C95FF0702B59EE5F61C3F46679269D6C (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnhancedScrollerDelegate_tC2488B96D04198ACAFE7EB43D3B931DEA4589C0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmallList_1_Add_m863A7B12A65A5CA484B0CEC1F30B6B58225112A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmallList_1_get_Item_m4BE491B88C91180C9CD1691A8AB0C4E312E38260_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	float G_B3_0 = 0.0f;
	SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67* G_B3_1 = NULL;
	float G_B2_0 = 0.0f;
	SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67* G_B2_1 = NULL;
	float G_B4_0 = 0.0f;
	float G_B4_1 = 0.0f;
	SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67* G_B4_2 = NULL;
	{
		V_0 = (0.0f);
		__this->____singleLoopGroupSize = (0.0f);
		V_1 = 0;
		goto IL_0087;
	}

IL_0015:
	{
		SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67* L_0 = __this->____cellViewSizeArray;
		RuntimeObject* L_1 = __this->____delegate;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		float L_3;
		L_3 = InterfaceFuncInvoker2< float, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B*, int32_t >::Invoke(1, IEnhancedScrollerDelegate_tC2488B96D04198ACAFE7EB43D3B931DEA4589C0B_il2cpp_TypeInfo_var, L_1, __this, L_2);
		int32_t L_4 = V_1;
		if (!L_4)
		{
			G_B3_0 = L_3;
			G_B3_1 = L_0;
			goto IL_0038;
		}
		G_B2_0 = L_3;
		G_B2_1 = L_0;
	}
	{
		HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E* L_5 = __this->____layoutGroup;
		NullCheck(L_5);
		float L_6;
		L_6 = HorizontalOrVerticalLayoutGroup_get_spacing_m916C9BF57D4AB0EF76E6BC4EC5E1EA54B7918782_inline(L_5, NULL);
		G_B4_0 = L_6;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_003d;
	}

IL_0038:
	{
		G_B4_0 = (0.0f);
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_003d:
	{
		NullCheck(G_B4_2);
		SmallList_1_Add_m863A7B12A65A5CA484B0CEC1F30B6B58225112A0(G_B4_2, ((float)il2cpp_codegen_add(G_B4_1, G_B4_0)), SmallList_1_Add_m863A7B12A65A5CA484B0CEC1F30B6B58225112A0_RuntimeMethod_var);
		float L_7 = __this->____singleLoopGroupSize;
		SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67* L_8 = __this->____cellViewSizeArray;
		SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67* L_9 = __this->____cellViewSizeArray;
		NullCheck(L_9);
		int32_t L_10 = L_9->___Count;
		NullCheck(L_8);
		float L_11;
		L_11 = SmallList_1_get_Item_m4BE491B88C91180C9CD1691A8AB0C4E312E38260(L_8, ((int32_t)il2cpp_codegen_subtract(L_10, 1)), SmallList_1_get_Item_m4BE491B88C91180C9CD1691A8AB0C4E312E38260_RuntimeMethod_var);
		__this->____singleLoopGroupSize = ((float)il2cpp_codegen_add(L_7, L_11));
		float L_12 = V_0;
		SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67* L_13 = __this->____cellViewSizeArray;
		SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67* L_14 = __this->____cellViewSizeArray;
		NullCheck(L_14);
		int32_t L_15 = L_14->___Count;
		NullCheck(L_13);
		float L_16;
		L_16 = SmallList_1_get_Item_m4BE491B88C91180C9CD1691A8AB0C4E312E38260(L_13, ((int32_t)il2cpp_codegen_subtract(L_15, 1)), SmallList_1_get_Item_m4BE491B88C91180C9CD1691A8AB0C4E312E38260_RuntimeMethod_var);
		V_0 = ((float)il2cpp_codegen_add(L_12, L_16));
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0087:
	{
		int32_t L_18 = V_1;
		int32_t L_19;
		L_19 = EnhancedScroller_get_NumberOfCells_m60ECD04B3FDC301E066BB052258B697BEC6A98B7(__this, NULL);
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0015;
		}
	}
	{
		float L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScroller__DuplicateCellViewSizes_m3E120655D1964CBE0A3461BEE768AB07CECDC663 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, int32_t ___0_numberOfTimes, int32_t ___1_cellCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmallList_1_Add_m863A7B12A65A5CA484B0CEC1F30B6B58225112A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmallList_1_get_Item_m4BE491B88C91180C9CD1691A8AB0C4E312E38260_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float G_B4_0 = 0.0f;
	SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67* G_B4_1 = NULL;
	float G_B3_0 = 0.0f;
	SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67* G_B3_1 = NULL;
	float G_B5_0 = 0.0f;
	float G_B5_1 = 0.0f;
	SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67* G_B5_2 = NULL;
	{
		V_0 = 0;
		goto IL_0041;
	}

IL_0004:
	{
		V_1 = 0;
		goto IL_0039;
	}

IL_0008:
	{
		SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67* L_0 = __this->____cellViewSizeArray;
		SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67* L_1 = __this->____cellViewSizeArray;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		float L_3;
		L_3 = SmallList_1_get_Item_m4BE491B88C91180C9CD1691A8AB0C4E312E38260(L_1, L_2, SmallList_1_get_Item_m4BE491B88C91180C9CD1691A8AB0C4E312E38260_RuntimeMethod_var);
		int32_t L_4 = V_1;
		if (!L_4)
		{
			G_B4_0 = L_3;
			G_B4_1 = L_0;
			goto IL_0024;
		}
		G_B3_0 = L_3;
		G_B3_1 = L_0;
	}
	{
		G_B5_0 = (0.0f);
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_002f;
	}

IL_0024:
	{
		HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E* L_5 = __this->____layoutGroup;
		NullCheck(L_5);
		float L_6;
		L_6 = HorizontalOrVerticalLayoutGroup_get_spacing_m916C9BF57D4AB0EF76E6BC4EC5E1EA54B7918782_inline(L_5, NULL);
		G_B5_0 = L_6;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_002f:
	{
		NullCheck(G_B5_2);
		SmallList_1_Add_m863A7B12A65A5CA484B0CEC1F30B6B58225112A0(G_B5_2, ((float)il2cpp_codegen_add(G_B5_1, G_B5_0)), SmallList_1_Add_m863A7B12A65A5CA484B0CEC1F30B6B58225112A0_RuntimeMethod_var);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0039:
	{
		int32_t L_8 = V_1;
		int32_t L_9 = ___1_cellCount;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0041:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = ___0_numberOfTimes;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScroller__CalculateCellViewOffsets_m20A6C1542E09EEA67F062A61C126D8A8D6F37B84 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmallList_1_Add_m863A7B12A65A5CA484B0CEC1F30B6B58225112A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmallList_1_Clear_mDB4C01826D3E56E78C6AB92E38808DC475A5BD3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmallList_1_get_Item_m4BE491B88C91180C9CD1691A8AB0C4E312E38260_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67* L_0 = __this->____cellViewOffsetArray;
		NullCheck(L_0);
		SmallList_1_Clear_mDB4C01826D3E56E78C6AB92E38808DC475A5BD3C(L_0, SmallList_1_Clear_mDB4C01826D3E56E78C6AB92E38808DC475A5BD3C_RuntimeMethod_var);
		V_0 = (0.0f);
		V_1 = 0;
		goto IL_0034;
	}

IL_0015:
	{
		float L_1 = V_0;
		SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67* L_2 = __this->____cellViewSizeArray;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		float L_4;
		L_4 = SmallList_1_get_Item_m4BE491B88C91180C9CD1691A8AB0C4E312E38260(L_2, L_3, SmallList_1_get_Item_m4BE491B88C91180C9CD1691A8AB0C4E312E38260_RuntimeMethod_var);
		V_0 = ((float)il2cpp_codegen_add(L_1, L_4));
		SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67* L_5 = __this->____cellViewOffsetArray;
		float L_6 = V_0;
		NullCheck(L_5);
		SmallList_1_Add_m863A7B12A65A5CA484B0CEC1F30B6B58225112A0(L_5, L_6, SmallList_1_Add_m863A7B12A65A5CA484B0CEC1F30B6B58225112A0_RuntimeMethod_var);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0034:
	{
		int32_t L_8 = V_1;
		SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67* L_9 = __this->____cellViewSizeArray;
		NullCheck(L_9);
		int32_t L_10 = L_9->___Count;
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0015;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* EnhancedScroller__GetRecycledCellView_m6FDB3BF4D9857E558026D759504CD16F7196B1A1 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___0_cellPrefab, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmallList_1_RemoveAt_m5C1D2C94B96090D3DFCAAE7E1FCAAED3DE3D84C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmallList_1_get_Item_m99EDA7FDFDE7C4514B5B579204D1447768EB91D1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0033;
	}

IL_0004:
	{
		SmallList_1_tDD26C24E78CCBE316084977E23188B07A348B50E* L_0 = __this->____recycledCellViews;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* L_2;
		L_2 = SmallList_1_get_Item_m99EDA7FDFDE7C4514B5B579204D1447768EB91D1(L_0, L_1, SmallList_1_get_Item_m99EDA7FDFDE7C4514B5B579204D1447768EB91D1_RuntimeMethod_var);
		NullCheck(L_2);
		String_t* L_3 = L_2->___cellIdentifier;
		EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* L_4 = ___0_cellPrefab;
		NullCheck(L_4);
		String_t* L_5 = L_4->___cellIdentifier;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, L_5, NULL);
		if (!L_6)
		{
			goto IL_002f;
		}
	}
	{
		SmallList_1_tDD26C24E78CCBE316084977E23188B07A348B50E* L_7 = __this->____recycledCellViews;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* L_9;
		L_9 = SmallList_1_RemoveAt_m5C1D2C94B96090D3DFCAAE7E1FCAAED3DE3D84C4(L_7, L_8, SmallList_1_RemoveAt_m5C1D2C94B96090D3DFCAAE7E1FCAAED3DE3D84C4_RuntimeMethod_var);
		return L_9;
	}

IL_002f:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0033:
	{
		int32_t L_11 = V_0;
		SmallList_1_tDD26C24E78CCBE316084977E23188B07A348B50E* L_12 = __this->____recycledCellViews;
		NullCheck(L_12);
		int32_t L_13 = L_12->___Count;
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0004;
		}
	}
	{
		return (EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892*)NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScroller__ResetVisibleCellViews_m6E81D1E99A31A498C69A81828A73D9DB36B8CB0A (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmallList_1_Add_mAC9E45E1F58043048C633D81C99B8922DA144371_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmallList_1_First_mA0579D015FEC9453E4F7F91092D3B9343FA75D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmallList_1_Last_m38E9D63D3245FC42162FC2ADF0B5BF65C510FD3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmallList_1__ctor_mB2610A8FB28838A475ACE16D185F82D780382BBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmallList_1_get_Item_m99EDA7FDFDE7C4514B5B579204D1447768EB91D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmallList_1_tBAE11EB1B1FAAB50EAC44889F4A55E3A307B5BB2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SmallList_1_tBAE11EB1B1FAAB50EAC44889F4A55E3A307B5BB2* V_3 = NULL;
	{
		EnhancedScroller__CalculateCurrentActiveCellRange_mDACD68A895B57121276E5F98F4E9F10E7658C147(__this, (&V_0), (&V_1), NULL);
		V_2 = 0;
		SmallList_1_tBAE11EB1B1FAAB50EAC44889F4A55E3A307B5BB2* L_0 = (SmallList_1_tBAE11EB1B1FAAB50EAC44889F4A55E3A307B5BB2*)il2cpp_codegen_object_new(SmallList_1_tBAE11EB1B1FAAB50EAC44889F4A55E3A307B5BB2_il2cpp_TypeInfo_var);
		SmallList_1__ctor_mB2610A8FB28838A475ACE16D185F82D780382BBB(L_0, SmallList_1__ctor_mB2610A8FB28838A475ACE16D185F82D780382BBB_RuntimeMethod_var);
		V_3 = L_0;
		goto IL_006b;
	}

IL_0014:
	{
		SmallList_1_tDD26C24E78CCBE316084977E23188B07A348B50E* L_1 = __this->____activeCellViews;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* L_3;
		L_3 = SmallList_1_get_Item_m99EDA7FDFDE7C4514B5B579204D1447768EB91D1(L_1, L_2, SmallList_1_get_Item_m99EDA7FDFDE7C4514B5B579204D1447768EB91D1_RuntimeMethod_var);
		NullCheck(L_3);
		int32_t L_4 = L_3->___cellIndex;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_003c;
		}
	}
	{
		SmallList_1_tDD26C24E78CCBE316084977E23188B07A348B50E* L_6 = __this->____activeCellViews;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* L_8;
		L_8 = SmallList_1_get_Item_m99EDA7FDFDE7C4514B5B579204D1447768EB91D1(L_6, L_7, SmallList_1_get_Item_m99EDA7FDFDE7C4514B5B579204D1447768EB91D1_RuntimeMethod_var);
		NullCheck(L_8);
		int32_t L_9 = L_8->___cellIndex;
		int32_t L_10 = V_1;
		if ((((int32_t)L_9) <= ((int32_t)L_10)))
		{
			goto IL_0050;
		}
	}

IL_003c:
	{
		SmallList_1_tDD26C24E78CCBE316084977E23188B07A348B50E* L_11 = __this->____activeCellViews;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* L_13;
		L_13 = SmallList_1_get_Item_m99EDA7FDFDE7C4514B5B579204D1447768EB91D1(L_11, L_12, SmallList_1_get_Item_m99EDA7FDFDE7C4514B5B579204D1447768EB91D1_RuntimeMethod_var);
		EnhancedScroller__RecycleCell_mCA446FFDF7F8465B52C01ADFAA6101CFD03B1C19(__this, L_13, NULL);
		goto IL_006b;
	}

IL_0050:
	{
		SmallList_1_tBAE11EB1B1FAAB50EAC44889F4A55E3A307B5BB2* L_14 = V_3;
		SmallList_1_tDD26C24E78CCBE316084977E23188B07A348B50E* L_15 = __this->____activeCellViews;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* L_17;
		L_17 = SmallList_1_get_Item_m99EDA7FDFDE7C4514B5B579204D1447768EB91D1(L_15, L_16, SmallList_1_get_Item_m99EDA7FDFDE7C4514B5B579204D1447768EB91D1_RuntimeMethod_var);
		NullCheck(L_17);
		int32_t L_18 = L_17->___cellIndex;
		NullCheck(L_14);
		SmallList_1_Add_mAC9E45E1F58043048C633D81C99B8922DA144371(L_14, L_18, SmallList_1_Add_mAC9E45E1F58043048C633D81C99B8922DA144371_RuntimeMethod_var);
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_006b:
	{
		int32_t L_20 = V_2;
		SmallList_1_tDD26C24E78CCBE316084977E23188B07A348B50E* L_21 = __this->____activeCellViews;
		NullCheck(L_21);
		int32_t L_22 = L_21->___Count;
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_0014;
		}
	}
	{
		SmallList_1_tBAE11EB1B1FAAB50EAC44889F4A55E3A307B5BB2* L_23 = V_3;
		NullCheck(L_23);
		int32_t L_24 = L_23->___Count;
		if (L_24)
		{
			goto IL_0097;
		}
	}
	{
		int32_t L_25 = V_0;
		V_2 = L_25;
		goto IL_0091;
	}

IL_0085:
	{
		int32_t L_26 = V_2;
		EnhancedScroller__AddCellView_mD96692EF6D014D66A37D7C94D2CF042059B4EFFD(__this, L_26, 1, NULL);
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0091:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_1;
		if ((((int32_t)L_28) <= ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		goto IL_00d1;
	}

IL_0097:
	{
		int32_t L_30 = V_1;
		V_2 = L_30;
		goto IL_00b0;
	}

IL_009b:
	{
		int32_t L_31 = V_2;
		SmallList_1_tBAE11EB1B1FAAB50EAC44889F4A55E3A307B5BB2* L_32 = V_3;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = SmallList_1_First_mA0579D015FEC9453E4F7F91092D3B9343FA75D37(L_32, SmallList_1_First_mA0579D015FEC9453E4F7F91092D3B9343FA75D37_RuntimeMethod_var);
		if ((((int32_t)L_31) >= ((int32_t)L_33)))
		{
			goto IL_00ac;
		}
	}
	{
		int32_t L_34 = V_2;
		EnhancedScroller__AddCellView_mD96692EF6D014D66A37D7C94D2CF042059B4EFFD(__this, L_34, 0, NULL);
	}

IL_00ac:
	{
		int32_t L_35 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_35, 1));
	}

IL_00b0:
	{
		int32_t L_36 = V_2;
		int32_t L_37 = V_0;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_009b;
		}
	}
	{
		int32_t L_38 = V_0;
		V_2 = L_38;
		goto IL_00cd;
	}

IL_00b8:
	{
		int32_t L_39 = V_2;
		SmallList_1_tBAE11EB1B1FAAB50EAC44889F4A55E3A307B5BB2* L_40 = V_3;
		NullCheck(L_40);
		int32_t L_41;
		L_41 = SmallList_1_Last_m38E9D63D3245FC42162FC2ADF0B5BF65C510FD3E(L_40, SmallList_1_Last_m38E9D63D3245FC42162FC2ADF0B5BF65C510FD3E_RuntimeMethod_var);
		if ((((int32_t)L_39) <= ((int32_t)L_41)))
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_42 = V_2;
		EnhancedScroller__AddCellView_mD96692EF6D014D66A37D7C94D2CF042059B4EFFD(__this, L_42, 1, NULL);
	}

IL_00c9:
	{
		int32_t L_43 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_00cd:
	{
		int32_t L_44 = V_2;
		int32_t L_45 = V_1;
		if ((((int32_t)L_44) <= ((int32_t)L_45)))
		{
			goto IL_00b8;
		}
	}

IL_00d1:
	{
		int32_t L_46 = V_0;
		__this->____activeCellViewsStartIndex = L_46;
		int32_t L_47 = V_1;
		__this->____activeCellViewsEndIndex = L_47;
		EnhancedScroller__SetPadders_mF35E2F1E9662C3AA5073B54F6407C986A6D8535C(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScroller__RecycleAllCells_m95A25FE62C63C7650E6C8278AA05AE2F589B56DC (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmallList_1_get_Item_m99EDA7FDFDE7C4514B5B579204D1447768EB91D1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_0014;
	}

IL_0002:
	{
		SmallList_1_tDD26C24E78CCBE316084977E23188B07A348B50E* L_0 = __this->____activeCellViews;
		NullCheck(L_0);
		EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* L_1;
		L_1 = SmallList_1_get_Item_m99EDA7FDFDE7C4514B5B579204D1447768EB91D1(L_0, 0, SmallList_1_get_Item_m99EDA7FDFDE7C4514B5B579204D1447768EB91D1_RuntimeMethod_var);
		EnhancedScroller__RecycleCell_mCA446FFDF7F8465B52C01ADFAA6101CFD03B1C19(__this, L_1, NULL);
	}

IL_0014:
	{
		SmallList_1_tDD26C24E78CCBE316084977E23188B07A348B50E* L_2 = __this->____activeCellViews;
		NullCheck(L_2);
		int32_t L_3 = L_2->___Count;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		__this->____activeCellViewsStartIndex = 0;
		__this->____activeCellViewsEndIndex = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScroller__RecycleCell_mCA446FFDF7F8465B52C01ADFAA6101CFD03B1C19 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___0_cellView, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmallList_1_Add_m98D21F5A6E30D31A761E7423CE4F3EF1ADB603CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmallList_1_Remove_m4E9186A4CFD0B62D54E45C8C5C946FBF96A6FC8A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CellViewWillRecycleDelegate_tBFC8C3F20197FE3179695C4C338EFAF7D618875C* L_0 = __this->___cellViewWillRecycle;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		CellViewWillRecycleDelegate_tBFC8C3F20197FE3179695C4C338EFAF7D618875C* L_1 = __this->___cellViewWillRecycle;
		EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* L_2 = ___0_cellView;
		NullCheck(L_1);
		CellViewWillRecycleDelegate_Invoke_m4B873B37A7A3BA5E336CBC3281CBF933B3DDA2C4_inline(L_1, L_2, NULL);
	}

IL_0014:
	{
		SmallList_1_tDD26C24E78CCBE316084977E23188B07A348B50E* L_3 = __this->____activeCellViews;
		EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* L_4 = ___0_cellView;
		NullCheck(L_3);
		EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* L_5;
		L_5 = SmallList_1_Remove_m4E9186A4CFD0B62D54E45C8C5C946FBF96A6FC8A(L_3, L_4, SmallList_1_Remove_m4E9186A4CFD0B62D54E45C8C5C946FBF96A6FC8A_RuntimeMethod_var);
		SmallList_1_tDD26C24E78CCBE316084977E23188B07A348B50E* L_6 = __this->____recycledCellViews;
		EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* L_7 = ___0_cellView;
		NullCheck(L_6);
		SmallList_1_Add_m98D21F5A6E30D31A761E7423CE4F3EF1ADB603CA(L_6, L_7, SmallList_1_Add_m98D21F5A6E30D31A761E7423CE4F3EF1ADB603CA_RuntimeMethod_var);
		EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* L_8 = ___0_cellView;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = __this->____recycledCellViewContainer;
		NullCheck(L_9);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_9, L_10, NULL);
		EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* L_11 = ___0_cellView;
		NullCheck(L_11);
		L_11->___dataIndex = 0;
		EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* L_12 = ___0_cellView;
		NullCheck(L_12);
		L_12->___cellIndex = 0;
		EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* L_13 = ___0_cellView;
		NullCheck(L_13);
		L_13->___active = (bool)0;
		CellViewVisibilityChangedDelegate_t43F8249D9299E7AD6E37272385ADBEE1017BA3DD* L_14 = __this->___cellViewVisibilityChanged;
		if (!L_14)
		{
			goto IL_0067;
		}
	}
	{
		CellViewVisibilityChangedDelegate_t43F8249D9299E7AD6E37272385ADBEE1017BA3DD* L_15 = __this->___cellViewVisibilityChanged;
		EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* L_16 = ___0_cellView;
		NullCheck(L_15);
		CellViewVisibilityChangedDelegate_Invoke_m8809BAE14177603BDD5AA7B730B14D108A7258EB_inline(L_15, L_16, NULL);
	}

IL_0067:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScroller__AddCellView_mD96692EF6D014D66A37D7C94D2CF042059B4EFFD (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, int32_t ___0_cellIndex, int32_t ___1_listPosition, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A_mBEDAB0EBAEF4ADA5377B97FC2318DE8020F2D639_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisLayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A_mCAEF1A4C92D1C856A46417BA645409AE42F005D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnhancedScrollerDelegate_tC2488B96D04198ACAFE7EB43D3B931DEA4589C0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmallList_1_AddStart_m461257E40DF2FC5164825CBDAB4DF463FDCB45D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmallList_1_Add_m98D21F5A6E30D31A761E7423CE4F3EF1ADB603CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmallList_1_get_Item_m4BE491B88C91180C9CD1691A8AB0C4E312E38260_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* V_1 = NULL;
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* V_2 = NULL;
	float G_B7_0 = 0.0f;
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* G_B7_1 = NULL;
	float G_B6_0 = 0.0f;
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* G_B6_1 = NULL;
	float G_B8_0 = 0.0f;
	float G_B8_1 = 0.0f;
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* G_B8_2 = NULL;
	float G_B11_0 = 0.0f;
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* G_B11_1 = NULL;
	float G_B10_0 = 0.0f;
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* G_B10_1 = NULL;
	float G_B12_0 = 0.0f;
	float G_B12_1 = 0.0f;
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* G_B12_2 = NULL;
	{
		int32_t L_0;
		L_0 = EnhancedScroller_get_NumberOfCells_m60ECD04B3FDC301E066BB052258B697BEC6A98B7(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		int32_t L_1 = ___0_cellIndex;
		int32_t L_2;
		L_2 = EnhancedScroller_get_NumberOfCells_m60ECD04B3FDC301E066BB052258B697BEC6A98B7(__this, NULL);
		V_0 = ((int32_t)(L_1%L_2));
		RuntimeObject* L_3 = __this->____delegate;
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_cellIndex;
		NullCheck(L_3);
		EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* L_6;
		L_6 = InterfaceFuncInvoker3< EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892*, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B*, int32_t, int32_t >::Invoke(2, IEnhancedScrollerDelegate_tC2488B96D04198ACAFE7EB43D3B931DEA4589C0B_il2cpp_TypeInfo_var, L_3, __this, L_4, L_5);
		V_1 = L_6;
		EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* L_7 = V_1;
		int32_t L_8 = ___0_cellIndex;
		NullCheck(L_7);
		L_7->___cellIndex = L_8;
		EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* L_9 = V_1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		L_9->___dataIndex = L_10;
		EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* L_11 = V_1;
		NullCheck(L_11);
		L_11->___active = (bool)1;
		EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* L_12 = V_1;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_14 = __this->____container;
		NullCheck(L_13);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_13, L_14, (bool)0, NULL);
		EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* L_15 = V_1;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		NullCheck(L_16);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_16, L_17, NULL);
		EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* L_18 = V_1;
		NullCheck(L_18);
		LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* L_19;
		L_19 = Component_GetComponent_TisLayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A_mBEDAB0EBAEF4ADA5377B97FC2318DE8020F2D639(L_18, Component_GetComponent_TisLayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A_mBEDAB0EBAEF4ADA5377B97FC2318DE8020F2D639_RuntimeMethod_var);
		V_2 = L_19;
		LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* L_20 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_20, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_21)
		{
			goto IL_0074;
		}
	}
	{
		EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* L_22 = V_1;
		NullCheck(L_22);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_22, NULL);
		NullCheck(L_23);
		LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* L_24;
		L_24 = GameObject_AddComponent_TisLayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A_mCAEF1A4C92D1C856A46417BA645409AE42F005D2(L_23, GameObject_AddComponent_TisLayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A_mCAEF1A4C92D1C856A46417BA645409AE42F005D2_RuntimeMethod_var);
		V_2 = L_24;
	}

IL_0074:
	{
		int32_t L_25 = __this->___scrollDirection;
		if (L_25)
		{
			goto IL_00a7;
		}
	}
	{
		LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* L_26 = V_2;
		SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67* L_27 = __this->____cellViewSizeArray;
		int32_t L_28 = ___0_cellIndex;
		NullCheck(L_27);
		float L_29;
		L_29 = SmallList_1_get_Item_m4BE491B88C91180C9CD1691A8AB0C4E312E38260(L_27, L_28, SmallList_1_get_Item_m4BE491B88C91180C9CD1691A8AB0C4E312E38260_RuntimeMethod_var);
		int32_t L_30 = ___0_cellIndex;
		if ((((int32_t)L_30) > ((int32_t)0)))
		{
			G_B7_0 = L_29;
			G_B7_1 = L_26;
			goto IL_0094;
		}
		G_B6_0 = L_29;
		G_B6_1 = L_26;
	}
	{
		G_B8_0 = (0.0f);
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		goto IL_009f;
	}

IL_0094:
	{
		HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E* L_31 = __this->____layoutGroup;
		NullCheck(L_31);
		float L_32;
		L_32 = HorizontalOrVerticalLayoutGroup_get_spacing_m916C9BF57D4AB0EF76E6BC4EC5E1EA54B7918782_inline(L_31, NULL);
		G_B8_0 = L_32;
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
	}

IL_009f:
	{
		NullCheck(G_B8_2);
		VirtualActionInvoker1< float >::Invoke(34, G_B8_2, ((float)il2cpp_codegen_subtract(G_B8_1, G_B8_0)));
		goto IL_00d0;
	}

IL_00a7:
	{
		LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* L_33 = V_2;
		SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67* L_34 = __this->____cellViewSizeArray;
		int32_t L_35 = ___0_cellIndex;
		NullCheck(L_34);
		float L_36;
		L_36 = SmallList_1_get_Item_m4BE491B88C91180C9CD1691A8AB0C4E312E38260(L_34, L_35, SmallList_1_get_Item_m4BE491B88C91180C9CD1691A8AB0C4E312E38260_RuntimeMethod_var);
		int32_t L_37 = ___0_cellIndex;
		if ((((int32_t)L_37) > ((int32_t)0)))
		{
			G_B11_0 = L_36;
			G_B11_1 = L_33;
			goto IL_00bf;
		}
		G_B10_0 = L_36;
		G_B10_1 = L_33;
	}
	{
		G_B12_0 = (0.0f);
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		goto IL_00ca;
	}

IL_00bf:
	{
		HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E* L_38 = __this->____layoutGroup;
		NullCheck(L_38);
		float L_39;
		L_39 = HorizontalOrVerticalLayoutGroup_get_spacing_m916C9BF57D4AB0EF76E6BC4EC5E1EA54B7918782_inline(L_38, NULL);
		G_B12_0 = L_39;
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
	}

IL_00ca:
	{
		NullCheck(G_B12_2);
		VirtualActionInvoker1< float >::Invoke(32, G_B12_2, ((float)il2cpp_codegen_subtract(G_B12_1, G_B12_0)));
	}

IL_00d0:
	{
		int32_t L_40 = ___1_listPosition;
		if (L_40)
		{
			goto IL_00e1;
		}
	}
	{
		SmallList_1_tDD26C24E78CCBE316084977E23188B07A348B50E* L_41 = __this->____activeCellViews;
		EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* L_42 = V_1;
		NullCheck(L_41);
		SmallList_1_AddStart_m461257E40DF2FC5164825CBDAB4DF463FDCB45D3(L_41, L_42, SmallList_1_AddStart_m461257E40DF2FC5164825CBDAB4DF463FDCB45D3_RuntimeMethod_var);
		goto IL_00ed;
	}

IL_00e1:
	{
		SmallList_1_tDD26C24E78CCBE316084977E23188B07A348B50E* L_43 = __this->____activeCellViews;
		EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* L_44 = V_1;
		NullCheck(L_43);
		SmallList_1_Add_m98D21F5A6E30D31A761E7423CE4F3EF1ADB603CA(L_43, L_44, SmallList_1_Add_m98D21F5A6E30D31A761E7423CE4F3EF1ADB603CA_RuntimeMethod_var);
	}

IL_00ed:
	{
		int32_t L_45 = ___1_listPosition;
		if ((!(((uint32_t)L_45) == ((uint32_t)1))))
		{
			goto IL_010b;
		}
	}
	{
		EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* L_46 = V_1;
		NullCheck(L_46);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47;
		L_47 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_46, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_48 = __this->____container;
		NullCheck(L_48);
		int32_t L_49;
		L_49 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_48, NULL);
		NullCheck(L_47);
		Transform_SetSiblingIndex_m8A3B81F08B93991C05BFA89ADA2146836C4FC4B2(L_47, ((int32_t)il2cpp_codegen_subtract(L_49, 2)), NULL);
		goto IL_011a;
	}

IL_010b:
	{
		int32_t L_50 = ___1_listPosition;
		if (L_50)
		{
			goto IL_011a;
		}
	}
	{
		EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* L_51 = V_1;
		NullCheck(L_51);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_52;
		L_52 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_51, NULL);
		NullCheck(L_52);
		Transform_SetSiblingIndex_m8A3B81F08B93991C05BFA89ADA2146836C4FC4B2(L_52, 1, NULL);
	}

IL_011a:
	{
		CellViewVisibilityChangedDelegate_t43F8249D9299E7AD6E37272385ADBEE1017BA3DD* L_53 = __this->___cellViewVisibilityChanged;
		if (!L_53)
		{
			goto IL_012e;
		}
	}
	{
		CellViewVisibilityChangedDelegate_t43F8249D9299E7AD6E37272385ADBEE1017BA3DD* L_54 = __this->___cellViewVisibilityChanged;
		EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* L_55 = V_1;
		NullCheck(L_54);
		CellViewVisibilityChangedDelegate_Invoke_m8809BAE14177603BDD5AA7B730B14D108A7258EB_inline(L_54, L_55, NULL);
	}

IL_012e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScroller__SetPadders_mF35E2F1E9662C3AA5073B54F6407C986A6D8535C (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmallList_1_Last_mAF251EECBC2279CFDBFAA895792A8E071631A904_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmallList_1_get_Item_m4BE491B88C91180C9CD1691A8AB0C4E312E38260_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		int32_t L_0;
		L_0 = EnhancedScroller_get_NumberOfCells_m60ECD04B3FDC301E066BB052258B697BEC6A98B7(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67* L_1 = __this->____cellViewOffsetArray;
		int32_t L_2 = __this->____activeCellViewsStartIndex;
		NullCheck(L_1);
		float L_3;
		L_3 = SmallList_1_get_Item_m4BE491B88C91180C9CD1691A8AB0C4E312E38260(L_1, L_2, SmallList_1_get_Item_m4BE491B88C91180C9CD1691A8AB0C4E312E38260_RuntimeMethod_var);
		SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67* L_4 = __this->____cellViewSizeArray;
		int32_t L_5 = __this->____activeCellViewsStartIndex;
		NullCheck(L_4);
		float L_6;
		L_6 = SmallList_1_get_Item_m4BE491B88C91180C9CD1691A8AB0C4E312E38260(L_4, L_5, SmallList_1_get_Item_m4BE491B88C91180C9CD1691A8AB0C4E312E38260_RuntimeMethod_var);
		V_0 = ((float)il2cpp_codegen_subtract(L_3, L_6));
		SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67* L_7 = __this->____cellViewOffsetArray;
		NullCheck(L_7);
		float L_8;
		L_8 = SmallList_1_Last_mAF251EECBC2279CFDBFAA895792A8E071631A904(L_7, SmallList_1_Last_mAF251EECBC2279CFDBFAA895792A8E071631A904_RuntimeMethod_var);
		SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67* L_9 = __this->____cellViewOffsetArray;
		int32_t L_10 = __this->____activeCellViewsEndIndex;
		NullCheck(L_9);
		float L_11;
		L_11 = SmallList_1_get_Item_m4BE491B88C91180C9CD1691A8AB0C4E312E38260(L_9, L_10, SmallList_1_get_Item_m4BE491B88C91180C9CD1691A8AB0C4E312E38260_RuntimeMethod_var);
		V_1 = ((float)il2cpp_codegen_subtract(L_8, L_11));
		int32_t L_12 = __this->___scrollDirection;
		if (L_12)
		{
			goto IL_00b0;
		}
	}
	{
		LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* L_13 = __this->____firstPadder;
		float L_14 = V_0;
		NullCheck(L_13);
		VirtualActionInvoker1< float >::Invoke(34, L_13, L_14);
		LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* L_15 = __this->____firstPadder;
		NullCheck(L_15);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_15, NULL);
		LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* L_17 = __this->____firstPadder;
		NullCheck(L_17);
		float L_18;
		L_18 = VirtualFuncInvoker0< float >::Invoke(33, L_17);
		NullCheck(L_16);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, (bool)((((float)L_18) > ((float)(0.0f)))? 1 : 0), NULL);
		LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* L_19 = __this->____lastPadder;
		float L_20 = V_1;
		NullCheck(L_19);
		VirtualActionInvoker1< float >::Invoke(34, L_19, L_20);
		LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* L_21 = __this->____lastPadder;
		NullCheck(L_21);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_21, NULL);
		LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* L_23 = __this->____lastPadder;
		NullCheck(L_23);
		float L_24;
		L_24 = VirtualFuncInvoker0< float >::Invoke(33, L_23);
		NullCheck(L_22);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_22, (bool)((((float)L_24) > ((float)(0.0f)))? 1 : 0), NULL);
		return;
	}

IL_00b0:
	{
		LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* L_25 = __this->____firstPadder;
		float L_26 = V_0;
		NullCheck(L_25);
		VirtualActionInvoker1< float >::Invoke(32, L_25, L_26);
		LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* L_27 = __this->____firstPadder;
		NullCheck(L_27);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_27, NULL);
		LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* L_29 = __this->____firstPadder;
		NullCheck(L_29);
		float L_30;
		L_30 = VirtualFuncInvoker0< float >::Invoke(31, L_29);
		NullCheck(L_28);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_28, (bool)((((float)L_30) > ((float)(0.0f)))? 1 : 0), NULL);
		LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* L_31 = __this->____lastPadder;
		float L_32 = V_1;
		NullCheck(L_31);
		VirtualActionInvoker1< float >::Invoke(32, L_31, L_32);
		LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* L_33 = __this->____lastPadder;
		NullCheck(L_33);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34;
		L_34 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_33, NULL);
		LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* L_35 = __this->____lastPadder;
		NullCheck(L_35);
		float L_36;
		L_36 = VirtualFuncInvoker0< float >::Invoke(31, L_35);
		NullCheck(L_34);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_34, (bool)((((float)L_36) > ((float)(0.0f)))? 1 : 0), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScroller__RefreshActive_m098FD7B4385179FE74C7F609434685913195333C (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		V_2 = L_0;
		bool L_1 = __this->___loop;
		if (!L_1)
		{
			goto IL_00a1;
		}
	}
	{
		float L_2 = __this->____scrollPosition;
		float L_3 = __this->____loopFirstJumpTrigger;
		if ((!(((float)L_2) < ((float)L_3))))
		{
			goto IL_005a;
		}
	}
	{
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_4 = __this->____scrollRect;
		NullCheck(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = ScrollRect_get_velocity_m8F7DDB02F52BFF2503F079C216FC5C89AA4875DC_inline(L_4, NULL);
		V_2 = L_5;
		float L_6 = __this->____loopLastScrollPosition;
		float L_7 = __this->____loopFirstJumpTrigger;
		float L_8 = __this->____scrollPosition;
		float L_9 = __this->___spacing;
		EnhancedScroller_set_ScrollPosition_m703772A369D3E1676BD65C15F647CFA79481C223(__this, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_6, ((float)il2cpp_codegen_subtract(L_7, L_8)))), L_9)), NULL);
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_10 = __this->____scrollRect;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = V_2;
		NullCheck(L_10);
		ScrollRect_set_velocity_mBC8D4BC0A0184FCC3AEB359AE68E9130E811AFC2_inline(L_10, L_11, NULL);
		goto IL_00a1;
	}

IL_005a:
	{
		float L_12 = __this->____scrollPosition;
		float L_13 = __this->____loopLastJumpTrigger;
		if ((!(((float)L_12) > ((float)L_13))))
		{
			goto IL_00a1;
		}
	}
	{
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_14 = __this->____scrollRect;
		NullCheck(L_14);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = ScrollRect_get_velocity_m8F7DDB02F52BFF2503F079C216FC5C89AA4875DC_inline(L_14, NULL);
		V_2 = L_15;
		float L_16 = __this->____loopFirstScrollPosition;
		float L_17 = __this->____scrollPosition;
		float L_18 = __this->____loopLastJumpTrigger;
		float L_19 = __this->___spacing;
		EnhancedScroller_set_ScrollPosition_m703772A369D3E1676BD65C15F647CFA79481C223(__this, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(L_16, ((float)il2cpp_codegen_subtract(L_17, L_18)))), L_19)), NULL);
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_20 = __this->____scrollRect;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = V_2;
		NullCheck(L_20);
		ScrollRect_set_velocity_mBC8D4BC0A0184FCC3AEB359AE68E9130E811AFC2_inline(L_20, L_21, NULL);
	}

IL_00a1:
	{
		EnhancedScroller__CalculateCurrentActiveCellRange_mDACD68A895B57121276E5F98F4E9F10E7658C147(__this, (&V_0), (&V_1), NULL);
		int32_t L_22 = V_0;
		int32_t L_23 = __this->____activeCellViewsStartIndex;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00be;
		}
	}
	{
		int32_t L_24 = V_1;
		int32_t L_25 = __this->____activeCellViewsEndIndex;
		if ((!(((uint32_t)L_24) == ((uint32_t)L_25))))
		{
			goto IL_00be;
		}
	}
	{
		return;
	}

IL_00be:
	{
		EnhancedScroller__ResetVisibleCellViews_m6E81D1E99A31A498C69A81828A73D9DB36B8CB0A(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScroller__CalculateCurrentActiveCellRange_mDACD68A895B57121276E5F98F4E9F10E7658C147 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, int32_t* ___0_startIndex, int32_t* ___1_endIndex, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_2;
	memset((&V_2), 0, sizeof(V_2));
	float G_B2_0 = 0.0f;
	float G_B1_0 = 0.0f;
	float G_B3_0 = 0.0f;
	float G_B3_1 = 0.0f;
	{
		int32_t* L_0 = ___0_startIndex;
		*((int32_t*)L_0) = (int32_t)0;
		int32_t* L_1 = ___1_endIndex;
		*((int32_t*)L_1) = (int32_t)0;
		float L_2 = __this->____scrollPosition;
		V_0 = L_2;
		float L_3 = __this->____scrollPosition;
		int32_t L_4 = __this->___scrollDirection;
		if (!L_4)
		{
			G_B2_0 = L_3;
			goto IL_0030;
		}
		G_B1_0 = L_3;
	}
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->____scrollRectTransform;
		NullCheck(L_5);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_6;
		L_6 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_5, NULL);
		V_2 = L_6;
		float L_7;
		L_7 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9_inline((&V_2), NULL);
		G_B3_0 = L_7;
		G_B3_1 = G_B1_0;
		goto IL_0043;
	}

IL_0030:
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8 = __this->____scrollRectTransform;
		NullCheck(L_8);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_9;
		L_9 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_8, NULL);
		V_2 = L_9;
		float L_10;
		L_10 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8_inline((&V_2), NULL);
		G_B3_0 = L_10;
		G_B3_1 = G_B2_0;
	}

IL_0043:
	{
		V_1 = ((float)il2cpp_codegen_add(G_B3_1, G_B3_0));
		int32_t* L_11 = ___0_startIndex;
		float L_12 = V_0;
		int32_t L_13;
		L_13 = EnhancedScroller_GetCellViewIndexAtPosition_m3CC8A4F573F53A48CE3A2283229C20F37409BEDA(__this, L_12, NULL);
		*((int32_t*)L_11) = (int32_t)L_13;
		int32_t* L_14 = ___1_endIndex;
		float L_15 = V_1;
		int32_t L_16;
		L_16 = EnhancedScroller_GetCellViewIndexAtPosition_m3CC8A4F573F53A48CE3A2283229C20F37409BEDA(__this, L_15, NULL);
		*((int32_t*)L_14) = (int32_t)L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnhancedScroller__GetCellIndexAtPosition_mDE49D63C2830170E57673C5E3A8D0EC0BC5F08A2 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, float ___0_position, int32_t ___1_startIndex, int32_t ___2_endIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmallList_1_get_Item_m4BE491B88C91180C9CD1691A8AB0C4E312E38260_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	float G_B7_0 = 0.0f;
	float G_B7_1 = 0.0f;
	float G_B6_0 = 0.0f;
	float G_B6_1 = 0.0f;
	float G_B8_0 = 0.0f;
	float G_B8_1 = 0.0f;
	float G_B8_2 = 0.0f;
	{
		int32_t L_0 = ___1_startIndex;
		int32_t L_1 = ___2_endIndex;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_2 = ___1_startIndex;
		return L_2;
	}

IL_0006:
	{
		int32_t L_3 = ___1_startIndex;
		int32_t L_4 = ___2_endIndex;
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_3, L_4))/2));
		int32_t L_5 = __this->___scrollDirection;
		if (!L_5)
		{
			goto IL_0021;
		}
	}
	{
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_6 = __this->___padding;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = RectOffset_get_left_mA406D7AFF76E48507EF143CDB1D157C4D5430D90(L_6, NULL);
		G_B5_0 = L_7;
		goto IL_002c;
	}

IL_0021:
	{
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_8 = __this->___padding;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = RectOffset_get_top_m82E49FB93A5BD417131136F5A7DBA0F251F10263(L_8, NULL);
		G_B5_0 = L_9;
	}

IL_002c:
	{
		V_1 = G_B5_0;
		SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67* L_10 = __this->____cellViewOffsetArray;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		float L_12;
		L_12 = SmallList_1_get_Item_m4BE491B88C91180C9CD1691A8AB0C4E312E38260(L_10, L_11, SmallList_1_get_Item_m4BE491B88C91180C9CD1691A8AB0C4E312E38260_RuntimeMethod_var);
		int32_t L_13 = V_1;
		float L_14 = ___0_position;
		int32_t L_15 = V_1;
		if (!L_15)
		{
			G_B7_0 = L_14;
			G_B7_1 = ((float)il2cpp_codegen_add(L_12, ((float)L_13)));
			goto IL_0047;
		}
		G_B6_0 = L_14;
		G_B6_1 = ((float)il2cpp_codegen_add(L_12, ((float)L_13)));
	}
	{
		G_B8_0 = (1.00001001f);
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		goto IL_004c;
	}

IL_0047:
	{
		G_B8_0 = (0.0f);
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
	}

IL_004c:
	{
		if ((!(((float)G_B8_2) >= ((float)((float)il2cpp_codegen_add(G_B8_1, G_B8_0))))))
		{
			goto IL_0059;
		}
	}
	{
		float L_16 = ___0_position;
		int32_t L_17 = ___1_startIndex;
		int32_t L_18 = V_0;
		int32_t L_19;
		L_19 = EnhancedScroller__GetCellIndexAtPosition_mDE49D63C2830170E57673C5E3A8D0EC0BC5F08A2(__this, L_16, L_17, L_18, NULL);
		return L_19;
	}

IL_0059:
	{
		float L_20 = ___0_position;
		int32_t L_21 = V_0;
		int32_t L_22 = ___2_endIndex;
		int32_t L_23;
		L_23 = EnhancedScroller__GetCellIndexAtPosition_mDE49D63C2830170E57673C5E3A8D0EC0BC5F08A2(__this, L_20, ((int32_t)il2cpp_codegen_add(L_21, 1)), L_22, NULL);
		return L_23;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScroller_Awake_m9C783691D2125D7C59BA1020B67D8090C9CF0D3B (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisHorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E_m65D141B4A15249538919DC3E5A3EE3893617FE88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_m807654BF9CCD1E13E3FB8498D557BDDF13006518_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisHorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA_mDF05C81771378B8EEC5C01D6F0F85665B6BAB5D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisVerticalLayoutGroup_t06B5E51FC8051BF2009E6494876FBB9F3E5320B8_m8FC80304C9EFC42F9CAE9588753536DC6F224521_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A_mB80DDAE1EBBC24C6967E5633AD129139079853E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23623521A1F8CA7F2221F4CAD23AB500AD230DFE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral899C4CA9F8694026FA5B50E67227A4F3E06AC520);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD52B1901A8EEF152CE58338C36B2C7F16C12121B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF621B8341BA5525CD19F35458C986A52EEE81558);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_0;
		L_0 = Component_GetComponent_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_m807654BF9CCD1E13E3FB8498D557BDDF13006518(__this, Component_GetComponent_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_m807654BF9CCD1E13E3FB8498D557BDDF13006518_RuntimeMethod_var);
		__this->____scrollRect = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____scrollRect), (void*)L_0);
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_1 = __this->____scrollRect;
		NullCheck(L_1);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2;
		L_2 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(L_1, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		__this->____scrollRectTransform = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____scrollRectTransform), (void*)L_2);
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_3 = __this->____scrollRect;
		NullCheck(L_3);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4;
		L_4 = ScrollRect_get_content_m7878BCA28A96B7FBA02DC466A1ED2C9E191C6996_inline(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0045;
		}
	}
	{
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_6 = __this->____scrollRect;
		NullCheck(L_6);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7;
		L_7 = ScrollRect_get_content_m7878BCA28A96B7FBA02DC466A1ED2C9E191C6996_inline(L_6, NULL);
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_8, NULL);
	}

IL_0045:
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_9 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_10 = L_9;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		GameObject__ctor_m721D643351E55308EA4F5F41B67D5446D11C61F0(L_13, _stringLiteral899C4CA9F8694026FA5B50E67227A4F3E06AC520, L_10, NULL);
		V_0 = L_13;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = V_0;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_16 = __this->____scrollRectTransform;
		NullCheck(L_15);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_15, L_16, NULL);
		int32_t L_17 = __this->___scrollDirection;
		if (L_17)
		{
			goto IL_0085;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = V_0;
		NullCheck(L_18);
		VerticalLayoutGroup_t06B5E51FC8051BF2009E6494876FBB9F3E5320B8* L_19;
		L_19 = GameObject_AddComponent_TisVerticalLayoutGroup_t06B5E51FC8051BF2009E6494876FBB9F3E5320B8_m8FC80304C9EFC42F9CAE9588753536DC6F224521(L_18, GameObject_AddComponent_TisVerticalLayoutGroup_t06B5E51FC8051BF2009E6494876FBB9F3E5320B8_m8FC80304C9EFC42F9CAE9588753536DC6F224521_RuntimeMethod_var);
		goto IL_008c;
	}

IL_0085:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = V_0;
		NullCheck(L_20);
		HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* L_21;
		L_21 = GameObject_AddComponent_TisHorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA_mDF05C81771378B8EEC5C01D6F0F85665B6BAB5D4(L_20, GameObject_AddComponent_TisHorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA_mDF05C81771378B8EEC5C01D6F0F85665B6BAB5D4_RuntimeMethod_var);
	}

IL_008c:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = V_0;
		NullCheck(L_22);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_23;
		L_23 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_22, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		__this->____container = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____container), (void*)L_23);
		int32_t L_24 = __this->___scrollDirection;
		if (L_24)
		{
			goto IL_00e6;
		}
	}
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_25 = __this->____container;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_26), (0.0f), (1.0f), NULL);
		NullCheck(L_25);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_25, L_26, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_27 = __this->____container;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		L_28 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline(NULL);
		NullCheck(L_27);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_27, L_28, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_29 = __this->____container;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30;
		memset((&L_30), 0, sizeof(L_30));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_30), (0.5f), (1.0f), NULL);
		NullCheck(L_29);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_29, L_30, NULL);
		goto IL_012a;
	}

IL_00e6:
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_31 = __this->____container;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32;
		L_32 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		NullCheck(L_31);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_31, L_32, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_33 = __this->____container;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_34), (0.0f), (1.0f), NULL);
		NullCheck(L_33);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_33, L_34, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_35 = __this->____container;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_36), (0.0f), (0.5f), NULL);
		NullCheck(L_35);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_35, L_36, NULL);
	}

IL_012a:
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_37 = __this->____container;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38;
		L_38 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		NullCheck(L_37);
		RectTransform_set_offsetMax_m5514D09D86516F2C0E25FA6D11A3A4274D3D002D(L_37, L_38, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_39 = __this->____container;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40;
		L_40 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		NullCheck(L_39);
		RectTransform_set_offsetMin_m07F38B4105C7CA9CC9FBDC9ED0DB008602880AB9(L_39, L_40, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_41 = __this->____container;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_41);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_41, L_42, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_43 = __this->____container;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44;
		L_44 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_43);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_43, L_44, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_45 = __this->____container;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		NullCheck(L_45);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_45, L_46, NULL);
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_47 = __this->____scrollRect;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_48 = __this->____container;
		NullCheck(L_47);
		ScrollRect_set_content_m01BF6FE0205985CBD16C6D3BB4B6F345B3AF484E_inline(L_47, L_48, NULL);
		int32_t L_49 = __this->___scrollDirection;
		if (L_49)
		{
			goto IL_01a6;
		}
	}
	{
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_50 = __this->____scrollRect;
		NullCheck(L_50);
		Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* L_51;
		L_51 = ScrollRect_get_verticalScrollbar_mCEB62CC858B43CE7FB07D287CAFC1363668E78C6_inline(L_50, NULL);
		__this->____scrollbar = L_51;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____scrollbar), (void*)L_51);
		goto IL_01b7;
	}

IL_01a6:
	{
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_52 = __this->____scrollRect;
		NullCheck(L_52);
		Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* L_53;
		L_53 = ScrollRect_get_horizontalScrollbar_mDE0EC3FD5C1AC8FDB4D8E8EF4B093A77218DF534_inline(L_52, NULL);
		__this->____scrollbar = L_53;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____scrollbar), (void*)L_53);
	}

IL_01b7:
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_54 = __this->____container;
		NullCheck(L_54);
		HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E* L_55;
		L_55 = Component_GetComponent_TisHorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E_m65D141B4A15249538919DC3E5A3EE3893617FE88(L_54, Component_GetComponent_TisHorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E_m65D141B4A15249538919DC3E5A3EE3893617FE88_RuntimeMethod_var);
		__this->____layoutGroup = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____layoutGroup), (void*)L_55);
		HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E* L_56 = __this->____layoutGroup;
		float L_57 = __this->___spacing;
		NullCheck(L_56);
		HorizontalOrVerticalLayoutGroup_set_spacing_m90373F54D37DA8DFA90E102DC60EC33E542FD859(L_56, L_57, NULL);
		HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E* L_58 = __this->____layoutGroup;
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_59 = __this->___padding;
		NullCheck(L_58);
		LayoutGroup_set_padding_m9F415F3402E5E4AE684FD153493CE3E8D64D3EB7(L_58, L_59, NULL);
		HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E* L_60 = __this->____layoutGroup;
		NullCheck(L_60);
		LayoutGroup_set_childAlignment_mA97DF1F2CF43C0CD1B83CFE7883626AA86ABB0AF(L_60, 0, NULL);
		HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E* L_61 = __this->____layoutGroup;
		NullCheck(L_61);
		HorizontalOrVerticalLayoutGroup_set_childForceExpandHeight_mA144CF421614F41813DE346AA9D1C64621C6C2E5(L_61, (bool)1, NULL);
		HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E* L_62 = __this->____layoutGroup;
		NullCheck(L_62);
		HorizontalOrVerticalLayoutGroup_set_childForceExpandWidth_m351827AA1A453ACD17C2EAC7B4DAB9C5DB1760E5(L_62, (bool)1, NULL);
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_63 = __this->____scrollRect;
		int32_t L_64 = __this->___scrollDirection;
		NullCheck(L_63);
		ScrollRect_set_horizontal_m99C076AF2B2B596C87435E1465EF0B104281B150_inline(L_63, (bool)((((int32_t)L_64) == ((int32_t)1))? 1 : 0), NULL);
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_65 = __this->____scrollRect;
		int32_t L_66 = __this->___scrollDirection;
		NullCheck(L_65);
		ScrollRect_set_vertical_m972088E788E72690AAE139E7C0F8F634C325E7CE_inline(L_65, (bool)((((int32_t)L_66) == ((int32_t)0))? 1 : 0), NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_67 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_68 = L_67;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_69 = { reinterpret_cast<intptr_t> (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_70;
		L_70 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_69, NULL);
		NullCheck(L_68);
		ArrayElementTypeCheck (L_68, L_70);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_70);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_71 = L_68;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_72 = { reinterpret_cast<intptr_t> (LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A_0_0_0_var) };
		Type_t* L_73;
		L_73 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_72, NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_73);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_73);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_74 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		GameObject__ctor_m721D643351E55308EA4F5F41B67D5446D11C61F0(L_74, _stringLiteralF621B8341BA5525CD19F35458C986A52EEE81558, L_71, NULL);
		V_0 = L_74;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_75 = V_0;
		NullCheck(L_75);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_76;
		L_76 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_75, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_77 = __this->____container;
		NullCheck(L_76);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_76, L_77, (bool)0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_78 = V_0;
		NullCheck(L_78);
		LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* L_79;
		L_79 = GameObject_GetComponent_TisLayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A_mB80DDAE1EBBC24C6967E5633AD129139079853E4(L_78, GameObject_GetComponent_TisLayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A_mB80DDAE1EBBC24C6967E5633AD129139079853E4_RuntimeMethod_var);
		__this->____firstPadder = L_79;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____firstPadder), (void*)L_79);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_80 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_81 = L_80;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_0_0_0_var) };
		Type_t* L_83;
		L_83 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_82, NULL);
		NullCheck(L_81);
		ArrayElementTypeCheck (L_81, L_83);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_83);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_84 = L_81;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_85 = { reinterpret_cast<intptr_t> (LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A_0_0_0_var) };
		Type_t* L_86;
		L_86 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_85, NULL);
		NullCheck(L_84);
		ArrayElementTypeCheck (L_84, L_86);
		(L_84)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_86);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_87 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		GameObject__ctor_m721D643351E55308EA4F5F41B67D5446D11C61F0(L_87, _stringLiteralD52B1901A8EEF152CE58338C36B2C7F16C12121B, L_84, NULL);
		V_0 = L_87;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_88 = V_0;
		NullCheck(L_88);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_89;
		L_89 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_88, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_90 = __this->____container;
		NullCheck(L_89);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_89, L_90, (bool)0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_91 = V_0;
		NullCheck(L_91);
		LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* L_92;
		L_92 = GameObject_GetComponent_TisLayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A_mB80DDAE1EBBC24C6967E5633AD129139079853E4(L_91, GameObject_GetComponent_TisLayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A_mB80DDAE1EBBC24C6967E5633AD129139079853E4_RuntimeMethod_var);
		__this->____lastPadder = L_92;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lastPadder), (void*)L_92);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_93 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_94 = L_93;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_95 = { reinterpret_cast<intptr_t> (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_0_0_0_var) };
		Type_t* L_96;
		L_96 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_95, NULL);
		NullCheck(L_94);
		ArrayElementTypeCheck (L_94, L_96);
		(L_94)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_96);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_97 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		GameObject__ctor_m721D643351E55308EA4F5F41B67D5446D11C61F0(L_97, _stringLiteral23623521A1F8CA7F2221F4CAD23AB500AD230DFE, L_94, NULL);
		V_0 = L_97;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_98 = V_0;
		NullCheck(L_98);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_99;
		L_99 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_98, NULL);
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_100 = __this->____scrollRect;
		NullCheck(L_100);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_101;
		L_101 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_100, NULL);
		NullCheck(L_99);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_99, L_101, (bool)0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_102 = V_0;
		NullCheck(L_102);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_103;
		L_103 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_102, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		__this->____recycledCellViewContainer = L_103;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____recycledCellViewContainer), (void*)L_103);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_104 = __this->____recycledCellViewContainer;
		NullCheck(L_104);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_105;
		L_105 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_104, NULL);
		NullCheck(L_105);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_105, (bool)0, NULL);
		float L_106;
		L_106 = EnhancedScroller_get_ScrollRectSize_m02A9E670D08C44359A2AFD26A3A666E8BE8AFE36(__this, NULL);
		__this->____lastScrollRectSize = L_106;
		bool L_107 = __this->___loop;
		__this->____lastLoop = L_107;
		int32_t L_108 = __this->___scrollbarVisibility;
		__this->____lastScrollbarVisibility = L_108;
		__this->____initialized = (bool)1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScroller_Update_mE7860AD39F7E25BACFC10D8A90A6D8C50D569400 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____updateSpacing;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		float L_1 = __this->___spacing;
		EnhancedScroller__UpdateSpacing_m77C68FE45790FDB523167D8975289641E6749374(__this, L_1, NULL);
		__this->____reloadData = (bool)0;
	}

IL_001b:
	{
		bool L_2 = __this->____reloadData;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		EnhancedScroller_ReloadData_mB656E2A5C57D096C380610AF9BF56282D11A8DF8(__this, (0.0f), NULL);
	}

IL_002e:
	{
		bool L_3 = __this->___loop;
		if (!L_3)
		{
			goto IL_0044;
		}
	}
	{
		float L_4 = __this->____lastScrollRectSize;
		float L_5;
		L_5 = EnhancedScroller_get_ScrollRectSize_m02A9E670D08C44359A2AFD26A3A666E8BE8AFE36(__this, NULL);
		if ((!(((float)L_4) == ((float)L_5))))
		{
			goto IL_0052;
		}
	}

IL_0044:
	{
		bool L_6 = __this->___loop;
		bool L_7 = __this->____lastLoop;
		if ((((int32_t)L_6) == ((int32_t)L_7)))
		{
			goto IL_0071;
		}
	}

IL_0052:
	{
		EnhancedScroller__Resize_m074B12AF522F613E07169421DDD6C04011BFDDC7(__this, (bool)1, NULL);
		float L_8;
		L_8 = EnhancedScroller_get_ScrollRectSize_m02A9E670D08C44359A2AFD26A3A666E8BE8AFE36(__this, NULL);
		__this->____lastScrollRectSize = L_8;
		bool L_9 = __this->___loop;
		__this->____lastLoop = L_9;
	}

IL_0071:
	{
		int32_t L_10 = __this->____lastScrollbarVisibility;
		int32_t L_11 = __this->___scrollbarVisibility;
		if ((((int32_t)L_10) == ((int32_t)L_11)))
		{
			goto IL_0097;
		}
	}
	{
		int32_t L_12 = __this->___scrollbarVisibility;
		EnhancedScroller_set_ScrollbarVisibility_m479E02CD0D9B48C63B3DEEBAC4949F7989A036B1(__this, L_12, NULL);
		int32_t L_13 = __this->___scrollbarVisibility;
		__this->____lastScrollbarVisibility = L_13;
	}

IL_0097:
	{
		float L_14;
		L_14 = EnhancedScroller_get_LinearVelocity_m80BFA7929042E5C36E09E7D12B909D04B2D1DA08(__this, NULL);
		if ((((float)L_14) == ((float)(0.0f))))
		{
			goto IL_00c9;
		}
	}
	{
		bool L_15;
		L_15 = EnhancedScroller_get_IsScrolling_mFC65ADFE92845FB1122223B175C4C44F8BFB2DBA_inline(__this, NULL);
		if (L_15)
		{
			goto IL_00c9;
		}
	}
	{
		EnhancedScroller_set_IsScrolling_m325C39C4DE217C88751EE6F457D58A3060654762_inline(__this, (bool)1, NULL);
		ScrollerScrollingChangedDelegate_t7A163170666C2A9FCCFA49F6B466A8F85E432D2E* L_16 = __this->___scrollerScrollingChanged;
		if (!L_16)
		{
			goto IL_00fa;
		}
	}
	{
		ScrollerScrollingChangedDelegate_t7A163170666C2A9FCCFA49F6B466A8F85E432D2E* L_17 = __this->___scrollerScrollingChanged;
		NullCheck(L_17);
		ScrollerScrollingChangedDelegate_Invoke_mBA1C292A082F7418E135508D327D2B4B6ADA9AF9_inline(L_17, __this, (bool)1, NULL);
		return;
	}

IL_00c9:
	{
		float L_18;
		L_18 = EnhancedScroller_get_LinearVelocity_m80BFA7929042E5C36E09E7D12B909D04B2D1DA08(__this, NULL);
		if ((!(((float)L_18) == ((float)(0.0f)))))
		{
			goto IL_00fa;
		}
	}
	{
		bool L_19;
		L_19 = EnhancedScroller_get_IsScrolling_mFC65ADFE92845FB1122223B175C4C44F8BFB2DBA_inline(__this, NULL);
		if (!L_19)
		{
			goto IL_00fa;
		}
	}
	{
		EnhancedScroller_set_IsScrolling_m325C39C4DE217C88751EE6F457D58A3060654762_inline(__this, (bool)0, NULL);
		ScrollerScrollingChangedDelegate_t7A163170666C2A9FCCFA49F6B466A8F85E432D2E* L_20 = __this->___scrollerScrollingChanged;
		if (!L_20)
		{
			goto IL_00fa;
		}
	}
	{
		ScrollerScrollingChangedDelegate_t7A163170666C2A9FCCFA49F6B466A8F85E432D2E* L_21 = __this->___scrollerScrollingChanged;
		NullCheck(L_21);
		ScrollerScrollingChangedDelegate_Invoke_mBA1C292A082F7418E135508D327D2B4B6ADA9AF9_inline(L_21, __this, (bool)0, NULL);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScroller_OnValidate_m8A484CE7B6C83E2714F0A81C56B13301B0B0C37F (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____initialized;
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		float L_1 = __this->___spacing;
		HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E* L_2 = __this->____layoutGroup;
		NullCheck(L_2);
		float L_3;
		L_3 = HorizontalOrVerticalLayoutGroup_get_spacing_m916C9BF57D4AB0EF76E6BC4EC5E1EA54B7918782_inline(L_2, NULL);
		if ((((float)L_1) == ((float)L_3)))
		{
			goto IL_0022;
		}
	}
	{
		__this->____updateSpacing = (bool)1;
	}

IL_0022:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScroller_OnEnable_mF86B165F2557B9192DC197EFF775AB38C41ADB23 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnhancedScroller__ScrollRect_OnValueChanged_mD818C25308A816448664D48B7A89FD30441F664B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t8FBFBC01962B7293F0E33F9D6F1CEAF2896D8669_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m2B74313C91E347D6AD24CE5B036E190E77E70851_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_0 = __this->____scrollRect;
		NullCheck(L_0);
		ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26* L_1;
		L_1 = ScrollRect_get_onValueChanged_mA6AF3832A97E82D31BB8C20BCD6E87A300E56C05_inline(L_0, NULL);
		UnityAction_1_t8FBFBC01962B7293F0E33F9D6F1CEAF2896D8669* L_2 = (UnityAction_1_t8FBFBC01962B7293F0E33F9D6F1CEAF2896D8669*)il2cpp_codegen_object_new(UnityAction_1_t8FBFBC01962B7293F0E33F9D6F1CEAF2896D8669_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m71C125B79EE35648CFC416CA7DBBC27C8DBAD45A(L_2, __this, (intptr_t)((void*)EnhancedScroller__ScrollRect_OnValueChanged_mD818C25308A816448664D48B7A89FD30441F664B_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_1_AddListener_m2B74313C91E347D6AD24CE5B036E190E77E70851(L_1, L_2, UnityEvent_1_AddListener_m2B74313C91E347D6AD24CE5B036E190E77E70851_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScroller_OnDisable_m013AAF3BE78CFCFF7176D3E8C4E3B0D6151671EB (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnhancedScroller__ScrollRect_OnValueChanged_mD818C25308A816448664D48B7A89FD30441F664B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t8FBFBC01962B7293F0E33F9D6F1CEAF2896D8669_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_mC741D450364141F0589857DD5CC0C27D4CF72D99_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_0 = __this->____scrollRect;
		NullCheck(L_0);
		ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26* L_1;
		L_1 = ScrollRect_get_onValueChanged_mA6AF3832A97E82D31BB8C20BCD6E87A300E56C05_inline(L_0, NULL);
		UnityAction_1_t8FBFBC01962B7293F0E33F9D6F1CEAF2896D8669* L_2 = (UnityAction_1_t8FBFBC01962B7293F0E33F9D6F1CEAF2896D8669*)il2cpp_codegen_object_new(UnityAction_1_t8FBFBC01962B7293F0E33F9D6F1CEAF2896D8669_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m71C125B79EE35648CFC416CA7DBBC27C8DBAD45A(L_2, __this, (intptr_t)((void*)EnhancedScroller__ScrollRect_OnValueChanged_mD818C25308A816448664D48B7A89FD30441F664B_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_1_RemoveListener_mC741D450364141F0589857DD5CC0C27D4CF72D99(L_1, L_2, UnityEvent_1_RemoveListener_mC741D450364141F0589857DD5CC0C27D4CF72D99_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScroller__ScrollRect_OnValueChanged_mD818C25308A816448664D48B7A89FD30441F664B (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_val, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		int32_t L_0 = __this->___scrollDirection;
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___0_val;
		float L_2 = L_1.___y;
		float L_3;
		L_3 = EnhancedScroller_get_ScrollSize_mBD47F8C4531472104621271889C5DBC9CE64169B(__this, NULL);
		__this->____scrollPosition = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), L_2)), L_3));
		goto IL_0036;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_val;
		float L_5 = L_4.___x;
		float L_6;
		L_6 = EnhancedScroller_get_ScrollSize_mBD47F8C4531472104621271889C5DBC9CE64169B(__this, NULL);
		__this->____scrollPosition = ((float)il2cpp_codegen_multiply(L_5, L_6));
	}

IL_0036:
	{
		float L_7 = __this->____scrollPosition;
		SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67* L_8 = __this->____cellViewSizeArray;
		NullCheck(L_8);
		int32_t L_9 = L_8->___Count;
		float L_10;
		L_10 = EnhancedScroller_GetScrollPositionForCellViewIndex_m8593F367133D0F4E4DFBD4DACB6589BBEC48CA68(__this, ((int32_t)il2cpp_codegen_subtract(L_9, 1)), 0, NULL);
		float L_11;
		L_11 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_7, (0.0f), L_10, NULL);
		__this->____scrollPosition = L_11;
		ScrollerScrolledDelegate_tCF28541FE97900820A53F56F09E540DC9E293E48* L_12 = __this->___scrollerScrolled;
		if (!L_12)
		{
			goto IL_007b;
		}
	}
	{
		ScrollerScrolledDelegate_tCF28541FE97900820A53F56F09E540DC9E293E48* L_13 = __this->___scrollerScrolled;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = ___0_val;
		float L_15 = __this->____scrollPosition;
		NullCheck(L_13);
		ScrollerScrolledDelegate_Invoke_m8E4D0F225AE4120CA90E40A433EFBBF33741F351_inline(L_13, __this, L_14, L_15, NULL);
	}

IL_007b:
	{
		bool L_16 = __this->___snapping;
		if (!L_16)
		{
			goto IL_00d8;
		}
	}
	{
		bool L_17 = __this->____snapJumping;
		if (L_17)
		{
			goto IL_00d8;
		}
	}
	{
		float L_18;
		L_18 = EnhancedScroller_get_LinearVelocity_m80BFA7929042E5C36E09E7D12B909D04B2D1DA08(__this, NULL);
		float L_19;
		L_19 = fabsf(L_18);
		float L_20 = __this->___snapVelocityThreshold;
		if ((!(((float)L_19) <= ((float)L_20))))
		{
			goto IL_00d8;
		}
	}
	{
		float L_21;
		L_21 = EnhancedScroller_get_LinearVelocity_m80BFA7929042E5C36E09E7D12B909D04B2D1DA08(__this, NULL);
		if ((((float)L_21) == ((float)(0.0f))))
		{
			goto IL_00d8;
		}
	}
	{
		float L_22;
		L_22 = EnhancedScroller_get_NormalizedScrollPosition_m467D1C170121B01656AB151CCF00067CA575774E(__this, NULL);
		V_0 = L_22;
		bool L_23 = __this->___loop;
		if (L_23)
		{
			goto IL_00d2;
		}
	}
	{
		bool L_24 = __this->___loop;
		if (L_24)
		{
			goto IL_00d8;
		}
	}
	{
		float L_25 = V_0;
		if ((!(((float)L_25) > ((float)(0.0f)))))
		{
			goto IL_00d8;
		}
	}
	{
		float L_26 = V_0;
		if ((!(((float)L_26) < ((float)(1.0f)))))
		{
			goto IL_00d8;
		}
	}

IL_00d2:
	{
		EnhancedScroller_Snap_m811FE9385518C862C894756A541BB31C99C86E51(__this, NULL);
	}

IL_00d8:
	{
		EnhancedScroller__RefreshActive_m098FD7B4385179FE74C7F609434685913195333C(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScroller_SnapJumpComplete_mDE1879F85C52C1D8CA887834ACB9BCEC94E31945 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmallList_1_get_Item_m99EDA7FDFDE7C4514B5B579204D1447768EB91D1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* V_0 = NULL;
	int32_t V_1 = 0;
	{
		__this->____snapJumping = (bool)0;
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_0 = __this->____scrollRect;
		bool L_1 = __this->____snapInertia;
		NullCheck(L_0);
		ScrollRect_set_inertia_m8A17589561A5E7A2F5F543B8F2F6149458C68AC2_inline(L_0, L_1, NULL);
		V_0 = (EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892*)NULL;
		V_1 = 0;
		goto IL_004a;
	}

IL_001e:
	{
		SmallList_1_tDD26C24E78CCBE316084977E23188B07A348B50E* L_2 = __this->____activeCellViews;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* L_4;
		L_4 = SmallList_1_get_Item_m99EDA7FDFDE7C4514B5B579204D1447768EB91D1(L_2, L_3, SmallList_1_get_Item_m99EDA7FDFDE7C4514B5B579204D1447768EB91D1_RuntimeMethod_var);
		NullCheck(L_4);
		int32_t L_5 = L_4->___dataIndex;
		int32_t L_6 = __this->____snapDataIndex;
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_0046;
		}
	}
	{
		SmallList_1_tDD26C24E78CCBE316084977E23188B07A348B50E* L_7 = __this->____activeCellViews;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* L_9;
		L_9 = SmallList_1_get_Item_m99EDA7FDFDE7C4514B5B579204D1447768EB91D1(L_7, L_8, SmallList_1_get_Item_m99EDA7FDFDE7C4514B5B579204D1447768EB91D1_RuntimeMethod_var);
		V_0 = L_9;
		goto IL_0058;
	}

IL_0046:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_004a:
	{
		int32_t L_11 = V_1;
		SmallList_1_tDD26C24E78CCBE316084977E23188B07A348B50E* L_12 = __this->____activeCellViews;
		NullCheck(L_12);
		int32_t L_13 = L_12->___Count;
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_001e;
		}
	}

IL_0058:
	{
		ScrollerSnappedDelegate_t4FDC68A802920BE5ACF5E2025694C666773619D0* L_14 = __this->___scrollerSnapped;
		if (!L_14)
		{
			goto IL_0079;
		}
	}
	{
		ScrollerSnappedDelegate_t4FDC68A802920BE5ACF5E2025694C666773619D0* L_15 = __this->___scrollerSnapped;
		int32_t L_16 = __this->____snapCellViewIndex;
		int32_t L_17 = __this->____snapDataIndex;
		EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* L_18 = V_0;
		NullCheck(L_15);
		ScrollerSnappedDelegate_Invoke_m5EF631C0C36655E0AD064A299221B9439D44EE8E_inline(L_15, __this, L_16, L_17, L_18, NULL);
	}

IL_0079:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnhancedScroller_TweenPosition_m04E6809C0E3C31A86589BFAE485E960059A5FA01 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, int32_t ___0_tweenType, float ___1_time, float ___2_start, float ___3_end, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___4_tweenComplete, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTweenPositionU3Ed__140_tC04B98631A63B795840C2E8AB6B0123E33377257_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTweenPositionU3Ed__140_tC04B98631A63B795840C2E8AB6B0123E33377257* L_0 = (U3CTweenPositionU3Ed__140_tC04B98631A63B795840C2E8AB6B0123E33377257*)il2cpp_codegen_object_new(U3CTweenPositionU3Ed__140_tC04B98631A63B795840C2E8AB6B0123E33377257_il2cpp_TypeInfo_var);
		U3CTweenPositionU3Ed__140__ctor_mFC89EEA84735653DA721CA58EA66E1F99BB79DED(L_0, 0, NULL);
		U3CTweenPositionU3Ed__140_tC04B98631A63B795840C2E8AB6B0123E33377257* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		U3CTweenPositionU3Ed__140_tC04B98631A63B795840C2E8AB6B0123E33377257* L_2 = L_1;
		int32_t L_3 = ___0_tweenType;
		NullCheck(L_2);
		L_2->___tweenType = L_3;
		U3CTweenPositionU3Ed__140_tC04B98631A63B795840C2E8AB6B0123E33377257* L_4 = L_2;
		float L_5 = ___1_time;
		NullCheck(L_4);
		L_4->___time = L_5;
		U3CTweenPositionU3Ed__140_tC04B98631A63B795840C2E8AB6B0123E33377257* L_6 = L_4;
		float L_7 = ___2_start;
		NullCheck(L_6);
		L_6->___start = L_7;
		U3CTweenPositionU3Ed__140_tC04B98631A63B795840C2E8AB6B0123E33377257* L_8 = L_6;
		float L_9 = ___3_end;
		NullCheck(L_8);
		L_8->___end = L_9;
		U3CTweenPositionU3Ed__140_tC04B98631A63B795840C2E8AB6B0123E33377257* L_10 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_11 = ___4_tweenComplete;
		NullCheck(L_10);
		L_10->___tweenComplete = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___tweenComplete), (void*)L_11);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_linear_mD0B889FA50D655E5FFD745B4638FCFD852232A37 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_start;
		float L_1 = ___1_end;
		float L_2 = ___2_val;
		float L_3;
		L_3 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_spring_mF89E34318CC6755C99A1973ABEFB26081F486975 (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) 
{
	{
		float L_0 = ___2_val;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_val = L_1;
		float L_2 = ___2_val;
		float L_3 = ___2_val;
		float L_4 = ___2_val;
		float L_5 = ___2_val;
		float L_6;
		L_6 = sinf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_2, (3.14159274f))), ((float)il2cpp_codegen_add((0.200000003f), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((2.5f), L_3)), L_4)), L_5)))))));
		float L_7 = ___2_val;
		float L_8;
		L_8 = powf(((float)il2cpp_codegen_subtract((1.0f), L_7)), (2.20000005f));
		float L_9 = ___2_val;
		float L_10 = ___2_val;
		___2_val = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_6, L_8)), L_9)), ((float)il2cpp_codegen_add((1.0f), ((float)il2cpp_codegen_multiply((1.20000005f), ((float)il2cpp_codegen_subtract((1.0f), L_10))))))));
		float L_11 = ___0_start;
		float L_12 = ___1_end;
		float L_13 = ___0_start;
		float L_14 = ___2_val;
		return ((float)il2cpp_codegen_add(L_11, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_13)), L_14))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeInQuad_m2F542E1B3F85B0FB46C709216C807D5E447588C9 (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) 
{
	{
		float L_0 = ___1_end;
		float L_1 = ___0_start;
		___1_end = ((float)il2cpp_codegen_subtract(L_0, L_1));
		float L_2 = ___1_end;
		float L_3 = ___2_val;
		float L_4 = ___2_val;
		float L_5 = ___0_start;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_2, L_3)), L_4)), L_5));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeOutQuad_mAAF4DB0C4C97A0A4F56D811B515EAA7A44ED374C (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) 
{
	{
		float L_0 = ___1_end;
		float L_1 = ___0_start;
		___1_end = ((float)il2cpp_codegen_subtract(L_0, L_1));
		float L_2 = ___1_end;
		float L_3 = ___2_val;
		float L_4 = ___2_val;
		float L_5 = ___0_start;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((-L_2)), L_3)), ((float)il2cpp_codegen_subtract(L_4, (2.0f))))), L_5));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeInOutQuad_m5C42B27D7CDB67CB877C16855115F8B333411ED6 (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) 
{
	{
		float L_0 = ___2_val;
		___2_val = ((float)(L_0/(0.5f)));
		float L_1 = ___1_end;
		float L_2 = ___0_start;
		___1_end = ((float)il2cpp_codegen_subtract(L_1, L_2));
		float L_3 = ___2_val;
		if ((!(((float)L_3) < ((float)(1.0f)))))
		{
			goto IL_0024;
		}
	}
	{
		float L_4 = ___1_end;
		float L_5 = ___2_val;
		float L_6 = ___2_val;
		float L_7 = ___0_start;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)(L_4/(2.0f))), L_5)), L_6)), L_7));
	}

IL_0024:
	{
		float L_8 = ___2_val;
		___2_val = ((float)il2cpp_codegen_subtract(L_8, (1.0f)));
		float L_9 = ___1_end;
		float L_10 = ___2_val;
		float L_11 = ___2_val;
		float L_12 = ___0_start;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)(((-L_9))/(2.0f))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_10, ((float)il2cpp_codegen_subtract(L_11, (2.0f))))), (1.0f))))), L_12));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeInCubic_m0F9B1345C9B90BE46842C4C19C97B4D2D05966A6 (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) 
{
	{
		float L_0 = ___1_end;
		float L_1 = ___0_start;
		___1_end = ((float)il2cpp_codegen_subtract(L_0, L_1));
		float L_2 = ___1_end;
		float L_3 = ___2_val;
		float L_4 = ___2_val;
		float L_5 = ___2_val;
		float L_6 = ___0_start;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_2, L_3)), L_4)), L_5)), L_6));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeOutCubic_mE10BA9EB8C22B2AF1B60467D2370361167566E20 (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) 
{
	{
		float L_0 = ___2_val;
		___2_val = ((float)il2cpp_codegen_subtract(L_0, (1.0f)));
		float L_1 = ___1_end;
		float L_2 = ___0_start;
		___1_end = ((float)il2cpp_codegen_subtract(L_1, L_2));
		float L_3 = ___1_end;
		float L_4 = ___2_val;
		float L_5 = ___2_val;
		float L_6 = ___2_val;
		float L_7 = ___0_start;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_3, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_4, L_5)), L_6)), (1.0f))))), L_7));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeInOutCubic_m97F7B6DEBEC3B6B15E068AD1813864DB2B62AE76 (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) 
{
	{
		float L_0 = ___2_val;
		___2_val = ((float)(L_0/(0.5f)));
		float L_1 = ___1_end;
		float L_2 = ___0_start;
		___1_end = ((float)il2cpp_codegen_subtract(L_1, L_2));
		float L_3 = ___2_val;
		if ((!(((float)L_3) < ((float)(1.0f)))))
		{
			goto IL_0026;
		}
	}
	{
		float L_4 = ___1_end;
		float L_5 = ___2_val;
		float L_6 = ___2_val;
		float L_7 = ___2_val;
		float L_8 = ___0_start;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)(L_4/(2.0f))), L_5)), L_6)), L_7)), L_8));
	}

IL_0026:
	{
		float L_9 = ___2_val;
		___2_val = ((float)il2cpp_codegen_subtract(L_9, (2.0f)));
		float L_10 = ___1_end;
		float L_11 = ___2_val;
		float L_12 = ___2_val;
		float L_13 = ___2_val;
		float L_14 = ___0_start;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)(L_10/(2.0f))), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_11, L_12)), L_13)), (2.0f))))), L_14));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeInQuart_mCF6D446D3A886BE1789C802C54A5B25A206D4367 (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) 
{
	{
		float L_0 = ___1_end;
		float L_1 = ___0_start;
		___1_end = ((float)il2cpp_codegen_subtract(L_0, L_1));
		float L_2 = ___1_end;
		float L_3 = ___2_val;
		float L_4 = ___2_val;
		float L_5 = ___2_val;
		float L_6 = ___2_val;
		float L_7 = ___0_start;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_2, L_3)), L_4)), L_5)), L_6)), L_7));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeOutQuart_m515EFE522A84D96B62DD49F18D57F6337DD037B3 (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) 
{
	{
		float L_0 = ___2_val;
		___2_val = ((float)il2cpp_codegen_subtract(L_0, (1.0f)));
		float L_1 = ___1_end;
		float L_2 = ___0_start;
		___1_end = ((float)il2cpp_codegen_subtract(L_1, L_2));
		float L_3 = ___1_end;
		float L_4 = ___2_val;
		float L_5 = ___2_val;
		float L_6 = ___2_val;
		float L_7 = ___2_val;
		float L_8 = ___0_start;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((-L_3)), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_4, L_5)), L_6)), L_7)), (1.0f))))), L_8));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeInOutQuart_mBD02FB54D80397B694F4D817C0D1FAF2F7D3E1CB (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) 
{
	{
		float L_0 = ___2_val;
		___2_val = ((float)(L_0/(0.5f)));
		float L_1 = ___1_end;
		float L_2 = ___0_start;
		___1_end = ((float)il2cpp_codegen_subtract(L_1, L_2));
		float L_3 = ___2_val;
		if ((!(((float)L_3) < ((float)(1.0f)))))
		{
			goto IL_0028;
		}
	}
	{
		float L_4 = ___1_end;
		float L_5 = ___2_val;
		float L_6 = ___2_val;
		float L_7 = ___2_val;
		float L_8 = ___2_val;
		float L_9 = ___0_start;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)(L_4/(2.0f))), L_5)), L_6)), L_7)), L_8)), L_9));
	}

IL_0028:
	{
		float L_10 = ___2_val;
		___2_val = ((float)il2cpp_codegen_subtract(L_10, (2.0f)));
		float L_11 = ___1_end;
		float L_12 = ___2_val;
		float L_13 = ___2_val;
		float L_14 = ___2_val;
		float L_15 = ___2_val;
		float L_16 = ___0_start;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)(((-L_11))/(2.0f))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_12, L_13)), L_14)), L_15)), (2.0f))))), L_16));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeInQuint_m79E89F75BEB38BB7EB2B16C34488B805D5BF7614 (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) 
{
	{
		float L_0 = ___1_end;
		float L_1 = ___0_start;
		___1_end = ((float)il2cpp_codegen_subtract(L_0, L_1));
		float L_2 = ___1_end;
		float L_3 = ___2_val;
		float L_4 = ___2_val;
		float L_5 = ___2_val;
		float L_6 = ___2_val;
		float L_7 = ___2_val;
		float L_8 = ___0_start;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_2, L_3)), L_4)), L_5)), L_6)), L_7)), L_8));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeOutQuint_m37C0D1681B79A8F0506409D9B5A234EE08D125C7 (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) 
{
	{
		float L_0 = ___2_val;
		___2_val = ((float)il2cpp_codegen_subtract(L_0, (1.0f)));
		float L_1 = ___1_end;
		float L_2 = ___0_start;
		___1_end = ((float)il2cpp_codegen_subtract(L_1, L_2));
		float L_3 = ___1_end;
		float L_4 = ___2_val;
		float L_5 = ___2_val;
		float L_6 = ___2_val;
		float L_7 = ___2_val;
		float L_8 = ___2_val;
		float L_9 = ___0_start;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_3, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_4, L_5)), L_6)), L_7)), L_8)), (1.0f))))), L_9));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeInOutQuint_mEE67B2FB9325C23414EF653A8EABE89E2694CE05 (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) 
{
	{
		float L_0 = ___2_val;
		___2_val = ((float)(L_0/(0.5f)));
		float L_1 = ___1_end;
		float L_2 = ___0_start;
		___1_end = ((float)il2cpp_codegen_subtract(L_1, L_2));
		float L_3 = ___2_val;
		if ((!(((float)L_3) < ((float)(1.0f)))))
		{
			goto IL_002a;
		}
	}
	{
		float L_4 = ___1_end;
		float L_5 = ___2_val;
		float L_6 = ___2_val;
		float L_7 = ___2_val;
		float L_8 = ___2_val;
		float L_9 = ___2_val;
		float L_10 = ___0_start;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)(L_4/(2.0f))), L_5)), L_6)), L_7)), L_8)), L_9)), L_10));
	}

IL_002a:
	{
		float L_11 = ___2_val;
		___2_val = ((float)il2cpp_codegen_subtract(L_11, (2.0f)));
		float L_12 = ___1_end;
		float L_13 = ___2_val;
		float L_14 = ___2_val;
		float L_15 = ___2_val;
		float L_16 = ___2_val;
		float L_17 = ___2_val;
		float L_18 = ___0_start;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)(L_12/(2.0f))), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_13, L_14)), L_15)), L_16)), L_17)), (2.0f))))), L_18));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeInSine_m3A5DF4067F6B19528549A3EA81111F5D7D8A5209 (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) 
{
	{
		float L_0 = ___1_end;
		float L_1 = ___0_start;
		___1_end = ((float)il2cpp_codegen_subtract(L_0, L_1));
		float L_2 = ___1_end;
		float L_3 = ___2_val;
		float L_4;
		L_4 = cosf(((float)il2cpp_codegen_multiply(((float)(L_3/(1.0f))), (1.57079637f))));
		float L_5 = ___1_end;
		float L_6 = ___0_start;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((-L_2)), L_4)), L_5)), L_6));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeOutSine_m4063B402292201F02031BC25EC54300A2D9489CD (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) 
{
	{
		float L_0 = ___1_end;
		float L_1 = ___0_start;
		___1_end = ((float)il2cpp_codegen_subtract(L_0, L_1));
		float L_2 = ___1_end;
		float L_3 = ___2_val;
		float L_4;
		L_4 = sinf(((float)il2cpp_codegen_multiply(((float)(L_3/(1.0f))), (1.57079637f))));
		float L_5 = ___0_start;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_2, L_4)), L_5));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeInOutSine_m547500F2DD103187CCE1CF3B9EB8A191FC9D7B1E (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) 
{
	{
		float L_0 = ___1_end;
		float L_1 = ___0_start;
		___1_end = ((float)il2cpp_codegen_subtract(L_0, L_1));
		float L_2 = ___1_end;
		float L_3 = ___2_val;
		float L_4;
		L_4 = cosf(((float)(((float)il2cpp_codegen_multiply((3.14159274f), L_3))/(1.0f))));
		float L_5 = ___0_start;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)(((-L_2))/(2.0f))), ((float)il2cpp_codegen_subtract(L_4, (1.0f))))), L_5));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeInExpo_mFA0E64036C1622133FE85A7B1094C039690A106E (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) 
{
	{
		float L_0 = ___1_end;
		float L_1 = ___0_start;
		___1_end = ((float)il2cpp_codegen_subtract(L_0, L_1));
		float L_2 = ___1_end;
		float L_3 = ___2_val;
		float L_4;
		L_4 = powf((2.0f), ((float)il2cpp_codegen_multiply((10.0f), ((float)il2cpp_codegen_subtract(((float)(L_3/(1.0f))), (1.0f))))));
		float L_5 = ___0_start;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_2, L_4)), L_5));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeOutExpo_mD58F3FEAA23F281B1AAC714D016475E2EC16E429 (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) 
{
	{
		float L_0 = ___1_end;
		float L_1 = ___0_start;
		___1_end = ((float)il2cpp_codegen_subtract(L_0, L_1));
		float L_2 = ___1_end;
		float L_3 = ___2_val;
		float L_4;
		L_4 = powf((2.0f), ((float)(((float)il2cpp_codegen_multiply((-10.0f), L_3))/(1.0f))));
		float L_5 = ___0_start;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_2, ((float)il2cpp_codegen_add(((-L_4)), (1.0f))))), L_5));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeInOutExpo_m66A3E22CEBA00F71BC19CBBE8DCB8B8548106643 (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) 
{
	{
		float L_0 = ___2_val;
		___2_val = ((float)(L_0/(0.5f)));
		float L_1 = ___1_end;
		float L_2 = ___0_start;
		___1_end = ((float)il2cpp_codegen_subtract(L_1, L_2));
		float L_3 = ___2_val;
		if ((!(((float)L_3) < ((float)(1.0f)))))
		{
			goto IL_0038;
		}
	}
	{
		float L_4 = ___1_end;
		float L_5 = ___2_val;
		float L_6;
		L_6 = powf((2.0f), ((float)il2cpp_codegen_multiply((10.0f), ((float)il2cpp_codegen_subtract(L_5, (1.0f))))));
		float L_7 = ___0_start;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)(L_4/(2.0f))), L_6)), L_7));
	}

IL_0038:
	{
		float L_8 = ___2_val;
		___2_val = ((float)il2cpp_codegen_subtract(L_8, (1.0f)));
		float L_9 = ___1_end;
		float L_10 = ___2_val;
		float L_11;
		L_11 = powf((2.0f), ((float)il2cpp_codegen_multiply((-10.0f), L_10)));
		float L_12 = ___0_start;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)(L_9/(2.0f))), ((float)il2cpp_codegen_add(((-L_11)), (2.0f))))), L_12));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeInCirc_m20D1ED5788E1D7E74D78FE431C7D073FB55AF6E3 (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) 
{
	{
		float L_0 = ___1_end;
		float L_1 = ___0_start;
		___1_end = ((float)il2cpp_codegen_subtract(L_0, L_1));
		float L_2 = ___1_end;
		float L_3 = ___2_val;
		float L_4 = ___2_val;
		float L_5;
		L_5 = sqrtf(((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply(L_3, L_4)))));
		float L_6 = ___0_start;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((-L_2)), ((float)il2cpp_codegen_subtract(L_5, (1.0f))))), L_6));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeOutCirc_mF22FC4E97AA4BB1BCA89F0D0FE7FC5C7DD16C9A0 (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) 
{
	{
		float L_0 = ___2_val;
		___2_val = ((float)il2cpp_codegen_subtract(L_0, (1.0f)));
		float L_1 = ___1_end;
		float L_2 = ___0_start;
		___1_end = ((float)il2cpp_codegen_subtract(L_1, L_2));
		float L_3 = ___1_end;
		float L_4 = ___2_val;
		float L_5 = ___2_val;
		float L_6;
		L_6 = sqrtf(((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply(L_4, L_5)))));
		float L_7 = ___0_start;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_3, L_6)), L_7));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeInOutCirc_m061A35F504A408BE151E478FA72F7DB65B9C4F1A (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) 
{
	{
		float L_0 = ___2_val;
		___2_val = ((float)(L_0/(0.5f)));
		float L_1 = ___1_end;
		float L_2 = ___0_start;
		___1_end = ((float)il2cpp_codegen_subtract(L_1, L_2));
		float L_3 = ___2_val;
		if ((!(((float)L_3) < ((float)(1.0f)))))
		{
			goto IL_0036;
		}
	}
	{
		float L_4 = ___1_end;
		float L_5 = ___2_val;
		float L_6 = ___2_val;
		float L_7;
		L_7 = sqrtf(((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply(L_5, L_6)))));
		float L_8 = ___0_start;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)(((-L_4))/(2.0f))), ((float)il2cpp_codegen_subtract(L_7, (1.0f))))), L_8));
	}

IL_0036:
	{
		float L_9 = ___2_val;
		___2_val = ((float)il2cpp_codegen_subtract(L_9, (2.0f)));
		float L_10 = ___1_end;
		float L_11 = ___2_val;
		float L_12 = ___2_val;
		float L_13;
		L_13 = sqrtf(((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply(L_11, L_12)))));
		float L_14 = ___0_start;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)(L_10/(2.0f))), ((float)il2cpp_codegen_add(L_13, (1.0f))))), L_14));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeInBounce_m9734B25FD072D7A1793AC89F626C952B87F5EAC0 (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___1_end;
		float L_1 = ___0_start;
		___1_end = ((float)il2cpp_codegen_subtract(L_0, L_1));
		V_0 = (1.0f);
		float L_2 = ___1_end;
		float L_3 = ___1_end;
		float L_4 = V_0;
		float L_5 = ___2_val;
		float L_6;
		L_6 = EnhancedScroller_easeOutBounce_m107A5B4703F75CFC27CA2644499C5EC8BB3FDD38((0.0f), L_3, ((float)il2cpp_codegen_subtract(L_4, L_5)), NULL);
		float L_7 = ___0_start;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_2, L_6)), L_7));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeOutBounce_m107A5B4703F75CFC27CA2644499C5EC8BB3FDD38 (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) 
{
	{
		float L_0 = ___2_val;
		___2_val = ((float)(L_0/(1.0f)));
		float L_1 = ___1_end;
		float L_2 = ___0_start;
		___1_end = ((float)il2cpp_codegen_subtract(L_1, L_2));
		float L_3 = ___2_val;
		if ((!(((float)L_3) < ((float)(0.363636374f)))))
		{
			goto IL_0024;
		}
	}
	{
		float L_4 = ___1_end;
		float L_5 = ___2_val;
		float L_6 = ___2_val;
		float L_7 = ___0_start;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_4, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((7.5625f), L_5)), L_6)))), L_7));
	}

IL_0024:
	{
		float L_8 = ___2_val;
		if ((!(((float)L_8) < ((float)(0.727272749f)))))
		{
			goto IL_0049;
		}
	}
	{
		float L_9 = ___2_val;
		___2_val = ((float)il2cpp_codegen_subtract(L_9, (0.545454562f)));
		float L_10 = ___1_end;
		float L_11 = ___2_val;
		float L_12 = ___2_val;
		float L_13 = ___0_start;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_10, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((7.5625f), L_11)), L_12)), (0.75f))))), L_13));
	}

IL_0049:
	{
		float L_14 = ___2_val;
		if ((!(((double)((double)L_14)) < ((double)(0.90909090909090906)))))
		{
			goto IL_0073;
		}
	}
	{
		float L_15 = ___2_val;
		___2_val = ((float)il2cpp_codegen_subtract(L_15, (0.818181813f)));
		float L_16 = ___1_end;
		float L_17 = ___2_val;
		float L_18 = ___2_val;
		float L_19 = ___0_start;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_16, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((7.5625f), L_17)), L_18)), (0.9375f))))), L_19));
	}

IL_0073:
	{
		float L_20 = ___2_val;
		___2_val = ((float)il2cpp_codegen_subtract(L_20, (0.954545438f)));
		float L_21 = ___1_end;
		float L_22 = ___2_val;
		float L_23 = ___2_val;
		float L_24 = ___0_start;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_21, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((7.5625f), L_22)), L_23)), (0.984375f))))), L_24));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeInOutBounce_mD8F1F11DDAF60E4889E6CD4B6C14323CE4572E2B (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___1_end;
		float L_1 = ___0_start;
		___1_end = ((float)il2cpp_codegen_subtract(L_0, L_1));
		V_0 = (1.0f);
		float L_2 = ___2_val;
		float L_3 = V_0;
		if ((!(((float)L_2) < ((float)((float)(L_3/(2.0f)))))))
		{
			goto IL_0030;
		}
	}
	{
		float L_4 = ___1_end;
		float L_5 = ___2_val;
		float L_6;
		L_6 = EnhancedScroller_easeInBounce_m9734B25FD072D7A1793AC89F626C952B87F5EAC0((0.0f), L_4, ((float)il2cpp_codegen_multiply(L_5, (2.0f))), NULL);
		float L_7 = ___0_start;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_6, (0.5f))), L_7));
	}

IL_0030:
	{
		float L_8 = ___1_end;
		float L_9 = ___2_val;
		float L_10 = V_0;
		float L_11;
		L_11 = EnhancedScroller_easeOutBounce_m107A5B4703F75CFC27CA2644499C5EC8BB3FDD38((0.0f), L_8, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_9, (2.0f))), L_10)), NULL);
		float L_12 = ___1_end;
		float L_13 = ___0_start;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_11, (0.5f))), ((float)il2cpp_codegen_multiply(L_12, (0.5f))))), L_13));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeInBack_mDE6D05E7A4026A61E715804AA1E1ECA16B632CCF (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___1_end;
		float L_1 = ___0_start;
		___1_end = ((float)il2cpp_codegen_subtract(L_0, L_1));
		float L_2 = ___2_val;
		___2_val = ((float)(L_2/(1.0f)));
		V_0 = (1.70158005f);
		float L_3 = ___1_end;
		float L_4 = ___2_val;
		float L_5 = ___2_val;
		float L_6 = V_0;
		float L_7 = ___2_val;
		float L_8 = V_0;
		float L_9 = ___0_start;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_3, L_4)), L_5)), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(L_6, (1.0f))), L_7)), L_8)))), L_9));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeOutBack_mF539316945EC27DE53D1485874A6F4C17BB6EDCD (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		V_0 = (1.70158005f);
		float L_0 = ___1_end;
		float L_1 = ___0_start;
		___1_end = ((float)il2cpp_codegen_subtract(L_0, L_1));
		float L_2 = ___2_val;
		___2_val = ((float)il2cpp_codegen_subtract(((float)(L_2/(1.0f))), (1.0f)));
		float L_3 = ___1_end;
		float L_4 = ___2_val;
		float L_5 = ___2_val;
		float L_6 = V_0;
		float L_7 = ___2_val;
		float L_8 = V_0;
		float L_9 = ___0_start;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_3, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(L_6, (1.0f))), L_7)), L_8)))), (1.0f))))), L_9));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeInOutBack_m62F897D62006E235D9855C667A68E8C3D8C40220 (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		V_0 = (1.70158005f);
		float L_0 = ___1_end;
		float L_1 = ___0_start;
		___1_end = ((float)il2cpp_codegen_subtract(L_0, L_1));
		float L_2 = ___2_val;
		___2_val = ((float)(L_2/(0.5f)));
		float L_3 = ___2_val;
		if ((!(((float)L_3) < ((float)(1.0f)))))
		{
			goto IL_003e;
		}
	}
	{
		float L_4 = V_0;
		V_0 = ((float)il2cpp_codegen_multiply(L_4, (1.52499998f)));
		float L_5 = ___1_end;
		float L_6 = ___2_val;
		float L_7 = ___2_val;
		float L_8 = V_0;
		float L_9 = ___2_val;
		float L_10 = V_0;
		float L_11 = ___0_start;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)(L_5/(2.0f))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_6, L_7)), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(L_8, (1.0f))), L_9)), L_10)))))), L_11));
	}

IL_003e:
	{
		float L_12 = ___2_val;
		___2_val = ((float)il2cpp_codegen_subtract(L_12, (2.0f)));
		float L_13 = V_0;
		V_0 = ((float)il2cpp_codegen_multiply(L_13, (1.52499998f)));
		float L_14 = ___1_end;
		float L_15 = ___2_val;
		float L_16 = ___2_val;
		float L_17 = V_0;
		float L_18 = ___2_val;
		float L_19 = V_0;
		float L_20 = ___0_start;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)(L_14/(2.0f))), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_15, L_16)), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(L_17, (1.0f))), L_18)), L_19)))), (2.0f))))), L_20));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeInElastic_m02B6FE8AB5EE80A40B0325D811DDC9F920DAC03F (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		float L_0 = ___1_end;
		float L_1 = ___0_start;
		___1_end = ((float)il2cpp_codegen_subtract(L_0, L_1));
		V_0 = (1.0f);
		float L_2 = V_0;
		V_1 = ((float)il2cpp_codegen_multiply(L_2, (0.300000012f)));
		V_2 = (0.0f);
		V_3 = (0.0f);
		float L_3 = ___2_val;
		if ((!(((float)L_3) == ((float)(0.0f)))))
		{
			goto IL_0029;
		}
	}
	{
		float L_4 = ___0_start;
		return L_4;
	}

IL_0029:
	{
		float L_5 = ___2_val;
		float L_6 = V_0;
		___2_val = ((float)(L_5/L_6));
		float L_7 = ___2_val;
		if ((!(((float)L_7) == ((float)(1.0f)))))
		{
			goto IL_003a;
		}
	}
	{
		float L_8 = ___0_start;
		float L_9 = ___1_end;
		return ((float)il2cpp_codegen_add(L_8, L_9));
	}

IL_003a:
	{
		float L_10 = V_3;
		if ((((float)L_10) == ((float)(0.0f))))
		{
			goto IL_004b;
		}
	}
	{
		float L_11 = V_3;
		float L_12 = ___1_end;
		float L_13;
		L_13 = fabsf(L_12);
		if ((!(((float)L_11) < ((float)L_13))))
		{
			goto IL_0057;
		}
	}

IL_004b:
	{
		float L_14 = ___1_end;
		V_3 = L_14;
		float L_15 = V_1;
		V_2 = ((float)(L_15/(4.0f)));
		goto IL_0068;
	}

IL_0057:
	{
		float L_16 = V_1;
		float L_17 = ___1_end;
		float L_18 = V_3;
		float L_19;
		L_19 = asinf(((float)(L_17/L_18)));
		V_2 = ((float)il2cpp_codegen_multiply(((float)(L_16/(6.28318548f))), L_19));
	}

IL_0068:
	{
		float L_20 = ___2_val;
		___2_val = ((float)il2cpp_codegen_subtract(L_20, (1.0f)));
		float L_21 = V_3;
		float L_22 = ___2_val;
		float L_23;
		L_23 = powf((2.0f), ((float)il2cpp_codegen_multiply((10.0f), L_22)));
		float L_24 = ___2_val;
		float L_25 = V_0;
		float L_26 = V_2;
		float L_27 = V_1;
		float L_28;
		L_28 = sinf(((float)(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_24, L_25)), L_26)), (6.28318548f)))/L_27)));
		float L_29 = ___0_start;
		return ((float)il2cpp_codegen_add(((-((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_21, L_23)), L_28)))), L_29));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeOutElastic_m4ED4D8191DF7D81A998FEBF2DAE28700BF864A1E (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		float L_0 = ___1_end;
		float L_1 = ___0_start;
		___1_end = ((float)il2cpp_codegen_subtract(L_0, L_1));
		V_0 = (1.0f);
		float L_2 = V_0;
		V_1 = ((float)il2cpp_codegen_multiply(L_2, (0.300000012f)));
		V_2 = (0.0f);
		V_3 = (0.0f);
		float L_3 = ___2_val;
		if ((!(((float)L_3) == ((float)(0.0f)))))
		{
			goto IL_0029;
		}
	}
	{
		float L_4 = ___0_start;
		return L_4;
	}

IL_0029:
	{
		float L_5 = ___2_val;
		float L_6 = V_0;
		___2_val = ((float)(L_5/L_6));
		float L_7 = ___2_val;
		if ((!(((float)L_7) == ((float)(1.0f)))))
		{
			goto IL_003a;
		}
	}
	{
		float L_8 = ___0_start;
		float L_9 = ___1_end;
		return ((float)il2cpp_codegen_add(L_8, L_9));
	}

IL_003a:
	{
		float L_10 = V_3;
		if ((((float)L_10) == ((float)(0.0f))))
		{
			goto IL_004b;
		}
	}
	{
		float L_11 = V_3;
		float L_12 = ___1_end;
		float L_13;
		L_13 = fabsf(L_12);
		if ((!(((float)L_11) < ((float)L_13))))
		{
			goto IL_0057;
		}
	}

IL_004b:
	{
		float L_14 = ___1_end;
		V_3 = L_14;
		float L_15 = V_1;
		V_2 = ((float)(L_15/(4.0f)));
		goto IL_0068;
	}

IL_0057:
	{
		float L_16 = V_1;
		float L_17 = ___1_end;
		float L_18 = V_3;
		float L_19;
		L_19 = asinf(((float)(L_17/L_18)));
		V_2 = ((float)il2cpp_codegen_multiply(((float)(L_16/(6.28318548f))), L_19));
	}

IL_0068:
	{
		float L_20 = V_3;
		float L_21 = ___2_val;
		float L_22;
		L_22 = powf((2.0f), ((float)il2cpp_codegen_multiply((-10.0f), L_21)));
		float L_23 = ___2_val;
		float L_24 = V_0;
		float L_25 = V_2;
		float L_26 = V_1;
		float L_27;
		L_27 = sinf(((float)(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_23, L_24)), L_25)), (6.28318548f)))/L_26)));
		float L_28 = ___1_end;
		float L_29 = ___0_start;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_20, L_22)), L_27)), L_28)), L_29));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnhancedScroller_easeInOutElastic_m103825B7AF7FB5322CEFC78864C6687C4E435A2B (float ___0_start, float ___1_end, float ___2_val, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		float L_0 = ___1_end;
		float L_1 = ___0_start;
		___1_end = ((float)il2cpp_codegen_subtract(L_0, L_1));
		V_0 = (1.0f);
		float L_2 = V_0;
		V_1 = ((float)il2cpp_codegen_multiply(L_2, (0.300000012f)));
		V_2 = (0.0f);
		V_3 = (0.0f);
		float L_3 = ___2_val;
		if ((!(((float)L_3) == ((float)(0.0f)))))
		{
			goto IL_0029;
		}
	}
	{
		float L_4 = ___0_start;
		return L_4;
	}

IL_0029:
	{
		float L_5 = ___2_val;
		float L_6 = V_0;
		___2_val = ((float)(L_5/((float)(L_6/(2.0f)))));
		float L_7 = ___2_val;
		if ((!(((float)L_7) == ((float)(2.0f)))))
		{
			goto IL_0040;
		}
	}
	{
		float L_8 = ___0_start;
		float L_9 = ___1_end;
		return ((float)il2cpp_codegen_add(L_8, L_9));
	}

IL_0040:
	{
		float L_10 = V_3;
		if ((((float)L_10) == ((float)(0.0f))))
		{
			goto IL_0051;
		}
	}
	{
		float L_11 = V_3;
		float L_12 = ___1_end;
		float L_13;
		L_13 = fabsf(L_12);
		if ((!(((float)L_11) < ((float)L_13))))
		{
			goto IL_005d;
		}
	}

IL_0051:
	{
		float L_14 = ___1_end;
		V_3 = L_14;
		float L_15 = V_1;
		V_2 = ((float)(L_15/(4.0f)));
		goto IL_006e;
	}

IL_005d:
	{
		float L_16 = V_1;
		float L_17 = ___1_end;
		float L_18 = V_3;
		float L_19;
		L_19 = asinf(((float)(L_17/L_18)));
		V_2 = ((float)il2cpp_codegen_multiply(((float)(L_16/(6.28318548f))), L_19));
	}

IL_006e:
	{
		float L_20 = ___2_val;
		if ((!(((float)L_20) < ((float)(1.0f)))))
		{
			goto IL_00ae;
		}
	}
	{
		float L_21 = ___2_val;
		___2_val = ((float)il2cpp_codegen_subtract(L_21, (1.0f)));
		float L_22 = V_3;
		float L_23 = ___2_val;
		float L_24;
		L_24 = powf((2.0f), ((float)il2cpp_codegen_multiply((10.0f), L_23)));
		float L_25 = ___2_val;
		float L_26 = V_0;
		float L_27 = V_2;
		float L_28 = V_1;
		float L_29;
		L_29 = sinf(((float)(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_25, L_26)), L_27)), (6.28318548f)))/L_28)));
		float L_30 = ___0_start;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply((-0.5f), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_22, L_24)), L_29)))), L_30));
	}

IL_00ae:
	{
		float L_31 = ___2_val;
		___2_val = ((float)il2cpp_codegen_subtract(L_31, (1.0f)));
		float L_32 = V_3;
		float L_33 = ___2_val;
		float L_34;
		L_34 = powf((2.0f), ((float)il2cpp_codegen_multiply((-10.0f), L_33)));
		float L_35 = ___2_val;
		float L_36 = V_0;
		float L_37 = V_2;
		float L_38 = V_1;
		float L_39;
		L_39 = sinf(((float)(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_35, L_36)), L_37)), (6.28318548f)))/L_38)));
		float L_40 = ___1_end;
		float L_41 = ___0_start;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_32, L_34)), L_39)), (0.5f))), L_40)), L_41));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScroller__ctor_mD255C618542050C4825244F8245CBDAE01929588 (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmallList_1__ctor_m2EFF2DC139E4A31E30137FD6EC85294FCF97BD0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmallList_1__ctor_m973BB700AE4E7A0C497EEFCCF88E457834F1DD1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmallList_1_tDD26C24E78CCBE316084977E23188B07A348B50E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SmallList_1_tDD26C24E78CCBE316084977E23188B07A348B50E* L_0 = (SmallList_1_tDD26C24E78CCBE316084977E23188B07A348B50E*)il2cpp_codegen_object_new(SmallList_1_tDD26C24E78CCBE316084977E23188B07A348B50E_il2cpp_TypeInfo_var);
		SmallList_1__ctor_m973BB700AE4E7A0C497EEFCCF88E457834F1DD1A(L_0, SmallList_1__ctor_m973BB700AE4E7A0C497EEFCCF88E457834F1DD1A_RuntimeMethod_var);
		__this->____recycledCellViews = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____recycledCellViews), (void*)L_0);
		SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67* L_1 = (SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67*)il2cpp_codegen_object_new(SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67_il2cpp_TypeInfo_var);
		SmallList_1__ctor_m2EFF2DC139E4A31E30137FD6EC85294FCF97BD0B(L_1, SmallList_1__ctor_m2EFF2DC139E4A31E30137FD6EC85294FCF97BD0B_RuntimeMethod_var);
		__this->____cellViewSizeArray = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____cellViewSizeArray), (void*)L_1);
		SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67* L_2 = (SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67*)il2cpp_codegen_object_new(SmallList_1_t6136E8277A95F2136CEF809ACD4AAB544D0BBE67_il2cpp_TypeInfo_var);
		SmallList_1__ctor_m2EFF2DC139E4A31E30137FD6EC85294FCF97BD0B(L_2, SmallList_1__ctor_m2EFF2DC139E4A31E30137FD6EC85294FCF97BD0B_RuntimeMethod_var);
		__this->____cellViewOffsetArray = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____cellViewOffsetArray), (void*)L_2);
		SmallList_1_tDD26C24E78CCBE316084977E23188B07A348B50E* L_3 = (SmallList_1_tDD26C24E78CCBE316084977E23188B07A348B50E*)il2cpp_codegen_object_new(SmallList_1_tDD26C24E78CCBE316084977E23188B07A348B50E_il2cpp_TypeInfo_var);
		SmallList_1__ctor_m973BB700AE4E7A0C497EEFCCF88E457834F1DD1A(L_3, SmallList_1__ctor_m973BB700AE4E7A0C497EEFCCF88E457834F1DD1A_RuntimeMethod_var);
		__this->____activeCellViews = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____activeCellViews), (void*)L_3);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTweenPositionU3Ed__140__ctor_mFC89EEA84735653DA721CA58EA66E1F99BB79DED (U3CTweenPositionU3Ed__140_tC04B98631A63B795840C2E8AB6B0123E33377257* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTweenPositionU3Ed__140_System_IDisposable_Dispose_m461DB58F9AFE9ABE5ABE8103D44EB5D967A9C3BB (U3CTweenPositionU3Ed__140_tC04B98631A63B795840C2E8AB6B0123E33377257* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTweenPositionU3Ed__140_MoveNext_m9456BA05BF0D1D7920BA635C1F6583974648427F (U3CTweenPositionU3Ed__140_tC04B98631A63B795840C2E8AB6B0123E33377257* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* L_1 = __this->___U3CU3E4__this;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0658;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state = (-1);
		int32_t L_4 = __this->___tweenType;
		if (!L_4)
		{
			goto IL_0670;
		}
	}
	{
		float L_5 = __this->___time;
		if ((((float)L_5) == ((float)(0.0f))))
		{
			goto IL_0670;
		}
	}
	{
		EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* L_6 = V_1;
		NullCheck(L_6);
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_7 = L_6->____scrollRect;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		NullCheck(L_7);
		ScrollRect_set_velocity_mBC8D4BC0A0184FCC3AEB359AE68E9130E811AFC2_inline(L_7, L_8, NULL);
		EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* L_9 = V_1;
		NullCheck(L_9);
		EnhancedScroller_set_IsTweening_m1319E704C500AB3971BD22151862C5A05F891E3A_inline(L_9, (bool)1, NULL);
		EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* L_10 = V_1;
		NullCheck(L_10);
		ScrollerTweeningChangedDelegate_t3C04A0BE1392AA65C1FFE1831566EC3F474E147E* L_11 = L_10->___scrollerTweeningChanged;
		if (!L_11)
		{
			goto IL_0068;
		}
	}
	{
		EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* L_12 = V_1;
		NullCheck(L_12);
		ScrollerTweeningChangedDelegate_t3C04A0BE1392AA65C1FFE1831566EC3F474E147E* L_13 = L_12->___scrollerTweeningChanged;
		EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* L_14 = V_1;
		NullCheck(L_13);
		ScrollerTweeningChangedDelegate_Invoke_mF2B1B50F98E90D265595F057B820FEC892A85DB1_inline(L_13, L_14, (bool)1, NULL);
	}

IL_0068:
	{
		EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* L_15 = V_1;
		NullCheck(L_15);
		L_15->____tweenTimeLeft = (0.0f);
		__this->___U3CnewPositionU3E5__2 = (0.0f);
		goto IL_065f;
	}

IL_0083:
	{
		int32_t L_16 = __this->___tweenType;
		V_2 = L_16;
		int32_t L_17 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_17, 1)))
		{
			case 0:
			{
				goto IL_0117;
			}
			case 1:
			{
				goto IL_0141;
			}
			case 2:
			{
				goto IL_016a;
			}
			case 3:
			{
				goto IL_0193;
			}
			case 4:
			{
				goto IL_01bc;
			}
			case 5:
			{
				goto IL_01e5;
			}
			case 6:
			{
				goto IL_020e;
			}
			case 7:
			{
				goto IL_0237;
			}
			case 8:
			{
				goto IL_0260;
			}
			case 9:
			{
				goto IL_0289;
			}
			case 10:
			{
				goto IL_02b2;
			}
			case 11:
			{
				goto IL_02db;
			}
			case 12:
			{
				goto IL_0304;
			}
			case 13:
			{
				goto IL_032d;
			}
			case 14:
			{
				goto IL_0356;
			}
			case 15:
			{
				goto IL_037f;
			}
			case 16:
			{
				goto IL_03a8;
			}
			case 17:
			{
				goto IL_03d1;
			}
			case 18:
			{
				goto IL_03fa;
			}
			case 19:
			{
				goto IL_0423;
			}
			case 20:
			{
				goto IL_044c;
			}
			case 21:
			{
				goto IL_0475;
			}
			case 22:
			{
				goto IL_049e;
			}
			case 23:
			{
				goto IL_04c7;
			}
			case 24:
			{
				goto IL_04f0;
			}
			case 25:
			{
				goto IL_0519;
			}
			case 26:
			{
				goto IL_0542;
			}
			case 27:
			{
				goto IL_056b;
			}
			case 28:
			{
				goto IL_0594;
			}
			case 29:
			{
				goto IL_05ba;
			}
			case 30:
			{
				goto IL_05e0;
			}
			case 31:
			{
				goto IL_0606;
			}
		}
	}
	{
		goto IL_062a;
	}

IL_0117:
	{
		EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* L_18 = V_1;
		float L_19 = __this->___start;
		float L_20 = __this->___end;
		EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* L_21 = V_1;
		NullCheck(L_21);
		float L_22 = L_21->____tweenTimeLeft;
		float L_23 = __this->___time;
		NullCheck(L_18);
		float L_24;
		L_24 = EnhancedScroller_linear_mD0B889FA50D655E5FFD745B4638FCFD852232A37(L_18, L_19, L_20, ((float)(L_22/L_23)), NULL);
		__this->___U3CnewPositionU3E5__2 = L_24;
		goto IL_062a;
	}

IL_0141:
	{
		float L_25 = __this->___start;
		float L_26 = __this->___end;
		EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* L_27 = V_1;
		NullCheck(L_27);
		float L_28 = L_27->____tweenTimeLeft;
		float L_29 = __this->___time;
		float L_30;
		L_30 = EnhancedScroller_spring_mF89E34318CC6755C99A1973ABEFB26081F486975(L_25, L_26, ((float)(L_28/L_29)), NULL);
		__this->___U3CnewPositionU3E5__2 = L_30;
		goto IL_062a;
	}

IL_016a:
	{
		float L_31 = __this->___start;
		float L_32 = __this->___end;
		EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* L_33 = V_1;
		NullCheck(L_33);
		float L_34 = L_33->____tweenTimeLeft;
		float L_35 = __this->___time;
		float L_36;
		L_36 = EnhancedScroller_easeInQuad_m2F542E1B3F85B0FB46C709216C807D5E447588C9(L_31, L_32, ((float)(L_34/L_35)), NULL);
		__this->___U3CnewPositionU3E5__2 = L_36;
		goto IL_062a;
	}

IL_0193:
	{
		float L_37 = __this->___start;
		float L_38 = __this->___end;
		EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* L_39 = V_1;
		NullCheck(L_39);
		float L_40 = L_39->____tweenTimeLeft;
		float L_41 = __this->___time;
		float L_42;
		L_42 = EnhancedScroller_easeOutQuad_mAAF4DB0C4C97A0A4F56D811B515EAA7A44ED374C(L_37, L_38, ((float)(L_40/L_41)), NULL);
		__this->___U3CnewPositionU3E5__2 = L_42;
		goto IL_062a;
	}

IL_01bc:
	{
		float L_43 = __this->___start;
		float L_44 = __this->___end;
		EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* L_45 = V_1;
		NullCheck(L_45);
		float L_46 = L_45->____tweenTimeLeft;
		float L_47 = __this->___time;
		float L_48;
		L_48 = EnhancedScroller_easeInOutQuad_m5C42B27D7CDB67CB877C16855115F8B333411ED6(L_43, L_44, ((float)(L_46/L_47)), NULL);
		__this->___U3CnewPositionU3E5__2 = L_48;
		goto IL_062a;
	}

IL_01e5:
	{
		float L_49 = __this->___start;
		float L_50 = __this->___end;
		EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* L_51 = V_1;
		NullCheck(L_51);
		float L_52 = L_51->____tweenTimeLeft;
		float L_53 = __this->___time;
		float L_54;
		L_54 = EnhancedScroller_easeInCubic_m0F9B1345C9B90BE46842C4C19C97B4D2D05966A6(L_49, L_50, ((float)(L_52/L_53)), NULL);
		__this->___U3CnewPositionU3E5__2 = L_54;
		goto IL_062a;
	}

IL_020e:
	{
		float L_55 = __this->___start;
		float L_56 = __this->___end;
		EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* L_57 = V_1;
		NullCheck(L_57);
		float L_58 = L_57->____tweenTimeLeft;
		float L_59 = __this->___time;
		float L_60;
		L_60 = EnhancedScroller_easeOutCubic_mE10BA9EB8C22B2AF1B60467D2370361167566E20(L_55, L_56, ((float)(L_58/L_59)), NULL);
		__this->___U3CnewPositionU3E5__2 = L_60;
		goto IL_062a;
	}

IL_0237:
	{
		float L_61 = __this->___start;
		float L_62 = __this->___end;
		EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* L_63 = V_1;
		NullCheck(L_63);
		float L_64 = L_63->____tweenTimeLeft;
		float L_65 = __this->___time;
		float L_66;
		L_66 = EnhancedScroller_easeInOutCubic_m97F7B6DEBEC3B6B15E068AD1813864DB2B62AE76(L_61, L_62, ((float)(L_64/L_65)), NULL);
		__this->___U3CnewPositionU3E5__2 = L_66;
		goto IL_062a;
	}

IL_0260:
	{
		float L_67 = __this->___start;
		float L_68 = __this->___end;
		EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* L_69 = V_1;
		NullCheck(L_69);
		float L_70 = L_69->____tweenTimeLeft;
		float L_71 = __this->___time;
		float L_72;
		L_72 = EnhancedScroller_easeInQuart_mCF6D446D3A886BE1789C802C54A5B25A206D4367(L_67, L_68, ((float)(L_70/L_71)), NULL);
		__this->___U3CnewPositionU3E5__2 = L_72;
		goto IL_062a;
	}

IL_0289:
	{
		float L_73 = __this->___start;
		float L_74 = __this->___end;
		EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* L_75 = V_1;
		NullCheck(L_75);
		float L_76 = L_75->____tweenTimeLeft;
		float L_77 = __this->___time;
		float L_78;
		L_78 = EnhancedScroller_easeOutQuart_m515EFE522A84D96B62DD49F18D57F6337DD037B3(L_73, L_74, ((float)(L_76/L_77)), NULL);
		__this->___U3CnewPositionU3E5__2 = L_78;
		goto IL_062a;
	}

IL_02b2:
	{
		float L_79 = __this->___start;
		float L_80 = __this->___end;
		EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* L_81 = V_1;
		NullCheck(L_81);
		float L_82 = L_81->____tweenTimeLeft;
		float L_83 = __this->___time;
		float L_84;
		L_84 = EnhancedScroller_easeInOutQuart_mBD02FB54D80397B694F4D817C0D1FAF2F7D3E1CB(L_79, L_80, ((float)(L_82/L_83)), NULL);
		__this->___U3CnewPositionU3E5__2 = L_84;
		goto IL_062a;
	}

IL_02db:
	{
		float L_85 = __this->___start;
		float L_86 = __this->___end;
		EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* L_87 = V_1;
		NullCheck(L_87);
		float L_88 = L_87->____tweenTimeLeft;
		float L_89 = __this->___time;
		float L_90;
		L_90 = EnhancedScroller_easeInQuint_m79E89F75BEB38BB7EB2B16C34488B805D5BF7614(L_85, L_86, ((float)(L_88/L_89)), NULL);
		__this->___U3CnewPositionU3E5__2 = L_90;
		goto IL_062a;
	}

IL_0304:
	{
		float L_91 = __this->___start;
		float L_92 = __this->___end;
		EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* L_93 = V_1;
		NullCheck(L_93);
		float L_94 = L_93->____tweenTimeLeft;
		float L_95 = __this->___time;
		float L_96;
		L_96 = EnhancedScroller_easeOutQuint_m37C0D1681B79A8F0506409D9B5A234EE08D125C7(L_91, L_92, ((float)(L_94/L_95)), NULL);
		__this->___U3CnewPositionU3E5__2 = L_96;
		goto IL_062a;
	}

IL_032d:
	{
		float L_97 = __this->___start;
		float L_98 = __this->___end;
		EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* L_99 = V_1;
		NullCheck(L_99);
		float L_100 = L_99->____tweenTimeLeft;
		float L_101 = __this->___time;
		float L_102;
		L_102 = EnhancedScroller_easeInOutQuint_mEE67B2FB9325C23414EF653A8EABE89E2694CE05(L_97, L_98, ((float)(L_100/L_101)), NULL);
		__this->___U3CnewPositionU3E5__2 = L_102;
		goto IL_062a;
	}

IL_0356:
	{
		float L_103 = __this->___start;
		float L_104 = __this->___end;
		EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* L_105 = V_1;
		NullCheck(L_105);
		float L_106 = L_105->____tweenTimeLeft;
		float L_107 = __this->___time;
		float L_108;
		L_108 = EnhancedScroller_easeInSine_m3A5DF4067F6B19528549A3EA81111F5D7D8A5209(L_103, L_104, ((float)(L_106/L_107)), NULL);
		__this->___U3CnewPositionU3E5__2 = L_108;
		goto IL_062a;
	}

IL_037f:
	{
		float L_109 = __this->___start;
		float L_110 = __this->___end;
		EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* L_111 = V_1;
		NullCheck(L_111);
		float L_112 = L_111->____tweenTimeLeft;
		float L_113 = __this->___time;
		float L_114;
		L_114 = EnhancedScroller_easeOutSine_m4063B402292201F02031BC25EC54300A2D9489CD(L_109, L_110, ((float)(L_112/L_113)), NULL);
		__this->___U3CnewPositionU3E5__2 = L_114;
		goto IL_062a;
	}

IL_03a8:
	{
		float L_115 = __this->___start;
		float L_116 = __this->___end;
		EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* L_117 = V_1;
		NullCheck(L_117);
		float L_118 = L_117->____tweenTimeLeft;
		float L_119 = __this->___time;
		float L_120;
		L_120 = EnhancedScroller_easeInOutSine_m547500F2DD103187CCE1CF3B9EB8A191FC9D7B1E(L_115, L_116, ((float)(L_118/L_119)), NULL);
		__this->___U3CnewPositionU3E5__2 = L_120;
		goto IL_062a;
	}

IL_03d1:
	{
		float L_121 = __this->___start;
		float L_122 = __this->___end;
		EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* L_123 = V_1;
		NullCheck(L_123);
		float L_124 = L_123->____tweenTimeLeft;
		float L_125 = __this->___time;
		float L_126;
		L_126 = EnhancedScroller_easeInExpo_mFA0E64036C1622133FE85A7B1094C039690A106E(L_121, L_122, ((float)(L_124/L_125)), NULL);
		__this->___U3CnewPositionU3E5__2 = L_126;
		goto IL_062a;
	}

IL_03fa:
	{
		float L_127 = __this->___start;
		float L_128 = __this->___end;
		EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* L_129 = V_1;
		NullCheck(L_129);
		float L_130 = L_129->____tweenTimeLeft;
		float L_131 = __this->___time;
		float L_132;
		L_132 = EnhancedScroller_easeOutExpo_mD58F3FEAA23F281B1AAC714D016475E2EC16E429(L_127, L_128, ((float)(L_130/L_131)), NULL);
		__this->___U3CnewPositionU3E5__2 = L_132;
		goto IL_062a;
	}

IL_0423:
	{
		float L_133 = __this->___start;
		float L_134 = __this->___end;
		EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* L_135 = V_1;
		NullCheck(L_135);
		float L_136 = L_135->____tweenTimeLeft;
		float L_137 = __this->___time;
		float L_138;
		L_138 = EnhancedScroller_easeInOutExpo_m66A3E22CEBA00F71BC19CBBE8DCB8B8548106643(L_133, L_134, ((float)(L_136/L_137)), NULL);
		__this->___U3CnewPositionU3E5__2 = L_138;
		goto IL_062a;
	}

IL_044c:
	{
		float L_139 = __this->___start;
		float L_140 = __this->___end;
		EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* L_141 = V_1;
		NullCheck(L_141);
		float L_142 = L_141->____tweenTimeLeft;
		float L_143 = __this->___time;
		float L_144;
		L_144 = EnhancedScroller_easeInCirc_m20D1ED5788E1D7E74D78FE431C7D073FB55AF6E3(L_139, L_140, ((float)(L_142/L_143)), NULL);
		__this->___U3CnewPositionU3E5__2 = L_144;
		goto IL_062a;
	}

IL_0475:
	{
		float L_145 = __this->___start;
		float L_146 = __this->___end;
		EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* L_147 = V_1;
		NullCheck(L_147);
		float L_148 = L_147->____tweenTimeLeft;
		float L_149 = __this->___time;
		float L_150;
		L_150 = EnhancedScroller_easeOutCirc_mF22FC4E97AA4BB1BCA89F0D0FE7FC5C7DD16C9A0(L_145, L_146, ((float)(L_148/L_149)), NULL);
		__this->___U3CnewPositionU3E5__2 = L_150;
		goto IL_062a;
	}

IL_049e:
	{
		float L_151 = __this->___start;
		float L_152 = __this->___end;
		EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* L_153 = V_1;
		NullCheck(L_153);
		float L_154 = L_153->____tweenTimeLeft;
		float L_155 = __this->___time;
		float L_156;
		L_156 = EnhancedScroller_easeInOutCirc_m061A35F504A408BE151E478FA72F7DB65B9C4F1A(L_151, L_152, ((float)(L_154/L_155)), NULL);
		__this->___U3CnewPositionU3E5__2 = L_156;
		goto IL_062a;
	}

IL_04c7:
	{
		float L_157 = __this->___start;
		float L_158 = __this->___end;
		EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* L_159 = V_1;
		NullCheck(L_159);
		float L_160 = L_159->____tweenTimeLeft;
		float L_161 = __this->___time;
		float L_162;
		L_162 = EnhancedScroller_easeInBounce_m9734B25FD072D7A1793AC89F626C952B87F5EAC0(L_157, L_158, ((float)(L_160/L_161)), NULL);
		__this->___U3CnewPositionU3E5__2 = L_162;
		goto IL_062a;
	}

IL_04f0:
	{
		float L_163 = __this->___start;
		float L_164 = __this->___end;
		EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* L_165 = V_1;
		NullCheck(L_165);
		float L_166 = L_165->____tweenTimeLeft;
		float L_167 = __this->___time;
		float L_168;
		L_168 = EnhancedScroller_easeOutBounce_m107A5B4703F75CFC27CA2644499C5EC8BB3FDD38(L_163, L_164, ((float)(L_166/L_167)), NULL);
		__this->___U3CnewPositionU3E5__2 = L_168;
		goto IL_062a;
	}

IL_0519:
	{
		float L_169 = __this->___start;
		float L_170 = __this->___end;
		EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* L_171 = V_1;
		NullCheck(L_171);
		float L_172 = L_171->____tweenTimeLeft;
		float L_173 = __this->___time;
		float L_174;
		L_174 = EnhancedScroller_easeInOutBounce_mD8F1F11DDAF60E4889E6CD4B6C14323CE4572E2B(L_169, L_170, ((float)(L_172/L_173)), NULL);
		__this->___U3CnewPositionU3E5__2 = L_174;
		goto IL_062a;
	}

IL_0542:
	{
		float L_175 = __this->___start;
		float L_176 = __this->___end;
		EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* L_177 = V_1;
		NullCheck(L_177);
		float L_178 = L_177->____tweenTimeLeft;
		float L_179 = __this->___time;
		float L_180;
		L_180 = EnhancedScroller_easeInBack_mDE6D05E7A4026A61E715804AA1E1ECA16B632CCF(L_175, L_176, ((float)(L_178/L_179)), NULL);
		__this->___U3CnewPositionU3E5__2 = L_180;
		goto IL_062a;
	}

IL_056b:
	{
		float L_181 = __this->___start;
		float L_182 = __this->___end;
		EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* L_183 = V_1;
		NullCheck(L_183);
		float L_184 = L_183->____tweenTimeLeft;
		float L_185 = __this->___time;
		float L_186;
		L_186 = EnhancedScroller_easeOutBack_mF539316945EC27DE53D1485874A6F4C17BB6EDCD(L_181, L_182, ((float)(L_184/L_185)), NULL);
		__this->___U3CnewPositionU3E5__2 = L_186;
		goto IL_062a;
	}

IL_0594:
	{
		float L_187 = __this->___start;
		float L_188 = __this->___end;
		EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* L_189 = V_1;
		NullCheck(L_189);
		float L_190 = L_189->____tweenTimeLeft;
		float L_191 = __this->___time;
		float L_192;
		L_192 = EnhancedScroller_easeInOutBack_m62F897D62006E235D9855C667A68E8C3D8C40220(L_187, L_188, ((float)(L_190/L_191)), NULL);
		__this->___U3CnewPositionU3E5__2 = L_192;
		goto IL_062a;
	}

IL_05ba:
	{
		float L_193 = __this->___start;
		float L_194 = __this->___end;
		EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* L_195 = V_1;
		NullCheck(L_195);
		float L_196 = L_195->____tweenTimeLeft;
		float L_197 = __this->___time;
		float L_198;
		L_198 = EnhancedScroller_easeInElastic_m02B6FE8AB5EE80A40B0325D811DDC9F920DAC03F(L_193, L_194, ((float)(L_196/L_197)), NULL);
		__this->___U3CnewPositionU3E5__2 = L_198;
		goto IL_062a;
	}

IL_05e0:
	{
		float L_199 = __this->___start;
		float L_200 = __this->___end;
		EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* L_201 = V_1;
		NullCheck(L_201);
		float L_202 = L_201->____tweenTimeLeft;
		float L_203 = __this->___time;
		float L_204;
		L_204 = EnhancedScroller_easeOutElastic_m4ED4D8191DF7D81A998FEBF2DAE28700BF864A1E(L_199, L_200, ((float)(L_202/L_203)), NULL);
		__this->___U3CnewPositionU3E5__2 = L_204;
		goto IL_062a;
	}

IL_0606:
	{
		float L_205 = __this->___start;
		float L_206 = __this->___end;
		EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* L_207 = V_1;
		NullCheck(L_207);
		float L_208 = L_207->____tweenTimeLeft;
		float L_209 = __this->___time;
		float L_210;
		L_210 = EnhancedScroller_easeInOutElastic_m103825B7AF7FB5322CEFC78864C6687C4E435A2B(L_205, L_206, ((float)(L_208/L_209)), NULL);
		__this->___U3CnewPositionU3E5__2 = L_210;
	}

IL_062a:
	{
		EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* L_211 = V_1;
		float L_212 = __this->___U3CnewPositionU3E5__2;
		NullCheck(L_211);
		EnhancedScroller_set_ScrollPosition_m703772A369D3E1676BD65C15F647CFA79481C223(L_211, L_212, NULL);
		EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* L_213 = V_1;
		EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* L_214 = V_1;
		NullCheck(L_214);
		float L_215 = L_214->____tweenTimeLeft;
		float L_216;
		L_216 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		NullCheck(L_213);
		L_213->____tweenTimeLeft = ((float)il2cpp_codegen_add(L_215, L_216));
		__this->___U3CU3E2__current = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current), (void*)NULL);
		__this->___U3CU3E1__state = 1;
		return (bool)1;
	}

IL_0658:
	{
		__this->___U3CU3E1__state = (-1);
	}

IL_065f:
	{
		EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* L_217 = V_1;
		NullCheck(L_217);
		float L_218 = L_217->____tweenTimeLeft;
		float L_219 = __this->___time;
		if ((((float)L_218) < ((float)L_219)))
		{
			goto IL_0083;
		}
	}

IL_0670:
	{
		EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* L_220 = V_1;
		float L_221 = __this->___end;
		NullCheck(L_220);
		EnhancedScroller_set_ScrollPosition_m703772A369D3E1676BD65C15F647CFA79481C223(L_220, L_221, NULL);
		EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* L_222 = V_1;
		NullCheck(L_222);
		EnhancedScroller__RefreshActive_m098FD7B4385179FE74C7F609434685913195333C(L_222, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_223 = __this->___tweenComplete;
		if (!L_223)
		{
			goto IL_0695;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_224 = __this->___tweenComplete;
		NullCheck(L_224);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_224, NULL);
	}

IL_0695:
	{
		EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* L_225 = V_1;
		NullCheck(L_225);
		EnhancedScroller_set_IsTweening_m1319E704C500AB3971BD22151862C5A05F891E3A_inline(L_225, (bool)0, NULL);
		EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* L_226 = V_1;
		NullCheck(L_226);
		ScrollerTweeningChangedDelegate_t3C04A0BE1392AA65C1FFE1831566EC3F474E147E* L_227 = L_226->___scrollerTweeningChanged;
		if (!L_227)
		{
			goto IL_06b1;
		}
	}
	{
		EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* L_228 = V_1;
		NullCheck(L_228);
		ScrollerTweeningChangedDelegate_t3C04A0BE1392AA65C1FFE1831566EC3F474E147E* L_229 = L_228->___scrollerTweeningChanged;
		EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* L_230 = V_1;
		NullCheck(L_229);
		ScrollerTweeningChangedDelegate_Invoke_mF2B1B50F98E90D265595F057B820FEC892A85DB1_inline(L_229, L_230, (bool)0, NULL);
	}

IL_06b1:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTweenPositionU3Ed__140_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1AE087E3C3927F36A651DAD7C30EFD2FF1C6FC39 (U3CTweenPositionU3Ed__140_tC04B98631A63B795840C2E8AB6B0123E33377257* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTweenPositionU3Ed__140_System_Collections_IEnumerator_Reset_mDEB8FE3BD56ADBC6AA42D053D2EEBBD046B9A805 (U3CTweenPositionU3Ed__140_tC04B98631A63B795840C2E8AB6B0123E33377257* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTweenPositionU3Ed__140_System_Collections_IEnumerator_Reset_mDEB8FE3BD56ADBC6AA42D053D2EEBBD046B9A805_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTweenPositionU3Ed__140_System_Collections_IEnumerator_get_Current_m54DAE5BC0CD747814995A0B3D40D65E5A404497D (U3CTweenPositionU3Ed__140_tC04B98631A63B795840C2E8AB6B0123E33377257* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScrollerCellView_RefreshCellView_mFEAF19F790CBC9B1B12C51CAC4BD87FA208E005F (EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedScrollerCellView__ctor_m48CF44219DADF6479CC546634B40A9CA4B93FB77 (EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_Height;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_Width;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float EnhancedScroller_get_ScrollPosition_m00738952CFB5F288DA398A1F438B2F9122B61FE0_inline (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->____scrollPosition;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ScrollRect_get_velocity_m8F7DDB02F52BFF2503F079C216FC5C89AA4875DC_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___m_Velocity;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScrollRect_set_velocity_mBC8D4BC0A0184FCC3AEB359AE68E9130E811AFC2_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___m_Velocity = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x = L_0;
		float L_1 = ___1_y;
		__this->___y = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CellViewInstantiated_Invoke_m175D8E92654CAC26386CE53E21C25FB240C5A2CF_inline (CellViewInstantiated_tD9FCFB13CC0F4A6DD1B1502099F73B8CB87F83CE* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___1_cellView, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B*, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_scroller, ___1_cellView, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CellViewReused_Invoke_mE141EE791BFF71536F4AA1A04D688430AE1EDC32_inline (CellViewReused_t735E2EC81E35C797096B5C527229607370898A18* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___1_cellView, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B*, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_scroller, ___1_cellView, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ScrollRect_get_inertia_m10C8837B3E43787E1FA94C71683D19638FCEFFBF_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___m_Inertia;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScrollRect_set_inertia_m8A17589561A5E7A2F5F543B8F2F6149458C68AC2_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___m_Inertia = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = ceil(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float HorizontalOrVerticalLayoutGroup_get_spacing_m916C9BF57D4AB0EF76E6BC4EC5E1EA54B7918782_inline (HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___m_Spacing;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CellViewWillRecycleDelegate_Invoke_m4B873B37A7A3BA5E336CBC3281CBF933B3DDA2C4_inline (CellViewWillRecycleDelegate_tBFC8C3F20197FE3179695C4C338EFAF7D618875C* __this, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___0_cellView, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_cellView, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CellViewVisibilityChangedDelegate_Invoke_m8809BAE14177603BDD5AA7B730B14D108A7258EB_inline (CellViewVisibilityChangedDelegate_t43F8249D9299E7AD6E37272385ADBEE1017BA3DD* __this, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___0_cellView, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_cellView, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ScrollRect_get_content_m7878BCA28A96B7FBA02DC466A1ED2C9E191C6996_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) 
{
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___m_Content;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___oneVector;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScrollRect_set_content_m01BF6FE0205985CBD16C6D3BB4B6F345B3AF484E_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_value, const RuntimeMethod* method) 
{
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___0_value;
		__this->___m_Content = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Content), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ScrollRect_get_verticalScrollbar_mCEB62CC858B43CE7FB07D287CAFC1363668E78C6_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) 
{
	{
		Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* L_0 = __this->___m_VerticalScrollbar;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ScrollRect_get_horizontalScrollbar_mDE0EC3FD5C1AC8FDB4D8E8EF4B093A77218DF534_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) 
{
	{
		Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* L_0 = __this->___m_HorizontalScrollbar;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScrollRect_set_horizontal_m99C076AF2B2B596C87435E1465EF0B104281B150_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___m_Horizontal = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScrollRect_set_vertical_m972088E788E72690AAE139E7C0F8F634C325E7CE_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___m_Vertical = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EnhancedScroller_get_IsScrolling_mFC65ADFE92845FB1122223B175C4C44F8BFB2DBA_inline (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsScrollingU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EnhancedScroller_set_IsScrolling_m325C39C4DE217C88751EE6F457D58A3060654762_inline (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CIsScrollingU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScrollerScrollingChangedDelegate_Invoke_mBA1C292A082F7418E135508D327D2B4B6ADA9AF9_inline (ScrollerScrollingChangedDelegate_t7A163170666C2A9FCCFA49F6B466A8F85E432D2E* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, bool ___1_scrolling, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_scroller, ___1_scrolling, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26* ScrollRect_get_onValueChanged_mA6AF3832A97E82D31BB8C20BCD6E87A300E56C05_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) 
{
	{
		ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26* L_0 = __this->___m_OnValueChanged;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScrollerScrolledDelegate_Invoke_m8E4D0F225AE4120CA90E40A433EFBBF33741F351_inline (ScrollerScrolledDelegate_tCF28541FE97900820A53F56F09E540DC9E293E48* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_val, float ___2_scrollPosition, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_scroller, ___1_val, ___2_scrollPosition, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScrollerSnappedDelegate_Invoke_m5EF631C0C36655E0AD064A299221B9439D44EE8E_inline (ScrollerSnappedDelegate_t4FDC68A802920BE5ACF5E2025694C666773619D0* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, int32_t ___1_cellIndex, int32_t ___2_dataIndex, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892* ___3_cellView, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B*, int32_t, int32_t, EnhancedScrollerCellView_tE35E274D2B65AC20B4C84D70B5734804DA9D5892*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_scroller, ___1_cellIndex, ___2_dataIndex, ___3_cellView, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		float L_2 = ___0_a;
		float L_3 = ___2_t;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EnhancedScroller_set_IsTweening_m1319E704C500AB3971BD22151862C5A05F891E3A_inline (EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CIsTweeningU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScrollerTweeningChangedDelegate_Invoke_mF2B1B50F98E90D265595F057B820FEC892A85DB1_inline (ScrollerTweeningChangedDelegate_t3C04A0BE1392AA65C1FFE1831566EC3F474E147E* __this, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B* ___0_scroller, bool ___1_tweening, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, EnhancedScroller_tC1CAB162CBFD5DD402624194A709CABD370AAE3B*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_scroller, ___1_tweening, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
