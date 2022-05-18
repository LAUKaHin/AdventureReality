#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>


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
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.Type,System.Func`2<Vuforia.Tracker,System.Boolean>>
struct Dictionary_2_t9D1DAD5094C733FBC1F3B54B83F6B89E41719B84;
// System.Collections.Generic.Dictionary`2<System.Type,System.Func`2<System.Type,Vuforia.Tracker>>
struct Dictionary_2_t3EA70449DE598E62B2A72828458AF5874B72C1BA;
// System.Collections.Generic.Dictionary`2<System.Type,Vuforia.Tracker>
struct Dictionary_2_tC2C6E53EC49079BB5D59E3226C70DA77D60D082B;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Func`2<Vuforia.Tracker,System.Boolean>
struct Func_2_t63DF586CEF8E63E58DB61BCEFF46A67599E1FF00;
// System.Func`2<System.Type,Vuforia.Tracker>
struct Func_2_t1A83F16EE47CBC3B0129DA6B7E57E51C375C83F2;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t7EEC9B4006D6D425748908D52AA799197F29A165;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Func`2<Vuforia.Tracker,System.Boolean>>
struct KeyCollection_t29709F6BCC9CCD8D7B4324A0D2FE9F0F7C2310C3;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Func`2<System.Type,Vuforia.Tracker>>
struct KeyCollection_tF69DCA8BCCAF65A7C34A9D096362D92CB2C990B3;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,Vuforia.Tracker>
struct KeyCollection_t02BAA279F63F603DD4A4BB33A0C0B32A74C95ADA;
// System.Tuple`2<System.Object,System.Object>
struct Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Func`2<Vuforia.Tracker,System.Boolean>>
struct ValueCollection_tECA2F53C253026B77747FC04CF18A6C3F7DD422A;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Func`2<System.Type,Vuforia.Tracker>>
struct ValueCollection_t408FDCB77E15C2E9049270D9359CD6400EAAE409;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,Vuforia.Tracker>
struct ValueCollection_tC625CBFF5FA8B6FA78C2B8A016501994625D31A9;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Func`2<Vuforia.Tracker,System.Boolean>>[]
struct EntryU5BU5D_tC235912ABEA804D96A2CBDD5A4AD09E05F67AD1E;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Func`2<System.Type,Vuforia.Tracker>>[]
struct EntryU5BU5D_t2364828FC171EBB68DDD00BDAB49BF393421B42A;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,Vuforia.Tracker>[]
struct EntryU5BU5D_t92EA07E15FCAE763A0F716D8547B3DA0B0E4302C;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UIElements.StyleValueHandle[]
struct StyleValueHandleU5BU5D_t8FCC38AD3E7E9F31424A6842204C9407D70FF41A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.UIElements.Focusable
struct Focusable_t54CC145FEE85D2A5D92761C419288150CF5BEC14;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Vuforia.ITrackerManager
struct ITrackerManager_t6A4EA30AFC2E4FC1ECF45DDBE270FBB0779D8C9A;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.UIElements.UIR.RenderChainCommand
struct RenderChainCommand_t687866AA005A30DF2AF3D60E22ADC708C90828F1;
// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C;
// Vuforia.StateManager
struct StateManager_tC9DBB4F8BA2D3E637669155EF9DEE5428662DC8B;
// System.String
struct String_t;
// UnityEngine.UIElements.StyleSheet
struct StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// Vuforia.Tracker
struct Tracker_tC8779F03E5660202B4D88105DF0C594ED5DFD8AB;
// Vuforia.TrackerManager
struct TrackerManager_t70E5F52B1F51D7E63AF12867B4605C3A2ADBFC2E;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UIElements.VisualElement
struct VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VuforiaRuntimeUtilities_tA3A3FC951533F58532B1EB9E2A0A2E49E5AEF0CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral3C78E122E47409D12ECB8A8B84CBE63A9895F6D6;
IL2CPP_EXTERN_C String_t* _stringLiteral4458C6572171B3D246C64DB218DB7DAF5B9F7DEE;
IL2CPP_EXTERN_C String_t* _stringLiteralD39BE8663CED4950CA9C72F936B9D32355064E1E;
IL2CPP_EXTERN_C String_t* _stringLiteralEF79D51A9462D66A494A01A6FD31AC397F537ED9;
IL2CPP_EXTERN_C String_t* _stringLiteralF2B93AE8B46EA13BCF064C74A0897B76D0A27982;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m394A384B81205DCCBC45BC5361D715217241919E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mE7F40E0AB79CFE55C381472D0A08FE061FFBE83A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mA45D423A8430C83E31368FBEA7022AF194FC21CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mC4D8474C58B55D7332A7EBE45DFE549E56B451AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mE89DFD57FCE18E6470B4AEB0DDAFDC879DB9E42F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m836A787C3D0D87BE373BF7652B2BCF0145A6EB22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2_Invoke_m123DBC8D6080E9F46126C8550BBCFA4F8BF3B1A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2_Invoke_mA6604379EF99C4651FF95CAFB75045B8A51FC021_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* DeviceTracker_t167126AB5258179E840F4B1206843BF7207C7EE6_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PositionalDeviceTracker_t6ABCBD564879CA0036D88243CB3C187E5DCED92E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SmartTerrain_t465561CB4FF40E6CB2355629FB8AC51286663B14_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct StyleValueHandle_t46AFAF3564D6DF2EA2739A1D85438355478AD185 ;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.Type,System.Func`2<Vuforia.Tracker,System.Boolean>>
struct Dictionary_2_t9D1DAD5094C733FBC1F3B54B83F6B89E41719B84  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tC235912ABEA804D96A2CBDD5A4AD09E05F67AD1E* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t29709F6BCC9CCD8D7B4324A0D2FE9F0F7C2310C3 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tECA2F53C253026B77747FC04CF18A6C3F7DD422A * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t9D1DAD5094C733FBC1F3B54B83F6B89E41719B84, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t9D1DAD5094C733FBC1F3B54B83F6B89E41719B84, ___entries_1)); }
	inline EntryU5BU5D_tC235912ABEA804D96A2CBDD5A4AD09E05F67AD1E* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tC235912ABEA804D96A2CBDD5A4AD09E05F67AD1E** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tC235912ABEA804D96A2CBDD5A4AD09E05F67AD1E* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t9D1DAD5094C733FBC1F3B54B83F6B89E41719B84, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t9D1DAD5094C733FBC1F3B54B83F6B89E41719B84, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t9D1DAD5094C733FBC1F3B54B83F6B89E41719B84, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t9D1DAD5094C733FBC1F3B54B83F6B89E41719B84, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t9D1DAD5094C733FBC1F3B54B83F6B89E41719B84, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t9D1DAD5094C733FBC1F3B54B83F6B89E41719B84, ___keys_7)); }
	inline KeyCollection_t29709F6BCC9CCD8D7B4324A0D2FE9F0F7C2310C3 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t29709F6BCC9CCD8D7B4324A0D2FE9F0F7C2310C3 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t29709F6BCC9CCD8D7B4324A0D2FE9F0F7C2310C3 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t9D1DAD5094C733FBC1F3B54B83F6B89E41719B84, ___values_8)); }
	inline ValueCollection_tECA2F53C253026B77747FC04CF18A6C3F7DD422A * get_values_8() const { return ___values_8; }
	inline ValueCollection_tECA2F53C253026B77747FC04CF18A6C3F7DD422A ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tECA2F53C253026B77747FC04CF18A6C3F7DD422A * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t9D1DAD5094C733FBC1F3B54B83F6B89E41719B84, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,System.Func`2<System.Type,Vuforia.Tracker>>
struct Dictionary_2_t3EA70449DE598E62B2A72828458AF5874B72C1BA  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t2364828FC171EBB68DDD00BDAB49BF393421B42A* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tF69DCA8BCCAF65A7C34A9D096362D92CB2C990B3 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t408FDCB77E15C2E9049270D9359CD6400EAAE409 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t3EA70449DE598E62B2A72828458AF5874B72C1BA, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t3EA70449DE598E62B2A72828458AF5874B72C1BA, ___entries_1)); }
	inline EntryU5BU5D_t2364828FC171EBB68DDD00BDAB49BF393421B42A* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t2364828FC171EBB68DDD00BDAB49BF393421B42A** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t2364828FC171EBB68DDD00BDAB49BF393421B42A* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t3EA70449DE598E62B2A72828458AF5874B72C1BA, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t3EA70449DE598E62B2A72828458AF5874B72C1BA, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3EA70449DE598E62B2A72828458AF5874B72C1BA, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3EA70449DE598E62B2A72828458AF5874B72C1BA, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3EA70449DE598E62B2A72828458AF5874B72C1BA, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3EA70449DE598E62B2A72828458AF5874B72C1BA, ___keys_7)); }
	inline KeyCollection_tF69DCA8BCCAF65A7C34A9D096362D92CB2C990B3 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tF69DCA8BCCAF65A7C34A9D096362D92CB2C990B3 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tF69DCA8BCCAF65A7C34A9D096362D92CB2C990B3 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3EA70449DE598E62B2A72828458AF5874B72C1BA, ___values_8)); }
	inline ValueCollection_t408FDCB77E15C2E9049270D9359CD6400EAAE409 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t408FDCB77E15C2E9049270D9359CD6400EAAE409 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t408FDCB77E15C2E9049270D9359CD6400EAAE409 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3EA70449DE598E62B2A72828458AF5874B72C1BA, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,Vuforia.Tracker>
struct Dictionary_2_tC2C6E53EC49079BB5D59E3226C70DA77D60D082B  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t92EA07E15FCAE763A0F716D8547B3DA0B0E4302C* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t02BAA279F63F603DD4A4BB33A0C0B32A74C95ADA * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tC625CBFF5FA8B6FA78C2B8A016501994625D31A9 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tC2C6E53EC49079BB5D59E3226C70DA77D60D082B, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tC2C6E53EC49079BB5D59E3226C70DA77D60D082B, ___entries_1)); }
	inline EntryU5BU5D_t92EA07E15FCAE763A0F716D8547B3DA0B0E4302C* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t92EA07E15FCAE763A0F716D8547B3DA0B0E4302C** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t92EA07E15FCAE763A0F716D8547B3DA0B0E4302C* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tC2C6E53EC49079BB5D59E3226C70DA77D60D082B, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tC2C6E53EC49079BB5D59E3226C70DA77D60D082B, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tC2C6E53EC49079BB5D59E3226C70DA77D60D082B, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tC2C6E53EC49079BB5D59E3226C70DA77D60D082B, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tC2C6E53EC49079BB5D59E3226C70DA77D60D082B, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tC2C6E53EC49079BB5D59E3226C70DA77D60D082B, ___keys_7)); }
	inline KeyCollection_t02BAA279F63F603DD4A4BB33A0C0B32A74C95ADA * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t02BAA279F63F603DD4A4BB33A0C0B32A74C95ADA ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t02BAA279F63F603DD4A4BB33A0C0B32A74C95ADA * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tC2C6E53EC49079BB5D59E3226C70DA77D60D082B, ___values_8)); }
	inline ValueCollection_tC625CBFF5FA8B6FA78C2B8A016501994625D31A9 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tC625CBFF5FA8B6FA78C2B8A016501994625D31A9 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tC625CBFF5FA8B6FA78C2B8A016501994625D31A9 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tC2C6E53EC49079BB5D59E3226C70DA77D60D082B, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Tuple`2<System.Object,System.Object>
struct Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1  : public RuntimeObject
{
public:
	// T1 System.Tuple`2::m_Item1
	RuntimeObject * ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	RuntimeObject * ___m_Item2_1;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1, ___m_Item1_0)); }
	inline RuntimeObject * get_m_Item1_0() const { return ___m_Item1_0; }
	inline RuntimeObject ** get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(RuntimeObject * value)
	{
		___m_Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1, ___m_Item2_1)); }
	inline RuntimeObject * get_m_Item2_1() const { return ___m_Item2_1; }
	inline RuntimeObject ** get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(RuntimeObject * value)
	{
		___m_Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item2_1), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ThrowHelper
struct ThrowHelper_t396052A7B504E698E9DF1B91F7A52F4D2EA47246  : public RuntimeObject
{
public:

public:
};


// Vuforia.Tracker
struct Tracker_tC8779F03E5660202B4D88105DF0C594ED5DFD8AB  : public RuntimeObject
{
public:
	// System.Boolean Vuforia.Tracker::<IsActive>k__BackingField
	bool ___U3CIsActiveU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CIsActiveU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Tracker_tC8779F03E5660202B4D88105DF0C594ED5DFD8AB, ___U3CIsActiveU3Ek__BackingField_0)); }
	inline bool get_U3CIsActiveU3Ek__BackingField_0() const { return ___U3CIsActiveU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CIsActiveU3Ek__BackingField_0() { return &___U3CIsActiveU3Ek__BackingField_0; }
	inline void set_U3CIsActiveU3Ek__BackingField_0(bool value)
	{
		___U3CIsActiveU3Ek__BackingField_0 = value;
	}
};


// Vuforia.TrackerManager
struct TrackerManager_t70E5F52B1F51D7E63AF12867B4605C3A2ADBFC2E  : public RuntimeObject
{
public:
	// Vuforia.StateManager Vuforia.TrackerManager::mStateManager
	StateManager_tC9DBB4F8BA2D3E637669155EF9DEE5428662DC8B * ___mStateManager_1;
	// System.Collections.Generic.Dictionary`2<System.Type,Vuforia.Tracker> Vuforia.TrackerManager::mTrackers
	Dictionary_2_tC2C6E53EC49079BB5D59E3226C70DA77D60D082B * ___mTrackers_2;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Func`2<System.Type,Vuforia.Tracker>> Vuforia.TrackerManager::mTrackerCreators
	Dictionary_2_t3EA70449DE598E62B2A72828458AF5874B72C1BA * ___mTrackerCreators_3;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Func`2<Vuforia.Tracker,System.Boolean>> Vuforia.TrackerManager::mTrackerNativeDeinitializers
	Dictionary_2_t9D1DAD5094C733FBC1F3B54B83F6B89E41719B84 * ___mTrackerNativeDeinitializers_4;

public:
	inline static int32_t get_offset_of_mStateManager_1() { return static_cast<int32_t>(offsetof(TrackerManager_t70E5F52B1F51D7E63AF12867B4605C3A2ADBFC2E, ___mStateManager_1)); }
	inline StateManager_tC9DBB4F8BA2D3E637669155EF9DEE5428662DC8B * get_mStateManager_1() const { return ___mStateManager_1; }
	inline StateManager_tC9DBB4F8BA2D3E637669155EF9DEE5428662DC8B ** get_address_of_mStateManager_1() { return &___mStateManager_1; }
	inline void set_mStateManager_1(StateManager_tC9DBB4F8BA2D3E637669155EF9DEE5428662DC8B * value)
	{
		___mStateManager_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mStateManager_1), (void*)value);
	}

	inline static int32_t get_offset_of_mTrackers_2() { return static_cast<int32_t>(offsetof(TrackerManager_t70E5F52B1F51D7E63AF12867B4605C3A2ADBFC2E, ___mTrackers_2)); }
	inline Dictionary_2_tC2C6E53EC49079BB5D59E3226C70DA77D60D082B * get_mTrackers_2() const { return ___mTrackers_2; }
	inline Dictionary_2_tC2C6E53EC49079BB5D59E3226C70DA77D60D082B ** get_address_of_mTrackers_2() { return &___mTrackers_2; }
	inline void set_mTrackers_2(Dictionary_2_tC2C6E53EC49079BB5D59E3226C70DA77D60D082B * value)
	{
		___mTrackers_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTrackers_2), (void*)value);
	}

	inline static int32_t get_offset_of_mTrackerCreators_3() { return static_cast<int32_t>(offsetof(TrackerManager_t70E5F52B1F51D7E63AF12867B4605C3A2ADBFC2E, ___mTrackerCreators_3)); }
	inline Dictionary_2_t3EA70449DE598E62B2A72828458AF5874B72C1BA * get_mTrackerCreators_3() const { return ___mTrackerCreators_3; }
	inline Dictionary_2_t3EA70449DE598E62B2A72828458AF5874B72C1BA ** get_address_of_mTrackerCreators_3() { return &___mTrackerCreators_3; }
	inline void set_mTrackerCreators_3(Dictionary_2_t3EA70449DE598E62B2A72828458AF5874B72C1BA * value)
	{
		___mTrackerCreators_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTrackerCreators_3), (void*)value);
	}

	inline static int32_t get_offset_of_mTrackerNativeDeinitializers_4() { return static_cast<int32_t>(offsetof(TrackerManager_t70E5F52B1F51D7E63AF12867B4605C3A2ADBFC2E, ___mTrackerNativeDeinitializers_4)); }
	inline Dictionary_2_t9D1DAD5094C733FBC1F3B54B83F6B89E41719B84 * get_mTrackerNativeDeinitializers_4() const { return ___mTrackerNativeDeinitializers_4; }
	inline Dictionary_2_t9D1DAD5094C733FBC1F3B54B83F6B89E41719B84 ** get_address_of_mTrackerNativeDeinitializers_4() { return &___mTrackerNativeDeinitializers_4; }
	inline void set_mTrackerNativeDeinitializers_4(Dictionary_2_t9D1DAD5094C733FBC1F3B54B83F6B89E41719B84 * value)
	{
		___mTrackerNativeDeinitializers_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTrackerNativeDeinitializers_4), (void*)value);
	}
};

struct TrackerManager_t70E5F52B1F51D7E63AF12867B4605C3A2ADBFC2E_StaticFields
{
public:
	// Vuforia.ITrackerManager Vuforia.TrackerManager::mInstance
	RuntimeObject* ___mInstance_0;

public:
	inline static int32_t get_offset_of_mInstance_0() { return static_cast<int32_t>(offsetof(TrackerManager_t70E5F52B1F51D7E63AF12867B4605C3A2ADBFC2E_StaticFields, ___mInstance_0)); }
	inline RuntimeObject* get_mInstance_0() const { return ___mInstance_0; }
	inline RuntimeObject** get_address_of_mInstance_0() { return &___mInstance_0; }
	inline void set_mInstance_0(RuntimeObject* value)
	{
		___mInstance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mInstance_0), (void*)value);
	}
};


// System.Tuple
struct Tuple_t04ED51FC9876E74A8E2D69E20EC4D89DAF554A9F  : public RuntimeObject
{
public:

public:
};


