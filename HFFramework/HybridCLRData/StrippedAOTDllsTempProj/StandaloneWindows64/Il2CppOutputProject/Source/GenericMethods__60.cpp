#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif




template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};

struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct Chunk_tFD3964D469E39DC44B4AE6B4F1458DCE0835265F;
struct Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD;
struct EntityComponentStore_tA85E100ECD667365B260A68DFD9DF9B7C04D037F;
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
struct String_t;
struct TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct ActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA;
struct GetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE;
struct GetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E;
struct GetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B;
struct GetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452;
struct ObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34;
struct ObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C;
struct ObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA;
struct ReferencedEntityUsage_t5A0EA88A4004D1FC8F522DD8A8296F79D0D92B81;

IL2CPP_EXTERN_C RuntimeClass* ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct NativeArray_1_t15482D9F7CC02501EED5F540239814F47FD7ABF0 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t44EB3A133DF22EE1B584A5B212FD6518CD42B27F 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t04DF635C0FEAB264F763F4B942D6A669F0B1F1C1 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tE14EC68A3468927E8107E875446A79D116B04603 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tC4A37FE4F670CE4681F5AD5FBBE68B0043BC29F2 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t3C4549E0042C159CF962BB776A84D2C0D9864609 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA382EEE61A1BB1A47C7D6FE762A71DFA9BA0EC3E 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t31CD9A149F8F3956127329CD9F526C41662FED99 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDDBE2218E06075EFCDE280D90B6FA7C4BF46BFD2 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tB4B7683DD2A8F815875BE195332D74EEF88AE45E 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t914A2D89770088554B462280097B5C6823D2C33D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t2A0257A9C26D1BA03925423B9A39B0A58DDBD41D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t25F6CEC65DB0532CB91E2B2890FF6C2D52A210A3 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t4FFBB5A3D23110E4F3CD5583649AE34B94C6331C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t88D704C42FF4613A6E6131D50108F5AFCA5F4144 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t8EAF026790EF3DF68B0045BB0E38FB17C27171FF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t3348E32CE02DFE5B4012620EFD1FE7BF5285DA7A 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t6BB9B80B0F7974ABDDCC6212EC861C47D38450ED 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t605EE6881E7CBF0C803EC1F3B91C779E90FF938F 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t021E2A3E5A6A871FA36CA2A7C7E8F28E2997F960 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tE86C54A5ACEFF0199233969AEBAE4AB1FD8AA8A4 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t9230D5979ADB0724CE54B965F21469A945186974 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t6B944030010D60829E768DB6CAF4A6E8ACFBFC51 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t558AA1B39C895CFA4159FB64D6E90FBBDE347107 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA828356220037230A27BC3A8E67C1781DC6A8B7D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t1291B8EED1157C7B3FF62D91683A0AC7D076C6BE 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tEE4C676F8F6EE01446E2FB86503B8701786CD215 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t8BCB604BE54DAF273FDE916E4D30F17CBB42F015 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tF0CA4ED4A83B35E0F121BAEE253FFBF1311D7A9A 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t2ECE991FE3C71C2513CF9F90F251E98C74D7E290 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t39D14A39A6ACA2DB850DF32D81E357AC49675730 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t5322C9463FF74A9E271418BB28A235FE3BA914CB 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t199AE8490F8EFECF20612BEF447818B3457173B5 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
#pragma pack(push, tp, 1)
struct ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					Chunk_tFD3964D469E39DC44B4AE6B4F1458DCE0835265F* ___m_Chunk;
				};
				#pragma pack(pop, tp)
				struct
				{
					Chunk_tFD3964D469E39DC44B4AE6B4F1458DCE0835265F* ___m_Chunk_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_EntityComponentStore_OffsetPadding[8];
					EntityComponentStore_tA85E100ECD667365B260A68DFD9DF9B7C04D037F* ___m_EntityComponentStore;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_EntityComponentStore_OffsetPadding_forAlignmentOnly[8];
					EntityComponentStore_tA85E100ECD667365B260A68DFD9DF9B7C04D037F* ___m_EntityComponentStore_forAlignmentOnly;
				};
			};
		};
		uint8_t ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5__padding[16];
	};
};
#pragma pack(pop, tp)
struct AspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50 
{
	int32_t ___TypeIndex;
};
struct BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 
{
	alignas(IL2CPP_SIZEOF_VOID_P) BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* ___Header;
};
#pragma pack(push, tp, 1)
struct BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					uint8_t* ___m_Ptr;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint8_t* ___m_Ptr_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					int64_t ___m_Align8Union;
				};
				#pragma pack(pop, tp)
				struct
				{
					int64_t ___m_Align8Union_forAlignmentOnly;
				};
			};
		};
		uint8_t BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998__padding[8];
	};
};
#pragma pack(pop, tp)
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct ComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB 
{
	uint64_t ___StableTypeHash;
	uint8_t ___Flags;
};
struct Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD 
{
	int32_t ___Index;
	int32_t ___Version;
};
struct EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 
{
	uint64_t ___a;
	uint64_t ___b;
};
#pragma pack(push, tp, 1)
struct FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					uint8_t ___byte0000;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint8_t ___byte0000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0001_OffsetPadding[1];
					uint8_t ___byte0001;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0001_OffsetPadding_forAlignmentOnly[1];
					uint8_t ___byte0001_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0002_OffsetPadding[2];
					uint8_t ___byte0002;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0002_OffsetPadding_forAlignmentOnly[2];
					uint8_t ___byte0002_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0003_OffsetPadding[3];
					uint8_t ___byte0003;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0003_OffsetPadding_forAlignmentOnly[3];
					uint8_t ___byte0003_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0004_OffsetPadding[4];
					uint8_t ___byte0004;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0004_OffsetPadding_forAlignmentOnly[4];
					uint8_t ___byte0004_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0005_OffsetPadding[5];
					uint8_t ___byte0005;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0005_OffsetPadding_forAlignmentOnly[5];
					uint8_t ___byte0005_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0006_OffsetPadding[6];
					uint8_t ___byte0006;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0006_OffsetPadding_forAlignmentOnly[6];
					uint8_t ___byte0006_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0007_OffsetPadding[7];
					uint8_t ___byte0007;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0007_OffsetPadding_forAlignmentOnly[7];
					uint8_t ___byte0007_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0008_OffsetPadding[8];
					uint8_t ___byte0008;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0008_OffsetPadding_forAlignmentOnly[8];
					uint8_t ___byte0008_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0009_OffsetPadding[9];
					uint8_t ___byte0009;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0009_OffsetPadding_forAlignmentOnly[9];
					uint8_t ___byte0009_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0010_OffsetPadding[10];
					uint8_t ___byte0010;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0010_OffsetPadding_forAlignmentOnly[10];
					uint8_t ___byte0010_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0011_OffsetPadding[11];
					uint8_t ___byte0011;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0011_OffsetPadding_forAlignmentOnly[11];
					uint8_t ___byte0011_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0012_OffsetPadding[12];
					uint8_t ___byte0012;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0012_OffsetPadding_forAlignmentOnly[12];
					uint8_t ___byte0012_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0013_OffsetPadding[13];
					uint8_t ___byte0013;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0013_OffsetPadding_forAlignmentOnly[13];
					uint8_t ___byte0013_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0014_OffsetPadding[14];
					uint8_t ___byte0014;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0014_OffsetPadding_forAlignmentOnly[14];
					uint8_t ___byte0014_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0015_OffsetPadding[15];
					uint8_t ___byte0015;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0015_OffsetPadding_forAlignmentOnly[15];
					uint8_t ___byte0015_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0__padding[16];
	};
};
#pragma pack(pop, tp)
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
#pragma pack(push, tp, 1)
struct TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					int32_t ___Value;
				};
				#pragma pack(pop, tp)
				struct
				{
					int32_t ___Value_forAlignmentOnly;
				};
			};
		};
		uint8_t TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C__padding[4];
	};
};
#pragma pack(pop, tp)
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t* ___values;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t* ___values_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___keys_OffsetPadding[8];
			uint8_t* ___keys;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___keys_OffsetPadding_forAlignmentOnly[8];
			uint8_t* ___keys_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___next_OffsetPadding[16];
			uint8_t* ___next;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___next_OffsetPadding_forAlignmentOnly[16];
			uint8_t* ___next_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___buckets_OffsetPadding[24];
			uint8_t* ___buckets;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___buckets_OffsetPadding_forAlignmentOnly[24];
			uint8_t* ___buckets_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___keyCapacity_OffsetPadding[32];
			int32_t ___keyCapacity;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___keyCapacity_OffsetPadding_forAlignmentOnly[32];
			int32_t ___keyCapacity_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___bucketCapacityMask_OffsetPadding[36];
			int32_t ___bucketCapacityMask;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___bucketCapacityMask_OffsetPadding_forAlignmentOnly[36];
			int32_t ___bucketCapacityMask_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___allocatedIndexLength_OffsetPadding[40];
			int32_t ___allocatedIndexLength;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___allocatedIndexLength_OffsetPadding_forAlignmentOnly[40];
			int32_t ___allocatedIndexLength_forAlignmentOnly;
		};
	};
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
struct uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 
{
	uint32_t ___x;
	uint32_t ___y;
	uint32_t ___z;
	uint32_t ___w;
};
struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	uint16_t ___Index;
	uint16_t ___Version;
};
struct ActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA 
{
	int32_t ___GameObjectId;
	int32_t ___Dependent;
	bool ___IsActive;
};
struct ActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA_marshaled_pinvoke
{
	int32_t ___GameObjectId;
	int32_t ___Dependent;
	int32_t ___IsActive;
};
struct ActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA_marshaled_com
{
	int32_t ___GameObjectId;
	int32_t ___Dependent;
	int32_t ___IsActive;
};
struct GetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452 
{
	int32_t ___GameObject;
	int32_t ___QueryIndex;
	int32_t ___DependencyType;
	int32_t ___Result;
};
struct ObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C 
{
	int32_t ___InstanceID;
	int32_t ___AuthoringID;
	int32_t ___PropertyType;
	int32_t ___Value;
};
struct ObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA 
{
	int32_t ___InstanceID;
	int32_t ___AuthoringID;
	bool ___Value;
};
struct ObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA_marshaled_pinvoke
{
	int32_t ___InstanceID;
	int32_t ___AuthoringID;
	int32_t ___Value;
};
struct ObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA_marshaled_com
{
	int32_t ___InstanceID;
	int32_t ___AuthoringID;
	int32_t ___Value;
};
struct ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 
{
	int32_t ___Id;
	uint64_t ___Target;
};
struct U3CCountsU3Ee__FixedBuffer_t7242F2305228AFF87648DC15C161C6CD998EE9CA 
{
	union
	{
		struct
		{
			int32_t ___FixedElementField;
		};
		uint8_t U3CCountsU3Ee__FixedBuffer_t7242F2305228AFF87648DC15C161C6CD998EE9CA__padding[20];
	};
};
struct HashMapHelper_1_tF4097677DF54F9B7101CE52DA301CACDF02D8AD9 
{
	uint8_t* ___Ptr;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* ___Keys;
	int32_t* ___Next;
	int32_t* ___Buckets;
	int32_t ___Count;
	int32_t ___Capacity;
	int32_t ___Log2MinGrowth;
	int32_t ___BucketCapacity;
	int32_t ___AllocatedIndex;
	int32_t ___FirstFreeIdx;
	int32_t ___SizeOfTValue;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
};
struct NativeKeyValueArrays_2_tA0478175575F8E90E221672CD5CCA63FDA106E79 
{
	NativeArray_1_t04DF635C0FEAB264F763F4B942D6A669F0B1F1C1 ___Keys;
	NativeArray_1_tA382EEE61A1BB1A47C7D6FE762A71DFA9BA0EC3E ___Values;
};
struct NativeKeyValueArrays_2_t86D5872EA22D11EA0F7F6720038C1D3C7B3626F7 
{
	NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837 ___Keys;
	NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837 ___Values;
};
struct NativeKeyValueArrays_2_tF6AC51744C9F84B17DF17BA5A84D8AAFBD5CE5B1 
{
	NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837 ___Keys;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___Values;
};
struct NativeKeyValueArrays_2_tD7D7B26C1DC876823B7FD795B6145264E5FEAFE2 
{
	NativeArray_1_t3C4549E0042C159CF962BB776A84D2C0D9864609 ___Keys;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___Values;
};
struct NativeKeyValueArrays_2_tC2B57424F4454FB7290A62F13E6B400E0DA21334 
{
	NativeArray_1_tA382EEE61A1BB1A47C7D6FE762A71DFA9BA0EC3E ___Keys;
	NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB ___Values;
};
struct NativeKeyValueArrays_2_t2C905AB91A46E53E95EA0AF42625DD6CD969A04F 
{
	NativeArray_1_t31CD9A149F8F3956127329CD9F526C41662FED99 ___Keys;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___Values;
};
struct NativeKeyValueArrays_2_t9FFDDD66BB13315DEE458F90CE39BDA25EA48F7F 
{
	NativeArray_1_tDDBE2218E06075EFCDE280D90B6FA7C4BF46BFD2 ___Keys;
	NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB ___Values;
};
struct NativeKeyValueArrays_2_tB1B5782125283D58CDF246CFA314EF62210B2666 
{
	NativeArray_1_tDDBE2218E06075EFCDE280D90B6FA7C4BF46BFD2 ___Keys;
	NativeArray_1_tDDBE2218E06075EFCDE280D90B6FA7C4BF46BFD2 ___Values;
};
struct NativeKeyValueArrays_2_t98F568D75F1A22839640268F8BFE69F61FEA76DD 
{
	NativeArray_1_tDDBE2218E06075EFCDE280D90B6FA7C4BF46BFD2 ___Keys;
	NativeArray_1_tB4B7683DD2A8F815875BE195332D74EEF88AE45E ___Values;
};
struct NativeKeyValueArrays_2_t22F01DB4B942949A985F28EA3B38E6BAF0789DA9 
{
	NativeArray_1_tDDBE2218E06075EFCDE280D90B6FA7C4BF46BFD2 ___Keys;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___Values;
};
struct NativeKeyValueArrays_2_t87518DE2FC929C32E47D25B0F6AC7D33FD0C03BA 
{
	NativeArray_1_tDDBE2218E06075EFCDE280D90B6FA7C4BF46BFD2 ___Keys;
	NativeArray_1_t88D704C42FF4613A6E6131D50108F5AFCA5F4144 ___Values;
};
struct NativeKeyValueArrays_2_tD199381B902103D09FB939A335F9BD66DA2014C0 
{
	NativeArray_1_tB4B7683DD2A8F815875BE195332D74EEF88AE45E ___Keys;
	NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB ___Values;
};
struct NativeKeyValueArrays_2_tB81A44AC7376B6616DD5463E124B6399CFD2E185 
{
	NativeArray_1_tB4B7683DD2A8F815875BE195332D74EEF88AE45E ___Keys;
	NativeArray_1_tDDBE2218E06075EFCDE280D90B6FA7C4BF46BFD2 ___Values;
};
struct NativeKeyValueArrays_2_t1E36B8FF514E5E705ECE6E650667B65A10DF69B7 
{
	NativeArray_1_t914A2D89770088554B462280097B5C6823D2C33D ___Keys;
	NativeArray_1_tDDBE2218E06075EFCDE280D90B6FA7C4BF46BFD2 ___Values;
};
struct NativeKeyValueArrays_2_t6C9C627B2477A580341CA92BE887CC20A42F0E1F 
{
	NativeArray_1_t914A2D89770088554B462280097B5C6823D2C33D ___Keys;
	NativeArray_1_t199AE8490F8EFECF20612BEF447818B3457173B5 ___Values;
};
struct NativeKeyValueArrays_2_tC094DB3C313976D17B8AC588F92A837CF47DA399 
{
	NativeArray_1_t2A0257A9C26D1BA03925423B9A39B0A58DDBD41D ___Keys;
	NativeArray_1_tC4A37FE4F670CE4681F5AD5FBBE68B0043BC29F2 ___Values;
};
struct NativeKeyValueArrays_2_tDA5D49BE0E131EDFC15BE935D00B3A4A9A51B717 
{
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___Keys;
	NativeArray_1_t15482D9F7CC02501EED5F540239814F47FD7ABF0 ___Values;
};
struct NativeKeyValueArrays_2_t731594D0E8981996DF4D83C0A703042EAA11CFB5 
{
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___Keys;
	NativeArray_1_tE14EC68A3468927E8107E875446A79D116B04603 ___Values;
};
struct NativeKeyValueArrays_2_t23D1126126024D2A72D247CC67B349308AFE9FEF 
{
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___Keys;
	NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB ___Values;
};
struct NativeKeyValueArrays_2_t4B0C71F595CA0EACB49D03B78838F9C70C076737 
{
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___Keys;
	NativeArray_1_t3C4549E0042C159CF962BB776A84D2C0D9864609 ___Values;
};
struct NativeKeyValueArrays_2_t9E3BFE09CCAD0FE46FC0EF2D7D2D5560D399B8FC 
{
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___Keys;
	NativeArray_1_tDDBE2218E06075EFCDE280D90B6FA7C4BF46BFD2 ___Values;
};
struct NativeKeyValueArrays_2_tF51A55D75DBB6D766D8D5B99DC29C3762BA12496 
{
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___Keys;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___Values;
};
struct NativeKeyValueArrays_2_tC8438418001C0D25F0B470D81DEA3F00CC44D794 
{
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___Keys;
	NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9 ___Values;
};
struct NativeKeyValueArrays_2_tE089B2CF32C8D676FFA23BFB15FA3132B07265AA 
{
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___Keys;
	NativeArray_1_t4FFBB5A3D23110E4F3CD5583649AE34B94C6331C ___Values;
};
struct NativeKeyValueArrays_2_t3A04C7F6B555B87B533DF74A36E114FACE5CBA39 
{
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___Keys;
	NativeArray_1_t6BB9B80B0F7974ABDDCC6212EC861C47D38450ED ___Values;
};
struct NativeKeyValueArrays_2_tBB4958A4F575A3B683B79EC659B9A4384AC1B0A0 
{
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___Keys;
	NativeArray_1_t605EE6881E7CBF0C803EC1F3B91C779E90FF938F ___Values;
};
struct NativeKeyValueArrays_2_t0F0CB9299634FFC07DF20FC3A2DC23F822BC70EB 
{
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___Keys;
	NativeArray_1_t021E2A3E5A6A871FA36CA2A7C7E8F28E2997F960 ___Values;
};
struct NativeKeyValueArrays_2_tFEC11AACA23329D851705107DFA75B5C866D07DD 
{
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___Keys;
	NativeArray_1_tE86C54A5ACEFF0199233969AEBAE4AB1FD8AA8A4 ___Values;
};
struct NativeKeyValueArrays_2_t4FE7B11671FA19285E9048F0883AC15398C7782E 
{
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___Keys;
	NativeArray_1_t9230D5979ADB0724CE54B965F21469A945186974 ___Values;
};
struct NativeKeyValueArrays_2_t16C9442D67CF86F51A20A8D693E40C37732C39FD 
{
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___Keys;
	NativeArray_1_t6B944030010D60829E768DB6CAF4A6E8ACFBFC51 ___Values;
};
struct NativeKeyValueArrays_2_t5EC162EAD8E8641004E4F13DF7DBF2280AF902A2 
{
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___Keys;
	NativeArray_1_t558AA1B39C895CFA4159FB64D6E90FBBDE347107 ___Values;
};
struct NativeKeyValueArrays_2_t2389916BD217390646B9F69E3C25C927EC24C8C5 
{
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___Keys;
	NativeArray_1_tA828356220037230A27BC3A8E67C1781DC6A8B7D ___Values;
};
struct NativeKeyValueArrays_2_t0C13E910C47B0A7473E7F898AC6F4E8EBDF74E2D 
{
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___Keys;
	NativeArray_1_tF0CA4ED4A83B35E0F121BAEE253FFBF1311D7A9A ___Values;
};
struct NativeKeyValueArrays_2_t14A3222AEBA0B33AC8ECC6AFC67D1AEC702FCEA0 
{
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___Keys;
	NativeArray_1_t5322C9463FF74A9E271418BB28A235FE3BA914CB ___Values;
};
struct NativeKeyValueArrays_2_tE7681378AD7ED1422B03DA33DAB7098382465DAC 
{
	NativeArray_1_t25F6CEC65DB0532CB91E2B2890FF6C2D52A210A3 ___Keys;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___Values;
};
struct NativeKeyValueArrays_2_tC3CAC4DC3C46A0ABF7095E38B7C3174457AE9C15 
{
	NativeArray_1_t25F6CEC65DB0532CB91E2B2890FF6C2D52A210A3 ___Keys;
	NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 ___Values;
};
struct NativeKeyValueArrays_2_t03B2A649B6C6254E87723CC3476AAA77A67F80E8 
{
	NativeArray_1_t8EAF026790EF3DF68B0045BB0E38FB17C27171FF ___Keys;
	NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB ___Values;
};
struct NativeKeyValueArrays_2_t74AE1A8D286C3E322E4B45390EBD1415AF19ACF3 
{
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___Keys;
	NativeArray_1_t44EB3A133DF22EE1B584A5B212FD6518CD42B27F ___Values;
};
struct NativeKeyValueArrays_2_tD1C7E4065F58C0A217801C413E38A85A748A0209 
{
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___Keys;
	NativeArray_1_t04DF635C0FEAB264F763F4B942D6A669F0B1F1C1 ___Values;
};
struct NativeKeyValueArrays_2_t25F4D532D5B122640B6B26B799AD371778FD3BE6 
{
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___Keys;
	NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB ___Values;
};
struct NativeKeyValueArrays_2_tE1DFCAE6688CDBA80B9114AC4B537B44F7909B05 
{
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___Keys;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___Values;
};
struct NativeKeyValueArrays_2_tE4F6643B71F37BE972D2EF277D67267DBD9F17B0 
{
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___Keys;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___Values;
};
struct NativeKeyValueArrays_2_tF2EE05B9ACB01DB385DA087BF4CE92D4CE4BA400 
{
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___Keys;
	NativeArray_1_t8EAF026790EF3DF68B0045BB0E38FB17C27171FF ___Values;
};
struct NativeKeyValueArrays_2_tF0C9DDB602F789F19A16A1FA2EC584D35E067652 
{
	NativeArray_1_t3348E32CE02DFE5B4012620EFD1FE7BF5285DA7A ___Keys;
	NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB ___Values;
};
struct NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1 
{
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___Keys;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___Values;
};
struct NativeKeyValueArrays_2_t7235B7A3A1991F703BB3FE6A3013076D0BE551DB 
{
	NativeArray_1_tEE4C676F8F6EE01446E2FB86503B8701786CD215 ___Keys;
	NativeArray_1_t1291B8EED1157C7B3FF62D91683A0AC7D076C6BE ___Values;
};
struct NativeKeyValueArrays_2_t912256E0B2B816732608B1EF2A523DF7460A144D 
{
	NativeArray_1_t8BCB604BE54DAF273FDE916E4D30F17CBB42F015 ___Keys;
	NativeArray_1_t2ECE991FE3C71C2513CF9F90F251E98C74D7E290 ___Values;
};
struct NativeKeyValueArrays_2_t4D5C2BB96A9CB2EE83E4CABEA140554B5BB0864E 
{
	NativeArray_1_t8BCB604BE54DAF273FDE916E4D30F17CBB42F015 ___Keys;
	NativeArray_1_t39D14A39A6ACA2DB850DF32D81E357AC49675730 ___Values;
};
struct UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 
{
	int32_t* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tEE6D0269E6E8E59E96623AA3410F283FE7B8CF65 
{
	alignas(IL2CPP_SIZEOF_VOID_P) TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t9B1FBEFD612E0FA0F9D5C88BF2BC764C2CC0FCB5 
{
	ActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t2E169590720CAE8D2370A59936FDA97D4E285B6D 
{
	GetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tFE26B731BBB5324EC74196596A4FCD2A2F7B910B 
{
	GetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tDB7B0B8624C61A57ABDB1AC1EDA1F76179077E13 
{
	GetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t019E726FDD648FDC4E8725736DB3C1E8873AF9A6 
{
	GetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tB1909FF2C0A21F7B47ED5BD8F780312C509C5303 
{
	ObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t47385BA7E4AE412D819BE344107FDEC23EB82F8D 
{
	ObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tCFCA13A75A8A7CFC6CD69B080638E71EE151539A 
{
	ObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t1F456B5D945266804A9EB26C765FF2CFCE17D733 
{
	ReferencedEntityUsage_t5A0EA88A4004D1FC8F522DD8A8296F79D0D92B81* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA 
{
	alignas(4) TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___TypeIndex;
	int32_t ___AccessModeType;
};
#pragma pack(push, tp, 1)
struct FixedBytes30_t7721F11929A3AC08287DF5E6D7AEF85CCEE04AD2 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000;
				};
				#pragma pack(pop, tp)
				struct
				{
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0016_OffsetPadding[16];
					uint8_t ___byte0016;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0016_OffsetPadding_forAlignmentOnly[16];
					uint8_t ___byte0016_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0017_OffsetPadding[17];
					uint8_t ___byte0017;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0017_OffsetPadding_forAlignmentOnly[17];
					uint8_t ___byte0017_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0018_OffsetPadding[18];
					uint8_t ___byte0018;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0018_OffsetPadding_forAlignmentOnly[18];
					uint8_t ___byte0018_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0019_OffsetPadding[19];
					uint8_t ___byte0019;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0019_OffsetPadding_forAlignmentOnly[19];
					uint8_t ___byte0019_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0020_OffsetPadding[20];
					uint8_t ___byte0020;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0020_OffsetPadding_forAlignmentOnly[20];
					uint8_t ___byte0020_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0021_OffsetPadding[21];
					uint8_t ___byte0021;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0021_OffsetPadding_forAlignmentOnly[21];
					uint8_t ___byte0021_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0022_OffsetPadding[22];
					uint8_t ___byte0022;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0022_OffsetPadding_forAlignmentOnly[22];
					uint8_t ___byte0022_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0023_OffsetPadding[23];
					uint8_t ___byte0023;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0023_OffsetPadding_forAlignmentOnly[23];
					uint8_t ___byte0023_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0024_OffsetPadding[24];
					uint8_t ___byte0024;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0024_OffsetPadding_forAlignmentOnly[24];
					uint8_t ___byte0024_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0025_OffsetPadding[25];
					uint8_t ___byte0025;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0025_OffsetPadding_forAlignmentOnly[25];
					uint8_t ___byte0025_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0026_OffsetPadding[26];
					uint8_t ___byte0026;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0026_OffsetPadding_forAlignmentOnly[26];
					uint8_t ___byte0026_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0027_OffsetPadding[27];
					uint8_t ___byte0027;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0027_OffsetPadding_forAlignmentOnly[27];
					uint8_t ___byte0027_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0028_OffsetPadding[28];
					uint8_t ___byte0028;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0028_OffsetPadding_forAlignmentOnly[28];
					uint8_t ___byte0028_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0029_OffsetPadding[29];
					uint8_t ___byte0029;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0029_OffsetPadding_forAlignmentOnly[29];
					uint8_t ___byte0029_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes30_t7721F11929A3AC08287DF5E6D7AEF85CCEE04AD2__padding[30];
	};
};
#pragma pack(pop, tp)
struct Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B 
{
	uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 ___Value;
};
struct TransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D 
{
	U3CCountsU3Ee__FixedBuffer_t7242F2305228AFF87648DC15C161C6CD998EE9CA ___Counts;
	int32_t ___IsUsed;
};
struct GetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE 
{
	int32_t ___GameObject;
	alignas(4) TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___Type;
	int32_t ___DependencyType;
	int32_t ___ResultComponent;
};
struct ObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34 
{
	int32_t ___InstanceID;
	alignas(4) TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___Type;
	bool ___exists;
};
struct ObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34_marshaled_pinvoke
{
	int32_t ___InstanceID;
	TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___Type;
	int32_t ___exists;
};
struct ObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34_marshaled_com
{
	int32_t ___InstanceID;
	TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___Type;
	int32_t ___exists;
};
struct DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F 
{
	alignas(4) TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___TypeIndex;
	int32_t ___IndexInBakerArray;
};
struct EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D 
{
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___entity;
	alignas(4) TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___componentTypeIndex;
};
struct EntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055 
{
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___Entity;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___TargetEntity;
};
struct ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C 
{
	int32_t ___Id;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___TargetEntity;
};
struct ComponentData_t2CB40CF3C2FA75B9CA5D8292DCFA8BF12A42DB07 
{
	alignas(4) TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___TypeIndex;
	int32_t ___InstanceID;
};
struct LoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02 
{
	int32_t ___RefCount;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___SceneEntity;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___PrefabRoot;
};
struct UnsafeHashSet_1_t982205DCD82C95EDB86B40937DA9AC768D4723A8 
{
	HashMapHelper_1_tF4097677DF54F9B7101CE52DA301CACDF02D8AD9 ___m_Data;
};
struct BakerEntityUsage_tE394A24EE421B4595946F226800281F25AF6F80A 
{
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___PrimaryEntity;
	TransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D ___PrimaryEntityFlags;
	UnsafeList_1_t1F456B5D945266804A9EB26C765FF2CFCE17D733 ___ReferencedEntityUsages;
};
struct ComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D 
{
	int32_t ___AuthoringComponentId;
	int32_t ___BakeReason;
	int32_t ___ReasonId;
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___ReasonGuid;
	alignas(4) TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___BakingUnityTypeIndex;
};
struct FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824 
{
	union
	{
		struct
		{
			uint16_t ___utf8LengthInBytes;
			alignas(1) FixedBytes30_t7721F11929A3AC08287DF5E6D7AEF85CCEE04AD2 ___bytes;
		};
		uint8_t FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824__padding[32];
	};
};
struct PrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751 
{
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___GUID;
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___Hash;
	int32_t ___RefCount;
};
struct RuntimeGlobalObjectId_tC6329FB06BA5199F5848D9355CF10D6D7CACEA00 
{
	int64_t ___SceneObjectIdentifier0;
	int64_t ___SceneObjectIdentifier1;
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___AssetGUID;
	int32_t ___IdentifierType;
};
struct GetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E 
{
	int32_t ___GameObject;
	alignas(4) TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___Type;
	int32_t ___DependencyType;
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___ComponentHash;
};
struct GetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B 
{
	int32_t ___GameObject;
	int32_t ___DependencyType;
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___Hash;
};
struct RecordedDependencies_tD332557133A9411EB6FE425858C928F703711B83 
{
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 ___ObjectReference;
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 ___PersistentAsset;
	UnsafeList_1_t2E169590720CAE8D2370A59936FDA97D4E285B6D ___GetComponent;
	UnsafeList_1_t019E726FDD648FDC4E8725736DB3C1E8873AF9A6 ___GetHierarchySingle;
	UnsafeList_1_tDB7B0B8624C61A57ABDB1AC1EDA1F76179077E13 ___GetHierarchy;
	UnsafeList_1_tFE26B731BBB5324EC74196596A4FCD2A2F7B910B ___GetComponents;
	UnsafeList_1_tB1909FF2C0A21F7B47ED5BD8F780312C509C5303 ___ObjectExist;
	UnsafeList_1_t47385BA7E4AE412D819BE344107FDEC23EB82F8D ___ObjectProperty;
	UnsafeList_1_tCFCA13A75A8A7CFC6CD69B080638E71EE151539A ___ObjectStatic;
	UnsafeList_1_t9B1FBEFD612E0FA0F9D5C88BF2BC764C2CC0FCB5 ___Active;
	int32_t ___LightBaking;
};
struct EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD 
{
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___Entity;
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA ___Component;
};
struct BakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7 
{
	UnsafeList_1_tEE6D0269E6E8E59E96623AA3410F283FE7B8CF65 ___AddedComponents;
	UnsafeHashSet_1_t982205DCD82C95EDB86B40937DA9AC768D4723A8 ___Entities;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___PrimaryEntity;
	RecordedDependencies_tD332557133A9411EB6FE425858C928F703711B83 ___Dependencies;
	BakerEntityUsage_tE394A24EE421B4595946F226800281F25AF6F80A ___Usage;
};
struct UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A 
{
	RuntimeGlobalObjectId_tC6329FB06BA5199F5848D9355CF10D6D7CACEA00 ___GlobalId;
	int16_t ___GenerationType;
};
struct EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 
{
	UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A ___Id;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_StaticFields
{
	EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 ___Null;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_StaticFields
{
	FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824 ___kMsg_None;
	FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824 ___kMsg_Space_Buffer;
	FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824 ___kMsg_Space_Exclude;
	FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824 ___kMsg_Space_Readonly;
};
struct Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_StaticFields
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___k_HexToLiteral;
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___k_LiteralToHex;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB_m123857F85C9BFD317BC4CB88F03DB057AC7A8CC0_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5B2EBCF5A7515312D5BBDA1CC5ACDA8C99F14E18_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m177EBEBF64B94FE192C8268AE6BCB9A563047C3C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_mAEF65C486D008558F825C99D85F94551E317B4DF_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisTransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D_m245C9FB0E7B630F5AF8620DE958B68FBBDC95869_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_mFBB919BDCE8F3E9F6BB1AC9F036200F466C8E9C4_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisLoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02_m3714C1DA541A15F113193B5BF9F03A517ACBDB4B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m13EA6511CCA01250CAC338855AA7112292ED6036_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_mCCA70DE9EA8F3019FD79181A059D31A972311F9C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m348D66015CD9DE899E1D629A356A294625A89A79_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7_m16FBAAF488B6E3E8831365EAB7705A217F2165C9_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_mA948765B976CB1DE8317E063360E4499B0CB181A_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisIntPtr_t_mB2B3CFF1CB804C99734D4E2F5D8A8C9DB0D209A8_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751_m2A318CAE585381E20EF83FF7EAEAD2985A6FB24B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA_m93035A7083808061FAA0D61522FCA975B96795F6_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisGetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE_mC146FD0788F8D27183DC5FA217D150CE5D960E16_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisGetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E_m2DC52F60E47C91615A7762CCF1A73975D5373C69_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisGetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B_m516C020555EAA24A34E4311591A9B0BF19B2453E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisGetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452_mA4E7079D860F20A8439F8086A5F904E85A4A144B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34_m98F077078302520C47A901B213035CAF245718F7_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C_m655A8584504C2BD5F6ED039239E9033A755EA38F_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA_m62C21F6694C03D4856CBC824244CCA52047910C5_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisEntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055_mEA5F8818A2E31AE8B3A843472D2A46C0E40EA242_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisComponentData_t2CB40CF3C2FA75B9CA5D8292DCFA8BF12A42DB07_m5E1A500CD4A47B175B43B8F5D981FCD1B68A624F_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m9712F6405A5D5C4128EAFA7860A222DE388ED6C5_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mEC9469DBD91362D6135B8F5A81E90486BF328075_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_mBA8405CA0C1426234043E941C50F8F3C2263305E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5_m6DCB7B2184E8A41AF080D2EE7EBBFC2A693701DD_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6C198B51ACD7B8EC62D5E0E75433C12BE9D65A58_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_mCACAE521597CACDD37B73CF9D791E47F2B11D2AB_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_mFAA6F9C6A87B112BBD85F22709B4E18563AA5593_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_m07CD2CC6AE0C968369AEFFC05481EE370280903F_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_m9A0B080F904D8ED7A7F58A6AD867315894D8BB01_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_m04C9CC92295DB84F3F3826B06BA0221DA973FB56_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_m7966BC0577D20C1E83FA97C815806D75A2D4EB70_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m1F87695ED302C16C36379DF4FF11644369D02D75_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50 UnsafeUtility_ReadArrayElement_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_m42C27C99C832082CC850074116836AD6C7951F4F_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 UnsafeUtility_ReadArrayElement_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_m11F042F9F93240F4EC774AB70400B604FB52EACF_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D UnsafeUtility_ReadArrayElement_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_mC0855E940EDA880F3AC7284411BE4E8ED52CA780_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA UnsafeUtility_ReadArrayElement_TisComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_mE975124B2DB09771E16EABF7A001A4619D5F6768_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB UnsafeUtility_ReadArrayElement_TisComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB_mF1DA179FEC24B2BD7741BBE13FC22FA26604FBB9_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD UnsafeUtility_ReadArrayElement_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m64F6C7E9916D768E9365F442F252409EECA0CE9C_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 UnsafeUtility_ReadArrayElement_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_mBA7BC7F5CDE7522066ADEB4389DB7FDE05392F39_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 UnsafeUtility_ReadArrayElement_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_mB198FB4671ADE00B3ADE86BC40D6ABD19AE8C07B_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B UnsafeUtility_ReadArrayElement_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_mCCED167A2D047452D014A45173D1FDB05928928C_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t UnsafeUtility_ReadArrayElement_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m51BA37651B60ACB0F4F6867E07AB0C3E0046FC9C_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C UnsafeUtility_ReadArrayElement_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m055B0246613F21DF105592E21674EE77285875DC_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A UnsafeUtility_ReadArrayElement_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m7ACC04D18A4EC85ECFB185A88B79EB26AD1DACB1_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D UnsafeUtility_ReadArrayElement_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_mC6063FB4A2E79E711911A585DB8C2A0F994A4923_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD UnsafeUtility_ReadArrayElement_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_m79A11EC661A750655C4DB523B26452DE76DBDAA8_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeKeyValueArrays_2_get_Length_m05D9B229D47593D2B403CD94777A1A38ADD22CC2_gshared (NativeKeyValueArrays_2_tA0478175575F8E90E221672CD5CCA63FDA106E79* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeKeyValueArrays_2_get_Length_mE13C3C70EDD1B0001EEE17B99E71C537CC117841_gshared (NativeKeyValueArrays_2_t86D5872EA22D11EA0F7F6720038C1D3C7B3626F7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeKeyValueArrays_2_get_Length_m9BA7505B51895C93D41E1082DAEB10A749837217_gshared (NativeKeyValueArrays_2_tF6AC51744C9F84B17DF17BA5A84D8AAFBD5CE5B1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeKeyValueArrays_2_get_Length_m495FB642ECEE7F51F4E001D31866ECC1F96842D2_gshared (NativeKeyValueArrays_2_tD7D7B26C1DC876823B7FD795B6145264E5FEAFE2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeKeyValueArrays_2_get_Length_mC7C7C549E526B3043D3B89C47901CC0304691AA0_gshared (NativeKeyValueArrays_2_tC2B57424F4454FB7290A62F13E6B400E0DA21334* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnsafeUtility_ReadArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF765CB2E5FD631DFB79C25DE656F3C1BB359B995_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeKeyValueArrays_2_get_Length_mA0998712AA1F29881732CA75431347B1BE5AF037_gshared (NativeKeyValueArrays_2_t2C905AB91A46E53E95EA0AF42625DD6CD969A04F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeKeyValueArrays_2_get_Length_mCA82A46E1937A92353E58CABB432A276DD87A7F8_gshared (NativeKeyValueArrays_2_t9FFDDD66BB13315DEE458F90CE39BDA25EA48F7F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeKeyValueArrays_2_get_Length_m46091EB35CE64DFA9BD3F625AEB8FCBC0DEF9DF1_gshared (NativeKeyValueArrays_2_tB1B5782125283D58CDF246CFA314EF62210B2666* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeKeyValueArrays_2_get_Length_m05805DDA2F8695E9D5EFDE5AA2200FDB34EE392F_gshared (NativeKeyValueArrays_2_t98F568D75F1A22839640268F8BFE69F61FEA76DD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeKeyValueArrays_2_get_Length_m613798F3D8C4EC9F073CAF27BE9B9DE9D30256ED_gshared (NativeKeyValueArrays_2_t22F01DB4B942949A985F28EA3B38E6BAF0789DA9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeKeyValueArrays_2_get_Length_mC21E5B9407958D42ABC04DC84542B52EE20DC70D_gshared (NativeKeyValueArrays_2_t87518DE2FC929C32E47D25B0F6AC7D33FD0C03BA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D UnsafeUtility_ReadArrayElement_TisTransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D_mB3EF85E0F07B6626BEE4350E49F8DD84F7E542CE_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeKeyValueArrays_2_get_Length_m1138B095A8D78952B634C3A662FC49310C967090_gshared (NativeKeyValueArrays_2_tD199381B902103D09FB939A335F9BD66DA2014C0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeKeyValueArrays_2_get_Length_m451F1B5827087B6A6950AF3B6F00423341B88B06_gshared (NativeKeyValueArrays_2_tB81A44AC7376B6616DD5463E124B6399CFD2E185* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeKeyValueArrays_2_get_Length_m5172D3D1819BA96C0B58B63ADDE03A3E4018DADC_gshared (NativeKeyValueArrays_2_t1E36B8FF514E5E705ECE6E650667B65A10DF69B7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeKeyValueArrays_2_get_Length_mC54D48A3F6856A67CA6836D26BBBA75665363F63_gshared (NativeKeyValueArrays_2_t6C9C627B2477A580341CA92BE887CC20A42F0E1F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02 UnsafeUtility_ReadArrayElement_TisLoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02_m836F60A4A610F7AD228932364B2855D5CBBE1D65_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeKeyValueArrays_2_get_Length_m820E5F0733CA9D7FC2C9A75CCEBC82D1D50F895A_gshared (NativeKeyValueArrays_2_tC094DB3C313976D17B8AC588F92A837CF47DA399* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 UnsafeUtility_ReadArrayElement_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m09665718EFC7893CDD26DCB1B3EC90D4E46D7A98_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeKeyValueArrays_2_get_Length_m317613DFCE6B8039E1B78E23381B64CE62601D52_gshared (NativeKeyValueArrays_2_tDA5D49BE0E131EDFC15BE935D00B3A4A9A51B717* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 UnsafeUtility_ReadArrayElement_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m1F1E944526C83C5C50C3BEFA897DB7849C6CF967_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeKeyValueArrays_2_get_Length_m95541A14A8E3AC08E119596562D6CD32F946F9EA_gshared (NativeKeyValueArrays_2_t731594D0E8981996DF4D83C0A703042EAA11CFB5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7 UnsafeUtility_ReadArrayElement_TisBakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7_m341C66DAFE22D7FF675AB26610BCA44E0E7636AD_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeKeyValueArrays_2_get_Length_m1A966334113393D6D43ED8AC601D32C9301E60EF_gshared (NativeKeyValueArrays_2_t23D1126126024D2A72D247CC67B349308AFE9FEF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeKeyValueArrays_2_get_Length_m5117265499EED4F8AEE9BB33752AFA20E1094953_gshared (NativeKeyValueArrays_2_t4B0C71F595CA0EACB49D03B78838F9C70C076737* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeKeyValueArrays_2_get_Length_mF3869EFB86F15EDCE519D812F5E9BEB9F1081326_gshared (NativeKeyValueArrays_2_t9E3BFE09CCAD0FE46FC0EF2D7D2D5560D399B8FC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeKeyValueArrays_2_get_Length_m0E87F558427CED97F501D4AB4A5F0A78A2B39723_gshared (NativeKeyValueArrays_2_tF51A55D75DBB6D766D8D5B99DC29C3762BA12496* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeKeyValueArrays_2_get_Length_mFD5F1BE602F8331DFB26E2EB01E82B952DB4FE05_gshared (NativeKeyValueArrays_2_tC8438418001C0D25F0B470D81DEA3F00CC44D794* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t UnsafeUtility_ReadArrayElement_TisIntPtr_t_m1AB5DE7A4962B63822FF70AF37E0BADC77C4AE23_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeKeyValueArrays_2_get_Length_m83A41EFAEEC4859BDC330B270B652E49E94B9BD9_gshared (NativeKeyValueArrays_2_tE089B2CF32C8D676FFA23BFB15FA3132B07265AA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751 UnsafeUtility_ReadArrayElement_TisPrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751_m956BFBA7E125ECF42542E6A2ABAC0DD7059B8A10_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeKeyValueArrays_2_get_Length_mA62E75DBCBA7090A0B616D1D1D5DF242C65D95DE_gshared (NativeKeyValueArrays_2_t3A04C7F6B555B87B533DF74A36E114FACE5CBA39* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA UnsafeUtility_ReadArrayElement_TisActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA_m50C716C28EF2FACA3FD6ECDE4C2290D6ECB07A61_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeKeyValueArrays_2_get_Length_m3B9B3517740F922CA07A888EF76E142771C81CE9_gshared (NativeKeyValueArrays_2_tBB4958A4F575A3B683B79EC659B9A4384AC1B0A0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE UnsafeUtility_ReadArrayElement_TisGetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE_m4E9D75DDD928F74FFDA7A6339190E37A04AA1BAA_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeKeyValueArrays_2_get_Length_m64D10B0D60568E5668C7D3ECD063F207187D5299_gshared (NativeKeyValueArrays_2_t0F0CB9299634FFC07DF20FC3A2DC23F822BC70EB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E UnsafeUtility_ReadArrayElement_TisGetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E_m240057E500574E311F64D761C1B0E81D48539B71_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeKeyValueArrays_2_get_Length_mFC6DAF8791E05BFB36FF92846C18DA38096E73AB_gshared (NativeKeyValueArrays_2_tFEC11AACA23329D851705107DFA75B5C866D07DD* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B UnsafeUtility_ReadArrayElement_TisGetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B_mE31D1DD2E82C423B35C73B7F1E8D557C2DBC75C5_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeKeyValueArrays_2_get_Length_mFA42919E15D635677DDFA39A1BDAE0F56EB49851_gshared (NativeKeyValueArrays_2_t4FE7B11671FA19285E9048F0883AC15398C7782E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452 UnsafeUtility_ReadArrayElement_TisGetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452_m4E35AE63F5292F45C4B7D57F293CAB353B3768BC_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeKeyValueArrays_2_get_Length_m030F70E126876CBE26E8FEF0E6EF38ED9A75736F_gshared (NativeKeyValueArrays_2_t16C9442D67CF86F51A20A8D693E40C37732C39FD* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34 UnsafeUtility_ReadArrayElement_TisObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34_m68422EC542A6BB6DBE519B2416180FA28AFB543E_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeKeyValueArrays_2_get_Length_mE629BCA827E7AA677B1D9FB7B7DB16CDDAC8C344_gshared (NativeKeyValueArrays_2_t5EC162EAD8E8641004E4F13DF7DBF2280AF902A2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C UnsafeUtility_ReadArrayElement_TisObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C_mAA82F9B921463BA85338F4F6907EB371C99E2C0D_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeKeyValueArrays_2_get_Length_m60290E6C2C59BCDAAEDE59C4A17E810A115094C8_gshared (NativeKeyValueArrays_2_t2389916BD217390646B9F69E3C25C927EC24C8C5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA UnsafeUtility_ReadArrayElement_TisObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA_mE3F1AB969DB8BDB1A3E3E15E2414CF6A0B1699F1_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeKeyValueArrays_2_get_Length_mD623D28B39FEBC023DB6E913E278D6C24E5E0484_gshared (NativeKeyValueArrays_2_t0C13E910C47B0A7473E7F898AC6F4E8EBDF74E2D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055 UnsafeUtility_ReadArrayElement_TisEntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055_m269B2EB28C9E6370F7CF1D48917001A93ECA1836_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeKeyValueArrays_2_get_Length_mCAD59B1D1DD695B07CE48BF99C79A4EFE32B9F55_gshared (NativeKeyValueArrays_2_t14A3222AEBA0B33AC8ECC6AFC67D1AEC702FCEA0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ComponentData_t2CB40CF3C2FA75B9CA5D8292DCFA8BF12A42DB07 UnsafeUtility_ReadArrayElement_TisComponentData_t2CB40CF3C2FA75B9CA5D8292DCFA8BF12A42DB07_m4CC70D46AE7357ECAF9520C12226902E43D8FBFE_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeKeyValueArrays_2_get_Length_m1C734549753B4EFDB05BDB2F1C07D18BA74043CC_gshared (NativeKeyValueArrays_2_tE7681378AD7ED1422B03DA33DAB7098382465DAC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeKeyValueArrays_2_get_Length_mBCAFA8BE0F5E32A0D711B91FBC539249B2C8E999_gshared (NativeKeyValueArrays_2_tC3CAC4DC3C46A0ABF7095E38B7C3174457AE9C15* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t UnsafeUtility_ReadArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mDA4F2F1FC33E2F2F8CC3E761D626E638762C61E4_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeKeyValueArrays_2_get_Length_mC33C14BCAAA2AE3FCF3AA84279E9F72EF89BB787_gshared (NativeKeyValueArrays_2_t03B2A649B6C6254E87723CC3476AAA77A67F80E8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeKeyValueArrays_2_get_Length_m348AB8708CCF25D42F40A4C71A742F9FB4B34290_gshared (NativeKeyValueArrays_2_t74AE1A8D286C3E322E4B45390EBD1415AF19ACF3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 UnsafeUtility_ReadArrayElement_TisArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5_m331C4C63F372510AD14D346567E6B3877853D8BD_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeKeyValueArrays_2_get_Length_m8B69EAC631CAA45EE78A8206EB2E474AB0A3F811_gshared (NativeKeyValueArrays_2_tD1C7E4065F58C0A217801C413E38A85A748A0209* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeKeyValueArrays_2_get_Length_mCB0173799EBD5C534B32ABB67516A45E7AF119EC_gshared (NativeKeyValueArrays_2_t25F4D532D5B122640B6B26B799AD371778FD3BE6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeKeyValueArrays_2_get_Length_mBF4C7C9649331AB57DD1639E61B58C70AF592BF2_gshared (NativeKeyValueArrays_2_tE1DFCAE6688CDBA80B9114AC4B537B44F7909B05* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t UnsafeUtility_ReadArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m06447B534673E0861DE4F55616DFAF9BD7DCBCC6_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeKeyValueArrays_2_get_Length_m6AE2ED0F9FF5634687CF8B2B12CD0C0A6A6B452E_gshared (NativeKeyValueArrays_2_tE4F6643B71F37BE972D2EF277D67267DBD9F17B0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeKeyValueArrays_2_get_Length_m7B1A5FA2795F53C669F452FB7050575DE5BFFE52_gshared (NativeKeyValueArrays_2_tF2EE05B9ACB01DB385DA087BF4CE92D4CE4BA400* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeKeyValueArrays_2_get_Length_mF7AC66FA6C9CD9047110D7EEE4276671B7F36AD2_gshared (NativeKeyValueArrays_2_tF0C9DDB602F789F19A16A1FA2EC584D35E067652* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeKeyValueArrays_2_get_Length_mA05355BE86679503FF7C80E097C6E5CB89FB314A_gshared (NativeKeyValueArrays_2_t7235B7A3A1991F703BB3FE6A3013076D0BE551DB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F UnsafeUtility_ReadArrayElement_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_m5E3D83DD488346447A4245CE053A52BE724FC006_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeKeyValueArrays_2_get_Length_mA21CC4634690B9925CCCB531D34CE6D67A476869_gshared (NativeKeyValueArrays_2_t912256E0B2B816732608B1EF2A523DF7460A144D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 UnsafeUtility_ReadArrayElement_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_m6D870E4CECFBA90EF42A30D63C7DE033CB114308_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeKeyValueArrays_2_get_Length_mD18881E52D3F3167A6CEFA6F6B624D943B8170B2_gshared (NativeKeyValueArrays_2_t4D5C2BB96A9CB2EE83E4CABEA140554B5BB0864E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C UnsafeUtility_ReadArrayElement_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m816C993CFFAA9033A70BF90060F042E40FF9D30F_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_TisComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_m68C69F41AEB20CEA359CE36058B8D50A28F4286C_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_m41D379FDF7D470E449CC51CE4A7F7489EF31975B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_gshared (uint8_t* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_mEDAC4BAC7832C6D910AF5CB9FC27A3B169C0C5E4_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_mA4948C751919FFE98A0E0CF15D66E11F834B3B5E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m05E5D37E1521682851F6EFB198EFD9722CC679CA_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m646C62C603DCDC8A0657DC17C4D6B9AA497B4124_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m4AE5AE7BD76144FF987297E65AF2CE1F27557E4A_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB38F58AA8E579100FD36CC7DC7A7B41CFF4CA109_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mACBFD987F5F210997F8F84C621594C803FC16079_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m148AD5A3CDF22C9E840937DB84A071EE8D7D43BC_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_mBC8079E5C7FD0050043935B4BECCE50B83B1AFE8_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD412AAC6AA3EC2F9B2200873436D4386786DD49F_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisTransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D_m58B02888476CE926C1BB9C65751EBFE2403F99B2_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m8BC8F36B4E478A293D4547101BA1084F29AA8023_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m5F9E7E27B9C12648FBB4D23C4F71F738ABB36E89_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m5670C67DD7D8A7C88926DCCE4C0923DE74450A75_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisLoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02_m63EA0289108145E80F681F5464F52FDF73B0B87A_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m800C33D5424E202FD6BDBF8CBD60A8B494E98613_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m049D230B2FE70C986A0A24DB16A9CB5E0E9A162D_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7_mFAFE53626A3A356CCB1BDB3D261E1DC6E00D706D_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m911EED6D3DCE09D658BE028599F08F4CC8F3E448_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_m3E147B062DB77D246D54FFDF5E620BEB3D351DDC_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mBE98669184036D649666C557354937FDF64DC147_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m81ABEA4AF3E59B6D1F940D69382166832E43750C_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisIntPtr_t_m9B5D8042853B8742FFE5019C81F1F8B04DF3399D_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisPrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751_m8D7443BED9783DA4DFB7B70481E65DD0951B4C81_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA_mC63327E91B0A7B508F864689E34A2A662D7DB203_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) ;

inline int32_t UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB_m123857F85C9BFD317BC4CB88F03DB057AC7A8CC0_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB_m123857F85C9BFD317BC4CB88F03DB057AC7A8CC0_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F (int32_t ___0_size, int32_t ___1_alignmentPowerOfTwo, const RuntimeMethod* method) ;
inline int32_t UnsafeUtility_SizeOf_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5B2EBCF5A7515312D5BBDA1CC5ACDA8C99F14E18_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5B2EBCF5A7515312D5BBDA1CC5ACDA8C99F14E18_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m177EBEBF64B94FE192C8268AE6BCB9A563047C3C_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m177EBEBF64B94FE192C8268AE6BCB9A563047C3C_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_mAEF65C486D008558F825C99D85F94551E317B4DF_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_mAEF65C486D008558F825C99D85F94551E317B4DF_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisTransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D_m245C9FB0E7B630F5AF8620DE958B68FBBDC95869_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisTransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D_m245C9FB0E7B630F5AF8620DE958B68FBBDC95869_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_mFBB919BDCE8F3E9F6BB1AC9F036200F466C8E9C4_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_mFBB919BDCE8F3E9F6BB1AC9F036200F466C8E9C4_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisLoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02_m3714C1DA541A15F113193B5BF9F03A517ACBDB4B_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisLoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02_m3714C1DA541A15F113193B5BF9F03A517ACBDB4B_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m13EA6511CCA01250CAC338855AA7112292ED6036_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m13EA6511CCA01250CAC338855AA7112292ED6036_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_mCCA70DE9EA8F3019FD79181A059D31A972311F9C_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_mCCA70DE9EA8F3019FD79181A059D31A972311F9C_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m348D66015CD9DE899E1D629A356A294625A89A79_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m348D66015CD9DE899E1D629A356A294625A89A79_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisBakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7_m16FBAAF488B6E3E8831365EAB7705A217F2165C9_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisBakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7_m16FBAAF488B6E3E8831365EAB7705A217F2165C9_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_mA948765B976CB1DE8317E063360E4499B0CB181A_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_mA948765B976CB1DE8317E063360E4499B0CB181A_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisIntPtr_t_mB2B3CFF1CB804C99734D4E2F5D8A8C9DB0D209A8_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisIntPtr_t_mB2B3CFF1CB804C99734D4E2F5D8A8C9DB0D209A8_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisPrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751_m2A318CAE585381E20EF83FF7EAEAD2985A6FB24B_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisPrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751_m2A318CAE585381E20EF83FF7EAEAD2985A6FB24B_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA_m93035A7083808061FAA0D61522FCA975B96795F6_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA_m93035A7083808061FAA0D61522FCA975B96795F6_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisGetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE_mC146FD0788F8D27183DC5FA217D150CE5D960E16_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisGetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE_mC146FD0788F8D27183DC5FA217D150CE5D960E16_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisGetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E_m2DC52F60E47C91615A7762CCF1A73975D5373C69_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisGetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E_m2DC52F60E47C91615A7762CCF1A73975D5373C69_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisGetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B_m516C020555EAA24A34E4311591A9B0BF19B2453E_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisGetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B_m516C020555EAA24A34E4311591A9B0BF19B2453E_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisGetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452_mA4E7079D860F20A8439F8086A5F904E85A4A144B_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisGetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452_mA4E7079D860F20A8439F8086A5F904E85A4A144B_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34_m98F077078302520C47A901B213035CAF245718F7_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34_m98F077078302520C47A901B213035CAF245718F7_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C_m655A8584504C2BD5F6ED039239E9033A755EA38F_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C_m655A8584504C2BD5F6ED039239E9033A755EA38F_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA_m62C21F6694C03D4856CBC824244CCA52047910C5_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA_m62C21F6694C03D4856CBC824244CCA52047910C5_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisEntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055_mEA5F8818A2E31AE8B3A843472D2A46C0E40EA242_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisEntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055_mEA5F8818A2E31AE8B3A843472D2A46C0E40EA242_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisComponentData_t2CB40CF3C2FA75B9CA5D8292DCFA8BF12A42DB07_m5E1A500CD4A47B175B43B8F5D981FCD1B68A624F_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisComponentData_t2CB40CF3C2FA75B9CA5D8292DCFA8BF12A42DB07_m5E1A500CD4A47B175B43B8F5D981FCD1B68A624F_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m9712F6405A5D5C4128EAFA7860A222DE388ED6C5_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m9712F6405A5D5C4128EAFA7860A222DE388ED6C5_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mEC9469DBD91362D6135B8F5A81E90486BF328075_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mEC9469DBD91362D6135B8F5A81E90486BF328075_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_mBA8405CA0C1426234043E941C50F8F3C2263305E_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_mBA8405CA0C1426234043E941C50F8F3C2263305E_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5_m6DCB7B2184E8A41AF080D2EE7EBBFC2A693701DD_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5_m6DCB7B2184E8A41AF080D2EE7EBBFC2A693701DD_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6C198B51ACD7B8EC62D5E0E75433C12BE9D65A58_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6C198B51ACD7B8EC62D5E0E75433C12BE9D65A58_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_mCACAE521597CACDD37B73CF9D791E47F2B11D2AB_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_mCACAE521597CACDD37B73CF9D791E47F2B11D2AB_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_mFAA6F9C6A87B112BBD85F22709B4E18563AA5593_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_mFAA6F9C6A87B112BBD85F22709B4E18563AA5593_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_m07CD2CC6AE0C968369AEFFC05481EE370280903F_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_m07CD2CC6AE0C968369AEFFC05481EE370280903F_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_m9A0B080F904D8ED7A7F58A6AD867315894D8BB01_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_m9A0B080F904D8ED7A7F58A6AD867315894D8BB01_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_m04C9CC92295DB84F3F3826B06BA0221DA973FB56_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_m04C9CC92295DB84F3F3826B06BA0221DA973FB56_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_m7966BC0577D20C1E83FA97C815806D75A2D4EB70_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_m7966BC0577D20C1E83FA97C815806D75A2D4EB70_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m1F87695ED302C16C36379DF4FF11644369D02D75_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m1F87695ED302C16C36379DF4FF11644369D02D75_gshared_inline)(method);
}
inline AspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50 UnsafeUtility_ReadArrayElement_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_m42C27C99C832082CC850074116836AD6C7951F4F_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  AspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_m42C27C99C832082CC850074116836AD6C7951F4F_gshared_inline)(___0_source, ___1_index, method);
}
inline BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 UnsafeUtility_ReadArrayElement_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_m11F042F9F93240F4EC774AB70400B604FB52EACF_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_m11F042F9F93240F4EC774AB70400B604FB52EACF_gshared_inline)(___0_source, ___1_index, method);
}
inline ComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D UnsafeUtility_ReadArrayElement_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_mC0855E940EDA880F3AC7284411BE4E8ED52CA780_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  ComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_mC0855E940EDA880F3AC7284411BE4E8ED52CA780_gshared_inline)(___0_source, ___1_index, method);
}
inline ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA UnsafeUtility_ReadArrayElement_TisComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_mE975124B2DB09771E16EABF7A001A4619D5F6768_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_mE975124B2DB09771E16EABF7A001A4619D5F6768_gshared_inline)(___0_source, ___1_index, method);
}
inline ComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB UnsafeUtility_ReadArrayElement_TisComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB_mF1DA179FEC24B2BD7741BBE13FC22FA26604FBB9_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  ComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB_mF1DA179FEC24B2BD7741BBE13FC22FA26604FBB9_gshared_inline)(___0_source, ___1_index, method);
}
inline Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD UnsafeUtility_ReadArrayElement_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m64F6C7E9916D768E9365F442F252409EECA0CE9C_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m64F6C7E9916D768E9365F442F252409EECA0CE9C_gshared_inline)(___0_source, ___1_index, method);
}
inline EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 UnsafeUtility_ReadArrayElement_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_mBA7BC7F5CDE7522066ADEB4389DB7FDE05392F39_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_mBA7BC7F5CDE7522066ADEB4389DB7FDE05392F39_gshared_inline)(___0_source, ___1_index, method);
}
inline EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 UnsafeUtility_ReadArrayElement_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_mB198FB4671ADE00B3ADE86BC40D6ABD19AE8C07B_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_mB198FB4671ADE00B3ADE86BC40D6ABD19AE8C07B_gshared_inline)(___0_source, ___1_index, method);
}
inline Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B UnsafeUtility_ReadArrayElement_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_mCCED167A2D047452D014A45173D1FDB05928928C_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_mCCED167A2D047452D014A45173D1FDB05928928C_gshared_inline)(___0_source, ___1_index, method);
}
inline int32_t UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  int32_t (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_gshared_inline)(___0_source, ___1_index, method);
}
inline int64_t UnsafeUtility_ReadArrayElement_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m51BA37651B60ACB0F4F6867E07AB0C3E0046FC9C_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  int64_t (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m51BA37651B60ACB0F4F6867E07AB0C3E0046FC9C_gshared_inline)(___0_source, ___1_index, method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C UnsafeUtility_ReadArrayElement_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m055B0246613F21DF105592E21674EE77285875DC_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m055B0246613F21DF105592E21674EE77285875DC_gshared_inline)(___0_source, ___1_index, method);
}
inline uint64_t UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  uint64_t (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_gshared_inline)(___0_source, ___1_index, method);
}
inline UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A UnsafeUtility_ReadArrayElement_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m7ACC04D18A4EC85ECFB185A88B79EB26AD1DACB1_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m7ACC04D18A4EC85ECFB185A88B79EB26AD1DACB1_gshared_inline)(___0_source, ___1_index, method);
}
inline EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D UnsafeUtility_ReadArrayElement_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_mC6063FB4A2E79E711911A585DB8C2A0F994A4923_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_mC6063FB4A2E79E711911A585DB8C2A0F994A4923_gshared_inline)(___0_source, ___1_index, method);
}
inline EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD UnsafeUtility_ReadArrayElement_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_m79A11EC661A750655C4DB523B26452DE76DBDAA8_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_m79A11EC661A750655C4DB523B26452DE76DBDAA8_gshared_inline)(___0_source, ___1_index, method);
}
inline int32_t NativeKeyValueArrays_2_get_Length_m05D9B229D47593D2B403CD94777A1A38ADD22CC2 (NativeKeyValueArrays_2_tA0478175575F8E90E221672CD5CCA63FDA106E79* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeKeyValueArrays_2_tA0478175575F8E90E221672CD5CCA63FDA106E79*, const RuntimeMethod*))NativeKeyValueArrays_2_get_Length_m05D9B229D47593D2B403CD94777A1A38ADD22CC2_gshared)(__this, method);
}
inline int32_t NativeKeyValueArrays_2_get_Length_mE13C3C70EDD1B0001EEE17B99E71C537CC117841 (NativeKeyValueArrays_2_t86D5872EA22D11EA0F7F6720038C1D3C7B3626F7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeKeyValueArrays_2_t86D5872EA22D11EA0F7F6720038C1D3C7B3626F7*, const RuntimeMethod*))NativeKeyValueArrays_2_get_Length_mE13C3C70EDD1B0001EEE17B99E71C537CC117841_gshared)(__this, method);
}
inline int32_t NativeKeyValueArrays_2_get_Length_m9BA7505B51895C93D41E1082DAEB10A749837217 (NativeKeyValueArrays_2_tF6AC51744C9F84B17DF17BA5A84D8AAFBD5CE5B1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeKeyValueArrays_2_tF6AC51744C9F84B17DF17BA5A84D8AAFBD5CE5B1*, const RuntimeMethod*))NativeKeyValueArrays_2_get_Length_m9BA7505B51895C93D41E1082DAEB10A749837217_gshared)(__this, method);
}
inline int32_t NativeKeyValueArrays_2_get_Length_m495FB642ECEE7F51F4E001D31866ECC1F96842D2 (NativeKeyValueArrays_2_tD7D7B26C1DC876823B7FD795B6145264E5FEAFE2* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeKeyValueArrays_2_tD7D7B26C1DC876823B7FD795B6145264E5FEAFE2*, const RuntimeMethod*))NativeKeyValueArrays_2_get_Length_m495FB642ECEE7F51F4E001D31866ECC1F96842D2_gshared)(__this, method);
}
inline int32_t NativeKeyValueArrays_2_get_Length_mC7C7C549E526B3043D3B89C47901CC0304691AA0 (NativeKeyValueArrays_2_tC2B57424F4454FB7290A62F13E6B400E0DA21334* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeKeyValueArrays_2_tC2B57424F4454FB7290A62F13E6B400E0DA21334*, const RuntimeMethod*))NativeKeyValueArrays_2_get_Length_mC7C7C549E526B3043D3B89C47901CC0304691AA0_gshared)(__this, method);
}
inline bool UnsafeUtility_ReadArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF765CB2E5FD631DFB79C25DE656F3C1BB359B995_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  bool (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF765CB2E5FD631DFB79C25DE656F3C1BB359B995_gshared_inline)(___0_source, ___1_index, method);
}
inline int32_t NativeKeyValueArrays_2_get_Length_mA0998712AA1F29881732CA75431347B1BE5AF037 (NativeKeyValueArrays_2_t2C905AB91A46E53E95EA0AF42625DD6CD969A04F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeKeyValueArrays_2_t2C905AB91A46E53E95EA0AF42625DD6CD969A04F*, const RuntimeMethod*))NativeKeyValueArrays_2_get_Length_mA0998712AA1F29881732CA75431347B1BE5AF037_gshared)(__this, method);
}
inline int32_t NativeKeyValueArrays_2_get_Length_mCA82A46E1937A92353E58CABB432A276DD87A7F8 (NativeKeyValueArrays_2_t9FFDDD66BB13315DEE458F90CE39BDA25EA48F7F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeKeyValueArrays_2_t9FFDDD66BB13315DEE458F90CE39BDA25EA48F7F*, const RuntimeMethod*))NativeKeyValueArrays_2_get_Length_mCA82A46E1937A92353E58CABB432A276DD87A7F8_gshared)(__this, method);
}
inline int32_t NativeKeyValueArrays_2_get_Length_m46091EB35CE64DFA9BD3F625AEB8FCBC0DEF9DF1 (NativeKeyValueArrays_2_tB1B5782125283D58CDF246CFA314EF62210B2666* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeKeyValueArrays_2_tB1B5782125283D58CDF246CFA314EF62210B2666*, const RuntimeMethod*))NativeKeyValueArrays_2_get_Length_m46091EB35CE64DFA9BD3F625AEB8FCBC0DEF9DF1_gshared)(__this, method);
}
inline int32_t NativeKeyValueArrays_2_get_Length_m05805DDA2F8695E9D5EFDE5AA2200FDB34EE392F (NativeKeyValueArrays_2_t98F568D75F1A22839640268F8BFE69F61FEA76DD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeKeyValueArrays_2_t98F568D75F1A22839640268F8BFE69F61FEA76DD*, const RuntimeMethod*))NativeKeyValueArrays_2_get_Length_m05805DDA2F8695E9D5EFDE5AA2200FDB34EE392F_gshared)(__this, method);
}
inline int32_t NativeKeyValueArrays_2_get_Length_m613798F3D8C4EC9F073CAF27BE9B9DE9D30256ED (NativeKeyValueArrays_2_t22F01DB4B942949A985F28EA3B38E6BAF0789DA9* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeKeyValueArrays_2_t22F01DB4B942949A985F28EA3B38E6BAF0789DA9*, const RuntimeMethod*))NativeKeyValueArrays_2_get_Length_m613798F3D8C4EC9F073CAF27BE9B9DE9D30256ED_gshared)(__this, method);
}
inline int32_t NativeKeyValueArrays_2_get_Length_mC21E5B9407958D42ABC04DC84542B52EE20DC70D (NativeKeyValueArrays_2_t87518DE2FC929C32E47D25B0F6AC7D33FD0C03BA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeKeyValueArrays_2_t87518DE2FC929C32E47D25B0F6AC7D33FD0C03BA*, const RuntimeMethod*))NativeKeyValueArrays_2_get_Length_mC21E5B9407958D42ABC04DC84542B52EE20DC70D_gshared)(__this, method);
}
inline TransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D UnsafeUtility_ReadArrayElement_TisTransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D_mB3EF85E0F07B6626BEE4350E49F8DD84F7E542CE_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  TransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisTransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D_mB3EF85E0F07B6626BEE4350E49F8DD84F7E542CE_gshared_inline)(___0_source, ___1_index, method);
}
inline int32_t NativeKeyValueArrays_2_get_Length_m1138B095A8D78952B634C3A662FC49310C967090 (NativeKeyValueArrays_2_tD199381B902103D09FB939A335F9BD66DA2014C0* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeKeyValueArrays_2_tD199381B902103D09FB939A335F9BD66DA2014C0*, const RuntimeMethod*))NativeKeyValueArrays_2_get_Length_m1138B095A8D78952B634C3A662FC49310C967090_gshared)(__this, method);
}
inline int32_t NativeKeyValueArrays_2_get_Length_m451F1B5827087B6A6950AF3B6F00423341B88B06 (NativeKeyValueArrays_2_tB81A44AC7376B6616DD5463E124B6399CFD2E185* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeKeyValueArrays_2_tB81A44AC7376B6616DD5463E124B6399CFD2E185*, const RuntimeMethod*))NativeKeyValueArrays_2_get_Length_m451F1B5827087B6A6950AF3B6F00423341B88B06_gshared)(__this, method);
}
inline int32_t NativeKeyValueArrays_2_get_Length_m5172D3D1819BA96C0B58B63ADDE03A3E4018DADC (NativeKeyValueArrays_2_t1E36B8FF514E5E705ECE6E650667B65A10DF69B7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeKeyValueArrays_2_t1E36B8FF514E5E705ECE6E650667B65A10DF69B7*, const RuntimeMethod*))NativeKeyValueArrays_2_get_Length_m5172D3D1819BA96C0B58B63ADDE03A3E4018DADC_gshared)(__this, method);
}
inline int32_t NativeKeyValueArrays_2_get_Length_mC54D48A3F6856A67CA6836D26BBBA75665363F63 (NativeKeyValueArrays_2_t6C9C627B2477A580341CA92BE887CC20A42F0E1F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeKeyValueArrays_2_t6C9C627B2477A580341CA92BE887CC20A42F0E1F*, const RuntimeMethod*))NativeKeyValueArrays_2_get_Length_mC54D48A3F6856A67CA6836D26BBBA75665363F63_gshared)(__this, method);
}
inline LoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02 UnsafeUtility_ReadArrayElement_TisLoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02_m836F60A4A610F7AD228932364B2855D5CBBE1D65_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  LoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisLoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02_m836F60A4A610F7AD228932364B2855D5CBBE1D65_gshared_inline)(___0_source, ___1_index, method);
}
inline int32_t NativeKeyValueArrays_2_get_Length_m820E5F0733CA9D7FC2C9A75CCEBC82D1D50F895A (NativeKeyValueArrays_2_tC094DB3C313976D17B8AC588F92A837CF47DA399* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeKeyValueArrays_2_tC094DB3C313976D17B8AC588F92A837CF47DA399*, const RuntimeMethod*))NativeKeyValueArrays_2_get_Length_m820E5F0733CA9D7FC2C9A75CCEBC82D1D50F895A_gshared)(__this, method);
}
inline BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 UnsafeUtility_ReadArrayElement_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m09665718EFC7893CDD26DCB1B3EC90D4E46D7A98_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m09665718EFC7893CDD26DCB1B3EC90D4E46D7A98_gshared_inline)(___0_source, ___1_index, method);
}
inline int32_t NativeKeyValueArrays_2_get_Length_m317613DFCE6B8039E1B78E23381B64CE62601D52 (NativeKeyValueArrays_2_tDA5D49BE0E131EDFC15BE935D00B3A4A9A51B717* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeKeyValueArrays_2_tDA5D49BE0E131EDFC15BE935D00B3A4A9A51B717*, const RuntimeMethod*))NativeKeyValueArrays_2_get_Length_m317613DFCE6B8039E1B78E23381B64CE62601D52_gshared)(__this, method);
}
inline UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 UnsafeUtility_ReadArrayElement_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m1F1E944526C83C5C50C3BEFA897DB7849C6CF967_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m1F1E944526C83C5C50C3BEFA897DB7849C6CF967_gshared_inline)(___0_source, ___1_index, method);
}
inline int32_t NativeKeyValueArrays_2_get_Length_m95541A14A8E3AC08E119596562D6CD32F946F9EA (NativeKeyValueArrays_2_t731594D0E8981996DF4D83C0A703042EAA11CFB5* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeKeyValueArrays_2_t731594D0E8981996DF4D83C0A703042EAA11CFB5*, const RuntimeMethod*))NativeKeyValueArrays_2_get_Length_m95541A14A8E3AC08E119596562D6CD32F946F9EA_gshared)(__this, method);
}
inline BakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7 UnsafeUtility_ReadArrayElement_TisBakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7_m341C66DAFE22D7FF675AB26610BCA44E0E7636AD_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  BakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisBakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7_m341C66DAFE22D7FF675AB26610BCA44E0E7636AD_gshared_inline)(___0_source, ___1_index, method);
}
inline int32_t NativeKeyValueArrays_2_get_Length_m1A966334113393D6D43ED8AC601D32C9301E60EF (NativeKeyValueArrays_2_t23D1126126024D2A72D247CC67B349308AFE9FEF* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeKeyValueArrays_2_t23D1126126024D2A72D247CC67B349308AFE9FEF*, const RuntimeMethod*))NativeKeyValueArrays_2_get_Length_m1A966334113393D6D43ED8AC601D32C9301E60EF_gshared)(__this, method);
}
inline int32_t NativeKeyValueArrays_2_get_Length_m5117265499EED4F8AEE9BB33752AFA20E1094953 (NativeKeyValueArrays_2_t4B0C71F595CA0EACB49D03B78838F9C70C076737* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeKeyValueArrays_2_t4B0C71F595CA0EACB49D03B78838F9C70C076737*, const RuntimeMethod*))NativeKeyValueArrays_2_get_Length_m5117265499EED4F8AEE9BB33752AFA20E1094953_gshared)(__this, method);
}
inline int32_t NativeKeyValueArrays_2_get_Length_mF3869EFB86F15EDCE519D812F5E9BEB9F1081326 (NativeKeyValueArrays_2_t9E3BFE09CCAD0FE46FC0EF2D7D2D5560D399B8FC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeKeyValueArrays_2_t9E3BFE09CCAD0FE46FC0EF2D7D2D5560D399B8FC*, const RuntimeMethod*))NativeKeyValueArrays_2_get_Length_mF3869EFB86F15EDCE519D812F5E9BEB9F1081326_gshared)(__this, method);
}
inline int32_t NativeKeyValueArrays_2_get_Length_m0E87F558427CED97F501D4AB4A5F0A78A2B39723 (NativeKeyValueArrays_2_tF51A55D75DBB6D766D8D5B99DC29C3762BA12496* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeKeyValueArrays_2_tF51A55D75DBB6D766D8D5B99DC29C3762BA12496*, const RuntimeMethod*))NativeKeyValueArrays_2_get_Length_m0E87F558427CED97F501D4AB4A5F0A78A2B39723_gshared)(__this, method);
}
inline int32_t NativeKeyValueArrays_2_get_Length_mFD5F1BE602F8331DFB26E2EB01E82B952DB4FE05 (NativeKeyValueArrays_2_tC8438418001C0D25F0B470D81DEA3F00CC44D794* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeKeyValueArrays_2_tC8438418001C0D25F0B470D81DEA3F00CC44D794*, const RuntimeMethod*))NativeKeyValueArrays_2_get_Length_mFD5F1BE602F8331DFB26E2EB01E82B952DB4FE05_gshared)(__this, method);
}
inline intptr_t UnsafeUtility_ReadArrayElement_TisIntPtr_t_m1AB5DE7A4962B63822FF70AF37E0BADC77C4AE23_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisIntPtr_t_m1AB5DE7A4962B63822FF70AF37E0BADC77C4AE23_gshared_inline)(___0_source, ___1_index, method);
}
inline int32_t NativeKeyValueArrays_2_get_Length_m83A41EFAEEC4859BDC330B270B652E49E94B9BD9 (NativeKeyValueArrays_2_tE089B2CF32C8D676FFA23BFB15FA3132B07265AA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeKeyValueArrays_2_tE089B2CF32C8D676FFA23BFB15FA3132B07265AA*, const RuntimeMethod*))NativeKeyValueArrays_2_get_Length_m83A41EFAEEC4859BDC330B270B652E49E94B9BD9_gshared)(__this, method);
}
inline PrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751 UnsafeUtility_ReadArrayElement_TisPrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751_m956BFBA7E125ECF42542E6A2ABAC0DD7059B8A10_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  PrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisPrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751_m956BFBA7E125ECF42542E6A2ABAC0DD7059B8A10_gshared_inline)(___0_source, ___1_index, method);
}
inline int32_t NativeKeyValueArrays_2_get_Length_mA62E75DBCBA7090A0B616D1D1D5DF242C65D95DE (NativeKeyValueArrays_2_t3A04C7F6B555B87B533DF74A36E114FACE5CBA39* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeKeyValueArrays_2_t3A04C7F6B555B87B533DF74A36E114FACE5CBA39*, const RuntimeMethod*))NativeKeyValueArrays_2_get_Length_mA62E75DBCBA7090A0B616D1D1D5DF242C65D95DE_gshared)(__this, method);
}
inline ActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA UnsafeUtility_ReadArrayElement_TisActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA_m50C716C28EF2FACA3FD6ECDE4C2290D6ECB07A61_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  ActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA_m50C716C28EF2FACA3FD6ECDE4C2290D6ECB07A61_gshared_inline)(___0_source, ___1_index, method);
}
inline int32_t NativeKeyValueArrays_2_get_Length_m3B9B3517740F922CA07A888EF76E142771C81CE9 (NativeKeyValueArrays_2_tBB4958A4F575A3B683B79EC659B9A4384AC1B0A0* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeKeyValueArrays_2_tBB4958A4F575A3B683B79EC659B9A4384AC1B0A0*, const RuntimeMethod*))NativeKeyValueArrays_2_get_Length_m3B9B3517740F922CA07A888EF76E142771C81CE9_gshared)(__this, method);
}
inline GetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE UnsafeUtility_ReadArrayElement_TisGetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE_m4E9D75DDD928F74FFDA7A6339190E37A04AA1BAA_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  GetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisGetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE_m4E9D75DDD928F74FFDA7A6339190E37A04AA1BAA_gshared_inline)(___0_source, ___1_index, method);
}
inline int32_t NativeKeyValueArrays_2_get_Length_m64D10B0D60568E5668C7D3ECD063F207187D5299 (NativeKeyValueArrays_2_t0F0CB9299634FFC07DF20FC3A2DC23F822BC70EB* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeKeyValueArrays_2_t0F0CB9299634FFC07DF20FC3A2DC23F822BC70EB*, const RuntimeMethod*))NativeKeyValueArrays_2_get_Length_m64D10B0D60568E5668C7D3ECD063F207187D5299_gshared)(__this, method);
}
inline GetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E UnsafeUtility_ReadArrayElement_TisGetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E_m240057E500574E311F64D761C1B0E81D48539B71_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  GetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisGetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E_m240057E500574E311F64D761C1B0E81D48539B71_gshared_inline)(___0_source, ___1_index, method);
}
inline int32_t NativeKeyValueArrays_2_get_Length_mFC6DAF8791E05BFB36FF92846C18DA38096E73AB (NativeKeyValueArrays_2_tFEC11AACA23329D851705107DFA75B5C866D07DD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeKeyValueArrays_2_tFEC11AACA23329D851705107DFA75B5C866D07DD*, const RuntimeMethod*))NativeKeyValueArrays_2_get_Length_mFC6DAF8791E05BFB36FF92846C18DA38096E73AB_gshared)(__this, method);
}
inline GetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B UnsafeUtility_ReadArrayElement_TisGetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B_mE31D1DD2E82C423B35C73B7F1E8D557C2DBC75C5_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  GetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisGetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B_mE31D1DD2E82C423B35C73B7F1E8D557C2DBC75C5_gshared_inline)(___0_source, ___1_index, method);
}
inline int32_t NativeKeyValueArrays_2_get_Length_mFA42919E15D635677DDFA39A1BDAE0F56EB49851 (NativeKeyValueArrays_2_t4FE7B11671FA19285E9048F0883AC15398C7782E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeKeyValueArrays_2_t4FE7B11671FA19285E9048F0883AC15398C7782E*, const RuntimeMethod*))NativeKeyValueArrays_2_get_Length_mFA42919E15D635677DDFA39A1BDAE0F56EB49851_gshared)(__this, method);
}
inline GetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452 UnsafeUtility_ReadArrayElement_TisGetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452_m4E35AE63F5292F45C4B7D57F293CAB353B3768BC_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  GetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisGetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452_m4E35AE63F5292F45C4B7D57F293CAB353B3768BC_gshared_inline)(___0_source, ___1_index, method);
}
inline int32_t NativeKeyValueArrays_2_get_Length_m030F70E126876CBE26E8FEF0E6EF38ED9A75736F (NativeKeyValueArrays_2_t16C9442D67CF86F51A20A8D693E40C37732C39FD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeKeyValueArrays_2_t16C9442D67CF86F51A20A8D693E40C37732C39FD*, const RuntimeMethod*))NativeKeyValueArrays_2_get_Length_m030F70E126876CBE26E8FEF0E6EF38ED9A75736F_gshared)(__this, method);
}
inline ObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34 UnsafeUtility_ReadArrayElement_TisObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34_m68422EC542A6BB6DBE519B2416180FA28AFB543E_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  ObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34_m68422EC542A6BB6DBE519B2416180FA28AFB543E_gshared_inline)(___0_source, ___1_index, method);
}
inline int32_t NativeKeyValueArrays_2_get_Length_mE629BCA827E7AA677B1D9FB7B7DB16CDDAC8C344 (NativeKeyValueArrays_2_t5EC162EAD8E8641004E4F13DF7DBF2280AF902A2* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeKeyValueArrays_2_t5EC162EAD8E8641004E4F13DF7DBF2280AF902A2*, const RuntimeMethod*))NativeKeyValueArrays_2_get_Length_mE629BCA827E7AA677B1D9FB7B7DB16CDDAC8C344_gshared)(__this, method);
}
inline ObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C UnsafeUtility_ReadArrayElement_TisObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C_mAA82F9B921463BA85338F4F6907EB371C99E2C0D_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  ObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C_mAA82F9B921463BA85338F4F6907EB371C99E2C0D_gshared_inline)(___0_source, ___1_index, method);
}
inline int32_t NativeKeyValueArrays_2_get_Length_m60290E6C2C59BCDAAEDE59C4A17E810A115094C8 (NativeKeyValueArrays_2_t2389916BD217390646B9F69E3C25C927EC24C8C5* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeKeyValueArrays_2_t2389916BD217390646B9F69E3C25C927EC24C8C5*, const RuntimeMethod*))NativeKeyValueArrays_2_get_Length_m60290E6C2C59BCDAAEDE59C4A17E810A115094C8_gshared)(__this, method);
}
inline ObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA UnsafeUtility_ReadArrayElement_TisObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA_mE3F1AB969DB8BDB1A3E3E15E2414CF6A0B1699F1_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  ObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA_mE3F1AB969DB8BDB1A3E3E15E2414CF6A0B1699F1_gshared_inline)(___0_source, ___1_index, method);
}
inline int32_t NativeKeyValueArrays_2_get_Length_mD623D28B39FEBC023DB6E913E278D6C24E5E0484 (NativeKeyValueArrays_2_t0C13E910C47B0A7473E7F898AC6F4E8EBDF74E2D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeKeyValueArrays_2_t0C13E910C47B0A7473E7F898AC6F4E8EBDF74E2D*, const RuntimeMethod*))NativeKeyValueArrays_2_get_Length_mD623D28B39FEBC023DB6E913E278D6C24E5E0484_gshared)(__this, method);
}
inline EntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055 UnsafeUtility_ReadArrayElement_TisEntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055_m269B2EB28C9E6370F7CF1D48917001A93ECA1836_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  EntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisEntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055_m269B2EB28C9E6370F7CF1D48917001A93ECA1836_gshared_inline)(___0_source, ___1_index, method);
}
inline int32_t NativeKeyValueArrays_2_get_Length_mCAD59B1D1DD695B07CE48BF99C79A4EFE32B9F55 (NativeKeyValueArrays_2_t14A3222AEBA0B33AC8ECC6AFC67D1AEC702FCEA0* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeKeyValueArrays_2_t14A3222AEBA0B33AC8ECC6AFC67D1AEC702FCEA0*, const RuntimeMethod*))NativeKeyValueArrays_2_get_Length_mCAD59B1D1DD695B07CE48BF99C79A4EFE32B9F55_gshared)(__this, method);
}
inline ComponentData_t2CB40CF3C2FA75B9CA5D8292DCFA8BF12A42DB07 UnsafeUtility_ReadArrayElement_TisComponentData_t2CB40CF3C2FA75B9CA5D8292DCFA8BF12A42DB07_m4CC70D46AE7357ECAF9520C12226902E43D8FBFE_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  ComponentData_t2CB40CF3C2FA75B9CA5D8292DCFA8BF12A42DB07 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisComponentData_t2CB40CF3C2FA75B9CA5D8292DCFA8BF12A42DB07_m4CC70D46AE7357ECAF9520C12226902E43D8FBFE_gshared_inline)(___0_source, ___1_index, method);
}
inline int32_t NativeKeyValueArrays_2_get_Length_m1C734549753B4EFDB05BDB2F1C07D18BA74043CC (NativeKeyValueArrays_2_tE7681378AD7ED1422B03DA33DAB7098382465DAC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeKeyValueArrays_2_tE7681378AD7ED1422B03DA33DAB7098382465DAC*, const RuntimeMethod*))NativeKeyValueArrays_2_get_Length_m1C734549753B4EFDB05BDB2F1C07D18BA74043CC_gshared)(__this, method);
}
inline int32_t NativeKeyValueArrays_2_get_Length_mBCAFA8BE0F5E32A0D711B91FBC539249B2C8E999 (NativeKeyValueArrays_2_tC3CAC4DC3C46A0ABF7095E38B7C3174457AE9C15* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeKeyValueArrays_2_tC3CAC4DC3C46A0ABF7095E38B7C3174457AE9C15*, const RuntimeMethod*))NativeKeyValueArrays_2_get_Length_mBCAFA8BE0F5E32A0D711B91FBC539249B2C8E999_gshared)(__this, method);
}
inline uint16_t UnsafeUtility_ReadArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mDA4F2F1FC33E2F2F8CC3E761D626E638762C61E4_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  uint16_t (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mDA4F2F1FC33E2F2F8CC3E761D626E638762C61E4_gshared_inline)(___0_source, ___1_index, method);
}
inline int32_t NativeKeyValueArrays_2_get_Length_mC33C14BCAAA2AE3FCF3AA84279E9F72EF89BB787 (NativeKeyValueArrays_2_t03B2A649B6C6254E87723CC3476AAA77A67F80E8* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeKeyValueArrays_2_t03B2A649B6C6254E87723CC3476AAA77A67F80E8*, const RuntimeMethod*))NativeKeyValueArrays_2_get_Length_mC33C14BCAAA2AE3FCF3AA84279E9F72EF89BB787_gshared)(__this, method);
}
inline int32_t NativeKeyValueArrays_2_get_Length_m348AB8708CCF25D42F40A4C71A742F9FB4B34290 (NativeKeyValueArrays_2_t74AE1A8D286C3E322E4B45390EBD1415AF19ACF3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeKeyValueArrays_2_t74AE1A8D286C3E322E4B45390EBD1415AF19ACF3*, const RuntimeMethod*))NativeKeyValueArrays_2_get_Length_m348AB8708CCF25D42F40A4C71A742F9FB4B34290_gshared)(__this, method);
}
inline ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 UnsafeUtility_ReadArrayElement_TisArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5_m331C4C63F372510AD14D346567E6B3877853D8BD_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5_m331C4C63F372510AD14D346567E6B3877853D8BD_gshared_inline)(___0_source, ___1_index, method);
}
inline int32_t NativeKeyValueArrays_2_get_Length_m8B69EAC631CAA45EE78A8206EB2E474AB0A3F811 (NativeKeyValueArrays_2_tD1C7E4065F58C0A217801C413E38A85A748A0209* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeKeyValueArrays_2_tD1C7E4065F58C0A217801C413E38A85A748A0209*, const RuntimeMethod*))NativeKeyValueArrays_2_get_Length_m8B69EAC631CAA45EE78A8206EB2E474AB0A3F811_gshared)(__this, method);
}
inline int32_t NativeKeyValueArrays_2_get_Length_mCB0173799EBD5C534B32ABB67516A45E7AF119EC (NativeKeyValueArrays_2_t25F4D532D5B122640B6B26B799AD371778FD3BE6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeKeyValueArrays_2_t25F4D532D5B122640B6B26B799AD371778FD3BE6*, const RuntimeMethod*))NativeKeyValueArrays_2_get_Length_mCB0173799EBD5C534B32ABB67516A45E7AF119EC_gshared)(__this, method);
}
inline int32_t NativeKeyValueArrays_2_get_Length_mBF4C7C9649331AB57DD1639E61B58C70AF592BF2 (NativeKeyValueArrays_2_tE1DFCAE6688CDBA80B9114AC4B537B44F7909B05* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeKeyValueArrays_2_tE1DFCAE6688CDBA80B9114AC4B537B44F7909B05*, const RuntimeMethod*))NativeKeyValueArrays_2_get_Length_mBF4C7C9649331AB57DD1639E61B58C70AF592BF2_gshared)(__this, method);
}
inline uint8_t UnsafeUtility_ReadArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m06447B534673E0861DE4F55616DFAF9BD7DCBCC6_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m06447B534673E0861DE4F55616DFAF9BD7DCBCC6_gshared_inline)(___0_source, ___1_index, method);
}
inline int32_t NativeKeyValueArrays_2_get_Length_m6AE2ED0F9FF5634687CF8B2B12CD0C0A6A6B452E (NativeKeyValueArrays_2_tE4F6643B71F37BE972D2EF277D67267DBD9F17B0* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeKeyValueArrays_2_tE4F6643B71F37BE972D2EF277D67267DBD9F17B0*, const RuntimeMethod*))NativeKeyValueArrays_2_get_Length_m6AE2ED0F9FF5634687CF8B2B12CD0C0A6A6B452E_gshared)(__this, method);
}
inline int32_t NativeKeyValueArrays_2_get_Length_m7B1A5FA2795F53C669F452FB7050575DE5BFFE52 (NativeKeyValueArrays_2_tF2EE05B9ACB01DB385DA087BF4CE92D4CE4BA400* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeKeyValueArrays_2_tF2EE05B9ACB01DB385DA087BF4CE92D4CE4BA400*, const RuntimeMethod*))NativeKeyValueArrays_2_get_Length_m7B1A5FA2795F53C669F452FB7050575DE5BFFE52_gshared)(__this, method);
}
inline int32_t NativeKeyValueArrays_2_get_Length_mF7AC66FA6C9CD9047110D7EEE4276671B7F36AD2 (NativeKeyValueArrays_2_tF0C9DDB602F789F19A16A1FA2EC584D35E067652* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeKeyValueArrays_2_tF0C9DDB602F789F19A16A1FA2EC584D35E067652*, const RuntimeMethod*))NativeKeyValueArrays_2_get_Length_mF7AC66FA6C9CD9047110D7EEE4276671B7F36AD2_gshared)(__this, method);
}
inline int32_t NativeKeyValueArrays_2_get_Length_mA05355BE86679503FF7C80E097C6E5CB89FB314A (NativeKeyValueArrays_2_t7235B7A3A1991F703BB3FE6A3013076D0BE551DB* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeKeyValueArrays_2_t7235B7A3A1991F703BB3FE6A3013076D0BE551DB*, const RuntimeMethod*))NativeKeyValueArrays_2_get_Length_mA05355BE86679503FF7C80E097C6E5CB89FB314A_gshared)(__this, method);
}
inline DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F UnsafeUtility_ReadArrayElement_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_m5E3D83DD488346447A4245CE053A52BE724FC006_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_m5E3D83DD488346447A4245CE053A52BE724FC006_gshared_inline)(___0_source, ___1_index, method);
}
inline int32_t NativeKeyValueArrays_2_get_Length_mA21CC4634690B9925CCCB531D34CE6D67A476869 (NativeKeyValueArrays_2_t912256E0B2B816732608B1EF2A523DF7460A144D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeKeyValueArrays_2_t912256E0B2B816732608B1EF2A523DF7460A144D*, const RuntimeMethod*))NativeKeyValueArrays_2_get_Length_mA21CC4634690B9925CCCB531D34CE6D67A476869_gshared)(__this, method);
}
inline ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 UnsafeUtility_ReadArrayElement_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_m6D870E4CECFBA90EF42A30D63C7DE033CB114308_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_m6D870E4CECFBA90EF42A30D63C7DE033CB114308_gshared_inline)(___0_source, ___1_index, method);
}
inline int32_t NativeKeyValueArrays_2_get_Length_mD18881E52D3F3167A6CEFA6F6B624D943B8170B2 (NativeKeyValueArrays_2_t4D5C2BB96A9CB2EE83E4CABEA140554B5BB0864E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeKeyValueArrays_2_t4D5C2BB96A9CB2EE83E4CABEA140554B5BB0864E*, const RuntimeMethod*))NativeKeyValueArrays_2_get_Length_mD18881E52D3F3167A6CEFA6F6B624D943B8170B2_gshared)(__this, method);
}
inline ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C UnsafeUtility_ReadArrayElement_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m816C993CFFAA9033A70BF90060F042E40FF9D30F_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m816C993CFFAA9033A70BF90060F042E40FF9D30F_gshared_inline)(___0_source, ___1_index, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_ceilpow2_mA00505409975D36AB3D7658687AC3BD5A26F3769_inline (int32_t ___0_x, const RuntimeMethod* method) ;
inline int32_t UnsafeParallelHashMapData_CalculateDataSize_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_TisComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_m68C69F41AEB20CEA359CE36058B8D50A28F4286C (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, int32_t, int32_t*, int32_t*, int32_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_TisComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_m68C69F41AEB20CEA359CE36058B8D50A28F4286C_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5 (int64_t ___0_size, int32_t ___1_align, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, const RuntimeMethod* method) ;
inline int32_t UnsafeUtility_SizeOf_TisComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_m41D379FDF7D470E449CC51CE4A7F7489EF31975B_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_m41D379FDF7D470E449CC51CE4A7F7489EF31975B_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177 (void* ___0_destination, void* ___1_source, int64_t ___2_size, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AspectType_GetHashCode_m86EDAB33742A358767EB1E6D5791A16B6DDF7355 (AspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50* __this, const RuntimeMethod* method) ;
inline void Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271 (uint8_t* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method)
{
	((  void (*) (uint8_t*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_gshared)(___0_pointer, ___1_allocator, method);
}
inline int32_t UnsafeParallelHashMapData_CalculateDataSize_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_mEDAC4BAC7832C6D910AF5CB9FC27A3B169C0C5E4 (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, int32_t, int32_t*, int32_t*, int32_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_mEDAC4BAC7832C6D910AF5CB9FC27A3B169C0C5E4_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int32_t UnsafeUtility_SizeOf_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_mA4948C751919FFE98A0E0CF15D66E11F834B3B5E_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_mA4948C751919FFE98A0E0CF15D66E11F834B3B5E_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BlobAssetPtr_GetHashCode_mBF1AE2A108DE02B14AE8A026BD389380DED08973 (BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61* __this, const RuntimeMethod* method) ;
inline int32_t UnsafeParallelHashMapData_CalculateDataSize_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m05E5D37E1521682851F6EFB198EFD9722CC679CA (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, int32_t, int32_t*, int32_t*, int32_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m05E5D37E1521682851F6EFB198EFD9722CC679CA_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int32_t UnsafeParallelHashMapData_CalculateDataSize_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m646C62C603DCDC8A0657DC17C4D6B9AA497B4124 (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, int32_t, int32_t*, int32_t*, int32_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m646C62C603DCDC8A0657DC17C4D6B9AA497B4124_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ComponentBakeTrigger_GetHashCode_m5FA5B5B239BA98105D49F6BC9A66977340575534 (ComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D* __this, const RuntimeMethod* method) ;
inline int32_t UnsafeParallelHashMapData_CalculateDataSize_TisComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m4AE5AE7BD76144FF987297E65AF2CE1F27557E4A (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, int32_t, int32_t*, int32_t*, int32_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m4AE5AE7BD76144FF987297E65AF2CE1F27557E4A_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ComponentType_GetHashCode_m2150FBB0BC94EC1D3407990BA9CCA08BA634941D (ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA* __this, const RuntimeMethod* method) ;
inline int32_t UnsafeParallelHashMapData_CalculateDataSize_TisComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB38F58AA8E579100FD36CC7DC7A7B41CFF4CA109 (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, int32_t, int32_t*, int32_t*, int32_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB38F58AA8E579100FD36CC7DC7A7B41CFF4CA109_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ComponentTypeHash_GetHashCode_m2BDE47B17E712574DFAEDE8F7A037F5E3C355BE0 (ComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB* __this, const RuntimeMethod* method) ;
inline int32_t UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mACBFD987F5F210997F8F84C621594C803FC16079 (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, int32_t, int32_t*, int32_t*, int32_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mACBFD987F5F210997F8F84C621594C803FC16079_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Entity_GetHashCode_m223ECCF7A7C3F199EF0E53C4F84857FE090A0823_inline (Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* __this, const RuntimeMethod* method) ;
inline int32_t UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m148AD5A3CDF22C9E840937DB84A071EE8D7D43BC (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, int32_t, int32_t*, int32_t*, int32_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m148AD5A3CDF22C9E840937DB84A071EE8D7D43BC_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int32_t UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_mBC8079E5C7FD0050043935B4BECCE50B83B1AFE8 (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, int32_t, int32_t*, int32_t*, int32_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_mBC8079E5C7FD0050043935B4BECCE50B83B1AFE8_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int32_t UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD412AAC6AA3EC2F9B2200873436D4386786DD49F (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, int32_t, int32_t*, int32_t*, int32_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD412AAC6AA3EC2F9B2200873436D4386786DD49F_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int32_t UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisTransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D_m58B02888476CE926C1BB9C65751EBFE2403F99B2 (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, int32_t, int32_t*, int32_t*, int32_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisTransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D_m58B02888476CE926C1BB9C65751EBFE2403F99B2_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int32_t UnsafeParallelHashMapData_CalculateDataSize_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m8BC8F36B4E478A293D4547101BA1084F29AA8023 (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, int32_t, int32_t*, int32_t*, int32_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m8BC8F36B4E478A293D4547101BA1084F29AA8023_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EntityGuid_GetHashCode_m7A7EC54EB724EC21A02AE19DAD24211FAC9870D4 (EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877* __this, const RuntimeMethod* method) ;
inline int32_t UnsafeParallelHashMapData_CalculateDataSize_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m5F9E7E27B9C12648FBB4D23C4F71F738ABB36E89 (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, int32_t, int32_t*, int32_t*, int32_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m5F9E7E27B9C12648FBB4D23C4F71F738ABB36E89_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int32_t UnsafeParallelHashMapData_CalculateDataSize_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m5670C67DD7D8A7C88926DCCE4C0923DE74450A75 (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, int32_t, int32_t*, int32_t*, int32_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m5670C67DD7D8A7C88926DCCE4C0923DE74450A75_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EntityPrefabReference_GetHashCode_mD196C830580BB8D49D656347EC9DED820440C56A (EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4* __this, const RuntimeMethod* method) ;
inline int32_t UnsafeParallelHashMapData_CalculateDataSize_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisLoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02_m63EA0289108145E80F681F5464F52FDF73B0B87A (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, int32_t, int32_t*, int32_t*, int32_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisLoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02_m63EA0289108145E80F681F5464F52FDF73B0B87A_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int32_t UnsafeParallelHashMapData_CalculateDataSize_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m800C33D5424E202FD6BDBF8CBD60A8B494E98613 (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, int32_t, int32_t*, int32_t*, int32_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m800C33D5424E202FD6BDBF8CBD60A8B494E98613_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Hash128_GetHashCode_m45A3BE3EF733FE381AE45C96F6C53FAEBFE2795B (Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B* __this, const RuntimeMethod* method) ;
inline int32_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m049D230B2FE70C986A0A24DB16A9CB5E0E9A162D (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, int32_t, int32_t*, int32_t*, int32_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m049D230B2FE70C986A0A24DB16A9CB5E0E9A162D_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
inline int32_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7_mFAFE53626A3A356CCB1BDB3D261E1DC6E00D706D (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, int32_t, int32_t*, int32_t*, int32_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7_mFAFE53626A3A356CCB1BDB3D261E1DC6E00D706D_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int32_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m911EED6D3DCE09D658BE028599F08F4CC8F3E448 (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, int32_t, int32_t*, int32_t*, int32_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m911EED6D3DCE09D658BE028599F08F4CC8F3E448_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int32_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_m3E147B062DB77D246D54FFDF5E620BEB3D351DDC (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, int32_t, int32_t*, int32_t*, int32_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_m3E147B062DB77D246D54FFDF5E620BEB3D351DDC_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int32_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mBE98669184036D649666C557354937FDF64DC147 (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, int32_t, int32_t*, int32_t*, int32_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mBE98669184036D649666C557354937FDF64DC147_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int32_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m81ABEA4AF3E59B6D1F940D69382166832E43750C (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, int32_t, int32_t*, int32_t*, int32_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m81ABEA4AF3E59B6D1F940D69382166832E43750C_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int32_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisIntPtr_t_m9B5D8042853B8742FFE5019C81F1F8B04DF3399D (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, int32_t, int32_t*, int32_t*, int32_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisIntPtr_t_m9B5D8042853B8742FFE5019C81F1F8B04DF3399D_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int32_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisPrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751_m8D7443BED9783DA4DFB7B70481E65DD0951B4C81 (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, int32_t, int32_t*, int32_t*, int32_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisPrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751_m8D7443BED9783DA4DFB7B70481E65DD0951B4C81_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int32_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA_mC63327E91B0A7B508F864689E34A2A662D7DB203 (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, int32_t, int32_t*, int32_t*, int32_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA_mC63327E91B0A7B508F864689E34A2A662D7DB203_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB38F58AA8E579100FD36CC7DC7A7B41CFF4CA109_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB_m123857F85C9BFD317BC4CB88F03DB057AC7A8CC0_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		V_1 = L_2;
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_0, L_3)), ((int32_t)64), NULL);
		V_2 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_length;
		int32_t L_7;
		L_7 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_5, L_6)), ((int32_t)64), NULL);
		V_3 = L_7;
		int32_t L_8 = V_1;
		int32_t L_9 = ___0_length;
		int32_t L_10;
		L_10 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_8, L_9)), ((int32_t)64), NULL);
		V_4 = L_10;
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_bucketLength;
		int32_t L_13;
		L_13 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_11, L_12)), ((int32_t)64), NULL);
		V_5 = L_13;
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		int32_t L_16 = V_4;
		int32_t L_17 = V_5;
		int32_t* L_18 = ___2_keyOffset;
		int32_t L_19 = V_2;
		*((int32_t*)L_18) = (int32_t)L_19;
		int32_t* L_20 = ___3_nextOffset;
		int32_t* L_21 = ___2_keyOffset;
		int32_t L_22 = *((int32_t*)L_21);
		int32_t L_23 = V_3;
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_22, L_23));
		int32_t* L_24 = ___4_bucketOffset;
		int32_t* L_25 = ___3_nextOffset;
		int32_t L_26 = *((int32_t*)L_25);
		int32_t L_27 = V_4;
		*((int32_t*)L_24) = (int32_t)((int32_t)il2cpp_codegen_add(L_26, L_27));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_14, L_15)), L_16)), L_17));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mACBFD987F5F210997F8F84C621594C803FC16079_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5B2EBCF5A7515312D5BBDA1CC5ACDA8C99F14E18_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m177EBEBF64B94FE192C8268AE6BCB9A563047C3C_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		V_1 = L_2;
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_0, L_3)), ((int32_t)64), NULL);
		V_2 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_length;
		int32_t L_7;
		L_7 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_5, L_6)), ((int32_t)64), NULL);
		V_3 = L_7;
		int32_t L_8 = V_1;
		int32_t L_9 = ___0_length;
		int32_t L_10;
		L_10 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_8, L_9)), ((int32_t)64), NULL);
		V_4 = L_10;
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_bucketLength;
		int32_t L_13;
		L_13 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_11, L_12)), ((int32_t)64), NULL);
		V_5 = L_13;
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		int32_t L_16 = V_4;
		int32_t L_17 = V_5;
		int32_t* L_18 = ___2_keyOffset;
		int32_t L_19 = V_2;
		*((int32_t*)L_18) = (int32_t)L_19;
		int32_t* L_20 = ___3_nextOffset;
		int32_t* L_21 = ___2_keyOffset;
		int32_t L_22 = *((int32_t*)L_21);
		int32_t L_23 = V_3;
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_22, L_23));
		int32_t* L_24 = ___4_bucketOffset;
		int32_t* L_25 = ___3_nextOffset;
		int32_t L_26 = *((int32_t*)L_25);
		int32_t L_27 = V_4;
		*((int32_t*)L_24) = (int32_t)((int32_t)il2cpp_codegen_add(L_26, L_27));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_14, L_15)), L_16)), L_17));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m148AD5A3CDF22C9E840937DB84A071EE8D7D43BC_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m177EBEBF64B94FE192C8268AE6BCB9A563047C3C_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m177EBEBF64B94FE192C8268AE6BCB9A563047C3C_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		V_1 = L_2;
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_0, L_3)), ((int32_t)64), NULL);
		V_2 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_length;
		int32_t L_7;
		L_7 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_5, L_6)), ((int32_t)64), NULL);
		V_3 = L_7;
		int32_t L_8 = V_1;
		int32_t L_9 = ___0_length;
		int32_t L_10;
		L_10 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_8, L_9)), ((int32_t)64), NULL);
		V_4 = L_10;
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_bucketLength;
		int32_t L_13;
		L_13 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_11, L_12)), ((int32_t)64), NULL);
		V_5 = L_13;
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		int32_t L_16 = V_4;
		int32_t L_17 = V_5;
		int32_t* L_18 = ___2_keyOffset;
		int32_t L_19 = V_2;
		*((int32_t*)L_18) = (int32_t)L_19;
		int32_t* L_20 = ___3_nextOffset;
		int32_t* L_21 = ___2_keyOffset;
		int32_t L_22 = *((int32_t*)L_21);
		int32_t L_23 = V_3;
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_22, L_23));
		int32_t* L_24 = ___4_bucketOffset;
		int32_t* L_25 = ___3_nextOffset;
		int32_t L_26 = *((int32_t*)L_25);
		int32_t L_27 = V_4;
		*((int32_t*)L_24) = (int32_t)((int32_t)il2cpp_codegen_add(L_26, L_27));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_14, L_15)), L_16)), L_17));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_mBC8079E5C7FD0050043935B4BECCE50B83B1AFE8_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_mAEF65C486D008558F825C99D85F94551E317B4DF_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m177EBEBF64B94FE192C8268AE6BCB9A563047C3C_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		V_1 = L_2;
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_0, L_3)), ((int32_t)64), NULL);
		V_2 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_length;
		int32_t L_7;
		L_7 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_5, L_6)), ((int32_t)64), NULL);
		V_3 = L_7;
		int32_t L_8 = V_1;
		int32_t L_9 = ___0_length;
		int32_t L_10;
		L_10 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_8, L_9)), ((int32_t)64), NULL);
		V_4 = L_10;
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_bucketLength;
		int32_t L_13;
		L_13 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_11, L_12)), ((int32_t)64), NULL);
		V_5 = L_13;
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		int32_t L_16 = V_4;
		int32_t L_17 = V_5;
		int32_t* L_18 = ___2_keyOffset;
		int32_t L_19 = V_2;
		*((int32_t*)L_18) = (int32_t)L_19;
		int32_t* L_20 = ___3_nextOffset;
		int32_t* L_21 = ___2_keyOffset;
		int32_t L_22 = *((int32_t*)L_21);
		int32_t L_23 = V_3;
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_22, L_23));
		int32_t* L_24 = ___4_bucketOffset;
		int32_t* L_25 = ___3_nextOffset;
		int32_t L_26 = *((int32_t*)L_25);
		int32_t L_27 = V_4;
		*((int32_t*)L_24) = (int32_t)((int32_t)il2cpp_codegen_add(L_26, L_27));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_14, L_15)), L_16)), L_17));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD412AAC6AA3EC2F9B2200873436D4386786DD49F_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m177EBEBF64B94FE192C8268AE6BCB9A563047C3C_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		V_1 = L_2;
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_0, L_3)), ((int32_t)64), NULL);
		V_2 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_length;
		int32_t L_7;
		L_7 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_5, L_6)), ((int32_t)64), NULL);
		V_3 = L_7;
		int32_t L_8 = V_1;
		int32_t L_9 = ___0_length;
		int32_t L_10;
		L_10 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_8, L_9)), ((int32_t)64), NULL);
		V_4 = L_10;
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_bucketLength;
		int32_t L_13;
		L_13 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_11, L_12)), ((int32_t)64), NULL);
		V_5 = L_13;
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		int32_t L_16 = V_4;
		int32_t L_17 = V_5;
		int32_t* L_18 = ___2_keyOffset;
		int32_t L_19 = V_2;
		*((int32_t*)L_18) = (int32_t)L_19;
		int32_t* L_20 = ___3_nextOffset;
		int32_t* L_21 = ___2_keyOffset;
		int32_t L_22 = *((int32_t*)L_21);
		int32_t L_23 = V_3;
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_22, L_23));
		int32_t* L_24 = ___4_bucketOffset;
		int32_t* L_25 = ___3_nextOffset;
		int32_t L_26 = *((int32_t*)L_25);
		int32_t L_27 = V_4;
		*((int32_t*)L_24) = (int32_t)((int32_t)il2cpp_codegen_add(L_26, L_27));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_14, L_15)), L_16)), L_17));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisTransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D_m58B02888476CE926C1BB9C65751EBFE2403F99B2_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisTransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D_m245C9FB0E7B630F5AF8620DE958B68FBBDC95869_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m177EBEBF64B94FE192C8268AE6BCB9A563047C3C_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		V_1 = L_2;
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_0, L_3)), ((int32_t)64), NULL);
		V_2 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_length;
		int32_t L_7;
		L_7 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_5, L_6)), ((int32_t)64), NULL);
		V_3 = L_7;
		int32_t L_8 = V_1;
		int32_t L_9 = ___0_length;
		int32_t L_10;
		L_10 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_8, L_9)), ((int32_t)64), NULL);
		V_4 = L_10;
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_bucketLength;
		int32_t L_13;
		L_13 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_11, L_12)), ((int32_t)64), NULL);
		V_5 = L_13;
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		int32_t L_16 = V_4;
		int32_t L_17 = V_5;
		int32_t* L_18 = ___2_keyOffset;
		int32_t L_19 = V_2;
		*((int32_t*)L_18) = (int32_t)L_19;
		int32_t* L_20 = ___3_nextOffset;
		int32_t* L_21 = ___2_keyOffset;
		int32_t L_22 = *((int32_t*)L_21);
		int32_t L_23 = V_3;
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_22, L_23));
		int32_t* L_24 = ___4_bucketOffset;
		int32_t* L_25 = ___3_nextOffset;
		int32_t L_26 = *((int32_t*)L_25);
		int32_t L_27 = V_4;
		*((int32_t*)L_24) = (int32_t)((int32_t)il2cpp_codegen_add(L_26, L_27));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_14, L_15)), L_16)), L_17));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m8BC8F36B4E478A293D4547101BA1084F29AA8023_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5B2EBCF5A7515312D5BBDA1CC5ACDA8C99F14E18_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_mAEF65C486D008558F825C99D85F94551E317B4DF_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		V_1 = L_2;
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_0, L_3)), ((int32_t)64), NULL);
		V_2 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_length;
		int32_t L_7;
		L_7 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_5, L_6)), ((int32_t)64), NULL);
		V_3 = L_7;
		int32_t L_8 = V_1;
		int32_t L_9 = ___0_length;
		int32_t L_10;
		L_10 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_8, L_9)), ((int32_t)64), NULL);
		V_4 = L_10;
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_bucketLength;
		int32_t L_13;
		L_13 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_11, L_12)), ((int32_t)64), NULL);
		V_5 = L_13;
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		int32_t L_16 = V_4;
		int32_t L_17 = V_5;
		int32_t* L_18 = ___2_keyOffset;
		int32_t L_19 = V_2;
		*((int32_t*)L_18) = (int32_t)L_19;
		int32_t* L_20 = ___3_nextOffset;
		int32_t* L_21 = ___2_keyOffset;
		int32_t L_22 = *((int32_t*)L_21);
		int32_t L_23 = V_3;
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_22, L_23));
		int32_t* L_24 = ___4_bucketOffset;
		int32_t* L_25 = ___3_nextOffset;
		int32_t L_26 = *((int32_t*)L_25);
		int32_t L_27 = V_4;
		*((int32_t*)L_24) = (int32_t)((int32_t)il2cpp_codegen_add(L_26, L_27));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_14, L_15)), L_16)), L_17));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m5F9E7E27B9C12648FBB4D23C4F71F738ABB36E89_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m177EBEBF64B94FE192C8268AE6BCB9A563047C3C_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_mAEF65C486D008558F825C99D85F94551E317B4DF_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		V_1 = L_2;
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_0, L_3)), ((int32_t)64), NULL);
		V_2 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_length;
		int32_t L_7;
		L_7 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_5, L_6)), ((int32_t)64), NULL);
		V_3 = L_7;
		int32_t L_8 = V_1;
		int32_t L_9 = ___0_length;
		int32_t L_10;
		L_10 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_8, L_9)), ((int32_t)64), NULL);
		V_4 = L_10;
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_bucketLength;
		int32_t L_13;
		L_13 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_11, L_12)), ((int32_t)64), NULL);
		V_5 = L_13;
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		int32_t L_16 = V_4;
		int32_t L_17 = V_5;
		int32_t* L_18 = ___2_keyOffset;
		int32_t L_19 = V_2;
		*((int32_t*)L_18) = (int32_t)L_19;
		int32_t* L_20 = ___3_nextOffset;
		int32_t* L_21 = ___2_keyOffset;
		int32_t L_22 = *((int32_t*)L_21);
		int32_t L_23 = V_3;
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_22, L_23));
		int32_t* L_24 = ___4_bucketOffset;
		int32_t* L_25 = ___3_nextOffset;
		int32_t L_26 = *((int32_t*)L_25);
		int32_t L_27 = V_4;
		*((int32_t*)L_24) = (int32_t)((int32_t)il2cpp_codegen_add(L_26, L_27));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_14, L_15)), L_16)), L_17));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m5670C67DD7D8A7C88926DCCE4C0923DE74450A75_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m177EBEBF64B94FE192C8268AE6BCB9A563047C3C_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_mFBB919BDCE8F3E9F6BB1AC9F036200F466C8E9C4_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		V_1 = L_2;
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_0, L_3)), ((int32_t)64), NULL);
		V_2 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_length;
		int32_t L_7;
		L_7 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_5, L_6)), ((int32_t)64), NULL);
		V_3 = L_7;
		int32_t L_8 = V_1;
		int32_t L_9 = ___0_length;
		int32_t L_10;
		L_10 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_8, L_9)), ((int32_t)64), NULL);
		V_4 = L_10;
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_bucketLength;
		int32_t L_13;
		L_13 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_11, L_12)), ((int32_t)64), NULL);
		V_5 = L_13;
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		int32_t L_16 = V_4;
		int32_t L_17 = V_5;
		int32_t* L_18 = ___2_keyOffset;
		int32_t L_19 = V_2;
		*((int32_t*)L_18) = (int32_t)L_19;
		int32_t* L_20 = ___3_nextOffset;
		int32_t* L_21 = ___2_keyOffset;
		int32_t L_22 = *((int32_t*)L_21);
		int32_t L_23 = V_3;
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_22, L_23));
		int32_t* L_24 = ___4_bucketOffset;
		int32_t* L_25 = ___3_nextOffset;
		int32_t L_26 = *((int32_t*)L_25);
		int32_t L_27 = V_4;
		*((int32_t*)L_24) = (int32_t)((int32_t)il2cpp_codegen_add(L_26, L_27));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_14, L_15)), L_16)), L_17));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisLoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02_m63EA0289108145E80F681F5464F52FDF73B0B87A_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisLoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02_m3714C1DA541A15F113193B5BF9F03A517ACBDB4B_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_mFBB919BDCE8F3E9F6BB1AC9F036200F466C8E9C4_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		V_1 = L_2;
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_0, L_3)), ((int32_t)64), NULL);
		V_2 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_length;
		int32_t L_7;
		L_7 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_5, L_6)), ((int32_t)64), NULL);
		V_3 = L_7;
		int32_t L_8 = V_1;
		int32_t L_9 = ___0_length;
		int32_t L_10;
		L_10 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_8, L_9)), ((int32_t)64), NULL);
		V_4 = L_10;
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_bucketLength;
		int32_t L_13;
		L_13 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_11, L_12)), ((int32_t)64), NULL);
		V_5 = L_13;
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		int32_t L_16 = V_4;
		int32_t L_17 = V_5;
		int32_t* L_18 = ___2_keyOffset;
		int32_t L_19 = V_2;
		*((int32_t*)L_18) = (int32_t)L_19;
		int32_t* L_20 = ___3_nextOffset;
		int32_t* L_21 = ___2_keyOffset;
		int32_t L_22 = *((int32_t*)L_21);
		int32_t L_23 = V_3;
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_22, L_23));
		int32_t* L_24 = ___4_bucketOffset;
		int32_t* L_25 = ___3_nextOffset;
		int32_t L_26 = *((int32_t*)L_25);
		int32_t L_27 = V_4;
		*((int32_t*)L_24) = (int32_t)((int32_t)il2cpp_codegen_add(L_26, L_27));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_14, L_15)), L_16)), L_17));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m800C33D5424E202FD6BDBF8CBD60A8B494E98613_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m13EA6511CCA01250CAC338855AA7112292ED6036_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_mCCA70DE9EA8F3019FD79181A059D31A972311F9C_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		V_1 = L_2;
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_0, L_3)), ((int32_t)64), NULL);
		V_2 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_length;
		int32_t L_7;
		L_7 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_5, L_6)), ((int32_t)64), NULL);
		V_3 = L_7;
		int32_t L_8 = V_1;
		int32_t L_9 = ___0_length;
		int32_t L_10;
		L_10 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_8, L_9)), ((int32_t)64), NULL);
		V_4 = L_10;
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_bucketLength;
		int32_t L_13;
		L_13 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_11, L_12)), ((int32_t)64), NULL);
		V_5 = L_13;
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		int32_t L_16 = V_4;
		int32_t L_17 = V_5;
		int32_t* L_18 = ___2_keyOffset;
		int32_t L_19 = V_2;
		*((int32_t*)L_18) = (int32_t)L_19;
		int32_t* L_20 = ___3_nextOffset;
		int32_t* L_21 = ___2_keyOffset;
		int32_t L_22 = *((int32_t*)L_21);
		int32_t L_23 = V_3;
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_22, L_23));
		int32_t* L_24 = ___4_bucketOffset;
		int32_t* L_25 = ___3_nextOffset;
		int32_t L_26 = *((int32_t*)L_25);
		int32_t L_27 = V_4;
		*((int32_t*)L_24) = (int32_t)((int32_t)il2cpp_codegen_add(L_26, L_27));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_14, L_15)), L_16)), L_17));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m049D230B2FE70C986A0A24DB16A9CB5E0E9A162D_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m348D66015CD9DE899E1D629A356A294625A89A79_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		V_1 = L_2;
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_0, L_3)), ((int32_t)64), NULL);
		V_2 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_length;
		int32_t L_7;
		L_7 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_5, L_6)), ((int32_t)64), NULL);
		V_3 = L_7;
		int32_t L_8 = V_1;
		int32_t L_9 = ___0_length;
		int32_t L_10;
		L_10 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_8, L_9)), ((int32_t)64), NULL);
		V_4 = L_10;
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_bucketLength;
		int32_t L_13;
		L_13 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_11, L_12)), ((int32_t)64), NULL);
		V_5 = L_13;
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		int32_t L_16 = V_4;
		int32_t L_17 = V_5;
		int32_t* L_18 = ___2_keyOffset;
		int32_t L_19 = V_2;
		*((int32_t*)L_18) = (int32_t)L_19;
		int32_t* L_20 = ___3_nextOffset;
		int32_t* L_21 = ___2_keyOffset;
		int32_t L_22 = *((int32_t*)L_21);
		int32_t L_23 = V_3;
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_22, L_23));
		int32_t* L_24 = ___4_bucketOffset;
		int32_t* L_25 = ___3_nextOffset;
		int32_t L_26 = *((int32_t*)L_25);
		int32_t L_27 = V_4;
		*((int32_t*)L_24) = (int32_t)((int32_t)il2cpp_codegen_add(L_26, L_27));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_14, L_15)), L_16)), L_17));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7_mFAFE53626A3A356CCB1BDB3D261E1DC6E00D706D_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisBakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7_m16FBAAF488B6E3E8831365EAB7705A217F2165C9_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		V_1 = L_2;
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_0, L_3)), ((int32_t)64), NULL);
		V_2 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_length;
		int32_t L_7;
		L_7 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_5, L_6)), ((int32_t)64), NULL);
		V_3 = L_7;
		int32_t L_8 = V_1;
		int32_t L_9 = ___0_length;
		int32_t L_10;
		L_10 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_8, L_9)), ((int32_t)64), NULL);
		V_4 = L_10;
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_bucketLength;
		int32_t L_13;
		L_13 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_11, L_12)), ((int32_t)64), NULL);
		V_5 = L_13;
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		int32_t L_16 = V_4;
		int32_t L_17 = V_5;
		int32_t* L_18 = ___2_keyOffset;
		int32_t L_19 = V_2;
		*((int32_t*)L_18) = (int32_t)L_19;
		int32_t* L_20 = ___3_nextOffset;
		int32_t* L_21 = ___2_keyOffset;
		int32_t L_22 = *((int32_t*)L_21);
		int32_t L_23 = V_3;
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_22, L_23));
		int32_t* L_24 = ___4_bucketOffset;
		int32_t* L_25 = ___3_nextOffset;
		int32_t L_26 = *((int32_t*)L_25);
		int32_t L_27 = V_4;
		*((int32_t*)L_24) = (int32_t)((int32_t)il2cpp_codegen_add(L_26, L_27));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_14, L_15)), L_16)), L_17));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m911EED6D3DCE09D658BE028599F08F4CC8F3E448_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5B2EBCF5A7515312D5BBDA1CC5ACDA8C99F14E18_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		V_1 = L_2;
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_0, L_3)), ((int32_t)64), NULL);
		V_2 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_length;
		int32_t L_7;
		L_7 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_5, L_6)), ((int32_t)64), NULL);
		V_3 = L_7;
		int32_t L_8 = V_1;
		int32_t L_9 = ___0_length;
		int32_t L_10;
		L_10 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_8, L_9)), ((int32_t)64), NULL);
		V_4 = L_10;
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_bucketLength;
		int32_t L_13;
		L_13 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_11, L_12)), ((int32_t)64), NULL);
		V_5 = L_13;
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		int32_t L_16 = V_4;
		int32_t L_17 = V_5;
		int32_t* L_18 = ___2_keyOffset;
		int32_t L_19 = V_2;
		*((int32_t*)L_18) = (int32_t)L_19;
		int32_t* L_20 = ___3_nextOffset;
		int32_t* L_21 = ___2_keyOffset;
		int32_t L_22 = *((int32_t*)L_21);
		int32_t L_23 = V_3;
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_22, L_23));
		int32_t* L_24 = ___4_bucketOffset;
		int32_t* L_25 = ___3_nextOffset;
		int32_t L_26 = *((int32_t*)L_25);
		int32_t L_27 = V_4;
		*((int32_t*)L_24) = (int32_t)((int32_t)il2cpp_codegen_add(L_26, L_27));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_14, L_15)), L_16)), L_17));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_m3E147B062DB77D246D54FFDF5E620BEB3D351DDC_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_mA948765B976CB1DE8317E063360E4499B0CB181A_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		V_1 = L_2;
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_0, L_3)), ((int32_t)64), NULL);
		V_2 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_length;
		int32_t L_7;
		L_7 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_5, L_6)), ((int32_t)64), NULL);
		V_3 = L_7;
		int32_t L_8 = V_1;
		int32_t L_9 = ___0_length;
		int32_t L_10;
		L_10 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_8, L_9)), ((int32_t)64), NULL);
		V_4 = L_10;
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_bucketLength;
		int32_t L_13;
		L_13 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_11, L_12)), ((int32_t)64), NULL);
		V_5 = L_13;
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		int32_t L_16 = V_4;
		int32_t L_17 = V_5;
		int32_t* L_18 = ___2_keyOffset;
		int32_t L_19 = V_2;
		*((int32_t*)L_18) = (int32_t)L_19;
		int32_t* L_20 = ___3_nextOffset;
		int32_t* L_21 = ___2_keyOffset;
		int32_t L_22 = *((int32_t*)L_21);
		int32_t L_23 = V_3;
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_22, L_23));
		int32_t* L_24 = ___4_bucketOffset;
		int32_t* L_25 = ___3_nextOffset;
		int32_t L_26 = *((int32_t*)L_25);
		int32_t L_27 = V_4;
		*((int32_t*)L_24) = (int32_t)((int32_t)il2cpp_codegen_add(L_26, L_27));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_14, L_15)), L_16)), L_17));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mBE98669184036D649666C557354937FDF64DC147_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m177EBEBF64B94FE192C8268AE6BCB9A563047C3C_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		V_1 = L_2;
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_0, L_3)), ((int32_t)64), NULL);
		V_2 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_length;
		int32_t L_7;
		L_7 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_5, L_6)), ((int32_t)64), NULL);
		V_3 = L_7;
		int32_t L_8 = V_1;
		int32_t L_9 = ___0_length;
		int32_t L_10;
		L_10 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_8, L_9)), ((int32_t)64), NULL);
		V_4 = L_10;
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_bucketLength;
		int32_t L_13;
		L_13 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_11, L_12)), ((int32_t)64), NULL);
		V_5 = L_13;
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		int32_t L_16 = V_4;
		int32_t L_17 = V_5;
		int32_t* L_18 = ___2_keyOffset;
		int32_t L_19 = V_2;
		*((int32_t*)L_18) = (int32_t)L_19;
		int32_t* L_20 = ___3_nextOffset;
		int32_t* L_21 = ___2_keyOffset;
		int32_t L_22 = *((int32_t*)L_21);
		int32_t L_23 = V_3;
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_22, L_23));
		int32_t* L_24 = ___4_bucketOffset;
		int32_t* L_25 = ___3_nextOffset;
		int32_t L_26 = *((int32_t*)L_25);
		int32_t L_27 = V_4;
		*((int32_t*)L_24) = (int32_t)((int32_t)il2cpp_codegen_add(L_26, L_27));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_14, L_15)), L_16)), L_17));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m81ABEA4AF3E59B6D1F940D69382166832E43750C_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		V_1 = L_2;
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_0, L_3)), ((int32_t)64), NULL);
		V_2 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_length;
		int32_t L_7;
		L_7 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_5, L_6)), ((int32_t)64), NULL);
		V_3 = L_7;
		int32_t L_8 = V_1;
		int32_t L_9 = ___0_length;
		int32_t L_10;
		L_10 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_8, L_9)), ((int32_t)64), NULL);
		V_4 = L_10;
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_bucketLength;
		int32_t L_13;
		L_13 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_11, L_12)), ((int32_t)64), NULL);
		V_5 = L_13;
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		int32_t L_16 = V_4;
		int32_t L_17 = V_5;
		int32_t* L_18 = ___2_keyOffset;
		int32_t L_19 = V_2;
		*((int32_t*)L_18) = (int32_t)L_19;
		int32_t* L_20 = ___3_nextOffset;
		int32_t* L_21 = ___2_keyOffset;
		int32_t L_22 = *((int32_t*)L_21);
		int32_t L_23 = V_3;
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_22, L_23));
		int32_t* L_24 = ___4_bucketOffset;
		int32_t* L_25 = ___3_nextOffset;
		int32_t L_26 = *((int32_t*)L_25);
		int32_t L_27 = V_4;
		*((int32_t*)L_24) = (int32_t)((int32_t)il2cpp_codegen_add(L_26, L_27));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_14, L_15)), L_16)), L_17));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisIntPtr_t_m9B5D8042853B8742FFE5019C81F1F8B04DF3399D_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisIntPtr_t_mB2B3CFF1CB804C99734D4E2F5D8A8C9DB0D209A8_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		V_1 = L_2;
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_0, L_3)), ((int32_t)64), NULL);
		V_2 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_length;
		int32_t L_7;
		L_7 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_5, L_6)), ((int32_t)64), NULL);
		V_3 = L_7;
		int32_t L_8 = V_1;
		int32_t L_9 = ___0_length;
		int32_t L_10;
		L_10 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_8, L_9)), ((int32_t)64), NULL);
		V_4 = L_10;
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_bucketLength;
		int32_t L_13;
		L_13 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_11, L_12)), ((int32_t)64), NULL);
		V_5 = L_13;
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		int32_t L_16 = V_4;
		int32_t L_17 = V_5;
		int32_t* L_18 = ___2_keyOffset;
		int32_t L_19 = V_2;
		*((int32_t*)L_18) = (int32_t)L_19;
		int32_t* L_20 = ___3_nextOffset;
		int32_t* L_21 = ___2_keyOffset;
		int32_t L_22 = *((int32_t*)L_21);
		int32_t L_23 = V_3;
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_22, L_23));
		int32_t* L_24 = ___4_bucketOffset;
		int32_t* L_25 = ___3_nextOffset;
		int32_t L_26 = *((int32_t*)L_25);
		int32_t L_27 = V_4;
		*((int32_t*)L_24) = (int32_t)((int32_t)il2cpp_codegen_add(L_26, L_27));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_14, L_15)), L_16)), L_17));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisPrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751_m8D7443BED9783DA4DFB7B70481E65DD0951B4C81_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisPrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751_m2A318CAE585381E20EF83FF7EAEAD2985A6FB24B_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		V_1 = L_2;
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_0, L_3)), ((int32_t)64), NULL);
		V_2 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_length;
		int32_t L_7;
		L_7 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_5, L_6)), ((int32_t)64), NULL);
		V_3 = L_7;
		int32_t L_8 = V_1;
		int32_t L_9 = ___0_length;
		int32_t L_10;
		L_10 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_8, L_9)), ((int32_t)64), NULL);
		V_4 = L_10;
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_bucketLength;
		int32_t L_13;
		L_13 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_11, L_12)), ((int32_t)64), NULL);
		V_5 = L_13;
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		int32_t L_16 = V_4;
		int32_t L_17 = V_5;
		int32_t* L_18 = ___2_keyOffset;
		int32_t L_19 = V_2;
		*((int32_t*)L_18) = (int32_t)L_19;
		int32_t* L_20 = ___3_nextOffset;
		int32_t* L_21 = ___2_keyOffset;
		int32_t L_22 = *((int32_t*)L_21);
		int32_t L_23 = V_3;
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_22, L_23));
		int32_t* L_24 = ___4_bucketOffset;
		int32_t* L_25 = ___3_nextOffset;
		int32_t L_26 = *((int32_t*)L_25);
		int32_t L_27 = V_4;
		*((int32_t*)L_24) = (int32_t)((int32_t)il2cpp_codegen_add(L_26, L_27));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_14, L_15)), L_16)), L_17));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA_mC63327E91B0A7B508F864689E34A2A662D7DB203_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA_m93035A7083808061FAA0D61522FCA975B96795F6_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		V_1 = L_2;
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_0, L_3)), ((int32_t)64), NULL);
		V_2 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_length;
		int32_t L_7;
		L_7 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_5, L_6)), ((int32_t)64), NULL);
		V_3 = L_7;
		int32_t L_8 = V_1;
		int32_t L_9 = ___0_length;
		int32_t L_10;
		L_10 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_8, L_9)), ((int32_t)64), NULL);
		V_4 = L_10;
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_bucketLength;
		int32_t L_13;
		L_13 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_11, L_12)), ((int32_t)64), NULL);
		V_5 = L_13;
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		int32_t L_16 = V_4;
		int32_t L_17 = V_5;
		int32_t* L_18 = ___2_keyOffset;
		int32_t L_19 = V_2;
		*((int32_t*)L_18) = (int32_t)L_19;
		int32_t* L_20 = ___3_nextOffset;
		int32_t* L_21 = ___2_keyOffset;
		int32_t L_22 = *((int32_t*)L_21);
		int32_t L_23 = V_3;
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_22, L_23));
		int32_t* L_24 = ___4_bucketOffset;
		int32_t* L_25 = ___3_nextOffset;
		int32_t L_26 = *((int32_t*)L_25);
		int32_t L_27 = V_4;
		*((int32_t*)L_24) = (int32_t)((int32_t)il2cpp_codegen_add(L_26, L_27));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_14, L_15)), L_16)), L_17));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE_m9ACD26E08490E17910A7E212C1FFFBF3EC4F674D_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisGetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE_mC146FD0788F8D27183DC5FA217D150CE5D960E16_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		V_1 = L_2;
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_0, L_3)), ((int32_t)64), NULL);
		V_2 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_length;
		int32_t L_7;
		L_7 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_5, L_6)), ((int32_t)64), NULL);
		V_3 = L_7;
		int32_t L_8 = V_1;
		int32_t L_9 = ___0_length;
		int32_t L_10;
		L_10 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_8, L_9)), ((int32_t)64), NULL);
		V_4 = L_10;
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_bucketLength;
		int32_t L_13;
		L_13 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_11, L_12)), ((int32_t)64), NULL);
		V_5 = L_13;
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		int32_t L_16 = V_4;
		int32_t L_17 = V_5;
		int32_t* L_18 = ___2_keyOffset;
		int32_t L_19 = V_2;
		*((int32_t*)L_18) = (int32_t)L_19;
		int32_t* L_20 = ___3_nextOffset;
		int32_t* L_21 = ___2_keyOffset;
		int32_t L_22 = *((int32_t*)L_21);
		int32_t L_23 = V_3;
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_22, L_23));
		int32_t* L_24 = ___4_bucketOffset;
		int32_t* L_25 = ___3_nextOffset;
		int32_t L_26 = *((int32_t*)L_25);
		int32_t L_27 = V_4;
		*((int32_t*)L_24) = (int32_t)((int32_t)il2cpp_codegen_add(L_26, L_27));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_14, L_15)), L_16)), L_17));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E_m7B1B9E7BA03D1E8B47016A5A4BD1814BE65E7C55_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisGetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E_m2DC52F60E47C91615A7762CCF1A73975D5373C69_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		V_1 = L_2;
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_0, L_3)), ((int32_t)64), NULL);
		V_2 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_length;
		int32_t L_7;
		L_7 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_5, L_6)), ((int32_t)64), NULL);
		V_3 = L_7;
		int32_t L_8 = V_1;
		int32_t L_9 = ___0_length;
		int32_t L_10;
		L_10 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_8, L_9)), ((int32_t)64), NULL);
		V_4 = L_10;
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_bucketLength;
		int32_t L_13;
		L_13 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_11, L_12)), ((int32_t)64), NULL);
		V_5 = L_13;
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		int32_t L_16 = V_4;
		int32_t L_17 = V_5;
		int32_t* L_18 = ___2_keyOffset;
		int32_t L_19 = V_2;
		*((int32_t*)L_18) = (int32_t)L_19;
		int32_t* L_20 = ___3_nextOffset;
		int32_t* L_21 = ___2_keyOffset;
		int32_t L_22 = *((int32_t*)L_21);
		int32_t L_23 = V_3;
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_22, L_23));
		int32_t* L_24 = ___4_bucketOffset;
		int32_t* L_25 = ___3_nextOffset;
		int32_t L_26 = *((int32_t*)L_25);
		int32_t L_27 = V_4;
		*((int32_t*)L_24) = (int32_t)((int32_t)il2cpp_codegen_add(L_26, L_27));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_14, L_15)), L_16)), L_17));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B_m404072A8E32291723B1C5461884182C9ACD81C19_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisGetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B_m516C020555EAA24A34E4311591A9B0BF19B2453E_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		V_1 = L_2;
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_0, L_3)), ((int32_t)64), NULL);
		V_2 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_length;
		int32_t L_7;
		L_7 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_5, L_6)), ((int32_t)64), NULL);
		V_3 = L_7;
		int32_t L_8 = V_1;
		int32_t L_9 = ___0_length;
		int32_t L_10;
		L_10 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_8, L_9)), ((int32_t)64), NULL);
		V_4 = L_10;
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_bucketLength;
		int32_t L_13;
		L_13 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_11, L_12)), ((int32_t)64), NULL);
		V_5 = L_13;
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		int32_t L_16 = V_4;
		int32_t L_17 = V_5;
		int32_t* L_18 = ___2_keyOffset;
		int32_t L_19 = V_2;
		*((int32_t*)L_18) = (int32_t)L_19;
		int32_t* L_20 = ___3_nextOffset;
		int32_t* L_21 = ___2_keyOffset;
		int32_t L_22 = *((int32_t*)L_21);
		int32_t L_23 = V_3;
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_22, L_23));
		int32_t* L_24 = ___4_bucketOffset;
		int32_t* L_25 = ___3_nextOffset;
		int32_t L_26 = *((int32_t*)L_25);
		int32_t L_27 = V_4;
		*((int32_t*)L_24) = (int32_t)((int32_t)il2cpp_codegen_add(L_26, L_27));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_14, L_15)), L_16)), L_17));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452_m6E98F28811A37A3941C0CC88E976D70A8FACD4EB_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisGetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452_mA4E7079D860F20A8439F8086A5F904E85A4A144B_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		V_1 = L_2;
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_0, L_3)), ((int32_t)64), NULL);
		V_2 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_length;
		int32_t L_7;
		L_7 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_5, L_6)), ((int32_t)64), NULL);
		V_3 = L_7;
		int32_t L_8 = V_1;
		int32_t L_9 = ___0_length;
		int32_t L_10;
		L_10 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_8, L_9)), ((int32_t)64), NULL);
		V_4 = L_10;
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_bucketLength;
		int32_t L_13;
		L_13 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_11, L_12)), ((int32_t)64), NULL);
		V_5 = L_13;
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		int32_t L_16 = V_4;
		int32_t L_17 = V_5;
		int32_t* L_18 = ___2_keyOffset;
		int32_t L_19 = V_2;
		*((int32_t*)L_18) = (int32_t)L_19;
		int32_t* L_20 = ___3_nextOffset;
		int32_t* L_21 = ___2_keyOffset;
		int32_t L_22 = *((int32_t*)L_21);
		int32_t L_23 = V_3;
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_22, L_23));
		int32_t* L_24 = ___4_bucketOffset;
		int32_t* L_25 = ___3_nextOffset;
		int32_t L_26 = *((int32_t*)L_25);
		int32_t L_27 = V_4;
		*((int32_t*)L_24) = (int32_t)((int32_t)il2cpp_codegen_add(L_26, L_27));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_14, L_15)), L_16)), L_17));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34_m03D072FB4FF90CBB76DF13FCB7CFCF42BAF27F0B_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34_m98F077078302520C47A901B213035CAF245718F7_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		V_1 = L_2;
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_0, L_3)), ((int32_t)64), NULL);
		V_2 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_length;
		int32_t L_7;
		L_7 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_5, L_6)), ((int32_t)64), NULL);
		V_3 = L_7;
		int32_t L_8 = V_1;
		int32_t L_9 = ___0_length;
		int32_t L_10;
		L_10 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_8, L_9)), ((int32_t)64), NULL);
		V_4 = L_10;
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_bucketLength;
		int32_t L_13;
		L_13 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_11, L_12)), ((int32_t)64), NULL);
		V_5 = L_13;
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		int32_t L_16 = V_4;
		int32_t L_17 = V_5;
		int32_t* L_18 = ___2_keyOffset;
		int32_t L_19 = V_2;
		*((int32_t*)L_18) = (int32_t)L_19;
		int32_t* L_20 = ___3_nextOffset;
		int32_t* L_21 = ___2_keyOffset;
		int32_t L_22 = *((int32_t*)L_21);
		int32_t L_23 = V_3;
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_22, L_23));
		int32_t* L_24 = ___4_bucketOffset;
		int32_t* L_25 = ___3_nextOffset;
		int32_t L_26 = *((int32_t*)L_25);
		int32_t L_27 = V_4;
		*((int32_t*)L_24) = (int32_t)((int32_t)il2cpp_codegen_add(L_26, L_27));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_14, L_15)), L_16)), L_17));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C_m14CF2AB6127EDFA539669B8757642E7939DAABCA_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C_m655A8584504C2BD5F6ED039239E9033A755EA38F_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		V_1 = L_2;
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_0, L_3)), ((int32_t)64), NULL);
		V_2 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_length;
		int32_t L_7;
		L_7 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_5, L_6)), ((int32_t)64), NULL);
		V_3 = L_7;
		int32_t L_8 = V_1;
		int32_t L_9 = ___0_length;
		int32_t L_10;
		L_10 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_8, L_9)), ((int32_t)64), NULL);
		V_4 = L_10;
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_bucketLength;
		int32_t L_13;
		L_13 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_11, L_12)), ((int32_t)64), NULL);
		V_5 = L_13;
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		int32_t L_16 = V_4;
		int32_t L_17 = V_5;
		int32_t* L_18 = ___2_keyOffset;
		int32_t L_19 = V_2;
		*((int32_t*)L_18) = (int32_t)L_19;
		int32_t* L_20 = ___3_nextOffset;
		int32_t* L_21 = ___2_keyOffset;
		int32_t L_22 = *((int32_t*)L_21);
		int32_t L_23 = V_3;
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_22, L_23));
		int32_t* L_24 = ___4_bucketOffset;
		int32_t* L_25 = ___3_nextOffset;
		int32_t L_26 = *((int32_t*)L_25);
		int32_t L_27 = V_4;
		*((int32_t*)L_24) = (int32_t)((int32_t)il2cpp_codegen_add(L_26, L_27));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_14, L_15)), L_16)), L_17));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA_m08CB9AD7A83A3EFD0A9661340D275C70449CA867_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA_m62C21F6694C03D4856CBC824244CCA52047910C5_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		V_1 = L_2;
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_0, L_3)), ((int32_t)64), NULL);
		V_2 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_length;
		int32_t L_7;
		L_7 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_5, L_6)), ((int32_t)64), NULL);
		V_3 = L_7;
		int32_t L_8 = V_1;
		int32_t L_9 = ___0_length;
		int32_t L_10;
		L_10 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_8, L_9)), ((int32_t)64), NULL);
		V_4 = L_10;
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_bucketLength;
		int32_t L_13;
		L_13 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_11, L_12)), ((int32_t)64), NULL);
		V_5 = L_13;
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		int32_t L_16 = V_4;
		int32_t L_17 = V_5;
		int32_t* L_18 = ___2_keyOffset;
		int32_t L_19 = V_2;
		*((int32_t*)L_18) = (int32_t)L_19;
		int32_t* L_20 = ___3_nextOffset;
		int32_t* L_21 = ___2_keyOffset;
		int32_t L_22 = *((int32_t*)L_21);
		int32_t L_23 = V_3;
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_22, L_23));
		int32_t* L_24 = ___4_bucketOffset;
		int32_t* L_25 = ___3_nextOffset;
		int32_t L_26 = *((int32_t*)L_25);
		int32_t L_27 = V_4;
		*((int32_t*)L_24) = (int32_t)((int32_t)il2cpp_codegen_add(L_26, L_27));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_14, L_15)), L_16)), L_17));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisEntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055_m6996D33C200970FD5E08EF5017762387E1F99A77_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisEntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055_mEA5F8818A2E31AE8B3A843472D2A46C0E40EA242_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		V_1 = L_2;
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_0, L_3)), ((int32_t)64), NULL);
		V_2 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_length;
		int32_t L_7;
		L_7 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_5, L_6)), ((int32_t)64), NULL);
		V_3 = L_7;
		int32_t L_8 = V_1;
		int32_t L_9 = ___0_length;
		int32_t L_10;
		L_10 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_8, L_9)), ((int32_t)64), NULL);
		V_4 = L_10;
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_bucketLength;
		int32_t L_13;
		L_13 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_11, L_12)), ((int32_t)64), NULL);
		V_5 = L_13;
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		int32_t L_16 = V_4;
		int32_t L_17 = V_5;
		int32_t* L_18 = ___2_keyOffset;
		int32_t L_19 = V_2;
		*((int32_t*)L_18) = (int32_t)L_19;
		int32_t* L_20 = ___3_nextOffset;
		int32_t* L_21 = ___2_keyOffset;
		int32_t L_22 = *((int32_t*)L_21);
		int32_t L_23 = V_3;
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_22, L_23));
		int32_t* L_24 = ___4_bucketOffset;
		int32_t* L_25 = ___3_nextOffset;
		int32_t L_26 = *((int32_t*)L_25);
		int32_t L_27 = V_4;
		*((int32_t*)L_24) = (int32_t)((int32_t)il2cpp_codegen_add(L_26, L_27));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_14, L_15)), L_16)), L_17));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisComponentData_t2CB40CF3C2FA75B9CA5D8292DCFA8BF12A42DB07_m019D312B57E853E126B529500093FD4C4A6623D1_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisComponentData_t2CB40CF3C2FA75B9CA5D8292DCFA8BF12A42DB07_m5E1A500CD4A47B175B43B8F5D981FCD1B68A624F_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		V_1 = L_2;
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_0, L_3)), ((int32_t)64), NULL);
		V_2 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_length;
		int32_t L_7;
		L_7 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_5, L_6)), ((int32_t)64), NULL);
		V_3 = L_7;
		int32_t L_8 = V_1;
		int32_t L_9 = ___0_length;
		int32_t L_10;
		L_10 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_8, L_9)), ((int32_t)64), NULL);
		V_4 = L_10;
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_bucketLength;
		int32_t L_13;
		L_13 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_11, L_12)), ((int32_t)64), NULL);
		V_5 = L_13;
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		int32_t L_16 = V_4;
		int32_t L_17 = V_5;
		int32_t* L_18 = ___2_keyOffset;
		int32_t L_19 = V_2;
		*((int32_t*)L_18) = (int32_t)L_19;
		int32_t* L_20 = ___3_nextOffset;
		int32_t* L_21 = ___2_keyOffset;
		int32_t L_22 = *((int32_t*)L_21);
		int32_t L_23 = V_3;
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_22, L_23));
		int32_t* L_24 = ___4_bucketOffset;
		int32_t* L_25 = ___3_nextOffset;
		int32_t L_26 = *((int32_t*)L_25);
		int32_t L_27 = V_4;
		*((int32_t*)L_24) = (int32_t)((int32_t)il2cpp_codegen_add(L_26, L_27));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_14, L_15)), L_16)), L_17));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF0D0649FBDD563E9937B051F46364679090FC87E_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m9712F6405A5D5C4128EAFA7860A222DE388ED6C5_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		V_1 = L_2;
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_0, L_3)), ((int32_t)64), NULL);
		V_2 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_length;
		int32_t L_7;
		L_7 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_5, L_6)), ((int32_t)64), NULL);
		V_3 = L_7;
		int32_t L_8 = V_1;
		int32_t L_9 = ___0_length;
		int32_t L_10;
		L_10 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_8, L_9)), ((int32_t)64), NULL);
		V_4 = L_10;
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_bucketLength;
		int32_t L_13;
		L_13 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_11, L_12)), ((int32_t)64), NULL);
		V_5 = L_13;
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		int32_t L_16 = V_4;
		int32_t L_17 = V_5;
		int32_t* L_18 = ___2_keyOffset;
		int32_t L_19 = V_2;
		*((int32_t*)L_18) = (int32_t)L_19;
		int32_t* L_20 = ___3_nextOffset;
		int32_t* L_21 = ___2_keyOffset;
		int32_t L_22 = *((int32_t*)L_21);
		int32_t L_23 = V_3;
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_22, L_23));
		int32_t* L_24 = ___4_bucketOffset;
		int32_t* L_25 = ___3_nextOffset;
		int32_t L_26 = *((int32_t*)L_25);
		int32_t L_27 = V_4;
		*((int32_t*)L_24) = (int32_t)((int32_t)il2cpp_codegen_add(L_26, L_27));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_14, L_15)), L_16)), L_17));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m8C126E527C7B4BAB9F54175FCF8B8A0EAABA6453_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mEC9469DBD91362D6135B8F5A81E90486BF328075_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m9712F6405A5D5C4128EAFA7860A222DE388ED6C5_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		V_1 = L_2;
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_0, L_3)), ((int32_t)64), NULL);
		V_2 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_length;
		int32_t L_7;
		L_7 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_5, L_6)), ((int32_t)64), NULL);
		V_3 = L_7;
		int32_t L_8 = V_1;
		int32_t L_9 = ___0_length;
		int32_t L_10;
		L_10 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_8, L_9)), ((int32_t)64), NULL);
		V_4 = L_10;
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_bucketLength;
		int32_t L_13;
		L_13 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_11, L_12)), ((int32_t)64), NULL);
		V_5 = L_13;
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		int32_t L_16 = V_4;
		int32_t L_17 = V_5;
		int32_t* L_18 = ___2_keyOffset;
		int32_t L_19 = V_2;
		*((int32_t*)L_18) = (int32_t)L_19;
		int32_t* L_20 = ___3_nextOffset;
		int32_t* L_21 = ___2_keyOffset;
		int32_t L_22 = *((int32_t*)L_21);
		int32_t L_23 = V_3;
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_22, L_23));
		int32_t* L_24 = ___4_bucketOffset;
		int32_t* L_25 = ___3_nextOffset;
		int32_t L_26 = *((int32_t*)L_25);
		int32_t L_27 = V_4;
		*((int32_t*)L_24) = (int32_t)((int32_t)il2cpp_codegen_add(L_26, L_27));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_14, L_15)), L_16)), L_17));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m90071C4114ED55944C73C3B9A926AB1223789FBB_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5B2EBCF5A7515312D5BBDA1CC5ACDA8C99F14E18_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_mBA8405CA0C1426234043E941C50F8F3C2263305E_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		V_1 = L_2;
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_0, L_3)), ((int32_t)64), NULL);
		V_2 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_length;
		int32_t L_7;
		L_7 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_5, L_6)), ((int32_t)64), NULL);
		V_3 = L_7;
		int32_t L_8 = V_1;
		int32_t L_9 = ___0_length;
		int32_t L_10;
		L_10 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_8, L_9)), ((int32_t)64), NULL);
		V_4 = L_10;
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_bucketLength;
		int32_t L_13;
		L_13 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_11, L_12)), ((int32_t)64), NULL);
		V_5 = L_13;
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		int32_t L_16 = V_4;
		int32_t L_17 = V_5;
		int32_t* L_18 = ___2_keyOffset;
		int32_t L_19 = V_2;
		*((int32_t*)L_18) = (int32_t)L_19;
		int32_t* L_20 = ___3_nextOffset;
		int32_t* L_21 = ___2_keyOffset;
		int32_t L_22 = *((int32_t*)L_21);
		int32_t L_23 = V_3;
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_22, L_23));
		int32_t* L_24 = ___4_bucketOffset;
		int32_t* L_25 = ___3_nextOffset;
		int32_t L_26 = *((int32_t*)L_25);
		int32_t L_27 = V_4;
		*((int32_t*)L_24) = (int32_t)((int32_t)il2cpp_codegen_add(L_26, L_27));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_14, L_15)), L_16)), L_17));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5_mA9048D4A70A877A13847FD8023E3414FE331C40C_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5_m6DCB7B2184E8A41AF080D2EE7EBBFC2A693701DD_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6C198B51ACD7B8EC62D5E0E75433C12BE9D65A58_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		V_1 = L_2;
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_0, L_3)), ((int32_t)64), NULL);
		V_2 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_length;
		int32_t L_7;
		L_7 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_5, L_6)), ((int32_t)64), NULL);
		V_3 = L_7;
		int32_t L_8 = V_1;
		int32_t L_9 = ___0_length;
		int32_t L_10;
		L_10 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_8, L_9)), ((int32_t)64), NULL);
		V_4 = L_10;
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_bucketLength;
		int32_t L_13;
		L_13 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_11, L_12)), ((int32_t)64), NULL);
		V_5 = L_13;
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		int32_t L_16 = V_4;
		int32_t L_17 = V_5;
		int32_t* L_18 = ___2_keyOffset;
		int32_t L_19 = V_2;
		*((int32_t*)L_18) = (int32_t)L_19;
		int32_t* L_20 = ___3_nextOffset;
		int32_t* L_21 = ___2_keyOffset;
		int32_t L_22 = *((int32_t*)L_21);
		int32_t L_23 = V_3;
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_22, L_23));
		int32_t* L_24 = ___4_bucketOffset;
		int32_t* L_25 = ___3_nextOffset;
		int32_t L_26 = *((int32_t*)L_25);
		int32_t L_27 = V_4;
		*((int32_t*)L_24) = (int32_t)((int32_t)il2cpp_codegen_add(L_26, L_27));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_14, L_15)), L_16)), L_17));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_m6806F346826D0037342E4BB1DBFAC9C01DD4AB61_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_mCACAE521597CACDD37B73CF9D791E47F2B11D2AB_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6C198B51ACD7B8EC62D5E0E75433C12BE9D65A58_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		V_1 = L_2;
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_0, L_3)), ((int32_t)64), NULL);
		V_2 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_length;
		int32_t L_7;
		L_7 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_5, L_6)), ((int32_t)64), NULL);
		V_3 = L_7;
		int32_t L_8 = V_1;
		int32_t L_9 = ___0_length;
		int32_t L_10;
		L_10 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_8, L_9)), ((int32_t)64), NULL);
		V_4 = L_10;
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_bucketLength;
		int32_t L_13;
		L_13 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_11, L_12)), ((int32_t)64), NULL);
		V_5 = L_13;
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		int32_t L_16 = V_4;
		int32_t L_17 = V_5;
		int32_t* L_18 = ___2_keyOffset;
		int32_t L_19 = V_2;
		*((int32_t*)L_18) = (int32_t)L_19;
		int32_t* L_20 = ___3_nextOffset;
		int32_t* L_21 = ___2_keyOffset;
		int32_t L_22 = *((int32_t*)L_21);
		int32_t L_23 = V_3;
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_22, L_23));
		int32_t* L_24 = ___4_bucketOffset;
		int32_t* L_25 = ___3_nextOffset;
		int32_t L_26 = *((int32_t*)L_25);
		int32_t L_27 = V_4;
		*((int32_t*)L_24) = (int32_t)((int32_t)il2cpp_codegen_add(L_26, L_27));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_14, L_15)), L_16)), L_17));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3DE7A2A9AA18A98736E0BC55BE19C74A474F0531_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5B2EBCF5A7515312D5BBDA1CC5ACDA8C99F14E18_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6C198B51ACD7B8EC62D5E0E75433C12BE9D65A58_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		V_1 = L_2;
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_0, L_3)), ((int32_t)64), NULL);
		V_2 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_length;
		int32_t L_7;
		L_7 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_5, L_6)), ((int32_t)64), NULL);
		V_3 = L_7;
		int32_t L_8 = V_1;
		int32_t L_9 = ___0_length;
		int32_t L_10;
		L_10 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_8, L_9)), ((int32_t)64), NULL);
		V_4 = L_10;
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_bucketLength;
		int32_t L_13;
		L_13 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_11, L_12)), ((int32_t)64), NULL);
		V_5 = L_13;
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		int32_t L_16 = V_4;
		int32_t L_17 = V_5;
		int32_t* L_18 = ___2_keyOffset;
		int32_t L_19 = V_2;
		*((int32_t*)L_18) = (int32_t)L_19;
		int32_t* L_20 = ___3_nextOffset;
		int32_t* L_21 = ___2_keyOffset;
		int32_t L_22 = *((int32_t*)L_21);
		int32_t L_23 = V_3;
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_22, L_23));
		int32_t* L_24 = ___4_bucketOffset;
		int32_t* L_25 = ___3_nextOffset;
		int32_t L_26 = *((int32_t*)L_25);
		int32_t L_27 = V_4;
		*((int32_t*)L_24) = (int32_t)((int32_t)il2cpp_codegen_add(L_26, L_27));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_14, L_15)), L_16)), L_17));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB7D8117CB123D481EDD24EEBAEAAEFA261FB2012_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6C198B51ACD7B8EC62D5E0E75433C12BE9D65A58_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		V_1 = L_2;
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_0, L_3)), ((int32_t)64), NULL);
		V_2 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_length;
		int32_t L_7;
		L_7 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_5, L_6)), ((int32_t)64), NULL);
		V_3 = L_7;
		int32_t L_8 = V_1;
		int32_t L_9 = ___0_length;
		int32_t L_10;
		L_10 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_8, L_9)), ((int32_t)64), NULL);
		V_4 = L_10;
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_bucketLength;
		int32_t L_13;
		L_13 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_11, L_12)), ((int32_t)64), NULL);
		V_5 = L_13;
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		int32_t L_16 = V_4;
		int32_t L_17 = V_5;
		int32_t* L_18 = ___2_keyOffset;
		int32_t L_19 = V_2;
		*((int32_t*)L_18) = (int32_t)L_19;
		int32_t* L_20 = ___3_nextOffset;
		int32_t* L_21 = ___2_keyOffset;
		int32_t L_22 = *((int32_t*)L_21);
		int32_t L_23 = V_3;
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_22, L_23));
		int32_t* L_24 = ___4_bucketOffset;
		int32_t* L_25 = ___3_nextOffset;
		int32_t L_26 = *((int32_t*)L_25);
		int32_t L_27 = V_4;
		*((int32_t*)L_24) = (int32_t)((int32_t)il2cpp_codegen_add(L_26, L_27));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_14, L_15)), L_16)), L_17));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC7CC0CA9263C2F385B16C180E3D912DAA8ADF201_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6C198B51ACD7B8EC62D5E0E75433C12BE9D65A58_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		V_1 = L_2;
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_0, L_3)), ((int32_t)64), NULL);
		V_2 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_length;
		int32_t L_7;
		L_7 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_5, L_6)), ((int32_t)64), NULL);
		V_3 = L_7;
		int32_t L_8 = V_1;
		int32_t L_9 = ___0_length;
		int32_t L_10;
		L_10 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_8, L_9)), ((int32_t)64), NULL);
		V_4 = L_10;
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_bucketLength;
		int32_t L_13;
		L_13 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_11, L_12)), ((int32_t)64), NULL);
		V_5 = L_13;
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		int32_t L_16 = V_4;
		int32_t L_17 = V_5;
		int32_t* L_18 = ___2_keyOffset;
		int32_t L_19 = V_2;
		*((int32_t*)L_18) = (int32_t)L_19;
		int32_t* L_20 = ___3_nextOffset;
		int32_t* L_21 = ___2_keyOffset;
		int32_t L_22 = *((int32_t*)L_21);
		int32_t L_23 = V_3;
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_22, L_23));
		int32_t* L_24 = ___4_bucketOffset;
		int32_t* L_25 = ___3_nextOffset;
		int32_t L_26 = *((int32_t*)L_25);
		int32_t L_27 = V_4;
		*((int32_t*)L_24) = (int32_t)((int32_t)il2cpp_codegen_add(L_26, L_27));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_14, L_15)), L_16)), L_17));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m89634AB370CC3D1D454BF82D57288960AC2C0D6B_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_mBA8405CA0C1426234043E941C50F8F3C2263305E_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6C198B51ACD7B8EC62D5E0E75433C12BE9D65A58_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		V_1 = L_2;
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_0, L_3)), ((int32_t)64), NULL);
		V_2 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_length;
		int32_t L_7;
		L_7 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_5, L_6)), ((int32_t)64), NULL);
		V_3 = L_7;
		int32_t L_8 = V_1;
		int32_t L_9 = ___0_length;
		int32_t L_10;
		L_10 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_8, L_9)), ((int32_t)64), NULL);
		V_4 = L_10;
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_bucketLength;
		int32_t L_13;
		L_13 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_11, L_12)), ((int32_t)64), NULL);
		V_5 = L_13;
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		int32_t L_16 = V_4;
		int32_t L_17 = V_5;
		int32_t* L_18 = ___2_keyOffset;
		int32_t L_19 = V_2;
		*((int32_t*)L_18) = (int32_t)L_19;
		int32_t* L_20 = ___3_nextOffset;
		int32_t* L_21 = ___2_keyOffset;
		int32_t L_22 = *((int32_t*)L_21);
		int32_t L_23 = V_3;
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_22, L_23));
		int32_t* L_24 = ___4_bucketOffset;
		int32_t* L_25 = ___3_nextOffset;
		int32_t L_26 = *((int32_t*)L_25);
		int32_t L_27 = V_4;
		*((int32_t*)L_24) = (int32_t)((int32_t)il2cpp_codegen_add(L_26, L_27));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_14, L_15)), L_16)), L_17));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m78C5BE108CCA184618754DC90EDEACB2D11823CD_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5B2EBCF5A7515312D5BBDA1CC5ACDA8C99F14E18_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_mFAA6F9C6A87B112BBD85F22709B4E18563AA5593_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		V_1 = L_2;
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_0, L_3)), ((int32_t)64), NULL);
		V_2 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_length;
		int32_t L_7;
		L_7 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_5, L_6)), ((int32_t)64), NULL);
		V_3 = L_7;
		int32_t L_8 = V_1;
		int32_t L_9 = ___0_length;
		int32_t L_10;
		L_10 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_8, L_9)), ((int32_t)64), NULL);
		V_4 = L_10;
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_bucketLength;
		int32_t L_13;
		L_13 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_11, L_12)), ((int32_t)64), NULL);
		V_5 = L_13;
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		int32_t L_16 = V_4;
		int32_t L_17 = V_5;
		int32_t* L_18 = ___2_keyOffset;
		int32_t L_19 = V_2;
		*((int32_t*)L_18) = (int32_t)L_19;
		int32_t* L_20 = ___3_nextOffset;
		int32_t* L_21 = ___2_keyOffset;
		int32_t L_22 = *((int32_t*)L_21);
		int32_t L_23 = V_3;
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_22, L_23));
		int32_t* L_24 = ___4_bucketOffset;
		int32_t* L_25 = ___3_nextOffset;
		int32_t L_26 = *((int32_t*)L_25);
		int32_t L_27 = V_4;
		*((int32_t*)L_24) = (int32_t)((int32_t)il2cpp_codegen_add(L_26, L_27));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_14, L_15)), L_16)), L_17));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m10D5A43BB7A59DB1DF5EA1B766585486A29DFFE1_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		V_1 = L_2;
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_0, L_3)), ((int32_t)64), NULL);
		V_2 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_length;
		int32_t L_7;
		L_7 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_5, L_6)), ((int32_t)64), NULL);
		V_3 = L_7;
		int32_t L_8 = V_1;
		int32_t L_9 = ___0_length;
		int32_t L_10;
		L_10 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_8, L_9)), ((int32_t)64), NULL);
		V_4 = L_10;
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_bucketLength;
		int32_t L_13;
		L_13 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_11, L_12)), ((int32_t)64), NULL);
		V_5 = L_13;
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		int32_t L_16 = V_4;
		int32_t L_17 = V_5;
		int32_t* L_18 = ___2_keyOffset;
		int32_t L_19 = V_2;
		*((int32_t*)L_18) = (int32_t)L_19;
		int32_t* L_20 = ___3_nextOffset;
		int32_t* L_21 = ___2_keyOffset;
		int32_t L_22 = *((int32_t*)L_21);
		int32_t L_23 = V_3;
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_22, L_23));
		int32_t* L_24 = ___4_bucketOffset;
		int32_t* L_25 = ___3_nextOffset;
		int32_t L_26 = *((int32_t*)L_25);
		int32_t L_27 = V_4;
		*((int32_t*)L_24) = (int32_t)((int32_t)il2cpp_codegen_add(L_26, L_27));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_14, L_15)), L_16)), L_17));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_m79097586CAA11BAA2AB2DB05B7A2BD1DDE391905_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_m07CD2CC6AE0C968369AEFFC05481EE370280903F_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_m9A0B080F904D8ED7A7F58A6AD867315894D8BB01_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		V_1 = L_2;
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_0, L_3)), ((int32_t)64), NULL);
		V_2 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_length;
		int32_t L_7;
		L_7 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_5, L_6)), ((int32_t)64), NULL);
		V_3 = L_7;
		int32_t L_8 = V_1;
		int32_t L_9 = ___0_length;
		int32_t L_10;
		L_10 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_8, L_9)), ((int32_t)64), NULL);
		V_4 = L_10;
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_bucketLength;
		int32_t L_13;
		L_13 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_11, L_12)), ((int32_t)64), NULL);
		V_5 = L_13;
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		int32_t L_16 = V_4;
		int32_t L_17 = V_5;
		int32_t* L_18 = ___2_keyOffset;
		int32_t L_19 = V_2;
		*((int32_t*)L_18) = (int32_t)L_19;
		int32_t* L_20 = ___3_nextOffset;
		int32_t* L_21 = ___2_keyOffset;
		int32_t L_22 = *((int32_t*)L_21);
		int32_t L_23 = V_3;
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_22, L_23));
		int32_t* L_24 = ___4_bucketOffset;
		int32_t* L_25 = ___3_nextOffset;
		int32_t L_26 = *((int32_t*)L_25);
		int32_t L_27 = V_4;
		*((int32_t*)L_24) = (int32_t)((int32_t)il2cpp_codegen_add(L_26, L_27));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_14, L_15)), L_16)), L_17));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_m171788E3E41F9227C9DCC0B29A457505D48D7BE7_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_m04C9CC92295DB84F3F3826B06BA0221DA973FB56_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_m7966BC0577D20C1E83FA97C815806D75A2D4EB70_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		V_1 = L_2;
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_0, L_3)), ((int32_t)64), NULL);
		V_2 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_length;
		int32_t L_7;
		L_7 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_5, L_6)), ((int32_t)64), NULL);
		V_3 = L_7;
		int32_t L_8 = V_1;
		int32_t L_9 = ___0_length;
		int32_t L_10;
		L_10 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_8, L_9)), ((int32_t)64), NULL);
		V_4 = L_10;
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_bucketLength;
		int32_t L_13;
		L_13 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_11, L_12)), ((int32_t)64), NULL);
		V_5 = L_13;
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		int32_t L_16 = V_4;
		int32_t L_17 = V_5;
		int32_t* L_18 = ___2_keyOffset;
		int32_t L_19 = V_2;
		*((int32_t*)L_18) = (int32_t)L_19;
		int32_t* L_20 = ___3_nextOffset;
		int32_t* L_21 = ___2_keyOffset;
		int32_t L_22 = *((int32_t*)L_21);
		int32_t L_23 = V_3;
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_22, L_23));
		int32_t* L_24 = ___4_bucketOffset;
		int32_t* L_25 = ___3_nextOffset;
		int32_t L_26 = *((int32_t*)L_25);
		int32_t L_27 = V_4;
		*((int32_t*)L_24) = (int32_t)((int32_t)il2cpp_codegen_add(L_26, L_27));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_14, L_15)), L_16)), L_17));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_CalculateDataSize_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m65020AF3814D4EFD212368E073FBE8160E83659F_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m1F87695ED302C16C36379DF4FF11644369D02D75_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_m7966BC0577D20C1E83FA97C815806D75A2D4EB70_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		V_1 = L_2;
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_0, L_3)), ((int32_t)64), NULL);
		V_2 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_length;
		int32_t L_7;
		L_7 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_5, L_6)), ((int32_t)64), NULL);
		V_3 = L_7;
		int32_t L_8 = V_1;
		int32_t L_9 = ___0_length;
		int32_t L_10;
		L_10 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_8, L_9)), ((int32_t)64), NULL);
		V_4 = L_10;
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_bucketLength;
		int32_t L_13;
		L_13 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_11, L_12)), ((int32_t)64), NULL);
		V_5 = L_13;
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		int32_t L_16 = V_4;
		int32_t L_17 = V_5;
		int32_t* L_18 = ___2_keyOffset;
		int32_t L_19 = V_2;
		*((int32_t*)L_18) = (int32_t)L_19;
		int32_t* L_20 = ___3_nextOffset;
		int32_t* L_21 = ___2_keyOffset;
		int32_t L_22 = *((int32_t*)L_21);
		int32_t L_23 = V_3;
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_22, L_23));
		int32_t* L_24 = ___4_bucketOffset;
		int32_t* L_25 = ___3_nextOffset;
		int32_t L_26 = *((int32_t*)L_25);
		int32_t L_27 = V_4;
		*((int32_t*)L_24) = (int32_t)((int32_t)il2cpp_codegen_add(L_26, L_27));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_14, L_15)), L_16)), L_17));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyArray_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_m1F65C92ED355A1ED9F1A243D222E04F18C3FF030_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t04DF635C0FEAB264F763F4B942D6A669F0B1F1C1 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		goto IL_0054;
	}

IL_001d:
	{
		int32_t* L_5 = V_0;
		int32_t L_6 = V_2;
		int32_t L_7 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_6), 4)))));
		V_5 = L_7;
		goto IL_004b;
	}

IL_0028:
	{
		int32_t L_8 = V_3;
		int32_t L_9 = L_8;
		V_3 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___keys;
		int32_t L_12 = V_5;
		AspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50 L_13;
		L_13 = UnsafeUtility_ReadArrayElement_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_m42C27C99C832082CC850074116836AD6C7951F4F_inline((void*)L_11, L_12, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(AspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50, ((&___1_result))->___m_Buffer, L_9, (L_13));
		int32_t* L_14 = V_1;
		int32_t L_15 = V_5;
		int32_t L_16 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4)))));
		V_5 = L_16;
	}

IL_004b:
	{
		int32_t L_17 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)(-1)))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0054:
	{
		int32_t L_19 = V_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		int32_t L_21 = L_20->___bucketCapacityMask;
		if ((((int32_t)L_19) > ((int32_t)L_21)))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_22 = V_3;
		int32_t L_23 = V_4;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_001d;
		}
	}

IL_0062:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyArray_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_mE4D021AEA5F6DA3E518498C925ACD4730FC2FDE2_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		goto IL_0054;
	}

IL_001d:
	{
		int32_t* L_5 = V_0;
		int32_t L_6 = V_2;
		int32_t L_7 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_6), 4)))));
		V_5 = L_7;
		goto IL_004b;
	}

IL_0028:
	{
		int32_t L_8 = V_3;
		int32_t L_9 = L_8;
		V_3 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___keys;
		int32_t L_12 = V_5;
		BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 L_13;
		L_13 = UnsafeUtility_ReadArrayElement_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_m11F042F9F93240F4EC774AB70400B604FB52EACF_inline((void*)L_11, L_12, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61, ((&___1_result))->___m_Buffer, L_9, (L_13));
		int32_t* L_14 = V_1;
		int32_t L_15 = V_5;
		int32_t L_16 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4)))));
		V_5 = L_16;
	}

IL_004b:
	{
		int32_t L_17 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)(-1)))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0054:
	{
		int32_t L_19 = V_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		int32_t L_21 = L_20->___bucketCapacityMask;
		if ((((int32_t)L_19) > ((int32_t)L_21)))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_22 = V_3;
		int32_t L_23 = V_4;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_001d;
		}
	}

IL_0062:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyArray_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_m5702F282B7CC403A51824F40740819B2054CDE0E_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t3C4549E0042C159CF962BB776A84D2C0D9864609 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		goto IL_0054;
	}

IL_001d:
	{
		int32_t* L_5 = V_0;
		int32_t L_6 = V_2;
		int32_t L_7 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_6), 4)))));
		V_5 = L_7;
		goto IL_004b;
	}

IL_0028:
	{
		int32_t L_8 = V_3;
		int32_t L_9 = L_8;
		V_3 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___keys;
		int32_t L_12 = V_5;
		ComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D L_13;
		L_13 = UnsafeUtility_ReadArrayElement_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_mC0855E940EDA880F3AC7284411BE4E8ED52CA780_inline((void*)L_11, L_12, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(ComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D, ((&___1_result))->___m_Buffer, L_9, (L_13));
		int32_t* L_14 = V_1;
		int32_t L_15 = V_5;
		int32_t L_16 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4)))));
		V_5 = L_16;
	}

IL_004b:
	{
		int32_t L_17 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)(-1)))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0054:
	{
		int32_t L_19 = V_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		int32_t L_21 = L_20->___bucketCapacityMask;
		if ((((int32_t)L_19) > ((int32_t)L_21)))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_22 = V_3;
		int32_t L_23 = V_4;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_001d;
		}
	}

IL_0062:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyArray_TisComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_mA93354AD4F62C77CC3FEE7C8A95B62D871AC05D1_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_tA382EEE61A1BB1A47C7D6FE762A71DFA9BA0EC3E ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		goto IL_0054;
	}

IL_001d:
	{
		int32_t* L_5 = V_0;
		int32_t L_6 = V_2;
		int32_t L_7 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_6), 4)))));
		V_5 = L_7;
		goto IL_004b;
	}

IL_0028:
	{
		int32_t L_8 = V_3;
		int32_t L_9 = L_8;
		V_3 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___keys;
		int32_t L_12 = V_5;
		ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA L_13;
		L_13 = UnsafeUtility_ReadArrayElement_TisComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_mE975124B2DB09771E16EABF7A001A4619D5F6768_inline((void*)L_11, L_12, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA, ((&___1_result))->___m_Buffer, L_9, (L_13));
		int32_t* L_14 = V_1;
		int32_t L_15 = V_5;
		int32_t L_16 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4)))));
		V_5 = L_16;
	}

IL_004b:
	{
		int32_t L_17 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)(-1)))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0054:
	{
		int32_t L_19 = V_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		int32_t L_21 = L_20->___bucketCapacityMask;
		if ((((int32_t)L_19) > ((int32_t)L_21)))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_22 = V_3;
		int32_t L_23 = V_4;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_001d;
		}
	}

IL_0062:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyArray_TisComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB_m7917EFC1BBB1009D71BC3CA83CCE8119F6199D65_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t31CD9A149F8F3956127329CD9F526C41662FED99 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		goto IL_0054;
	}

IL_001d:
	{
		int32_t* L_5 = V_0;
		int32_t L_6 = V_2;
		int32_t L_7 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_6), 4)))));
		V_5 = L_7;
		goto IL_004b;
	}

IL_0028:
	{
		int32_t L_8 = V_3;
		int32_t L_9 = L_8;
		V_3 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___keys;
		int32_t L_12 = V_5;
		ComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB L_13;
		L_13 = UnsafeUtility_ReadArrayElement_TisComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB_mF1DA179FEC24B2BD7741BBE13FC22FA26604FBB9_inline((void*)L_11, L_12, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(ComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB, ((&___1_result))->___m_Buffer, L_9, (L_13));
		int32_t* L_14 = V_1;
		int32_t L_15 = V_5;
		int32_t L_16 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4)))));
		V_5 = L_16;
	}

IL_004b:
	{
		int32_t L_17 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)(-1)))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0054:
	{
		int32_t L_19 = V_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		int32_t L_21 = L_20->___bucketCapacityMask;
		if ((((int32_t)L_19) > ((int32_t)L_21)))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_22 = V_3;
		int32_t L_23 = V_4;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_001d;
		}
	}

IL_0062:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyArray_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m1E0001740440465E85ACE7600F0885CEB96E524F_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_tDDBE2218E06075EFCDE280D90B6FA7C4BF46BFD2 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		goto IL_0054;
	}

IL_001d:
	{
		int32_t* L_5 = V_0;
		int32_t L_6 = V_2;
		int32_t L_7 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_6), 4)))));
		V_5 = L_7;
		goto IL_004b;
	}

IL_0028:
	{
		int32_t L_8 = V_3;
		int32_t L_9 = L_8;
		V_3 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___keys;
		int32_t L_12 = V_5;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_13;
		L_13 = UnsafeUtility_ReadArrayElement_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m64F6C7E9916D768E9365F442F252409EECA0CE9C_inline((void*)L_11, L_12, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD, ((&___1_result))->___m_Buffer, L_9, (L_13));
		int32_t* L_14 = V_1;
		int32_t L_15 = V_5;
		int32_t L_16 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4)))));
		V_5 = L_16;
	}

IL_004b:
	{
		int32_t L_17 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)(-1)))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0054:
	{
		int32_t L_19 = V_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		int32_t L_21 = L_20->___bucketCapacityMask;
		if ((((int32_t)L_19) > ((int32_t)L_21)))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_22 = V_3;
		int32_t L_23 = V_4;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_001d;
		}
	}

IL_0062:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyArray_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_m7E3FCBF256A876EC31D1D6D4C55F194C2BD93196_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_tB4B7683DD2A8F815875BE195332D74EEF88AE45E ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		goto IL_0054;
	}

IL_001d:
	{
		int32_t* L_5 = V_0;
		int32_t L_6 = V_2;
		int32_t L_7 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_6), 4)))));
		V_5 = L_7;
		goto IL_004b;
	}

IL_0028:
	{
		int32_t L_8 = V_3;
		int32_t L_9 = L_8;
		V_3 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___keys;
		int32_t L_12 = V_5;
		EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 L_13;
		L_13 = UnsafeUtility_ReadArrayElement_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_mBA7BC7F5CDE7522066ADEB4389DB7FDE05392F39_inline((void*)L_11, L_12, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877, ((&___1_result))->___m_Buffer, L_9, (L_13));
		int32_t* L_14 = V_1;
		int32_t L_15 = V_5;
		int32_t L_16 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4)))));
		V_5 = L_16;
	}

IL_004b:
	{
		int32_t L_17 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)(-1)))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0054:
	{
		int32_t L_19 = V_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		int32_t L_21 = L_20->___bucketCapacityMask;
		if ((((int32_t)L_19) > ((int32_t)L_21)))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_22 = V_3;
		int32_t L_23 = V_4;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_001d;
		}
	}

IL_0062:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyArray_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_m1409D97810B844EFB9E50C7453788837D0773F26_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t914A2D89770088554B462280097B5C6823D2C33D ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		goto IL_0054;
	}

IL_001d:
	{
		int32_t* L_5 = V_0;
		int32_t L_6 = V_2;
		int32_t L_7 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_6), 4)))));
		V_5 = L_7;
		goto IL_004b;
	}

IL_0028:
	{
		int32_t L_8 = V_3;
		int32_t L_9 = L_8;
		V_3 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___keys;
		int32_t L_12 = V_5;
		EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 L_13;
		L_13 = UnsafeUtility_ReadArrayElement_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_mB198FB4671ADE00B3ADE86BC40D6ABD19AE8C07B_inline((void*)L_11, L_12, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4, ((&___1_result))->___m_Buffer, L_9, (L_13));
		int32_t* L_14 = V_1;
		int32_t L_15 = V_5;
		int32_t L_16 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4)))));
		V_5 = L_16;
	}

IL_004b:
	{
		int32_t L_17 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)(-1)))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0054:
	{
		int32_t L_19 = V_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		int32_t L_21 = L_20->___bucketCapacityMask;
		if ((((int32_t)L_19) > ((int32_t)L_21)))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_22 = V_3;
		int32_t L_23 = V_4;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_001d;
		}
	}

IL_0062:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyArray_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_mEA9746072CD637C118250B1CB61149ED6E19323C_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t2A0257A9C26D1BA03925423B9A39B0A58DDBD41D ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		goto IL_0054;
	}

IL_001d:
	{
		int32_t* L_5 = V_0;
		int32_t L_6 = V_2;
		int32_t L_7 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_6), 4)))));
		V_5 = L_7;
		goto IL_004b;
	}

IL_0028:
	{
		int32_t L_8 = V_3;
		int32_t L_9 = L_8;
		V_3 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___keys;
		int32_t L_12 = V_5;
		Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B L_13;
		L_13 = UnsafeUtility_ReadArrayElement_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_mCCED167A2D047452D014A45173D1FDB05928928C_inline((void*)L_11, L_12, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B, ((&___1_result))->___m_Buffer, L_9, (L_13));
		int32_t* L_14 = V_1;
		int32_t L_15 = V_5;
		int32_t L_16 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4)))));
		V_5 = L_16;
	}

IL_004b:
	{
		int32_t L_17 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)(-1)))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0054:
	{
		int32_t L_19 = V_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		int32_t L_21 = L_20->___bucketCapacityMask;
		if ((((int32_t)L_19) > ((int32_t)L_21)))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_22 = V_3;
		int32_t L_23 = V_4;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_001d;
		}
	}

IL_0062:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m7038B50B7446591159A4FD4B5C96EC436C073DEC_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		goto IL_0054;
	}

IL_001d:
	{
		int32_t* L_5 = V_0;
		int32_t L_6 = V_2;
		int32_t L_7 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_6), 4)))));
		V_5 = L_7;
		goto IL_004b;
	}

IL_0028:
	{
		int32_t L_8 = V_3;
		int32_t L_9 = L_8;
		V_3 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___keys;
		int32_t L_12 = V_5;
		int32_t L_13;
		L_13 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_11, L_12, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, ((&___1_result))->___m_Buffer, L_9, (L_13));
		int32_t* L_14 = V_1;
		int32_t L_15 = V_5;
		int32_t L_16 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4)))));
		V_5 = L_16;
	}

IL_004b:
	{
		int32_t L_17 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)(-1)))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0054:
	{
		int32_t L_19 = V_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		int32_t L_21 = L_20->___bucketCapacityMask;
		if ((((int32_t)L_19) > ((int32_t)L_21)))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_22 = V_3;
		int32_t L_23 = V_4;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_001d;
		}
	}

IL_0062:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBEE29F916447CCFACE10E7F9B5C377FEAB0CC436_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t25F6CEC65DB0532CB91E2B2890FF6C2D52A210A3 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		goto IL_0054;
	}

IL_001d:
	{
		int32_t* L_5 = V_0;
		int32_t L_6 = V_2;
		int32_t L_7 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_6), 4)))));
		V_5 = L_7;
		goto IL_004b;
	}

IL_0028:
	{
		int32_t L_8 = V_3;
		int32_t L_9 = L_8;
		V_3 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___keys;
		int32_t L_12 = V_5;
		int64_t L_13;
		L_13 = UnsafeUtility_ReadArrayElement_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m51BA37651B60ACB0F4F6867E07AB0C3E0046FC9C_inline((void*)L_11, L_12, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(int64_t, ((&___1_result))->___m_Buffer, L_9, (L_13));
		int32_t* L_14 = V_1;
		int32_t L_15 = V_5;
		int32_t L_16 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4)))));
		V_5 = L_16;
	}

IL_004b:
	{
		int32_t L_17 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)(-1)))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0054:
	{
		int32_t L_19 = V_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		int32_t L_21 = L_20->___bucketCapacityMask;
		if ((((int32_t)L_19) > ((int32_t)L_21)))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_22 = V_3;
		int32_t L_23 = V_4;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_001d;
		}
	}

IL_0062:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyArray_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m51DC0B759F9A742AD50027C51A80847C4ACF79B8_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t8EAF026790EF3DF68B0045BB0E38FB17C27171FF ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		goto IL_0054;
	}

IL_001d:
	{
		int32_t* L_5 = V_0;
		int32_t L_6 = V_2;
		int32_t L_7 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_6), 4)))));
		V_5 = L_7;
		goto IL_004b;
	}

IL_0028:
	{
		int32_t L_8 = V_3;
		int32_t L_9 = L_8;
		V_3 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___keys;
		int32_t L_12 = V_5;
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_13;
		L_13 = UnsafeUtility_ReadArrayElement_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m055B0246613F21DF105592E21674EE77285875DC_inline((void*)L_11, L_12, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C, ((&___1_result))->___m_Buffer, L_9, (L_13));
		int32_t* L_14 = V_1;
		int32_t L_15 = V_5;
		int32_t L_16 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4)))));
		V_5 = L_16;
	}

IL_004b:
	{
		int32_t L_17 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)(-1)))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0054:
	{
		int32_t L_19 = V_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		int32_t L_21 = L_20->___bucketCapacityMask;
		if ((((int32_t)L_19) > ((int32_t)L_21)))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_22 = V_3;
		int32_t L_23 = V_4;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_001d;
		}
	}

IL_0062:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m35AAE2BE00F3573D2628F72B71438DEC5579DBA7_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		goto IL_0054;
	}

IL_001d:
	{
		int32_t* L_5 = V_0;
		int32_t L_6 = V_2;
		int32_t L_7 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_6), 4)))));
		V_5 = L_7;
		goto IL_004b;
	}

IL_0028:
	{
		int32_t L_8 = V_3;
		int32_t L_9 = L_8;
		V_3 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___keys;
		int32_t L_12 = V_5;
		uint64_t L_13;
		L_13 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline((void*)L_11, L_12, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(uint64_t, ((&___1_result))->___m_Buffer, L_9, (L_13));
		int32_t* L_14 = V_1;
		int32_t L_15 = V_5;
		int32_t L_16 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4)))));
		V_5 = L_16;
	}

IL_004b:
	{
		int32_t L_17 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)(-1)))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0054:
	{
		int32_t L_19 = V_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		int32_t L_21 = L_20->___bucketCapacityMask;
		if ((((int32_t)L_19) > ((int32_t)L_21)))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_22 = V_3;
		int32_t L_23 = V_4;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_001d;
		}
	}

IL_0062:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyArray_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_mD32DDFC3FE80ECAB1BE07ED72C9559E2A2E40225_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t3348E32CE02DFE5B4012620EFD1FE7BF5285DA7A ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		goto IL_0054;
	}

IL_001d:
	{
		int32_t* L_5 = V_0;
		int32_t L_6 = V_2;
		int32_t L_7 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_6), 4)))));
		V_5 = L_7;
		goto IL_004b;
	}

IL_0028:
	{
		int32_t L_8 = V_3;
		int32_t L_9 = L_8;
		V_3 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___keys;
		int32_t L_12 = V_5;
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A L_13;
		L_13 = UnsafeUtility_ReadArrayElement_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m7ACC04D18A4EC85ECFB185A88B79EB26AD1DACB1_inline((void*)L_11, L_12, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A, ((&___1_result))->___m_Buffer, L_9, (L_13));
		int32_t* L_14 = V_1;
		int32_t L_15 = V_5;
		int32_t L_16 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4)))));
		V_5 = L_16;
	}

IL_004b:
	{
		int32_t L_17 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)(-1)))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0054:
	{
		int32_t L_19 = V_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		int32_t L_21 = L_20->___bucketCapacityMask;
		if ((((int32_t)L_19) > ((int32_t)L_21)))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_22 = V_3;
		int32_t L_23 = V_4;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_001d;
		}
	}

IL_0062:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyArray_TisIl2CppFullySharedGenericStruct_m7137096325EC50712B1665E2B5937352A1B004F2_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TKey_tA421440C75A581A02A933BEA4E233521D2CE2584 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const Il2CppFullySharedGenericStruct L_13 = alloca(SizeOf_TKey_tA421440C75A581A02A933BEA4E233521D2CE2584);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		goto IL_0054;
	}

IL_001d:
	{
		int32_t* L_5 = V_0;
		int32_t L_6 = V_2;
		int32_t L_7 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_6), 4)))));
		V_5 = L_7;
		goto IL_004b;
	}

IL_0028:
	{
		int32_t L_8 = V_3;
		int32_t L_9 = L_8;
		V_3 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___keys;
		int32_t L_12 = V_5;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, (void*)L_11, L_12, (Il2CppFullySharedGenericStruct*)L_13);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), (&___1_result), L_9, L_13);
		int32_t* L_14 = V_1;
		int32_t L_15 = V_5;
		int32_t L_16 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4)))));
		V_5 = L_16;
	}

IL_004b:
	{
		int32_t L_17 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)(-1)))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0054:
	{
		int32_t L_19 = V_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		int32_t L_21 = L_20->___bucketCapacityMask;
		if ((((int32_t)L_19) > ((int32_t)L_21)))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_22 = V_3;
		int32_t L_23 = V_4;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_001d;
		}
	}

IL_0062:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyArray_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_mDAD7C3B392936A38F00EC12ACDF426063ED89505_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_tEE4C676F8F6EE01446E2FB86503B8701786CD215 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		goto IL_0054;
	}

IL_001d:
	{
		int32_t* L_5 = V_0;
		int32_t L_6 = V_2;
		int32_t L_7 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_6), 4)))));
		V_5 = L_7;
		goto IL_004b;
	}

IL_0028:
	{
		int32_t L_8 = V_3;
		int32_t L_9 = L_8;
		V_3 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___keys;
		int32_t L_12 = V_5;
		EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D L_13;
		L_13 = UnsafeUtility_ReadArrayElement_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_mC6063FB4A2E79E711911A585DB8C2A0F994A4923_inline((void*)L_11, L_12, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D, ((&___1_result))->___m_Buffer, L_9, (L_13));
		int32_t* L_14 = V_1;
		int32_t L_15 = V_5;
		int32_t L_16 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4)))));
		V_5 = L_16;
	}

IL_004b:
	{
		int32_t L_17 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)(-1)))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0054:
	{
		int32_t L_19 = V_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		int32_t L_21 = L_20->___bucketCapacityMask;
		if ((((int32_t)L_19) > ((int32_t)L_21)))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_22 = V_3;
		int32_t L_23 = V_4;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_001d;
		}
	}

IL_0062:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyArray_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_m0E70B31EEE27E94FBFDCCE4A87961F4B8F9240CC_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t8BCB604BE54DAF273FDE916E4D30F17CBB42F015 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		goto IL_0054;
	}

IL_001d:
	{
		int32_t* L_5 = V_0;
		int32_t L_6 = V_2;
		int32_t L_7 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_6), 4)))));
		V_5 = L_7;
		goto IL_004b;
	}

IL_0028:
	{
		int32_t L_8 = V_3;
		int32_t L_9 = L_8;
		V_3 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___keys;
		int32_t L_12 = V_5;
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_13;
		L_13 = UnsafeUtility_ReadArrayElement_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_m79A11EC661A750655C4DB523B26452DE76DBDAA8_inline((void*)L_11, L_12, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD, ((&___1_result))->___m_Buffer, L_9, (L_13));
		int32_t* L_14 = V_1;
		int32_t L_15 = V_5;
		int32_t L_16 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4)))));
		V_5 = L_16;
	}

IL_004b:
	{
		int32_t L_17 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)(-1)))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0054:
	{
		int32_t L_19 = V_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		int32_t L_21 = L_20->___bucketCapacityMask;
		if ((((int32_t)L_19) > ((int32_t)L_21)))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_22 = V_3;
		int32_t L_23 = V_4;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_001d;
		}
	}

IL_0062:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_TisComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_m0FCA53FA0700EAFD2F520D5807F7B84AF146AEB0_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_tA0478175575F8E90E221672CD5CCA63FDA106E79 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = NativeKeyValueArrays_2_get_Length_m05D9B229D47593D2B403CD94777A1A38ADD22CC2((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_007b;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0072;
	}

IL_0030:
	{
		NativeArray_1_t04DF635C0FEAB264F763F4B942D6A669F0B1F1C1* L_10 = (NativeArray_1_t04DF635C0FEAB264F763F4B942D6A669F0B1F1C1*)(&(&___1_result)->___Keys);
		int32_t L_11 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_6;
		AspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50 L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_m42C27C99C832082CC850074116836AD6C7951F4F_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		IL2CPP_NATIVEARRAY_SET_ITEM(AspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50, (L_10)->___m_Buffer, L_11, (L_15));
		NativeArray_1_tA382EEE61A1BB1A47C7D6FE762A71DFA9BA0EC3E* L_16 = (NativeArray_1_tA382EEE61A1BB1A47C7D6FE762A71DFA9BA0EC3E*)(&(&___1_result)->___Values);
		int32_t L_17 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_6;
		ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_mE975124B2DB09771E16EABF7A001A4619D5F6768_inline((void*)L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 9));
		IL2CPP_NATIVEARRAY_SET_ITEM(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA, (L_16)->___m_Buffer, L_17, (L_21));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4)))));
		V_6 = L_25;
	}

IL_0072:
	{
		int32_t L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007b:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0025;
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_m202FA5F5FFDE5A0DCD7E0B472C02513534DE0833_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_t86D5872EA22D11EA0F7F6720038C1D3C7B3626F7 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = NativeKeyValueArrays_2_get_Length_mE13C3C70EDD1B0001EEE17B99E71C537CC117841((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_007b;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0072;
	}

IL_0030:
	{
		NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837* L_10 = (NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837*)(&(&___1_result)->___Keys);
		int32_t L_11 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_6;
		BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_m11F042F9F93240F4EC774AB70400B604FB52EACF_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		IL2CPP_NATIVEARRAY_SET_ITEM(BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61, (L_10)->___m_Buffer, L_11, (L_15));
		NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837* L_16 = (NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837*)(&(&___1_result)->___Values);
		int32_t L_17 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_6;
		BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_m11F042F9F93240F4EC774AB70400B604FB52EACF_inline((void*)L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 9));
		IL2CPP_NATIVEARRAY_SET_ITEM(BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61, (L_16)->___m_Buffer, L_17, (L_21));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4)))));
		V_6 = L_25;
	}

IL_0072:
	{
		int32_t L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007b:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0025;
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA8ADC5B5506C1BD46F98F8068D9BE6193FBBDE0A_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_tF6AC51744C9F84B17DF17BA5A84D8AAFBD5CE5B1 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = NativeKeyValueArrays_2_get_Length_m9BA7505B51895C93D41E1082DAEB10A749837217((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_007b;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0072;
	}

IL_0030:
	{
		NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837* L_10 = (NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837*)(&(&___1_result)->___Keys);
		int32_t L_11 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_6;
		BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_m11F042F9F93240F4EC774AB70400B604FB52EACF_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		IL2CPP_NATIVEARRAY_SET_ITEM(BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61, (L_10)->___m_Buffer, L_11, (L_15));
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_16 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&(&___1_result)->___Values);
		int32_t L_17 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_6;
		int32_t L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 9));
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_16)->___m_Buffer, L_17, (L_21));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4)))));
		V_6 = L_25;
	}

IL_0072:
	{
		int32_t L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007b:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0025;
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD150FEFF68F5B80F2C8FF947CE8FBCD23E7D2889_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_tD7D7B26C1DC876823B7FD795B6145264E5FEAFE2 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = NativeKeyValueArrays_2_get_Length_m495FB642ECEE7F51F4E001D31866ECC1F96842D2((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_007b;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0072;
	}

IL_0030:
	{
		NativeArray_1_t3C4549E0042C159CF962BB776A84D2C0D9864609* L_10 = (NativeArray_1_t3C4549E0042C159CF962BB776A84D2C0D9864609*)(&(&___1_result)->___Keys);
		int32_t L_11 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_6;
		ComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_mC0855E940EDA880F3AC7284411BE4E8ED52CA780_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		IL2CPP_NATIVEARRAY_SET_ITEM(ComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D, (L_10)->___m_Buffer, L_11, (L_15));
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_16 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&(&___1_result)->___Values);
		int32_t L_17 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_6;
		int32_t L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 9));
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_16)->___m_Buffer, L_17, (L_21));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4)))));
		V_6 = L_25;
	}

IL_0072:
	{
		int32_t L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007b:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0025;
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mD8E96FBC54814E1F7D2D4D20ADAC647E0E998C8D_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_tC2B57424F4454FB7290A62F13E6B400E0DA21334 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = NativeKeyValueArrays_2_get_Length_mC7C7C549E526B3043D3B89C47901CC0304691AA0((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_007b;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0072;
	}

IL_0030:
	{
		NativeArray_1_tA382EEE61A1BB1A47C7D6FE762A71DFA9BA0EC3E* L_10 = (NativeArray_1_tA382EEE61A1BB1A47C7D6FE762A71DFA9BA0EC3E*)(&(&___1_result)->___Keys);
		int32_t L_11 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_6;
		ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_mE975124B2DB09771E16EABF7A001A4619D5F6768_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		IL2CPP_NATIVEARRAY_SET_ITEM(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA, (L_10)->___m_Buffer, L_11, (L_15));
		NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB* L_16 = (NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB*)(&(&___1_result)->___Values);
		int32_t L_17 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_6;
		bool L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF765CB2E5FD631DFB79C25DE656F3C1BB359B995_inline((void*)L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 9));
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, (L_16)->___m_Buffer, L_17, (L_21));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4)))));
		V_6 = L_25;
	}

IL_0072:
	{
		int32_t L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007b:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0025;
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDDD492F289DADF38F24A2DEFF0847CC47B6EB2C1_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_t2C905AB91A46E53E95EA0AF42625DD6CD969A04F ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = NativeKeyValueArrays_2_get_Length_mA0998712AA1F29881732CA75431347B1BE5AF037((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_007b;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0072;
	}

IL_0030:
	{
		NativeArray_1_t31CD9A149F8F3956127329CD9F526C41662FED99* L_10 = (NativeArray_1_t31CD9A149F8F3956127329CD9F526C41662FED99*)(&(&___1_result)->___Keys);
		int32_t L_11 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_6;
		ComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB_mF1DA179FEC24B2BD7741BBE13FC22FA26604FBB9_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		IL2CPP_NATIVEARRAY_SET_ITEM(ComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB, (L_10)->___m_Buffer, L_11, (L_15));
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_16 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&(&___1_result)->___Values);
		int32_t L_17 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_6;
		int32_t L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 9));
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_16)->___m_Buffer, L_17, (L_21));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4)))));
		V_6 = L_25;
	}

IL_0072:
	{
		int32_t L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007b:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0025;
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m4DD02E85A6EF1E7F9692F354F17B3E6A0A819F4B_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_t9FFDDD66BB13315DEE458F90CE39BDA25EA48F7F ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = NativeKeyValueArrays_2_get_Length_mCA82A46E1937A92353E58CABB432A276DD87A7F8((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_007b;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0072;
	}

IL_0030:
	{
		NativeArray_1_tDDBE2218E06075EFCDE280D90B6FA7C4BF46BFD2* L_10 = (NativeArray_1_tDDBE2218E06075EFCDE280D90B6FA7C4BF46BFD2*)(&(&___1_result)->___Keys);
		int32_t L_11 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_6;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m64F6C7E9916D768E9365F442F252409EECA0CE9C_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		IL2CPP_NATIVEARRAY_SET_ITEM(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD, (L_10)->___m_Buffer, L_11, (L_15));
		NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB* L_16 = (NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB*)(&(&___1_result)->___Values);
		int32_t L_17 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_6;
		bool L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF765CB2E5FD631DFB79C25DE656F3C1BB359B995_inline((void*)L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 9));
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, (L_16)->___m_Buffer, L_17, (L_21));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4)))));
		V_6 = L_25;
	}

IL_0072:
	{
		int32_t L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007b:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0025;
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mDA31077A8E09FBA1F5DC9B2D8129E3643ADFA563_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_tB1B5782125283D58CDF246CFA314EF62210B2666 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = NativeKeyValueArrays_2_get_Length_m46091EB35CE64DFA9BD3F625AEB8FCBC0DEF9DF1((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_007b;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0072;
	}

IL_0030:
	{
		NativeArray_1_tDDBE2218E06075EFCDE280D90B6FA7C4BF46BFD2* L_10 = (NativeArray_1_tDDBE2218E06075EFCDE280D90B6FA7C4BF46BFD2*)(&(&___1_result)->___Keys);
		int32_t L_11 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_6;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m64F6C7E9916D768E9365F442F252409EECA0CE9C_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		IL2CPP_NATIVEARRAY_SET_ITEM(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD, (L_10)->___m_Buffer, L_11, (L_15));
		NativeArray_1_tDDBE2218E06075EFCDE280D90B6FA7C4BF46BFD2* L_16 = (NativeArray_1_tDDBE2218E06075EFCDE280D90B6FA7C4BF46BFD2*)(&(&___1_result)->___Values);
		int32_t L_17 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_6;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m64F6C7E9916D768E9365F442F252409EECA0CE9C_inline((void*)L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 9));
		IL2CPP_NATIVEARRAY_SET_ITEM(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD, (L_16)->___m_Buffer, L_17, (L_21));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4)))));
		V_6 = L_25;
	}

IL_0072:
	{
		int32_t L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007b:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0025;
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_m37FE1F5A585CD01EA1D2E0748321C7F9F28A030C_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_t98F568D75F1A22839640268F8BFE69F61FEA76DD ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = NativeKeyValueArrays_2_get_Length_m05805DDA2F8695E9D5EFDE5AA2200FDB34EE392F((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_007b;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0072;
	}

IL_0030:
	{
		NativeArray_1_tDDBE2218E06075EFCDE280D90B6FA7C4BF46BFD2* L_10 = (NativeArray_1_tDDBE2218E06075EFCDE280D90B6FA7C4BF46BFD2*)(&(&___1_result)->___Keys);
		int32_t L_11 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_6;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m64F6C7E9916D768E9365F442F252409EECA0CE9C_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		IL2CPP_NATIVEARRAY_SET_ITEM(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD, (L_10)->___m_Buffer, L_11, (L_15));
		NativeArray_1_tB4B7683DD2A8F815875BE195332D74EEF88AE45E* L_16 = (NativeArray_1_tB4B7683DD2A8F815875BE195332D74EEF88AE45E*)(&(&___1_result)->___Values);
		int32_t L_17 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_6;
		EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_mBA7BC7F5CDE7522066ADEB4389DB7FDE05392F39_inline((void*)L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 9));
		IL2CPP_NATIVEARRAY_SET_ITEM(EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877, (L_16)->___m_Buffer, L_17, (L_21));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4)))));
		V_6 = L_25;
	}

IL_0072:
	{
		int32_t L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007b:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0025;
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5E018F516472C101233A9C9C4F06B4ECF738D7C6_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_t22F01DB4B942949A985F28EA3B38E6BAF0789DA9 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = NativeKeyValueArrays_2_get_Length_m613798F3D8C4EC9F073CAF27BE9B9DE9D30256ED((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_007b;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0072;
	}

IL_0030:
	{
		NativeArray_1_tDDBE2218E06075EFCDE280D90B6FA7C4BF46BFD2* L_10 = (NativeArray_1_tDDBE2218E06075EFCDE280D90B6FA7C4BF46BFD2*)(&(&___1_result)->___Keys);
		int32_t L_11 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_6;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m64F6C7E9916D768E9365F442F252409EECA0CE9C_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		IL2CPP_NATIVEARRAY_SET_ITEM(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD, (L_10)->___m_Buffer, L_11, (L_15));
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_16 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&(&___1_result)->___Values);
		int32_t L_17 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_6;
		int32_t L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 9));
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_16)->___m_Buffer, L_17, (L_21));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4)))));
		V_6 = L_25;
	}

IL_0072:
	{
		int32_t L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007b:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0025;
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisTransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D_m7C59FE3529D58F3E37BA1A11E912CF5CBC2C9CE5_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_t87518DE2FC929C32E47D25B0F6AC7D33FD0C03BA ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = NativeKeyValueArrays_2_get_Length_mC21E5B9407958D42ABC04DC84542B52EE20DC70D((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_007b;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0072;
	}

IL_0030:
	{
		NativeArray_1_tDDBE2218E06075EFCDE280D90B6FA7C4BF46BFD2* L_10 = (NativeArray_1_tDDBE2218E06075EFCDE280D90B6FA7C4BF46BFD2*)(&(&___1_result)->___Keys);
		int32_t L_11 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_6;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m64F6C7E9916D768E9365F442F252409EECA0CE9C_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		IL2CPP_NATIVEARRAY_SET_ITEM(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD, (L_10)->___m_Buffer, L_11, (L_15));
		NativeArray_1_t88D704C42FF4613A6E6131D50108F5AFCA5F4144* L_16 = (NativeArray_1_t88D704C42FF4613A6E6131D50108F5AFCA5F4144*)(&(&___1_result)->___Values);
		int32_t L_17 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_6;
		TransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisTransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D_mB3EF85E0F07B6626BEE4350E49F8DD84F7E542CE_inline((void*)L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 9));
		IL2CPP_NATIVEARRAY_SET_ITEM(TransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D, (L_16)->___m_Buffer, L_17, (L_21));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4)))));
		V_6 = L_25;
	}

IL_0072:
	{
		int32_t L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007b:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0025;
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mEECEA7FDD8F574CFCDB7A3EC7991B410E207D230_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_tD199381B902103D09FB939A335F9BD66DA2014C0 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = NativeKeyValueArrays_2_get_Length_m1138B095A8D78952B634C3A662FC49310C967090((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_007b;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0072;
	}

IL_0030:
	{
		NativeArray_1_tB4B7683DD2A8F815875BE195332D74EEF88AE45E* L_10 = (NativeArray_1_tB4B7683DD2A8F815875BE195332D74EEF88AE45E*)(&(&___1_result)->___Keys);
		int32_t L_11 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_6;
		EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_mBA7BC7F5CDE7522066ADEB4389DB7FDE05392F39_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		IL2CPP_NATIVEARRAY_SET_ITEM(EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877, (L_10)->___m_Buffer, L_11, (L_15));
		NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB* L_16 = (NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB*)(&(&___1_result)->___Values);
		int32_t L_17 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_6;
		bool L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF765CB2E5FD631DFB79C25DE656F3C1BB359B995_inline((void*)L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 9));
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, (L_16)->___m_Buffer, L_17, (L_21));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4)))));
		V_6 = L_25;
	}

IL_0072:
	{
		int32_t L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007b:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0025;
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m7B175384E5537710EC45DCB77966337B755CD984_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_tB81A44AC7376B6616DD5463E124B6399CFD2E185 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = NativeKeyValueArrays_2_get_Length_m451F1B5827087B6A6950AF3B6F00423341B88B06((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_007b;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0072;
	}

IL_0030:
	{
		NativeArray_1_tB4B7683DD2A8F815875BE195332D74EEF88AE45E* L_10 = (NativeArray_1_tB4B7683DD2A8F815875BE195332D74EEF88AE45E*)(&(&___1_result)->___Keys);
		int32_t L_11 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_6;
		EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_mBA7BC7F5CDE7522066ADEB4389DB7FDE05392F39_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		IL2CPP_NATIVEARRAY_SET_ITEM(EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877, (L_10)->___m_Buffer, L_11, (L_15));
		NativeArray_1_tDDBE2218E06075EFCDE280D90B6FA7C4BF46BFD2* L_16 = (NativeArray_1_tDDBE2218E06075EFCDE280D90B6FA7C4BF46BFD2*)(&(&___1_result)->___Values);
		int32_t L_17 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_6;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m64F6C7E9916D768E9365F442F252409EECA0CE9C_inline((void*)L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 9));
		IL2CPP_NATIVEARRAY_SET_ITEM(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD, (L_16)->___m_Buffer, L_17, (L_21));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4)))));
		V_6 = L_25;
	}

IL_0072:
	{
		int32_t L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007b:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0025;
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m28780DAE5CF15B3861DBCA2C93212D7FADD82999_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_t1E36B8FF514E5E705ECE6E650667B65A10DF69B7 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = NativeKeyValueArrays_2_get_Length_m5172D3D1819BA96C0B58B63ADDE03A3E4018DADC((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_007b;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0072;
	}

IL_0030:
	{
		NativeArray_1_t914A2D89770088554B462280097B5C6823D2C33D* L_10 = (NativeArray_1_t914A2D89770088554B462280097B5C6823D2C33D*)(&(&___1_result)->___Keys);
		int32_t L_11 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_6;
		EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_mB198FB4671ADE00B3ADE86BC40D6ABD19AE8C07B_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		IL2CPP_NATIVEARRAY_SET_ITEM(EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4, (L_10)->___m_Buffer, L_11, (L_15));
		NativeArray_1_tDDBE2218E06075EFCDE280D90B6FA7C4BF46BFD2* L_16 = (NativeArray_1_tDDBE2218E06075EFCDE280D90B6FA7C4BF46BFD2*)(&(&___1_result)->___Values);
		int32_t L_17 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_6;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m64F6C7E9916D768E9365F442F252409EECA0CE9C_inline((void*)L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 9));
		IL2CPP_NATIVEARRAY_SET_ITEM(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD, (L_16)->___m_Buffer, L_17, (L_21));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4)))));
		V_6 = L_25;
	}

IL_0072:
	{
		int32_t L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007b:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0025;
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisLoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02_m1D7E40E93A3BB025611FBCF6B3786B2D4FE6D895_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_t6C9C627B2477A580341CA92BE887CC20A42F0E1F ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = NativeKeyValueArrays_2_get_Length_mC54D48A3F6856A67CA6836D26BBBA75665363F63((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_007b;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0072;
	}

IL_0030:
	{
		NativeArray_1_t914A2D89770088554B462280097B5C6823D2C33D* L_10 = (NativeArray_1_t914A2D89770088554B462280097B5C6823D2C33D*)(&(&___1_result)->___Keys);
		int32_t L_11 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_6;
		EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_mB198FB4671ADE00B3ADE86BC40D6ABD19AE8C07B_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		IL2CPP_NATIVEARRAY_SET_ITEM(EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4, (L_10)->___m_Buffer, L_11, (L_15));
		NativeArray_1_t199AE8490F8EFECF20612BEF447818B3457173B5* L_16 = (NativeArray_1_t199AE8490F8EFECF20612BEF447818B3457173B5*)(&(&___1_result)->___Values);
		int32_t L_17 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_6;
		LoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02 L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisLoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02_m836F60A4A610F7AD228932364B2855D5CBBE1D65_inline((void*)L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 9));
		IL2CPP_NATIVEARRAY_SET_ITEM(LoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02, (L_16)->___m_Buffer, L_17, (L_21));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4)))));
		V_6 = L_25;
	}

IL_0072:
	{
		int32_t L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007b:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0025;
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_mBFFD63C92C4582978F1CD7F4456CC502CCB54902_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_tC094DB3C313976D17B8AC588F92A837CF47DA399 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = NativeKeyValueArrays_2_get_Length_m820E5F0733CA9D7FC2C9A75CCEBC82D1D50F895A((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_007b;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0072;
	}

IL_0030:
	{
		NativeArray_1_t2A0257A9C26D1BA03925423B9A39B0A58DDBD41D* L_10 = (NativeArray_1_t2A0257A9C26D1BA03925423B9A39B0A58DDBD41D*)(&(&___1_result)->___Keys);
		int32_t L_11 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_6;
		Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_mCCED167A2D047452D014A45173D1FDB05928928C_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		IL2CPP_NATIVEARRAY_SET_ITEM(Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B, (L_10)->___m_Buffer, L_11, (L_15));
		NativeArray_1_tC4A37FE4F670CE4681F5AD5FBBE68B0043BC29F2* L_16 = (NativeArray_1_tC4A37FE4F670CE4681F5AD5FBBE68B0043BC29F2*)(&(&___1_result)->___Values);
		int32_t L_17 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_6;
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m09665718EFC7893CDD26DCB1B3EC90D4E46D7A98_inline((void*)L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 9));
		IL2CPP_NATIVEARRAY_SET_ITEM(BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998, (L_16)->___m_Buffer, L_17, (L_21));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4)))));
		V_6 = L_25;
	}

IL_0072:
	{
		int32_t L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007b:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0025;
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m546FC3A077D91595CB6C5F89599B41582320A2B6_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_tDA5D49BE0E131EDFC15BE935D00B3A4A9A51B717 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = NativeKeyValueArrays_2_get_Length_m317613DFCE6B8039E1B78E23381B64CE62601D52((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_007b;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0072;
	}

IL_0030:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_10 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&(&___1_result)->___Keys);
		int32_t L_11 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_6;
		int32_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_10)->___m_Buffer, L_11, (L_15));
		NativeArray_1_t15482D9F7CC02501EED5F540239814F47FD7ABF0* L_16 = (NativeArray_1_t15482D9F7CC02501EED5F540239814F47FD7ABF0*)(&(&___1_result)->___Values);
		int32_t L_17 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_6;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m1F1E944526C83C5C50C3BEFA897DB7849C6CF967_inline((void*)L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 9));
		IL2CPP_NATIVEARRAY_SET_ITEM(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718, (L_16)->___m_Buffer, L_17, (L_21));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4)))));
		V_6 = L_25;
	}

IL_0072:
	{
		int32_t L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007b:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0025;
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7_m12F9DD9ADB315C26EED1BE623FC81C7587BE5B57_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_t731594D0E8981996DF4D83C0A703042EAA11CFB5 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = NativeKeyValueArrays_2_get_Length_m95541A14A8E3AC08E119596562D6CD32F946F9EA((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_007b;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0072;
	}

IL_0030:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_10 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&(&___1_result)->___Keys);
		int32_t L_11 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_6;
		int32_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_10)->___m_Buffer, L_11, (L_15));
		NativeArray_1_tE14EC68A3468927E8107E875446A79D116B04603* L_16 = (NativeArray_1_tE14EC68A3468927E8107E875446A79D116B04603*)(&(&___1_result)->___Values);
		int32_t L_17 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_6;
		BakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7 L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisBakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7_m341C66DAFE22D7FF675AB26610BCA44E0E7636AD_inline((void*)L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 9));
		IL2CPP_NATIVEARRAY_SET_ITEM(BakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7, (L_16)->___m_Buffer, L_17, (L_21));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4)))));
		V_6 = L_25;
	}

IL_0072:
	{
		int32_t L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007b:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0025;
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5E2EB699E9F0C8F8342797FA38C20F11F4EA0CE4_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_t23D1126126024D2A72D247CC67B349308AFE9FEF ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = NativeKeyValueArrays_2_get_Length_m1A966334113393D6D43ED8AC601D32C9301E60EF((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_007b;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0072;
	}

IL_0030:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_10 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&(&___1_result)->___Keys);
		int32_t L_11 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_6;
		int32_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_10)->___m_Buffer, L_11, (L_15));
		NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB* L_16 = (NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB*)(&(&___1_result)->___Values);
		int32_t L_17 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_6;
		bool L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF765CB2E5FD631DFB79C25DE656F3C1BB359B995_inline((void*)L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 9));
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, (L_16)->___m_Buffer, L_17, (L_21));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4)))));
		V_6 = L_25;
	}

IL_0072:
	{
		int32_t L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007b:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0025;
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_mDD5D9ADD6C07C6BB157B02CCDA4025745EA9029C_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_t4B0C71F595CA0EACB49D03B78838F9C70C076737 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = NativeKeyValueArrays_2_get_Length_m5117265499EED4F8AEE9BB33752AFA20E1094953((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_007b;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0072;
	}

IL_0030:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_10 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&(&___1_result)->___Keys);
		int32_t L_11 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_6;
		int32_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_10)->___m_Buffer, L_11, (L_15));
		NativeArray_1_t3C4549E0042C159CF962BB776A84D2C0D9864609* L_16 = (NativeArray_1_t3C4549E0042C159CF962BB776A84D2C0D9864609*)(&(&___1_result)->___Values);
		int32_t L_17 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_6;
		ComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_mC0855E940EDA880F3AC7284411BE4E8ED52CA780_inline((void*)L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 9));
		IL2CPP_NATIVEARRAY_SET_ITEM(ComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D, (L_16)->___m_Buffer, L_17, (L_21));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4)))));
		V_6 = L_25;
	}

IL_0072:
	{
		int32_t L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007b:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0025;
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m6421526B89FF415FE27362D95DAFD618C65E4EB1_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_t9E3BFE09CCAD0FE46FC0EF2D7D2D5560D399B8FC ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = NativeKeyValueArrays_2_get_Length_mF3869EFB86F15EDCE519D812F5E9BEB9F1081326((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_007b;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0072;
	}

IL_0030:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_10 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&(&___1_result)->___Keys);
		int32_t L_11 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_6;
		int32_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_10)->___m_Buffer, L_11, (L_15));
		NativeArray_1_tDDBE2218E06075EFCDE280D90B6FA7C4BF46BFD2* L_16 = (NativeArray_1_tDDBE2218E06075EFCDE280D90B6FA7C4BF46BFD2*)(&(&___1_result)->___Values);
		int32_t L_17 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_6;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m64F6C7E9916D768E9365F442F252409EECA0CE9C_inline((void*)L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 9));
		IL2CPP_NATIVEARRAY_SET_ITEM(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD, (L_16)->___m_Buffer, L_17, (L_21));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4)))));
		V_6 = L_25;
	}

IL_0072:
	{
		int32_t L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007b:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0025;
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFE9C57688981A69BB82626EC5B584E4C570A0B1A_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_tF51A55D75DBB6D766D8D5B99DC29C3762BA12496 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = NativeKeyValueArrays_2_get_Length_m0E87F558427CED97F501D4AB4A5F0A78A2B39723((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_007b;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0072;
	}

IL_0030:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_10 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&(&___1_result)->___Keys);
		int32_t L_11 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_6;
		int32_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_10)->___m_Buffer, L_11, (L_15));
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_16 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&(&___1_result)->___Values);
		int32_t L_17 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_6;
		int32_t L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 9));
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_16)->___m_Buffer, L_17, (L_21));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4)))));
		V_6 = L_25;
	}

IL_0072:
	{
		int32_t L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007b:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0025;
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisIntPtr_t_m3F9F50CB0C6CE2B8B2C589CF197A3AC916BF9482_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_tC8438418001C0D25F0B470D81DEA3F00CC44D794 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = NativeKeyValueArrays_2_get_Length_mFD5F1BE602F8331DFB26E2EB01E82B952DB4FE05((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_007b;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0072;
	}

IL_0030:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_10 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&(&___1_result)->___Keys);
		int32_t L_11 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_6;
		int32_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_10)->___m_Buffer, L_11, (L_15));
		NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9* L_16 = (NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9*)(&(&___1_result)->___Values);
		int32_t L_17 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_6;
		intptr_t L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisIntPtr_t_m1AB5DE7A4962B63822FF70AF37E0BADC77C4AE23_inline((void*)L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 9));
		IL2CPP_NATIVEARRAY_SET_ITEM(intptr_t, (L_16)->___m_Buffer, L_17, (L_21));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4)))));
		V_6 = L_25;
	}

IL_0072:
	{
		int32_t L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007b:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0025;
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisPrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751_mFD88E084DE15A6BE288612A94DF42883A845177A_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_tE089B2CF32C8D676FFA23BFB15FA3132B07265AA ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = NativeKeyValueArrays_2_get_Length_m83A41EFAEEC4859BDC330B270B652E49E94B9BD9((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_007b;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0072;
	}

IL_0030:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_10 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&(&___1_result)->___Keys);
		int32_t L_11 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_6;
		int32_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_10)->___m_Buffer, L_11, (L_15));
		NativeArray_1_t4FFBB5A3D23110E4F3CD5583649AE34B94C6331C* L_16 = (NativeArray_1_t4FFBB5A3D23110E4F3CD5583649AE34B94C6331C*)(&(&___1_result)->___Values);
		int32_t L_17 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_6;
		PrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751 L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisPrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751_m956BFBA7E125ECF42542E6A2ABAC0DD7059B8A10_inline((void*)L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 9));
		IL2CPP_NATIVEARRAY_SET_ITEM(PrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751, (L_16)->___m_Buffer, L_17, (L_21));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4)))));
		V_6 = L_25;
	}

IL_0072:
	{
		int32_t L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007b:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0025;
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA_mC636B296104FE8FCD6232A8A31BAC628CA27E805_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_t3A04C7F6B555B87B533DF74A36E114FACE5CBA39 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = NativeKeyValueArrays_2_get_Length_mA62E75DBCBA7090A0B616D1D1D5DF242C65D95DE((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_007b;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0072;
	}

IL_0030:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_10 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&(&___1_result)->___Keys);
		int32_t L_11 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_6;
		int32_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_10)->___m_Buffer, L_11, (L_15));
		NativeArray_1_t6BB9B80B0F7974ABDDCC6212EC861C47D38450ED* L_16 = (NativeArray_1_t6BB9B80B0F7974ABDDCC6212EC861C47D38450ED*)(&(&___1_result)->___Values);
		int32_t L_17 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_6;
		ActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA_m50C716C28EF2FACA3FD6ECDE4C2290D6ECB07A61_inline((void*)L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 9));
		IL2CPP_NATIVEARRAY_SET_ITEM(ActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA, (L_16)->___m_Buffer, L_17, (L_21));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4)))));
		V_6 = L_25;
	}

IL_0072:
	{
		int32_t L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007b:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0025;
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE_m79726783FDC07A0C72008D4BD66BCA91866C1BFB_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_tBB4958A4F575A3B683B79EC659B9A4384AC1B0A0 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = NativeKeyValueArrays_2_get_Length_m3B9B3517740F922CA07A888EF76E142771C81CE9((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_007b;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0072;
	}

IL_0030:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_10 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&(&___1_result)->___Keys);
		int32_t L_11 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_6;
		int32_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_10)->___m_Buffer, L_11, (L_15));
		NativeArray_1_t605EE6881E7CBF0C803EC1F3B91C779E90FF938F* L_16 = (NativeArray_1_t605EE6881E7CBF0C803EC1F3B91C779E90FF938F*)(&(&___1_result)->___Values);
		int32_t L_17 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_6;
		GetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisGetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE_m4E9D75DDD928F74FFDA7A6339190E37A04AA1BAA_inline((void*)L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 9));
		IL2CPP_NATIVEARRAY_SET_ITEM(GetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE, (L_16)->___m_Buffer, L_17, (L_21));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4)))));
		V_6 = L_25;
	}

IL_0072:
	{
		int32_t L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007b:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0025;
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E_m9396DCBAE9D8412DAA552707E80D21D38EC7306A_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_t0F0CB9299634FFC07DF20FC3A2DC23F822BC70EB ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = NativeKeyValueArrays_2_get_Length_m64D10B0D60568E5668C7D3ECD063F207187D5299((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_007b;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0072;
	}

IL_0030:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_10 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&(&___1_result)->___Keys);
		int32_t L_11 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_6;
		int32_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_10)->___m_Buffer, L_11, (L_15));
		NativeArray_1_t021E2A3E5A6A871FA36CA2A7C7E8F28E2997F960* L_16 = (NativeArray_1_t021E2A3E5A6A871FA36CA2A7C7E8F28E2997F960*)(&(&___1_result)->___Values);
		int32_t L_17 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_6;
		GetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisGetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E_m240057E500574E311F64D761C1B0E81D48539B71_inline((void*)L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 9));
		IL2CPP_NATIVEARRAY_SET_ITEM(GetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E, (L_16)->___m_Buffer, L_17, (L_21));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4)))));
		V_6 = L_25;
	}

IL_0072:
	{
		int32_t L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007b:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0025;
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B_m08DB57961171FA74BB934D76556F89B85CA553C3_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_tFEC11AACA23329D851705107DFA75B5C866D07DD ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = NativeKeyValueArrays_2_get_Length_mFC6DAF8791E05BFB36FF92846C18DA38096E73AB((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_007b;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0072;
	}

IL_0030:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_10 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&(&___1_result)->___Keys);
		int32_t L_11 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_6;
		int32_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_10)->___m_Buffer, L_11, (L_15));
		NativeArray_1_tE86C54A5ACEFF0199233969AEBAE4AB1FD8AA8A4* L_16 = (NativeArray_1_tE86C54A5ACEFF0199233969AEBAE4AB1FD8AA8A4*)(&(&___1_result)->___Values);
		int32_t L_17 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_6;
		GetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisGetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B_mE31D1DD2E82C423B35C73B7F1E8D557C2DBC75C5_inline((void*)L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 9));
		IL2CPP_NATIVEARRAY_SET_ITEM(GetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B, (L_16)->___m_Buffer, L_17, (L_21));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4)))));
		V_6 = L_25;
	}

IL_0072:
	{
		int32_t L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007b:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0025;
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452_m7B89F055B959FBDD7AA25CA49FDE21F7D1E6E20E_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_t4FE7B11671FA19285E9048F0883AC15398C7782E ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = NativeKeyValueArrays_2_get_Length_mFA42919E15D635677DDFA39A1BDAE0F56EB49851((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_007b;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0072;
	}

IL_0030:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_10 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&(&___1_result)->___Keys);
		int32_t L_11 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_6;
		int32_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_10)->___m_Buffer, L_11, (L_15));
		NativeArray_1_t9230D5979ADB0724CE54B965F21469A945186974* L_16 = (NativeArray_1_t9230D5979ADB0724CE54B965F21469A945186974*)(&(&___1_result)->___Values);
		int32_t L_17 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_6;
		GetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452 L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisGetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452_m4E35AE63F5292F45C4B7D57F293CAB353B3768BC_inline((void*)L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 9));
		IL2CPP_NATIVEARRAY_SET_ITEM(GetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452, (L_16)->___m_Buffer, L_17, (L_21));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4)))));
		V_6 = L_25;
	}

IL_0072:
	{
		int32_t L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007b:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0025;
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34_m37FC1A9F2FC456714869E8BC6C8A0A567FFB9EF1_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_t16C9442D67CF86F51A20A8D693E40C37732C39FD ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = NativeKeyValueArrays_2_get_Length_m030F70E126876CBE26E8FEF0E6EF38ED9A75736F((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_007b;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0072;
	}

IL_0030:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_10 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&(&___1_result)->___Keys);
		int32_t L_11 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_6;
		int32_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_10)->___m_Buffer, L_11, (L_15));
		NativeArray_1_t6B944030010D60829E768DB6CAF4A6E8ACFBFC51* L_16 = (NativeArray_1_t6B944030010D60829E768DB6CAF4A6E8ACFBFC51*)(&(&___1_result)->___Values);
		int32_t L_17 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_6;
		ObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34 L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34_m68422EC542A6BB6DBE519B2416180FA28AFB543E_inline((void*)L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 9));
		IL2CPP_NATIVEARRAY_SET_ITEM(ObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34, (L_16)->___m_Buffer, L_17, (L_21));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4)))));
		V_6 = L_25;
	}

IL_0072:
	{
		int32_t L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007b:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0025;
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C_mAFDC7AEB5CCC68F0B249EB90803D4CA6F37C70DA_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_t5EC162EAD8E8641004E4F13DF7DBF2280AF902A2 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = NativeKeyValueArrays_2_get_Length_mE629BCA827E7AA677B1D9FB7B7DB16CDDAC8C344((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_007b;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0072;
	}

IL_0030:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_10 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&(&___1_result)->___Keys);
		int32_t L_11 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_6;
		int32_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_10)->___m_Buffer, L_11, (L_15));
		NativeArray_1_t558AA1B39C895CFA4159FB64D6E90FBBDE347107* L_16 = (NativeArray_1_t558AA1B39C895CFA4159FB64D6E90FBBDE347107*)(&(&___1_result)->___Values);
		int32_t L_17 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_6;
		ObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C_mAA82F9B921463BA85338F4F6907EB371C99E2C0D_inline((void*)L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 9));
		IL2CPP_NATIVEARRAY_SET_ITEM(ObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C, (L_16)->___m_Buffer, L_17, (L_21));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4)))));
		V_6 = L_25;
	}

IL_0072:
	{
		int32_t L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007b:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0025;
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA_m211DCFAA385649626E1BAE9E9A504C05E579A820_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_t2389916BD217390646B9F69E3C25C927EC24C8C5 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = NativeKeyValueArrays_2_get_Length_m60290E6C2C59BCDAAEDE59C4A17E810A115094C8((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_007b;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0072;
	}

IL_0030:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_10 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&(&___1_result)->___Keys);
		int32_t L_11 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_6;
		int32_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_10)->___m_Buffer, L_11, (L_15));
		NativeArray_1_tA828356220037230A27BC3A8E67C1781DC6A8B7D* L_16 = (NativeArray_1_tA828356220037230A27BC3A8E67C1781DC6A8B7D*)(&(&___1_result)->___Values);
		int32_t L_17 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_6;
		ObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA_mE3F1AB969DB8BDB1A3E3E15E2414CF6A0B1699F1_inline((void*)L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 9));
		IL2CPP_NATIVEARRAY_SET_ITEM(ObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA, (L_16)->___m_Buffer, L_17, (L_21));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4)))));
		V_6 = L_25;
	}

IL_0072:
	{
		int32_t L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007b:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0025;
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisEntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055_m8A35F6EA5DEB549941AA415E19E1170BBDB43F98_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_t0C13E910C47B0A7473E7F898AC6F4E8EBDF74E2D ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = NativeKeyValueArrays_2_get_Length_mD623D28B39FEBC023DB6E913E278D6C24E5E0484((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_007b;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0072;
	}

IL_0030:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_10 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&(&___1_result)->___Keys);
		int32_t L_11 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_6;
		int32_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_10)->___m_Buffer, L_11, (L_15));
		NativeArray_1_tF0CA4ED4A83B35E0F121BAEE253FFBF1311D7A9A* L_16 = (NativeArray_1_tF0CA4ED4A83B35E0F121BAEE253FFBF1311D7A9A*)(&(&___1_result)->___Values);
		int32_t L_17 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_6;
		EntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055 L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisEntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055_m269B2EB28C9E6370F7CF1D48917001A93ECA1836_inline((void*)L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 9));
		IL2CPP_NATIVEARRAY_SET_ITEM(EntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055, (L_16)->___m_Buffer, L_17, (L_21));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4)))));
		V_6 = L_25;
	}

IL_0072:
	{
		int32_t L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007b:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0025;
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisComponentData_t2CB40CF3C2FA75B9CA5D8292DCFA8BF12A42DB07_mF0C3D4D624E8E42B0846924D11C99C1206A221C9_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_t14A3222AEBA0B33AC8ECC6AFC67D1AEC702FCEA0 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = NativeKeyValueArrays_2_get_Length_mCAD59B1D1DD695B07CE48BF99C79A4EFE32B9F55((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_007b;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0072;
	}

IL_0030:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_10 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&(&___1_result)->___Keys);
		int32_t L_11 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_6;
		int32_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_10)->___m_Buffer, L_11, (L_15));
		NativeArray_1_t5322C9463FF74A9E271418BB28A235FE3BA914CB* L_16 = (NativeArray_1_t5322C9463FF74A9E271418BB28A235FE3BA914CB*)(&(&___1_result)->___Values);
		int32_t L_17 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_6;
		ComponentData_t2CB40CF3C2FA75B9CA5D8292DCFA8BF12A42DB07 L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisComponentData_t2CB40CF3C2FA75B9CA5D8292DCFA8BF12A42DB07_m4CC70D46AE7357ECAF9520C12226902E43D8FBFE_inline((void*)L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 9));
		IL2CPP_NATIVEARRAY_SET_ITEM(ComponentData_t2CB40CF3C2FA75B9CA5D8292DCFA8BF12A42DB07, (L_16)->___m_Buffer, L_17, (L_21));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4)))));
		V_6 = L_25;
	}

IL_0072:
	{
		int32_t L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007b:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0025;
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB04E911F1C90481EEFAD2E6CD64BE7D6094A3E88_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_tE7681378AD7ED1422B03DA33DAB7098382465DAC ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = NativeKeyValueArrays_2_get_Length_m1C734549753B4EFDB05BDB2F1C07D18BA74043CC((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_007b;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0072;
	}

IL_0030:
	{
		NativeArray_1_t25F6CEC65DB0532CB91E2B2890FF6C2D52A210A3* L_10 = (NativeArray_1_t25F6CEC65DB0532CB91E2B2890FF6C2D52A210A3*)(&(&___1_result)->___Keys);
		int32_t L_11 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_6;
		int64_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m51BA37651B60ACB0F4F6867E07AB0C3E0046FC9C_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		IL2CPP_NATIVEARRAY_SET_ITEM(int64_t, (L_10)->___m_Buffer, L_11, (L_15));
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_16 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&(&___1_result)->___Values);
		int32_t L_17 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_6;
		int32_t L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 9));
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_16)->___m_Buffer, L_17, (L_21));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4)))));
		V_6 = L_25;
	}

IL_0072:
	{
		int32_t L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007b:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0025;
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m48CF2ECE8E5C4377D7F3E8AB159EB5EA2D3C3C46_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_tC3CAC4DC3C46A0ABF7095E38B7C3174457AE9C15 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = NativeKeyValueArrays_2_get_Length_mBCAFA8BE0F5E32A0D711B91FBC539249B2C8E999((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_007b;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0072;
	}

IL_0030:
	{
		NativeArray_1_t25F6CEC65DB0532CB91E2B2890FF6C2D52A210A3* L_10 = (NativeArray_1_t25F6CEC65DB0532CB91E2B2890FF6C2D52A210A3*)(&(&___1_result)->___Keys);
		int32_t L_11 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_6;
		int64_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m51BA37651B60ACB0F4F6867E07AB0C3E0046FC9C_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		IL2CPP_NATIVEARRAY_SET_ITEM(int64_t, (L_10)->___m_Buffer, L_11, (L_15));
		NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934* L_16 = (NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934*)(&(&___1_result)->___Values);
		int32_t L_17 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_6;
		uint16_t L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mDA4F2F1FC33E2F2F8CC3E761D626E638762C61E4_inline((void*)L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 9));
		IL2CPP_NATIVEARRAY_SET_ITEM(uint16_t, (L_16)->___m_Buffer, L_17, (L_21));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4)))));
		V_6 = L_25;
	}

IL_0072:
	{
		int32_t L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007b:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0025;
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAB9E70C76F2EDBF8D4ABF16D0C7884044777AE25_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_t03B2A649B6C6254E87723CC3476AAA77A67F80E8 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = NativeKeyValueArrays_2_get_Length_mC33C14BCAAA2AE3FCF3AA84279E9F72EF89BB787((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_007b;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0072;
	}

IL_0030:
	{
		NativeArray_1_t8EAF026790EF3DF68B0045BB0E38FB17C27171FF* L_10 = (NativeArray_1_t8EAF026790EF3DF68B0045BB0E38FB17C27171FF*)(&(&___1_result)->___Keys);
		int32_t L_11 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_6;
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m055B0246613F21DF105592E21674EE77285875DC_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		IL2CPP_NATIVEARRAY_SET_ITEM(TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C, (L_10)->___m_Buffer, L_11, (L_15));
		NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB* L_16 = (NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB*)(&(&___1_result)->___Values);
		int32_t L_17 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_6;
		bool L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF765CB2E5FD631DFB79C25DE656F3C1BB359B995_inline((void*)L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 9));
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, (L_16)->___m_Buffer, L_17, (L_21));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4)))));
		V_6 = L_25;
	}

IL_0072:
	{
		int32_t L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007b:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0025;
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5_m9138AD34D64AF30283E8060B30A6209557C195D3_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_t74AE1A8D286C3E322E4B45390EBD1415AF19ACF3 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = NativeKeyValueArrays_2_get_Length_m348AB8708CCF25D42F40A4C71A742F9FB4B34290((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_007b;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0072;
	}

IL_0030:
	{
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* L_10 = (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B*)(&(&___1_result)->___Keys);
		int32_t L_11 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_6;
		uint64_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		IL2CPP_NATIVEARRAY_SET_ITEM(uint64_t, (L_10)->___m_Buffer, L_11, (L_15));
		NativeArray_1_t44EB3A133DF22EE1B584A5B212FD6518CD42B27F* L_16 = (NativeArray_1_t44EB3A133DF22EE1B584A5B212FD6518CD42B27F*)(&(&___1_result)->___Values);
		int32_t L_17 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_6;
		ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5_m331C4C63F372510AD14D346567E6B3877853D8BD_inline((void*)L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 9));
		IL2CPP_NATIVEARRAY_SET_ITEM(ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5, (L_16)->___m_Buffer, L_17, (L_21));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4)))));
		V_6 = L_25;
	}

IL_0072:
	{
		int32_t L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007b:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0025;
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_mBE9C21254A9189C2C93613F526970E006A288E76_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_tD1C7E4065F58C0A217801C413E38A85A748A0209 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = NativeKeyValueArrays_2_get_Length_m8B69EAC631CAA45EE78A8206EB2E474AB0A3F811((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_007b;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0072;
	}

IL_0030:
	{
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* L_10 = (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B*)(&(&___1_result)->___Keys);
		int32_t L_11 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_6;
		uint64_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		IL2CPP_NATIVEARRAY_SET_ITEM(uint64_t, (L_10)->___m_Buffer, L_11, (L_15));
		NativeArray_1_t04DF635C0FEAB264F763F4B942D6A669F0B1F1C1* L_16 = (NativeArray_1_t04DF635C0FEAB264F763F4B942D6A669F0B1F1C1*)(&(&___1_result)->___Values);
		int32_t L_17 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_6;
		AspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50 L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_m42C27C99C832082CC850074116836AD6C7951F4F_inline((void*)L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 9));
		IL2CPP_NATIVEARRAY_SET_ITEM(AspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50, (L_16)->___m_Buffer, L_17, (L_21));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4)))));
		V_6 = L_25;
	}

IL_0072:
	{
		int32_t L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007b:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0025;
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC13912EF6FD74FE2796C97F862EA4D97AD96E501_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_t25F4D532D5B122640B6B26B799AD371778FD3BE6 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = NativeKeyValueArrays_2_get_Length_mCB0173799EBD5C534B32ABB67516A45E7AF119EC((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_007b;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0072;
	}

IL_0030:
	{
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* L_10 = (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B*)(&(&___1_result)->___Keys);
		int32_t L_11 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_6;
		uint64_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		IL2CPP_NATIVEARRAY_SET_ITEM(uint64_t, (L_10)->___m_Buffer, L_11, (L_15));
		NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB* L_16 = (NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB*)(&(&___1_result)->___Values);
		int32_t L_17 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_6;
		bool L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF765CB2E5FD631DFB79C25DE656F3C1BB359B995_inline((void*)L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 9));
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, (L_16)->___m_Buffer, L_17, (L_21));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4)))));
		V_6 = L_25;
	}

IL_0072:
	{
		int32_t L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007b:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0025;
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4A5596A3E6C8EF102CC65193A767F08492CFF5EF_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_tE1DFCAE6688CDBA80B9114AC4B537B44F7909B05 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = NativeKeyValueArrays_2_get_Length_mBF4C7C9649331AB57DD1639E61B58C70AF592BF2((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_007b;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0072;
	}

IL_0030:
	{
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* L_10 = (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B*)(&(&___1_result)->___Keys);
		int32_t L_11 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_6;
		uint64_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		IL2CPP_NATIVEARRAY_SET_ITEM(uint64_t, (L_10)->___m_Buffer, L_11, (L_15));
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* L_16 = (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF*)(&(&___1_result)->___Values);
		int32_t L_17 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_6;
		uint8_t L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m06447B534673E0861DE4F55616DFAF9BD7DCBCC6_inline((void*)L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 9));
		IL2CPP_NATIVEARRAY_SET_ITEM(uint8_t, (L_16)->___m_Buffer, L_17, (L_21));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4)))));
		V_6 = L_25;
	}

IL_0072:
	{
		int32_t L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007b:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0025;
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1047C31453657BCDF6E8EC25E27257AF1958D4DF_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_tE4F6643B71F37BE972D2EF277D67267DBD9F17B0 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = NativeKeyValueArrays_2_get_Length_m6AE2ED0F9FF5634687CF8B2B12CD0C0A6A6B452E((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_007b;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0072;
	}

IL_0030:
	{
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* L_10 = (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B*)(&(&___1_result)->___Keys);
		int32_t L_11 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_6;
		uint64_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		IL2CPP_NATIVEARRAY_SET_ITEM(uint64_t, (L_10)->___m_Buffer, L_11, (L_15));
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_16 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&(&___1_result)->___Values);
		int32_t L_17 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_6;
		int32_t L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 9));
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_16)->___m_Buffer, L_17, (L_21));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4)))));
		V_6 = L_25;
	}

IL_0072:
	{
		int32_t L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007b:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0025;
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m647BDBC508001F6D03B429C278AAE139CBB1F5D7_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_tF2EE05B9ACB01DB385DA087BF4CE92D4CE4BA400 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = NativeKeyValueArrays_2_get_Length_m7B1A5FA2795F53C669F452FB7050575DE5BFFE52((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_007b;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0072;
	}

IL_0030:
	{
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* L_10 = (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B*)(&(&___1_result)->___Keys);
		int32_t L_11 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_6;
		uint64_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		IL2CPP_NATIVEARRAY_SET_ITEM(uint64_t, (L_10)->___m_Buffer, L_11, (L_15));
		NativeArray_1_t8EAF026790EF3DF68B0045BB0E38FB17C27171FF* L_16 = (NativeArray_1_t8EAF026790EF3DF68B0045BB0E38FB17C27171FF*)(&(&___1_result)->___Values);
		int32_t L_17 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_6;
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m055B0246613F21DF105592E21674EE77285875DC_inline((void*)L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 9));
		IL2CPP_NATIVEARRAY_SET_ITEM(TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C, (L_16)->___m_Buffer, L_17, (L_21));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4)))));
		V_6 = L_25;
	}

IL_0072:
	{
		int32_t L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007b:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0025;
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE1D4EE196D8A41C94B0529904B1882DF7B67DAC8_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_tF0C9DDB602F789F19A16A1FA2EC584D35E067652 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = NativeKeyValueArrays_2_get_Length_mF7AC66FA6C9CD9047110D7EEE4276671B7F36AD2((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_007b;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0072;
	}

IL_0030:
	{
		NativeArray_1_t3348E32CE02DFE5B4012620EFD1FE7BF5285DA7A* L_10 = (NativeArray_1_t3348E32CE02DFE5B4012620EFD1FE7BF5285DA7A*)(&(&___1_result)->___Keys);
		int32_t L_11 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_6;
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m7ACC04D18A4EC85ECFB185A88B79EB26AD1DACB1_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		IL2CPP_NATIVEARRAY_SET_ITEM(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A, (L_10)->___m_Buffer, L_11, (L_15));
		NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB* L_16 = (NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB*)(&(&___1_result)->___Values);
		int32_t L_17 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_6;
		bool L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF765CB2E5FD631DFB79C25DE656F3C1BB359B995_inline((void*)L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 9));
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, (L_16)->___m_Buffer, L_17, (L_21));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4)))));
		V_6 = L_25;
	}

IL_0072:
	{
		int32_t L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007b:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0025;
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_mE7B20EAFC97698B67540C38AF16BB6595C8B786D_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TKey_t144C42ACB2DDADF052103F43EA00E1E62D94C90F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 5));
	const Il2CppFullySharedGenericStruct L_15 = alloca(SizeOf_TKey_t144C42ACB2DDADF052103F43EA00E1E62D94C90F);
	const uint32_t SizeOf_TValue_t4FEA332ED977D95FEBFE603FCE1F5250E543CBBF = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 10));
	const Il2CppFullySharedGenericStruct L_21 = alloca(SizeOf_TValue_t4FEA332ED977D95FEBFE603FCE1F5250E543CBBF);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = ((  int32_t (*) (NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_007b;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0072;
	}

IL_0030:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_10 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&(&___1_result)->___Keys);
		int32_t L_11 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_6;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL, (void*)L_13, L_14, (Il2CppFullySharedGenericStruct*)L_15);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), L_10, L_11, L_15);
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_16 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&(&___1_result)->___Values);
		int32_t L_17 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_6;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 9)), il2cpp_rgctx_method(method->rgctx_data, 9), NULL, (void*)L_19, L_20, (Il2CppFullySharedGenericStruct*)L_21);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 11)), il2cpp_rgctx_method(method->rgctx_data, 11), L_16, L_17, L_21);
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4)))));
		V_6 = L_25;
	}

IL_0072:
	{
		int32_t L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007b:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0025;
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_m6C2AB1212EE83D0FD28591BF64FB09208F03DF08_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_t7235B7A3A1991F703BB3FE6A3013076D0BE551DB ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = NativeKeyValueArrays_2_get_Length_mA05355BE86679503FF7C80E097C6E5CB89FB314A((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_007b;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0072;
	}

IL_0030:
	{
		NativeArray_1_tEE4C676F8F6EE01446E2FB86503B8701786CD215* L_10 = (NativeArray_1_tEE4C676F8F6EE01446E2FB86503B8701786CD215*)(&(&___1_result)->___Keys);
		int32_t L_11 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_6;
		EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_mC6063FB4A2E79E711911A585DB8C2A0F994A4923_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		IL2CPP_NATIVEARRAY_SET_ITEM(EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D, (L_10)->___m_Buffer, L_11, (L_15));
		NativeArray_1_t1291B8EED1157C7B3FF62D91683A0AC7D076C6BE* L_16 = (NativeArray_1_t1291B8EED1157C7B3FF62D91683A0AC7D076C6BE*)(&(&___1_result)->___Values);
		int32_t L_17 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_6;
		DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_m5E3D83DD488346447A4245CE053A52BE724FC006_inline((void*)L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 9));
		IL2CPP_NATIVEARRAY_SET_ITEM(DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F, (L_16)->___m_Buffer, L_17, (L_21));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4)))));
		V_6 = L_25;
	}

IL_0072:
	{
		int32_t L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007b:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0025;
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_m6FC78553D77DCF4BD2C32F626425A5E4E46AA251_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_t912256E0B2B816732608B1EF2A523DF7460A144D ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = NativeKeyValueArrays_2_get_Length_mA21CC4634690B9925CCCB531D34CE6D67A476869((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_007b;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0072;
	}

IL_0030:
	{
		NativeArray_1_t8BCB604BE54DAF273FDE916E4D30F17CBB42F015* L_10 = (NativeArray_1_t8BCB604BE54DAF273FDE916E4D30F17CBB42F015*)(&(&___1_result)->___Keys);
		int32_t L_11 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_6;
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_m79A11EC661A750655C4DB523B26452DE76DBDAA8_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		IL2CPP_NATIVEARRAY_SET_ITEM(EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD, (L_10)->___m_Buffer, L_11, (L_15));
		NativeArray_1_t2ECE991FE3C71C2513CF9F90F251E98C74D7E290* L_16 = (NativeArray_1_t2ECE991FE3C71C2513CF9F90F251E98C74D7E290*)(&(&___1_result)->___Values);
		int32_t L_17 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_6;
		ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_m6D870E4CECFBA90EF42A30D63C7DE033CB114308_inline((void*)L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 9));
		IL2CPP_NATIVEARRAY_SET_ITEM(ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78, (L_16)->___m_Buffer, L_17, (L_21));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4)))));
		V_6 = L_25;
	}

IL_0072:
	{
		int32_t L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007b:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0025;
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m931EF118679BB3EEADC72CC4DDB8A7EE5DDA29EE_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_t4D5C2BB96A9CB2EE83E4CABEA140554B5BB0864E ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = NativeKeyValueArrays_2_get_Length_mD18881E52D3F3167A6CEFA6F6B624D943B8170B2((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_007b;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0072;
	}

IL_0030:
	{
		NativeArray_1_t8BCB604BE54DAF273FDE916E4D30F17CBB42F015* L_10 = (NativeArray_1_t8BCB604BE54DAF273FDE916E4D30F17CBB42F015*)(&(&___1_result)->___Keys);
		int32_t L_11 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_6;
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_m79A11EC661A750655C4DB523B26452DE76DBDAA8_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		IL2CPP_NATIVEARRAY_SET_ITEM(EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD, (L_10)->___m_Buffer, L_11, (L_15));
		NativeArray_1_t39D14A39A6ACA2DB850DF32D81E357AC49675730* L_16 = (NativeArray_1_t39D14A39A6ACA2DB850DF32D81E357AC49675730*)(&(&___1_result)->___Values);
		int32_t L_17 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_6;
		ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m816C993CFFAA9033A70BF90060F042E40FF9D30F_inline((void*)L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 9));
		IL2CPP_NATIVEARRAY_SET_ITEM(ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C, (L_16)->___m_Buffer, L_17, (L_21));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4)))));
		V_6 = L_25;
	}

IL_0072:
	{
		int32_t L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007b:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0025;
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_mDCC44BC821F691C57FFD705ADC443B7E0AE6DD6B_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t15482D9F7CC02501EED5F540239814F47FD7ABF0 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m1F1E944526C83C5C50C3BEFA897DB7849C6CF967_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4)))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5_m370671121DAEDF4AA1942CAAE0A1DF58E954EBEB_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t44EB3A133DF22EE1B584A5B212FD6518CD42B27F ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5_m331C4C63F372510AD14D346567E6B3877853D8BD_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4)))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_mFFC3D26129A2C1E52BCEF3FB6542394B41D7B616_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t04DF635C0FEAB264F763F4B942D6A669F0B1F1C1 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		AspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50 L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_m42C27C99C832082CC850074116836AD6C7951F4F_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(AspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4)))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisBakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7_m3BF5627E5AA1D3D23C4A1F2A98D279B5CAACB59F_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_tE14EC68A3468927E8107E875446A79D116B04603 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		BakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7 L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisBakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7_m341C66DAFE22D7FF675AB26610BCA44E0E7636AD_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(BakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4)))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_m4E5D2DC71802EC34903300385F65AE1A755332C8_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_m11F042F9F93240F4EC774AB70400B604FB52EACF_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4)))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m89803007681476DBD508BD11A3647BB5DF23D2F0_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_tC4A37FE4F670CE4681F5AD5FBBE68B0043BC29F2 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m09665718EFC7893CDD26DCB1B3EC90D4E46D7A98_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4)))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC207F978B303B5F48108C11804D921E6F240342D_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		bool L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF765CB2E5FD631DFB79C25DE656F3C1BB359B995_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4)))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mAA6CF1576643C57C073B33CBA5D9EDAF50CA0A2B_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		uint8_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m06447B534673E0861DE4F55616DFAF9BD7DCBCC6_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(uint8_t, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4)))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_m293B0131D202EAB4E6DA212BD1162D313571D9FF_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t3C4549E0042C159CF962BB776A84D2C0D9864609 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		ComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_mC0855E940EDA880F3AC7284411BE4E8ED52CA780_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(ComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4)))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_m6FB1D1264CD2D67CEBDFA73298004CBA98F5A6DD_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_tA382EEE61A1BB1A47C7D6FE762A71DFA9BA0EC3E ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_mE975124B2DB09771E16EABF7A001A4619D5F6768_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4)))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mAD4BF717BFAFFF494B6E7DF79A571C6BCEA19CCB_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_tDDBE2218E06075EFCDE280D90B6FA7C4BF46BFD2 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m64F6C7E9916D768E9365F442F252409EECA0CE9C_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4)))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_m5F20ED97470003B13D34EDC08E6FF0DF59156479_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_tB4B7683DD2A8F815875BE195332D74EEF88AE45E ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_mBA7BC7F5CDE7522066ADEB4389DB7FDE05392F39_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4)))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4769F528CC3AB04D768F83B2A2A016AE29C5F87E_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		int32_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4)))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisIntPtr_t_m79D28DA0A3E136868A37FE725786CE5083B4D851_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		intptr_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisIntPtr_t_m1AB5DE7A4962B63822FF70AF37E0BADC77C4AE23_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(intptr_t, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4)))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisPrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751_mBC7131270A903695080DADE345E9C57145DB65A0_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t4FFBB5A3D23110E4F3CD5583649AE34B94C6331C ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		PrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751 L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisPrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751_m956BFBA7E125ECF42542E6A2ABAC0DD7059B8A10_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(PrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4)))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisTransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D_m47FC65DA1EDA13678179D454F041E1282BD048B1_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t88D704C42FF4613A6E6131D50108F5AFCA5F4144 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		TransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisTransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D_mB3EF85E0F07B6626BEE4350E49F8DD84F7E542CE_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(TransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4)))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m505B97941503583EDE85385D308833CF2BEC0E8A_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t8EAF026790EF3DF68B0045BB0E38FB17C27171FF ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m055B0246613F21DF105592E21674EE77285875DC_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4)))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m063FE6E754BE799DB5423B6F3505290896F32298_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		uint16_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mDA4F2F1FC33E2F2F8CC3E761D626E638762C61E4_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(uint16_t, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4)))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisIl2CppFullySharedGenericStruct_m127A626CD960E02AEBF7B88B7A8F3A9401445A69_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_t0232C4E00D4E39FC209358F87310CF1B96E0619E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const Il2CppFullySharedGenericStruct L_15 = alloca(SizeOf_TValue_t0232C4E00D4E39FC209358F87310CF1B96E0619E);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, (void*)L_13, L_14, (Il2CppFullySharedGenericStruct*)L_15);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), (&___1_result), L_11, L_15);
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4)))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA_m44F1062FFC8AF7534E0AE03CD765040FA23055B0_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t6BB9B80B0F7974ABDDCC6212EC861C47D38450ED ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		ActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA_m50C716C28EF2FACA3FD6ECDE4C2290D6ECB07A61_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(ActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4)))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisGetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE_mAA521C888760072B0228AE23544FCE818F4D9D70_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t605EE6881E7CBF0C803EC1F3B91C779E90FF938F ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		GetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisGetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE_m4E9D75DDD928F74FFDA7A6339190E37A04AA1BAA_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(GetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4)))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisGetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E_mEA6F0D5621BB62D9BAB8F26174D6429B86A5CFEA_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t021E2A3E5A6A871FA36CA2A7C7E8F28E2997F960 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		GetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisGetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E_m240057E500574E311F64D761C1B0E81D48539B71_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(GetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4)))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisGetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B_m549FCD16FB0B346FAEF1ECA640A05C7BA52A6557_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_tE86C54A5ACEFF0199233969AEBAE4AB1FD8AA8A4 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		GetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisGetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B_mE31D1DD2E82C423B35C73B7F1E8D557C2DBC75C5_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(GetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4)))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisGetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452_m9DD0583EFFA9C2509921B4964AFE5513376F0D35_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t9230D5979ADB0724CE54B965F21469A945186974 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		GetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452 L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisGetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452_m4E35AE63F5292F45C4B7D57F293CAB353B3768BC_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(GetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4)))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34_m5F9E35B9BF5E451CE319116DEEE3A260F5B074E9_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t6B944030010D60829E768DB6CAF4A6E8ACFBFC51 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		ObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34 L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34_m68422EC542A6BB6DBE519B2416180FA28AFB543E_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(ObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4)))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C_mF5257C327E9FB34ABACDE5874A737B9A5C80480E_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t558AA1B39C895CFA4159FB64D6E90FBBDE347107 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		ObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C_mAA82F9B921463BA85338F4F6907EB371C99E2C0D_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(ObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4)))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA_mDEB58D8EC8B7BCF19DC362E9D3040B11FCADD98A_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_tA828356220037230A27BC3A8E67C1781DC6A8B7D ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		ObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA_mE3F1AB969DB8BDB1A3E3E15E2414CF6A0B1699F1_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(ObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4)))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_m8CA1118E89846668C8BE9E112F9E4E20A8455AD1_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t1291B8EED1157C7B3FF62D91683A0AC7D076C6BE ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_m5E3D83DD488346447A4245CE053A52BE724FC006_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4)))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisEntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055_mAA806B0B565234D880F7681FAF08F9FF4262BD84_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_tF0CA4ED4A83B35E0F121BAEE253FFBF1311D7A9A ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		EntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055 L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisEntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055_m269B2EB28C9E6370F7CF1D48917001A93ECA1836_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(EntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4)))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_mCAC5737501AA6D1F498C0FBEC6E676524E42E6ED_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t2ECE991FE3C71C2513CF9F90F251E98C74D7E290 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_m6D870E4CECFBA90EF42A30D63C7DE033CB114308_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4)))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m20BE9CE88E63ECBA2DBC4F759408E4AAE89F0EE2_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t39D14A39A6ACA2DB850DF32D81E357AC49675730 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m816C993CFFAA9033A70BF90060F042E40FF9D30F_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4)))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisComponentData_t2CB40CF3C2FA75B9CA5D8292DCFA8BF12A42DB07_m324C835D1DC4FEBB4C3785744E08CB836791531A_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t5322C9463FF74A9E271418BB28A235FE3BA914CB ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		ComponentData_t2CB40CF3C2FA75B9CA5D8292DCFA8BF12A42DB07 L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisComponentData_t2CB40CF3C2FA75B9CA5D8292DCFA8BF12A42DB07_m4CC70D46AE7357ECAF9520C12226902E43D8FBFE_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(ComponentData_t2CB40CF3C2FA75B9CA5D8292DCFA8BF12A42DB07, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4)))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisLoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02_mDA6B18C58B28B33AFE6BC97171E93F43A8380EDD_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t199AE8490F8EFECF20612BEF447818B3457173B5 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		LoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02 L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisLoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02_m836F60A4A610F7AD228932364B2855D5CBBE1D65_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(LoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4)))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_TisComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_m1AD9E19069B19689143ED197EB1C63AC02094994_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t* V_10 = NULL;
	int32_t* V_11 = NULL;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	AspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50 V_14;
	memset((&V_14), 0, sizeof(V_14));
	{
		int32_t L_0 = ___2_newBucketCapacity;
		int32_t L_1;
		L_1 = math_ceilpow2_mA00505409975D36AB3D7658687AC3BD5A26F3769_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001d;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int32_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add(L_6, 1))) == ((uint32_t)L_7))))
		{
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		int32_t L_8 = ___1_newCapacity;
		int32_t L_9 = ___2_newBucketCapacity;
		int32_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_TisComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_m68C69F41AEB20CEA359CE36058B8D50A28F4286C(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(((int64_t)L_10), ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int32_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, L_14));
		uint8_t* L_15 = V_3;
		int32_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, L_16));
		uint8_t* L_17 = V_3;
		int32_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, L_18));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		int32_t L_24;
		L_24 = UnsafeUtility_SizeOf_TisComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_m41D379FDF7D470E449CC51CE4A7F7489EF31975B_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_23, L_24))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		int32_t L_30;
		L_30 = UnsafeUtility_SizeOf_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_mCACAE521597CACDD37B73CF9D791E47F2B11D2AB_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_29, L_30))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		int32_t L_36;
		L_36 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_35, L_36))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_37 = ___0_data;
		NullCheck(L_37);
		int32_t L_38 = L_37->___keyCapacity;
		V_7 = L_38;
		goto IL_00aa;
	}

IL_009a:
	{
		uint8_t* L_39 = V_5;
		int32_t L_40 = V_7;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_40), 4))))) = (int32_t)(-1);
		int32_t L_41 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00aa:
	{
		int32_t L_42 = V_7;
		int32_t L_43 = ___1_newCapacity;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_009a;
		}
	}
	{
		V_8 = 0;
		goto IL_00c4;
	}

IL_00b4:
	{
		uint8_t* L_44 = V_6;
		int32_t L_45 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_44, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_45), 4))))) = (int32_t)(-1);
		int32_t L_46 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_00c4:
	{
		int32_t L_47 = V_8;
		int32_t L_48 = ___2_newBucketCapacity;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_00b4;
		}
	}
	{
		V_9 = 0;
		goto IL_014a;
	}

IL_00ce:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_10 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_11 = (int32_t*)L_51;
		goto IL_0138;
	}

IL_00dc:
	{
		int32_t* L_52 = V_10;
		int32_t L_53 = V_9;
		int32_t L_54 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4)))));
		V_12 = L_54;
		int32_t* L_55 = V_10;
		int32_t L_56 = V_9;
		int32_t* L_57 = V_11;
		int32_t L_58 = V_12;
		int32_t L_59 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_12;
		AspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50 L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_m42C27C99C832082CC850074116836AD6C7951F4F_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_14 = L_63;
		int32_t L_64;
		L_64 = AspectType_GetHashCode_m86EDAB33742A358767EB1E6D5791A16B6DDF7355((&V_14), il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_65 = ___2_newBucketCapacity;
		V_13 = ((int32_t)(L_64&((int32_t)il2cpp_codegen_subtract(L_65, 1))));
		int32_t* L_66 = V_11;
		int32_t L_67 = V_12;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_13;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_13;
		int32_t L_73 = V_12;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0138:
	{
		int32_t* L_74 = V_10;
		int32_t L_75 = V_9;
		int32_t L_76 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4)))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00dc;
		}
	}
	{
		int32_t L_77 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_014a:
	{
		int32_t L_78 = V_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00ce;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_017d;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_017d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = ___2_newBucketCapacity;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = ((int32_t)il2cpp_codegen_subtract(L_102, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_mA570A0B094BE59896697D14CD2A80B0AA68D3F58_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t* V_10 = NULL;
	int32_t* V_11 = NULL;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 V_14;
	memset((&V_14), 0, sizeof(V_14));
	{
		int32_t L_0 = ___2_newBucketCapacity;
		int32_t L_1;
		L_1 = math_ceilpow2_mA00505409975D36AB3D7658687AC3BD5A26F3769_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001d;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int32_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add(L_6, 1))) == ((uint32_t)L_7))))
		{
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		int32_t L_8 = ___1_newCapacity;
		int32_t L_9 = ___2_newBucketCapacity;
		int32_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_mEDAC4BAC7832C6D910AF5CB9FC27A3B169C0C5E4(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(((int64_t)L_10), ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int32_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, L_14));
		uint8_t* L_15 = V_3;
		int32_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, L_16));
		uint8_t* L_17 = V_3;
		int32_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, L_18));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		int32_t L_24;
		L_24 = UnsafeUtility_SizeOf_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_mA4948C751919FFE98A0E0CF15D66E11F834B3B5E_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_23, L_24))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		int32_t L_30;
		L_30 = UnsafeUtility_SizeOf_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_mA4948C751919FFE98A0E0CF15D66E11F834B3B5E_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_29, L_30))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		int32_t L_36;
		L_36 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_35, L_36))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_37 = ___0_data;
		NullCheck(L_37);
		int32_t L_38 = L_37->___keyCapacity;
		V_7 = L_38;
		goto IL_00aa;
	}

IL_009a:
	{
		uint8_t* L_39 = V_5;
		int32_t L_40 = V_7;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_40), 4))))) = (int32_t)(-1);
		int32_t L_41 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00aa:
	{
		int32_t L_42 = V_7;
		int32_t L_43 = ___1_newCapacity;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_009a;
		}
	}
	{
		V_8 = 0;
		goto IL_00c4;
	}

IL_00b4:
	{
		uint8_t* L_44 = V_6;
		int32_t L_45 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_44, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_45), 4))))) = (int32_t)(-1);
		int32_t L_46 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_00c4:
	{
		int32_t L_47 = V_8;
		int32_t L_48 = ___2_newBucketCapacity;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_00b4;
		}
	}
	{
		V_9 = 0;
		goto IL_014a;
	}

IL_00ce:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_10 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_11 = (int32_t*)L_51;
		goto IL_0138;
	}

IL_00dc:
	{
		int32_t* L_52 = V_10;
		int32_t L_53 = V_9;
		int32_t L_54 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4)))));
		V_12 = L_54;
		int32_t* L_55 = V_10;
		int32_t L_56 = V_9;
		int32_t* L_57 = V_11;
		int32_t L_58 = V_12;
		int32_t L_59 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_12;
		BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_m11F042F9F93240F4EC774AB70400B604FB52EACF_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_14 = L_63;
		int32_t L_64;
		L_64 = BlobAssetPtr_GetHashCode_mBF1AE2A108DE02B14AE8A026BD389380DED08973((&V_14), il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_65 = ___2_newBucketCapacity;
		V_13 = ((int32_t)(L_64&((int32_t)il2cpp_codegen_subtract(L_65, 1))));
		int32_t* L_66 = V_11;
		int32_t L_67 = V_12;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_13;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_13;
		int32_t L_73 = V_12;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0138:
	{
		int32_t* L_74 = V_10;
		int32_t L_75 = V_9;
		int32_t L_76 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4)))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00dc;
		}
	}
	{
		int32_t L_77 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_014a:
	{
		int32_t L_78 = V_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00ce;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_017d;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_017d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = ___2_newBucketCapacity;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = ((int32_t)il2cpp_codegen_subtract(L_102, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m240329AC6B102379DA5EB52AE67EC6CA9A9DA0A3_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t* V_10 = NULL;
	int32_t* V_11 = NULL;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 V_14;
	memset((&V_14), 0, sizeof(V_14));
	{
		int32_t L_0 = ___2_newBucketCapacity;
		int32_t L_1;
		L_1 = math_ceilpow2_mA00505409975D36AB3D7658687AC3BD5A26F3769_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001d;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int32_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add(L_6, 1))) == ((uint32_t)L_7))))
		{
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		int32_t L_8 = ___1_newCapacity;
		int32_t L_9 = ___2_newBucketCapacity;
		int32_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m05E5D37E1521682851F6EFB198EFD9722CC679CA(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(((int64_t)L_10), ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int32_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, L_14));
		uint8_t* L_15 = V_3;
		int32_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, L_16));
		uint8_t* L_17 = V_3;
		int32_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, L_18));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		int32_t L_24;
		L_24 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_23, L_24))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		int32_t L_30;
		L_30 = UnsafeUtility_SizeOf_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_mA4948C751919FFE98A0E0CF15D66E11F834B3B5E_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_29, L_30))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		int32_t L_36;
		L_36 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_35, L_36))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_37 = ___0_data;
		NullCheck(L_37);
		int32_t L_38 = L_37->___keyCapacity;
		V_7 = L_38;
		goto IL_00aa;
	}

IL_009a:
	{
		uint8_t* L_39 = V_5;
		int32_t L_40 = V_7;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_40), 4))))) = (int32_t)(-1);
		int32_t L_41 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00aa:
	{
		int32_t L_42 = V_7;
		int32_t L_43 = ___1_newCapacity;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_009a;
		}
	}
	{
		V_8 = 0;
		goto IL_00c4;
	}

IL_00b4:
	{
		uint8_t* L_44 = V_6;
		int32_t L_45 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_44, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_45), 4))))) = (int32_t)(-1);
		int32_t L_46 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_00c4:
	{
		int32_t L_47 = V_8;
		int32_t L_48 = ___2_newBucketCapacity;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_00b4;
		}
	}
	{
		V_9 = 0;
		goto IL_014a;
	}

IL_00ce:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_10 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_11 = (int32_t*)L_51;
		goto IL_0138;
	}

IL_00dc:
	{
		int32_t* L_52 = V_10;
		int32_t L_53 = V_9;
		int32_t L_54 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4)))));
		V_12 = L_54;
		int32_t* L_55 = V_10;
		int32_t L_56 = V_9;
		int32_t* L_57 = V_11;
		int32_t L_58 = V_12;
		int32_t L_59 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_12;
		BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_m11F042F9F93240F4EC774AB70400B604FB52EACF_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_14 = L_63;
		int32_t L_64;
		L_64 = BlobAssetPtr_GetHashCode_mBF1AE2A108DE02B14AE8A026BD389380DED08973((&V_14), il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_65 = ___2_newBucketCapacity;
		V_13 = ((int32_t)(L_64&((int32_t)il2cpp_codegen_subtract(L_65, 1))));
		int32_t* L_66 = V_11;
		int32_t L_67 = V_12;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_13;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_13;
		int32_t L_73 = V_12;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0138:
	{
		int32_t* L_74 = V_10;
		int32_t L_75 = V_9;
		int32_t L_76 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4)))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00dc;
		}
	}
	{
		int32_t L_77 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_014a:
	{
		int32_t L_78 = V_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00ce;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_017d;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_017d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = ___2_newBucketCapacity;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = ((int32_t)il2cpp_codegen_subtract(L_102, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBD5A279DB045FE0D586F1951B2F84E2A55D82ED3_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t* V_10 = NULL;
	int32_t* V_11 = NULL;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	ComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D V_14;
	memset((&V_14), 0, sizeof(V_14));
	{
		int32_t L_0 = ___2_newBucketCapacity;
		int32_t L_1;
		L_1 = math_ceilpow2_mA00505409975D36AB3D7658687AC3BD5A26F3769_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001d;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int32_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add(L_6, 1))) == ((uint32_t)L_7))))
		{
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		int32_t L_8 = ___1_newCapacity;
		int32_t L_9 = ___2_newBucketCapacity;
		int32_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m646C62C603DCDC8A0657DC17C4D6B9AA497B4124(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(((int64_t)L_10), ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int32_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, L_14));
		uint8_t* L_15 = V_3;
		int32_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, L_16));
		uint8_t* L_17 = V_3;
		int32_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, L_18));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		int32_t L_24;
		L_24 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_23, L_24))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		int32_t L_30;
		L_30 = UnsafeUtility_SizeOf_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_mA948765B976CB1DE8317E063360E4499B0CB181A_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_29, L_30))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		int32_t L_36;
		L_36 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_35, L_36))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_37 = ___0_data;
		NullCheck(L_37);
		int32_t L_38 = L_37->___keyCapacity;
		V_7 = L_38;
		goto IL_00aa;
	}

IL_009a:
	{
		uint8_t* L_39 = V_5;
		int32_t L_40 = V_7;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_40), 4))))) = (int32_t)(-1);
		int32_t L_41 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00aa:
	{
		int32_t L_42 = V_7;
		int32_t L_43 = ___1_newCapacity;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_009a;
		}
	}
	{
		V_8 = 0;
		goto IL_00c4;
	}

IL_00b4:
	{
		uint8_t* L_44 = V_6;
		int32_t L_45 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_44, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_45), 4))))) = (int32_t)(-1);
		int32_t L_46 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_00c4:
	{
		int32_t L_47 = V_8;
		int32_t L_48 = ___2_newBucketCapacity;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_00b4;
		}
	}
	{
		V_9 = 0;
		goto IL_014a;
	}

IL_00ce:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_10 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_11 = (int32_t*)L_51;
		goto IL_0138;
	}

IL_00dc:
	{
		int32_t* L_52 = V_10;
		int32_t L_53 = V_9;
		int32_t L_54 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4)))));
		V_12 = L_54;
		int32_t* L_55 = V_10;
		int32_t L_56 = V_9;
		int32_t* L_57 = V_11;
		int32_t L_58 = V_12;
		int32_t L_59 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_12;
		ComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_mC0855E940EDA880F3AC7284411BE4E8ED52CA780_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_14 = L_63;
		int32_t L_64;
		L_64 = ComponentBakeTrigger_GetHashCode_m5FA5B5B239BA98105D49F6BC9A66977340575534((&V_14), il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_65 = ___2_newBucketCapacity;
		V_13 = ((int32_t)(L_64&((int32_t)il2cpp_codegen_subtract(L_65, 1))));
		int32_t* L_66 = V_11;
		int32_t L_67 = V_12;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_13;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_13;
		int32_t L_73 = V_12;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0138:
	{
		int32_t* L_74 = V_10;
		int32_t L_75 = V_9;
		int32_t L_76 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4)))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00dc;
		}
	}
	{
		int32_t L_77 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_014a:
	{
		int32_t L_78 = V_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00ce;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_017d;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_017d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = ___2_newBucketCapacity;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = ((int32_t)il2cpp_codegen_subtract(L_102, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m07282B0C084A95A2258F6653E19255CC9AA88BE8_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t* V_10 = NULL;
	int32_t* V_11 = NULL;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_14;
	memset((&V_14), 0, sizeof(V_14));
	{
		int32_t L_0 = ___2_newBucketCapacity;
		int32_t L_1;
		L_1 = math_ceilpow2_mA00505409975D36AB3D7658687AC3BD5A26F3769_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001d;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int32_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add(L_6, 1))) == ((uint32_t)L_7))))
		{
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		int32_t L_8 = ___1_newCapacity;
		int32_t L_9 = ___2_newBucketCapacity;
		int32_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m4AE5AE7BD76144FF987297E65AF2CE1F27557E4A(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(((int64_t)L_10), ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int32_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, L_14));
		uint8_t* L_15 = V_3;
		int32_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, L_16));
		uint8_t* L_17 = V_3;
		int32_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, L_18));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		int32_t L_24;
		L_24 = UnsafeUtility_SizeOf_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5B2EBCF5A7515312D5BBDA1CC5ACDA8C99F14E18_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_23, L_24))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		int32_t L_30;
		L_30 = UnsafeUtility_SizeOf_TisComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_m41D379FDF7D470E449CC51CE4A7F7489EF31975B_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_29, L_30))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		int32_t L_36;
		L_36 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_35, L_36))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_37 = ___0_data;
		NullCheck(L_37);
		int32_t L_38 = L_37->___keyCapacity;
		V_7 = L_38;
		goto IL_00aa;
	}

IL_009a:
	{
		uint8_t* L_39 = V_5;
		int32_t L_40 = V_7;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_40), 4))))) = (int32_t)(-1);
		int32_t L_41 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00aa:
	{
		int32_t L_42 = V_7;
		int32_t L_43 = ___1_newCapacity;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_009a;
		}
	}
	{
		V_8 = 0;
		goto IL_00c4;
	}

IL_00b4:
	{
		uint8_t* L_44 = V_6;
		int32_t L_45 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_44, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_45), 4))))) = (int32_t)(-1);
		int32_t L_46 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_00c4:
	{
		int32_t L_47 = V_8;
		int32_t L_48 = ___2_newBucketCapacity;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_00b4;
		}
	}
	{
		V_9 = 0;
		goto IL_014a;
	}

IL_00ce:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_10 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_11 = (int32_t*)L_51;
		goto IL_0138;
	}

IL_00dc:
	{
		int32_t* L_52 = V_10;
		int32_t L_53 = V_9;
		int32_t L_54 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4)))));
		V_12 = L_54;
		int32_t* L_55 = V_10;
		int32_t L_56 = V_9;
		int32_t* L_57 = V_11;
		int32_t L_58 = V_12;
		int32_t L_59 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_12;
		ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_mE975124B2DB09771E16EABF7A001A4619D5F6768_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_14 = L_63;
		il2cpp_codegen_runtime_class_init_inline(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_il2cpp_TypeInfo_var);
		int32_t L_64;
		L_64 = ComponentType_GetHashCode_m2150FBB0BC94EC1D3407990BA9CCA08BA634941D((&V_14), il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_65 = ___2_newBucketCapacity;
		V_13 = ((int32_t)(L_64&((int32_t)il2cpp_codegen_subtract(L_65, 1))));
		int32_t* L_66 = V_11;
		int32_t L_67 = V_12;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_13;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_13;
		int32_t L_73 = V_12;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0138:
	{
		int32_t* L_74 = V_10;
		int32_t L_75 = V_9;
		int32_t L_76 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4)))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00dc;
		}
	}
	{
		int32_t L_77 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_014a:
	{
		int32_t L_78 = V_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00ce;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_017d;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_017d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = ___2_newBucketCapacity;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = ((int32_t)il2cpp_codegen_subtract(L_102, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBAFE6A408E291D41D5B742BCDDD4DA118F2AB8C2_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t* V_10 = NULL;
	int32_t* V_11 = NULL;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	ComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB V_14;
	memset((&V_14), 0, sizeof(V_14));
	{
		int32_t L_0 = ___2_newBucketCapacity;
		int32_t L_1;
		L_1 = math_ceilpow2_mA00505409975D36AB3D7658687AC3BD5A26F3769_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001d;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int32_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add(L_6, 1))) == ((uint32_t)L_7))))
		{
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		int32_t L_8 = ___1_newCapacity;
		int32_t L_9 = ___2_newBucketCapacity;
		int32_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB38F58AA8E579100FD36CC7DC7A7B41CFF4CA109(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(((int64_t)L_10), ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int32_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, L_14));
		uint8_t* L_15 = V_3;
		int32_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, L_16));
		uint8_t* L_17 = V_3;
		int32_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, L_18));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		int32_t L_24;
		L_24 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_23, L_24))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		int32_t L_30;
		L_30 = UnsafeUtility_SizeOf_TisComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB_m123857F85C9BFD317BC4CB88F03DB057AC7A8CC0_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_29, L_30))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		int32_t L_36;
		L_36 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_35, L_36))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_37 = ___0_data;
		NullCheck(L_37);
		int32_t L_38 = L_37->___keyCapacity;
		V_7 = L_38;
		goto IL_00aa;
	}

IL_009a:
	{
		uint8_t* L_39 = V_5;
		int32_t L_40 = V_7;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_40), 4))))) = (int32_t)(-1);
		int32_t L_41 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00aa:
	{
		int32_t L_42 = V_7;
		int32_t L_43 = ___1_newCapacity;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_009a;
		}
	}
	{
		V_8 = 0;
		goto IL_00c4;
	}

IL_00b4:
	{
		uint8_t* L_44 = V_6;
		int32_t L_45 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_44, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_45), 4))))) = (int32_t)(-1);
		int32_t L_46 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_00c4:
	{
		int32_t L_47 = V_8;
		int32_t L_48 = ___2_newBucketCapacity;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_00b4;
		}
	}
	{
		V_9 = 0;
		goto IL_014a;
	}

IL_00ce:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_10 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_11 = (int32_t*)L_51;
		goto IL_0138;
	}

IL_00dc:
	{
		int32_t* L_52 = V_10;
		int32_t L_53 = V_9;
		int32_t L_54 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4)))));
		V_12 = L_54;
		int32_t* L_55 = V_10;
		int32_t L_56 = V_9;
		int32_t* L_57 = V_11;
		int32_t L_58 = V_12;
		int32_t L_59 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_12;
		ComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB_mF1DA179FEC24B2BD7741BBE13FC22FA26604FBB9_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_14 = L_63;
		int32_t L_64;
		L_64 = ComponentTypeHash_GetHashCode_m2BDE47B17E712574DFAEDE8F7A037F5E3C355BE0((&V_14), il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_65 = ___2_newBucketCapacity;
		V_13 = ((int32_t)(L_64&((int32_t)il2cpp_codegen_subtract(L_65, 1))));
		int32_t* L_66 = V_11;
		int32_t L_67 = V_12;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_13;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_13;
		int32_t L_73 = V_12;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0138:
	{
		int32_t* L_74 = V_10;
		int32_t L_75 = V_9;
		int32_t L_76 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4)))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00dc;
		}
	}
	{
		int32_t L_77 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_014a:
	{
		int32_t L_78 = V_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00ce;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_017d;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_017d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = ___2_newBucketCapacity;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = ((int32_t)il2cpp_codegen_subtract(L_102, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m096C25577A938BE0A900EE3CCAB9E8C009387D59_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t* V_10 = NULL;
	int32_t* V_11 = NULL;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD V_14;
	memset((&V_14), 0, sizeof(V_14));
	{
		int32_t L_0 = ___2_newBucketCapacity;
		int32_t L_1;
		L_1 = math_ceilpow2_mA00505409975D36AB3D7658687AC3BD5A26F3769_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001d;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int32_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add(L_6, 1))) == ((uint32_t)L_7))))
		{
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		int32_t L_8 = ___1_newCapacity;
		int32_t L_9 = ___2_newBucketCapacity;
		int32_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mACBFD987F5F210997F8F84C621594C803FC16079(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(((int64_t)L_10), ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int32_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, L_14));
		uint8_t* L_15 = V_3;
		int32_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, L_16));
		uint8_t* L_17 = V_3;
		int32_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, L_18));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		int32_t L_24;
		L_24 = UnsafeUtility_SizeOf_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5B2EBCF5A7515312D5BBDA1CC5ACDA8C99F14E18_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_23, L_24))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		int32_t L_30;
		L_30 = UnsafeUtility_SizeOf_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m177EBEBF64B94FE192C8268AE6BCB9A563047C3C_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_29, L_30))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		int32_t L_36;
		L_36 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_35, L_36))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_37 = ___0_data;
		NullCheck(L_37);
		int32_t L_38 = L_37->___keyCapacity;
		V_7 = L_38;
		goto IL_00aa;
	}

IL_009a:
	{
		uint8_t* L_39 = V_5;
		int32_t L_40 = V_7;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_40), 4))))) = (int32_t)(-1);
		int32_t L_41 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00aa:
	{
		int32_t L_42 = V_7;
		int32_t L_43 = ___1_newCapacity;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_009a;
		}
	}
	{
		V_8 = 0;
		goto IL_00c4;
	}

IL_00b4:
	{
		uint8_t* L_44 = V_6;
		int32_t L_45 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_44, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_45), 4))))) = (int32_t)(-1);
		int32_t L_46 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_00c4:
	{
		int32_t L_47 = V_8;
		int32_t L_48 = ___2_newBucketCapacity;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_00b4;
		}
	}
	{
		V_9 = 0;
		goto IL_014a;
	}

IL_00ce:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_10 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_11 = (int32_t*)L_51;
		goto IL_0138;
	}

IL_00dc:
	{
		int32_t* L_52 = V_10;
		int32_t L_53 = V_9;
		int32_t L_54 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4)))));
		V_12 = L_54;
		int32_t* L_55 = V_10;
		int32_t L_56 = V_9;
		int32_t* L_57 = V_11;
		int32_t L_58 = V_12;
		int32_t L_59 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_12;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m64F6C7E9916D768E9365F442F252409EECA0CE9C_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_14 = L_63;
		int32_t L_64;
		L_64 = Entity_GetHashCode_m223ECCF7A7C3F199EF0E53C4F84857FE090A0823_inline((&V_14), il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_65 = ___2_newBucketCapacity;
		V_13 = ((int32_t)(L_64&((int32_t)il2cpp_codegen_subtract(L_65, 1))));
		int32_t* L_66 = V_11;
		int32_t L_67 = V_12;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_13;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_13;
		int32_t L_73 = V_12;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0138:
	{
		int32_t* L_74 = V_10;
		int32_t L_75 = V_9;
		int32_t L_76 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4)))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00dc;
		}
	}
	{
		int32_t L_77 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_014a:
	{
		int32_t L_78 = V_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00ce;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_017d;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_017d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = ___2_newBucketCapacity;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = ((int32_t)il2cpp_codegen_subtract(L_102, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m84DE5E8C5D81D3EF7A9EBC8F4679FA88236003A5_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t* V_10 = NULL;
	int32_t* V_11 = NULL;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD V_14;
	memset((&V_14), 0, sizeof(V_14));
	{
		int32_t L_0 = ___2_newBucketCapacity;
		int32_t L_1;
		L_1 = math_ceilpow2_mA00505409975D36AB3D7658687AC3BD5A26F3769_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001d;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int32_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add(L_6, 1))) == ((uint32_t)L_7))))
		{
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		int32_t L_8 = ___1_newCapacity;
		int32_t L_9 = ___2_newBucketCapacity;
		int32_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m148AD5A3CDF22C9E840937DB84A071EE8D7D43BC(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(((int64_t)L_10), ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int32_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, L_14));
		uint8_t* L_15 = V_3;
		int32_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, L_16));
		uint8_t* L_17 = V_3;
		int32_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, L_18));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		int32_t L_24;
		L_24 = UnsafeUtility_SizeOf_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m177EBEBF64B94FE192C8268AE6BCB9A563047C3C_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_23, L_24))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		int32_t L_30;
		L_30 = UnsafeUtility_SizeOf_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m177EBEBF64B94FE192C8268AE6BCB9A563047C3C_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_29, L_30))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		int32_t L_36;
		L_36 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_35, L_36))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_37 = ___0_data;
		NullCheck(L_37);
		int32_t L_38 = L_37->___keyCapacity;
		V_7 = L_38;
		goto IL_00aa;
	}

IL_009a:
	{
		uint8_t* L_39 = V_5;
		int32_t L_40 = V_7;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_40), 4))))) = (int32_t)(-1);
		int32_t L_41 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00aa:
	{
		int32_t L_42 = V_7;
		int32_t L_43 = ___1_newCapacity;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_009a;
		}
	}
	{
		V_8 = 0;
		goto IL_00c4;
	}

IL_00b4:
	{
		uint8_t* L_44 = V_6;
		int32_t L_45 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_44, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_45), 4))))) = (int32_t)(-1);
		int32_t L_46 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_00c4:
	{
		int32_t L_47 = V_8;
		int32_t L_48 = ___2_newBucketCapacity;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_00b4;
		}
	}
	{
		V_9 = 0;
		goto IL_014a;
	}

IL_00ce:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_10 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_11 = (int32_t*)L_51;
		goto IL_0138;
	}

IL_00dc:
	{
		int32_t* L_52 = V_10;
		int32_t L_53 = V_9;
		int32_t L_54 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4)))));
		V_12 = L_54;
		int32_t* L_55 = V_10;
		int32_t L_56 = V_9;
		int32_t* L_57 = V_11;
		int32_t L_58 = V_12;
		int32_t L_59 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_12;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m64F6C7E9916D768E9365F442F252409EECA0CE9C_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_14 = L_63;
		int32_t L_64;
		L_64 = Entity_GetHashCode_m223ECCF7A7C3F199EF0E53C4F84857FE090A0823_inline((&V_14), il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_65 = ___2_newBucketCapacity;
		V_13 = ((int32_t)(L_64&((int32_t)il2cpp_codegen_subtract(L_65, 1))));
		int32_t* L_66 = V_11;
		int32_t L_67 = V_12;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_13;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_13;
		int32_t L_73 = V_12;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0138:
	{
		int32_t* L_74 = V_10;
		int32_t L_75 = V_9;
		int32_t L_76 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4)))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00dc;
		}
	}
	{
		int32_t L_77 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_014a:
	{
		int32_t L_78 = V_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00ce;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_017d;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_017d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = ___2_newBucketCapacity;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = ((int32_t)il2cpp_codegen_subtract(L_102, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_mB082F30F178F0B44D6142571A702B6BC0F3DAF94_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t* V_10 = NULL;
	int32_t* V_11 = NULL;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD V_14;
	memset((&V_14), 0, sizeof(V_14));
	{
		int32_t L_0 = ___2_newBucketCapacity;
		int32_t L_1;
		L_1 = math_ceilpow2_mA00505409975D36AB3D7658687AC3BD5A26F3769_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001d;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int32_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add(L_6, 1))) == ((uint32_t)L_7))))
		{
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		int32_t L_8 = ___1_newCapacity;
		int32_t L_9 = ___2_newBucketCapacity;
		int32_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_mBC8079E5C7FD0050043935B4BECCE50B83B1AFE8(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(((int64_t)L_10), ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int32_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, L_14));
		uint8_t* L_15 = V_3;
		int32_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, L_16));
		uint8_t* L_17 = V_3;
		int32_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, L_18));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		int32_t L_24;
		L_24 = UnsafeUtility_SizeOf_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_mAEF65C486D008558F825C99D85F94551E317B4DF_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_23, L_24))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		int32_t L_30;
		L_30 = UnsafeUtility_SizeOf_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m177EBEBF64B94FE192C8268AE6BCB9A563047C3C_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_29, L_30))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		int32_t L_36;
		L_36 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_35, L_36))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_37 = ___0_data;
		NullCheck(L_37);
		int32_t L_38 = L_37->___keyCapacity;
		V_7 = L_38;
		goto IL_00aa;
	}

IL_009a:
	{
		uint8_t* L_39 = V_5;
		int32_t L_40 = V_7;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_40), 4))))) = (int32_t)(-1);
		int32_t L_41 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00aa:
	{
		int32_t L_42 = V_7;
		int32_t L_43 = ___1_newCapacity;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_009a;
		}
	}
	{
		V_8 = 0;
		goto IL_00c4;
	}

IL_00b4:
	{
		uint8_t* L_44 = V_6;
		int32_t L_45 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_44, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_45), 4))))) = (int32_t)(-1);
		int32_t L_46 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_00c4:
	{
		int32_t L_47 = V_8;
		int32_t L_48 = ___2_newBucketCapacity;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_00b4;
		}
	}
	{
		V_9 = 0;
		goto IL_014a;
	}

IL_00ce:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_10 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_11 = (int32_t*)L_51;
		goto IL_0138;
	}

IL_00dc:
	{
		int32_t* L_52 = V_10;
		int32_t L_53 = V_9;
		int32_t L_54 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4)))));
		V_12 = L_54;
		int32_t* L_55 = V_10;
		int32_t L_56 = V_9;
		int32_t* L_57 = V_11;
		int32_t L_58 = V_12;
		int32_t L_59 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_12;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m64F6C7E9916D768E9365F442F252409EECA0CE9C_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_14 = L_63;
		int32_t L_64;
		L_64 = Entity_GetHashCode_m223ECCF7A7C3F199EF0E53C4F84857FE090A0823_inline((&V_14), il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_65 = ___2_newBucketCapacity;
		V_13 = ((int32_t)(L_64&((int32_t)il2cpp_codegen_subtract(L_65, 1))));
		int32_t* L_66 = V_11;
		int32_t L_67 = V_12;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_13;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_13;
		int32_t L_73 = V_12;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0138:
	{
		int32_t* L_74 = V_10;
		int32_t L_75 = V_9;
		int32_t L_76 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4)))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00dc;
		}
	}
	{
		int32_t L_77 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_014a:
	{
		int32_t L_78 = V_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00ce;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_017d;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_017d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = ___2_newBucketCapacity;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = ((int32_t)il2cpp_codegen_subtract(L_102, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC9BB37C0B8B82D5B8D6BD6BEEC9C5F6F1700A0A4_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t* V_10 = NULL;
	int32_t* V_11 = NULL;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD V_14;
	memset((&V_14), 0, sizeof(V_14));
	{
		int32_t L_0 = ___2_newBucketCapacity;
		int32_t L_1;
		L_1 = math_ceilpow2_mA00505409975D36AB3D7658687AC3BD5A26F3769_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001d;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int32_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add(L_6, 1))) == ((uint32_t)L_7))))
		{
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		int32_t L_8 = ___1_newCapacity;
		int32_t L_9 = ___2_newBucketCapacity;
		int32_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD412AAC6AA3EC2F9B2200873436D4386786DD49F(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(((int64_t)L_10), ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int32_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, L_14));
		uint8_t* L_15 = V_3;
		int32_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, L_16));
		uint8_t* L_17 = V_3;
		int32_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, L_18));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		int32_t L_24;
		L_24 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_23, L_24))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		int32_t L_30;
		L_30 = UnsafeUtility_SizeOf_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m177EBEBF64B94FE192C8268AE6BCB9A563047C3C_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_29, L_30))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		int32_t L_36;
		L_36 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_35, L_36))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_37 = ___0_data;
		NullCheck(L_37);
		int32_t L_38 = L_37->___keyCapacity;
		V_7 = L_38;
		goto IL_00aa;
	}

IL_009a:
	{
		uint8_t* L_39 = V_5;
		int32_t L_40 = V_7;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_40), 4))))) = (int32_t)(-1);
		int32_t L_41 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00aa:
	{
		int32_t L_42 = V_7;
		int32_t L_43 = ___1_newCapacity;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_009a;
		}
	}
	{
		V_8 = 0;
		goto IL_00c4;
	}

IL_00b4:
	{
		uint8_t* L_44 = V_6;
		int32_t L_45 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_44, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_45), 4))))) = (int32_t)(-1);
		int32_t L_46 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_00c4:
	{
		int32_t L_47 = V_8;
		int32_t L_48 = ___2_newBucketCapacity;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_00b4;
		}
	}
	{
		V_9 = 0;
		goto IL_014a;
	}

IL_00ce:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_10 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_11 = (int32_t*)L_51;
		goto IL_0138;
	}

IL_00dc:
	{
		int32_t* L_52 = V_10;
		int32_t L_53 = V_9;
		int32_t L_54 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4)))));
		V_12 = L_54;
		int32_t* L_55 = V_10;
		int32_t L_56 = V_9;
		int32_t* L_57 = V_11;
		int32_t L_58 = V_12;
		int32_t L_59 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_12;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m64F6C7E9916D768E9365F442F252409EECA0CE9C_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_14 = L_63;
		int32_t L_64;
		L_64 = Entity_GetHashCode_m223ECCF7A7C3F199EF0E53C4F84857FE090A0823_inline((&V_14), il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_65 = ___2_newBucketCapacity;
		V_13 = ((int32_t)(L_64&((int32_t)il2cpp_codegen_subtract(L_65, 1))));
		int32_t* L_66 = V_11;
		int32_t L_67 = V_12;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_13;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_13;
		int32_t L_73 = V_12;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0138:
	{
		int32_t* L_74 = V_10;
		int32_t L_75 = V_9;
		int32_t L_76 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4)))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00dc;
		}
	}
	{
		int32_t L_77 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_014a:
	{
		int32_t L_78 = V_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00ce;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_017d;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_017d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = ___2_newBucketCapacity;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = ((int32_t)il2cpp_codegen_subtract(L_102, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisTransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D_mCB3C747E8BFBA7A7193E3D489152488435008438_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t* V_10 = NULL;
	int32_t* V_11 = NULL;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD V_14;
	memset((&V_14), 0, sizeof(V_14));
	{
		int32_t L_0 = ___2_newBucketCapacity;
		int32_t L_1;
		L_1 = math_ceilpow2_mA00505409975D36AB3D7658687AC3BD5A26F3769_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001d;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int32_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add(L_6, 1))) == ((uint32_t)L_7))))
		{
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		int32_t L_8 = ___1_newCapacity;
		int32_t L_9 = ___2_newBucketCapacity;
		int32_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisTransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D_m58B02888476CE926C1BB9C65751EBFE2403F99B2(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(((int64_t)L_10), ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int32_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, L_14));
		uint8_t* L_15 = V_3;
		int32_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, L_16));
		uint8_t* L_17 = V_3;
		int32_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, L_18));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		int32_t L_24;
		L_24 = UnsafeUtility_SizeOf_TisTransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D_m245C9FB0E7B630F5AF8620DE958B68FBBDC95869_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_23, L_24))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		int32_t L_30;
		L_30 = UnsafeUtility_SizeOf_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m177EBEBF64B94FE192C8268AE6BCB9A563047C3C_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_29, L_30))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		int32_t L_36;
		L_36 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_35, L_36))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_37 = ___0_data;
		NullCheck(L_37);
		int32_t L_38 = L_37->___keyCapacity;
		V_7 = L_38;
		goto IL_00aa;
	}

IL_009a:
	{
		uint8_t* L_39 = V_5;
		int32_t L_40 = V_7;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_40), 4))))) = (int32_t)(-1);
		int32_t L_41 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00aa:
	{
		int32_t L_42 = V_7;
		int32_t L_43 = ___1_newCapacity;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_009a;
		}
	}
	{
		V_8 = 0;
		goto IL_00c4;
	}

IL_00b4:
	{
		uint8_t* L_44 = V_6;
		int32_t L_45 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_44, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_45), 4))))) = (int32_t)(-1);
		int32_t L_46 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_00c4:
	{
		int32_t L_47 = V_8;
		int32_t L_48 = ___2_newBucketCapacity;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_00b4;
		}
	}
	{
		V_9 = 0;
		goto IL_014a;
	}

IL_00ce:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_10 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_11 = (int32_t*)L_51;
		goto IL_0138;
	}

IL_00dc:
	{
		int32_t* L_52 = V_10;
		int32_t L_53 = V_9;
		int32_t L_54 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4)))));
		V_12 = L_54;
		int32_t* L_55 = V_10;
		int32_t L_56 = V_9;
		int32_t* L_57 = V_11;
		int32_t L_58 = V_12;
		int32_t L_59 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_12;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m64F6C7E9916D768E9365F442F252409EECA0CE9C_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_14 = L_63;
		int32_t L_64;
		L_64 = Entity_GetHashCode_m223ECCF7A7C3F199EF0E53C4F84857FE090A0823_inline((&V_14), il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_65 = ___2_newBucketCapacity;
		V_13 = ((int32_t)(L_64&((int32_t)il2cpp_codegen_subtract(L_65, 1))));
		int32_t* L_66 = V_11;
		int32_t L_67 = V_12;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_13;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_13;
		int32_t L_73 = V_12;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0138:
	{
		int32_t* L_74 = V_10;
		int32_t L_75 = V_9;
		int32_t L_76 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4)))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00dc;
		}
	}
	{
		int32_t L_77 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_014a:
	{
		int32_t L_78 = V_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00ce;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_017d;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_017d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = ___2_newBucketCapacity;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = ((int32_t)il2cpp_codegen_subtract(L_102, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m59B0869E1A958536B21B5A6B55BA4DFAED974BFF_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t* V_10 = NULL;
	int32_t* V_11 = NULL;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 V_14;
	memset((&V_14), 0, sizeof(V_14));
	{
		int32_t L_0 = ___2_newBucketCapacity;
		int32_t L_1;
		L_1 = math_ceilpow2_mA00505409975D36AB3D7658687AC3BD5A26F3769_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001d;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int32_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add(L_6, 1))) == ((uint32_t)L_7))))
		{
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		int32_t L_8 = ___1_newCapacity;
		int32_t L_9 = ___2_newBucketCapacity;
		int32_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m8BC8F36B4E478A293D4547101BA1084F29AA8023(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(((int64_t)L_10), ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int32_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, L_14));
		uint8_t* L_15 = V_3;
		int32_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, L_16));
		uint8_t* L_17 = V_3;
		int32_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, L_18));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		int32_t L_24;
		L_24 = UnsafeUtility_SizeOf_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5B2EBCF5A7515312D5BBDA1CC5ACDA8C99F14E18_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_23, L_24))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		int32_t L_30;
		L_30 = UnsafeUtility_SizeOf_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_mAEF65C486D008558F825C99D85F94551E317B4DF_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_29, L_30))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		int32_t L_36;
		L_36 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_35, L_36))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_37 = ___0_data;
		NullCheck(L_37);
		int32_t L_38 = L_37->___keyCapacity;
		V_7 = L_38;
		goto IL_00aa;
	}

IL_009a:
	{
		uint8_t* L_39 = V_5;
		int32_t L_40 = V_7;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_40), 4))))) = (int32_t)(-1);
		int32_t L_41 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00aa:
	{
		int32_t L_42 = V_7;
		int32_t L_43 = ___1_newCapacity;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_009a;
		}
	}
	{
		V_8 = 0;
		goto IL_00c4;
	}

IL_00b4:
	{
		uint8_t* L_44 = V_6;
		int32_t L_45 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_44, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_45), 4))))) = (int32_t)(-1);
		int32_t L_46 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_00c4:
	{
		int32_t L_47 = V_8;
		int32_t L_48 = ___2_newBucketCapacity;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_00b4;
		}
	}
	{
		V_9 = 0;
		goto IL_014a;
	}

IL_00ce:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_10 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_11 = (int32_t*)L_51;
		goto IL_0138;
	}

IL_00dc:
	{
		int32_t* L_52 = V_10;
		int32_t L_53 = V_9;
		int32_t L_54 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4)))));
		V_12 = L_54;
		int32_t* L_55 = V_10;
		int32_t L_56 = V_9;
		int32_t* L_57 = V_11;
		int32_t L_58 = V_12;
		int32_t L_59 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_12;
		EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_mBA7BC7F5CDE7522066ADEB4389DB7FDE05392F39_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_14 = L_63;
		il2cpp_codegen_runtime_class_init_inline(EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_il2cpp_TypeInfo_var);
		int32_t L_64;
		L_64 = EntityGuid_GetHashCode_m7A7EC54EB724EC21A02AE19DAD24211FAC9870D4((&V_14), il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_65 = ___2_newBucketCapacity;
		V_13 = ((int32_t)(L_64&((int32_t)il2cpp_codegen_subtract(L_65, 1))));
		int32_t* L_66 = V_11;
		int32_t L_67 = V_12;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_13;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_13;
		int32_t L_73 = V_12;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0138:
	{
		int32_t* L_74 = V_10;
		int32_t L_75 = V_9;
		int32_t L_76 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4)))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00dc;
		}
	}
	{
		int32_t L_77 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_014a:
	{
		int32_t L_78 = V_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00ce;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_017d;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_017d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = ___2_newBucketCapacity;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = ((int32_t)il2cpp_codegen_subtract(L_102, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mB25AB0CE9024BE98C3F51EC6BFA32A366F50903A_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t* V_10 = NULL;
	int32_t* V_11 = NULL;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 V_14;
	memset((&V_14), 0, sizeof(V_14));
	{
		int32_t L_0 = ___2_newBucketCapacity;
		int32_t L_1;
		L_1 = math_ceilpow2_mA00505409975D36AB3D7658687AC3BD5A26F3769_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001d;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int32_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add(L_6, 1))) == ((uint32_t)L_7))))
		{
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		int32_t L_8 = ___1_newCapacity;
		int32_t L_9 = ___2_newBucketCapacity;
		int32_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m5F9E7E27B9C12648FBB4D23C4F71F738ABB36E89(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(((int64_t)L_10), ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int32_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, L_14));
		uint8_t* L_15 = V_3;
		int32_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, L_16));
		uint8_t* L_17 = V_3;
		int32_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, L_18));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		int32_t L_24;
		L_24 = UnsafeUtility_SizeOf_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m177EBEBF64B94FE192C8268AE6BCB9A563047C3C_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_23, L_24))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		int32_t L_30;
		L_30 = UnsafeUtility_SizeOf_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_mAEF65C486D008558F825C99D85F94551E317B4DF_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_29, L_30))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		int32_t L_36;
		L_36 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_35, L_36))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_37 = ___0_data;
		NullCheck(L_37);
		int32_t L_38 = L_37->___keyCapacity;
		V_7 = L_38;
		goto IL_00aa;
	}

IL_009a:
	{
		uint8_t* L_39 = V_5;
		int32_t L_40 = V_7;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_40), 4))))) = (int32_t)(-1);
		int32_t L_41 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00aa:
	{
		int32_t L_42 = V_7;
		int32_t L_43 = ___1_newCapacity;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_009a;
		}
	}
	{
		V_8 = 0;
		goto IL_00c4;
	}

IL_00b4:
	{
		uint8_t* L_44 = V_6;
		int32_t L_45 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_44, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_45), 4))))) = (int32_t)(-1);
		int32_t L_46 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_00c4:
	{
		int32_t L_47 = V_8;
		int32_t L_48 = ___2_newBucketCapacity;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_00b4;
		}
	}
	{
		V_9 = 0;
		goto IL_014a;
	}

IL_00ce:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_10 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_11 = (int32_t*)L_51;
		goto IL_0138;
	}

IL_00dc:
	{
		int32_t* L_52 = V_10;
		int32_t L_53 = V_9;
		int32_t L_54 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4)))));
		V_12 = L_54;
		int32_t* L_55 = V_10;
		int32_t L_56 = V_9;
		int32_t* L_57 = V_11;
		int32_t L_58 = V_12;
		int32_t L_59 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_12;
		EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_mBA7BC7F5CDE7522066ADEB4389DB7FDE05392F39_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_14 = L_63;
		il2cpp_codegen_runtime_class_init_inline(EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_il2cpp_TypeInfo_var);
		int32_t L_64;
		L_64 = EntityGuid_GetHashCode_m7A7EC54EB724EC21A02AE19DAD24211FAC9870D4((&V_14), il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_65 = ___2_newBucketCapacity;
		V_13 = ((int32_t)(L_64&((int32_t)il2cpp_codegen_subtract(L_65, 1))));
		int32_t* L_66 = V_11;
		int32_t L_67 = V_12;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_13;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_13;
		int32_t L_73 = V_12;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0138:
	{
		int32_t* L_74 = V_10;
		int32_t L_75 = V_9;
		int32_t L_76 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4)))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00dc;
		}
	}
	{
		int32_t L_77 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_014a:
	{
		int32_t L_78 = V_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00ce;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_017d;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_017d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = ___2_newBucketCapacity;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = ((int32_t)il2cpp_codegen_subtract(L_102, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mEF75ABBE57DB5EF17514C607FC8610348DADE7C9_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t* V_10 = NULL;
	int32_t* V_11 = NULL;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 V_14;
	memset((&V_14), 0, sizeof(V_14));
	{
		int32_t L_0 = ___2_newBucketCapacity;
		int32_t L_1;
		L_1 = math_ceilpow2_mA00505409975D36AB3D7658687AC3BD5A26F3769_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001d;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int32_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add(L_6, 1))) == ((uint32_t)L_7))))
		{
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		int32_t L_8 = ___1_newCapacity;
		int32_t L_9 = ___2_newBucketCapacity;
		int32_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m5670C67DD7D8A7C88926DCCE4C0923DE74450A75(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(((int64_t)L_10), ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int32_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, L_14));
		uint8_t* L_15 = V_3;
		int32_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, L_16));
		uint8_t* L_17 = V_3;
		int32_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, L_18));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		int32_t L_24;
		L_24 = UnsafeUtility_SizeOf_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m177EBEBF64B94FE192C8268AE6BCB9A563047C3C_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_23, L_24))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		int32_t L_30;
		L_30 = UnsafeUtility_SizeOf_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_mFBB919BDCE8F3E9F6BB1AC9F036200F466C8E9C4_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_29, L_30))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		int32_t L_36;
		L_36 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_35, L_36))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_37 = ___0_data;
		NullCheck(L_37);
		int32_t L_38 = L_37->___keyCapacity;
		V_7 = L_38;
		goto IL_00aa;
	}

IL_009a:
	{
		uint8_t* L_39 = V_5;
		int32_t L_40 = V_7;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_40), 4))))) = (int32_t)(-1);
		int32_t L_41 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00aa:
	{
		int32_t L_42 = V_7;
		int32_t L_43 = ___1_newCapacity;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_009a;
		}
	}
	{
		V_8 = 0;
		goto IL_00c4;
	}

IL_00b4:
	{
		uint8_t* L_44 = V_6;
		int32_t L_45 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_44, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_45), 4))))) = (int32_t)(-1);
		int32_t L_46 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_00c4:
	{
		int32_t L_47 = V_8;
		int32_t L_48 = ___2_newBucketCapacity;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_00b4;
		}
	}
	{
		V_9 = 0;
		goto IL_014a;
	}

IL_00ce:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_10 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_11 = (int32_t*)L_51;
		goto IL_0138;
	}

IL_00dc:
	{
		int32_t* L_52 = V_10;
		int32_t L_53 = V_9;
		int32_t L_54 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4)))));
		V_12 = L_54;
		int32_t* L_55 = V_10;
		int32_t L_56 = V_9;
		int32_t* L_57 = V_11;
		int32_t L_58 = V_12;
		int32_t L_59 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_12;
		EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_mB198FB4671ADE00B3ADE86BC40D6ABD19AE8C07B_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_14 = L_63;
		int32_t L_64;
		L_64 = EntityPrefabReference_GetHashCode_mD196C830580BB8D49D656347EC9DED820440C56A((&V_14), il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_65 = ___2_newBucketCapacity;
		V_13 = ((int32_t)(L_64&((int32_t)il2cpp_codegen_subtract(L_65, 1))));
		int32_t* L_66 = V_11;
		int32_t L_67 = V_12;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_13;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_13;
		int32_t L_73 = V_12;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0138:
	{
		int32_t* L_74 = V_10;
		int32_t L_75 = V_9;
		int32_t L_76 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4)))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00dc;
		}
	}
	{
		int32_t L_77 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_014a:
	{
		int32_t L_78 = V_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00ce;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_017d;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_017d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = ___2_newBucketCapacity;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = ((int32_t)il2cpp_codegen_subtract(L_102, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisLoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02_m625F774509F294DC17902B5B89556D1A1C20A21F_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t* V_10 = NULL;
	int32_t* V_11 = NULL;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 V_14;
	memset((&V_14), 0, sizeof(V_14));
	{
		int32_t L_0 = ___2_newBucketCapacity;
		int32_t L_1;
		L_1 = math_ceilpow2_mA00505409975D36AB3D7658687AC3BD5A26F3769_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001d;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int32_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add(L_6, 1))) == ((uint32_t)L_7))))
		{
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		int32_t L_8 = ___1_newCapacity;
		int32_t L_9 = ___2_newBucketCapacity;
		int32_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisLoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02_m63EA0289108145E80F681F5464F52FDF73B0B87A(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(((int64_t)L_10), ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int32_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, L_14));
		uint8_t* L_15 = V_3;
		int32_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, L_16));
		uint8_t* L_17 = V_3;
		int32_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, L_18));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		int32_t L_24;
		L_24 = UnsafeUtility_SizeOf_TisLoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02_m3714C1DA541A15F113193B5BF9F03A517ACBDB4B_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_23, L_24))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		int32_t L_30;
		L_30 = UnsafeUtility_SizeOf_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_mFBB919BDCE8F3E9F6BB1AC9F036200F466C8E9C4_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_29, L_30))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		int32_t L_36;
		L_36 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_35, L_36))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_37 = ___0_data;
		NullCheck(L_37);
		int32_t L_38 = L_37->___keyCapacity;
		V_7 = L_38;
		goto IL_00aa;
	}

IL_009a:
	{
		uint8_t* L_39 = V_5;
		int32_t L_40 = V_7;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_40), 4))))) = (int32_t)(-1);
		int32_t L_41 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00aa:
	{
		int32_t L_42 = V_7;
		int32_t L_43 = ___1_newCapacity;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_009a;
		}
	}
	{
		V_8 = 0;
		goto IL_00c4;
	}

IL_00b4:
	{
		uint8_t* L_44 = V_6;
		int32_t L_45 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_44, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_45), 4))))) = (int32_t)(-1);
		int32_t L_46 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_00c4:
	{
		int32_t L_47 = V_8;
		int32_t L_48 = ___2_newBucketCapacity;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_00b4;
		}
	}
	{
		V_9 = 0;
		goto IL_014a;
	}

IL_00ce:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_10 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_11 = (int32_t*)L_51;
		goto IL_0138;
	}

IL_00dc:
	{
		int32_t* L_52 = V_10;
		int32_t L_53 = V_9;
		int32_t L_54 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4)))));
		V_12 = L_54;
		int32_t* L_55 = V_10;
		int32_t L_56 = V_9;
		int32_t* L_57 = V_11;
		int32_t L_58 = V_12;
		int32_t L_59 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_12;
		EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_mB198FB4671ADE00B3ADE86BC40D6ABD19AE8C07B_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_14 = L_63;
		int32_t L_64;
		L_64 = EntityPrefabReference_GetHashCode_mD196C830580BB8D49D656347EC9DED820440C56A((&V_14), il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_65 = ___2_newBucketCapacity;
		V_13 = ((int32_t)(L_64&((int32_t)il2cpp_codegen_subtract(L_65, 1))));
		int32_t* L_66 = V_11;
		int32_t L_67 = V_12;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_13;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_13;
		int32_t L_73 = V_12;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0138:
	{
		int32_t* L_74 = V_10;
		int32_t L_75 = V_9;
		int32_t L_76 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4)))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00dc;
		}
	}
	{
		int32_t L_77 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_014a:
	{
		int32_t L_78 = V_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00ce;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_017d;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_017d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = ___2_newBucketCapacity;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = ((int32_t)il2cpp_codegen_subtract(L_102, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m53135AA19AFC687B5BA385F0BA72124316445FA2_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t* V_10 = NULL;
	int32_t* V_11 = NULL;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B V_14;
	memset((&V_14), 0, sizeof(V_14));
	{
		int32_t L_0 = ___2_newBucketCapacity;
		int32_t L_1;
		L_1 = math_ceilpow2_mA00505409975D36AB3D7658687AC3BD5A26F3769_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001d;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int32_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add(L_6, 1))) == ((uint32_t)L_7))))
		{
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		int32_t L_8 = ___1_newCapacity;
		int32_t L_9 = ___2_newBucketCapacity;
		int32_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m800C33D5424E202FD6BDBF8CBD60A8B494E98613(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(((int64_t)L_10), ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int32_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, L_14));
		uint8_t* L_15 = V_3;
		int32_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, L_16));
		uint8_t* L_17 = V_3;
		int32_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, L_18));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		int32_t L_24;
		L_24 = UnsafeUtility_SizeOf_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m13EA6511CCA01250CAC338855AA7112292ED6036_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_23, L_24))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		int32_t L_30;
		L_30 = UnsafeUtility_SizeOf_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_mCCA70DE9EA8F3019FD79181A059D31A972311F9C_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_29, L_30))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		int32_t L_36;
		L_36 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_35, L_36))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_37 = ___0_data;
		NullCheck(L_37);
		int32_t L_38 = L_37->___keyCapacity;
		V_7 = L_38;
		goto IL_00aa;
	}

IL_009a:
	{
		uint8_t* L_39 = V_5;
		int32_t L_40 = V_7;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_40), 4))))) = (int32_t)(-1);
		int32_t L_41 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00aa:
	{
		int32_t L_42 = V_7;
		int32_t L_43 = ___1_newCapacity;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_009a;
		}
	}
	{
		V_8 = 0;
		goto IL_00c4;
	}

IL_00b4:
	{
		uint8_t* L_44 = V_6;
		int32_t L_45 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_44, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_45), 4))))) = (int32_t)(-1);
		int32_t L_46 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_00c4:
	{
		int32_t L_47 = V_8;
		int32_t L_48 = ___2_newBucketCapacity;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_00b4;
		}
	}
	{
		V_9 = 0;
		goto IL_014a;
	}

IL_00ce:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_10 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_11 = (int32_t*)L_51;
		goto IL_0138;
	}

IL_00dc:
	{
		int32_t* L_52 = V_10;
		int32_t L_53 = V_9;
		int32_t L_54 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4)))));
		V_12 = L_54;
		int32_t* L_55 = V_10;
		int32_t L_56 = V_9;
		int32_t* L_57 = V_11;
		int32_t L_58 = V_12;
		int32_t L_59 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_12;
		Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_mCCED167A2D047452D014A45173D1FDB05928928C_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_14 = L_63;
		il2cpp_codegen_runtime_class_init_inline(Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_il2cpp_TypeInfo_var);
		int32_t L_64;
		L_64 = Hash128_GetHashCode_m45A3BE3EF733FE381AE45C96F6C53FAEBFE2795B((&V_14), il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_65 = ___2_newBucketCapacity;
		V_13 = ((int32_t)(L_64&((int32_t)il2cpp_codegen_subtract(L_65, 1))));
		int32_t* L_66 = V_11;
		int32_t L_67 = V_12;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_13;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_13;
		int32_t L_73 = V_12;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0138:
	{
		int32_t* L_74 = V_10;
		int32_t L_75 = V_9;
		int32_t L_76 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4)))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00dc;
		}
	}
	{
		int32_t L_77 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_014a:
	{
		int32_t L_78 = V_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00ce;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_017d;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_017d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = ___2_newBucketCapacity;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = ((int32_t)il2cpp_codegen_subtract(L_102, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_mE8B614FBAAB94A414BD55E98D4F5782B8CB506F1_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t* V_10 = NULL;
	int32_t* V_11 = NULL;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	{
		int32_t L_0 = ___2_newBucketCapacity;
		int32_t L_1;
		L_1 = math_ceilpow2_mA00505409975D36AB3D7658687AC3BD5A26F3769_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001d;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int32_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add(L_6, 1))) == ((uint32_t)L_7))))
		{
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		int32_t L_8 = ___1_newCapacity;
		int32_t L_9 = ___2_newBucketCapacity;
		int32_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m049D230B2FE70C986A0A24DB16A9CB5E0E9A162D(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(((int64_t)L_10), ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int32_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, L_14));
		uint8_t* L_15 = V_3;
		int32_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, L_16));
		uint8_t* L_17 = V_3;
		int32_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, L_18));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		int32_t L_24;
		L_24 = UnsafeUtility_SizeOf_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m348D66015CD9DE899E1D629A356A294625A89A79_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_23, L_24))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		int32_t L_30;
		L_30 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_29, L_30))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		int32_t L_36;
		L_36 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_35, L_36))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_37 = ___0_data;
		NullCheck(L_37);
		int32_t L_38 = L_37->___keyCapacity;
		V_7 = L_38;
		goto IL_00aa;
	}

IL_009a:
	{
		uint8_t* L_39 = V_5;
		int32_t L_40 = V_7;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_40), 4))))) = (int32_t)(-1);
		int32_t L_41 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00aa:
	{
		int32_t L_42 = V_7;
		int32_t L_43 = ___1_newCapacity;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_009a;
		}
	}
	{
		V_8 = 0;
		goto IL_00c4;
	}

IL_00b4:
	{
		uint8_t* L_44 = V_6;
		int32_t L_45 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_44, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_45), 4))))) = (int32_t)(-1);
		int32_t L_46 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_00c4:
	{
		int32_t L_47 = V_8;
		int32_t L_48 = ___2_newBucketCapacity;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_00b4;
		}
	}
	{
		V_9 = 0;
		goto IL_014a;
	}

IL_00ce:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_10 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_11 = (int32_t*)L_51;
		goto IL_0138;
	}

IL_00dc:
	{
		int32_t* L_52 = V_10;
		int32_t L_53 = V_9;
		int32_t L_54 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4)))));
		V_12 = L_54;
		int32_t* L_55 = V_10;
		int32_t L_56 = V_9;
		int32_t* L_57 = V_11;
		int32_t L_58 = V_12;
		int32_t L_59 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_12;
		int32_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_14 = L_63;
		int32_t L_64;
		L_64 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_14), il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_65 = ___2_newBucketCapacity;
		V_13 = ((int32_t)(L_64&((int32_t)il2cpp_codegen_subtract(L_65, 1))));
		int32_t* L_66 = V_11;
		int32_t L_67 = V_12;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_13;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_13;
		int32_t L_73 = V_12;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0138:
	{
		int32_t* L_74 = V_10;
		int32_t L_75 = V_9;
		int32_t L_76 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4)))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00dc;
		}
	}
	{
		int32_t L_77 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_014a:
	{
		int32_t L_78 = V_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00ce;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_017d;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_017d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = ___2_newBucketCapacity;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = ((int32_t)il2cpp_codegen_subtract(L_102, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7_m62B3C6999B99B0C4EB84BF4EC993ABB57BD17039_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t* V_10 = NULL;
	int32_t* V_11 = NULL;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	{
		int32_t L_0 = ___2_newBucketCapacity;
		int32_t L_1;
		L_1 = math_ceilpow2_mA00505409975D36AB3D7658687AC3BD5A26F3769_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001d;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int32_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add(L_6, 1))) == ((uint32_t)L_7))))
		{
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		int32_t L_8 = ___1_newCapacity;
		int32_t L_9 = ___2_newBucketCapacity;
		int32_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7_mFAFE53626A3A356CCB1BDB3D261E1DC6E00D706D(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(((int64_t)L_10), ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int32_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, L_14));
		uint8_t* L_15 = V_3;
		int32_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, L_16));
		uint8_t* L_17 = V_3;
		int32_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, L_18));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		int32_t L_24;
		L_24 = UnsafeUtility_SizeOf_TisBakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7_m16FBAAF488B6E3E8831365EAB7705A217F2165C9_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_23, L_24))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		int32_t L_30;
		L_30 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_29, L_30))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		int32_t L_36;
		L_36 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_35, L_36))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_37 = ___0_data;
		NullCheck(L_37);
		int32_t L_38 = L_37->___keyCapacity;
		V_7 = L_38;
		goto IL_00aa;
	}

IL_009a:
	{
		uint8_t* L_39 = V_5;
		int32_t L_40 = V_7;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_40), 4))))) = (int32_t)(-1);
		int32_t L_41 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00aa:
	{
		int32_t L_42 = V_7;
		int32_t L_43 = ___1_newCapacity;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_009a;
		}
	}
	{
		V_8 = 0;
		goto IL_00c4;
	}

IL_00b4:
	{
		uint8_t* L_44 = V_6;
		int32_t L_45 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_44, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_45), 4))))) = (int32_t)(-1);
		int32_t L_46 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_00c4:
	{
		int32_t L_47 = V_8;
		int32_t L_48 = ___2_newBucketCapacity;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_00b4;
		}
	}
	{
		V_9 = 0;
		goto IL_014a;
	}

IL_00ce:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_10 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_11 = (int32_t*)L_51;
		goto IL_0138;
	}

IL_00dc:
	{
		int32_t* L_52 = V_10;
		int32_t L_53 = V_9;
		int32_t L_54 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4)))));
		V_12 = L_54;
		int32_t* L_55 = V_10;
		int32_t L_56 = V_9;
		int32_t* L_57 = V_11;
		int32_t L_58 = V_12;
		int32_t L_59 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_12;
		int32_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_14 = L_63;
		int32_t L_64;
		L_64 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_14), il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_65 = ___2_newBucketCapacity;
		V_13 = ((int32_t)(L_64&((int32_t)il2cpp_codegen_subtract(L_65, 1))));
		int32_t* L_66 = V_11;
		int32_t L_67 = V_12;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_13;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_13;
		int32_t L_73 = V_12;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0138:
	{
		int32_t* L_74 = V_10;
		int32_t L_75 = V_9;
		int32_t L_76 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4)))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00dc;
		}
	}
	{
		int32_t L_77 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_014a:
	{
		int32_t L_78 = V_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00ce;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_017d;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_017d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = ___2_newBucketCapacity;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = ((int32_t)il2cpp_codegen_subtract(L_102, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFB6AB9C9D92BE08F40BC68B68169718301665214_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t* V_10 = NULL;
	int32_t* V_11 = NULL;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	{
		int32_t L_0 = ___2_newBucketCapacity;
		int32_t L_1;
		L_1 = math_ceilpow2_mA00505409975D36AB3D7658687AC3BD5A26F3769_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001d;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int32_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add(L_6, 1))) == ((uint32_t)L_7))))
		{
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		int32_t L_8 = ___1_newCapacity;
		int32_t L_9 = ___2_newBucketCapacity;
		int32_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m911EED6D3DCE09D658BE028599F08F4CC8F3E448(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(((int64_t)L_10), ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int32_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, L_14));
		uint8_t* L_15 = V_3;
		int32_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, L_16));
		uint8_t* L_17 = V_3;
		int32_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, L_18));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		int32_t L_24;
		L_24 = UnsafeUtility_SizeOf_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5B2EBCF5A7515312D5BBDA1CC5ACDA8C99F14E18_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_23, L_24))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		int32_t L_30;
		L_30 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_29, L_30))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		int32_t L_36;
		L_36 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_35, L_36))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_37 = ___0_data;
		NullCheck(L_37);
		int32_t L_38 = L_37->___keyCapacity;
		V_7 = L_38;
		goto IL_00aa;
	}

IL_009a:
	{
		uint8_t* L_39 = V_5;
		int32_t L_40 = V_7;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_40), 4))))) = (int32_t)(-1);
		int32_t L_41 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00aa:
	{
		int32_t L_42 = V_7;
		int32_t L_43 = ___1_newCapacity;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_009a;
		}
	}
	{
		V_8 = 0;
		goto IL_00c4;
	}

IL_00b4:
	{
		uint8_t* L_44 = V_6;
		int32_t L_45 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_44, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_45), 4))))) = (int32_t)(-1);
		int32_t L_46 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_00c4:
	{
		int32_t L_47 = V_8;
		int32_t L_48 = ___2_newBucketCapacity;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_00b4;
		}
	}
	{
		V_9 = 0;
		goto IL_014a;
	}

IL_00ce:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_10 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_11 = (int32_t*)L_51;
		goto IL_0138;
	}

IL_00dc:
	{
		int32_t* L_52 = V_10;
		int32_t L_53 = V_9;
		int32_t L_54 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4)))));
		V_12 = L_54;
		int32_t* L_55 = V_10;
		int32_t L_56 = V_9;
		int32_t* L_57 = V_11;
		int32_t L_58 = V_12;
		int32_t L_59 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_12;
		int32_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_14 = L_63;
		int32_t L_64;
		L_64 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_14), il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_65 = ___2_newBucketCapacity;
		V_13 = ((int32_t)(L_64&((int32_t)il2cpp_codegen_subtract(L_65, 1))));
		int32_t* L_66 = V_11;
		int32_t L_67 = V_12;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_13;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_13;
		int32_t L_73 = V_12;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0138:
	{
		int32_t* L_74 = V_10;
		int32_t L_75 = V_9;
		int32_t L_76 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4)))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00dc;
		}
	}
	{
		int32_t L_77 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_014a:
	{
		int32_t L_78 = V_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00ce;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_017d;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_017d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = ___2_newBucketCapacity;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = ((int32_t)il2cpp_codegen_subtract(L_102, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_m4CCF15A7C0DD2962D83FDE23160E6F983DEAA35B_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t* V_10 = NULL;
	int32_t* V_11 = NULL;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	{
		int32_t L_0 = ___2_newBucketCapacity;
		int32_t L_1;
		L_1 = math_ceilpow2_mA00505409975D36AB3D7658687AC3BD5A26F3769_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001d;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int32_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add(L_6, 1))) == ((uint32_t)L_7))))
		{
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		int32_t L_8 = ___1_newCapacity;
		int32_t L_9 = ___2_newBucketCapacity;
		int32_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_m3E147B062DB77D246D54FFDF5E620BEB3D351DDC(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(((int64_t)L_10), ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int32_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, L_14));
		uint8_t* L_15 = V_3;
		int32_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, L_16));
		uint8_t* L_17 = V_3;
		int32_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, L_18));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		int32_t L_24;
		L_24 = UnsafeUtility_SizeOf_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_mA948765B976CB1DE8317E063360E4499B0CB181A_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_23, L_24))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		int32_t L_30;
		L_30 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_29, L_30))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		int32_t L_36;
		L_36 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_35, L_36))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_37 = ___0_data;
		NullCheck(L_37);
		int32_t L_38 = L_37->___keyCapacity;
		V_7 = L_38;
		goto IL_00aa;
	}

IL_009a:
	{
		uint8_t* L_39 = V_5;
		int32_t L_40 = V_7;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_40), 4))))) = (int32_t)(-1);
		int32_t L_41 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00aa:
	{
		int32_t L_42 = V_7;
		int32_t L_43 = ___1_newCapacity;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_009a;
		}
	}
	{
		V_8 = 0;
		goto IL_00c4;
	}

IL_00b4:
	{
		uint8_t* L_44 = V_6;
		int32_t L_45 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_44, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_45), 4))))) = (int32_t)(-1);
		int32_t L_46 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_00c4:
	{
		int32_t L_47 = V_8;
		int32_t L_48 = ___2_newBucketCapacity;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_00b4;
		}
	}
	{
		V_9 = 0;
		goto IL_014a;
	}

IL_00ce:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_10 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_11 = (int32_t*)L_51;
		goto IL_0138;
	}

IL_00dc:
	{
		int32_t* L_52 = V_10;
		int32_t L_53 = V_9;
		int32_t L_54 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4)))));
		V_12 = L_54;
		int32_t* L_55 = V_10;
		int32_t L_56 = V_9;
		int32_t* L_57 = V_11;
		int32_t L_58 = V_12;
		int32_t L_59 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_12;
		int32_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_14 = L_63;
		int32_t L_64;
		L_64 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_14), il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_65 = ___2_newBucketCapacity;
		V_13 = ((int32_t)(L_64&((int32_t)il2cpp_codegen_subtract(L_65, 1))));
		int32_t* L_66 = V_11;
		int32_t L_67 = V_12;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_13;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_13;
		int32_t L_73 = V_12;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0138:
	{
		int32_t* L_74 = V_10;
		int32_t L_75 = V_9;
		int32_t L_76 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4)))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00dc;
		}
	}
	{
		int32_t L_77 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_014a:
	{
		int32_t L_78 = V_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00ce;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_017d;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_017d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = ___2_newBucketCapacity;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = ((int32_t)il2cpp_codegen_subtract(L_102, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mBD8020B81C884EA8598F8FD64264E016C8A46CD4_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t* V_10 = NULL;
	int32_t* V_11 = NULL;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	{
		int32_t L_0 = ___2_newBucketCapacity;
		int32_t L_1;
		L_1 = math_ceilpow2_mA00505409975D36AB3D7658687AC3BD5A26F3769_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001d;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int32_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add(L_6, 1))) == ((uint32_t)L_7))))
		{
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		int32_t L_8 = ___1_newCapacity;
		int32_t L_9 = ___2_newBucketCapacity;
		int32_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mBE98669184036D649666C557354937FDF64DC147(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(((int64_t)L_10), ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int32_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, L_14));
		uint8_t* L_15 = V_3;
		int32_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, L_16));
		uint8_t* L_17 = V_3;
		int32_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, L_18));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		int32_t L_24;
		L_24 = UnsafeUtility_SizeOf_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m177EBEBF64B94FE192C8268AE6BCB9A563047C3C_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_23, L_24))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		int32_t L_30;
		L_30 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_29, L_30))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		int32_t L_36;
		L_36 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_35, L_36))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_37 = ___0_data;
		NullCheck(L_37);
		int32_t L_38 = L_37->___keyCapacity;
		V_7 = L_38;
		goto IL_00aa;
	}

IL_009a:
	{
		uint8_t* L_39 = V_5;
		int32_t L_40 = V_7;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_40), 4))))) = (int32_t)(-1);
		int32_t L_41 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00aa:
	{
		int32_t L_42 = V_7;
		int32_t L_43 = ___1_newCapacity;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_009a;
		}
	}
	{
		V_8 = 0;
		goto IL_00c4;
	}

IL_00b4:
	{
		uint8_t* L_44 = V_6;
		int32_t L_45 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_44, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_45), 4))))) = (int32_t)(-1);
		int32_t L_46 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_00c4:
	{
		int32_t L_47 = V_8;
		int32_t L_48 = ___2_newBucketCapacity;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_00b4;
		}
	}
	{
		V_9 = 0;
		goto IL_014a;
	}

IL_00ce:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_10 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_11 = (int32_t*)L_51;
		goto IL_0138;
	}

IL_00dc:
	{
		int32_t* L_52 = V_10;
		int32_t L_53 = V_9;
		int32_t L_54 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4)))));
		V_12 = L_54;
		int32_t* L_55 = V_10;
		int32_t L_56 = V_9;
		int32_t* L_57 = V_11;
		int32_t L_58 = V_12;
		int32_t L_59 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_12;
		int32_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_14 = L_63;
		int32_t L_64;
		L_64 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_14), il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_65 = ___2_newBucketCapacity;
		V_13 = ((int32_t)(L_64&((int32_t)il2cpp_codegen_subtract(L_65, 1))));
		int32_t* L_66 = V_11;
		int32_t L_67 = V_12;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_13;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_13;
		int32_t L_73 = V_12;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0138:
	{
		int32_t* L_74 = V_10;
		int32_t L_75 = V_9;
		int32_t L_76 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4)))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00dc;
		}
	}
	{
		int32_t L_77 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_014a:
	{
		int32_t L_78 = V_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00ce;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_017d;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_017d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = ___2_newBucketCapacity;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = ((int32_t)il2cpp_codegen_subtract(L_102, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m526C9313C8BCF707526B309126FFB7502C548A5D_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t* V_10 = NULL;
	int32_t* V_11 = NULL;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	{
		int32_t L_0 = ___2_newBucketCapacity;
		int32_t L_1;
		L_1 = math_ceilpow2_mA00505409975D36AB3D7658687AC3BD5A26F3769_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001d;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int32_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add(L_6, 1))) == ((uint32_t)L_7))))
		{
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		int32_t L_8 = ___1_newCapacity;
		int32_t L_9 = ___2_newBucketCapacity;
		int32_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m81ABEA4AF3E59B6D1F940D69382166832E43750C(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(((int64_t)L_10), ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int32_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, L_14));
		uint8_t* L_15 = V_3;
		int32_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, L_16));
		uint8_t* L_17 = V_3;
		int32_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, L_18));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		int32_t L_24;
		L_24 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_23, L_24))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		int32_t L_30;
		L_30 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_29, L_30))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		int32_t L_36;
		L_36 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_35, L_36))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_37 = ___0_data;
		NullCheck(L_37);
		int32_t L_38 = L_37->___keyCapacity;
		V_7 = L_38;
		goto IL_00aa;
	}

IL_009a:
	{
		uint8_t* L_39 = V_5;
		int32_t L_40 = V_7;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_40), 4))))) = (int32_t)(-1);
		int32_t L_41 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00aa:
	{
		int32_t L_42 = V_7;
		int32_t L_43 = ___1_newCapacity;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_009a;
		}
	}
	{
		V_8 = 0;
		goto IL_00c4;
	}

IL_00b4:
	{
		uint8_t* L_44 = V_6;
		int32_t L_45 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_44, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_45), 4))))) = (int32_t)(-1);
		int32_t L_46 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_00c4:
	{
		int32_t L_47 = V_8;
		int32_t L_48 = ___2_newBucketCapacity;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_00b4;
		}
	}
	{
		V_9 = 0;
		goto IL_014a;
	}

IL_00ce:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_10 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_11 = (int32_t*)L_51;
		goto IL_0138;
	}

IL_00dc:
	{
		int32_t* L_52 = V_10;
		int32_t L_53 = V_9;
		int32_t L_54 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4)))));
		V_12 = L_54;
		int32_t* L_55 = V_10;
		int32_t L_56 = V_9;
		int32_t* L_57 = V_11;
		int32_t L_58 = V_12;
		int32_t L_59 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_12;
		int32_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_14 = L_63;
		int32_t L_64;
		L_64 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_14), il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_65 = ___2_newBucketCapacity;
		V_13 = ((int32_t)(L_64&((int32_t)il2cpp_codegen_subtract(L_65, 1))));
		int32_t* L_66 = V_11;
		int32_t L_67 = V_12;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_13;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_13;
		int32_t L_73 = V_12;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0138:
	{
		int32_t* L_74 = V_10;
		int32_t L_75 = V_9;
		int32_t L_76 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4)))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00dc;
		}
	}
	{
		int32_t L_77 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_014a:
	{
		int32_t L_78 = V_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00ce;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_017d;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_017d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = ___2_newBucketCapacity;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = ((int32_t)il2cpp_codegen_subtract(L_102, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisIntPtr_t_mD7971BB1026BE353702E0F20B44DF5089308475A_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t* V_10 = NULL;
	int32_t* V_11 = NULL;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	{
		int32_t L_0 = ___2_newBucketCapacity;
		int32_t L_1;
		L_1 = math_ceilpow2_mA00505409975D36AB3D7658687AC3BD5A26F3769_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001d;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int32_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add(L_6, 1))) == ((uint32_t)L_7))))
		{
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		int32_t L_8 = ___1_newCapacity;
		int32_t L_9 = ___2_newBucketCapacity;
		int32_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisIntPtr_t_m9B5D8042853B8742FFE5019C81F1F8B04DF3399D(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(((int64_t)L_10), ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int32_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, L_14));
		uint8_t* L_15 = V_3;
		int32_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, L_16));
		uint8_t* L_17 = V_3;
		int32_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, L_18));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		int32_t L_24;
		L_24 = UnsafeUtility_SizeOf_TisIntPtr_t_mB2B3CFF1CB804C99734D4E2F5D8A8C9DB0D209A8_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_23, L_24))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		int32_t L_30;
		L_30 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_29, L_30))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		int32_t L_36;
		L_36 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_35, L_36))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_37 = ___0_data;
		NullCheck(L_37);
		int32_t L_38 = L_37->___keyCapacity;
		V_7 = L_38;
		goto IL_00aa;
	}

IL_009a:
	{
		uint8_t* L_39 = V_5;
		int32_t L_40 = V_7;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_40), 4))))) = (int32_t)(-1);
		int32_t L_41 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00aa:
	{
		int32_t L_42 = V_7;
		int32_t L_43 = ___1_newCapacity;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_009a;
		}
	}
	{
		V_8 = 0;
		goto IL_00c4;
	}

IL_00b4:
	{
		uint8_t* L_44 = V_6;
		int32_t L_45 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_44, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_45), 4))))) = (int32_t)(-1);
		int32_t L_46 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_00c4:
	{
		int32_t L_47 = V_8;
		int32_t L_48 = ___2_newBucketCapacity;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_00b4;
		}
	}
	{
		V_9 = 0;
		goto IL_014a;
	}

IL_00ce:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_10 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_11 = (int32_t*)L_51;
		goto IL_0138;
	}

IL_00dc:
	{
		int32_t* L_52 = V_10;
		int32_t L_53 = V_9;
		int32_t L_54 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4)))));
		V_12 = L_54;
		int32_t* L_55 = V_10;
		int32_t L_56 = V_9;
		int32_t* L_57 = V_11;
		int32_t L_58 = V_12;
		int32_t L_59 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_12;
		int32_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_14 = L_63;
		int32_t L_64;
		L_64 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_14), il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_65 = ___2_newBucketCapacity;
		V_13 = ((int32_t)(L_64&((int32_t)il2cpp_codegen_subtract(L_65, 1))));
		int32_t* L_66 = V_11;
		int32_t L_67 = V_12;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_13;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_13;
		int32_t L_73 = V_12;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0138:
	{
		int32_t* L_74 = V_10;
		int32_t L_75 = V_9;
		int32_t L_76 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4)))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00dc;
		}
	}
	{
		int32_t L_77 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_014a:
	{
		int32_t L_78 = V_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00ce;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_017d;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_017d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = ___2_newBucketCapacity;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = ((int32_t)il2cpp_codegen_subtract(L_102, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisPrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751_m000CD2DE5C303B8D2E480609E6C48D1583088C18_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t* V_10 = NULL;
	int32_t* V_11 = NULL;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	{
		int32_t L_0 = ___2_newBucketCapacity;
		int32_t L_1;
		L_1 = math_ceilpow2_mA00505409975D36AB3D7658687AC3BD5A26F3769_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001d;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int32_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add(L_6, 1))) == ((uint32_t)L_7))))
		{
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		int32_t L_8 = ___1_newCapacity;
		int32_t L_9 = ___2_newBucketCapacity;
		int32_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisPrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751_m8D7443BED9783DA4DFB7B70481E65DD0951B4C81(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(((int64_t)L_10), ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int32_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, L_14));
		uint8_t* L_15 = V_3;
		int32_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, L_16));
		uint8_t* L_17 = V_3;
		int32_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, L_18));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		int32_t L_24;
		L_24 = UnsafeUtility_SizeOf_TisPrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751_m2A318CAE585381E20EF83FF7EAEAD2985A6FB24B_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_23, L_24))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		int32_t L_30;
		L_30 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_29, L_30))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		int32_t L_36;
		L_36 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_35, L_36))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_37 = ___0_data;
		NullCheck(L_37);
		int32_t L_38 = L_37->___keyCapacity;
		V_7 = L_38;
		goto IL_00aa;
	}

IL_009a:
	{
		uint8_t* L_39 = V_5;
		int32_t L_40 = V_7;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_40), 4))))) = (int32_t)(-1);
		int32_t L_41 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00aa:
	{
		int32_t L_42 = V_7;
		int32_t L_43 = ___1_newCapacity;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_009a;
		}
	}
	{
		V_8 = 0;
		goto IL_00c4;
	}

IL_00b4:
	{
		uint8_t* L_44 = V_6;
		int32_t L_45 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_44, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_45), 4))))) = (int32_t)(-1);
		int32_t L_46 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_00c4:
	{
		int32_t L_47 = V_8;
		int32_t L_48 = ___2_newBucketCapacity;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_00b4;
		}
	}
	{
		V_9 = 0;
		goto IL_014a;
	}

IL_00ce:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_10 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_11 = (int32_t*)L_51;
		goto IL_0138;
	}

IL_00dc:
	{
		int32_t* L_52 = V_10;
		int32_t L_53 = V_9;
		int32_t L_54 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4)))));
		V_12 = L_54;
		int32_t* L_55 = V_10;
		int32_t L_56 = V_9;
		int32_t* L_57 = V_11;
		int32_t L_58 = V_12;
		int32_t L_59 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_12;
		int32_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_14 = L_63;
		int32_t L_64;
		L_64 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_14), il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_65 = ___2_newBucketCapacity;
		V_13 = ((int32_t)(L_64&((int32_t)il2cpp_codegen_subtract(L_65, 1))));
		int32_t* L_66 = V_11;
		int32_t L_67 = V_12;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_13;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_13;
		int32_t L_73 = V_12;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0138:
	{
		int32_t* L_74 = V_10;
		int32_t L_75 = V_9;
		int32_t L_76 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4)))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00dc;
		}
	}
	{
		int32_t L_77 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_014a:
	{
		int32_t L_78 = V_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00ce;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_017d;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_017d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = ___2_newBucketCapacity;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = ((int32_t)il2cpp_codegen_subtract(L_102, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA_mD692F927C7910B6F29A72BD3A46B32EBB80B7A39_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t* V_10 = NULL;
	int32_t* V_11 = NULL;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	{
		int32_t L_0 = ___2_newBucketCapacity;
		int32_t L_1;
		L_1 = math_ceilpow2_mA00505409975D36AB3D7658687AC3BD5A26F3769_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001d;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int32_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add(L_6, 1))) == ((uint32_t)L_7))))
		{
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		int32_t L_8 = ___1_newCapacity;
		int32_t L_9 = ___2_newBucketCapacity;
		int32_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA_mC63327E91B0A7B508F864689E34A2A662D7DB203(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(((int64_t)L_10), ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int32_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, L_14));
		uint8_t* L_15 = V_3;
		int32_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, L_16));
		uint8_t* L_17 = V_3;
		int32_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, L_18));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		int32_t L_24;
		L_24 = UnsafeUtility_SizeOf_TisActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA_m93035A7083808061FAA0D61522FCA975B96795F6_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_23, L_24))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		int32_t L_30;
		L_30 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_29, L_30))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		int32_t L_36;
		L_36 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_35, L_36))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_37 = ___0_data;
		NullCheck(L_37);
		int32_t L_38 = L_37->___keyCapacity;
		V_7 = L_38;
		goto IL_00aa;
	}

IL_009a:
	{
		uint8_t* L_39 = V_5;
		int32_t L_40 = V_7;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_40), 4))))) = (int32_t)(-1);
		int32_t L_41 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00aa:
	{
		int32_t L_42 = V_7;
		int32_t L_43 = ___1_newCapacity;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_009a;
		}
	}
	{
		V_8 = 0;
		goto IL_00c4;
	}

IL_00b4:
	{
		uint8_t* L_44 = V_6;
		int32_t L_45 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_44, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_45), 4))))) = (int32_t)(-1);
		int32_t L_46 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_00c4:
	{
		int32_t L_47 = V_8;
		int32_t L_48 = ___2_newBucketCapacity;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_00b4;
		}
	}
	{
		V_9 = 0;
		goto IL_014a;
	}

IL_00ce:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_10 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_11 = (int32_t*)L_51;
		goto IL_0138;
	}

IL_00dc:
	{
		int32_t* L_52 = V_10;
		int32_t L_53 = V_9;
		int32_t L_54 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4)))));
		V_12 = L_54;
		int32_t* L_55 = V_10;
		int32_t L_56 = V_9;
		int32_t* L_57 = V_11;
		int32_t L_58 = V_12;
		int32_t L_59 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_12;
		int32_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_14 = L_63;
		int32_t L_64;
		L_64 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_14), il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_65 = ___2_newBucketCapacity;
		V_13 = ((int32_t)(L_64&((int32_t)il2cpp_codegen_subtract(L_65, 1))));
		int32_t* L_66 = V_11;
		int32_t L_67 = V_12;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_13;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_13;
		int32_t L_73 = V_12;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0138:
	{
		int32_t* L_74 = V_10;
		int32_t L_75 = V_9;
		int32_t L_76 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4)))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00dc;
		}
	}
	{
		int32_t L_77 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_014a:
	{
		int32_t L_78 = V_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00ce;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_017d;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_017d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = ___2_newBucketCapacity;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = ((int32_t)il2cpp_codegen_subtract(L_102, 1));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_ceilpow2_mA00505409975D36AB3D7658687AC3BD5A26F3769_inline (int32_t ___0_x, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_x;
		___0_x = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		int32_t L_1 = ___0_x;
		int32_t L_2 = ___0_x;
		___0_x = ((int32_t)(L_1|((int32_t)(L_2>>1))));
		int32_t L_3 = ___0_x;
		int32_t L_4 = ___0_x;
		___0_x = ((int32_t)(L_3|((int32_t)(L_4>>2))));
		int32_t L_5 = ___0_x;
		int32_t L_6 = ___0_x;
		___0_x = ((int32_t)(L_5|((int32_t)(L_6>>4))));
		int32_t L_7 = ___0_x;
		int32_t L_8 = ___0_x;
		___0_x = ((int32_t)(L_7|((int32_t)(L_8>>8))));
		int32_t L_9 = ___0_x;
		int32_t L_10 = ___0_x;
		___0_x = ((int32_t)(L_9|((int32_t)(L_10>>((int32_t)16)))));
		int32_t L_11 = ___0_x;
		return ((int32_t)il2cpp_codegen_add(L_11, 1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Entity_GetHashCode_m223ECCF7A7C3F199EF0E53C4F84857FE090A0823_inline (Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___Index;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(int32_t);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB_m123857F85C9BFD317BC4CB88F03DB057AC7A8CC0_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(ComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5B2EBCF5A7515312D5BBDA1CC5ACDA8C99F14E18_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(bool);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m177EBEBF64B94FE192C8268AE6BCB9A563047C3C_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_mAEF65C486D008558F825C99D85F94551E317B4DF_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisTransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D_m245C9FB0E7B630F5AF8620DE958B68FBBDC95869_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(TransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_mFBB919BDCE8F3E9F6BB1AC9F036200F466C8E9C4_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisLoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02_m3714C1DA541A15F113193B5BF9F03A517ACBDB4B_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(LoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m13EA6511CCA01250CAC338855AA7112292ED6036_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_mCCA70DE9EA8F3019FD79181A059D31A972311F9C_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m348D66015CD9DE899E1D629A356A294625A89A79_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7_m16FBAAF488B6E3E8831365EAB7705A217F2165C9_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(BakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_mA948765B976CB1DE8317E063360E4499B0CB181A_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(ComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisIntPtr_t_mB2B3CFF1CB804C99734D4E2F5D8A8C9DB0D209A8_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(intptr_t);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751_m2A318CAE585381E20EF83FF7EAEAD2985A6FB24B_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(PrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA_m93035A7083808061FAA0D61522FCA975B96795F6_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(ActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisGetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE_mC146FD0788F8D27183DC5FA217D150CE5D960E16_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(GetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisGetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E_m2DC52F60E47C91615A7762CCF1A73975D5373C69_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(GetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisGetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B_m516C020555EAA24A34E4311591A9B0BF19B2453E_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(GetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisGetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452_mA4E7079D860F20A8439F8086A5F904E85A4A144B_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(GetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34_m98F077078302520C47A901B213035CAF245718F7_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(ObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C_m655A8584504C2BD5F6ED039239E9033A755EA38F_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(ObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA_m62C21F6694C03D4856CBC824244CCA52047910C5_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(ObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisEntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055_mEA5F8818A2E31AE8B3A843472D2A46C0E40EA242_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(EntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisComponentData_t2CB40CF3C2FA75B9CA5D8292DCFA8BF12A42DB07_m5E1A500CD4A47B175B43B8F5D981FCD1B68A624F_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(ComponentData_t2CB40CF3C2FA75B9CA5D8292DCFA8BF12A42DB07);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m9712F6405A5D5C4128EAFA7860A222DE388ED6C5_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(int64_t);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mEC9469DBD91362D6135B8F5A81E90486BF328075_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint16_t);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_mBA8405CA0C1426234043E941C50F8F3C2263305E_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5_m6DCB7B2184E8A41AF080D2EE7EBBFC2A693701DD_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6C198B51ACD7B8EC62D5E0E75433C12BE9D65A58_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint64_t);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_mCACAE521597CACDD37B73CF9D791E47F2B11D2AB_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint8_t);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_mFAA6F9C6A87B112BBD85F22709B4E18563AA5593_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_m07CD2CC6AE0C968369AEFFC05481EE370280903F_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_m9A0B080F904D8ED7A7F58A6AD867315894D8BB01_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_m04C9CC92295DB84F3F3826B06BA0221DA973FB56_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_m7966BC0577D20C1E83FA97C815806D75A2D4EB70_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m1F87695ED302C16C36379DF4FF11644369D02D75_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50 UnsafeUtility_ReadArrayElement_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_m42C27C99C832082CC850074116836AD6C7951F4F_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(AspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50);
		AspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50 L_3 = (*(AspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 UnsafeUtility_ReadArrayElement_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_m11F042F9F93240F4EC774AB70400B604FB52EACF_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61);
		BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 L_3 = (*(BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D UnsafeUtility_ReadArrayElement_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_mC0855E940EDA880F3AC7284411BE4E8ED52CA780_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(ComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D);
		ComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D L_3 = (*(ComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA UnsafeUtility_ReadArrayElement_TisComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_mE975124B2DB09771E16EABF7A001A4619D5F6768_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA);
		ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA L_3 = (*(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB UnsafeUtility_ReadArrayElement_TisComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB_mF1DA179FEC24B2BD7741BBE13FC22FA26604FBB9_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(ComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB);
		ComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB L_3 = (*(ComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD UnsafeUtility_ReadArrayElement_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m64F6C7E9916D768E9365F442F252409EECA0CE9C_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD);
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_3 = (*(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 UnsafeUtility_ReadArrayElement_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_mBA7BC7F5CDE7522066ADEB4389DB7FDE05392F39_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877);
		EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 L_3 = (*(EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 UnsafeUtility_ReadArrayElement_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_mB198FB4671ADE00B3ADE86BC40D6ABD19AE8C07B_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4);
		EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 L_3 = (*(EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B UnsafeUtility_ReadArrayElement_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_mCCED167A2D047452D014A45173D1FDB05928928C_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B);
		Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B L_3 = (*(Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(int32_t);
		int32_t L_3 = (*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t UnsafeUtility_ReadArrayElement_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m51BA37651B60ACB0F4F6867E07AB0C3E0046FC9C_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(int64_t);
		int64_t L_3 = (*(int64_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C UnsafeUtility_ReadArrayElement_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m055B0246613F21DF105592E21674EE77285875DC_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C);
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_3 = (*(TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(uint64_t);
		uint64_t L_3 = (*(uint64_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A UnsafeUtility_ReadArrayElement_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m7ACC04D18A4EC85ECFB185A88B79EB26AD1DACB1_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A);
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A L_3 = (*(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D UnsafeUtility_ReadArrayElement_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_mC6063FB4A2E79E711911A585DB8C2A0F994A4923_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D);
		EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D L_3 = (*(EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD UnsafeUtility_ReadArrayElement_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_m79A11EC661A750655C4DB523B26452DE76DBDAA8_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD);
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_3 = (*(EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnsafeUtility_ReadArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF765CB2E5FD631DFB79C25DE656F3C1BB359B995_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(bool);
		bool L_3 = (*(bool*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D UnsafeUtility_ReadArrayElement_TisTransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D_mB3EF85E0F07B6626BEE4350E49F8DD84F7E542CE_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(TransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D);
		TransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D L_3 = (*(TransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02 UnsafeUtility_ReadArrayElement_TisLoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02_m836F60A4A610F7AD228932364B2855D5CBBE1D65_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(LoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02);
		LoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02 L_3 = (*(LoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 UnsafeUtility_ReadArrayElement_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m09665718EFC7893CDD26DCB1B3EC90D4E46D7A98_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998);
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 L_3 = (*(BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 UnsafeUtility_ReadArrayElement_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m1F1E944526C83C5C50C3BEFA897DB7849C6CF967_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718);
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 L_3 = (*(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7 UnsafeUtility_ReadArrayElement_TisBakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7_m341C66DAFE22D7FF675AB26610BCA44E0E7636AD_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(BakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7);
		BakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7 L_3 = (*(BakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t UnsafeUtility_ReadArrayElement_TisIntPtr_t_m1AB5DE7A4962B63822FF70AF37E0BADC77C4AE23_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(intptr_t);
		intptr_t L_3 = (*(intptr_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751 UnsafeUtility_ReadArrayElement_TisPrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751_m956BFBA7E125ECF42542E6A2ABAC0DD7059B8A10_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(PrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751);
		PrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751 L_3 = (*(PrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA UnsafeUtility_ReadArrayElement_TisActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA_m50C716C28EF2FACA3FD6ECDE4C2290D6ECB07A61_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(ActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA);
		ActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA L_3 = (*(ActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE UnsafeUtility_ReadArrayElement_TisGetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE_m4E9D75DDD928F74FFDA7A6339190E37A04AA1BAA_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(GetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE);
		GetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE L_3 = (*(GetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E UnsafeUtility_ReadArrayElement_TisGetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E_m240057E500574E311F64D761C1B0E81D48539B71_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(GetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E);
		GetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E L_3 = (*(GetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B UnsafeUtility_ReadArrayElement_TisGetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B_mE31D1DD2E82C423B35C73B7F1E8D557C2DBC75C5_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(GetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B);
		GetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B L_3 = (*(GetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452 UnsafeUtility_ReadArrayElement_TisGetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452_m4E35AE63F5292F45C4B7D57F293CAB353B3768BC_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(GetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452);
		GetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452 L_3 = (*(GetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34 UnsafeUtility_ReadArrayElement_TisObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34_m68422EC542A6BB6DBE519B2416180FA28AFB543E_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(ObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34);
		ObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34 L_3 = (*(ObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C UnsafeUtility_ReadArrayElement_TisObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C_mAA82F9B921463BA85338F4F6907EB371C99E2C0D_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(ObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C);
		ObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C L_3 = (*(ObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA UnsafeUtility_ReadArrayElement_TisObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA_mE3F1AB969DB8BDB1A3E3E15E2414CF6A0B1699F1_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(ObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA);
		ObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA L_3 = (*(ObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055 UnsafeUtility_ReadArrayElement_TisEntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055_m269B2EB28C9E6370F7CF1D48917001A93ECA1836_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(EntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055);
		EntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055 L_3 = (*(EntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ComponentData_t2CB40CF3C2FA75B9CA5D8292DCFA8BF12A42DB07 UnsafeUtility_ReadArrayElement_TisComponentData_t2CB40CF3C2FA75B9CA5D8292DCFA8BF12A42DB07_m4CC70D46AE7357ECAF9520C12226902E43D8FBFE_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(ComponentData_t2CB40CF3C2FA75B9CA5D8292DCFA8BF12A42DB07);
		ComponentData_t2CB40CF3C2FA75B9CA5D8292DCFA8BF12A42DB07 L_3 = (*(ComponentData_t2CB40CF3C2FA75B9CA5D8292DCFA8BF12A42DB07*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t UnsafeUtility_ReadArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mDA4F2F1FC33E2F2F8CC3E761D626E638762C61E4_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(uint16_t);
		uint16_t L_3 = (*(uint16_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 UnsafeUtility_ReadArrayElement_TisArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5_m331C4C63F372510AD14D346567E6B3877853D8BD_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5);
		ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 L_3 = (*(ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t UnsafeUtility_ReadArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m06447B534673E0861DE4F55616DFAF9BD7DCBCC6_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = (*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F UnsafeUtility_ReadArrayElement_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_m5E3D83DD488346447A4245CE053A52BE724FC006_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F);
		DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F L_3 = (*(DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 UnsafeUtility_ReadArrayElement_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_m6D870E4CECFBA90EF42A30D63C7DE033CB114308_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78);
		ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 L_3 = (*(ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C UnsafeUtility_ReadArrayElement_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m816C993CFFAA9033A70BF90060F042E40FF9D30F_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C);
		ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C L_3 = (*(ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_m41D379FDF7D470E449CC51CE4A7F7489EF31975B_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_mA4948C751919FFE98A0E0CF15D66E11F834B3B5E_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61);
		return (int32_t)L_0;
	}
}