// Vuforia.UnityComponentExtensions
struct UnityComponentExtensions_t1576616B1DF63E68FF3B3BDFE38DCD9F3AA3DF87  : public RuntimeObject
{
public:

public:
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility
struct UnsafeUtility_tAA965823E05BE8ADD69F58C82BF0DF723476E551  : public RuntimeObject
{
public:

public:
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Threading.Volatile
struct Volatile_t7A8B2983396C4500A8FC226CDB66FE9067DA4AE6  : public RuntimeObject
{
public:

public:
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Byte>
struct AlignOfHelper_1_t030625109E9AAAF4D093DC2F7FAA2BEC2000FA0A 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	uint8_t ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t030625109E9AAAF4D093DC2F7FAA2BEC2000FA0A, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t030625109E9AAAF4D093DC2F7FAA2BEC2000FA0A, ___data_1)); }
	inline uint8_t get_data_1() const { return ___data_1; }
	inline uint8_t* get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(uint8_t value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Int32>
struct AlignOfHelper_1_t2D37A63A0766FF4D4D0AA3CCD8879D66AC006FF1 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	int32_t ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t2D37A63A0766FF4D4D0AA3CCD8879D66AC006FF1, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t2D37A63A0766FF4D4D0AA3CCD8879D66AC006FF1, ___data_1)); }
	inline int32_t get_data_1() const { return ___data_1; }
	inline int32_t* get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(int32_t value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.UInt16>
struct AlignOfHelper_1_t84B0D514478CAD691346D8A78F869BF54A4DF863 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	uint16_t ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t84B0D514478CAD691346D8A78F869BF54A4DF863, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t84B0D514478CAD691346D8A78F869BF54A4DF863, ___data_1)); }
	inline uint16_t get_data_1() const { return ___data_1; }
	inline uint16_t* get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(uint16_t value)
	{
		___data_1 = value;
	}
};


// UnityEngine.Rendering.BatchVisibility
struct BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE 
{
public:
	// System.Int32 UnityEngine.Rendering.BatchVisibility::offset
	int32_t ___offset_0;
	// System.Int32 UnityEngine.Rendering.BatchVisibility::instancesCount
	int32_t ___instancesCount_1;
	// System.Int32 UnityEngine.Rendering.BatchVisibility::visibleCount
	int32_t ___visibleCount_2;

public:
	inline static int32_t get_offset_of_offset_0() { return static_cast<int32_t>(offsetof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE, ___offset_0)); }
	inline int32_t get_offset_0() const { return ___offset_0; }
	inline int32_t* get_address_of_offset_0() { return &___offset_0; }
	inline void set_offset_0(int32_t value)
	{
		___offset_0 = value;
	}

	inline static int32_t get_offset_of_instancesCount_1() { return static_cast<int32_t>(offsetof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE, ___instancesCount_1)); }
	inline int32_t get_instancesCount_1() const { return ___instancesCount_1; }
	inline int32_t* get_address_of_instancesCount_1() { return &___instancesCount_1; }
	inline void set_instancesCount_1(int32_t value)
	{
		___instancesCount_1 = value;
	}

	inline static int32_t get_offset_of_visibleCount_2() { return static_cast<int32_t>(offsetof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE, ___visibleCount_2)); }
	inline int32_t get_visibleCount_2() const { return ___visibleCount_2; }
	inline int32_t* get_address_of_visibleCount_2() { return &___visibleCount_2; }
	inline void set_visibleCount_2(int32_t value)
	{
		___visibleCount_2 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Color32
struct Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Runtime.InteropServices.GCHandle
struct GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.LinearColor
struct LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 
{
public:
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_red
	float ___m_red_0;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_green
	float ___m_green_1;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_blue
	float ___m_blue_2;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_intensity
	float ___m_intensity_3;

public:
	inline static int32_t get_offset_of_m_red_0() { return static_cast<int32_t>(offsetof(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2, ___m_red_0)); }
	inline float get_m_red_0() const { return ___m_red_0; }
	inline float* get_address_of_m_red_0() { return &___m_red_0; }
	inline void set_m_red_0(float value)
	{
		___m_red_0 = value;
	}

	inline static int32_t get_offset_of_m_green_1() { return static_cast<int32_t>(offsetof(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2, ___m_green_1)); }
	inline float get_m_green_1() const { return ___m_green_1; }
	inline float* get_address_of_m_green_1() { return &___m_green_1; }
	inline void set_m_green_1(float value)
	{
		___m_green_1 = value;
	}

	inline static int32_t get_offset_of_m_blue_2() { return static_cast<int32_t>(offsetof(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2, ___m_blue_2)); }
	inline float get_m_blue_2() const { return ___m_blue_2; }
	inline float* get_address_of_m_blue_2() { return &___m_blue_2; }
	inline void set_m_blue_2(float value)
	{
		___m_blue_2 = value;
	}

	inline static int32_t get_offset_of_m_intensity_3() { return static_cast<int32_t>(offsetof(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2, ___m_intensity_3)); }
	inline float get_m_intensity_3() const { return ___m_intensity_3; }
	inline float* get_address_of_m_intensity_3() { return &___m_intensity_3; }
	inline void set_m_intensity_3(float value)
	{
		___m_intensity_3 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.UIElements.UIR.RenderChainTextEntry
struct RenderChainTextEntry_t2B7733A1A5036FC66D89122F798A839F058AE7C7 
{
public:
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainTextEntry::command
	RenderChainCommand_t687866AA005A30DF2AF3D60E22ADC708C90828F1 * ___command_0;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainTextEntry::firstVertex
	int32_t ___firstVertex_1;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainTextEntry::vertexCount
	int32_t ___vertexCount_2;

public:
	inline static int32_t get_offset_of_command_0() { return static_cast<int32_t>(offsetof(RenderChainTextEntry_t2B7733A1A5036FC66D89122F798A839F058AE7C7, ___command_0)); }
	inline RenderChainCommand_t687866AA005A30DF2AF3D60E22ADC708C90828F1 * get_command_0() const { return ___command_0; }
	inline RenderChainCommand_t687866AA005A30DF2AF3D60E22ADC708C90828F1 ** get_address_of_command_0() { return &___command_0; }
	inline void set_command_0(RenderChainCommand_t687866AA005A30DF2AF3D60E22ADC708C90828F1 * value)
	{
		___command_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___command_0), (void*)value);
	}

	inline static int32_t get_offset_of_firstVertex_1() { return static_cast<int32_t>(offsetof(RenderChainTextEntry_t2B7733A1A5036FC66D89122F798A839F058AE7C7, ___firstVertex_1)); }
	inline int32_t get_firstVertex_1() const { return ___firstVertex_1; }
	inline int32_t* get_address_of_firstVertex_1() { return &___firstVertex_1; }
	inline void set_firstVertex_1(int32_t value)
	{
		___firstVertex_1 = value;
	}

	inline static int32_t get_offset_of_vertexCount_2() { return static_cast<int32_t>(offsetof(RenderChainTextEntry_t2B7733A1A5036FC66D89122F798A839F058AE7C7, ___vertexCount_2)); }
	inline int32_t get_vertexCount_2() const { return ___vertexCount_2; }
	inline int32_t* get_address_of_vertexCount_2() { return &___vertexCount_2; }
	inline void set_vertexCount_2(int32_t value)
	{
		___vertexCount_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UIElements.UIR.RenderChainTextEntry
struct RenderChainTextEntry_t2B7733A1A5036FC66D89122F798A839F058AE7C7_marshaled_pinvoke
{
	RenderChainCommand_t687866AA005A30DF2AF3D60E22ADC708C90828F1 * ___command_0;
	int32_t ___firstVertex_1;
	int32_t ___vertexCount_2;
};
// Native definition for COM marshalling of UnityEngine.UIElements.UIR.RenderChainTextEntry
struct RenderChainTextEntry_t2B7733A1A5036FC66D89122F798A839F058AE7C7_marshaled_com
{
	RenderChainCommand_t687866AA005A30DF2AF3D60E22ADC708C90828F1 * ___command_0;
	int32_t ___firstVertex_1;
	int32_t ___vertexCount_2;
};

// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UIElements.StyleVariable
struct StyleVariable_tEF01599E5D91F65B4405F88847D7F6AA87B210BD 
{
public:
	// System.String UnityEngine.UIElements.StyleVariable::name
	String_t* ___name_0;
	// UnityEngine.UIElements.StyleSheet UnityEngine.UIElements.StyleVariable::sheet
	StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * ___sheet_1;
	// UnityEngine.UIElements.StyleValueHandle[] UnityEngine.UIElements.StyleVariable::handles
	StyleValueHandleU5BU5D_t8FCC38AD3E7E9F31424A6842204C9407D70FF41A* ___handles_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(StyleVariable_tEF01599E5D91F65B4405F88847D7F6AA87B210BD, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_sheet_1() { return static_cast<int32_t>(offsetof(StyleVariable_tEF01599E5D91F65B4405F88847D7F6AA87B210BD, ___sheet_1)); }
	inline StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * get_sheet_1() const { return ___sheet_1; }
	inline StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F ** get_address_of_sheet_1() { return &___sheet_1; }
	inline void set_sheet_1(StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * value)
	{
		___sheet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sheet_1), (void*)value);
	}

	inline static int32_t get_offset_of_handles_2() { return static_cast<int32_t>(offsetof(StyleVariable_tEF01599E5D91F65B4405F88847D7F6AA87B210BD, ___handles_2)); }
	inline StyleValueHandleU5BU5D_t8FCC38AD3E7E9F31424A6842204C9407D70FF41A* get_handles_2() const { return ___handles_2; }
	inline StyleValueHandleU5BU5D_t8FCC38AD3E7E9F31424A6842204C9407D70FF41A** get_address_of_handles_2() { return &___handles_2; }
	inline void set_handles_2(StyleValueHandleU5BU5D_t8FCC38AD3E7E9F31424A6842204C9407D70FF41A* value)
	{
		___handles_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handles_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UIElements.StyleVariable
struct StyleVariable_tEF01599E5D91F65B4405F88847D7F6AA87B210BD_marshaled_pinvoke
{
	char* ___name_0;
	StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * ___sheet_1;
	StyleValueHandle_t46AFAF3564D6DF2EA2739A1D85438355478AD185 * ___handles_2;
};
// Native definition for COM marshalling of UnityEngine.UIElements.StyleVariable
struct StyleVariable_tEF01599E5D91F65B4405F88847D7F6AA87B210BD_marshaled_com
{
	Il2CppChar* ___name_0;
	StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * ___sheet_1;
	StyleValueHandle_t46AFAF3564D6DF2EA2739A1D85438355478AD185 * ___handles_2;
};

// UnityEngine.UILineInfo
struct UILineInfo_tD082FF4894030AD4EBF57ACF6A997135E4B8B67C 
{
public:
	// System.Int32 UnityEngine.UILineInfo::startCharIdx
	int32_t ___startCharIdx_0;
	// System.Int32 UnityEngine.UILineInfo::height
	int32_t ___height_1;
	// System.Single UnityEngine.UILineInfo::topY
	float ___topY_2;
	// System.Single UnityEngine.UILineInfo::leading
	float ___leading_3;

public:
	inline static int32_t get_offset_of_startCharIdx_0() { return static_cast<int32_t>(offsetof(UILineInfo_tD082FF4894030AD4EBF57ACF6A997135E4B8B67C, ___startCharIdx_0)); }
	inline int32_t get_startCharIdx_0() const { return ___startCharIdx_0; }
	inline int32_t* get_address_of_startCharIdx_0() { return &___startCharIdx_0; }
	inline void set_startCharIdx_0(int32_t value)
	{
		___startCharIdx_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(UILineInfo_tD082FF4894030AD4EBF57ACF6A997135E4B8B67C, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_topY_2() { return static_cast<int32_t>(offsetof(UILineInfo_tD082FF4894030AD4EBF57ACF6A997135E4B8B67C, ___topY_2)); }
	inline float get_topY_2() const { return ___topY_2; }
	inline float* get_address_of_topY_2() { return &___topY_2; }
	inline void set_topY_2(float value)
	{
		___topY_2 = value;
	}

	inline static int32_t get_offset_of_leading_3() { return static_cast<int32_t>(offsetof(UILineInfo_tD082FF4894030AD4EBF57ACF6A997135E4B8B67C, ___leading_3)); }
	inline float get_leading_3() const { return ___leading_3; }
	inline float* get_address_of_leading_3() { return &___leading_3; }
	inline void set_leading_3(float value)
	{
		___leading_3 = value;
	}
};


// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UIntPtr
struct UIntPtr_t 
{
public:
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;

public:
	inline static int32_t get_offset_of__pointer_1() { return static_cast<int32_t>(offsetof(UIntPtr_t, ____pointer_1)); }
	inline void* get__pointer_1() const { return ____pointer_1; }
	inline void** get_address_of__pointer_1() { return &____pointer_1; }
	inline void set__pointer_1(void* value)
	{
		____pointer_1 = value;
	}
};

struct UIntPtr_t_StaticFields
{
public:
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(UIntPtr_t_StaticFields, ___Zero_0)); }
	inline uintptr_t get_Zero_0() const { return ___Zero_0; }
	inline uintptr_t* get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(uintptr_t value)
	{
		___Zero_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2 
{
public:
	// System.Int32 UnityEngine.BeforeRenderHelper/OrderBlock::order
	int32_t ___order_0;
	// UnityEngine.Events.UnityAction UnityEngine.BeforeRenderHelper/OrderBlock::callback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___callback_1;

public:
	inline static int32_t get_offset_of_order_0() { return static_cast<int32_t>(offsetof(OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2, ___order_0)); }
	inline int32_t get_order_0() const { return ___order_0; }
	inline int32_t* get_address_of_order_0() { return &___order_0; }
	inline void set_order_0(int32_t value)
	{
		___order_0 = value;
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2, ___callback_1)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_callback_1() const { return ___callback_1; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_marshaled_pinvoke
{
	int32_t ___order_0;
	Il2CppMethodPointer ___callback_1;
};
// Native definition for COM marshalling of UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_marshaled_com
{
	int32_t ___order_0;
	Il2CppMethodPointer ___callback_1;
};

// Vuforia.CameraDevice/VideoModeData
#pragma pack(push, tp, 1)
struct VideoModeData_t20D8D0686B2798F1A50B56666B49CD27D2444E25 
{
public:
	// System.Int32 Vuforia.CameraDevice/VideoModeData::width
	int32_t ___width_0;
	// System.Int32 Vuforia.CameraDevice/VideoModeData::height
	int32_t ___height_1;
	// System.Single Vuforia.CameraDevice/VideoModeData::frameRate
	float ___frameRate_2;
	// System.Int32 Vuforia.CameraDevice/VideoModeData::format
	int32_t ___format_3;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(VideoModeData_t20D8D0686B2798F1A50B56666B49CD27D2444E25, ___width_0)); }
	inline int32_t get_width_0() const { return ___width_0; }
	inline int32_t* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(int32_t value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(VideoModeData_t20D8D0686B2798F1A50B56666B49CD27D2444E25, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_frameRate_2() { return static_cast<int32_t>(offsetof(VideoModeData_t20D8D0686B2798F1A50B56666B49CD27D2444E25, ___frameRate_2)); }
	inline float get_frameRate_2() const { return ___frameRate_2; }
	inline float* get_address_of_frameRate_2() { return &___frameRate_2; }
	inline void set_frameRate_2(float value)
	{
		___frameRate_2 = value;
	}

	inline static int32_t get_offset_of_format_3() { return static_cast<int32_t>(offsetof(VideoModeData_t20D8D0686B2798F1A50B56666B49CD27D2444E25, ___format_3)); }
	inline int32_t get_format_3() const { return ___format_3; }
	inline int32_t* get_address_of_format_3() { return &___format_3; }
	inline void set_format_3(int32_t value)
	{
		___format_3 = value;
	}
};
#pragma pack(pop, tp)


// UnityEngine.UIElements.FocusController/FocusedElement
struct FocusedElement_tF9897C653908D7004ACBEC7265361828BA9DB206 
{
public:
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.FocusController/FocusedElement::m_SubTreeRoot
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___m_SubTreeRoot_0;
	// UnityEngine.UIElements.Focusable UnityEngine.UIElements.FocusController/FocusedElement::m_FocusedElement
	Focusable_t54CC145FEE85D2A5D92761C419288150CF5BEC14 * ___m_FocusedElement_1;

public:
	inline static int32_t get_offset_of_m_SubTreeRoot_0() { return static_cast<int32_t>(offsetof(FocusedElement_tF9897C653908D7004ACBEC7265361828BA9DB206, ___m_SubTreeRoot_0)); }
	inline VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * get_m_SubTreeRoot_0() const { return ___m_SubTreeRoot_0; }
	inline VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 ** get_address_of_m_SubTreeRoot_0() { return &___m_SubTreeRoot_0; }
	inline void set_m_SubTreeRoot_0(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * value)
	{
		___m_SubTreeRoot_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SubTreeRoot_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_FocusedElement_1() { return static_cast<int32_t>(offsetof(FocusedElement_tF9897C653908D7004ACBEC7265361828BA9DB206, ___m_FocusedElement_1)); }
	inline Focusable_t54CC145FEE85D2A5D92761C419288150CF5BEC14 * get_m_FocusedElement_1() const { return ___m_FocusedElement_1; }
	inline Focusable_t54CC145FEE85D2A5D92761C419288150CF5BEC14 ** get_address_of_m_FocusedElement_1() { return &___m_FocusedElement_1; }
	inline void set_m_FocusedElement_1(Focusable_t54CC145FEE85D2A5D92761C419288150CF5BEC14 * value)
	{
		___m_FocusedElement_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FocusedElement_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UIElements.FocusController/FocusedElement
struct FocusedElement_tF9897C653908D7004ACBEC7265361828BA9DB206_marshaled_pinvoke
{
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___m_SubTreeRoot_0;
	Focusable_t54CC145FEE85D2A5D92761C419288150CF5BEC14 * ___m_FocusedElement_1;
};
// Native definition for COM marshalling of UnityEngine.UIElements.FocusController/FocusedElement
struct FocusedElement_tF9897C653908D7004ACBEC7265361828BA9DB206_marshaled_com
{
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___m_SubTreeRoot_0;
	Focusable_t54CC145FEE85D2A5D92761C419288150CF5BEC14 * ___m_FocusedElement_1;
};

// Vuforia.RawPtrVideoTextureUpdater/TextureData
struct TextureData_t89F914155468892E1F991668FE7D1CB43EA6D983 
{
public:
	// UnityEngine.Texture2D Vuforia.RawPtrVideoTextureUpdater/TextureData::Texture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___Texture_0;
	// System.Int32 Vuforia.RawPtrVideoTextureUpdater/TextureData::BufferLength
	int32_t ___BufferLength_1;

public:
	inline static int32_t get_offset_of_Texture_0() { return static_cast<int32_t>(offsetof(TextureData_t89F914155468892E1F991668FE7D1CB43EA6D983, ___Texture_0)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_Texture_0() const { return ___Texture_0; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_Texture_0() { return &___Texture_0; }
	inline void set_Texture_0(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___Texture_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Texture_0), (void*)value);
	}

	inline static int32_t get_offset_of_BufferLength_1() { return static_cast<int32_t>(offsetof(TextureData_t89F914155468892E1F991668FE7D1CB43EA6D983, ___BufferLength_1)); }
	inline int32_t get_BufferLength_1() const { return ___BufferLength_1; }
	inline int32_t* get_address_of_BufferLength_1() { return &___BufferLength_1; }
	inline void set_BufferLength_1(int32_t value)
	{
		___BufferLength_1 = value;
	}
};

// Native definition for P/Invoke marshalling of Vuforia.RawPtrVideoTextureUpdater/TextureData
struct TextureData_t89F914155468892E1F991668FE7D1CB43EA6D983_marshaled_pinvoke
{
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___Texture_0;
	int32_t ___BufferLength_1;
};
// Native definition for COM marshalling of Vuforia.RawPtrVideoTextureUpdater/TextureData
struct TextureData_t89F914155468892E1F991668FE7D1CB43EA6D983_marshaled_com
{
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___Texture_0;
	int32_t ___BufferLength_1;
};

// TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/SpriteFrame
struct SpriteFrame_t5B610F44C5943B89962CC8CC4245EECDE29E94D9 
{
public:
	// System.Single TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/SpriteFrame::x
	float ___x_0;
	// System.Single TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/SpriteFrame::y
	float ___y_1;
	// System.Single TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/SpriteFrame::w
	float ___w_2;
	// System.Single TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/SpriteFrame::h
	float ___h_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(SpriteFrame_t5B610F44C5943B89962CC8CC4245EECDE29E94D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(SpriteFrame_t5B610F44C5943B89962CC8CC4245EECDE29E94D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_w_2() { return static_cast<int32_t>(offsetof(SpriteFrame_t5B610F44C5943B89962CC8CC4245EECDE29E94D9, ___w_2)); }
	inline float get_w_2() const { return ___w_2; }
	inline float* get_address_of_w_2() { return &___w_2; }
	inline void set_w_2(float value)
	{
		___w_2 = value;
	}

	inline static int32_t get_offset_of_h_3() { return static_cast<int32_t>(offsetof(SpriteFrame_t5B610F44C5943B89962CC8CC4245EECDE29E94D9, ___h_3)); }
	inline float get_h_3() const { return ___h_3; }
	inline float* get_address_of_h_3() { return &___h_3; }
	inline void set_h_3(float value)
	{
		___h_3 = value;
	}
};


// TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/SpriteSize
struct SpriteSize_t7D47B39A52139B8CD3CE7F233C48981F70275A3D 
{
public:
	// System.Single TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/SpriteSize::w
	float ___w_0;
	// System.Single TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/SpriteSize::h
	float ___h_1;

public:
	inline static int32_t get_offset_of_w_0() { return static_cast<int32_t>(offsetof(SpriteSize_t7D47B39A52139B8CD3CE7F233C48981F70275A3D, ___w_0)); }
	inline float get_w_0() const { return ___w_0; }
	inline float* get_address_of_w_0() { return &___w_0; }
	inline void set_w_0(float value)
	{
		___w_0 = value;
	}

	inline static int32_t get_offset_of_h_1() { return static_cast<int32_t>(offsetof(SpriteSize_t7D47B39A52139B8CD3CE7F233C48981F70275A3D, ___h_1)); }
	inline float get_h_1() const { return ___h_1; }
	inline float* get_address_of_h_1() { return &___h_1; }
	inline void set_h_1(float value)
	{
		___h_1 = value;
	}
};


// UnityEngine.UIElements.TextureRegistry/TextureInfo
struct TextureInfo_tD08547B0C7CCA578BCF7493CE018FC48EDF65069 
{
public:
	// UnityEngine.Texture UnityEngine.UIElements.TextureRegistry/TextureInfo::texture
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___texture_0;
	// System.Boolean UnityEngine.UIElements.TextureRegistry/TextureInfo::dynamic
	bool ___dynamic_1;
	// System.Int32 UnityEngine.UIElements.TextureRegistry/TextureInfo::refCount
	int32_t ___refCount_2;

public:
	inline static int32_t get_offset_of_texture_0() { return static_cast<int32_t>(offsetof(TextureInfo_tD08547B0C7CCA578BCF7493CE018FC48EDF65069, ___texture_0)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_texture_0() const { return ___texture_0; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_texture_0() { return &___texture_0; }
	inline void set_texture_0(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___texture_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___texture_0), (void*)value);
	}

	inline static int32_t get_offset_of_dynamic_1() { return static_cast<int32_t>(offsetof(TextureInfo_tD08547B0C7CCA578BCF7493CE018FC48EDF65069, ___dynamic_1)); }
	inline bool get_dynamic_1() const { return ___dynamic_1; }
	inline bool* get_address_of_dynamic_1() { return &___dynamic_1; }
	inline void set_dynamic_1(bool value)
	{
		___dynamic_1 = value;
	}

	inline static int32_t get_offset_of_refCount_2() { return static_cast<int32_t>(offsetof(TextureInfo_tD08547B0C7CCA578BCF7493CE018FC48EDF65069, ___refCount_2)); }
	inline int32_t get_refCount_2() const { return ___refCount_2; }
	inline int32_t* get_address_of_refCount_2() { return &___refCount_2; }
	inline void set_refCount_2(int32_t value)
	{
		___refCount_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UIElements.TextureRegistry/TextureInfo
struct TextureInfo_tD08547B0C7CCA578BCF7493CE018FC48EDF65069_marshaled_pinvoke
{
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___texture_0;
	int32_t ___dynamic_1;
	int32_t ___refCount_2;
};
// Native definition for COM marshalling of UnityEngine.UIElements.TextureRegistry/TextureInfo
struct TextureInfo_tD08547B0C7CCA578BCF7493CE018FC48EDF65069_marshaled_com
{
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___texture_0;
	int32_t ___dynamic_1;
	int32_t ___refCount_2;
};

// UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393 
{
public:
	// System.Threading.SendOrPostCallback UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateCallback
	SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * ___m_DelagateCallback_0;
	// System.Object UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateState
	RuntimeObject * ___m_DelagateState_1;
	// System.Threading.ManualResetEvent UnityEngine.UnitySynchronizationContext/WorkRequest::m_WaitHandle
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___m_WaitHandle_2;

public:
	inline static int32_t get_offset_of_m_DelagateCallback_0() { return static_cast<int32_t>(offsetof(WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393, ___m_DelagateCallback_0)); }
	inline SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * get_m_DelagateCallback_0() const { return ___m_DelagateCallback_0; }
	inline SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C ** get_address_of_m_DelagateCallback_0() { return &___m_DelagateCallback_0; }
	inline void set_m_DelagateCallback_0(SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * value)
	{
		___m_DelagateCallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DelagateCallback_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_DelagateState_1() { return static_cast<int32_t>(offsetof(WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393, ___m_DelagateState_1)); }
	inline RuntimeObject * get_m_DelagateState_1() const { return ___m_DelagateState_1; }
	inline RuntimeObject ** get_address_of_m_DelagateState_1() { return &___m_DelagateState_1; }
	inline void set_m_DelagateState_1(RuntimeObject * value)
	{
		___m_DelagateState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DelagateState_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_WaitHandle_2() { return static_cast<int32_t>(offsetof(WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393, ___m_WaitHandle_2)); }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * get_m_WaitHandle_2() const { return ___m_WaitHandle_2; }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA ** get_address_of_m_WaitHandle_2() { return &___m_WaitHandle_2; }
	inline void set_m_WaitHandle_2(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * value)
	{
		___m_WaitHandle_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WaitHandle_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_marshaled_pinvoke
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___m_WaitHandle_2;
};
// Native definition for COM marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_marshaled_com
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___m_WaitHandle_2;
};

// Vuforia.VuforiaManager/TrackableIdPair
struct TrackableIdPair_t89652BBB27728E0166EA648D84B9D546D908B79B 
{
public:
	// System.Int32 Vuforia.VuforiaManager/TrackableIdPair::TrackableId
	int32_t ___TrackableId_0;
	// System.Int32 Vuforia.VuforiaManager/TrackableIdPair::ResultId
	int32_t ___ResultId_1;

public:
	inline static int32_t get_offset_of_TrackableId_0() { return static_cast<int32_t>(offsetof(TrackableIdPair_t89652BBB27728E0166EA648D84B9D546D908B79B, ___TrackableId_0)); }
	inline int32_t get_TrackableId_0() const { return ___TrackableId_0; }
	inline int32_t* get_address_of_TrackableId_0() { return &___TrackableId_0; }
	inline void set_TrackableId_0(int32_t value)
	{
		___TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_ResultId_1() { return static_cast<int32_t>(offsetof(TrackableIdPair_t89652BBB27728E0166EA648D84B9D546D908B79B, ___ResultId_1)); }
	inline int32_t get_ResultId_1() const { return ___ResultId_1; }
	inline int32_t* get_address_of_ResultId_1() { return &___ResultId_1; }
	inline void set_ResultId_1(int32_t value)
	{
		___ResultId_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.BatchVisibility>
struct AlignOfHelper_1_t2FCEDE21F23B91BD30F8918F2014E815BB7A2D1F 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t2FCEDE21F23B91BD30F8918F2014E815BB7A2D1F, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t2FCEDE21F23B91BD30F8918F2014E815BB7A2D1F, ___data_1)); }
	inline BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  get_data_1() const { return ___data_1; }
	inline BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  value)
	{
		___data_1 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.ExceptionArgument
struct ExceptionArgument_t750CCD4C657BCB2C185560CC68330BC0313B8737 
{
public:
	// System.Int32 System.ExceptionArgument::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExceptionArgument_t750CCD4C657BCB2C185560CC68330BC0313B8737, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.FalloffType
struct FalloffType_t983DA2C11C909629E51BD1D4CF088C689C9863CB 
{
public:
	// System.Byte UnityEngine.Experimental.GlobalIllumination.FalloffType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FalloffType_t983DA2C11C909629E51BD1D4CF088C689C9863CB, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.UIR.GfxUpdateBufferRange
struct GfxUpdateBufferRange_t11F569267024B2295C7F30C6E951754053C03D66 
{
public:
	// System.UInt32 UnityEngine.UIElements.UIR.GfxUpdateBufferRange::offsetFromWriteStart
	uint32_t ___offsetFromWriteStart_0;
	// System.UInt32 UnityEngine.UIElements.UIR.GfxUpdateBufferRange::size
	uint32_t ___size_1;
	// System.UIntPtr UnityEngine.UIElements.UIR.GfxUpdateBufferRange::source
	uintptr_t ___source_2;

public:
	inline static int32_t get_offset_of_offsetFromWriteStart_0() { return static_cast<int32_t>(offsetof(GfxUpdateBufferRange_t11F569267024B2295C7F30C6E951754053C03D66, ___offsetFromWriteStart_0)); }
	inline uint32_t get_offsetFromWriteStart_0() const { return ___offsetFromWriteStart_0; }
	inline uint32_t* get_address_of_offsetFromWriteStart_0() { return &___offsetFromWriteStart_0; }
	inline void set_offsetFromWriteStart_0(uint32_t value)
	{
		___offsetFromWriteStart_0 = value;
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(GfxUpdateBufferRange_t11F569267024B2295C7F30C6E951754053C03D66, ___size_1)); }
	inline uint32_t get_size_1() const { return ___size_1; }
	inline uint32_t* get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(uint32_t value)
	{
		___size_1 = value;
	}

	inline static int32_t get_offset_of_source_2() { return static_cast<int32_t>(offsetof(GfxUpdateBufferRange_t11F569267024B2295C7F30C6E951754053C03D66, ___source_2)); }
	inline uintptr_t get_source_2() const { return ___source_2; }
	inline uintptr_t* get_address_of_source_2() { return &___source_2; }
	inline void set_source_2(uintptr_t value)
	{
		___source_2 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.LightMode
struct LightMode_t9D89979F39C1DBB9CD1E275BDD77C7EA1B506491 
{
public:
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightMode::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightMode_t9D89979F39C1DBB9CD1E275BDD77C7EA1B506491, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.LightType
struct LightType_t4205DE4BEF130CE507C87172DAB60E5B1EB05552 
{
public:
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightType_t4205DE4BEF130CE507C87172DAB60E5B1EB05552, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Plane
struct Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_0;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_1;

public:
	inline static int32_t get_offset_of_m_Normal_0() { return static_cast<int32_t>(offsetof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7, ___m_Normal_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_0() const { return ___m_Normal_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_0() { return &___m_Normal_0; }
	inline void set_m_Normal_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_0 = value;
	}

	inline static int32_t get_offset_of_m_Distance_1() { return static_cast<int32_t>(offsetof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7, ___m_Distance_1)); }
	inline float get_m_Distance_1() const { return ___m_Distance_1; }
	inline float* get_address_of_m_Distance_1() { return &___m_Distance_1; }
	inline void set_m_Distance_1(float value)
	{
		___m_Distance_1 = value;
	}
};


// UnityEngine.Pose
struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___rotation_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields, ___k_Identity_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___k_Identity_2 = value;
	}
};


// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___m_GameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___module_1)); }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldPosition_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldNormal_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___screenPosition_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___screenPosition_9 = value;
	}

	inline static int32_t get_offset_of_displayIndex_10() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___displayIndex_10)); }
	inline int32_t get_displayIndex_10() const { return ___displayIndex_10; }
	inline int32_t* get_address_of_displayIndex_10() { return &___displayIndex_10; }
	inline void set_displayIndex_10(int32_t value)
	{
		___displayIndex_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.UIElements.StyleKeyword
struct StyleKeyword_t01A121DD5B4904AB0EA0BFA6E26159EE9AF8B303 
{
public:
	// System.Int32 UnityEngine.UIElements.StyleKeyword::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StyleKeyword_t01A121DD5B4904AB0EA0BFA6E26159EE9AF8B303, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.StyleSheets.StylePropertyId
struct StylePropertyId_t595C8AB8A23E2DDDD0BCF5993E011BBFEA1DF59F 
{
public:
	// System.Int32 UnityEngine.UIElements.StyleSheets.StylePropertyId::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StylePropertyId_t595C8AB8A23E2DDDD0BCF5993E011BBFEA1DF59F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.StyleSelectorType
struct StyleSelectorType_t076854E4D0D1DE5408564915375B2D4AF5F13BD7 
{
public:
	// System.Int32 UnityEngine.UIElements.StyleSelectorType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StyleSelectorType_t076854E4D0D1DE5408564915375B2D4AF5F13BD7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.StyleValueType
struct StyleValueType_t41CD4C2FFE2B4D2AFCB10F36A6D685A60517E32F 
{
public:
	// System.Int32 UnityEngine.UIElements.StyleValueType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StyleValueType_t41CD4C2FFE2B4D2AFCB10F36A6D685A60517E32F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UICharInfo
struct UICharInfo_tDEA65B831FAD06D1E9B10A6088E05C6D615B089A 
{
public:
	// UnityEngine.Vector2 UnityEngine.UICharInfo::cursorPos
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___cursorPos_0;
	// System.Single UnityEngine.UICharInfo::charWidth
	float ___charWidth_1;

public:
	inline static int32_t get_offset_of_cursorPos_0() { return static_cast<int32_t>(offsetof(UICharInfo_tDEA65B831FAD06D1E9B10A6088E05C6D615B089A, ___cursorPos_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_cursorPos_0() const { return ___cursorPos_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_cursorPos_0() { return &___cursorPos_0; }
	inline void set_cursorPos_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___cursorPos_0 = value;
	}

	inline static int32_t get_offset_of_charWidth_1() { return static_cast<int32_t>(offsetof(UICharInfo_tDEA65B831FAD06D1E9B10A6088E05C6D615B089A, ___charWidth_1)); }
	inline float get_charWidth_1() const { return ___charWidth_1; }
	inline float* get_address_of_charWidth_1() { return &___charWidth_1; }
	inline void set_charWidth_1(float value)
	{
		___charWidth_1 = value;
	}
};


// UnityEngine.UIVertex
struct UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A 
{
public:
	// UnityEngine.Vector3 UnityEngine.UIVertex::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Vector3 UnityEngine.UIVertex::normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normal_1;
	// UnityEngine.Vector4 UnityEngine.UIVertex::tangent
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___tangent_2;
	// UnityEngine.Color32 UnityEngine.UIVertex::color
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_3;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv0
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv0_4;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv1
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv1_5;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv2
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv2_6;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv3
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv3_7;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_normal_1() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_normal_1() const { return ___normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_normal_1() { return &___normal_1; }
	inline void set_normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___normal_1 = value;
	}

	inline static int32_t get_offset_of_tangent_2() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___tangent_2)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_tangent_2() const { return ___tangent_2; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_tangent_2() { return &___tangent_2; }
	inline void set_tangent_2(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___tangent_2 = value;
	}

	inline static int32_t get_offset_of_color_3() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___color_3)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_color_3() const { return ___color_3; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_color_3() { return &___color_3; }
	inline void set_color_3(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___color_3 = value;
	}

	inline static int32_t get_offset_of_uv0_4() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___uv0_4)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_uv0_4() const { return ___uv0_4; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_uv0_4() { return &___uv0_4; }
	inline void set_uv0_4(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___uv0_4 = value;
	}

	inline static int32_t get_offset_of_uv1_5() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___uv1_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_uv1_5() const { return ___uv1_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_uv1_5() { return &___uv1_5; }
	inline void set_uv1_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___uv1_5 = value;
	}

	inline static int32_t get_offset_of_uv2_6() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___uv2_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_uv2_6() const { return ___uv2_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_uv2_6() { return &___uv2_6; }
	inline void set_uv2_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___uv2_6 = value;
	}

	inline static int32_t get_offset_of_uv3_7() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___uv3_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_uv3_7() const { return ___uv3_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_uv3_7() { return &___uv3_7; }
	inline void set_uv3_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___uv3_7 = value;
	}
};

struct UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_StaticFields
{
public:
	// UnityEngine.Color32 UnityEngine.UIVertex::s_DefaultColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___s_DefaultColor_8;
	// UnityEngine.Vector4 UnityEngine.UIVertex::s_DefaultTangent
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___s_DefaultTangent_9;
	// UnityEngine.UIVertex UnityEngine.UIVertex::simpleVert
	UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  ___simpleVert_10;

public:
	inline static int32_t get_offset_of_s_DefaultColor_8() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_StaticFields, ___s_DefaultColor_8)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_s_DefaultColor_8() const { return ___s_DefaultColor_8; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_s_DefaultColor_8() { return &___s_DefaultColor_8; }
	inline void set_s_DefaultColor_8(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___s_DefaultColor_8 = value;
	}

	inline static int32_t get_offset_of_s_DefaultTangent_9() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_StaticFields, ___s_DefaultTangent_9)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_s_DefaultTangent_9() const { return ___s_DefaultTangent_9; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_s_DefaultTangent_9() { return &___s_DefaultTangent_9; }
	inline void set_s_DefaultTangent_9(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___s_DefaultTangent_9 = value;
	}

	inline static int32_t get_offset_of_simpleVert_10() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_StaticFields, ___simpleVert_10)); }
	inline UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  get_simpleVert_10() const { return ___simpleVert_10; }
	inline UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A * get_address_of_simpleVert_10() { return &___simpleVert_10; }
	inline void set_simpleVert_10(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  value)
	{
		___simpleVert_10 = value;
	}
};


// UnityEngine.UIElements.Vertex
struct Vertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E 
{
public:
	// UnityEngine.Vector3 UnityEngine.UIElements.Vertex::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_1;
	// UnityEngine.Color32 UnityEngine.UIElements.Vertex::tint
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___tint_2;
	// UnityEngine.Vector2 UnityEngine.UIElements.Vertex::uv
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___uv_3;
	// UnityEngine.Color32 UnityEngine.UIElements.Vertex::xformClipPages
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___xformClipPages_4;
	// UnityEngine.Color32 UnityEngine.UIElements.Vertex::ids
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___ids_5;
	// UnityEngine.Color32 UnityEngine.UIElements.Vertex::flags
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___flags_6;
	// UnityEngine.Color32 UnityEngine.UIElements.Vertex::opacityPageSettingIndex
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___opacityPageSettingIndex_7;
	// System.Single UnityEngine.UIElements.Vertex::textureId
	float ___textureId_8;
	// UnityEngine.Color32 UnityEngine.UIElements.Vertex::idsFlags
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___idsFlags_9;

public:
	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(Vertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E, ___position_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_1() const { return ___position_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_1 = value;
	}

	inline static int32_t get_offset_of_tint_2() { return static_cast<int32_t>(offsetof(Vertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E, ___tint_2)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_tint_2() const { return ___tint_2; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_tint_2() { return &___tint_2; }
	inline void set_tint_2(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___tint_2 = value;
	}

	inline static int32_t get_offset_of_uv_3() { return static_cast<int32_t>(offsetof(Vertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E, ___uv_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_uv_3() const { return ___uv_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_uv_3() { return &___uv_3; }
	inline void set_uv_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___uv_3 = value;
	}

	inline static int32_t get_offset_of_xformClipPages_4() { return static_cast<int32_t>(offsetof(Vertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E, ___xformClipPages_4)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_xformClipPages_4() const { return ___xformClipPages_4; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_xformClipPages_4() { return &___xformClipPages_4; }
	inline void set_xformClipPages_4(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___xformClipPages_4 = value;
	}

	inline static int32_t get_offset_of_ids_5() { return static_cast<int32_t>(offsetof(Vertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E, ___ids_5)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_ids_5() const { return ___ids_5; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_ids_5() { return &___ids_5; }
	inline void set_ids_5(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___ids_5 = value;
	}

	inline static int32_t get_offset_of_flags_6() { return static_cast<int32_t>(offsetof(Vertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E, ___flags_6)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_flags_6() const { return ___flags_6; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_flags_6() { return &___flags_6; }
	inline void set_flags_6(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___flags_6 = value;
	}

	inline static int32_t get_offset_of_opacityPageSettingIndex_7() { return static_cast<int32_t>(offsetof(Vertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E, ___opacityPageSettingIndex_7)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_opacityPageSettingIndex_7() const { return ___opacityPageSettingIndex_7; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_opacityPageSettingIndex_7() { return &___opacityPageSettingIndex_7; }
	inline void set_opacityPageSettingIndex_7(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___opacityPageSettingIndex_7 = value;
	}

	inline static int32_t get_offset_of_textureId_8() { return static_cast<int32_t>(offsetof(Vertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E, ___textureId_8)); }
	inline float get_textureId_8() const { return ___textureId_8; }
	inline float* get_address_of_textureId_8() { return &___textureId_8; }
	inline void set_textureId_8(float value)
	{
		___textureId_8 = value;
	}

	inline static int32_t get_offset_of_idsFlags_9() { return static_cast<int32_t>(offsetof(Vertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E, ___idsFlags_9)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_idsFlags_9() const { return ___idsFlags_9; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_idsFlags_9() { return &___idsFlags_9; }
	inline void set_idsFlags_9(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___idsFlags_9 = value;
	}
};

struct Vertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E_StaticFields
{
public:
	// System.Single UnityEngine.UIElements.Vertex::nearZ
	float ___nearZ_0;

public:
	inline static int32_t get_offset_of_nearZ_0() { return static_cast<int32_t>(offsetof(Vertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E_StaticFields, ___nearZ_0)); }
	inline float get_nearZ_0() const { return ___nearZ_0; }
	inline float* get_address_of_nearZ_0() { return &___nearZ_0; }
	inline void set_nearZ_0(float value)
	{
		___nearZ_0 = value;
	}
};


// UnityEngine.Camera/RenderRequestMode
struct RenderRequestMode_tCB120B82DED523ADBA2D6093A1A8ABF17D94A313 
{
public:
	// System.Int32 UnityEngine.Camera/RenderRequestMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderRequestMode_tCB120B82DED523ADBA2D6093A1A8ABF17D94A313, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Camera/RenderRequestOutputSpace
struct RenderRequestOutputSpace_t8EB93E4720B2D1BAB624A04ADB473C37C7F3D6A5 
{
public:
	// System.Int32 UnityEngine.Camera/RenderRequestOutputSpace::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderRequestOutputSpace_t8EB93E4720B2D1BAB624A04ADB473C37C7F3D6A5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.CameraDevice/CameraDeviceMode
struct CameraDeviceMode_t2000038B567D6BB9C5CE6FC489A3E4E62729CC43 
{
public:
	// System.Int32 Vuforia.CameraDevice/CameraDeviceMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraDeviceMode_t2000038B567D6BB9C5CE6FC489A3E4E62729CC43, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.Length/Unit
struct Unit_t404BDC0B9D436EDDCC7891B48C4DCE2FCF7098AB 
{
public:
	// System.Int32 UnityEngine.UIElements.Length/Unit::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Unit_t404BDC0B9D436EDDCC7891B48C4DCE2FCF7098AB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/Frame
struct Frame_t277B57D2C572A3B179CEA0357869DB245F52128D 
{
public:
	// System.String TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/Frame::filename
	String_t* ___filename_0;
	// TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/SpriteFrame TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/Frame::frame
	SpriteFrame_t5B610F44C5943B89962CC8CC4245EECDE29E94D9  ___frame_1;
	// System.Boolean TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/Frame::rotated
	bool ___rotated_2;
	// System.Boolean TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/Frame::trimmed
	bool ___trimmed_3;
	// TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/SpriteFrame TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/Frame::spriteSourceSize
	SpriteFrame_t5B610F44C5943B89962CC8CC4245EECDE29E94D9  ___spriteSourceSize_4;
	// TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/SpriteSize TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/Frame::sourceSize
	SpriteSize_t7D47B39A52139B8CD3CE7F233C48981F70275A3D  ___sourceSize_5;
	// UnityEngine.Vector2 TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/Frame::pivot
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pivot_6;

public:
	inline static int32_t get_offset_of_filename_0() { return static_cast<int32_t>(offsetof(Frame_t277B57D2C572A3B179CEA0357869DB245F52128D, ___filename_0)); }
	inline String_t* get_filename_0() const { return ___filename_0; }
	inline String_t** get_address_of_filename_0() { return &___filename_0; }
	inline void set_filename_0(String_t* value)
	{
		___filename_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___filename_0), (void*)value);
	}

	inline static int32_t get_offset_of_frame_1() { return static_cast<int32_t>(offsetof(Frame_t277B57D2C572A3B179CEA0357869DB245F52128D, ___frame_1)); }
	inline SpriteFrame_t5B610F44C5943B89962CC8CC4245EECDE29E94D9  get_frame_1() const { return ___frame_1; }
	inline SpriteFrame_t5B610F44C5943B89962CC8CC4245EECDE29E94D9 * get_address_of_frame_1() { return &___frame_1; }
	inline void set_frame_1(SpriteFrame_t5B610F44C5943B89962CC8CC4245EECDE29E94D9  value)
	{
		___frame_1 = value;
	}

	inline static int32_t get_offset_of_rotated_2() { return static_cast<int32_t>(offsetof(Frame_t277B57D2C572A3B179CEA0357869DB245F52128D, ___rotated_2)); }
	inline bool get_rotated_2() const { return ___rotated_2; }
	inline bool* get_address_of_rotated_2() { return &___rotated_2; }
	inline void set_rotated_2(bool value)
	{
		___rotated_2 = value;
	}

	inline static int32_t get_offset_of_trimmed_3() { return static_cast<int32_t>(offsetof(Frame_t277B57D2C572A3B179CEA0357869DB245F52128D, ___trimmed_3)); }
	inline bool get_trimmed_3() const { return ___trimmed_3; }
	inline bool* get_address_of_trimmed_3() { return &___trimmed_3; }
	inline void set_trimmed_3(bool value)
	{
		___trimmed_3 = value;
	}

	inline static int32_t get_offset_of_spriteSourceSize_4() { return static_cast<int32_t>(offsetof(Frame_t277B57D2C572A3B179CEA0357869DB245F52128D, ___spriteSourceSize_4)); }
	inline SpriteFrame_t5B610F44C5943B89962CC8CC4245EECDE29E94D9  get_spriteSourceSize_4() const { return ___spriteSourceSize_4; }
	inline SpriteFrame_t5B610F44C5943B89962CC8CC4245EECDE29E94D9 * get_address_of_spriteSourceSize_4() { return &___spriteSourceSize_4; }
	inline void set_spriteSourceSize_4(SpriteFrame_t5B610F44C5943B89962CC8CC4245EECDE29E94D9  value)
	{
		___spriteSourceSize_4 = value;
	}

	inline static int32_t get_offset_of_sourceSize_5() { return static_cast<int32_t>(offsetof(Frame_t277B57D2C572A3B179CEA0357869DB245F52128D, ___sourceSize_5)); }
	inline SpriteSize_t7D47B39A52139B8CD3CE7F233C48981F70275A3D  get_sourceSize_5() const { return ___sourceSize_5; }
	inline SpriteSize_t7D47B39A52139B8CD3CE7F233C48981F70275A3D * get_address_of_sourceSize_5() { return &___sourceSize_5; }
	inline void set_sourceSize_5(SpriteSize_t7D47B39A52139B8CD3CE7F233C48981F70275A3D  value)
	{
		___sourceSize_5 = value;
	}

	inline static int32_t get_offset_of_pivot_6() { return static_cast<int32_t>(offsetof(Frame_t277B57D2C572A3B179CEA0357869DB245F52128D, ___pivot_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_pivot_6() const { return ___pivot_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_pivot_6() { return &___pivot_6; }
	inline void set_pivot_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___pivot_6 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/Frame
struct Frame_t277B57D2C572A3B179CEA0357869DB245F52128D_marshaled_pinvoke
{
	char* ___filename_0;
	SpriteFrame_t5B610F44C5943B89962CC8CC4245EECDE29E94D9  ___frame_1;
	int32_t ___rotated_2;
	int32_t ___trimmed_3;
	SpriteFrame_t5B610F44C5943B89962CC8CC4245EECDE29E94D9  ___spriteSourceSize_4;
	SpriteSize_t7D47B39A52139B8CD3CE7F233C48981F70275A3D  ___sourceSize_5;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pivot_6;
};
// Native definition for COM marshalling of TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/Frame
struct Frame_t277B57D2C572A3B179CEA0357869DB245F52128D_marshaled_com
{
	Il2CppChar* ___filename_0;
	SpriteFrame_t5B610F44C5943B89962CC8CC4245EECDE29E94D9  ___frame_1;
	int32_t ___rotated_2;
	int32_t ___trimmed_3;
	SpriteFrame_t5B610F44C5943B89962CC8CC4245EECDE29E94D9  ___spriteSourceSize_4;
	SpriteSize_t7D47B39A52139B8CD3CE7F233C48981F70275A3D  ___sourceSize_5;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pivot_6;
};

// Vuforia.TrackerData/PoseData
#pragma pack(push, tp, 1)
struct PoseData_t68165404D1ADE5AB5E1488D26EB1751C4CF09FFD 
{
public:
	// UnityEngine.Vector3 Vuforia.TrackerData/PoseData::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Quaternion Vuforia.TrackerData/PoseData::orientation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___orientation_1;
	// System.Int32 Vuforia.TrackerData/PoseData::unused
	int32_t ___unused_2;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(PoseData_t68165404D1ADE5AB5E1488D26EB1751C4CF09FFD, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_orientation_1() { return static_cast<int32_t>(offsetof(PoseData_t68165404D1ADE5AB5E1488D26EB1751C4CF09FFD, ___orientation_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_orientation_1() const { return ___orientation_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_orientation_1() { return &___orientation_1; }
	inline void set_orientation_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___orientation_1 = value;
	}

	inline static int32_t get_offset_of_unused_2() { return static_cast<int32_t>(offsetof(PoseData_t68165404D1ADE5AB5E1488D26EB1751C4CF09FFD, ___unused_2)); }
	inline int32_t get_unused_2() const { return ___unused_2; }
	inline int32_t* get_address_of_unused_2() { return &___unused_2; }
	inline void set_unused_2(int32_t value)
	{
		___unused_2 = value;
	}
};
#pragma pack(pop, tp)


// Vuforia.VuforiaRuntimeUtilities/InitializableBool
struct InitializableBool_t48515D90F8B54615F4E3D5B0C9F3C303267CA986 
{
public:
	// System.Int32 Vuforia.VuforiaRuntimeUtilities/InitializableBool::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InitializableBool_t48515D90F8B54615F4E3D5B0C9F3C303267CA986, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.CameraDevice/CameraField/DataType
struct DataType_t46BAFA9F5003E5609E2136F080BDCDF058CD35FA 
{
public:
	// System.Int32 Vuforia.CameraDevice/CameraField/DataType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DataType_t46BAFA9F5003E5609E2136F080BDCDF058CD35FA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.UIElements.UIR.GfxUpdateBufferRange>
struct AlignOfHelper_1_t5DE1EB4221794F91CCD08FDC932F706301EEF2DB 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	GfxUpdateBufferRange_t11F569267024B2295C7F30C6E951754053C03D66  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t5DE1EB4221794F91CCD08FDC932F706301EEF2DB, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t5DE1EB4221794F91CCD08FDC932F706301EEF2DB, ___data_1)); }
	inline GfxUpdateBufferRange_t11F569267024B2295C7F30C6E951754053C03D66  get_data_1() const { return ___data_1; }
	inline GfxUpdateBufferRange_t11F569267024B2295C7F30C6E951754053C03D66 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(GfxUpdateBufferRange_t11F569267024B2295C7F30C6E951754053C03D66  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Plane>
struct AlignOfHelper_1_t844B26E46E7279186C852FA310311C251B480893 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t844B26E46E7279186C852FA310311C251B480893, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t844B26E46E7279186C852FA310311C251B480893, ___data_1)); }
	inline Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  get_data_1() const { return ___data_1; }
	inline Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.UIElements.Vertex>
struct AlignOfHelper_1_t8B9F428AACB5CF17C2C6A66BF1ED681D7C56A9DD 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	Vertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t8B9F428AACB5CF17C2C6A66BF1ED681D7C56A9DD, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t8B9F428AACB5CF17C2C6A66BF1ED681D7C56A9DD, ___data_1)); }
	inline Vertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E  get_data_1() const { return ___data_1; }
	inline Vertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(Vertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E  value)
	{
		___data_1 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.UIElements.Length
struct Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 
{
public:
	// System.Single UnityEngine.UIElements.Length::m_Value
	float ___m_Value_0;
	// UnityEngine.UIElements.Length/Unit UnityEngine.UIElements.Length::m_Unit
	int32_t ___m_Unit_1;

public:
	inline static int32_t get_offset_of_m_Value_0() { return static_cast<int32_t>(offsetof(Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696, ___m_Value_0)); }
	inline float get_m_Value_0() const { return ___m_Value_0; }
	inline float* get_address_of_m_Value_0() { return &___m_Value_0; }
	inline void set_m_Value_0(float value)
	{
		___m_Value_0 = value;
	}

	inline static int32_t get_offset_of_m_Unit_1() { return static_cast<int32_t>(offsetof(Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696, ___m_Unit_1)); }
	inline int32_t get_m_Unit_1() const { return ___m_Unit_1; }
	inline int32_t* get_address_of_m_Unit_1() { return &___m_Unit_1; }
	inline void set_m_Unit_1(int32_t value)
	{
		___m_Unit_1 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.LightDataGI
struct LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 
{
public:
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.LightDataGI::instanceID
	int32_t ___instanceID_0;
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.LightDataGI::cookieID
	int32_t ___cookieID_1;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::cookieScale
	float ___cookieScale_2;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightDataGI::color
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___color_3;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightDataGI::indirectColor
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___indirectColor_4;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.LightDataGI::orientation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___orientation_5;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.LightDataGI::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::range
	float ___range_7;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::coneAngle
	float ___coneAngle_8;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::innerConeAngle
	float ___innerConeAngle_9;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::shape0
	float ___shape0_10;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::shape1
	float ___shape1_11;
	// UnityEngine.Experimental.GlobalIllumination.LightType UnityEngine.Experimental.GlobalIllumination.LightDataGI::type
	uint8_t ___type_12;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.LightDataGI::mode
	uint8_t ___mode_13;
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightDataGI::shadow
	uint8_t ___shadow_14;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.LightDataGI::falloff
	uint8_t ___falloff_15;

public:
	inline static int32_t get_offset_of_instanceID_0() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___instanceID_0)); }
	inline int32_t get_instanceID_0() const { return ___instanceID_0; }
	inline int32_t* get_address_of_instanceID_0() { return &___instanceID_0; }
	inline void set_instanceID_0(int32_t value)
	{
		___instanceID_0 = value;
	}

	inline static int32_t get_offset_of_cookieID_1() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___cookieID_1)); }
	inline int32_t get_cookieID_1() const { return ___cookieID_1; }
	inline int32_t* get_address_of_cookieID_1() { return &___cookieID_1; }
	inline void set_cookieID_1(int32_t value)
	{
		___cookieID_1 = value;
	}

	inline static int32_t get_offset_of_cookieScale_2() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___cookieScale_2)); }
	inline float get_cookieScale_2() const { return ___cookieScale_2; }
	inline float* get_address_of_cookieScale_2() { return &___cookieScale_2; }
	inline void set_cookieScale_2(float value)
	{
		___cookieScale_2 = value;
	}

	inline static int32_t get_offset_of_color_3() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___color_3)); }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  get_color_3() const { return ___color_3; }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 * get_address_of_color_3() { return &___color_3; }
	inline void set_color_3(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  value)
	{
		___color_3 = value;
	}

	inline static int32_t get_offset_of_indirectColor_4() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___indirectColor_4)); }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  get_indirectColor_4() const { return ___indirectColor_4; }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 * get_address_of_indirectColor_4() { return &___indirectColor_4; }
	inline void set_indirectColor_4(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  value)
	{
		___indirectColor_4 = value;
	}

	inline static int32_t get_offset_of_orientation_5() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___orientation_5)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_orientation_5() const { return ___orientation_5; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_orientation_5() { return &___orientation_5; }
	inline void set_orientation_5(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___orientation_5 = value;
	}

	inline static int32_t get_offset_of_position_6() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___position_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_6() const { return ___position_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_6() { return &___position_6; }
	inline void set_position_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_6 = value;
	}

	inline static int32_t get_offset_of_range_7() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___range_7)); }
	inline float get_range_7() const { return ___range_7; }
	inline float* get_address_of_range_7() { return &___range_7; }
	inline void set_range_7(float value)
	{
		___range_7 = value;
	}

	inline static int32_t get_offset_of_coneAngle_8() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___coneAngle_8)); }
	inline float get_coneAngle_8() const { return ___coneAngle_8; }
	inline float* get_address_of_coneAngle_8() { return &___coneAngle_8; }
	inline void set_coneAngle_8(float value)
	{
		___coneAngle_8 = value;
	}

	inline static int32_t get_offset_of_innerConeAngle_9() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___innerConeAngle_9)); }
	inline float get_innerConeAngle_9() const { return ___innerConeAngle_9; }
	inline float* get_address_of_innerConeAngle_9() { return &___innerConeAngle_9; }
	inline void set_innerConeAngle_9(float value)
	{
		___innerConeAngle_9 = value;
	}

	inline static int32_t get_offset_of_shape0_10() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___shape0_10)); }
	inline float get_shape0_10() const { return ___shape0_10; }
	inline float* get_address_of_shape0_10() { return &___shape0_10; }
	inline void set_shape0_10(float value)
	{
		___shape0_10 = value;
	}

	inline static int32_t get_offset_of_shape1_11() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___shape1_11)); }
	inline float get_shape1_11() const { return ___shape1_11; }
	inline float* get_address_of_shape1_11() { return &___shape1_11; }
	inline void set_shape1_11(float value)
	{
		___shape1_11 = value;
	}

	inline static int32_t get_offset_of_type_12() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___type_12)); }
	inline uint8_t get_type_12() const { return ___type_12; }
	inline uint8_t* get_address_of_type_12() { return &___type_12; }
	inline void set_type_12(uint8_t value)
	{
		___type_12 = value;
	}

	inline static int32_t get_offset_of_mode_13() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___mode_13)); }
	inline uint8_t get_mode_13() const { return ___mode_13; }
	inline uint8_t* get_address_of_mode_13() { return &___mode_13; }
	inline void set_mode_13(uint8_t value)
	{
		___mode_13 = value;
	}

	inline static int32_t get_offset_of_shadow_14() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___shadow_14)); }
	inline uint8_t get_shadow_14() const { return ___shadow_14; }
	inline uint8_t* get_address_of_shadow_14() { return &___shadow_14; }
	inline void set_shadow_14(uint8_t value)
	{
		___shadow_14 = value;
	}

	inline static int32_t get_offset_of_falloff_15() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___falloff_15)); }
	inline uint8_t get_falloff_15() const { return ___falloff_15; }
	inline uint8_t* get_address_of_falloff_15() { return &___falloff_15; }
	inline void set_falloff_15(uint8_t value)
	{
		___falloff_15 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.UIElements.StyleSelectorPart
struct StyleSelectorPart_t707EDC970FC0F3E91E56DCBC178672A120426D54 
{
public:
	// System.String UnityEngine.UIElements.StyleSelectorPart::m_Value
	String_t* ___m_Value_0;
	// UnityEngine.UIElements.StyleSelectorType UnityEngine.UIElements.StyleSelectorPart::m_Type
	int32_t ___m_Type_1;
	// System.Object UnityEngine.UIElements.StyleSelectorPart::tempData
	RuntimeObject * ___tempData_2;

public:
	inline static int32_t get_offset_of_m_Value_0() { return static_cast<int32_t>(offsetof(StyleSelectorPart_t707EDC970FC0F3E91E56DCBC178672A120426D54, ___m_Value_0)); }
	inline String_t* get_m_Value_0() const { return ___m_Value_0; }
	inline String_t** get_address_of_m_Value_0() { return &___m_Value_0; }
	inline void set_m_Value_0(String_t* value)
	{
		___m_Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Value_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_1() { return static_cast<int32_t>(offsetof(StyleSelectorPart_t707EDC970FC0F3E91E56DCBC178672A120426D54, ___m_Type_1)); }
	inline int32_t get_m_Type_1() const { return ___m_Type_1; }
	inline int32_t* get_address_of_m_Type_1() { return &___m_Type_1; }
	inline void set_m_Type_1(int32_t value)
	{
		___m_Type_1 = value;
	}

	inline static int32_t get_offset_of_tempData_2() { return static_cast<int32_t>(offsetof(StyleSelectorPart_t707EDC970FC0F3E91E56DCBC178672A120426D54, ___tempData_2)); }
	inline RuntimeObject * get_tempData_2() const { return ___tempData_2; }
	inline RuntimeObject ** get_address_of_tempData_2() { return &___tempData_2; }
	inline void set_tempData_2(RuntimeObject * value)
	{
		___tempData_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tempData_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UIElements.StyleSelectorPart
struct StyleSelectorPart_t707EDC970FC0F3E91E56DCBC178672A120426D54_marshaled_pinvoke
{
	char* ___m_Value_0;
	int32_t ___m_Type_1;
	Il2CppIUnknown* ___tempData_2;
};
// Native definition for COM marshalling of UnityEngine.UIElements.StyleSelectorPart
struct StyleSelectorPart_t707EDC970FC0F3E91E56DCBC178672A120426D54_marshaled_com
{
	Il2CppChar* ___m_Value_0;
	int32_t ___m_Type_1;
	Il2CppIUnknown* ___tempData_2;
};

// UnityEngine.UIElements.StyleValueHandle
struct StyleValueHandle_t46AFAF3564D6DF2EA2739A1D85438355478AD185 
{
public:
	// UnityEngine.UIElements.StyleValueType UnityEngine.UIElements.StyleValueHandle::m_ValueType
	int32_t ___m_ValueType_0;
	// System.Int32 UnityEngine.UIElements.StyleValueHandle::valueIndex
	int32_t ___valueIndex_1;

public:
	inline static int32_t get_offset_of_m_ValueType_0() { return static_cast<int32_t>(offsetof(StyleValueHandle_t46AFAF3564D6DF2EA2739A1D85438355478AD185, ___m_ValueType_0)); }
	inline int32_t get_m_ValueType_0() const { return ___m_ValueType_0; }
	inline int32_t* get_address_of_m_ValueType_0() { return &___m_ValueType_0; }
	inline void set_m_ValueType_0(int32_t value)
	{
		___m_ValueType_0 = value;
	}

	inline static int32_t get_offset_of_valueIndex_1() { return static_cast<int32_t>(offsetof(StyleValueHandle_t46AFAF3564D6DF2EA2739A1D85438355478AD185, ___valueIndex_1)); }
	inline int32_t get_valueIndex_1() const { return ___valueIndex_1; }
	inline int32_t* get_address_of_valueIndex_1() { return &___valueIndex_1; }
	inline void set_valueIndex_1(int32_t value)
	{
		___valueIndex_1 = value;
	}
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Vuforia.VuforiaRuntimeUtilities
struct VuforiaRuntimeUtilities_tA3A3FC951533F58532B1EB9E2A0A2E49E5AEF0CB  : public RuntimeObject
{
public:

public:
};

struct VuforiaRuntimeUtilities_tA3A3FC951533F58532B1EB9E2A0A2E49E5AEF0CB_StaticFields
{
public:
	// Vuforia.VuforiaRuntimeUtilities/InitializableBool Vuforia.VuforiaRuntimeUtilities::sWebCamUsed
	int32_t ___sWebCamUsed_0;
	// Vuforia.VuforiaRuntimeUtilities/InitializableBool Vuforia.VuforiaRuntimeUtilities::sNativePluginSupport
	int32_t ___sNativePluginSupport_1;

public:
	inline static int32_t get_offset_of_sWebCamUsed_0() { return static_cast<int32_t>(offsetof(VuforiaRuntimeUtilities_tA3A3FC951533F58532B1EB9E2A0A2E49E5AEF0CB_StaticFields, ___sWebCamUsed_0)); }
	inline int32_t get_sWebCamUsed_0() const { return ___sWebCamUsed_0; }
	inline int32_t* get_address_of_sWebCamUsed_0() { return &___sWebCamUsed_0; }
	inline void set_sWebCamUsed_0(int32_t value)
	{
		___sWebCamUsed_0 = value;
	}

	inline static int32_t get_offset_of_sNativePluginSupport_1() { return static_cast<int32_t>(offsetof(VuforiaRuntimeUtilities_tA3A3FC951533F58532B1EB9E2A0A2E49E5AEF0CB_StaticFields, ___sNativePluginSupport_1)); }
	inline int32_t get_sNativePluginSupport_1() const { return ___sNativePluginSupport_1; }
	inline int32_t* get_address_of_sNativePluginSupport_1() { return &___sNativePluginSupport_1; }
	inline void set_sNativePluginSupport_1(int32_t value)
	{
		___sNativePluginSupport_1 = value;
	}
};


// UnityEngine.Camera/RenderRequest
struct RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94 
{
public:
	// UnityEngine.Camera/RenderRequestMode UnityEngine.Camera/RenderRequest::m_CameraRenderMode
	int32_t ___m_CameraRenderMode_0;
	// UnityEngine.RenderTexture UnityEngine.Camera/RenderRequest::m_ResultRT
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___m_ResultRT_1;
	// UnityEngine.Camera/RenderRequestOutputSpace UnityEngine.Camera/RenderRequest::m_OutputSpace
	int32_t ___m_OutputSpace_2;

public:
	inline static int32_t get_offset_of_m_CameraRenderMode_0() { return static_cast<int32_t>(offsetof(RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94, ___m_CameraRenderMode_0)); }
	inline int32_t get_m_CameraRenderMode_0() const { return ___m_CameraRenderMode_0; }
	inline int32_t* get_address_of_m_CameraRenderMode_0() { return &___m_CameraRenderMode_0; }
	inline void set_m_CameraRenderMode_0(int32_t value)
	{
		___m_CameraRenderMode_0 = value;
	}

	inline static int32_t get_offset_of_m_ResultRT_1() { return static_cast<int32_t>(offsetof(RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94, ___m_ResultRT_1)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_m_ResultRT_1() const { return ___m_ResultRT_1; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_m_ResultRT_1() { return &___m_ResultRT_1; }
	inline void set_m_ResultRT_1(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___m_ResultRT_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ResultRT_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_OutputSpace_2() { return static_cast<int32_t>(offsetof(RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94, ___m_OutputSpace_2)); }
	inline int32_t get_m_OutputSpace_2() const { return ___m_OutputSpace_2; }
	inline int32_t* get_address_of_m_OutputSpace_2() { return &___m_OutputSpace_2; }
	inline void set_m_OutputSpace_2(int32_t value)
	{
		___m_OutputSpace_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Camera/RenderRequest
struct RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_marshaled_pinvoke
{
	int32_t ___m_CameraRenderMode_0;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___m_ResultRT_1;
	int32_t ___m_OutputSpace_2;
};
// Native definition for COM marshalling of UnityEngine.Camera/RenderRequest
struct RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_marshaled_com
{
	int32_t ___m_CameraRenderMode_0;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___m_ResultRT_1;
	int32_t ___m_OutputSpace_2;
};

// Vuforia.CameraDevice/CameraField
struct CameraField_t1355F38B3A588F82A285DCC14160FB6578354A7E 
{
public:
	// Vuforia.CameraDevice/CameraField/DataType Vuforia.CameraDevice/CameraField::Type
	int32_t ___Type_0;
	// System.String Vuforia.CameraDevice/CameraField::Key
	String_t* ___Key_1;

public:
	inline static int32_t get_offset_of_Type_0() { return static_cast<int32_t>(offsetof(CameraField_t1355F38B3A588F82A285DCC14160FB6578354A7E, ___Type_0)); }
	inline int32_t get_Type_0() const { return ___Type_0; }
	inline int32_t* get_address_of_Type_0() { return &___Type_0; }
	inline void set_Type_0(int32_t value)
	{
		___Type_0 = value;
	}

	inline static int32_t get_offset_of_Key_1() { return static_cast<int32_t>(offsetof(CameraField_t1355F38B3A588F82A285DCC14160FB6578354A7E, ___Key_1)); }
	inline String_t* get_Key_1() const { return ___Key_1; }
	inline String_t** get_address_of_Key_1() { return &___Key_1; }
	inline void set_Key_1(String_t* value)
	{
		___Key_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Key_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Vuforia.CameraDevice/CameraField
struct CameraField_t1355F38B3A588F82A285DCC14160FB6578354A7E_marshaled_pinvoke
{
	int32_t ___Type_0;
	char* ___Key_1;
};
// Native definition for COM marshalling of Vuforia.CameraDevice/CameraField
struct CameraField_t1355F38B3A588F82A285DCC14160FB6578354A7E_marshaled_com
{
	int32_t ___Type_0;
	Il2CppChar* ___Key_1;
};

// Vuforia.TrackerData/TrackableResultData
#pragma pack(push, tp, 1)
struct TrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87 
{
public:
	// Vuforia.TrackerData/PoseData Vuforia.TrackerData/TrackableResultData::pose
	PoseData_t68165404D1ADE5AB5E1488D26EB1751C4CF09FFD  ___pose_0;
	// System.Double Vuforia.TrackerData/TrackableResultData::timeStamp
	double ___timeStamp_1;
	// System.Int32 Vuforia.TrackerData/TrackableResultData::statusInteger
	int32_t ___statusInteger_2;
	// System.Int32 Vuforia.TrackerData/TrackableResultData::statusInfo
	int32_t ___statusInfo_3;
	// System.Int32 Vuforia.TrackerData/TrackableResultData::id
	int32_t ___id_4;
	// System.Int32 Vuforia.TrackerData/TrackableResultData::unused
	int32_t ___unused_5;

public:
	inline static int32_t get_offset_of_pose_0() { return static_cast<int32_t>(offsetof(TrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87, ___pose_0)); }
	inline PoseData_t68165404D1ADE5AB5E1488D26EB1751C4CF09FFD  get_pose_0() const { return ___pose_0; }
	inline PoseData_t68165404D1ADE5AB5E1488D26EB1751C4CF09FFD * get_address_of_pose_0() { return &___pose_0; }
	inline void set_pose_0(PoseData_t68165404D1ADE5AB5E1488D26EB1751C4CF09FFD  value)
	{
		___pose_0 = value;
	}

	inline static int32_t get_offset_of_timeStamp_1() { return static_cast<int32_t>(offsetof(TrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87, ___timeStamp_1)); }
	inline double get_timeStamp_1() const { return ___timeStamp_1; }
	inline double* get_address_of_timeStamp_1() { return &___timeStamp_1; }
	inline void set_timeStamp_1(double value)
	{
		___timeStamp_1 = value;
	}

	inline static int32_t get_offset_of_statusInteger_2() { return static_cast<int32_t>(offsetof(TrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87, ___statusInteger_2)); }
	inline int32_t get_statusInteger_2() const { return ___statusInteger_2; }
	inline int32_t* get_address_of_statusInteger_2() { return &___statusInteger_2; }
	inline void set_statusInteger_2(int32_t value)
	{
		___statusInteger_2 = value;
	}

	inline static int32_t get_offset_of_statusInfo_3() { return static_cast<int32_t>(offsetof(TrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87, ___statusInfo_3)); }
	inline int32_t get_statusInfo_3() const { return ___statusInfo_3; }
	inline int32_t* get_address_of_statusInfo_3() { return &___statusInfo_3; }
	inline void set_statusInfo_3(int32_t value)
	{
		___statusInfo_3 = value;
	}

	inline static int32_t get_offset_of_id_4() { return static_cast<int32_t>(offsetof(TrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87, ___id_4)); }
	inline int32_t get_id_4() const { return ___id_4; }
	inline int32_t* get_address_of_id_4() { return &___id_4; }
	inline void set_id_4(int32_t value)
	{
		___id_4 = value;
	}

	inline static int32_t get_offset_of_unused_5() { return static_cast<int32_t>(offsetof(TrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87, ___unused_5)); }
	inline int32_t get_unused_5() const { return ___unused_5; }
	inline int32_t* get_address_of_unused_5() { return &___unused_5; }
	inline void set_unused_5(int32_t value)
	{
		___unused_5 = value;
	}
};
#pragma pack(pop, tp)


// Vuforia.VuforiaRuntimeUtilities/CameraState
struct CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF 
{
public:
	// System.Boolean Vuforia.VuforiaRuntimeUtilities/CameraState::<Initialized>k__BackingField
	bool ___U3CInitializedU3Ek__BackingField_0;
	// System.Boolean Vuforia.VuforiaRuntimeUtilities/CameraState::<Active>k__BackingField
	bool ___U3CActiveU3Ek__BackingField_1;
	// Vuforia.CameraDevice/CameraDeviceMode Vuforia.VuforiaRuntimeUtilities/CameraState::<DeviceMode>k__BackingField
	int32_t ___U3CDeviceModeU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CInitializedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF, ___U3CInitializedU3Ek__BackingField_0)); }
	inline bool get_U3CInitializedU3Ek__BackingField_0() const { return ___U3CInitializedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CInitializedU3Ek__BackingField_0() { return &___U3CInitializedU3Ek__BackingField_0; }
	inline void set_U3CInitializedU3Ek__BackingField_0(bool value)
	{
		___U3CInitializedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CActiveU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF, ___U3CActiveU3Ek__BackingField_1)); }
	inline bool get_U3CActiveU3Ek__BackingField_1() const { return ___U3CActiveU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CActiveU3Ek__BackingField_1() { return &___U3CActiveU3Ek__BackingField_1; }
	inline void set_U3CActiveU3Ek__BackingField_1(bool value)
	{
		___U3CActiveU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CDeviceModeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF, ___U3CDeviceModeU3Ek__BackingField_2)); }
	inline int32_t get_U3CDeviceModeU3Ek__BackingField_2() const { return ___U3CDeviceModeU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CDeviceModeU3Ek__BackingField_2() { return &___U3CDeviceModeU3Ek__BackingField_2; }
	inline void set_U3CDeviceModeU3Ek__BackingField_2(int32_t value)
	{
		___U3CDeviceModeU3Ek__BackingField_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Vuforia.VuforiaRuntimeUtilities/CameraState
struct CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF_marshaled_pinvoke
{
	int32_t ___U3CInitializedU3Ek__BackingField_0;
	int32_t ___U3CActiveU3Ek__BackingField_1;
	int32_t ___U3CDeviceModeU3Ek__BackingField_2;
};
// Native definition for COM marshalling of Vuforia.VuforiaRuntimeUtilities/CameraState
struct CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF_marshaled_com
{
	int32_t ___U3CInitializedU3Ek__BackingField_0;
	int32_t ___U3CActiveU3Ek__BackingField_1;
	int32_t ___U3CDeviceModeU3Ek__BackingField_2;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>
struct AlignOfHelper_1_tB73C2380111688DFF4CDA578F1D646B893208D17 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tB73C2380111688DFF4CDA578F1D646B893208D17, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tB73C2380111688DFF4CDA578F1D646B893208D17, ___data_1)); }
	inline LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  get_data_1() const { return ___data_1; }
	inline LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  value)
	{
		___data_1 = value;
	}
};


// System.Func`2<Vuforia.Tracker,System.Boolean>
struct Func_2_t63DF586CEF8E63E58DB61BCEFF46A67599E1FF00  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Type,Vuforia.Tracker>
struct Func_2_t1A83F16EE47CBC3B0129DA6B7E57E51C375C83F2  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.UIElements.StyleSheets.StylePropertyValue
struct StylePropertyValue_t5F204B329C961E7A1EA49F83333FCE27D4FDB2A8 
{
public:
	// UnityEngine.UIElements.StyleSheet UnityEngine.UIElements.StyleSheets.StylePropertyValue::sheet
	StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * ___sheet_0;
	// UnityEngine.UIElements.StyleValueHandle UnityEngine.UIElements.StyleSheets.StylePropertyValue::handle
	StyleValueHandle_t46AFAF3564D6DF2EA2739A1D85438355478AD185  ___handle_1;

public:
	inline static int32_t get_offset_of_sheet_0() { return static_cast<int32_t>(offsetof(StylePropertyValue_t5F204B329C961E7A1EA49F83333FCE27D4FDB2A8, ___sheet_0)); }
	inline StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * get_sheet_0() const { return ___sheet_0; }
	inline StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F ** get_address_of_sheet_0() { return &___sheet_0; }
	inline void set_sheet_0(StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * value)
	{
		___sheet_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sheet_0), (void*)value);
	}

	inline static int32_t get_offset_of_handle_1() { return static_cast<int32_t>(offsetof(StylePropertyValue_t5F204B329C961E7A1EA49F83333FCE27D4FDB2A8, ___handle_1)); }
	inline StyleValueHandle_t46AFAF3564D6DF2EA2739A1D85438355478AD185  get_handle_1() const { return ___handle_1; }
	inline StyleValueHandle_t46AFAF3564D6DF2EA2739A1D85438355478AD185 * get_address_of_handle_1() { return &___handle_1; }
	inline void set_handle_1(StyleValueHandle_t46AFAF3564D6DF2EA2739A1D85438355478AD185  value)
	{
		___handle_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UIElements.StyleSheets.StylePropertyValue
struct StylePropertyValue_t5F204B329C961E7A1EA49F83333FCE27D4FDB2A8_marshaled_pinvoke
{
	StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * ___sheet_0;
	StyleValueHandle_t46AFAF3564D6DF2EA2739A1D85438355478AD185  ___handle_1;
};
// Native definition for COM marshalling of UnityEngine.UIElements.StyleSheets.StylePropertyValue
struct StylePropertyValue_t5F204B329C961E7A1EA49F83333FCE27D4FDB2A8_marshaled_com
{
	StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * ___sheet_0;
	StyleValueHandle_t46AFAF3564D6DF2EA2739A1D85438355478AD185  ___handle_1;
};

// UnityEngine.UIElements.StyleSheets.StyleValue
struct StyleValue_t761E8EE98A6473F2FB9DE803BD8F14F047430FF5 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// UnityEngine.UIElements.StyleSheets.StylePropertyId UnityEngine.UIElements.StyleSheets.StyleValue::id
			int32_t ___id_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___id_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___keyword_1_OffsetPadding[4];
			// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleSheets.StyleValue::keyword
			int32_t ___keyword_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___keyword_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___keyword_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___number_2_OffsetPadding[8];
			// System.Single UnityEngine.UIElements.StyleSheets.StyleValue::number
			float ___number_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___number_2_OffsetPadding_forAlignmentOnly[8];
			float ___number_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___length_3_OffsetPadding[8];
			// UnityEngine.UIElements.Length UnityEngine.UIElements.StyleSheets.StyleValue::length
			Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  ___length_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___length_3_OffsetPadding_forAlignmentOnly[8];
			Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  ___length_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___color_4_OffsetPadding[8];
			// UnityEngine.Color UnityEngine.UIElements.StyleSheets.StyleValue::color
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___color_4_OffsetPadding_forAlignmentOnly[8];
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___resource_5_OffsetPadding[8];
			// System.Runtime.InteropServices.GCHandle UnityEngine.UIElements.StyleSheets.StyleValue::resource
			GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___resource_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___resource_5_OffsetPadding_forAlignmentOnly[8];
			GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___resource_5_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(StyleValue_t761E8EE98A6473F2FB9DE803BD8F14F047430FF5, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_keyword_1() { return static_cast<int32_t>(offsetof(StyleValue_t761E8EE98A6473F2FB9DE803BD8F14F047430FF5, ___keyword_1)); }
	inline int32_t get_keyword_1() const { return ___keyword_1; }
	inline int32_t* get_address_of_keyword_1() { return &___keyword_1; }
	inline void set_keyword_1(int32_t value)
	{
		___keyword_1 = value;
	}

	inline static int32_t get_offset_of_number_2() { return static_cast<int32_t>(offsetof(StyleValue_t761E8EE98A6473F2FB9DE803BD8F14F047430FF5, ___number_2)); }
	inline float get_number_2() const { return ___number_2; }
	inline float* get_address_of_number_2() { return &___number_2; }
	inline void set_number_2(float value)
	{
		___number_2 = value;
	}

	inline static int32_t get_offset_of_length_3() { return static_cast<int32_t>(offsetof(StyleValue_t761E8EE98A6473F2FB9DE803BD8F14F047430FF5, ___length_3)); }
	inline Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  get_length_3() const { return ___length_3; }
	inline Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 * get_address_of_length_3() { return &___length_3; }
	inline void set_length_3(Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  value)
	{
		___length_3 = value;
	}

	inline static int32_t get_offset_of_color_4() { return static_cast<int32_t>(offsetof(StyleValue_t761E8EE98A6473F2FB9DE803BD8F14F047430FF5, ___color_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_color_4() const { return ___color_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_color_4() { return &___color_4; }
	inline void set_color_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___color_4 = value;
	}

	inline static int32_t get_offset_of_resource_5() { return static_cast<int32_t>(offsetof(StyleValue_t761E8EE98A6473F2FB9DE803BD8F14F047430FF5, ___resource_5)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get_resource_5() const { return ___resource_5; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of_resource_5() { return &___resource_5; }
	inline void set_resource_5(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		___resource_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mCABABA5D0FA017D2D54BE4FA6256C51518274116_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mF3BA34126DA8AFA32D1E5285D842C5955C698F0D_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// !1 System.Func`2<System.Object,System.Boolean>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Func_2_Invoke_m9A308A51AD478CFFED363A55FA8B770CC6932188_gshared (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * __this, RuntimeObject * ___arg0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mA8F31A10EE1129768E13ACC4DC847B05EAD2A055_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mE985A35FC727FA9F519564063C5C5063209ADDA8_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// !1 System.Func`2<System.Object,System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Func_2_Invoke_m7710BB3329F850DC1AE6AEC1144ED2D1ED1B44F6_gshared (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * __this, RuntimeObject * ___arg0, const RuntimeMethod* method);

// System.Void System.ThrowHelper::ThrowArgumentNullException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5 (int32_t ___argument0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,Vuforia.Tracker>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m394A384B81205DCCBC45BC5361D715217241919E (Dictionary_2_tC2C6E53EC49079BB5D59E3226C70DA77D60D082B * __this, Type_t * ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC2C6E53EC49079BB5D59E3226C70DA77D60D082B *, Type_t *, const RuntimeMethod*))Dictionary_2_ContainsKey_mCABABA5D0FA017D2D54BE4FA6256C51518274116_gshared)(__this, ___key0, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Type,System.Func`2<Vuforia.Tracker,System.Boolean>>::get_Item(!0)
inline Func_2_t63DF586CEF8E63E58DB61BCEFF46A67599E1FF00 * Dictionary_2_get_Item_mA45D423A8430C83E31368FBEA7022AF194FC21CB (Dictionary_2_t9D1DAD5094C733FBC1F3B54B83F6B89E41719B84 * __this, Type_t * ___key0, const RuntimeMethod* method)
{
	return ((  Func_2_t63DF586CEF8E63E58DB61BCEFF46A67599E1FF00 * (*) (Dictionary_2_t9D1DAD5094C733FBC1F3B54B83F6B89E41719B84 *, Type_t *, const RuntimeMethod*))Dictionary_2_get_Item_mF3BA34126DA8AFA32D1E5285D842C5955C698F0D_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.Type,Vuforia.Tracker>::get_Item(!0)
inline Tracker_tC8779F03E5660202B4D88105DF0C594ED5DFD8AB * Dictionary_2_get_Item_mE89DFD57FCE18E6470B4AEB0DDAFDC879DB9E42F (Dictionary_2_tC2C6E53EC49079BB5D59E3226C70DA77D60D082B * __this, Type_t * ___key0, const RuntimeMethod* method)
{
	return ((  Tracker_tC8779F03E5660202B4D88105DF0C594ED5DFD8AB * (*) (Dictionary_2_tC2C6E53EC49079BB5D59E3226C70DA77D60D082B *, Type_t *, const RuntimeMethod*))Dictionary_2_get_Item_mF3BA34126DA8AFA32D1E5285D842C5955C698F0D_gshared)(__this, ___key0, method);
}
// !1 System.Func`2<Vuforia.Tracker,System.Boolean>::Invoke(!0)
inline bool Func_2_Invoke_mA6604379EF99C4651FF95CAFB75045B8A51FC021 (Func_2_t63DF586CEF8E63E58DB61BCEFF46A67599E1FF00 * __this, Tracker_tC8779F03E5660202B4D88105DF0C594ED5DFD8AB * ___arg0, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t63DF586CEF8E63E58DB61BCEFF46A67599E1FF00 *, Tracker_tC8779F03E5660202B4D88105DF0C594ED5DFD8AB *, const RuntimeMethod*))Func_2_Invoke_m9A308A51AD478CFFED363A55FA8B770CC6932188_gshared)(__this, ___arg0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,Vuforia.Tracker>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m836A787C3D0D87BE373BF7652B2BCF0145A6EB22 (Dictionary_2_tC2C6E53EC49079BB5D59E3226C70DA77D60D082B * __this, Type_t * ___key0, Tracker_tC8779F03E5660202B4D88105DF0C594ED5DFD8AB * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC2C6E53EC49079BB5D59E3226C70DA77D60D082B *, Type_t *, Tracker_tC8779F03E5660202B4D88105DF0C594ED5DFD8AB *, const RuntimeMethod*))Dictionary_2_set_Item_mA8F31A10EE1129768E13ACC4DC847B05EAD2A055_gshared)(__this, ___key0, ___value1, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,Vuforia.Tracker>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mE7F40E0AB79CFE55C381472D0A08FE061FFBE83A (Dictionary_2_tC2C6E53EC49079BB5D59E3226C70DA77D60D082B * __this, Type_t * ___key0, Tracker_tC8779F03E5660202B4D88105DF0C594ED5DFD8AB ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC2C6E53EC49079BB5D59E3226C70DA77D60D082B *, Type_t *, Tracker_tC8779F03E5660202B4D88105DF0C594ED5DFD8AB **, const RuntimeMethod*))Dictionary_2_TryGetValue_mE985A35FC727FA9F519564063C5C5063209ADDA8_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean Vuforia.VuforiaRuntimeUtilities::IsVuforiaEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VuforiaRuntimeUtilities_IsVuforiaEnabled_m6B6E8DEE66EE8966AAC032EB75AD5DDB1B96C1CC (const RuntimeMethod* method);
// System.Boolean Vuforia.TrackerManager::InitializeTrackerNative(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackerManager_InitializeTrackerNative_m88EAA1A5F591668D865904036ABA164F5B7A1D62 (Type_t * ___type0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Type,System.Func`2<System.Type,Vuforia.Tracker>>::get_Item(!0)
inline Func_2_t1A83F16EE47CBC3B0129DA6B7E57E51C375C83F2 * Dictionary_2_get_Item_mC4D8474C58B55D7332A7EBE45DFE549E56B451AA (Dictionary_2_t3EA70449DE598E62B2A72828458AF5874B72C1BA * __this, Type_t * ___key0, const RuntimeMethod* method)
{
	return ((  Func_2_t1A83F16EE47CBC3B0129DA6B7E57E51C375C83F2 * (*) (Dictionary_2_t3EA70449DE598E62B2A72828458AF5874B72C1BA *, Type_t *, const RuntimeMethod*))Dictionary_2_get_Item_mF3BA34126DA8AFA32D1E5285D842C5955C698F0D_gshared)(__this, ___key0, method);
}
// !1 System.Func`2<System.Type,Vuforia.Tracker>::Invoke(!0)
inline Tracker_tC8779F03E5660202B4D88105DF0C594ED5DFD8AB * Func_2_Invoke_m123DBC8D6080E9F46126C8550BBCFA4F8BF3B1A1 (Func_2_t1A83F16EE47CBC3B0129DA6B7E57E51C375C83F2 * __this, Type_t * ___arg0, const RuntimeMethod* method)
{
	return ((  Tracker_tC8779F03E5660202B4D88105DF0C594ED5DFD8AB * (*) (Func_2_t1A83F16EE47CBC3B0129DA6B7E57E51C375C83F2 *, Type_t *, const RuntimeMethod*))Func_2_Invoke_m7710BB3329F850DC1AE6AEC1144ED2D1ED1B44F6_gshared)(__this, ___arg0, method);
}
// System.Boolean Vuforia.VuforiaRuntimeUtilities::IsPlayMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VuforiaRuntimeUtilities_IsPlayMode_m908CEA64907A4AEA45E641079BD42F0BD6133F2C (const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// Vuforia.ITrackerManager Vuforia.TrackerManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TrackerManager_get_Instance_m84A332739F6ECB9FD2ED4F6D2C9A555C6AE95775 (const RuntimeMethod* method);
// Vuforia.VuforiaRuntimeUtilities/CameraState Vuforia.VuforiaRuntimeUtilities::GetCameraState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF  VuforiaRuntimeUtilities_GetCameraState_mE1BCDA592AE2A3F99E188808BDFE0E36DAEA115E (const RuntimeMethod* method);
// System.Void Vuforia.VuforiaRuntimeUtilities::StopAndDeinitCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuforiaRuntimeUtilities_StopAndDeinitCamera_mF06E34932C4FE9D00D69069E2D079D21EF76D1D6 (const RuntimeMethod* method);
// System.Void Vuforia.VuforiaRuntimeUtilities::ReInitAndStartCamera(Vuforia.VuforiaRuntimeUtilities/CameraState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuforiaRuntimeUtilities_ReInitAndStartCamera_mBA2ECA326087C9E82C803A9B9EE4A27E876FD482 (CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF  ___stateToRestore0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.Object>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m539AEA437A51B6A554E8ADD3076EDA49258FFF2F_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Pose>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisPose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_m9F64A94F4706D34745D303BDB62D4972E6D1C40A_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.EventSystems.RaycastResult>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_m7B6AFD6EC684F98352846D8662E379807D36BFF4_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.UIElements.UIR.RenderChainTextEntry>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRenderChainTextEntry_t2B7733A1A5036FC66D89122F798A839F058AE7C7_mDFE956B56577C88AF8A4B081B9995AEFD4F06484_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	RenderChainTextEntry_t2B7733A1A5036FC66D89122F798A839F058AE7C7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RenderChainTextEntry_t2B7733A1A5036FC66D89122F798A839F058AE7C7 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.Single>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m725C0271801F3A66BFD397B5C1210DBA009259C8_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(float));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.UIElements.StyleSheets.StylePropertyValue>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisStylePropertyValue_t5F204B329C961E7A1EA49F83333FCE27D4FDB2A8_m8A0180B06BCD6E8CF6743B8027BA1A2173211B8F_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	StylePropertyValue_t5F204B329C961E7A1EA49F83333FCE27D4FDB2A8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(StylePropertyValue_t5F204B329C961E7A1EA49F83333FCE27D4FDB2A8 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.UIElements.StyleSelectorPart>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisStyleSelectorPart_t707EDC970FC0F3E91E56DCBC178672A120426D54_mD77D67864AB2EB856272A873BF2842114F1C0373_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	StyleSelectorPart_t707EDC970FC0F3E91E56DCBC178672A120426D54  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(StyleSelectorPart_t707EDC970FC0F3E91E56DCBC178672A120426D54 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.UIElements.StyleSheets.StyleValue>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisStyleValue_t761E8EE98A6473F2FB9DE803BD8F14F047430FF5_m2DCB2BC5884372AA94C6F4BC8A120D4C745EBC71_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	StyleValue_t761E8EE98A6473F2FB9DE803BD8F14F047430FF5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(StyleValue_t761E8EE98A6473F2FB9DE803BD8F14F047430FF5 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.UIElements.StyleVariable>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisStyleVariable_tEF01599E5D91F65B4405F88847D7F6AA87B210BD_m13E5A5587D1CE14B1DB65F2B79F222FB12D99BD4_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	StyleVariable_tEF01599E5D91F65B4405F88847D7F6AA87B210BD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(StyleVariable_tEF01599E5D91F65B4405F88847D7F6AA87B210BD ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.UICharInfo>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisUICharInfo_tDEA65B831FAD06D1E9B10A6088E05C6D615B089A_m7DF5C6239E156DBE1471885B9B0A2EF4978325C9_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	UICharInfo_tDEA65B831FAD06D1E9B10A6088E05C6D615B089A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UICharInfo_tDEA65B831FAD06D1E9B10A6088E05C6D615B089A ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.UILineInfo>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisUILineInfo_tD082FF4894030AD4EBF57ACF6A997135E4B8B67C_mF9A73CFD6E0760C7690ED5253A743B30172980F6_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	UILineInfo_tD082FF4894030AD4EBF57ACF6A997135E4B8B67C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UILineInfo_tD082FF4894030AD4EBF57ACF6A997135E4B8B67C ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.UIVertex>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisUIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_m50A402D6DF7FC7FCBAE5AF5C0D055FF2C5A2D94E_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.UInt32>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m8DA06E08B90BDBC222C8F0858BAF6B73DFD3996B_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint32_t));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Vector3>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mE2606512887650500549E97A027D886C84CBF61C_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Vector4>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_mA932D671F9BE87E641DB0FCC8E2DB6C52EA4A76D_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.BeforeRenderHelper/OrderBlock>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisOrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_m524E3CF7C698B1C70A686928AF4E31E0FB01FD6D_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Camera/RenderRequest>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_m8CC8BBE8B343B5710C3AA0F32012D23AC131AFFD_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<Vuforia.CameraDevice/CameraField>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisCameraField_t1355F38B3A588F82A285DCC14160FB6578354A7E_mC868789C0A2148A49AA25FB3ADCD3FE6518F3E65_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	CameraField_t1355F38B3A588F82A285DCC14160FB6578354A7E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CameraField_t1355F38B3A588F82A285DCC14160FB6578354A7E ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<Vuforia.CameraDevice/VideoModeData>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisVideoModeData_t20D8D0686B2798F1A50B56666B49CD27D2444E25_mCA0D4E3DDA0F628A244B70C2DDA3B84CF373CD61_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	VideoModeData_t20D8D0686B2798F1A50B56666B49CD27D2444E25  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(VideoModeData_t20D8D0686B2798F1A50B56666B49CD27D2444E25 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.UIElements.FocusController/FocusedElement>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisFocusedElement_tF9897C653908D7004ACBEC7265361828BA9DB206_m3E59B3215704A1BB3C975BFA7E5E5C5DD6C19AFE_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	FocusedElement_tF9897C653908D7004ACBEC7265361828BA9DB206  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(FocusedElement_tF9897C653908D7004ACBEC7265361828BA9DB206 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<Vuforia.RawPtrVideoTextureUpdater/TextureData>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisTextureData_t89F914155468892E1F991668FE7D1CB43EA6D983_m1FF52786466B51402CFAA4C43FE83237D079E1D0_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	TextureData_t89F914155468892E1F991668FE7D1CB43EA6D983  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TextureData_t89F914155468892E1F991668FE7D1CB43EA6D983 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/Frame>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisFrame_t277B57D2C572A3B179CEA0357869DB245F52128D_m22942A13B4DE5264A461350B0213F1E014BE82D8_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	Frame_t277B57D2C572A3B179CEA0357869DB245F52128D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Frame_t277B57D2C572A3B179CEA0357869DB245F52128D ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.UIElements.TextureRegistry/TextureInfo>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisTextureInfo_tD08547B0C7CCA578BCF7493CE018FC48EDF65069_m9C70B7902D8511CDBA68500BBF86DCA99F997792_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	TextureInfo_tD08547B0C7CCA578BCF7493CE018FC48EDF65069  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TextureInfo_tD08547B0C7CCA578BCF7493CE018FC48EDF65069 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<Vuforia.TrackerData/TrackableResultData>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisTrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87_m357F053A1C3B2D6A0476CAEE6FB60F4601898886_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	TrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.UnitySynchronizationContext/WorkRequest>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisWorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_mAA66AF0A6DC5C07BA4B170C83C4E741F47BDED75_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<Vuforia.VuforiaManager/TrackableIdPair>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisTrackableIdPair_t89652BBB27728E0166EA648D84B9D546D908B79B_m1B56268EB8A31970380ECD2A7388C72EE0A497F0_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	TrackableIdPair_t89652BBB27728E0166EA648D84B9D546D908B79B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TrackableIdPair_t89652BBB27728E0166EA648D84B9D546D908B79B ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Boolean Vuforia.TrackerManager::DeinitTracker<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackerManager_DeinitTracker_TisRuntimeObject_m9C0B08F4C54546363B325C30913575D44932E269_gshared (TrackerManager_t70E5F52B1F51D7E63AF12867B4605C3A2ADBFC2E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m394A384B81205DCCBC45BC5361D715217241919E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mA45D423A8430C83E31368FBEA7022AF194FC21CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE89DFD57FCE18E6470B4AEB0DDAFDC879DB9E42F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m836A787C3D0D87BE373BF7652B2BCF0145A6EB22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_Invoke_mA6604379EF99C4651FF95CAFB75045B8A51FC021_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4458C6572171B3D246C64DB218DB7DAF5B9F7DEE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD39BE8663CED4950CA9C72F936B9D32355064E1E);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	{
		Type_t * L_0;
		L_0 = ((  Type_t * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Type_t *)L_0;
		Dictionary_2_tC2C6E53EC49079BB5D59E3226C70DA77D60D082B * L_1 = (Dictionary_2_tC2C6E53EC49079BB5D59E3226C70DA77D60D082B *)__this->get_mTrackers_2();
		Type_t * L_2 = V_0;
		NullCheck((Dictionary_2_tC2C6E53EC49079BB5D59E3226C70DA77D60D082B *)L_1);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m394A384B81205DCCBC45BC5361D715217241919E((Dictionary_2_tC2C6E53EC49079BB5D59E3226C70DA77D60D082B *)L_1, (Type_t *)L_2, /*hidden argument*/Dictionary_2_ContainsKey_m394A384B81205DCCBC45BC5361D715217241919E_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485((RuntimeObject *)_stringLiteralD39BE8663CED4950CA9C72F936B9D32355064E1E, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_0020:
	{
		bool L_4;
		L_4 = ((  bool (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		if (!L_4)
		{
			goto IL_0052;
		}
	}
	{
		Dictionary_2_t9D1DAD5094C733FBC1F3B54B83F6B89E41719B84 * L_5 = (Dictionary_2_t9D1DAD5094C733FBC1F3B54B83F6B89E41719B84 *)__this->get_mTrackerNativeDeinitializers_4();
		Type_t * L_6 = V_0;
		NullCheck((Dictionary_2_t9D1DAD5094C733FBC1F3B54B83F6B89E41719B84 *)L_5);
		Func_2_t63DF586CEF8E63E58DB61BCEFF46A67599E1FF00 * L_7;
		L_7 = Dictionary_2_get_Item_mA45D423A8430C83E31368FBEA7022AF194FC21CB((Dictionary_2_t9D1DAD5094C733FBC1F3B54B83F6B89E41719B84 *)L_5, (Type_t *)L_6, /*hidden argument*/Dictionary_2_get_Item_mA45D423A8430C83E31368FBEA7022AF194FC21CB_RuntimeMethod_var);
		Dictionary_2_tC2C6E53EC49079BB5D59E3226C70DA77D60D082B * L_8 = (Dictionary_2_tC2C6E53EC49079BB5D59E3226C70DA77D60D082B *)__this->get_mTrackers_2();
		Type_t * L_9 = V_0;
		NullCheck((Dictionary_2_tC2C6E53EC49079BB5D59E3226C70DA77D60D082B *)L_8);
		Tracker_tC8779F03E5660202B4D88105DF0C594ED5DFD8AB * L_10;
		L_10 = Dictionary_2_get_Item_mE89DFD57FCE18E6470B4AEB0DDAFDC879DB9E42F((Dictionary_2_tC2C6E53EC49079BB5D59E3226C70DA77D60D082B *)L_8, (Type_t *)L_9, /*hidden argument*/Dictionary_2_get_Item_mE89DFD57FCE18E6470B4AEB0DDAFDC879DB9E42F_RuntimeMethod_var);
		NullCheck((Func_2_t63DF586CEF8E63E58DB61BCEFF46A67599E1FF00 *)L_7);
		bool L_11;
		L_11 = Func_2_Invoke_mA6604379EF99C4651FF95CAFB75045B8A51FC021((Func_2_t63DF586CEF8E63E58DB61BCEFF46A67599E1FF00 *)L_7, (Tracker_tC8779F03E5660202B4D88105DF0C594ED5DFD8AB *)L_10, /*hidden argument*/Func_2_Invoke_mA6604379EF99C4651FF95CAFB75045B8A51FC021_RuntimeMethod_var);
		if (L_11)
		{
			goto IL_0052;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485((RuntimeObject *)_stringLiteral4458C6572171B3D246C64DB218DB7DAF5B9F7DEE, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_0052:
	{
		Dictionary_2_tC2C6E53EC49079BB5D59E3226C70DA77D60D082B * L_12 = (Dictionary_2_tC2C6E53EC49079BB5D59E3226C70DA77D60D082B *)__this->get_mTrackers_2();
		Type_t * L_13 = V_0;
		NullCheck((Dictionary_2_tC2C6E53EC49079BB5D59E3226C70DA77D60D082B *)L_12);
		Dictionary_2_set_Item_m836A787C3D0D87BE373BF7652B2BCF0145A6EB22((Dictionary_2_tC2C6E53EC49079BB5D59E3226C70DA77D60D082B *)L_12, (Type_t *)L_13, (Tracker_tC8779F03E5660202B4D88105DF0C594ED5DFD8AB *)NULL, /*hidden argument*/Dictionary_2_set_Item_m836A787C3D0D87BE373BF7652B2BCF0145A6EB22_RuntimeMethod_var);
		return (bool)1;
	}
}
// System.Type Vuforia.TrackerManager::GetMappableType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * TrackerManager_GetMappableType_TisRuntimeObject_m230A1158C785160598E414E1FA9AB1862C072A3E_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceTracker_t167126AB5258179E840F4B1206843BF7207C7EE6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PositionalDeviceTracker_t6ABCBD564879CA0036D88243CB3C187E5DCED92E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (PositionalDeviceTracker_t6ABCBD564879CA0036D88243CB3C187E5DCED92E_0_0_0_var) };
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_2, /*hidden argument*/NULL);
		bool L_4;
		L_4 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_1, (Type_t *)L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6;
		L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_5, /*hidden argument*/NULL);
		return (Type_t *)L_6;
	}

IL_0026:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (DeviceTracker_t167126AB5258179E840F4B1206843BF7207C7EE6_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_7, /*hidden argument*/NULL);
		return (Type_t *)L_8;
	}
}
// T Vuforia.TrackerManager::GetTracker<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TrackerManager_GetTracker_TisRuntimeObject_m2257D276F69FF728C6F09D07C4B5137DC68B4E53_gshared (TrackerManager_t70E5F52B1F51D7E63AF12867B4605C3A2ADBFC2E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mE7F40E0AB79CFE55C381472D0A08FE061FFBE83A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C78E122E47409D12ECB8A8B84CBE63A9895F6D6);
		s_Il2CppMethodInitialized = true;
	}
	Tracker_tC8779F03E5660202B4D88105DF0C594ED5DFD8AB * V_0 = NULL;
	{
		Dictionary_2_tC2C6E53EC49079BB5D59E3226C70DA77D60D082B * L_0 = (Dictionary_2_tC2C6E53EC49079BB5D59E3226C70DA77D60D082B *)__this->get_mTrackers_2();
		Type_t * L_1;
		L_1 = ((  Type_t * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		NullCheck((Dictionary_2_tC2C6E53EC49079BB5D59E3226C70DA77D60D082B *)L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mE7F40E0AB79CFE55C381472D0A08FE061FFBE83A((Dictionary_2_tC2C6E53EC49079BB5D59E3226C70DA77D60D082B *)L_0, (Type_t *)L_1, (Tracker_tC8779F03E5660202B4D88105DF0C594ED5DFD8AB **)(Tracker_tC8779F03E5660202B4D88105DF0C594ED5DFD8AB **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mE7F40E0AB79CFE55C381472D0A08FE061FFBE83A_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485((RuntimeObject *)_stringLiteral3C78E122E47409D12ECB8A8B84CBE63A9895F6D6, /*hidden argument*/NULL);
	}

IL_001e:
	{
		Tracker_tC8779F03E5660202B4D88105DF0C594ED5DFD8AB * L_3 = V_0;
		return (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))), IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}
}
// T Vuforia.TrackerManager::InitTracker<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TrackerManager_InitTracker_TisRuntimeObject_m5BDF5C7056B161D5E8C71CBAB2D1CFBA2B46D5C2_gshared (TrackerManager_t70E5F52B1F51D7E63AF12867B4605C3A2ADBFC2E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m394A384B81205DCCBC45BC5361D715217241919E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mC4D8474C58B55D7332A7EBE45DFE549E56B451AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE89DFD57FCE18E6470B4AEB0DDAFDC879DB9E42F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m836A787C3D0D87BE373BF7652B2BCF0145A6EB22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_Invoke_m123DBC8D6080E9F46126C8550BBCFA4F8BF3B1A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VuforiaRuntimeUtilities_tA3A3FC951533F58532B1EB9E2A0A2E49E5AEF0CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF79D51A9462D66A494A01A6FD31AC397F537ED9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2B93AE8B46EA13BCF064C74A0897B76D0A27982);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_tA3A3FC951533F58532B1EB9E2A0A2E49E5AEF0CB_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = VuforiaRuntimeUtilities_IsVuforiaEnabled_m6B6E8DEE66EE8966AAC032EB75AD5DDB1B96C1CC(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_1 = V_1;
		return (RuntimeObject *)L_1;
	}

IL_0011:
	{
		bool L_2;
		L_2 = ((  bool (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_2)
		{
			goto IL_0051;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_3, /*hidden argument*/NULL);
		bool L_5;
		L_5 = TrackerManager_InitializeTrackerNative_m88EAA1A5F591668D865904036ABA164F5B7A1D62((Type_t *)L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0051;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7;
		L_7 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_6, /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_7);
		String_t* L_9;
		L_9 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17((String_t*)_stringLiteralEF79D51A9462D66A494A01A6FD31AC397F537ED9, (RuntimeObject *)L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485((RuntimeObject *)L_9, /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_10 = V_1;
		return (RuntimeObject *)L_10;
	}

IL_0051:
	{
		Type_t * L_11;
		L_11 = ((  Type_t * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		V_0 = (Type_t *)L_11;
		Dictionary_2_tC2C6E53EC49079BB5D59E3226C70DA77D60D082B * L_12 = (Dictionary_2_tC2C6E53EC49079BB5D59E3226C70DA77D60D082B *)__this->get_mTrackers_2();
		Type_t * L_13 = V_0;
		NullCheck((Dictionary_2_tC2C6E53EC49079BB5D59E3226C70DA77D60D082B *)L_12);
		bool L_14;
		L_14 = Dictionary_2_ContainsKey_m394A384B81205DCCBC45BC5361D715217241919E((Dictionary_2_tC2C6E53EC49079BB5D59E3226C70DA77D60D082B *)L_12, (Type_t *)L_13, /*hidden argument*/Dictionary_2_ContainsKey_m394A384B81205DCCBC45BC5361D715217241919E_RuntimeMethod_var);
		if (L_14)
		{
			goto IL_0079;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485((RuntimeObject *)_stringLiteralF2B93AE8B46EA13BCF064C74A0897B76D0A27982, /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_15 = V_1;
		return (RuntimeObject *)L_15;
	}

IL_0079:
	{
		Dictionary_2_tC2C6E53EC49079BB5D59E3226C70DA77D60D082B * L_16 = (Dictionary_2_tC2C6E53EC49079BB5D59E3226C70DA77D60D082B *)__this->get_mTrackers_2();
		Type_t * L_17 = V_0;
		NullCheck((Dictionary_2_tC2C6E53EC49079BB5D59E3226C70DA77D60D082B *)L_16);
		Tracker_tC8779F03E5660202B4D88105DF0C594ED5DFD8AB * L_18;
		L_18 = Dictionary_2_get_Item_mE89DFD57FCE18E6470B4AEB0DDAFDC879DB9E42F((Dictionary_2_tC2C6E53EC49079BB5D59E3226C70DA77D60D082B *)L_16, (Type_t *)L_17, /*hidden argument*/Dictionary_2_get_Item_mE89DFD57FCE18E6470B4AEB0DDAFDC879DB9E42F_RuntimeMethod_var);
		if (L_18)
		{
			goto IL_00ae;
		}
	}
	{
		Dictionary_2_tC2C6E53EC49079BB5D59E3226C70DA77D60D082B * L_19 = (Dictionary_2_tC2C6E53EC49079BB5D59E3226C70DA77D60D082B *)__this->get_mTrackers_2();
		Type_t * L_20 = V_0;
		Dictionary_2_t3EA70449DE598E62B2A72828458AF5874B72C1BA * L_21 = (Dictionary_2_t3EA70449DE598E62B2A72828458AF5874B72C1BA *)__this->get_mTrackerCreators_3();
		Type_t * L_22 = V_0;
		NullCheck((Dictionary_2_t3EA70449DE598E62B2A72828458AF5874B72C1BA *)L_21);
		Func_2_t1A83F16EE47CBC3B0129DA6B7E57E51C375C83F2 * L_23;
		L_23 = Dictionary_2_get_Item_mC4D8474C58B55D7332A7EBE45DFE549E56B451AA((Dictionary_2_t3EA70449DE598E62B2A72828458AF5874B72C1BA *)L_21, (Type_t *)L_22, /*hidden argument*/Dictionary_2_get_Item_mC4D8474C58B55D7332A7EBE45DFE549E56B451AA_RuntimeMethod_var);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_24 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_25;
		L_25 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_24, /*hidden argument*/NULL);
		NullCheck((Func_2_t1A83F16EE47CBC3B0129DA6B7E57E51C375C83F2 *)L_23);
		Tracker_tC8779F03E5660202B4D88105DF0C594ED5DFD8AB * L_26;
		L_26 = Func_2_Invoke_m123DBC8D6080E9F46126C8550BBCFA4F8BF3B1A1((Func_2_t1A83F16EE47CBC3B0129DA6B7E57E51C375C83F2 *)L_23, (Type_t *)L_25, /*hidden argument*/Func_2_Invoke_m123DBC8D6080E9F46126C8550BBCFA4F8BF3B1A1_RuntimeMethod_var);
		NullCheck((Dictionary_2_tC2C6E53EC49079BB5D59E3226C70DA77D60D082B *)L_19);
		Dictionary_2_set_Item_m836A787C3D0D87BE373BF7652B2BCF0145A6EB22((Dictionary_2_tC2C6E53EC49079BB5D59E3226C70DA77D60D082B *)L_19, (Type_t *)L_20, (Tracker_tC8779F03E5660202B4D88105DF0C594ED5DFD8AB *)L_26, /*hidden argument*/Dictionary_2_set_Item_m836A787C3D0D87BE373BF7652B2BCF0145A6EB22_RuntimeMethod_var);
	}

IL_00ae:
	{
		Dictionary_2_tC2C6E53EC49079BB5D59E3226C70DA77D60D082B * L_27 = (Dictionary_2_tC2C6E53EC49079BB5D59E3226C70DA77D60D082B *)__this->get_mTrackers_2();
		Type_t * L_28 = V_0;
		NullCheck((Dictionary_2_tC2C6E53EC49079BB5D59E3226C70DA77D60D082B *)L_27);
		Tracker_tC8779F03E5660202B4D88105DF0C594ED5DFD8AB * L_29;
		L_29 = Dictionary_2_get_Item_mE89DFD57FCE18E6470B4AEB0DDAFDC879DB9E42F((Dictionary_2_tC2C6E53EC49079BB5D59E3226C70DA77D60D082B *)L_27, (Type_t *)L_28, /*hidden argument*/Dictionary_2_get_Item_mE89DFD57FCE18E6470B4AEB0DDAFDC879DB9E42F_RuntimeMethod_var);
		return (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_29, IL2CPP_RGCTX_DATA(method->rgctx_data, 3))), IL2CPP_RGCTX_DATA(method->rgctx_data, 3)));
	}
}
// System.Boolean Vuforia.TrackerManager::IsTrackerSupportedNatively<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackerManager_IsTrackerSupportedNatively_TisRuntimeObject_mB9F85F91181F2A62D41DF8E58DEE3C4E68C9124C_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmartTerrain_t465561CB4FF40E6CB2355629FB8AC51286663B14_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VuforiaRuntimeUtilities_tA3A3FC951533F58532B1EB9E2A0A2E49E5AEF0CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_tA3A3FC951533F58532B1EB9E2A0A2E49E5AEF0CB_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = VuforiaRuntimeUtilities_IsPlayMode_m908CEA64907A4AEA45E641079BD42F0BD6133F2C(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (SmartTerrain_t465561CB4FF40E6CB2355629FB8AC51286663B14_0_0_0_var) };
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_3, /*hidden argument*/NULL);
		bool L_5;
		L_5 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_2, (Type_t *)L_4, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
	}

IL_0024:
	{
		return (bool)1;
	}
}
// System.Tuple`2<T1,T2> System.Tuple::Create<System.Object,System.Object>(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * Tuple_Create_TisRuntimeObject_TisRuntimeObject_mF2FBEB401CAD0B09FEB37EE161291AA74B698F75_gshared (RuntimeObject * ___item10, RuntimeObject * ___item21, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___item10;
		RuntimeObject * L_1 = ___item21;
		Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * L_2 = (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_2, (RuntimeObject *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 *)L_2;
	}
}
// T[] Vuforia.UnityComponentExtensions::GetComponentsOnlyInChildren<System.Object>(UnityEngine.Component)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* UnityComponentExtensions_GetComponentsOnlyInChildren_TisRuntimeObject_m67FC9832FFD4922399BF61261CED6CC7748F3A7D_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___obj0, const RuntimeMethod* method)
{
	{
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_0 = ___obj0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_1;
	}
}
// T[] Vuforia.UnityComponentExtensions::GetComponentsOnlyInChildren<System.Object>(UnityEngine.Component,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* UnityComponentExtensions_GetComponentsOnlyInChildren_TisRuntimeObject_m901515529657803463DF6EF12222697CC0C18141_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___obj0, bool ___includeInactive1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0;
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_1 = ___obj0;
		bool L_2 = ___includeInactive1;
		NullCheck((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)L_1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3;
		L_3 = ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)L_1, (bool)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_3;
		V_2 = (int32_t)0;
		goto IL_003d;
	}

IL_0012:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = (RuntimeObject *)L_7;
		RuntimeObject * L_8 = V_3;
		NullCheck((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)L_8);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)L_8, /*hidden argument*/NULL);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_10 = ___obj0;
		NullCheck((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)L_10);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_9, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0039;
		}
	}
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_13 = V_0;
		RuntimeObject * L_14 = V_3;
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_13);
		((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_13, (RuntimeObject *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
	}

IL_0039:
	{
		int32_t L_15 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_003d:
	{
		int32_t L_16 = V_2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = V_1;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_18 = V_0;
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_18);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19;
		L_19 = ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_19;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Rendering.BatchVisibility>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisBatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE_m64B7496928323FC31813F990FE5AC06057213ABD_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<System.Byte>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mB20DF48ED17C5C1B91F7B365DA01C9D9883CE22D_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.UIElements.UIR.GfxUpdateBufferRange>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisGfxUpdateBufferRange_t11F569267024B2295C7F30C6E951754053C03D66_m5DDEA056D159BAC25B75ED14B581CEA75116FEFC_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<System.Int32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4DA9BD8ABD57EA456BBBF0DB0A9917AE7A67806D_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Experimental.GlobalIllumination.LightDataGI>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisLightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2_mD39AE841C76B62A720795E45A9CAB847804CDBD2_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Plane>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisPlane_t80844BF2332EAFC1DDEDD616A950242031A115C7_mF71D0A0AD3A01326E5D0D9C4D78FFE82E985A28E_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<System.UInt16>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_m91E8D0A3C94BCBC6792CD44EF85D7E2E39376662_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.UIElements.Vertex>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisVertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E_m60774AC173F17BF022B8B92A1D756E643151E7ED_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Rendering.BatchVisibility>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  UnsafeUtility_ReadArrayElement_TisBatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE_m1440CE5633412E3C1D3001135F2B0F61E8386B17_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE );
		BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  L_3 = (*(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.Byte>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t UnsafeUtility_ReadArrayElement_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m67D8855CBE489026EAF5EA8C90218F55725F53D3_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = (*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (uint8_t)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.UIElements.UIR.GfxUpdateBufferRange>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GfxUpdateBufferRange_t11F569267024B2295C7F30C6E951754053C03D66  UnsafeUtility_ReadArrayElement_TisGfxUpdateBufferRange_t11F569267024B2295C7F30C6E951754053C03D66_m5C11333C0CA730BD834315ED2393143EECA77A0F_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(GfxUpdateBufferRange_t11F569267024B2295C7F30C6E951754053C03D66 );
		GfxUpdateBufferRange_t11F569267024B2295C7F30C6E951754053C03D66  L_3 = (*(GfxUpdateBufferRange_t11F569267024B2295C7F30C6E951754053C03D66 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (GfxUpdateBufferRange_t11F569267024B2295C7F30C6E951754053C03D66 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.Int32>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m9E085E01C3226E293E23B792BA610B180A700E9F_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(int32_t);
		int32_t L_3 = (*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (int32_t)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Experimental.GlobalIllumination.LightDataGI>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  UnsafeUtility_ReadArrayElement_TisLightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2_mFE6D2FB242F4F5B5C50CC2EEF07B7D8A439C4D1D_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 );
		LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  L_3 = (*(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.Object>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * UnsafeUtility_ReadArrayElement_TisRuntimeObject_m0323D0A3D6692F6B69EA44D6E7B2AA64F66C4777_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(RuntimeObject *);
		RuntimeObject * L_3 = (*(RuntimeObject **)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (RuntimeObject *)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Plane>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  UnsafeUtility_ReadArrayElement_TisPlane_t80844BF2332EAFC1DDEDD616A950242031A115C7_mFD2701F529985122FF354FE234A2AB6E5D47FC0C_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 );
		Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  L_3 = (*(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.UInt16>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t UnsafeUtility_ReadArrayElement_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_mAD3595069061E511CC242714CD83B823ABE3EDF0_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint16_t);
		uint16_t L_3 = (*(uint16_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (uint16_t)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.UIElements.Vertex>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E  UnsafeUtility_ReadArrayElement_TisVertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E_m9C87CE15BF9770D04A0218EC408A054F9CD0FD01_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Vertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E );
		Vertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E  L_3 = (*(Vertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (Vertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E )L_3;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.BatchVisibility>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t2FCEDE21F23B91BD30F8918F2014E815BB7A2D1F_m4F09A05D3DD170DFA1F796E0A8FA0B313C65725B_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t2FCEDE21F23B91BD30F8918F2014E815BB7A2D1F );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Byte>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t030625109E9AAAF4D093DC2F7FAA2BEC2000FA0A_m483AA7FC51E6A112FC0A4D06D38B11D37DFEF879_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t030625109E9AAAF4D093DC2F7FAA2BEC2000FA0A );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.UIElements.UIR.GfxUpdateBufferRange>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t5DE1EB4221794F91CCD08FDC932F706301EEF2DB_m5D7B94F374F430D55CC64458DCBEF2317E197198_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t5DE1EB4221794F91CCD08FDC932F706301EEF2DB );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Int32>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t2D37A63A0766FF4D4D0AA3CCD8879D66AC006FF1_mDA545781E7F1E51EA4B8806FE9681D3A0680C2BF_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t2D37A63A0766FF4D4D0AA3CCD8879D66AC006FF1 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tB73C2380111688DFF4CDA578F1D646B893208D17_m78DEA1E58B4D9D6E271BFF9B14011D45ED34B031_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tB73C2380111688DFF4CDA578F1D646B893208D17 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Plane>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t844B26E46E7279186C852FA310311C251B480893_m7C04B3AA1BAA024C62459AAFF0C635C222310A16_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t844B26E46E7279186C852FA310311C251B480893 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.UInt16>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t84B0D514478CAD691346D8A78F869BF54A4DF863_m6084EEE82C0053C6CC1377753D3FE05B38701259_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t84B0D514478CAD691346D8A78F869BF54A4DF863 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.UIElements.Vertex>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t8B9F428AACB5CF17C2C6A66BF1ED681D7C56A9DD_m957C9E5CED4CF01DC7A72AF426A97F39C8A9A1E2_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t8B9F428AACB5CF17C2C6A66BF1ED681D7C56A9DD );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Rendering.BatchVisibility>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE_m59EADA64485304CCC918007EE51D37E128AB411D_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.Byte>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mC38689A53E959AC0D3F9C9BF89F277C4A1D23BBF_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(uint8_t);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.UIElements.UIR.GfxUpdateBufferRange>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisGfxUpdateBufferRange_t11F569267024B2295C7F30C6E951754053C03D66_m335C01E3F825AFF19230F85903B8DE498A026B2C_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(GfxUpdateBufferRange_t11F569267024B2295C7F30C6E951754053C03D66 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.Int32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mC154751B6ED1926446C432F482791D0C5D3F663A_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(int32_t);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Experimental.GlobalIllumination.LightDataGI>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisLightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2_mBBB6CBF143991B044213D375125D1E6F3352FF81_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Plane>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPlane_t80844BF2332EAFC1DDEDD616A950242031A115C7_m223C8A2842490CA74E75B2180AEE83873D0A4696_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.UInt16>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_m9B19BBBE3E9CCFB3A08C9D69CB28B95159A85CE8_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(uint16_t);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.UIElements.Vertex>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisVertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E_m259764ADCA93543978BA411A77DD042257F92B75_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(Vertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E );
		return (int32_t)L_0;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Rendering.BatchVisibility>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisBatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE_m1D58CBFDD53E1CB541D16CCF8DE4E26A4FE2C936_gshared (void* ___destination0, int32_t ___index1, BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE );
		BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  L_3 = ___value2;
		*(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Byte>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mA70DA76446E650B5A4E730737BB0424B03DDA863_gshared (void* ___destination0, int32_t ___index1, uint8_t ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = ___value2;
		*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.UIElements.UIR.GfxUpdateBufferRange>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisGfxUpdateBufferRange_t11F569267024B2295C7F30C6E951754053C03D66_mFF49ADF5654A72FEC9014967E3221416F0871EEA_gshared (void* ___destination0, int32_t ___index1, GfxUpdateBufferRange_t11F569267024B2295C7F30C6E951754053C03D66  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(GfxUpdateBufferRange_t11F569267024B2295C7F30C6E951754053C03D66 );
		GfxUpdateBufferRange_t11F569267024B2295C7F30C6E951754053C03D66  L_3 = ___value2;
		*(GfxUpdateBufferRange_t11F569267024B2295C7F30C6E951754053C03D66 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Int32>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mB9BC153EF3EB42C858EC5F8E7A3637DD1B486A9C_gshared (void* ___destination0, int32_t ___index1, int32_t ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(int32_t);
		int32_t L_3 = ___value2;
		*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Experimental.GlobalIllumination.LightDataGI>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisLightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2_mA5815A33A2D823CD88B2A0A00314773D9E716829_gshared (void* ___destination0, int32_t ___index1, LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 );
		LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  L_3 = ___value2;
		*(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Object>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisRuntimeObject_mC1F6C4E4652461CA6AEB546A6DA9BD38C7FBEF6D_gshared (void* ___destination0, int32_t ___index1, RuntimeObject * ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(RuntimeObject *);
		RuntimeObject * L_3 = ___value2;
		*(RuntimeObject **)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))), (void*)L_3);
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Plane>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisPlane_t80844BF2332EAFC1DDEDD616A950242031A115C7_mCE70D24A9D2128E16099BDE32F28E21C5CAF033C_gshared (void* ___destination0, int32_t ___index1, Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 );
		Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  L_3 = ___value2;
		*(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.UInt16>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_m722FDBADA8C82FAABFF95B65358C4F00C98753C0_gshared (void* ___destination0, int32_t ___index1, uint16_t ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint16_t);
		uint16_t L_3 = ___value2;
		*(uint16_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.UIElements.Vertex>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisVertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E_mF0A999956F31F5093D2D553B0F295CB31AB48AB3_gshared (void* ___destination0, int32_t ___index1, Vertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Vertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E );
		Vertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E  L_3 = ___value2;
		*(Vertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// T System.Threading.Volatile::Read<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Volatile_Read_TisRuntimeObject_mA22CA9EE821A72ACF450FE1060CE5F1B0F251D13_gshared (RuntimeObject ** ___location0, const RuntimeMethod* method)
{
	return VolatileRead(___location0);
}
// System.Void System.Threading.Volatile::Write<System.Object>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Volatile_Write_TisRuntimeObject_m66FD7558B688CFF32051E9CAF2769F3E5F0F0FE0_gshared (RuntimeObject ** ___location0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	VolatileWrite(___location0, ___value1);
}
// System.Boolean Vuforia.VuforiaRuntimeUtilities::SafeDeinitTracker<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VuforiaRuntimeUtilities_SafeDeinitTracker_TisRuntimeObject_m7B65E5AF894CD91E197EED4C63D688FC9CB70367_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VuforiaRuntimeUtilities_tA3A3FC951533F58532B1EB9E2A0A2E49E5AEF0CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0;
		L_0 = TrackerManager_get_Instance_m84A332739F6ECB9FD2ED4F6D2C9A555C6AE95775(/*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject * L_1;
		L_1 = GenericInterfaceFuncInvoker0< RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (RuntimeObject*)L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_tA3A3FC951533F58532B1EB9E2A0A2E49E5AEF0CB_il2cpp_TypeInfo_var);
		CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF  L_2;
		L_2 = VuforiaRuntimeUtilities_GetCameraState_mE1BCDA592AE2A3F99E188808BDFE0E36DAEA115E(/*hidden argument*/NULL);
		V_0 = (CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF )L_2;
		VuforiaRuntimeUtilities_StopAndDeinitCamera_mF06E34932C4FE9D00D69069E2D079D21EF76D1D6(/*hidden argument*/NULL);
		RuntimeObject* L_3;
		L_3 = TrackerManager_get_Instance_m84A332739F6ECB9FD2ED4F6D2C9A555C6AE95775(/*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_3);
		bool L_4;
		L_4 = GenericInterfaceFuncInvoker0< bool >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2), (RuntimeObject*)L_3);
		CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF  L_5 = V_0;
		VuforiaRuntimeUtilities_ReInitAndStartCamera_mBA2ECA326087C9E82C803A9B9EE4A27E876FD482((CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF )L_5, /*hidden argument*/NULL);
		return (bool)L_4;
	}
}
// T Vuforia.VuforiaRuntimeUtilities::SafeInitTracker<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VuforiaRuntimeUtilities_SafeInitTracker_TisRuntimeObject_m1F2F50A7339CB6F7FDEA40EFB0818CB5D381868E_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VuforiaRuntimeUtilities_tA3A3FC951533F58532B1EB9E2A0A2E49E5AEF0CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = TrackerManager_get_Instance_m84A332739F6ECB9FD2ED4F6D2C9A555C6AE95775(/*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject * L_1;
		L_1 = GenericInterfaceFuncInvoker0< RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (RuntimeObject*)L_0);
		V_0 = (RuntimeObject *)L_1;
		RuntimeObject * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_3 = V_0;
		return (RuntimeObject *)L_3;
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_tA3A3FC951533F58532B1EB9E2A0A2E49E5AEF0CB_il2cpp_TypeInfo_var);
		CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF  L_4;
		L_4 = VuforiaRuntimeUtilities_GetCameraState_mE1BCDA592AE2A3F99E188808BDFE0E36DAEA115E(/*hidden argument*/NULL);
		VuforiaRuntimeUtilities_StopAndDeinitCamera_mF06E34932C4FE9D00D69069E2D079D21EF76D1D6(/*hidden argument*/NULL);
		RuntimeObject* L_5;
		L_5 = TrackerManager_get_Instance_m84A332739F6ECB9FD2ED4F6D2C9A555C6AE95775(/*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_5);
		RuntimeObject * L_6;
		L_6 = GenericInterfaceFuncInvoker0< RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2), (RuntimeObject*)L_5);
		V_0 = (RuntimeObject *)L_6;
		VuforiaRuntimeUtilities_ReInitAndStartCamera_mBA2ECA326087C9E82C803A9B9EE4A27E876FD482((CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF )L_4, /*hidden argument*/NULL);
		RuntimeObject * L_7 = V_0;
		return (RuntimeObject *)L_7;
	}
}
