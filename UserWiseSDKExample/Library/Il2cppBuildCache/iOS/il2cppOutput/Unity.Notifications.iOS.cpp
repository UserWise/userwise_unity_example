#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
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
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationData>
struct List_1_t169A85D76AB1E000B90048F77432786CB7349865;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// Unity.Notifications.iOS.iOSNotificationData[]
struct iOSNotificationDataU5BU5D_t7889313E71D5D67EB0577E2743DBBCC3ED1FA590;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// Unity.Notifications.iOS.AuthorizationRequest
struct AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tB2FAC817877BBE79BED6B020ABD5B9B1E4CD4569;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_tFAD0993D14CC3E2B1685A7D29A1B551E9A8DD4C3;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Unity.Notifications.iOS.iOSAuthorizationRequestData
struct iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6;
// Unity.Notifications.iOS.iOSNotification
struct iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25;
// Unity.Notifications.iOS.iOSNotificationTrigger
struct iOSNotificationTrigger_t8E00E938D40866C0F592F785DFCA748E50C10391;
// Unity.Notifications.iOS.iOSNotificationsWrapper
struct iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783;
// Unity.Notifications.iOS.iOSNotificationCenter/<>c
struct U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C;
// Unity.Notifications.iOS.iOSNotificationCenter/AuthorizationRequestCompletedCallback
struct AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF;
// Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback
struct NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97;
// Unity.Notifications.iOS.iOSNotificationsWrapper/AuthorizationRequestCallback
struct AuthorizationRequestCallback_tA1D3C80486C750EC3B6638B2C4B91540E393C4F3;
// Unity.Notifications.iOS.iOSNotificationsWrapper/NotificationReceivedCallback
struct NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthorizationRequestCallback_tA1D3C80486C750EC3B6638B2C4B91540E393C4F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t169A85D76AB1E000B90048F77432786CB7349865_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSNotificationPushTrigger_tC3A3576FC00D3D22F9B7DCFE77A8DBF6D1B08B28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral639F01DFEB0CC71DC57E14265FC5642D13533AEF;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralF095BC29C39D74DCA3923E99C34901B64AF08344;
IL2CPP_EXTERN_C String_t* _stringLiteralFCA8707FE0861CE909C71CAD2EB86B6143B5E8D7;
IL2CPP_EXTERN_C const RuntimeMethod* AuthorizationRequest_OnAuthorizationRequestCompleted_mB3579FF2C6E254D3DA4EDC75CA2FF3A00E209408_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m1EFCA77693DC381F285C8F235B0278000A58E818_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m57ED027F5606FE5F8AD35744FC987E9E07625EDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC05329E0BBFE451A6B3071BFC91C41DBBE9C1F8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_SizeOf_TisiOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_mE1118FD79EDAD3D4068DAFCF0F86C0892D44D721_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_StructureToPtr_TisiOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_mA5A137B8C80DD53600055405992D2C85AA6E5A07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mFE230167EC1EEF62518BEE849F67517E9061B7E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__37_0_mAF22E8FADE61F879B289E90A20B57886A64C580D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__37_1_mB96B155268106F62172BED44B622601627CAB03F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__37_2_m1A3B6FE3BCD253BECDA531C4D894905C6EAF25AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* iOSNotificationTimeIntervalTrigger_set_TimeInterval_mEAF737982A0DF4B33396D3766DC45C89D3097B92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* iOSNotification_set_Trigger_m41B5FA43DDC81CFD154152C84A907A53B023E586_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* iOSNotificationsWrapper_AuthorizationRequestReceived_m90390A23265A5C3DA79A082E0466D6519C4FF424_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* iOSNotificationsWrapper_NotificationReceived_mC235492A257B60D1DF1316B5855BF3713E04DD43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* iOSNotificationsWrapper_RemoteNotificationReceived_m277C3CFFA45FCD3514C6D8F9A422F09BDEA4F153_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6;;
struct iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshaled_pinvoke;
struct iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshaled_pinvoke;;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct iOSNotificationDataU5BU5D_t7889313E71D5D67EB0577E2743DBBCC3ED1FA590;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t5E5AAFCB36C9CFF85EE3134F392BDC6642307F03 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationData>
struct  List_1_t169A85D76AB1E000B90048F77432786CB7349865  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	iOSNotificationDataU5BU5D_t7889313E71D5D67EB0577E2743DBBCC3ED1FA590* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t169A85D76AB1E000B90048F77432786CB7349865, ____items_1)); }
	inline iOSNotificationDataU5BU5D_t7889313E71D5D67EB0577E2743DBBCC3ED1FA590* get__items_1() const { return ____items_1; }
	inline iOSNotificationDataU5BU5D_t7889313E71D5D67EB0577E2743DBBCC3ED1FA590** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(iOSNotificationDataU5BU5D_t7889313E71D5D67EB0577E2743DBBCC3ED1FA590* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t169A85D76AB1E000B90048F77432786CB7349865, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t169A85D76AB1E000B90048F77432786CB7349865, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t169A85D76AB1E000B90048F77432786CB7349865, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t169A85D76AB1E000B90048F77432786CB7349865_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	iOSNotificationDataU5BU5D_t7889313E71D5D67EB0577E2743DBBCC3ED1FA590* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t169A85D76AB1E000B90048F77432786CB7349865_StaticFields, ____emptyArray_5)); }
	inline iOSNotificationDataU5BU5D_t7889313E71D5D67EB0577E2743DBBCC3ED1FA590* get__emptyArray_5() const { return ____emptyArray_5; }
	inline iOSNotificationDataU5BU5D_t7889313E71D5D67EB0577E2743DBBCC3ED1FA590** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(iOSNotificationDataU5BU5D_t7889313E71D5D67EB0577E2743DBBCC3ED1FA590* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct  Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// Unity.Notifications.iOS.AuthorizationRequest
struct  AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676  : public RuntimeObject
{
public:
	// System.Boolean Unity.Notifications.iOS.AuthorizationRequest::<IsFinished>k__BackingField
	bool ___U3CIsFinishedU3Ek__BackingField_0;
	// System.Boolean Unity.Notifications.iOS.AuthorizationRequest::<Granted>k__BackingField
	bool ___U3CGrantedU3Ek__BackingField_1;
	// System.String Unity.Notifications.iOS.AuthorizationRequest::<Error>k__BackingField
	String_t* ___U3CErrorU3Ek__BackingField_2;
	// System.String Unity.Notifications.iOS.AuthorizationRequest::<DeviceToken>k__BackingField
	String_t* ___U3CDeviceTokenU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CIsFinishedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676, ___U3CIsFinishedU3Ek__BackingField_0)); }
	inline bool get_U3CIsFinishedU3Ek__BackingField_0() const { return ___U3CIsFinishedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CIsFinishedU3Ek__BackingField_0() { return &___U3CIsFinishedU3Ek__BackingField_0; }
	inline void set_U3CIsFinishedU3Ek__BackingField_0(bool value)
	{
		___U3CIsFinishedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CGrantedU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676, ___U3CGrantedU3Ek__BackingField_1)); }
	inline bool get_U3CGrantedU3Ek__BackingField_1() const { return ___U3CGrantedU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CGrantedU3Ek__BackingField_1() { return &___U3CGrantedU3Ek__BackingField_1; }
	inline void set_U3CGrantedU3Ek__BackingField_1(bool value)
	{
		___U3CGrantedU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CErrorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676, ___U3CErrorU3Ek__BackingField_2)); }
	inline String_t* get_U3CErrorU3Ek__BackingField_2() const { return ___U3CErrorU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CErrorU3Ek__BackingField_2() { return &___U3CErrorU3Ek__BackingField_2; }
	inline void set_U3CErrorU3Ek__BackingField_2(String_t* value)
	{
		___U3CErrorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CErrorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDeviceTokenU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676, ___U3CDeviceTokenU3Ek__BackingField_3)); }
	inline String_t* get_U3CDeviceTokenU3Ek__BackingField_3() const { return ___U3CDeviceTokenU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CDeviceTokenU3Ek__BackingField_3() { return &___U3CDeviceTokenU3Ek__BackingField_3; }
	inline void set_U3CDeviceTokenU3Ek__BackingField_3(String_t* value)
	{
		___U3CDeviceTokenU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDeviceTokenU3Ek__BackingField_3), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
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


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// Unity.Notifications.iOS.iOSNotificationCenter
struct  iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008  : public RuntimeObject
{
public:

public:
};

struct iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_StaticFields
{
public:
	// System.Boolean Unity.Notifications.iOS.iOSNotificationCenter::s_Initialized
	bool ___s_Initialized_0;
	// Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback Unity.Notifications.iOS.iOSNotificationCenter::s_OnNotificationReceived
	NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * ___s_OnNotificationReceived_1;
	// System.Boolean Unity.Notifications.iOS.iOSNotificationCenter::s_OnRemoteNotificationReceivedCallbackSet
	bool ___s_OnRemoteNotificationReceivedCallbackSet_2;
	// Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback Unity.Notifications.iOS.iOSNotificationCenter::s_OnRemoteNotificationReceived
	NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * ___s_OnRemoteNotificationReceived_3;
	// Unity.Notifications.iOS.iOSNotificationCenter/AuthorizationRequestCompletedCallback Unity.Notifications.iOS.iOSNotificationCenter::OnAuthorizationRequestCompleted
	AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF * ___OnAuthorizationRequestCompleted_4;

public:
	inline static int32_t get_offset_of_s_Initialized_0() { return static_cast<int32_t>(offsetof(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_StaticFields, ___s_Initialized_0)); }
	inline bool get_s_Initialized_0() const { return ___s_Initialized_0; }
	inline bool* get_address_of_s_Initialized_0() { return &___s_Initialized_0; }
	inline void set_s_Initialized_0(bool value)
	{
		___s_Initialized_0 = value;
	}

	inline static int32_t get_offset_of_s_OnNotificationReceived_1() { return static_cast<int32_t>(offsetof(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_StaticFields, ___s_OnNotificationReceived_1)); }
	inline NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * get_s_OnNotificationReceived_1() const { return ___s_OnNotificationReceived_1; }
	inline NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 ** get_address_of_s_OnNotificationReceived_1() { return &___s_OnNotificationReceived_1; }
	inline void set_s_OnNotificationReceived_1(NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * value)
	{
		___s_OnNotificationReceived_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_OnNotificationReceived_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_OnRemoteNotificationReceivedCallbackSet_2() { return static_cast<int32_t>(offsetof(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_StaticFields, ___s_OnRemoteNotificationReceivedCallbackSet_2)); }
	inline bool get_s_OnRemoteNotificationReceivedCallbackSet_2() const { return ___s_OnRemoteNotificationReceivedCallbackSet_2; }
	inline bool* get_address_of_s_OnRemoteNotificationReceivedCallbackSet_2() { return &___s_OnRemoteNotificationReceivedCallbackSet_2; }
	inline void set_s_OnRemoteNotificationReceivedCallbackSet_2(bool value)
	{
		___s_OnRemoteNotificationReceivedCallbackSet_2 = value;
	}

	inline static int32_t get_offset_of_s_OnRemoteNotificationReceived_3() { return static_cast<int32_t>(offsetof(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_StaticFields, ___s_OnRemoteNotificationReceived_3)); }
	inline NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * get_s_OnRemoteNotificationReceived_3() const { return ___s_OnRemoteNotificationReceived_3; }
	inline NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 ** get_address_of_s_OnRemoteNotificationReceived_3() { return &___s_OnRemoteNotificationReceived_3; }
	inline void set_s_OnRemoteNotificationReceived_3(NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * value)
	{
		___s_OnRemoteNotificationReceived_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_OnRemoteNotificationReceived_3), (void*)value);
	}

	inline static int32_t get_offset_of_OnAuthorizationRequestCompleted_4() { return static_cast<int32_t>(offsetof(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_StaticFields, ___OnAuthorizationRequestCompleted_4)); }
	inline AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF * get_OnAuthorizationRequestCompleted_4() const { return ___OnAuthorizationRequestCompleted_4; }
	inline AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF ** get_address_of_OnAuthorizationRequestCompleted_4() { return &___OnAuthorizationRequestCompleted_4; }
	inline void set_OnAuthorizationRequestCompleted_4(AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF * value)
	{
		___OnAuthorizationRequestCompleted_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAuthorizationRequestCompleted_4), (void*)value);
	}
};


// Unity.Notifications.iOS.iOSNotificationCenter/<>c
struct  U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C_StaticFields
{
public:
	// Unity.Notifications.iOS.iOSNotificationCenter/<>c Unity.Notifications.iOS.iOSNotificationCenter/<>c::<>9
	U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// System.Nullable`1<System.Int32>
struct  Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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


// System.DateTime
struct  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Double
struct  Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// Microsoft.CodeAnalysis.EmbeddedAttribute
struct  EmbeddedAttribute_tB2FAC817877BBE79BED6B020ABD5B9B1E4CD4569  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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

// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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
struct  IntPtr_t 
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


// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct  IsReadOnlyAttribute_tFAD0993D14CC3E2B1685A7D29A1B551E9A8DD4C3  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
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


// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
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


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// Unity.Notifications.iOS.iOSAuthorizationRequestData
struct  iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6 
{
public:
	// System.Boolean Unity.Notifications.iOS.iOSAuthorizationRequestData::granted
	bool ___granted_0;
	// System.String Unity.Notifications.iOS.iOSAuthorizationRequestData::error
	String_t* ___error_1;
	// System.Boolean Unity.Notifications.iOS.iOSAuthorizationRequestData::finished
	bool ___finished_2;
	// System.String Unity.Notifications.iOS.iOSAuthorizationRequestData::deviceToken
	String_t* ___deviceToken_3;

public:
	inline static int32_t get_offset_of_granted_0() { return static_cast<int32_t>(offsetof(iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6, ___granted_0)); }
	inline bool get_granted_0() const { return ___granted_0; }
	inline bool* get_address_of_granted_0() { return &___granted_0; }
	inline void set_granted_0(bool value)
	{
		___granted_0 = value;
	}

	inline static int32_t get_offset_of_error_1() { return static_cast<int32_t>(offsetof(iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6, ___error_1)); }
	inline String_t* get_error_1() const { return ___error_1; }
	inline String_t** get_address_of_error_1() { return &___error_1; }
	inline void set_error_1(String_t* value)
	{
		___error_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___error_1), (void*)value);
	}

	inline static int32_t get_offset_of_finished_2() { return static_cast<int32_t>(offsetof(iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6, ___finished_2)); }
	inline bool get_finished_2() const { return ___finished_2; }
	inline bool* get_address_of_finished_2() { return &___finished_2; }
	inline void set_finished_2(bool value)
	{
		___finished_2 = value;
	}

	inline static int32_t get_offset_of_deviceToken_3() { return static_cast<int32_t>(offsetof(iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6, ___deviceToken_3)); }
	inline String_t* get_deviceToken_3() const { return ___deviceToken_3; }
	inline String_t** get_address_of_deviceToken_3() { return &___deviceToken_3; }
	inline void set_deviceToken_3(String_t* value)
	{
		___deviceToken_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deviceToken_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.Notifications.iOS.iOSAuthorizationRequestData
struct iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshaled_pinvoke
{
	int32_t ___granted_0;
	char* ___error_1;
	int32_t ___finished_2;
	char* ___deviceToken_3;
};
// Native definition for COM marshalling of Unity.Notifications.iOS.iOSAuthorizationRequestData
struct iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshaled_com
{
	int32_t ___granted_0;
	Il2CppChar* ___error_1;
	int32_t ___finished_2;
	Il2CppChar* ___deviceToken_3;
};

// Unity.Notifications.iOS.iOSNotificationData
struct  iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 
{
public:
	// System.String Unity.Notifications.iOS.iOSNotificationData::identifier
	String_t* ___identifier_0;
	// System.String Unity.Notifications.iOS.iOSNotificationData::title
	String_t* ___title_1;
	// System.String Unity.Notifications.iOS.iOSNotificationData::body
	String_t* ___body_2;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationData::badge
	int32_t ___badge_3;
	// System.String Unity.Notifications.iOS.iOSNotificationData::subtitle
	String_t* ___subtitle_4;
	// System.String Unity.Notifications.iOS.iOSNotificationData::categoryIdentifier
	String_t* ___categoryIdentifier_5;
	// System.String Unity.Notifications.iOS.iOSNotificationData::threadIdentifier
	String_t* ___threadIdentifier_6;
	// System.String Unity.Notifications.iOS.iOSNotificationData::data
	String_t* ___data_7;
	// System.Boolean Unity.Notifications.iOS.iOSNotificationData::showInForeground
	bool ___showInForeground_8;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationData::showInForegroundPresentationOptions
	int32_t ___showInForegroundPresentationOptions_9;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationData::triggerType
	int32_t ___triggerType_10;
	// System.Boolean Unity.Notifications.iOS.iOSNotificationData::repeats
	bool ___repeats_11;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationData::timeTriggerInterval
	int32_t ___timeTriggerInterval_12;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationData::calendarTriggerYear
	int32_t ___calendarTriggerYear_13;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationData::calendarTriggerMonth
	int32_t ___calendarTriggerMonth_14;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationData::calendarTriggerDay
	int32_t ___calendarTriggerDay_15;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationData::calendarTriggerHour
	int32_t ___calendarTriggerHour_16;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationData::calendarTriggerMinute
	int32_t ___calendarTriggerMinute_17;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationData::calendarTriggerSecond
	int32_t ___calendarTriggerSecond_18;
	// System.Single Unity.Notifications.iOS.iOSNotificationData::locationTriggerCenterX
	float ___locationTriggerCenterX_19;
	// System.Single Unity.Notifications.iOS.iOSNotificationData::locationTriggerCenterY
	float ___locationTriggerCenterY_20;
	// System.Single Unity.Notifications.iOS.iOSNotificationData::locationTriggerRadius
	float ___locationTriggerRadius_21;
	// System.Boolean Unity.Notifications.iOS.iOSNotificationData::locationTriggerNotifyOnEntry
	bool ___locationTriggerNotifyOnEntry_22;
	// System.Boolean Unity.Notifications.iOS.iOSNotificationData::locationTriggerNotifyOnExit
	bool ___locationTriggerNotifyOnExit_23;

public:
	inline static int32_t get_offset_of_identifier_0() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___identifier_0)); }
	inline String_t* get_identifier_0() const { return ___identifier_0; }
	inline String_t** get_address_of_identifier_0() { return &___identifier_0; }
	inline void set_identifier_0(String_t* value)
	{
		___identifier_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___identifier_0), (void*)value);
	}

	inline static int32_t get_offset_of_title_1() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___title_1)); }
	inline String_t* get_title_1() const { return ___title_1; }
	inline String_t** get_address_of_title_1() { return &___title_1; }
	inline void set_title_1(String_t* value)
	{
		___title_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___title_1), (void*)value);
	}

	inline static int32_t get_offset_of_body_2() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___body_2)); }
	inline String_t* get_body_2() const { return ___body_2; }
	inline String_t** get_address_of_body_2() { return &___body_2; }
	inline void set_body_2(String_t* value)
	{
		___body_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___body_2), (void*)value);
	}

	inline static int32_t get_offset_of_badge_3() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___badge_3)); }
	inline int32_t get_badge_3() const { return ___badge_3; }
	inline int32_t* get_address_of_badge_3() { return &___badge_3; }
	inline void set_badge_3(int32_t value)
	{
		___badge_3 = value;
	}

	inline static int32_t get_offset_of_subtitle_4() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___subtitle_4)); }
	inline String_t* get_subtitle_4() const { return ___subtitle_4; }
	inline String_t** get_address_of_subtitle_4() { return &___subtitle_4; }
	inline void set_subtitle_4(String_t* value)
	{
		___subtitle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subtitle_4), (void*)value);
	}

	inline static int32_t get_offset_of_categoryIdentifier_5() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___categoryIdentifier_5)); }
	inline String_t* get_categoryIdentifier_5() const { return ___categoryIdentifier_5; }
	inline String_t** get_address_of_categoryIdentifier_5() { return &___categoryIdentifier_5; }
	inline void set_categoryIdentifier_5(String_t* value)
	{
		___categoryIdentifier_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryIdentifier_5), (void*)value);
	}

	inline static int32_t get_offset_of_threadIdentifier_6() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___threadIdentifier_6)); }
	inline String_t* get_threadIdentifier_6() const { return ___threadIdentifier_6; }
	inline String_t** get_address_of_threadIdentifier_6() { return &___threadIdentifier_6; }
	inline void set_threadIdentifier_6(String_t* value)
	{
		___threadIdentifier_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___threadIdentifier_6), (void*)value);
	}

	inline static int32_t get_offset_of_data_7() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___data_7)); }
	inline String_t* get_data_7() const { return ___data_7; }
	inline String_t** get_address_of_data_7() { return &___data_7; }
	inline void set_data_7(String_t* value)
	{
		___data_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_7), (void*)value);
	}

	inline static int32_t get_offset_of_showInForeground_8() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___showInForeground_8)); }
	inline bool get_showInForeground_8() const { return ___showInForeground_8; }
	inline bool* get_address_of_showInForeground_8() { return &___showInForeground_8; }
	inline void set_showInForeground_8(bool value)
	{
		___showInForeground_8 = value;
	}

	inline static int32_t get_offset_of_showInForegroundPresentationOptions_9() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___showInForegroundPresentationOptions_9)); }
	inline int32_t get_showInForegroundPresentationOptions_9() const { return ___showInForegroundPresentationOptions_9; }
	inline int32_t* get_address_of_showInForegroundPresentationOptions_9() { return &___showInForegroundPresentationOptions_9; }
	inline void set_showInForegroundPresentationOptions_9(int32_t value)
	{
		___showInForegroundPresentationOptions_9 = value;
	}

	inline static int32_t get_offset_of_triggerType_10() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___triggerType_10)); }
	inline int32_t get_triggerType_10() const { return ___triggerType_10; }
	inline int32_t* get_address_of_triggerType_10() { return &___triggerType_10; }
	inline void set_triggerType_10(int32_t value)
	{
		___triggerType_10 = value;
	}

	inline static int32_t get_offset_of_repeats_11() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___repeats_11)); }
	inline bool get_repeats_11() const { return ___repeats_11; }
	inline bool* get_address_of_repeats_11() { return &___repeats_11; }
	inline void set_repeats_11(bool value)
	{
		___repeats_11 = value;
	}

	inline static int32_t get_offset_of_timeTriggerInterval_12() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___timeTriggerInterval_12)); }
	inline int32_t get_timeTriggerInterval_12() const { return ___timeTriggerInterval_12; }
	inline int32_t* get_address_of_timeTriggerInterval_12() { return &___timeTriggerInterval_12; }
	inline void set_timeTriggerInterval_12(int32_t value)
	{
		___timeTriggerInterval_12 = value;
	}

	inline static int32_t get_offset_of_calendarTriggerYear_13() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___calendarTriggerYear_13)); }
	inline int32_t get_calendarTriggerYear_13() const { return ___calendarTriggerYear_13; }
	inline int32_t* get_address_of_calendarTriggerYear_13() { return &___calendarTriggerYear_13; }
	inline void set_calendarTriggerYear_13(int32_t value)
	{
		___calendarTriggerYear_13 = value;
	}

	inline static int32_t get_offset_of_calendarTriggerMonth_14() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___calendarTriggerMonth_14)); }
	inline int32_t get_calendarTriggerMonth_14() const { return ___calendarTriggerMonth_14; }
	inline int32_t* get_address_of_calendarTriggerMonth_14() { return &___calendarTriggerMonth_14; }
	inline void set_calendarTriggerMonth_14(int32_t value)
	{
		___calendarTriggerMonth_14 = value;
	}

	inline static int32_t get_offset_of_calendarTriggerDay_15() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___calendarTriggerDay_15)); }
	inline int32_t get_calendarTriggerDay_15() const { return ___calendarTriggerDay_15; }
	inline int32_t* get_address_of_calendarTriggerDay_15() { return &___calendarTriggerDay_15; }
	inline void set_calendarTriggerDay_15(int32_t value)
	{
		___calendarTriggerDay_15 = value;
	}

	inline static int32_t get_offset_of_calendarTriggerHour_16() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___calendarTriggerHour_16)); }
	inline int32_t get_calendarTriggerHour_16() const { return ___calendarTriggerHour_16; }
	inline int32_t* get_address_of_calendarTriggerHour_16() { return &___calendarTriggerHour_16; }
	inline void set_calendarTriggerHour_16(int32_t value)
	{
		___calendarTriggerHour_16 = value;
	}

	inline static int32_t get_offset_of_calendarTriggerMinute_17() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___calendarTriggerMinute_17)); }
	inline int32_t get_calendarTriggerMinute_17() const { return ___calendarTriggerMinute_17; }
	inline int32_t* get_address_of_calendarTriggerMinute_17() { return &___calendarTriggerMinute_17; }
	inline void set_calendarTriggerMinute_17(int32_t value)
	{
		___calendarTriggerMinute_17 = value;
	}

	inline static int32_t get_offset_of_calendarTriggerSecond_18() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___calendarTriggerSecond_18)); }
	inline int32_t get_calendarTriggerSecond_18() const { return ___calendarTriggerSecond_18; }
	inline int32_t* get_address_of_calendarTriggerSecond_18() { return &___calendarTriggerSecond_18; }
	inline void set_calendarTriggerSecond_18(int32_t value)
	{
		___calendarTriggerSecond_18 = value;
	}

	inline static int32_t get_offset_of_locationTriggerCenterX_19() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___locationTriggerCenterX_19)); }
	inline float get_locationTriggerCenterX_19() const { return ___locationTriggerCenterX_19; }
	inline float* get_address_of_locationTriggerCenterX_19() { return &___locationTriggerCenterX_19; }
	inline void set_locationTriggerCenterX_19(float value)
	{
		___locationTriggerCenterX_19 = value;
	}

	inline static int32_t get_offset_of_locationTriggerCenterY_20() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___locationTriggerCenterY_20)); }
	inline float get_locationTriggerCenterY_20() const { return ___locationTriggerCenterY_20; }
	inline float* get_address_of_locationTriggerCenterY_20() { return &___locationTriggerCenterY_20; }
	inline void set_locationTriggerCenterY_20(float value)
	{
		___locationTriggerCenterY_20 = value;
	}

	inline static int32_t get_offset_of_locationTriggerRadius_21() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___locationTriggerRadius_21)); }
	inline float get_locationTriggerRadius_21() const { return ___locationTriggerRadius_21; }
	inline float* get_address_of_locationTriggerRadius_21() { return &___locationTriggerRadius_21; }
	inline void set_locationTriggerRadius_21(float value)
	{
		___locationTriggerRadius_21 = value;
	}

	inline static int32_t get_offset_of_locationTriggerNotifyOnEntry_22() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___locationTriggerNotifyOnEntry_22)); }
	inline bool get_locationTriggerNotifyOnEntry_22() const { return ___locationTriggerNotifyOnEntry_22; }
	inline bool* get_address_of_locationTriggerNotifyOnEntry_22() { return &___locationTriggerNotifyOnEntry_22; }
	inline void set_locationTriggerNotifyOnEntry_22(bool value)
	{
		___locationTriggerNotifyOnEntry_22 = value;
	}

	inline static int32_t get_offset_of_locationTriggerNotifyOnExit_23() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___locationTriggerNotifyOnExit_23)); }
	inline bool get_locationTriggerNotifyOnExit_23() const { return ___locationTriggerNotifyOnExit_23; }
	inline bool* get_address_of_locationTriggerNotifyOnExit_23() { return &___locationTriggerNotifyOnExit_23; }
	inline void set_locationTriggerNotifyOnExit_23(bool value)
	{
		___locationTriggerNotifyOnExit_23 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Notifications.iOS.iOSNotificationData
struct iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_pinvoke
{
	char* ___identifier_0;
	char* ___title_1;
	char* ___body_2;
	int32_t ___badge_3;
	char* ___subtitle_4;
	char* ___categoryIdentifier_5;
	char* ___threadIdentifier_6;
	char* ___data_7;
	int32_t ___showInForeground_8;
	int32_t ___showInForegroundPresentationOptions_9;
	int32_t ___triggerType_10;
	int32_t ___repeats_11;
	int32_t ___timeTriggerInterval_12;
	int32_t ___calendarTriggerYear_13;
	int32_t ___calendarTriggerMonth_14;
	int32_t ___calendarTriggerDay_15;
	int32_t ___calendarTriggerHour_16;
	int32_t ___calendarTriggerMinute_17;
	int32_t ___calendarTriggerSecond_18;
	float ___locationTriggerCenterX_19;
	float ___locationTriggerCenterY_20;
	float ___locationTriggerRadius_21;
	int32_t ___locationTriggerNotifyOnEntry_22;
	int32_t ___locationTriggerNotifyOnExit_23;
};
// Native definition for COM marshalling of Unity.Notifications.iOS.iOSNotificationData
struct iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_com
{
	Il2CppChar* ___identifier_0;
	Il2CppChar* ___title_1;
	Il2CppChar* ___body_2;
	int32_t ___badge_3;
	Il2CppChar* ___subtitle_4;
	Il2CppChar* ___categoryIdentifier_5;
	Il2CppChar* ___threadIdentifier_6;
	Il2CppChar* ___data_7;
	int32_t ___showInForeground_8;
	int32_t ___showInForegroundPresentationOptions_9;
	int32_t ___triggerType_10;
	int32_t ___repeats_11;
	int32_t ___timeTriggerInterval_12;
	int32_t ___calendarTriggerYear_13;
	int32_t ___calendarTriggerMonth_14;
	int32_t ___calendarTriggerDay_15;
	int32_t ___calendarTriggerHour_16;
	int32_t ___calendarTriggerMinute_17;
	int32_t ___calendarTriggerSecond_18;
	float ___locationTriggerCenterX_19;
	float ___locationTriggerCenterY_20;
	float ___locationTriggerRadius_21;
	int32_t ___locationTriggerNotifyOnEntry_22;
	int32_t ___locationTriggerNotifyOnExit_23;
};

// Unity.Notifications.iOS.iOSNotificationPushTrigger
struct  iOSNotificationPushTrigger_tC3A3576FC00D3D22F9B7DCFE77A8DBF6D1B08B28 
{
public:
	union
	{
		struct
		{
		};
		uint8_t iOSNotificationPushTrigger_tC3A3576FC00D3D22F9B7DCFE77A8DBF6D1B08B28__padding[1];
	};

public:
};


// Unity.Notifications.iOS.iOSNotificationSettings
struct  iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D 
{
public:
	// System.Int32 Unity.Notifications.iOS.iOSNotificationSettings::authorizationStatus
	int32_t ___authorizationStatus_0;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationSettings::notificationCenterSetting
	int32_t ___notificationCenterSetting_1;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationSettings::lockScreenSetting
	int32_t ___lockScreenSetting_2;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationSettings::carPlaySetting
	int32_t ___carPlaySetting_3;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationSettings::alertSetting
	int32_t ___alertSetting_4;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationSettings::badgeSetting
	int32_t ___badgeSetting_5;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationSettings::soundSetting
	int32_t ___soundSetting_6;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationSettings::alertStyle
	int32_t ___alertStyle_7;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationSettings::showPreviewsSetting
	int32_t ___showPreviewsSetting_8;

public:
	inline static int32_t get_offset_of_authorizationStatus_0() { return static_cast<int32_t>(offsetof(iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D, ___authorizationStatus_0)); }
	inline int32_t get_authorizationStatus_0() const { return ___authorizationStatus_0; }
	inline int32_t* get_address_of_authorizationStatus_0() { return &___authorizationStatus_0; }
	inline void set_authorizationStatus_0(int32_t value)
	{
		___authorizationStatus_0 = value;
	}

	inline static int32_t get_offset_of_notificationCenterSetting_1() { return static_cast<int32_t>(offsetof(iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D, ___notificationCenterSetting_1)); }
	inline int32_t get_notificationCenterSetting_1() const { return ___notificationCenterSetting_1; }
	inline int32_t* get_address_of_notificationCenterSetting_1() { return &___notificationCenterSetting_1; }
	inline void set_notificationCenterSetting_1(int32_t value)
	{
		___notificationCenterSetting_1 = value;
	}

	inline static int32_t get_offset_of_lockScreenSetting_2() { return static_cast<int32_t>(offsetof(iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D, ___lockScreenSetting_2)); }
	inline int32_t get_lockScreenSetting_2() const { return ___lockScreenSetting_2; }
	inline int32_t* get_address_of_lockScreenSetting_2() { return &___lockScreenSetting_2; }
	inline void set_lockScreenSetting_2(int32_t value)
	{
		___lockScreenSetting_2 = value;
	}

	inline static int32_t get_offset_of_carPlaySetting_3() { return static_cast<int32_t>(offsetof(iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D, ___carPlaySetting_3)); }
	inline int32_t get_carPlaySetting_3() const { return ___carPlaySetting_3; }
	inline int32_t* get_address_of_carPlaySetting_3() { return &___carPlaySetting_3; }
	inline void set_carPlaySetting_3(int32_t value)
	{
		___carPlaySetting_3 = value;
	}

	inline static int32_t get_offset_of_alertSetting_4() { return static_cast<int32_t>(offsetof(iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D, ___alertSetting_4)); }
	inline int32_t get_alertSetting_4() const { return ___alertSetting_4; }
	inline int32_t* get_address_of_alertSetting_4() { return &___alertSetting_4; }
	inline void set_alertSetting_4(int32_t value)
	{
		___alertSetting_4 = value;
	}

	inline static int32_t get_offset_of_badgeSetting_5() { return static_cast<int32_t>(offsetof(iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D, ___badgeSetting_5)); }
	inline int32_t get_badgeSetting_5() const { return ___badgeSetting_5; }
	inline int32_t* get_address_of_badgeSetting_5() { return &___badgeSetting_5; }
	inline void set_badgeSetting_5(int32_t value)
	{
		___badgeSetting_5 = value;
	}

	inline static int32_t get_offset_of_soundSetting_6() { return static_cast<int32_t>(offsetof(iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D, ___soundSetting_6)); }
	inline int32_t get_soundSetting_6() const { return ___soundSetting_6; }
	inline int32_t* get_address_of_soundSetting_6() { return &___soundSetting_6; }
	inline void set_soundSetting_6(int32_t value)
	{
		___soundSetting_6 = value;
	}

	inline static int32_t get_offset_of_alertStyle_7() { return static_cast<int32_t>(offsetof(iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D, ___alertStyle_7)); }
	inline int32_t get_alertStyle_7() const { return ___alertStyle_7; }
	inline int32_t* get_address_of_alertStyle_7() { return &___alertStyle_7; }
	inline void set_alertStyle_7(int32_t value)
	{
		___alertStyle_7 = value;
	}

	inline static int32_t get_offset_of_showPreviewsSetting_8() { return static_cast<int32_t>(offsetof(iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D, ___showPreviewsSetting_8)); }
	inline int32_t get_showPreviewsSetting_8() const { return ___showPreviewsSetting_8; }
	inline int32_t* get_address_of_showPreviewsSetting_8() { return &___showPreviewsSetting_8; }
	inline void set_showPreviewsSetting_8(int32_t value)
	{
		___showPreviewsSetting_8 = value;
	}
};


// Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger
struct  iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923 
{
public:
	// System.Int32 Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger::timeInterval
	int32_t ___timeInterval_0;
	// System.Boolean Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger::<Repeats>k__BackingField
	bool ___U3CRepeatsU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_timeInterval_0() { return static_cast<int32_t>(offsetof(iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923, ___timeInterval_0)); }
	inline int32_t get_timeInterval_0() const { return ___timeInterval_0; }
	inline int32_t* get_address_of_timeInterval_0() { return &___timeInterval_0; }
	inline void set_timeInterval_0(int32_t value)
	{
		___timeInterval_0 = value;
	}

	inline static int32_t get_offset_of_U3CRepeatsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923, ___U3CRepeatsU3Ek__BackingField_1)); }
	inline bool get_U3CRepeatsU3Ek__BackingField_1() const { return ___U3CRepeatsU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CRepeatsU3Ek__BackingField_1() { return &___U3CRepeatsU3Ek__BackingField_1; }
	inline void set_U3CRepeatsU3Ek__BackingField_1(bool value)
	{
		___U3CRepeatsU3Ek__BackingField_1 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger
struct iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923_marshaled_pinvoke
{
	int32_t ___timeInterval_0;
	int32_t ___U3CRepeatsU3Ek__BackingField_1;
};
// Native definition for COM marshalling of Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger
struct iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923_marshaled_com
{
	int32_t ___timeInterval_0;
	int32_t ___U3CRepeatsU3Ek__BackingField_1;
};

// System.Nullable`1<Unity.Notifications.iOS.iOSNotificationData>
struct  Nullable_1_tB7162D02A8365A4081ED1B0FD019CD56F505B3CC 
{
public:
	// T System.Nullable`1::value
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tB7162D02A8365A4081ED1B0FD019CD56F505B3CC, ___value_0)); }
	inline iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  get_value_0() const { return ___value_0; }
	inline iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___identifier_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___title_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___body_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___subtitle_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___categoryIdentifier_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___threadIdentifier_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___data_7), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tB7162D02A8365A4081ED1B0FD019CD56F505B3CC, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// Unity.Notifications.iOS.AuthorizationOption
struct  AuthorizationOption_t5B1B8BF3567E4A74BC9A83A804EF2087D55037B1 
{
public:
	// System.Int32 Unity.Notifications.iOS.AuthorizationOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AuthorizationOption_t5B1B8BF3567E4A74BC9A83A804EF2087D55037B1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
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
struct  Delegate_t  : public RuntimeObject
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

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
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

// Unity.Notifications.iOS.PresentationOption
struct  PresentationOption_t467B22F0F0ADD6BFC2DAFE468B6858EC2D8BBC0D 
{
public:
	// System.Int32 Unity.Notifications.iOS.PresentationOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PresentationOption_t467B22F0F0ADD6BFC2DAFE468B6858EC2D8BBC0D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
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


// System.TimeSpan
struct  TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_0)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_2)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};


// Unity.Notifications.iOS.iOSNotification
struct  iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25  : public RuntimeObject
{
public:
	// Unity.Notifications.iOS.iOSNotificationData Unity.Notifications.iOS.iOSNotification::data
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  ___data_0;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25, ___data_0)); }
	inline iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  get_data_0() const { return ___data_0; }
	inline iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_0))->___identifier_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_0))->___title_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_0))->___body_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_0))->___subtitle_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_0))->___categoryIdentifier_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_0))->___threadIdentifier_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_0))->___data_7), (void*)NULL);
		#endif
	}
};


// Unity.Notifications.iOS.iOSNotificationCalendarTrigger
struct  iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 
{
public:
	// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::<Year>k__BackingField
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CYearU3Ek__BackingField_0;
	// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::<Month>k__BackingField
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CMonthU3Ek__BackingField_1;
	// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::<Day>k__BackingField
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CDayU3Ek__BackingField_2;
	// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::<Hour>k__BackingField
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CHourU3Ek__BackingField_3;
	// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::<Minute>k__BackingField
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CMinuteU3Ek__BackingField_4;
	// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::<Second>k__BackingField
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CSecondU3Ek__BackingField_5;
	// System.Boolean Unity.Notifications.iOS.iOSNotificationCalendarTrigger::<Repeats>k__BackingField
	bool ___U3CRepeatsU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CYearU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022, ___U3CYearU3Ek__BackingField_0)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_U3CYearU3Ek__BackingField_0() const { return ___U3CYearU3Ek__BackingField_0; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_U3CYearU3Ek__BackingField_0() { return &___U3CYearU3Ek__BackingField_0; }
	inline void set_U3CYearU3Ek__BackingField_0(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___U3CYearU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CMonthU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022, ___U3CMonthU3Ek__BackingField_1)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_U3CMonthU3Ek__BackingField_1() const { return ___U3CMonthU3Ek__BackingField_1; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_U3CMonthU3Ek__BackingField_1() { return &___U3CMonthU3Ek__BackingField_1; }
	inline void set_U3CMonthU3Ek__BackingField_1(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___U3CMonthU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CDayU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022, ___U3CDayU3Ek__BackingField_2)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_U3CDayU3Ek__BackingField_2() const { return ___U3CDayU3Ek__BackingField_2; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_U3CDayU3Ek__BackingField_2() { return &___U3CDayU3Ek__BackingField_2; }
	inline void set_U3CDayU3Ek__BackingField_2(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___U3CDayU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CHourU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022, ___U3CHourU3Ek__BackingField_3)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_U3CHourU3Ek__BackingField_3() const { return ___U3CHourU3Ek__BackingField_3; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_U3CHourU3Ek__BackingField_3() { return &___U3CHourU3Ek__BackingField_3; }
	inline void set_U3CHourU3Ek__BackingField_3(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___U3CHourU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CMinuteU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022, ___U3CMinuteU3Ek__BackingField_4)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_U3CMinuteU3Ek__BackingField_4() const { return ___U3CMinuteU3Ek__BackingField_4; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_U3CMinuteU3Ek__BackingField_4() { return &___U3CMinuteU3Ek__BackingField_4; }
	inline void set_U3CMinuteU3Ek__BackingField_4(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___U3CMinuteU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CSecondU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022, ___U3CSecondU3Ek__BackingField_5)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_U3CSecondU3Ek__BackingField_5() const { return ___U3CSecondU3Ek__BackingField_5; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_U3CSecondU3Ek__BackingField_5() { return &___U3CSecondU3Ek__BackingField_5; }
	inline void set_U3CSecondU3Ek__BackingField_5(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___U3CSecondU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CRepeatsU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022, ___U3CRepeatsU3Ek__BackingField_6)); }
	inline bool get_U3CRepeatsU3Ek__BackingField_6() const { return ___U3CRepeatsU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CRepeatsU3Ek__BackingField_6() { return &___U3CRepeatsU3Ek__BackingField_6; }
	inline void set_U3CRepeatsU3Ek__BackingField_6(bool value)
	{
		___U3CRepeatsU3Ek__BackingField_6 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Notifications.iOS.iOSNotificationCalendarTrigger
struct iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022_marshaled_pinvoke
{
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CYearU3Ek__BackingField_0;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CMonthU3Ek__BackingField_1;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CDayU3Ek__BackingField_2;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CHourU3Ek__BackingField_3;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CMinuteU3Ek__BackingField_4;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CSecondU3Ek__BackingField_5;
	int32_t ___U3CRepeatsU3Ek__BackingField_6;
};
// Native definition for COM marshalling of Unity.Notifications.iOS.iOSNotificationCalendarTrigger
struct iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022_marshaled_com
{
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CYearU3Ek__BackingField_0;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CMonthU3Ek__BackingField_1;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CDayU3Ek__BackingField_2;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CHourU3Ek__BackingField_3;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CMinuteU3Ek__BackingField_4;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CSecondU3Ek__BackingField_5;
	int32_t ___U3CRepeatsU3Ek__BackingField_6;
};

// Unity.Notifications.iOS.iOSNotificationLocationTrigger
struct  iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 
{
public:
	// UnityEngine.Vector2 Unity.Notifications.iOS.iOSNotificationLocationTrigger::<Center>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CCenterU3Ek__BackingField_0;
	// System.Single Unity.Notifications.iOS.iOSNotificationLocationTrigger::<Radius>k__BackingField
	float ___U3CRadiusU3Ek__BackingField_1;
	// System.Boolean Unity.Notifications.iOS.iOSNotificationLocationTrigger::<NotifyOnEntry>k__BackingField
	bool ___U3CNotifyOnEntryU3Ek__BackingField_2;
	// System.Boolean Unity.Notifications.iOS.iOSNotificationLocationTrigger::<NotifyOnExit>k__BackingField
	bool ___U3CNotifyOnExitU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CCenterU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605, ___U3CCenterU3Ek__BackingField_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CCenterU3Ek__BackingField_0() const { return ___U3CCenterU3Ek__BackingField_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CCenterU3Ek__BackingField_0() { return &___U3CCenterU3Ek__BackingField_0; }
	inline void set_U3CCenterU3Ek__BackingField_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CCenterU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CRadiusU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605, ___U3CRadiusU3Ek__BackingField_1)); }
	inline float get_U3CRadiusU3Ek__BackingField_1() const { return ___U3CRadiusU3Ek__BackingField_1; }
	inline float* get_address_of_U3CRadiusU3Ek__BackingField_1() { return &___U3CRadiusU3Ek__BackingField_1; }
	inline void set_U3CRadiusU3Ek__BackingField_1(float value)
	{
		___U3CRadiusU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CNotifyOnEntryU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605, ___U3CNotifyOnEntryU3Ek__BackingField_2)); }
	inline bool get_U3CNotifyOnEntryU3Ek__BackingField_2() const { return ___U3CNotifyOnEntryU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CNotifyOnEntryU3Ek__BackingField_2() { return &___U3CNotifyOnEntryU3Ek__BackingField_2; }
	inline void set_U3CNotifyOnEntryU3Ek__BackingField_2(bool value)
	{
		___U3CNotifyOnEntryU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CNotifyOnExitU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605, ___U3CNotifyOnExitU3Ek__BackingField_3)); }
	inline bool get_U3CNotifyOnExitU3Ek__BackingField_3() const { return ___U3CNotifyOnExitU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CNotifyOnExitU3Ek__BackingField_3() { return &___U3CNotifyOnExitU3Ek__BackingField_3; }
	inline void set_U3CNotifyOnExitU3Ek__BackingField_3(bool value)
	{
		___U3CNotifyOnExitU3Ek__BackingField_3 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Notifications.iOS.iOSNotificationLocationTrigger
struct iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605_marshaled_pinvoke
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CCenterU3Ek__BackingField_0;
	float ___U3CRadiusU3Ek__BackingField_1;
	int32_t ___U3CNotifyOnEntryU3Ek__BackingField_2;
	int32_t ___U3CNotifyOnExitU3Ek__BackingField_3;
};
// Native definition for COM marshalling of Unity.Notifications.iOS.iOSNotificationLocationTrigger
struct iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605_marshaled_com
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CCenterU3Ek__BackingField_0;
	float ___U3CRadiusU3Ek__BackingField_1;
	int32_t ___U3CNotifyOnEntryU3Ek__BackingField_2;
	int32_t ___U3CNotifyOnExitU3Ek__BackingField_3;
};

// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
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

// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
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


// System.ArgumentException
struct  ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Unity.Notifications.iOS.iOSNotificationCenter/AuthorizationRequestCompletedCallback
struct  AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback
struct  NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Notifications.iOS.iOSNotificationsWrapper/AuthorizationRequestCallback
struct  AuthorizationRequestCallback_tA1D3C80486C750EC3B6638B2C4B91540E393C4F3  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Notifications.iOS.iOSNotificationsWrapper/NotificationReceivedCallback
struct  NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Unity.Notifications.iOS.iOSNotificationsWrapper
struct  iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_StaticFields
{
public:
	// Unity.Notifications.iOS.iOSNotificationsWrapper/AuthorizationRequestCallback Unity.Notifications.iOS.iOSNotificationsWrapper::s_OnAuthenticationRequestFinished
	AuthorizationRequestCallback_tA1D3C80486C750EC3B6638B2C4B91540E393C4F3 * ___s_OnAuthenticationRequestFinished_4;
	// Unity.Notifications.iOS.iOSNotificationsWrapper/NotificationReceivedCallback Unity.Notifications.iOS.iOSNotificationsWrapper::s_OnNotificationReceived
	NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 * ___s_OnNotificationReceived_5;
	// Unity.Notifications.iOS.iOSNotificationsWrapper/NotificationReceivedCallback Unity.Notifications.iOS.iOSNotificationsWrapper::s_OnRemoteNotificationReceived
	NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 * ___s_OnRemoteNotificationReceived_6;

public:
	inline static int32_t get_offset_of_s_OnAuthenticationRequestFinished_4() { return static_cast<int32_t>(offsetof(iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_StaticFields, ___s_OnAuthenticationRequestFinished_4)); }
	inline AuthorizationRequestCallback_tA1D3C80486C750EC3B6638B2C4B91540E393C4F3 * get_s_OnAuthenticationRequestFinished_4() const { return ___s_OnAuthenticationRequestFinished_4; }
	inline AuthorizationRequestCallback_tA1D3C80486C750EC3B6638B2C4B91540E393C4F3 ** get_address_of_s_OnAuthenticationRequestFinished_4() { return &___s_OnAuthenticationRequestFinished_4; }
	inline void set_s_OnAuthenticationRequestFinished_4(AuthorizationRequestCallback_tA1D3C80486C750EC3B6638B2C4B91540E393C4F3 * value)
	{
		___s_OnAuthenticationRequestFinished_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_OnAuthenticationRequestFinished_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_OnNotificationReceived_5() { return static_cast<int32_t>(offsetof(iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_StaticFields, ___s_OnNotificationReceived_5)); }
	inline NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 * get_s_OnNotificationReceived_5() const { return ___s_OnNotificationReceived_5; }
	inline NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 ** get_address_of_s_OnNotificationReceived_5() { return &___s_OnNotificationReceived_5; }
	inline void set_s_OnNotificationReceived_5(NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 * value)
	{
		___s_OnNotificationReceived_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_OnNotificationReceived_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_OnRemoteNotificationReceived_6() { return static_cast<int32_t>(offsetof(iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_StaticFields, ___s_OnRemoteNotificationReceived_6)); }
	inline NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 * get_s_OnRemoteNotificationReceived_6() const { return ___s_OnRemoteNotificationReceived_6; }
	inline NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 ** get_address_of_s_OnRemoteNotificationReceived_6() { return &___s_OnRemoteNotificationReceived_6; }
	inline void set_s_OnRemoteNotificationReceived_6(NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 * value)
	{
		___s_OnRemoteNotificationReceived_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_OnRemoteNotificationReceived_6), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Unity.Notifications.iOS.iOSNotificationData[]
struct iOSNotificationDataU5BU5D_t7889313E71D5D67EB0577E2743DBBCC3ED1FA590  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  m_Items[1];

public:
	inline iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___identifier_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___title_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___body_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___subtitle_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___categoryIdentifier_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___threadIdentifier_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___data_7), (void*)NULL);
		#endif
	}
	inline iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___identifier_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___title_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___body_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___subtitle_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___categoryIdentifier_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___threadIdentifier_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___data_7), (void*)NULL);
		#endif
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

IL2CPP_EXTERN_C void iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshal_pinvoke(const iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6& unmarshaled, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshal_pinvoke_back(const iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshaled_pinvoke& marshaled, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6& unmarshaled);
IL2CPP_EXTERN_C void iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshal_pinvoke_cleanup(iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshaled_pinvoke& marshaled);

// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_gshared (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf<Unity.Notifications.iOS.iOSNotificationData>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_SizeOf_TisiOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_mE1118FD79EDAD3D4068DAFCF0F86C0892D44D721_gshared (iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  ___structure0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::StructureToPtr<Unity.Notifications.iOS.iOSNotificationData>(!!0,System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_StructureToPtr_TisiOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_mA5A137B8C80DD53600055405992D2C85AA6E5A07_gshared (iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  ___structure0, intptr_t ___ptr1, bool ___fDeleteOld2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationData>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC05329E0BBFE451A6B3071BFC91C41DBBE9C1F8F_gshared (List_1_t169A85D76AB1E000B90048F77432786CB7349865 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationData>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m1EFCA77693DC381F285C8F235B0278000A58E818_gshared (List_1_t169A85D76AB1E000B90048F77432786CB7349865 * __this, iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  ___item0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationData>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationDataU5BU5D_t7889313E71D5D67EB0577E2743DBBCC3ED1FA590* List_1_ToArray_m57ED027F5606FE5F8AD35744FC987E9E07625EDA_gshared (List_1_t169A85D76AB1E000B90048F77432786CB7349865 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<Unity.Notifications.iOS.iOSNotificationData>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mFE230167EC1EEF62518BEE849F67517E9061B7E5_gshared (Nullable_1_tB7162D02A8365A4081ED1B0FD019CD56F505B3CC * __this, iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  ___value0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::RegisterAuthorizationRequestCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_RegisterAuthorizationRequestCallback_mA347E373A60EDFC6856FCA6EC0CF621B234F05BB (const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::RequestAuthorization(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_RequestAuthorization_m341457AF6325E493269BDC7D26A51F057C2262FA (int32_t ___options0, bool ___registerRemote1, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/AuthorizationRequestCompletedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequestCompletedCallback__ctor_m30EFF0819EB802C5E405EC72AFA55E2093002817 (AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::add_OnAuthorizationRequestCompleted(Unity.Notifications.iOS.iOSNotificationCenter/AuthorizationRequestCompletedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_add_OnAuthorizationRequestCompleted_m3A8949609FCE0FC069FCAD4DDFBC01F04F97982C (AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF * ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.AuthorizationRequest::set_IsFinished(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthorizationRequest_set_IsFinished_mAED11A9DD594CA7EA548FFD600E9FBB7F76CB336_inline (AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.AuthorizationRequest::set_Granted(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthorizationRequest_set_Granted_m0FDA28D3B975A3B02654DFB62C8F354047125D07_inline (AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.AuthorizationRequest::set_Error(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthorizationRequest_set_Error_mE85BA8C0180B42AEE7BCCD5EC37604D91BAA11EF_inline (AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.AuthorizationRequest::set_DeviceToken(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthorizationRequest_set_DeviceToken_m3DD8821EB8D8C6AD3AD1A7383BF5AFF33362B447_inline (AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::remove_OnAuthorizationRequestCompleted(Unity.Notifications.iOS.iOSNotificationCenter/AuthorizationRequestCompletedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_remove_OnAuthorizationRequestCompleted_mEA20AEFC8D7D8B00457118562DAFFDD79420973C (AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF * ___value0, const RuntimeMethod* method);
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.Int32 Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationTimeIntervalTrigger_get_Type_m7DC585CF58AB71A010E84315578CFAAA106AAB7A (const RuntimeMethod* method);
// System.Boolean Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger::get_Repeats()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool iOSNotificationTimeIntervalTrigger_get_Repeats_m48972F26AAE37EAE2D337E87AEBC4DE40987626F_inline (iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Int32 Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationCalendarTrigger_get_Type_mDFBE0CFA22C928F25BD0709D779C5B83BFDC8746 (const RuntimeMethod* method);
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Year()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Year_m8A0F301185923E277357D4EEE554EE673E1660C3_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, const RuntimeMethod*))Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<System.Int32>::get_Value()
inline int32_t Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, const RuntimeMethod*))Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_gshared)(__this, method);
}
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Month()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Month_m2AFF6F4F357F8297E262AA31AEA418A4C0FC4F89_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method);
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Day()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Day_m42898486914CB6EBB5B7AAD70B7981B21E929EA7_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method);
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Hour()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Hour_mA4304F009A3F9CA93B9715AE5D3BAB81E5045FB6_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method);
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Minute()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Minute_mD045386C9F63AC301048D5C2EBF479DD25C64397_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method);
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Second()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Second_m6EE7FF71AEA66769586E8559C2E7A11B2EC47E99_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Repeats()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool iOSNotificationCalendarTrigger_get_Repeats_mE736C71557A7C086738EBD56C6D1936CE4200B34_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method);
// System.Int32 Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationLocationTrigger_get_Type_m29D1C4F1B0B4CD039CA79165ECF517593D1E67EE (const RuntimeMethod* method);
// UnityEngine.Vector2 Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_Center()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  iOSNotificationLocationTrigger_get_Center_m908323B952AA351BCA1A2E8060B3776FE2FFB91A_inline (iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_NotifyOnEntry()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool iOSNotificationLocationTrigger_get_NotifyOnEntry_mC842CDA7A8BE02A586FCE22413756402AE40C66A_inline (iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_NotifyOnExit()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool iOSNotificationLocationTrigger_get_NotifyOnExit_mF117ACA5EAD44C39991624CA17B5909508776A98_inline (iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * __this, const RuntimeMethod* method);
// System.Single Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_Radius()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float iOSNotificationLocationTrigger_get_Radius_mD267EADF32C368187283E4B768C9EDF341B35E8F_inline (iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * __this, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C (const RuntimeMethod* method);
// System.String System.DateTime::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m19ECEFF7BA22ED4425F7562A82A1C2308E934204 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String Unity.Notifications.iOS.iOSNotification::GenerateUniqueID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotification_GenerateUniqueID_m7670980F54E912CF48CC6929E0B0575E328124A8 (const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotification::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification__ctor_m12783CF62ECB6ADBAEEF50373F000E9617A5301D (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, String_t* ___identifier0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::RegisterOnReceivedRemoteNotificationCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_RegisterOnReceivedRemoteNotificationCallback_m9558DD461486B0613BB2BB12FC0410930D125748 (const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::add_s_OnRemoteNotificationReceived(Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_add_s_OnRemoteNotificationReceived_m0AA103703A85C30023CFBC6E7062A750ECFD3DBE (NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::remove_s_OnRemoteNotificationReceived(Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_remove_s_OnRemoteNotificationReceived_m50C6EE014B87ED0297F272FFB652B4D5A392F299 (NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * ___value0, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::RegisterOnReceivedCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_RegisterOnReceivedCallback_mE7EE23A3B5802F36B73989102962E66E5EFB0E25 (const RuntimeMethod* method);
// System.Boolean Unity.Notifications.iOS.iOSNotificationCenter::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationCenter_Initialize_m55BF113D85F5E185FD0B86F0D3DF75B69661AC83 (const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotification::Verify()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_Verify_mFFC5B64C570DD11370164A7F134A2F4D296A6BC0 (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::ScheduleLocalNotification(Unity.Notifications.iOS.iOSNotificationData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_ScheduleLocalNotification_m352F2AD73A09D4ADC882E8001E614D38EF4576A1 (iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  ___data0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback::Invoke(Unity.Notifications.iOS.iOSNotification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback_Invoke_mCCF71E824463A5CF6863EDFB9FB650FE5784CACC (NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * __this, iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * ___notification0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/AuthorizationRequestCompletedCallback::Invoke(Unity.Notifications.iOS.iOSAuthorizationRequestData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequestCompletedCallback_Invoke_m98C3A172462D0B6C610EB757C91A2588E93F3C03 (AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF * __this, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  ___data0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback__ctor_m6AE0F51AFB3D07273AD38F0D7C6193528E7D1961 (NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Double System.TimeSpan::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_m28CDC7B9ADFEAFF912CC9B66984090CFE60B9AA4 (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger::set_TimeInterval(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationTimeIntervalTrigger_set_TimeInterval_mEAF737982A0DF4B33396D3766DC45C89D3097B92 (iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923 * __this, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger::set_Repeats(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationTimeIntervalTrigger_set_Repeats_m6171793E71519177BD5D31FD2EB3919063EF041D_inline (iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::AuthorizationRequestReceived(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_AuthorizationRequestReceived_m90390A23265A5C3DA79A082E0466D6519C4FF424 (intptr_t ___authRequestDataPtr0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::RemoteNotificationReceived(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_RemoteNotificationReceived_m277C3CFFA45FCD3514C6D8F9A422F09BDEA4F153 (intptr_t ___notificationDataPtr0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::NotificationReceived(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_NotificationReceived_mC235492A257B60D1DF1316B5855BF3713E04DD43 (intptr_t ___notificationDataPtr0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper/AuthorizationRequestCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequestCallback__ctor_m868F99A8BEFAEC8EC4117FCDD67497341FEBDD74 (AuthorizationRequestCallback_tA1D3C80486C750EC3B6638B2C4B91540E393C4F3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_SetAuthorizationRequestReceivedDelegate(Unity.Notifications.iOS.iOSNotificationsWrapper/AuthorizationRequestCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__SetAuthorizationRequestReceivedDelegate_m53B50E456C34B0155E11E14EBBD4C29A559B940F (AuthorizationRequestCallback_tA1D3C80486C750EC3B6638B2C4B91540E393C4F3 * ___callback0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper/NotificationReceivedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback__ctor_mA1E99CE6E6538FA8F118BC8EC7200C8D677B515F (NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_SetRemoteNotificationReceivedDelegate(Unity.Notifications.iOS.iOSNotificationsWrapper/NotificationReceivedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__SetRemoteNotificationReceivedDelegate_mB24D9D7D169B8384EBD773792A76D0545AC42A95 (NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 * ___callback0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_SetNotificationReceivedDelegate(Unity.Notifications.iOS.iOSNotificationsWrapper/NotificationReceivedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__SetNotificationReceivedDelegate_m67AF6FD539392DF3CBCF7A40BAAE3A5C608D71B0 (NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 * ___callback0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Object System.Runtime.InteropServices.Marshal::PtrToStructure(System.IntPtr,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Marshal_PtrToStructure_m5FA7EF86B49F005564D15359A6C10E4C7526F4A3 (intptr_t ___ptr0, Type_t * ___structureType1, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::OnFinishedAuthorizationRequest(Unity.Notifications.iOS.iOSAuthorizationRequestData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_OnFinishedAuthorizationRequest_mBD5AAD252BD792ABD68CD78EA031F5B72FF74EBB (iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  ___data0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::OnReceivedRemoteNotification(Unity.Notifications.iOS.iOSNotificationData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_OnReceivedRemoteNotification_mDE9587EF313E0FF1F94B4255DD834F7E8CA3796E (iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  ___data0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::OnSentNotification(Unity.Notifications.iOS.iOSNotificationData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_OnSentNotification_m1F59C13DF660147D3490025904C6CDC4F2A08DE8 (iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  ___data0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_RequestAuthorization(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__RequestAuthorization_m96D52D1577E3B7B9A161CBE33B9417BC68061CB4 (int32_t ___options0, bool ___registerForRemote1, const RuntimeMethod* method);
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_GetNotificationSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__GetNotificationSettings_mDD703CEF31142A83CBA8D1AEE71380F0996BA158 (const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_FreeUnmanagedMemory(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__FreeUnmanagedMemory_mE11F2A32A0C013D93D8F3C56B736B9A1892CDD2D (intptr_t ___ptr0, const RuntimeMethod* method);
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf<Unity.Notifications.iOS.iOSNotificationData>(!!0)
inline int32_t Marshal_SizeOf_TisiOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_mE1118FD79EDAD3D4068DAFCF0F86C0892D44D721 (iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  ___structure0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 , const RuntimeMethod*))Marshal_SizeOf_TisiOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_mE1118FD79EDAD3D4068DAFCF0F86C0892D44D721_gshared)(___structure0, method);
}
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_AllocHGlobal_mED1B623D229DB8FAB58D187E4E73D3DA2E8AE6EC (int32_t ___cb0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::StructureToPtr<Unity.Notifications.iOS.iOSNotificationData>(!!0,System.IntPtr,System.Boolean)
inline void Marshal_StructureToPtr_TisiOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_mA5A137B8C80DD53600055405992D2C85AA6E5A07 (iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  ___structure0, intptr_t ___ptr1, bool ___fDeleteOld2, const RuntimeMethod* method)
{
	((  void (*) (iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 , intptr_t, bool, const RuntimeMethod*))Marshal_StructureToPtr_TisiOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_mA5A137B8C80DD53600055405992D2C85AA6E5A07_gshared)(___structure0, ___ptr1, ___fDeleteOld2, method);
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_ScheduleLocalNotification(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__ScheduleLocalNotification_m6AF3C95370B6F2E77027436B8E7BDD327A8CD544 (intptr_t ___ptr0, const RuntimeMethod* method);
// System.Int32 Unity.Notifications.iOS.iOSNotificationsWrapper::_GetDeliveredNotificationDataCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationsWrapper__GetDeliveredNotificationDataCount_m864DD268E5AABCBA46F9FF52EC71E53DD5D42B71 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationData>::.ctor()
inline void List_1__ctor_mC05329E0BBFE451A6B3071BFC91C41DBBE9C1F8F (List_1_t169A85D76AB1E000B90048F77432786CB7349865 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t169A85D76AB1E000B90048F77432786CB7349865 *, const RuntimeMethod*))List_1__ctor_mC05329E0BBFE451A6B3071BFC91C41DBBE9C1F8F_gshared)(__this, method);
}
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_GetDeliveredNotificationDataAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__GetDeliveredNotificationDataAt_mB2887F92FFBF850A44C40D00B6C6A8B939AC14A1 (int32_t ___index0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationData>::Add(!0)
inline void List_1_Add_m1EFCA77693DC381F285C8F235B0278000A58E818 (List_1_t169A85D76AB1E000B90048F77432786CB7349865 * __this, iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t169A85D76AB1E000B90048F77432786CB7349865 *, iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 , const RuntimeMethod*))List_1_Add_m1EFCA77693DC381F285C8F235B0278000A58E818_gshared)(__this, ___item0, method);
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_FreeUnmanagediOSNotificationData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__FreeUnmanagediOSNotificationData_m26A232A569648B14E68A815B5E0B9F19D3885869 (intptr_t ___ptr0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationData>::ToArray()
inline iOSNotificationDataU5BU5D_t7889313E71D5D67EB0577E2743DBBCC3ED1FA590* List_1_ToArray_m57ED027F5606FE5F8AD35744FC987E9E07625EDA (List_1_t169A85D76AB1E000B90048F77432786CB7349865 * __this, const RuntimeMethod* method)
{
	return ((  iOSNotificationDataU5BU5D_t7889313E71D5D67EB0577E2743DBBCC3ED1FA590* (*) (List_1_t169A85D76AB1E000B90048F77432786CB7349865 *, const RuntimeMethod*))List_1_ToArray_m57ED027F5606FE5F8AD35744FC987E9E07625EDA_gshared)(__this, method);
}
// System.Int32 Unity.Notifications.iOS.iOSNotificationsWrapper::_GetScheduledNotificationDataCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationsWrapper__GetScheduledNotificationDataCount_m2BEFABD8115B959399CD44CA1A3B25533B3794DD (const RuntimeMethod* method);
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_GetScheduledNotificationDataAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__GetScheduledNotificationDataAt_mB0F158CDFB1F6720E13080C8D42BBEB50D26292C (int32_t ___index0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_SetApplicationBadge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__SetApplicationBadge_m8783BF138FA9F3D96A391FBC14AD5A218027BF1E (int32_t ___badge0, const RuntimeMethod* method);
// System.Int32 Unity.Notifications.iOS.iOSNotificationsWrapper::_GetApplicationBadge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationsWrapper__GetApplicationBadge_mAD93A8C52BC70B24D006AB5C8A89DF26643148BC (const RuntimeMethod* method);
// System.Boolean Unity.Notifications.iOS.iOSNotificationsWrapper::_GetAppOpenedUsingNotification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationsWrapper__GetAppOpenedUsingNotification_m4893DF4E2971137B170098F975DB1991F94FBC89 (const RuntimeMethod* method);
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_GetLastNotificationData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__GetLastNotificationData_m7BF8F9AEEBC8E77D4B047A8389FCC597020AC3BE (const RuntimeMethod* method);
// System.Void System.Nullable`1<Unity.Notifications.iOS.iOSNotificationData>::.ctor(!0)
inline void Nullable_1__ctor_mFE230167EC1EEF62518BEE849F67517E9061B7E5 (Nullable_1_tB7162D02A8365A4081ED1B0FD019CD56F505B3CC * __this, iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tB7162D02A8365A4081ED1B0FD019CD56F505B3CC *, iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 , const RuntimeMethod*))Nullable_1__ctor_mFE230167EC1EEF62518BEE849F67517E9061B7E5_gshared)(__this, ___value0, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC41C252011128378380FB873DA6C375C4B8E35D4 (U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C * __this, const RuntimeMethod* method);
IL2CPP_EXTERN_C void DEFAULT_CALL _RequestAuthorization(int32_t, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL _ScheduleLocalNotification(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL _SetNotificationReceivedDelegate(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL _SetRemoteNotificationReceivedDelegate(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL _SetAuthorizationRequestReceivedDelegate(Il2CppMethodPointer);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL _GetNotificationSettings();
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _GetScheduledNotificationDataCount();
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL _GetScheduledNotificationDataAt(int32_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _GetDeliveredNotificationDataCount();
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL _GetDeliveredNotificationDataAt(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL _RemoveScheduledNotification(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL _RemoveAllScheduledNotifications();
IL2CPP_EXTERN_C void DEFAULT_CALL _RemoveDeliveredNotification(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL _SetApplicationBadge(int32_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _GetApplicationBadge();
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _GetAppOpenedUsingNotification();
IL2CPP_EXTERN_C void DEFAULT_CALL _RemoveAllDeliveredNotifications();
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL _GetLastNotificationData();
IL2CPP_EXTERN_C void DEFAULT_CALL _FreeUnmanagedMemory(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL _FreeUnmanagediOSNotificationData(intptr_t);
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
// System.Boolean Unity.Notifications.iOS.AuthorizationRequest::get_IsFinished()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AuthorizationRequest_get_IsFinished_m71305C657CAF3F80819962A6FC8872C82568EBE0 (AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsFinished { get; private set; }
		bool L_0 = __this->get_U3CIsFinishedU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Unity.Notifications.iOS.AuthorizationRequest::set_IsFinished(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequest_set_IsFinished_mAED11A9DD594CA7EA548FFD600E9FBB7F76CB336 (AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsFinished { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CIsFinishedU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean Unity.Notifications.iOS.AuthorizationRequest::get_Granted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AuthorizationRequest_get_Granted_mC17CDA24EC97805C2EEE69A250AAED7F95604A39 (AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * __this, const RuntimeMethod* method)
{
	{
		// public bool Granted { get; private set; }
		bool L_0 = __this->get_U3CGrantedU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Unity.Notifications.iOS.AuthorizationRequest::set_Granted(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequest_set_Granted_m0FDA28D3B975A3B02654DFB62C8F354047125D07 (AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool Granted { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CGrantedU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String Unity.Notifications.iOS.AuthorizationRequest::get_Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthorizationRequest_get_Error_mA12FAED4DD3FB6100D0B064B7960D1863D190E85 (AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * __this, const RuntimeMethod* method)
{
	{
		// public string Error { get; private set; }
		String_t* L_0 = __this->get_U3CErrorU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Unity.Notifications.iOS.AuthorizationRequest::set_Error(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequest_set_Error_mE85BA8C0180B42AEE7BCCD5EC37604D91BAA11EF (AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Error { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CErrorU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.String Unity.Notifications.iOS.AuthorizationRequest::get_DeviceToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthorizationRequest_get_DeviceToken_m965C39D2B7A3E50E0C9958929B531FA3A5FEFBA1 (AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * __this, const RuntimeMethod* method)
{
	{
		// public string DeviceToken { get; private set; }
		String_t* L_0 = __this->get_U3CDeviceTokenU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Unity.Notifications.iOS.AuthorizationRequest::set_DeviceToken(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequest_set_DeviceToken_m3DD8821EB8D8C6AD3AD1A7383BF5AFF33362B447 (AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string DeviceToken { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CDeviceTokenU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void Unity.Notifications.iOS.AuthorizationRequest::.ctor(Unity.Notifications.iOS.AuthorizationOption,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequest__ctor_m9525545D7AC78C911ABC4D18A94D2DA4A0BA5C68 (AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * __this, int32_t ___authorizationOption0, bool ___registerForRemoteNotifications1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthorizationRequest_OnAuthorizationRequestCompleted_mB3579FF2C6E254D3DA4EDC75CA2FF3A00E209408_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AuthorizationRequest(AuthorizationOption authorizationOption, bool registerForRemoteNotifications)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// iOSNotificationsWrapper.RegisterAuthorizationRequestCallback();
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_il2cpp_TypeInfo_var);
		iOSNotificationsWrapper_RegisterAuthorizationRequestCallback_mA347E373A60EDFC6856FCA6EC0CF621B234F05BB(/*hidden argument*/NULL);
		// iOSNotificationsWrapper.RequestAuthorization((int)authorizationOption, registerForRemoteNotifications);
		int32_t L_0 = ___authorizationOption0;
		bool L_1 = ___registerForRemoteNotifications1;
		iOSNotificationsWrapper_RequestAuthorization_m341457AF6325E493269BDC7D26A51F057C2262FA(L_0, L_1, /*hidden argument*/NULL);
		// iOSNotificationCenter.OnAuthorizationRequestCompleted += OnAuthorizationRequestCompleted;
		AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF * L_2 = (AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF *)il2cpp_codegen_object_new(AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF_il2cpp_TypeInfo_var);
		AuthorizationRequestCompletedCallback__ctor_m30EFF0819EB802C5E405EC72AFA55E2093002817(L_2, __this, (intptr_t)((intptr_t)AuthorizationRequest_OnAuthorizationRequestCompleted_mB3579FF2C6E254D3DA4EDC75CA2FF3A00E209408_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		iOSNotificationCenter_add_OnAuthorizationRequestCompleted_m3A8949609FCE0FC069FCAD4DDFBC01F04F97982C(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.AuthorizationRequest::OnAuthorizationRequestCompleted(Unity.Notifications.iOS.iOSAuthorizationRequestData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequest_OnAuthorizationRequestCompleted_mB3579FF2C6E254D3DA4EDC75CA2FF3A00E209408 (AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * __this, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  ___requestData0, const RuntimeMethod* method)
{
	{
		// IsFinished = requestData.finished;
		iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  L_0 = ___requestData0;
		bool L_1 = L_0.get_finished_2();
		AuthorizationRequest_set_IsFinished_mAED11A9DD594CA7EA548FFD600E9FBB7F76CB336_inline(__this, L_1, /*hidden argument*/NULL);
		// Granted = requestData.granted;
		iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  L_2 = ___requestData0;
		bool L_3 = L_2.get_granted_0();
		AuthorizationRequest_set_Granted_m0FDA28D3B975A3B02654DFB62C8F354047125D07_inline(__this, L_3, /*hidden argument*/NULL);
		// Error = requestData.error;
		iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  L_4 = ___requestData0;
		String_t* L_5 = L_4.get_error_1();
		AuthorizationRequest_set_Error_mE85BA8C0180B42AEE7BCCD5EC37604D91BAA11EF_inline(__this, L_5, /*hidden argument*/NULL);
		// DeviceToken = requestData.deviceToken;
		iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  L_6 = ___requestData0;
		String_t* L_7 = L_6.get_deviceToken_3();
		AuthorizationRequest_set_DeviceToken_m3DD8821EB8D8C6AD3AD1A7383BF5AFF33362B447_inline(__this, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.AuthorizationRequest::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequest_Dispose_m1F6691D34F6D844872F3539D57B3DEB0A56A8D74 (AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthorizationRequest_OnAuthorizationRequestCompleted_mB3579FF2C6E254D3DA4EDC75CA2FF3A00E209408_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// iOSNotificationCenter.OnAuthorizationRequestCompleted -= OnAuthorizationRequestCompleted;
		AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF * L_0 = (AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF *)il2cpp_codegen_object_new(AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF_il2cpp_TypeInfo_var);
		AuthorizationRequestCompletedCallback__ctor_m30EFF0819EB802C5E405EC72AFA55E2093002817(L_0, __this, (intptr_t)((intptr_t)AuthorizationRequest_OnAuthorizationRequestCompleted_mB3579FF2C6E254D3DA4EDC75CA2FF3A00E209408_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		iOSNotificationCenter_remove_OnAuthorizationRequestCompleted_mEA20AEFC8D7D8B00457118562DAFFDD79420973C(L_0, /*hidden argument*/NULL);
		// }
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
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_m1B7389133A43D709FB46E5D6243953A1D14CFBD5 (EmbeddedAttribute_tB2FAC817877BBE79BED6B020ABD5B9B1E4CD4569 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_m3E3DB4779359F51DB7256A1D9C9C8097145CB031 (IsReadOnlyAttribute_tFAD0993D14CC3E2B1685A7D29A1B551E9A8DD4C3 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSAuthorizationRequestData
IL2CPP_EXTERN_C void iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshal_pinvoke(const iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6& unmarshaled, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshaled_pinvoke& marshaled)
{
	marshaled.___granted_0 = static_cast<int32_t>(unmarshaled.get_granted_0());
	marshaled.___error_1 = il2cpp_codegen_marshal_string(unmarshaled.get_error_1());
	marshaled.___finished_2 = static_cast<int32_t>(unmarshaled.get_finished_2());
	marshaled.___deviceToken_3 = il2cpp_codegen_marshal_string(unmarshaled.get_deviceToken_3());
}
IL2CPP_EXTERN_C void iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshal_pinvoke_back(const iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshaled_pinvoke& marshaled, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6& unmarshaled)
{
	bool unmarshaled_granted_temp_0 = false;
	unmarshaled_granted_temp_0 = static_cast<bool>(marshaled.___granted_0);
	unmarshaled.set_granted_0(unmarshaled_granted_temp_0);
	unmarshaled.set_error_1(il2cpp_codegen_marshal_string_result(marshaled.___error_1));
	bool unmarshaled_finished_temp_2 = false;
	unmarshaled_finished_temp_2 = static_cast<bool>(marshaled.___finished_2);
	unmarshaled.set_finished_2(unmarshaled_finished_temp_2);
	unmarshaled.set_deviceToken_3(il2cpp_codegen_marshal_string_result(marshaled.___deviceToken_3));
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSAuthorizationRequestData
IL2CPP_EXTERN_C void iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshal_pinvoke_cleanup(iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___error_1);
	marshaled.___error_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___deviceToken_3);
	marshaled.___deviceToken_3 = NULL;
}
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSAuthorizationRequestData
IL2CPP_EXTERN_C void iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshal_com(const iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6& unmarshaled, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshaled_com& marshaled)
{
	marshaled.___granted_0 = static_cast<int32_t>(unmarshaled.get_granted_0());
	marshaled.___error_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_error_1());
	marshaled.___finished_2 = static_cast<int32_t>(unmarshaled.get_finished_2());
	marshaled.___deviceToken_3 = il2cpp_codegen_marshal_bstring(unmarshaled.get_deviceToken_3());
}
IL2CPP_EXTERN_C void iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshal_com_back(const iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshaled_com& marshaled, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6& unmarshaled)
{
	bool unmarshaled_granted_temp_0 = false;
	unmarshaled_granted_temp_0 = static_cast<bool>(marshaled.___granted_0);
	unmarshaled.set_granted_0(unmarshaled_granted_temp_0);
	unmarshaled.set_error_1(il2cpp_codegen_marshal_bstring_result(marshaled.___error_1));
	bool unmarshaled_finished_temp_2 = false;
	unmarshaled_finished_temp_2 = static_cast<bool>(marshaled.___finished_2);
	unmarshaled.set_finished_2(unmarshaled_finished_temp_2);
	unmarshaled.set_deviceToken_3(il2cpp_codegen_marshal_bstring_result(marshaled.___deviceToken_3));
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSAuthorizationRequestData
IL2CPP_EXTERN_C void iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshal_com_cleanup(iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___error_1);
	marshaled.___error_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___deviceToken_3);
	marshaled.___deviceToken_3 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Unity.Notifications.iOS.iOSNotification::get_CategoryIdentifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotification_get_CategoryIdentifier_m4E414DF053774B819E9C4A32505CFBA7637D0BC6 (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// get { return data.categoryIdentifier; }
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_0 = __this->get_address_of_data_0();
		String_t* L_1 = L_0->get_categoryIdentifier_5();
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// get { return data.categoryIdentifier; }
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_CategoryIdentifier(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_CategoryIdentifier_mECC330742B4318BB85E0298208A7B05CC2677A4F (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set { data.categoryIdentifier = value; }
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_0 = __this->get_address_of_data_0();
		String_t* L_1 = ___value0;
		L_0->set_categoryIdentifier_5(L_1);
		// set { data.categoryIdentifier = value; }
		return;
	}
}
// System.String Unity.Notifications.iOS.iOSNotification::get_Title()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotification_get_Title_mCD418968D711CC9E43CCC26ED2E6C2AD10AE32A0 (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// get { return data.title; }
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_0 = __this->get_address_of_data_0();
		String_t* L_1 = L_0->get_title_1();
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// get { return data.title; }
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_Title(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_Title_m5543C334BAC8EB7E0CB41C0FAB190BF0E8A49CE3 (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set { data.title = value; }
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_0 = __this->get_address_of_data_0();
		String_t* L_1 = ___value0;
		L_0->set_title_1(L_1);
		// set { data.title = value; }
		return;
	}
}
// System.String Unity.Notifications.iOS.iOSNotification::get_Body()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotification_get_Body_m3A8F4809591AF6E0A1935D9555CF686D301EBEC2 (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// get { return data.body; }
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_0 = __this->get_address_of_data_0();
		String_t* L_1 = L_0->get_body_2();
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// get { return data.body; }
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_Body(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_Body_m60222C7FE1A0B5A8959C1B2F62301B343079EBB5 (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set { data.body = value; }
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_0 = __this->get_address_of_data_0();
		String_t* L_1 = ___value0;
		L_0->set_body_2(L_1);
		// set { data.body = value; }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_ShowInForeground(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_ShowInForeground_m5CDAADD1F4958302625FB22BAD63593E91E5F9CD (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { data.showInForeground = value; }
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_0 = __this->get_address_of_data_0();
		bool L_1 = ___value0;
		L_0->set_showInForeground_8(L_1);
		// set { data.showInForeground = value; }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_ForegroundPresentationOption(Unity.Notifications.iOS.PresentationOption)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_ForegroundPresentationOption_mD8228915A03D3B94FDC32569CF7BD658B3472C6B (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { data.showInForegroundPresentationOptions = (int)value; }
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_0 = __this->get_address_of_data_0();
		int32_t L_1 = ___value0;
		L_0->set_showInForegroundPresentationOptions_9(L_1);
		// set { data.showInForegroundPresentationOptions = (int)value; }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_Trigger(Unity.Notifications.iOS.iOSNotificationTrigger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_Trigger_m41B5FA43DDC81CFD154152C84A907A53B023E586 (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationPushTrigger_tC3A3576FC00D3D22F9B7DCFE77A8DBF6D1B08B28_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605  V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	int32_t G_B4_0 = 0;
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * G_B10_0 = NULL;
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * G_B9_0 = NULL;
	int32_t G_B11_0 = 0;
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * G_B11_1 = NULL;
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * G_B13_0 = NULL;
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * G_B12_0 = NULL;
	int32_t G_B14_0 = 0;
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * G_B14_1 = NULL;
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * G_B16_0 = NULL;
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * G_B15_0 = NULL;
	int32_t G_B17_0 = 0;
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * G_B17_1 = NULL;
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * G_B19_0 = NULL;
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * G_B18_0 = NULL;
	int32_t G_B20_0 = 0;
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * G_B20_1 = NULL;
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * G_B22_0 = NULL;
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * G_B21_0 = NULL;
	int32_t G_B23_0 = 0;
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * G_B23_1 = NULL;
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * G_B25_0 = NULL;
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * G_B24_0 = NULL;
	int32_t G_B26_0 = 0;
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * G_B26_1 = NULL;
	{
		// if (value is iOSNotificationTimeIntervalTrigger)
		RuntimeObject* L_0 = ___value0;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0074;
		}
	}
	{
		// var trigger = (iOSNotificationTimeIntervalTrigger)value;
		RuntimeObject* L_2 = ___value0;
		V_1 = ((*(iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923 *)((iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923 *)UnBox(L_2, iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923_il2cpp_TypeInfo_var))));
		// data.triggerType = iOSNotificationTimeIntervalTrigger.Type;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_3 = __this->get_address_of_data_0();
		int32_t L_4;
		L_4 = iOSNotificationTimeIntervalTrigger_get_Type_m7DC585CF58AB71A010E84315578CFAAA106AAB7A(/*hidden argument*/NULL);
		L_3->set_triggerType_10(L_4);
		// data.timeTriggerInterval = trigger.timeInterval;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_5 = __this->get_address_of_data_0();
		iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923  L_6 = V_1;
		int32_t L_7 = L_6.get_timeInterval_0();
		L_5->set_timeTriggerInterval_12(L_7);
		// if (trigger.Repeats && trigger.timeInterval < 60)
		bool L_8;
		L_8 = iOSNotificationTimeIntervalTrigger_get_Repeats_m48972F26AAE37EAE2D337E87AEBC4DE40987626F_inline((iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923 *)(&V_1), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_004c;
		}
	}
	{
		iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923  L_9 = V_1;
		int32_t L_10 = L_9.get_timeInterval_0();
		G_B4_0 = ((((int32_t)L_10) < ((int32_t)((int32_t)60)))? 1 : 0);
		goto IL_004d;
	}

IL_004c:
	{
		G_B4_0 = 0;
	}

IL_004d:
	{
		V_2 = (bool)G_B4_0;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_005c;
		}
	}
	{
		// throw new ArgumentException("Time interval must be 60 seconds or greater for repeating notifications.");
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_12 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF095BC29C39D74DCA3923E99C34901B64AF08344)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&iOSNotification_set_Trigger_m41B5FA43DDC81CFD154152C84A907A53B023E586_RuntimeMethod_var)));
	}

IL_005c:
	{
		// data.repeats = trigger.Repeats;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_13 = __this->get_address_of_data_0();
		bool L_14;
		L_14 = iOSNotificationTimeIntervalTrigger_get_Repeats_m48972F26AAE37EAE2D337E87AEBC4DE40987626F_inline((iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923 *)(&V_1), /*hidden argument*/NULL);
		L_13->set_repeats_11(L_14);
		goto IL_0284;
	}

IL_0074:
	{
		// else if (value is iOSNotificationCalendarTrigger)
		RuntimeObject* L_15 = ___value0;
		V_3 = (bool)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_15, iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_01d5;
		}
	}
	{
		// var trigger = (iOSNotificationCalendarTrigger)value;
		RuntimeObject* L_17 = ___value0;
		V_4 = ((*(iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)UnBox(L_17, iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022_il2cpp_TypeInfo_var))));
		// data.triggerType = iOSNotificationCalendarTrigger.Type;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_18 = __this->get_address_of_data_0();
		int32_t L_19;
		L_19 = iOSNotificationCalendarTrigger_get_Type_mDFBE0CFA22C928F25BD0709D779C5B83BFDC8746(/*hidden argument*/NULL);
		L_18->set_triggerType_10(L_19);
		// data.calendarTriggerYear = trigger.Year != null ? trigger.Year.Value : -1;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_20 = __this->get_address_of_data_0();
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_21;
		L_21 = iOSNotificationCalendarTrigger_get_Year_m8A0F301185923E277357D4EEE554EE673E1660C3_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)(&V_4), /*hidden argument*/NULL);
		V_5 = L_21;
		bool L_22;
		L_22 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_5), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		G_B9_0 = L_20;
		if (L_22)
		{
			G_B10_0 = L_20;
			goto IL_00b8;
		}
	}
	{
		G_B11_0 = (-1);
		G_B11_1 = G_B9_0;
		goto IL_00c8;
	}

IL_00b8:
	{
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_23;
		L_23 = iOSNotificationCalendarTrigger_get_Year_m8A0F301185923E277357D4EEE554EE673E1660C3_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)(&V_4), /*hidden argument*/NULL);
		V_5 = L_23;
		int32_t L_24;
		L_24 = Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_5), /*hidden argument*/Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_RuntimeMethod_var);
		G_B11_0 = L_24;
		G_B11_1 = G_B10_0;
	}

IL_00c8:
	{
		G_B11_1->set_calendarTriggerYear_13(G_B11_0);
		// data.calendarTriggerMonth = trigger.Month != null ? trigger.Month.Value : -1;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_25 = __this->get_address_of_data_0();
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_26;
		L_26 = iOSNotificationCalendarTrigger_get_Month_m2AFF6F4F357F8297E262AA31AEA418A4C0FC4F89_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)(&V_4), /*hidden argument*/NULL);
		V_5 = L_26;
		bool L_27;
		L_27 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_5), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		G_B12_0 = L_25;
		if (L_27)
		{
			G_B13_0 = L_25;
			goto IL_00e8;
		}
	}
	{
		G_B14_0 = (-1);
		G_B14_1 = G_B12_0;
		goto IL_00f8;
	}

IL_00e8:
	{
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_28;
		L_28 = iOSNotificationCalendarTrigger_get_Month_m2AFF6F4F357F8297E262AA31AEA418A4C0FC4F89_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)(&V_4), /*hidden argument*/NULL);
		V_5 = L_28;
		int32_t L_29;
		L_29 = Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_5), /*hidden argument*/Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_RuntimeMethod_var);
		G_B14_0 = L_29;
		G_B14_1 = G_B13_0;
	}

IL_00f8:
	{
		G_B14_1->set_calendarTriggerMonth_14(G_B14_0);
		// data.calendarTriggerDay = trigger.Day != null ? trigger.Day.Value : -1;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_30 = __this->get_address_of_data_0();
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_31;
		L_31 = iOSNotificationCalendarTrigger_get_Day_m42898486914CB6EBB5B7AAD70B7981B21E929EA7_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)(&V_4), /*hidden argument*/NULL);
		V_5 = L_31;
		bool L_32;
		L_32 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_5), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		G_B15_0 = L_30;
		if (L_32)
		{
			G_B16_0 = L_30;
			goto IL_0118;
		}
	}
	{
		G_B17_0 = (-1);
		G_B17_1 = G_B15_0;
		goto IL_0128;
	}

IL_0118:
	{
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_33;
		L_33 = iOSNotificationCalendarTrigger_get_Day_m42898486914CB6EBB5B7AAD70B7981B21E929EA7_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)(&V_4), /*hidden argument*/NULL);
		V_5 = L_33;
		int32_t L_34;
		L_34 = Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_5), /*hidden argument*/Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_RuntimeMethod_var);
		G_B17_0 = L_34;
		G_B17_1 = G_B16_0;
	}

IL_0128:
	{
		G_B17_1->set_calendarTriggerDay_15(G_B17_0);
		// data.calendarTriggerHour = trigger.Hour != null ? trigger.Hour.Value : -1;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_35 = __this->get_address_of_data_0();
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_36;
		L_36 = iOSNotificationCalendarTrigger_get_Hour_mA4304F009A3F9CA93B9715AE5D3BAB81E5045FB6_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)(&V_4), /*hidden argument*/NULL);
		V_5 = L_36;
		bool L_37;
		L_37 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_5), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		G_B18_0 = L_35;
		if (L_37)
		{
			G_B19_0 = L_35;
			goto IL_0148;
		}
	}
	{
		G_B20_0 = (-1);
		G_B20_1 = G_B18_0;
		goto IL_0158;
	}

IL_0148:
	{
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_38;
		L_38 = iOSNotificationCalendarTrigger_get_Hour_mA4304F009A3F9CA93B9715AE5D3BAB81E5045FB6_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)(&V_4), /*hidden argument*/NULL);
		V_5 = L_38;
		int32_t L_39;
		L_39 = Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_5), /*hidden argument*/Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_RuntimeMethod_var);
		G_B20_0 = L_39;
		G_B20_1 = G_B19_0;
	}

IL_0158:
	{
		G_B20_1->set_calendarTriggerHour_16(G_B20_0);
		// data.calendarTriggerMinute = trigger.Minute != null ? trigger.Minute.Value : -1;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_40 = __this->get_address_of_data_0();
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_41;
		L_41 = iOSNotificationCalendarTrigger_get_Minute_mD045386C9F63AC301048D5C2EBF479DD25C64397_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)(&V_4), /*hidden argument*/NULL);
		V_5 = L_41;
		bool L_42;
		L_42 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_5), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		G_B21_0 = L_40;
		if (L_42)
		{
			G_B22_0 = L_40;
			goto IL_0178;
		}
	}
	{
		G_B23_0 = (-1);
		G_B23_1 = G_B21_0;
		goto IL_0188;
	}

IL_0178:
	{
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_43;
		L_43 = iOSNotificationCalendarTrigger_get_Minute_mD045386C9F63AC301048D5C2EBF479DD25C64397_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)(&V_4), /*hidden argument*/NULL);
		V_5 = L_43;
		int32_t L_44;
		L_44 = Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_5), /*hidden argument*/Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_RuntimeMethod_var);
		G_B23_0 = L_44;
		G_B23_1 = G_B22_0;
	}

IL_0188:
	{
		G_B23_1->set_calendarTriggerMinute_17(G_B23_0);
		// data.calendarTriggerSecond = trigger.Second != null ? trigger.Second.Value : -1;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_45 = __this->get_address_of_data_0();
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_46;
		L_46 = iOSNotificationCalendarTrigger_get_Second_m6EE7FF71AEA66769586E8559C2E7A11B2EC47E99_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)(&V_4), /*hidden argument*/NULL);
		V_5 = L_46;
		bool L_47;
		L_47 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_5), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		G_B24_0 = L_45;
		if (L_47)
		{
			G_B25_0 = L_45;
			goto IL_01a8;
		}
	}
	{
		G_B26_0 = (-1);
		G_B26_1 = G_B24_0;
		goto IL_01b8;
	}

IL_01a8:
	{
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_48;
		L_48 = iOSNotificationCalendarTrigger_get_Second_m6EE7FF71AEA66769586E8559C2E7A11B2EC47E99_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)(&V_4), /*hidden argument*/NULL);
		V_5 = L_48;
		int32_t L_49;
		L_49 = Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_5), /*hidden argument*/Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_RuntimeMethod_var);
		G_B26_0 = L_49;
		G_B26_1 = G_B25_0;
	}

IL_01b8:
	{
		G_B26_1->set_calendarTriggerSecond_18(G_B26_0);
		// data.repeats = trigger.Repeats;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_50 = __this->get_address_of_data_0();
		bool L_51;
		L_51 = iOSNotificationCalendarTrigger_get_Repeats_mE736C71557A7C086738EBD56C6D1936CE4200B34_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)(&V_4), /*hidden argument*/NULL);
		L_50->set_repeats_11(L_51);
		goto IL_0284;
	}

IL_01d5:
	{
		// else if (value is iOSNotificationLocationTrigger)
		RuntimeObject* L_52 = ___value0;
		V_6 = (bool)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_52, iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_53 = V_6;
		if (!L_53)
		{
			goto IL_0267;
		}
	}
	{
		// var trigger = (iOSNotificationLocationTrigger)value;
		RuntimeObject* L_54 = ___value0;
		V_7 = ((*(iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 *)((iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 *)UnBox(L_54, iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605_il2cpp_TypeInfo_var))));
		// data.triggerType = iOSNotificationLocationTrigger.Type;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_55 = __this->get_address_of_data_0();
		int32_t L_56;
		L_56 = iOSNotificationLocationTrigger_get_Type_m29D1C4F1B0B4CD039CA79165ECF517593D1E67EE(/*hidden argument*/NULL);
		L_55->set_triggerType_10(L_56);
		// data.locationTriggerCenterX = trigger.Center.x;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_57 = __this->get_address_of_data_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_58;
		L_58 = iOSNotificationLocationTrigger_get_Center_m908323B952AA351BCA1A2E8060B3776FE2FFB91A_inline((iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 *)(&V_7), /*hidden argument*/NULL);
		float L_59 = L_58.get_x_0();
		L_57->set_locationTriggerCenterX_19(L_59);
		// data.locationTriggerCenterY = trigger.Center.y;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_60 = __this->get_address_of_data_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_61;
		L_61 = iOSNotificationLocationTrigger_get_Center_m908323B952AA351BCA1A2E8060B3776FE2FFB91A_inline((iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 *)(&V_7), /*hidden argument*/NULL);
		float L_62 = L_61.get_y_1();
		L_60->set_locationTriggerCenterY_20(L_62);
		// data.locationTriggerNotifyOnEntry = trigger.NotifyOnEntry;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_63 = __this->get_address_of_data_0();
		bool L_64;
		L_64 = iOSNotificationLocationTrigger_get_NotifyOnEntry_mC842CDA7A8BE02A586FCE22413756402AE40C66A_inline((iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 *)(&V_7), /*hidden argument*/NULL);
		L_63->set_locationTriggerNotifyOnEntry_22(L_64);
		// data.locationTriggerNotifyOnExit = trigger.NotifyOnExit;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_65 = __this->get_address_of_data_0();
		bool L_66;
		L_66 = iOSNotificationLocationTrigger_get_NotifyOnExit_mF117ACA5EAD44C39991624CA17B5909508776A98_inline((iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 *)(&V_7), /*hidden argument*/NULL);
		L_65->set_locationTriggerNotifyOnExit_23(L_66);
		// data.locationTriggerRadius = trigger.Radius;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_67 = __this->get_address_of_data_0();
		float L_68;
		L_68 = iOSNotificationLocationTrigger_get_Radius_mD267EADF32C368187283E4B768C9EDF341B35E8F_inline((iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 *)(&V_7), /*hidden argument*/NULL);
		L_67->set_locationTriggerRadius_21(L_68);
		goto IL_0284;
	}

IL_0267:
	{
		// else if (value is iOSNotificationPushTrigger)
		RuntimeObject* L_69 = ___value0;
		V_8 = (bool)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_69, iOSNotificationPushTrigger_tC3A3576FC00D3D22F9B7DCFE77A8DBF6D1B08B28_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_70 = V_8;
		if (!L_70)
		{
			goto IL_0284;
		}
	}
	{
		// data.triggerType = 3;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_71 = __this->get_address_of_data_0();
		L_71->set_triggerType_10(3);
	}

IL_0284:
	{
		// }
		return;
	}
}
// System.String Unity.Notifications.iOS.iOSNotification::GenerateUniqueID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotification_GenerateUniqueID_m7670980F54E912CF48CC6929E0B0575E328124A8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral639F01DFEB0CC71DC57E14265FC5642D13533AEF);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		// return Math.Abs(DateTime.Now.ToString("yyMMddHHmmssffffff").GetHashCode()).ToString();
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0;
		L_0 = DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C(/*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = DateTime_ToString_m19ECEFF7BA22ED4425F7562A82A1C2308E934204((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_0), _stringLiteral639F01DFEB0CC71DC57E14265FC5642D13533AEF, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = il2cpp_codegen_abs(L_2);
		V_1 = L_3;
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		V_2 = L_4;
		goto IL_0028;
	}

IL_0028:
	{
		// }
		String_t* L_5 = V_2;
		return L_5;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification__ctor_m4EBBEFB3A261C60DC402F75851F9658595E2E4B4 (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, const RuntimeMethod* method)
{
	{
		// public iOSNotification() : this(GenerateUniqueID())
		String_t* L_0;
		L_0 = iOSNotification_GenerateUniqueID_m7670980F54E912CF48CC6929E0B0575E328124A8(/*hidden argument*/NULL);
		iOSNotification__ctor_m12783CF62ECB6ADBAEEF50373F000E9617A5301D(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification__ctor_m12783CF62ECB6ADBAEEF50373F000E9617A5301D (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, String_t* ___identifier0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public iOSNotification(string identifier)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// data = new iOSNotificationData();
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_0 = __this->get_address_of_data_0();
		il2cpp_codegen_initobj(L_0, sizeof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 ));
		// data.identifier = identifier;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_1 = __this->get_address_of_data_0();
		String_t* L_2 = ___identifier0;
		L_1->set_identifier_0(L_2);
		// data.title = "";
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_3 = __this->get_address_of_data_0();
		L_3->set_title_1(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// data.body = "";
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_4 = __this->get_address_of_data_0();
		L_4->set_body_2(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// data.badge = -1;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_5 = __this->get_address_of_data_0();
		L_5->set_badge_3((-1));
		// data.subtitle = "";
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_6 = __this->get_address_of_data_0();
		L_6->set_subtitle_4(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// data.categoryIdentifier = "";
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_7 = __this->get_address_of_data_0();
		L_7->set_categoryIdentifier_5(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// data.threadIdentifier = "";
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_8 = __this->get_address_of_data_0();
		L_8->set_threadIdentifier_6(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// data.data = "";
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_9 = __this->get_address_of_data_0();
		L_9->set_data_7(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// data.showInForeground = false;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_10 = __this->get_address_of_data_0();
		L_10->set_showInForeground_8((bool)0);
		// data.showInForegroundPresentationOptions = (int)(PresentationOption.Alert |
		//     PresentationOption.Sound);
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_11 = __this->get_address_of_data_0();
		L_11->set_showInForegroundPresentationOptions_9(6);
		// data.triggerType = -1;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_12 = __this->get_address_of_data_0();
		L_12->set_triggerType_10((-1));
		// data.repeats = false;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_13 = __this->get_address_of_data_0();
		L_13->set_repeats_11((bool)0);
		// data.timeTriggerInterval = -1;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_14 = __this->get_address_of_data_0();
		L_14->set_timeTriggerInterval_12((-1));
		// data.calendarTriggerYear = -1;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_15 = __this->get_address_of_data_0();
		L_15->set_calendarTriggerYear_13((-1));
		// data.calendarTriggerMonth = -1;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_16 = __this->get_address_of_data_0();
		L_16->set_calendarTriggerMonth_14((-1));
		// data.calendarTriggerDay = -1;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_17 = __this->get_address_of_data_0();
		L_17->set_calendarTriggerDay_15((-1));
		// data.calendarTriggerHour = -1;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_18 = __this->get_address_of_data_0();
		L_18->set_calendarTriggerHour_16((-1));
		// data.calendarTriggerMinute = -1;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_19 = __this->get_address_of_data_0();
		L_19->set_calendarTriggerMinute_17((-1));
		// data.calendarTriggerSecond = -1;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_20 = __this->get_address_of_data_0();
		L_20->set_calendarTriggerSecond_18((-1));
		// data.locationTriggerCenterX = 0f;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_21 = __this->get_address_of_data_0();
		L_21->set_locationTriggerCenterX_19((0.0f));
		// data.locationTriggerCenterY = 0f;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_22 = __this->get_address_of_data_0();
		L_22->set_locationTriggerCenterY_20((0.0f));
		// data.locationTriggerRadius = 2f;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_23 = __this->get_address_of_data_0();
		L_23->set_locationTriggerRadius_21((2.0f));
		// data.locationTriggerNotifyOnEntry = true;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_24 = __this->get_address_of_data_0();
		L_24->set_locationTriggerNotifyOnEntry_22((bool)1);
		// data.locationTriggerNotifyOnExit = false;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_25 = __this->get_address_of_data_0();
		L_25->set_locationTriggerNotifyOnExit_23((bool)0);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::Verify()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_Verify_mFFC5B64C570DD11370164A7F134A2F4D296A6BC0 (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (data.identifier == null)
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_0 = __this->get_address_of_data_0();
		String_t* L_1 = L_0->get_identifier_0();
		V_0 = (bool)((((RuntimeObject*)(String_t*)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// data.identifier = GenerateUniqueID();
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_3 = __this->get_address_of_data_0();
		String_t* L_4;
		L_4 = iOSNotification_GenerateUniqueID_m7670980F54E912CF48CC6929E0B0575E328124A8(/*hidden argument*/NULL);
		L_3->set_identifier_0(L_4);
	}

IL_0025:
	{
		// }
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
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationCalendarTrigger
IL2CPP_EXTERN_C void iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022_marshal_pinvoke(const iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022& unmarshaled, iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CYearU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Year>k__BackingField' of type 'iOSNotificationCalendarTrigger'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CYearU3Ek__BackingField_0Exception, NULL);
}
IL2CPP_EXTERN_C void iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022_marshal_pinvoke_back(const iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022_marshaled_pinvoke& marshaled, iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022& unmarshaled)
{
	Exception_t* ___U3CYearU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Year>k__BackingField' of type 'iOSNotificationCalendarTrigger'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CYearU3Ek__BackingField_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationCalendarTrigger
IL2CPP_EXTERN_C void iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022_marshal_pinvoke_cleanup(iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationCalendarTrigger
IL2CPP_EXTERN_C void iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022_marshal_com(const iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022& unmarshaled, iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022_marshaled_com& marshaled)
{
	Exception_t* ___U3CYearU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Year>k__BackingField' of type 'iOSNotificationCalendarTrigger'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CYearU3Ek__BackingField_0Exception, NULL);
}
IL2CPP_EXTERN_C void iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022_marshal_com_back(const iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022_marshaled_com& marshaled, iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022& unmarshaled)
{
	Exception_t* ___U3CYearU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Year>k__BackingField' of type 'iOSNotificationCalendarTrigger'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CYearU3Ek__BackingField_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationCalendarTrigger
IL2CPP_EXTERN_C void iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022_marshal_com_cleanup(iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022_marshaled_com& marshaled)
{
}
// System.Int32 Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationCalendarTrigger_get_Type_mDFBE0CFA22C928F25BD0709D779C5B83BFDC8746 (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// public static int Type { get { return (int)NotificationTriggerType.CalendarTrigger; } }
		V_0 = ((int32_t)10);
		goto IL_0006;
	}

IL_0006:
	{
		// public static int Type { get { return (int)NotificationTriggerType.CalendarTrigger; } }
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Year()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Year_m8A0F301185923E277357D4EEE554EE673E1660C3 (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method)
{
	{
		// public int? Year { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = __this->get_U3CYearU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Year_m8A0F301185923E277357D4EEE554EE673E1660C3_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *>(__this + _offset);
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  _returnValue;
	_returnValue = iOSNotificationCalendarTrigger_get_Year_m8A0F301185923E277357D4EEE554EE673E1660C3_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Month()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Month_m2AFF6F4F357F8297E262AA31AEA418A4C0FC4F89 (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method)
{
	{
		// public int? Month { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = __this->get_U3CMonthU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Month_m2AFF6F4F357F8297E262AA31AEA418A4C0FC4F89_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *>(__this + _offset);
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  _returnValue;
	_returnValue = iOSNotificationCalendarTrigger_get_Month_m2AFF6F4F357F8297E262AA31AEA418A4C0FC4F89_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Day()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Day_m42898486914CB6EBB5B7AAD70B7981B21E929EA7 (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method)
{
	{
		// public int? Day { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = __this->get_U3CDayU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Day_m42898486914CB6EBB5B7AAD70B7981B21E929EA7_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *>(__this + _offset);
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  _returnValue;
	_returnValue = iOSNotificationCalendarTrigger_get_Day_m42898486914CB6EBB5B7AAD70B7981B21E929EA7_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Hour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Hour_mA4304F009A3F9CA93B9715AE5D3BAB81E5045FB6 (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method)
{
	{
		// public int? Hour { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = __this->get_U3CHourU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Hour_mA4304F009A3F9CA93B9715AE5D3BAB81E5045FB6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *>(__this + _offset);
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  _returnValue;
	_returnValue = iOSNotificationCalendarTrigger_get_Hour_mA4304F009A3F9CA93B9715AE5D3BAB81E5045FB6_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Minute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Minute_mD045386C9F63AC301048D5C2EBF479DD25C64397 (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method)
{
	{
		// public int? Minute { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = __this->get_U3CMinuteU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Minute_mD045386C9F63AC301048D5C2EBF479DD25C64397_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *>(__this + _offset);
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  _returnValue;
	_returnValue = iOSNotificationCalendarTrigger_get_Minute_mD045386C9F63AC301048D5C2EBF479DD25C64397_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Second()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Second_m6EE7FF71AEA66769586E8559C2E7A11B2EC47E99 (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method)
{
	{
		// public int? Second { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = __this->get_U3CSecondU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Second_m6EE7FF71AEA66769586E8559C2E7A11B2EC47E99_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *>(__this + _offset);
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  _returnValue;
	_returnValue = iOSNotificationCalendarTrigger_get_Second_m6EE7FF71AEA66769586E8559C2E7A11B2EC47E99_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Repeats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationCalendarTrigger_get_Repeats_mE736C71557A7C086738EBD56C6D1936CE4200B34 (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method)
{
	{
		// public bool Repeats { get; set; }
		bool L_0 = __this->get_U3CRepeatsU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool iOSNotificationCalendarTrigger_get_Repeats_mE736C71557A7C086738EBD56C6D1936CE4200B34_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *>(__this + _offset);
	bool _returnValue;
	_returnValue = iOSNotificationCalendarTrigger_get_Repeats_mE736C71557A7C086738EBD56C6D1936CE4200B34_inline(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::add_OnRemoteNotificationReceived(Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_add_OnRemoteNotificationReceived_mF30106F4112C325B3BA4BED24E0A5F80BC0AB8AC (NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!s_OnRemoteNotificationReceivedCallbackSet)
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		bool L_0 = ((iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var))->get_s_OnRemoteNotificationReceivedCallbackSet_2();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// iOSNotificationsWrapper.RegisterOnReceivedRemoteNotificationCallback();
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_il2cpp_TypeInfo_var);
		iOSNotificationsWrapper_RegisterOnReceivedRemoteNotificationCallback_m9558DD461486B0613BB2BB12FC0410930D125748(/*hidden argument*/NULL);
		// s_OnRemoteNotificationReceivedCallbackSet = true;
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		((iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var))->set_s_OnRemoteNotificationReceivedCallbackSet_2((bool)1);
	}

IL_001b:
	{
		// s_OnRemoteNotificationReceived += value;
		NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * L_2 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		iOSNotificationCenter_add_s_OnRemoteNotificationReceived_m0AA103703A85C30023CFBC6E7062A750ECFD3DBE(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::remove_OnRemoteNotificationReceived(Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_remove_OnRemoteNotificationReceived_m5AFA470C911835DD7EB84E2B12D74846A50541DE (NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_OnRemoteNotificationReceived -= value;
		NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		iOSNotificationCenter_remove_s_OnRemoteNotificationReceived_m50C6EE014B87ED0297F272FFB652B4D5A392F299(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::add_s_OnRemoteNotificationReceived(Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_add_s_OnRemoteNotificationReceived_m0AA103703A85C30023CFBC6E7062A750ECFD3DBE (NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * V_0 = NULL;
	NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * V_1 = NULL;
	NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * L_0 = ((iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var))->get_s_OnRemoteNotificationReceived_3();
		V_0 = L_0;
	}

IL_0006:
	{
		NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * L_1 = V_0;
		V_1 = L_1;
		NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * L_2 = V_1;
		NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 *)CastclassSealed((RuntimeObject*)L_4, NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * L_5 = V_2;
		NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * L_6 = V_1;
		NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * L_7;
		L_7 = InterlockedCompareExchangeImpl<NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 *>((NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 **)(((iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var))->get_address_of_s_OnRemoteNotificationReceived_3()), L_5, L_6);
		V_0 = L_7;
		NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * L_8 = V_0;
		NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * L_9 = V_1;
		if ((!(((RuntimeObject*)(NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 *)L_8) == ((RuntimeObject*)(NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::remove_s_OnRemoteNotificationReceived(Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_remove_s_OnRemoteNotificationReceived_m50C6EE014B87ED0297F272FFB652B4D5A392F299 (NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * V_0 = NULL;
	NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * V_1 = NULL;
	NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * L_0 = ((iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var))->get_s_OnRemoteNotificationReceived_3();
		V_0 = L_0;
	}

IL_0006:
	{
		NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * L_1 = V_0;
		V_1 = L_1;
		NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * L_2 = V_1;
		NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 *)CastclassSealed((RuntimeObject*)L_4, NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * L_5 = V_2;
		NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * L_6 = V_1;
		NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * L_7;
		L_7 = InterlockedCompareExchangeImpl<NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 *>((NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 **)(((iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var))->get_address_of_s_OnRemoteNotificationReceived_3()), L_5, L_6);
		V_0 = L_7;
		NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * L_8 = V_0;
		NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * L_9 = V_1;
		if ((!(((RuntimeObject*)(NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 *)L_8) == ((RuntimeObject*)(NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::add_OnAuthorizationRequestCompleted(Unity.Notifications.iOS.iOSNotificationCenter/AuthorizationRequestCompletedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_add_OnAuthorizationRequestCompleted_m3A8949609FCE0FC069FCAD4DDFBC01F04F97982C (AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF * V_0 = NULL;
	AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF * V_1 = NULL;
	AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF * L_0 = ((iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var))->get_OnAuthorizationRequestCompleted_4();
		V_0 = L_0;
	}

IL_0006:
	{
		AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF * L_1 = V_0;
		V_1 = L_1;
		AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF * L_2 = V_1;
		AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF *)CastclassSealed((RuntimeObject*)L_4, AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF * L_5 = V_2;
		AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF * L_6 = V_1;
		AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF * L_7;
		L_7 = InterlockedCompareExchangeImpl<AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF *>((AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF **)(((iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var))->get_address_of_OnAuthorizationRequestCompleted_4()), L_5, L_6);
		V_0 = L_7;
		AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF * L_8 = V_0;
		AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF * L_9 = V_1;
		if ((!(((RuntimeObject*)(AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF *)L_8) == ((RuntimeObject*)(AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::remove_OnAuthorizationRequestCompleted(Unity.Notifications.iOS.iOSNotificationCenter/AuthorizationRequestCompletedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_remove_OnAuthorizationRequestCompleted_mEA20AEFC8D7D8B00457118562DAFFDD79420973C (AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF * V_0 = NULL;
	AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF * V_1 = NULL;
	AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF * L_0 = ((iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var))->get_OnAuthorizationRequestCompleted_4();
		V_0 = L_0;
	}

IL_0006:
	{
		AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF * L_1 = V_0;
		V_1 = L_1;
		AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF * L_2 = V_1;
		AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF *)CastclassSealed((RuntimeObject*)L_4, AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF * L_5 = V_2;
		AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF * L_6 = V_1;
		AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF * L_7;
		L_7 = InterlockedCompareExchangeImpl<AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF *>((AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF **)(((iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var))->get_address_of_OnAuthorizationRequestCompleted_4()), L_5, L_6);
		V_0 = L_7;
		AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF * L_8 = V_0;
		AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF * L_9 = V_1;
		if ((!(((RuntimeObject*)(AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF *)L_8) == ((RuntimeObject*)(AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Boolean Unity.Notifications.iOS.iOSNotificationCenter::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationCenter_Initialize_m55BF113D85F5E185FD0B86F0D3DF75B69661AC83 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (s_Initialized)
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		bool L_0 = ((iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var))->get_s_Initialized_0();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return true;
		V_1 = (bool)1;
		goto IL_001e;
	}

IL_000e:
	{
		// iOSNotificationsWrapper.RegisterOnReceivedCallback();
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_il2cpp_TypeInfo_var);
		iOSNotificationsWrapper_RegisterOnReceivedCallback_mE7EE23A3B5802F36B73989102962E66E5EFB0E25(/*hidden argument*/NULL);
		// return s_Initialized = true;
		int32_t L_2 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		((iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var))->set_s_Initialized_0((bool)L_2);
		V_1 = (bool)L_2;
		goto IL_001e;
	}

IL_001e:
	{
		// }
		bool L_3 = V_1;
		return L_3;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::ScheduleNotification(Unity.Notifications.iOS.iOSNotification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_ScheduleNotification_m7C35154B28D1731A1E1D0750148D809BA95D5025 (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * ___notification0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!Initialize())
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = iOSNotificationCenter_Initialize_m55BF113D85F5E185FD0B86F0D3DF75B69661AC83(/*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		goto IL_0022;
	}

IL_000f:
	{
		// notification.Verify();
		iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * L_2 = ___notification0;
		NullCheck(L_2);
		iOSNotification_Verify_mFFC5B64C570DD11370164A7F134A2F4D296A6BC0(L_2, /*hidden argument*/NULL);
		// iOSNotificationsWrapper.ScheduleLocalNotification(notification.data);
		iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * L_3 = ___notification0;
		NullCheck(L_3);
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  L_4 = L_3->get_data_0();
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_il2cpp_TypeInfo_var);
		iOSNotificationsWrapper_ScheduleLocalNotification_m352F2AD73A09D4ADC882E8001E614D38EF4576A1(L_4, /*hidden argument*/NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::OnReceivedRemoteNotification(Unity.Notifications.iOS.iOSNotificationData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_OnReceivedRemoteNotification_mDE9587EF313E0FF1F94B4255DD834F7E8CA3796E (iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * V_0 = NULL;
	{
		// var notification = new iOSNotification(data.identifier);
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  L_0 = ___data0;
		String_t* L_1 = L_0.get_identifier_0();
		iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * L_2 = (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 *)il2cpp_codegen_object_new(iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25_il2cpp_TypeInfo_var);
		iOSNotification__ctor_m12783CF62ECB6ADBAEEF50373F000E9617A5301D(L_2, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// notification.data = data;
		iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * L_3 = V_0;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  L_4 = ___data0;
		NullCheck(L_3);
		L_3->set_data_0(L_4);
		// s_OnRemoteNotificationReceived(notification);
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * L_5 = ((iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var))->get_s_OnRemoteNotificationReceived_3();
		iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * L_6 = V_0;
		NullCheck(L_5);
		NotificationReceivedCallback_Invoke_mCCF71E824463A5CF6863EDFB9FB650FE5784CACC(L_5, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::OnSentNotification(Unity.Notifications.iOS.iOSNotificationData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_OnSentNotification_m1F59C13DF660147D3490025904C6CDC4F2A08DE8 (iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * V_0 = NULL;
	{
		// var notification = new iOSNotification(data.identifier);
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  L_0 = ___data0;
		String_t* L_1 = L_0.get_identifier_0();
		iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * L_2 = (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 *)il2cpp_codegen_object_new(iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25_il2cpp_TypeInfo_var);
		iOSNotification__ctor_m12783CF62ECB6ADBAEEF50373F000E9617A5301D(L_2, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// notification.data = data;
		iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * L_3 = V_0;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  L_4 = ___data0;
		NullCheck(L_3);
		L_3->set_data_0(L_4);
		// s_OnNotificationReceived(notification);
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * L_5 = ((iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var))->get_s_OnNotificationReceived_1();
		iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * L_6 = V_0;
		NullCheck(L_5);
		NotificationReceivedCallback_Invoke_mCCF71E824463A5CF6863EDFB9FB650FE5784CACC(L_5, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::OnFinishedAuthorizationRequest(Unity.Notifications.iOS.iOSAuthorizationRequestData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_OnFinishedAuthorizationRequest_mBD5AAD252BD792ABD68CD78EA031F5B72FF74EBB (iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OnAuthorizationRequestCompleted(data);
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF * L_0 = ((iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var))->get_OnAuthorizationRequestCompleted_4();
		iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  L_1 = ___data0;
		NullCheck(L_0);
		AuthorizationRequestCompletedCallback_Invoke_m98C3A172462D0B6C610EB757C91A2588E93F3C03(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter__cctor_mFB20764B4C19A8B7CBCFDCA043F8A820D81340F9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__37_0_mAF22E8FADE61F879B289E90A20B57886A64C580D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__37_1_mB96B155268106F62172BED44B622601627CAB03F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__37_2_m1A3B6FE3BCD253BECDA531C4D894905C6EAF25AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static event NotificationReceivedCallback s_OnNotificationReceived = delegate {};
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C_il2cpp_TypeInfo_var);
		U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C * L_0 = ((U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * L_1 = (NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 *)il2cpp_codegen_object_new(NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97_il2cpp_TypeInfo_var);
		NotificationReceivedCallback__ctor_m6AE0F51AFB3D07273AD38F0D7C6193528E7D1961(L_1, L_0, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__37_0_mAF22E8FADE61F879B289E90A20B57886A64C580D_RuntimeMethod_var), /*hidden argument*/NULL);
		((iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var))->set_s_OnNotificationReceived_1(L_1);
		// private static event NotificationReceivedCallback s_OnRemoteNotificationReceived = delegate {};
		U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C * L_2 = ((U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * L_3 = (NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 *)il2cpp_codegen_object_new(NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97_il2cpp_TypeInfo_var);
		NotificationReceivedCallback__ctor_m6AE0F51AFB3D07273AD38F0D7C6193528E7D1961(L_3, L_2, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__37_1_mB96B155268106F62172BED44B622601627CAB03F_RuntimeMethod_var), /*hidden argument*/NULL);
		((iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var))->set_s_OnRemoteNotificationReceived_3(L_3);
		// internal static event AuthorizationRequestCompletedCallback OnAuthorizationRequestCompleted = delegate {};
		U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C * L_4 = ((U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF * L_5 = (AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF *)il2cpp_codegen_object_new(AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF_il2cpp_TypeInfo_var);
		AuthorizationRequestCompletedCallback__ctor_m30EFF0819EB802C5E405EC72AFA55E2093002817(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__37_2_m1A3B6FE3BCD253BECDA531C4D894905C6EAF25AE_RuntimeMethod_var), /*hidden argument*/NULL);
		((iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var))->set_OnAuthorizationRequestCompleted_4(L_5);
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
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationData
IL2CPP_EXTERN_C void iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshal_pinvoke(const iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074& unmarshaled, iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_pinvoke& marshaled)
{
	marshaled.___identifier_0 = il2cpp_codegen_marshal_string(unmarshaled.get_identifier_0());
	marshaled.___title_1 = il2cpp_codegen_marshal_string(unmarshaled.get_title_1());
	marshaled.___body_2 = il2cpp_codegen_marshal_string(unmarshaled.get_body_2());
	marshaled.___badge_3 = unmarshaled.get_badge_3();
	marshaled.___subtitle_4 = il2cpp_codegen_marshal_string(unmarshaled.get_subtitle_4());
	marshaled.___categoryIdentifier_5 = il2cpp_codegen_marshal_string(unmarshaled.get_categoryIdentifier_5());
	marshaled.___threadIdentifier_6 = il2cpp_codegen_marshal_string(unmarshaled.get_threadIdentifier_6());
	marshaled.___data_7 = il2cpp_codegen_marshal_string(unmarshaled.get_data_7());
	marshaled.___showInForeground_8 = static_cast<int32_t>(unmarshaled.get_showInForeground_8());
	marshaled.___showInForegroundPresentationOptions_9 = unmarshaled.get_showInForegroundPresentationOptions_9();
	marshaled.___triggerType_10 = unmarshaled.get_triggerType_10();
	marshaled.___repeats_11 = static_cast<int32_t>(unmarshaled.get_repeats_11());
	marshaled.___timeTriggerInterval_12 = unmarshaled.get_timeTriggerInterval_12();
	marshaled.___calendarTriggerYear_13 = unmarshaled.get_calendarTriggerYear_13();
	marshaled.___calendarTriggerMonth_14 = unmarshaled.get_calendarTriggerMonth_14();
	marshaled.___calendarTriggerDay_15 = unmarshaled.get_calendarTriggerDay_15();
	marshaled.___calendarTriggerHour_16 = unmarshaled.get_calendarTriggerHour_16();
	marshaled.___calendarTriggerMinute_17 = unmarshaled.get_calendarTriggerMinute_17();
	marshaled.___calendarTriggerSecond_18 = unmarshaled.get_calendarTriggerSecond_18();
	marshaled.___locationTriggerCenterX_19 = unmarshaled.get_locationTriggerCenterX_19();
	marshaled.___locationTriggerCenterY_20 = unmarshaled.get_locationTriggerCenterY_20();
	marshaled.___locationTriggerRadius_21 = unmarshaled.get_locationTriggerRadius_21();
	marshaled.___locationTriggerNotifyOnEntry_22 = static_cast<int32_t>(unmarshaled.get_locationTriggerNotifyOnEntry_22());
	marshaled.___locationTriggerNotifyOnExit_23 = static_cast<int32_t>(unmarshaled.get_locationTriggerNotifyOnExit_23());
}
IL2CPP_EXTERN_C void iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshal_pinvoke_back(const iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_pinvoke& marshaled, iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074& unmarshaled)
{
	unmarshaled.set_identifier_0(il2cpp_codegen_marshal_string_result(marshaled.___identifier_0));
	unmarshaled.set_title_1(il2cpp_codegen_marshal_string_result(marshaled.___title_1));
	unmarshaled.set_body_2(il2cpp_codegen_marshal_string_result(marshaled.___body_2));
	int32_t unmarshaled_badge_temp_3 = 0;
	unmarshaled_badge_temp_3 = marshaled.___badge_3;
	unmarshaled.set_badge_3(unmarshaled_badge_temp_3);
	unmarshaled.set_subtitle_4(il2cpp_codegen_marshal_string_result(marshaled.___subtitle_4));
	unmarshaled.set_categoryIdentifier_5(il2cpp_codegen_marshal_string_result(marshaled.___categoryIdentifier_5));
	unmarshaled.set_threadIdentifier_6(il2cpp_codegen_marshal_string_result(marshaled.___threadIdentifier_6));
	unmarshaled.set_data_7(il2cpp_codegen_marshal_string_result(marshaled.___data_7));
	bool unmarshaled_showInForeground_temp_8 = false;
	unmarshaled_showInForeground_temp_8 = static_cast<bool>(marshaled.___showInForeground_8);
	unmarshaled.set_showInForeground_8(unmarshaled_showInForeground_temp_8);
	int32_t unmarshaled_showInForegroundPresentationOptions_temp_9 = 0;
	unmarshaled_showInForegroundPresentationOptions_temp_9 = marshaled.___showInForegroundPresentationOptions_9;
	unmarshaled.set_showInForegroundPresentationOptions_9(unmarshaled_showInForegroundPresentationOptions_temp_9);
	int32_t unmarshaled_triggerType_temp_10 = 0;
	unmarshaled_triggerType_temp_10 = marshaled.___triggerType_10;
	unmarshaled.set_triggerType_10(unmarshaled_triggerType_temp_10);
	bool unmarshaled_repeats_temp_11 = false;
	unmarshaled_repeats_temp_11 = static_cast<bool>(marshaled.___repeats_11);
	unmarshaled.set_repeats_11(unmarshaled_repeats_temp_11);
	int32_t unmarshaled_timeTriggerInterval_temp_12 = 0;
	unmarshaled_timeTriggerInterval_temp_12 = marshaled.___timeTriggerInterval_12;
	unmarshaled.set_timeTriggerInterval_12(unmarshaled_timeTriggerInterval_temp_12);
	int32_t unmarshaled_calendarTriggerYear_temp_13 = 0;
	unmarshaled_calendarTriggerYear_temp_13 = marshaled.___calendarTriggerYear_13;
	unmarshaled.set_calendarTriggerYear_13(unmarshaled_calendarTriggerYear_temp_13);
	int32_t unmarshaled_calendarTriggerMonth_temp_14 = 0;
	unmarshaled_calendarTriggerMonth_temp_14 = marshaled.___calendarTriggerMonth_14;
	unmarshaled.set_calendarTriggerMonth_14(unmarshaled_calendarTriggerMonth_temp_14);
	int32_t unmarshaled_calendarTriggerDay_temp_15 = 0;
	unmarshaled_calendarTriggerDay_temp_15 = marshaled.___calendarTriggerDay_15;
	unmarshaled.set_calendarTriggerDay_15(unmarshaled_calendarTriggerDay_temp_15);
	int32_t unmarshaled_calendarTriggerHour_temp_16 = 0;
	unmarshaled_calendarTriggerHour_temp_16 = marshaled.___calendarTriggerHour_16;
	unmarshaled.set_calendarTriggerHour_16(unmarshaled_calendarTriggerHour_temp_16);
	int32_t unmarshaled_calendarTriggerMinute_temp_17 = 0;
	unmarshaled_calendarTriggerMinute_temp_17 = marshaled.___calendarTriggerMinute_17;
	unmarshaled.set_calendarTriggerMinute_17(unmarshaled_calendarTriggerMinute_temp_17);
	int32_t unmarshaled_calendarTriggerSecond_temp_18 = 0;
	unmarshaled_calendarTriggerSecond_temp_18 = marshaled.___calendarTriggerSecond_18;
	unmarshaled.set_calendarTriggerSecond_18(unmarshaled_calendarTriggerSecond_temp_18);
	float unmarshaled_locationTriggerCenterX_temp_19 = 0.0f;
	unmarshaled_locationTriggerCenterX_temp_19 = marshaled.___locationTriggerCenterX_19;
	unmarshaled.set_locationTriggerCenterX_19(unmarshaled_locationTriggerCenterX_temp_19);
	float unmarshaled_locationTriggerCenterY_temp_20 = 0.0f;
	unmarshaled_locationTriggerCenterY_temp_20 = marshaled.___locationTriggerCenterY_20;
	unmarshaled.set_locationTriggerCenterY_20(unmarshaled_locationTriggerCenterY_temp_20);
	float unmarshaled_locationTriggerRadius_temp_21 = 0.0f;
	unmarshaled_locationTriggerRadius_temp_21 = marshaled.___locationTriggerRadius_21;
	unmarshaled.set_locationTriggerRadius_21(unmarshaled_locationTriggerRadius_temp_21);
	bool unmarshaled_locationTriggerNotifyOnEntry_temp_22 = false;
	unmarshaled_locationTriggerNotifyOnEntry_temp_22 = static_cast<bool>(marshaled.___locationTriggerNotifyOnEntry_22);
	unmarshaled.set_locationTriggerNotifyOnEntry_22(unmarshaled_locationTriggerNotifyOnEntry_temp_22);
	bool unmarshaled_locationTriggerNotifyOnExit_temp_23 = false;
	unmarshaled_locationTriggerNotifyOnExit_temp_23 = static_cast<bool>(marshaled.___locationTriggerNotifyOnExit_23);
	unmarshaled.set_locationTriggerNotifyOnExit_23(unmarshaled_locationTriggerNotifyOnExit_temp_23);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationData
IL2CPP_EXTERN_C void iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshal_pinvoke_cleanup(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___identifier_0);
	marshaled.___identifier_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___title_1);
	marshaled.___title_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___body_2);
	marshaled.___body_2 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___subtitle_4);
	marshaled.___subtitle_4 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___categoryIdentifier_5);
	marshaled.___categoryIdentifier_5 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___threadIdentifier_6);
	marshaled.___threadIdentifier_6 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___data_7);
	marshaled.___data_7 = NULL;
}
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationData
IL2CPP_EXTERN_C void iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshal_com(const iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074& unmarshaled, iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_com& marshaled)
{
	marshaled.___identifier_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_identifier_0());
	marshaled.___title_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_title_1());
	marshaled.___body_2 = il2cpp_codegen_marshal_bstring(unmarshaled.get_body_2());
	marshaled.___badge_3 = unmarshaled.get_badge_3();
	marshaled.___subtitle_4 = il2cpp_codegen_marshal_bstring(unmarshaled.get_subtitle_4());
	marshaled.___categoryIdentifier_5 = il2cpp_codegen_marshal_bstring(unmarshaled.get_categoryIdentifier_5());
	marshaled.___threadIdentifier_6 = il2cpp_codegen_marshal_bstring(unmarshaled.get_threadIdentifier_6());
	marshaled.___data_7 = il2cpp_codegen_marshal_bstring(unmarshaled.get_data_7());
	marshaled.___showInForeground_8 = static_cast<int32_t>(unmarshaled.get_showInForeground_8());
	marshaled.___showInForegroundPresentationOptions_9 = unmarshaled.get_showInForegroundPresentationOptions_9();
	marshaled.___triggerType_10 = unmarshaled.get_triggerType_10();
	marshaled.___repeats_11 = static_cast<int32_t>(unmarshaled.get_repeats_11());
	marshaled.___timeTriggerInterval_12 = unmarshaled.get_timeTriggerInterval_12();
	marshaled.___calendarTriggerYear_13 = unmarshaled.get_calendarTriggerYear_13();
	marshaled.___calendarTriggerMonth_14 = unmarshaled.get_calendarTriggerMonth_14();
	marshaled.___calendarTriggerDay_15 = unmarshaled.get_calendarTriggerDay_15();
	marshaled.___calendarTriggerHour_16 = unmarshaled.get_calendarTriggerHour_16();
	marshaled.___calendarTriggerMinute_17 = unmarshaled.get_calendarTriggerMinute_17();
	marshaled.___calendarTriggerSecond_18 = unmarshaled.get_calendarTriggerSecond_18();
	marshaled.___locationTriggerCenterX_19 = unmarshaled.get_locationTriggerCenterX_19();
	marshaled.___locationTriggerCenterY_20 = unmarshaled.get_locationTriggerCenterY_20();
	marshaled.___locationTriggerRadius_21 = unmarshaled.get_locationTriggerRadius_21();
	marshaled.___locationTriggerNotifyOnEntry_22 = static_cast<int32_t>(unmarshaled.get_locationTriggerNotifyOnEntry_22());
	marshaled.___locationTriggerNotifyOnExit_23 = static_cast<int32_t>(unmarshaled.get_locationTriggerNotifyOnExit_23());
}
IL2CPP_EXTERN_C void iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshal_com_back(const iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_com& marshaled, iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074& unmarshaled)
{
	unmarshaled.set_identifier_0(il2cpp_codegen_marshal_bstring_result(marshaled.___identifier_0));
	unmarshaled.set_title_1(il2cpp_codegen_marshal_bstring_result(marshaled.___title_1));
	unmarshaled.set_body_2(il2cpp_codegen_marshal_bstring_result(marshaled.___body_2));
	int32_t unmarshaled_badge_temp_3 = 0;
	unmarshaled_badge_temp_3 = marshaled.___badge_3;
	unmarshaled.set_badge_3(unmarshaled_badge_temp_3);
	unmarshaled.set_subtitle_4(il2cpp_codegen_marshal_bstring_result(marshaled.___subtitle_4));
	unmarshaled.set_categoryIdentifier_5(il2cpp_codegen_marshal_bstring_result(marshaled.___categoryIdentifier_5));
	unmarshaled.set_threadIdentifier_6(il2cpp_codegen_marshal_bstring_result(marshaled.___threadIdentifier_6));
	unmarshaled.set_data_7(il2cpp_codegen_marshal_bstring_result(marshaled.___data_7));
	bool unmarshaled_showInForeground_temp_8 = false;
	unmarshaled_showInForeground_temp_8 = static_cast<bool>(marshaled.___showInForeground_8);
	unmarshaled.set_showInForeground_8(unmarshaled_showInForeground_temp_8);
	int32_t unmarshaled_showInForegroundPresentationOptions_temp_9 = 0;
	unmarshaled_showInForegroundPresentationOptions_temp_9 = marshaled.___showInForegroundPresentationOptions_9;
	unmarshaled.set_showInForegroundPresentationOptions_9(unmarshaled_showInForegroundPresentationOptions_temp_9);
	int32_t unmarshaled_triggerType_temp_10 = 0;
	unmarshaled_triggerType_temp_10 = marshaled.___triggerType_10;
	unmarshaled.set_triggerType_10(unmarshaled_triggerType_temp_10);
	bool unmarshaled_repeats_temp_11 = false;
	unmarshaled_repeats_temp_11 = static_cast<bool>(marshaled.___repeats_11);
	unmarshaled.set_repeats_11(unmarshaled_repeats_temp_11);
	int32_t unmarshaled_timeTriggerInterval_temp_12 = 0;
	unmarshaled_timeTriggerInterval_temp_12 = marshaled.___timeTriggerInterval_12;
	unmarshaled.set_timeTriggerInterval_12(unmarshaled_timeTriggerInterval_temp_12);
	int32_t unmarshaled_calendarTriggerYear_temp_13 = 0;
	unmarshaled_calendarTriggerYear_temp_13 = marshaled.___calendarTriggerYear_13;
	unmarshaled.set_calendarTriggerYear_13(unmarshaled_calendarTriggerYear_temp_13);
	int32_t unmarshaled_calendarTriggerMonth_temp_14 = 0;
	unmarshaled_calendarTriggerMonth_temp_14 = marshaled.___calendarTriggerMonth_14;
	unmarshaled.set_calendarTriggerMonth_14(unmarshaled_calendarTriggerMonth_temp_14);
	int32_t unmarshaled_calendarTriggerDay_temp_15 = 0;
	unmarshaled_calendarTriggerDay_temp_15 = marshaled.___calendarTriggerDay_15;
	unmarshaled.set_calendarTriggerDay_15(unmarshaled_calendarTriggerDay_temp_15);
	int32_t unmarshaled_calendarTriggerHour_temp_16 = 0;
	unmarshaled_calendarTriggerHour_temp_16 = marshaled.___calendarTriggerHour_16;
	unmarshaled.set_calendarTriggerHour_16(unmarshaled_calendarTriggerHour_temp_16);
	int32_t unmarshaled_calendarTriggerMinute_temp_17 = 0;
	unmarshaled_calendarTriggerMinute_temp_17 = marshaled.___calendarTriggerMinute_17;
	unmarshaled.set_calendarTriggerMinute_17(unmarshaled_calendarTriggerMinute_temp_17);
	int32_t unmarshaled_calendarTriggerSecond_temp_18 = 0;
	unmarshaled_calendarTriggerSecond_temp_18 = marshaled.___calendarTriggerSecond_18;
	unmarshaled.set_calendarTriggerSecond_18(unmarshaled_calendarTriggerSecond_temp_18);
	float unmarshaled_locationTriggerCenterX_temp_19 = 0.0f;
	unmarshaled_locationTriggerCenterX_temp_19 = marshaled.___locationTriggerCenterX_19;
	unmarshaled.set_locationTriggerCenterX_19(unmarshaled_locationTriggerCenterX_temp_19);
	float unmarshaled_locationTriggerCenterY_temp_20 = 0.0f;
	unmarshaled_locationTriggerCenterY_temp_20 = marshaled.___locationTriggerCenterY_20;
	unmarshaled.set_locationTriggerCenterY_20(unmarshaled_locationTriggerCenterY_temp_20);
	float unmarshaled_locationTriggerRadius_temp_21 = 0.0f;
	unmarshaled_locationTriggerRadius_temp_21 = marshaled.___locationTriggerRadius_21;
	unmarshaled.set_locationTriggerRadius_21(unmarshaled_locationTriggerRadius_temp_21);
	bool unmarshaled_locationTriggerNotifyOnEntry_temp_22 = false;
	unmarshaled_locationTriggerNotifyOnEntry_temp_22 = static_cast<bool>(marshaled.___locationTriggerNotifyOnEntry_22);
	unmarshaled.set_locationTriggerNotifyOnEntry_22(unmarshaled_locationTriggerNotifyOnEntry_temp_22);
	bool unmarshaled_locationTriggerNotifyOnExit_temp_23 = false;
	unmarshaled_locationTriggerNotifyOnExit_temp_23 = static_cast<bool>(marshaled.___locationTriggerNotifyOnExit_23);
	unmarshaled.set_locationTriggerNotifyOnExit_23(unmarshaled_locationTriggerNotifyOnExit_temp_23);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationData
IL2CPP_EXTERN_C void iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshal_com_cleanup(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___identifier_0);
	marshaled.___identifier_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___title_1);
	marshaled.___title_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___body_2);
	marshaled.___body_2 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___subtitle_4);
	marshaled.___subtitle_4 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___categoryIdentifier_5);
	marshaled.___categoryIdentifier_5 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___threadIdentifier_6);
	marshaled.___threadIdentifier_6 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___data_7);
	marshaled.___data_7 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationLocationTrigger
IL2CPP_EXTERN_C void iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605_marshal_pinvoke(const iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605& unmarshaled, iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CCenterU3Ek__BackingField_0 = unmarshaled.get_U3CCenterU3Ek__BackingField_0();
	marshaled.___U3CRadiusU3Ek__BackingField_1 = unmarshaled.get_U3CRadiusU3Ek__BackingField_1();
	marshaled.___U3CNotifyOnEntryU3Ek__BackingField_2 = static_cast<int32_t>(unmarshaled.get_U3CNotifyOnEntryU3Ek__BackingField_2());
	marshaled.___U3CNotifyOnExitU3Ek__BackingField_3 = static_cast<int32_t>(unmarshaled.get_U3CNotifyOnExitU3Ek__BackingField_3());
}
IL2CPP_EXTERN_C void iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605_marshal_pinvoke_back(const iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605_marshaled_pinvoke& marshaled, iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605& unmarshaled)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  unmarshaled_U3CCenterU3Ek__BackingField_temp_0;
	memset((&unmarshaled_U3CCenterU3Ek__BackingField_temp_0), 0, sizeof(unmarshaled_U3CCenterU3Ek__BackingField_temp_0));
	unmarshaled_U3CCenterU3Ek__BackingField_temp_0 = marshaled.___U3CCenterU3Ek__BackingField_0;
	unmarshaled.set_U3CCenterU3Ek__BackingField_0(unmarshaled_U3CCenterU3Ek__BackingField_temp_0);
	float unmarshaled_U3CRadiusU3Ek__BackingField_temp_1 = 0.0f;
	unmarshaled_U3CRadiusU3Ek__BackingField_temp_1 = marshaled.___U3CRadiusU3Ek__BackingField_1;
	unmarshaled.set_U3CRadiusU3Ek__BackingField_1(unmarshaled_U3CRadiusU3Ek__BackingField_temp_1);
	bool unmarshaled_U3CNotifyOnEntryU3Ek__BackingField_temp_2 = false;
	unmarshaled_U3CNotifyOnEntryU3Ek__BackingField_temp_2 = static_cast<bool>(marshaled.___U3CNotifyOnEntryU3Ek__BackingField_2);
	unmarshaled.set_U3CNotifyOnEntryU3Ek__BackingField_2(unmarshaled_U3CNotifyOnEntryU3Ek__BackingField_temp_2);
	bool unmarshaled_U3CNotifyOnExitU3Ek__BackingField_temp_3 = false;
	unmarshaled_U3CNotifyOnExitU3Ek__BackingField_temp_3 = static_cast<bool>(marshaled.___U3CNotifyOnExitU3Ek__BackingField_3);
	unmarshaled.set_U3CNotifyOnExitU3Ek__BackingField_3(unmarshaled_U3CNotifyOnExitU3Ek__BackingField_temp_3);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationLocationTrigger
IL2CPP_EXTERN_C void iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605_marshal_pinvoke_cleanup(iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationLocationTrigger
IL2CPP_EXTERN_C void iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605_marshal_com(const iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605& unmarshaled, iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605_marshaled_com& marshaled)
{
	marshaled.___U3CCenterU3Ek__BackingField_0 = unmarshaled.get_U3CCenterU3Ek__BackingField_0();
	marshaled.___U3CRadiusU3Ek__BackingField_1 = unmarshaled.get_U3CRadiusU3Ek__BackingField_1();
	marshaled.___U3CNotifyOnEntryU3Ek__BackingField_2 = static_cast<int32_t>(unmarshaled.get_U3CNotifyOnEntryU3Ek__BackingField_2());
	marshaled.___U3CNotifyOnExitU3Ek__BackingField_3 = static_cast<int32_t>(unmarshaled.get_U3CNotifyOnExitU3Ek__BackingField_3());
}
IL2CPP_EXTERN_C void iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605_marshal_com_back(const iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605_marshaled_com& marshaled, iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605& unmarshaled)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  unmarshaled_U3CCenterU3Ek__BackingField_temp_0;
	memset((&unmarshaled_U3CCenterU3Ek__BackingField_temp_0), 0, sizeof(unmarshaled_U3CCenterU3Ek__BackingField_temp_0));
	unmarshaled_U3CCenterU3Ek__BackingField_temp_0 = marshaled.___U3CCenterU3Ek__BackingField_0;
	unmarshaled.set_U3CCenterU3Ek__BackingField_0(unmarshaled_U3CCenterU3Ek__BackingField_temp_0);
	float unmarshaled_U3CRadiusU3Ek__BackingField_temp_1 = 0.0f;
	unmarshaled_U3CRadiusU3Ek__BackingField_temp_1 = marshaled.___U3CRadiusU3Ek__BackingField_1;
	unmarshaled.set_U3CRadiusU3Ek__BackingField_1(unmarshaled_U3CRadiusU3Ek__BackingField_temp_1);
	bool unmarshaled_U3CNotifyOnEntryU3Ek__BackingField_temp_2 = false;
	unmarshaled_U3CNotifyOnEntryU3Ek__BackingField_temp_2 = static_cast<bool>(marshaled.___U3CNotifyOnEntryU3Ek__BackingField_2);
	unmarshaled.set_U3CNotifyOnEntryU3Ek__BackingField_2(unmarshaled_U3CNotifyOnEntryU3Ek__BackingField_temp_2);
	bool unmarshaled_U3CNotifyOnExitU3Ek__BackingField_temp_3 = false;
	unmarshaled_U3CNotifyOnExitU3Ek__BackingField_temp_3 = static_cast<bool>(marshaled.___U3CNotifyOnExitU3Ek__BackingField_3);
	unmarshaled.set_U3CNotifyOnExitU3Ek__BackingField_3(unmarshaled_U3CNotifyOnExitU3Ek__BackingField_temp_3);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationLocationTrigger
IL2CPP_EXTERN_C void iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605_marshal_com_cleanup(iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605_marshaled_com& marshaled)
{
}
// System.Int32 Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationLocationTrigger_get_Type_m29D1C4F1B0B4CD039CA79165ECF517593D1E67EE (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// public static int Type { get { return (int)NotificationTriggerType.LocationTrigger; } }
		V_0 = ((int32_t)20);
		goto IL_0006;
	}

IL_0006:
	{
		// public static int Type { get { return (int)NotificationTriggerType.LocationTrigger; } }
		int32_t L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Vector2 Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_Center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  iOSNotificationLocationTrigger_get_Center_m908323B952AA351BCA1A2E8060B3776FE2FFB91A (iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 Center { get; set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_U3CCenterU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  iOSNotificationLocationTrigger_get_Center_m908323B952AA351BCA1A2E8060B3776FE2FFB91A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * _thisAdjusted = reinterpret_cast<iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 *>(__this + _offset);
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  _returnValue;
	_returnValue = iOSNotificationLocationTrigger_get_Center_m908323B952AA351BCA1A2E8060B3776FE2FFB91A_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Single Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_Radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float iOSNotificationLocationTrigger_get_Radius_mD267EADF32C368187283E4B768C9EDF341B35E8F (iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * __this, const RuntimeMethod* method)
{
	{
		// public float Radius { get; set; }
		float L_0 = __this->get_U3CRadiusU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  float iOSNotificationLocationTrigger_get_Radius_mD267EADF32C368187283E4B768C9EDF341B35E8F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * _thisAdjusted = reinterpret_cast<iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 *>(__this + _offset);
	float _returnValue;
	_returnValue = iOSNotificationLocationTrigger_get_Radius_mD267EADF32C368187283E4B768C9EDF341B35E8F_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_NotifyOnEntry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationLocationTrigger_get_NotifyOnEntry_mC842CDA7A8BE02A586FCE22413756402AE40C66A (iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * __this, const RuntimeMethod* method)
{
	{
		// public bool NotifyOnEntry { get; set; }
		bool L_0 = __this->get_U3CNotifyOnEntryU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool iOSNotificationLocationTrigger_get_NotifyOnEntry_mC842CDA7A8BE02A586FCE22413756402AE40C66A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * _thisAdjusted = reinterpret_cast<iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 *>(__this + _offset);
	bool _returnValue;
	_returnValue = iOSNotificationLocationTrigger_get_NotifyOnEntry_mC842CDA7A8BE02A586FCE22413756402AE40C66A_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_NotifyOnExit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationLocationTrigger_get_NotifyOnExit_mF117ACA5EAD44C39991624CA17B5909508776A98 (iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * __this, const RuntimeMethod* method)
{
	{
		// public bool NotifyOnExit { get; set; }
		bool L_0 = __this->get_U3CNotifyOnExitU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool iOSNotificationLocationTrigger_get_NotifyOnExit_mF117ACA5EAD44C39991624CA17B5909508776A98_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * _thisAdjusted = reinterpret_cast<iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 *>(__this + _offset);
	bool _returnValue;
	_returnValue = iOSNotificationLocationTrigger_get_NotifyOnExit_mF117ACA5EAD44C39991624CA17B5909508776A98_inline(_thisAdjusted, method);
	return _returnValue;
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
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger
IL2CPP_EXTERN_C void iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923_marshal_pinvoke(const iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923& unmarshaled, iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923_marshaled_pinvoke& marshaled)
{
	marshaled.___timeInterval_0 = unmarshaled.get_timeInterval_0();
	marshaled.___U3CRepeatsU3Ek__BackingField_1 = static_cast<int32_t>(unmarshaled.get_U3CRepeatsU3Ek__BackingField_1());
}
IL2CPP_EXTERN_C void iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923_marshal_pinvoke_back(const iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923_marshaled_pinvoke& marshaled, iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923& unmarshaled)
{
	int32_t unmarshaled_timeInterval_temp_0 = 0;
	unmarshaled_timeInterval_temp_0 = marshaled.___timeInterval_0;
	unmarshaled.set_timeInterval_0(unmarshaled_timeInterval_temp_0);
	bool unmarshaled_U3CRepeatsU3Ek__BackingField_temp_1 = false;
	unmarshaled_U3CRepeatsU3Ek__BackingField_temp_1 = static_cast<bool>(marshaled.___U3CRepeatsU3Ek__BackingField_1);
	unmarshaled.set_U3CRepeatsU3Ek__BackingField_1(unmarshaled_U3CRepeatsU3Ek__BackingField_temp_1);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger
IL2CPP_EXTERN_C void iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923_marshal_pinvoke_cleanup(iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger
IL2CPP_EXTERN_C void iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923_marshal_com(const iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923& unmarshaled, iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923_marshaled_com& marshaled)
{
	marshaled.___timeInterval_0 = unmarshaled.get_timeInterval_0();
	marshaled.___U3CRepeatsU3Ek__BackingField_1 = static_cast<int32_t>(unmarshaled.get_U3CRepeatsU3Ek__BackingField_1());
}
IL2CPP_EXTERN_C void iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923_marshal_com_back(const iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923_marshaled_com& marshaled, iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923& unmarshaled)
{
	int32_t unmarshaled_timeInterval_temp_0 = 0;
	unmarshaled_timeInterval_temp_0 = marshaled.___timeInterval_0;
	unmarshaled.set_timeInterval_0(unmarshaled_timeInterval_temp_0);
	bool unmarshaled_U3CRepeatsU3Ek__BackingField_temp_1 = false;
	unmarshaled_U3CRepeatsU3Ek__BackingField_temp_1 = static_cast<bool>(marshaled.___U3CRepeatsU3Ek__BackingField_1);
	unmarshaled.set_U3CRepeatsU3Ek__BackingField_1(unmarshaled_U3CRepeatsU3Ek__BackingField_temp_1);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger
IL2CPP_EXTERN_C void iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923_marshal_com_cleanup(iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923_marshaled_com& marshaled)
{
}
// System.Int32 Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationTimeIntervalTrigger_get_Type_m7DC585CF58AB71A010E84315578CFAAA106AAB7A (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// public static int Type { get { return (int)NotificationTriggerType.TimeTrigger; } }
		V_0 = 0;
		goto IL_0005;
	}

IL_0005:
	{
		// public static int Type { get { return (int)NotificationTriggerType.TimeTrigger; } }
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger::set_TimeInterval(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationTimeIntervalTrigger_set_TimeInterval_mEAF737982A0DF4B33396D3766DC45C89D3097B92 (iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923 * __this, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// timeInterval = (int)value.TotalSeconds;
		double L_0;
		L_0 = TimeSpan_get_TotalSeconds_m28CDC7B9ADFEAFF912CC9B66984090CFE60B9AA4((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&___value0), /*hidden argument*/NULL);
		__this->set_timeInterval_0(((int32_t)((int32_t)L_0)));
		// if (timeInterval <= 0)
		int32_t L_1 = __this->get_timeInterval_0();
		V_0 = (bool)((((int32_t)((((int32_t)L_1) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		// throw new ArgumentException("Time interval must be greater than 0.");
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_3 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFCA8707FE0861CE909C71CAD2EB86B6143B5E8D7)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&iOSNotificationTimeIntervalTrigger_set_TimeInterval_mEAF737982A0DF4B33396D3766DC45C89D3097B92_RuntimeMethod_var)));
	}

IL_002a:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void iOSNotificationTimeIntervalTrigger_set_TimeInterval_mEAF737982A0DF4B33396D3766DC45C89D3097B92_AdjustorThunk (RuntimeObject * __this, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923 * _thisAdjusted = reinterpret_cast<iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923 *>(__this + _offset);
	iOSNotificationTimeIntervalTrigger_set_TimeInterval_mEAF737982A0DF4B33396D3766DC45C89D3097B92(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger::get_Repeats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationTimeIntervalTrigger_get_Repeats_m48972F26AAE37EAE2D337E87AEBC4DE40987626F (iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923 * __this, const RuntimeMethod* method)
{
	{
		// public bool Repeats { get; set; }
		bool L_0 = __this->get_U3CRepeatsU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool iOSNotificationTimeIntervalTrigger_get_Repeats_m48972F26AAE37EAE2D337E87AEBC4DE40987626F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923 * _thisAdjusted = reinterpret_cast<iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923 *>(__this + _offset);
	bool _returnValue;
	_returnValue = iOSNotificationTimeIntervalTrigger_get_Repeats_m48972F26AAE37EAE2D337E87AEBC4DE40987626F_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger::set_Repeats(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationTimeIntervalTrigger_set_Repeats_m6171793E71519177BD5D31FD2EB3919063EF041D (iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool Repeats { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CRepeatsU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void iOSNotificationTimeIntervalTrigger_set_Repeats_m6171793E71519177BD5D31FD2EB3919063EF041D_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923 * _thisAdjusted = reinterpret_cast<iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923 *>(__this + _offset);
	iOSNotificationTimeIntervalTrigger_set_Repeats_m6171793E71519177BD5D31FD2EB3919063EF041D_inline(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_iOSNotificationsWrapper_AuthorizationRequestReceived_m90390A23265A5C3DA79A082E0466D6519C4FF424(intptr_t ___authRequestDataPtr0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	iOSNotificationsWrapper_AuthorizationRequestReceived_m90390A23265A5C3DA79A082E0466D6519C4FF424(___authRequestDataPtr0, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_iOSNotificationsWrapper_RemoteNotificationReceived_m277C3CFFA45FCD3514C6D8F9A422F09BDEA4F153(intptr_t ___notificationDataPtr0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	iOSNotificationsWrapper_RemoteNotificationReceived_m277C3CFFA45FCD3514C6D8F9A422F09BDEA4F153(___notificationDataPtr0, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_iOSNotificationsWrapper_NotificationReceived_mC235492A257B60D1DF1316B5855BF3713E04DD43(intptr_t ___notificationDataPtr0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	iOSNotificationsWrapper_NotificationReceived_mC235492A257B60D1DF1316B5855BF3713E04DD43(___notificationDataPtr0, NULL);

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_RequestAuthorization(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__RequestAuthorization_m96D52D1577E3B7B9A161CBE33B9417BC68061CB4 (int32_t ___options0, bool ___registerForRemote1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_RequestAuthorization)(___options0, static_cast<int32_t>(___registerForRemote1));

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_ScheduleLocalNotification(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__ScheduleLocalNotification_m6AF3C95370B6F2E77027436B8E7BDD327A8CD544 (intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_ScheduleLocalNotification)(___ptr0);

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_SetNotificationReceivedDelegate(Unity.Notifications.iOS.iOSNotificationsWrapper/NotificationReceivedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__SetNotificationReceivedDelegate_m67AF6FD539392DF3CBCF7A40BAAE3A5C608D71B0 (NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_SetNotificationReceivedDelegate)(____callback0_marshaled);

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_SetRemoteNotificationReceivedDelegate(Unity.Notifications.iOS.iOSNotificationsWrapper/NotificationReceivedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__SetRemoteNotificationReceivedDelegate_mB24D9D7D169B8384EBD773792A76D0545AC42A95 (NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_SetRemoteNotificationReceivedDelegate)(____callback0_marshaled);

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_SetAuthorizationRequestReceivedDelegate(Unity.Notifications.iOS.iOSNotificationsWrapper/AuthorizationRequestCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__SetAuthorizationRequestReceivedDelegate_m53B50E456C34B0155E11E14EBBD4C29A559B940F (AuthorizationRequestCallback_tA1D3C80486C750EC3B6638B2C4B91540E393C4F3 * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_SetAuthorizationRequestReceivedDelegate)(____callback0_marshaled);

}
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_GetNotificationSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__GetNotificationSettings_mDD703CEF31142A83CBA8D1AEE71380F0996BA158 (const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(_GetNotificationSettings)();

	return returnValue;
}
// System.Int32 Unity.Notifications.iOS.iOSNotificationsWrapper::_GetScheduledNotificationDataCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationsWrapper__GetScheduledNotificationDataCount_m2BEFABD8115B959399CD44CA1A3B25533B3794DD (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_GetScheduledNotificationDataCount)();

	return returnValue;
}
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_GetScheduledNotificationDataAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__GetScheduledNotificationDataAt_mB0F158CDFB1F6720E13080C8D42BBEB50D26292C (int32_t ___index0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(_GetScheduledNotificationDataAt)(___index0);

	return returnValue;
}
// System.Int32 Unity.Notifications.iOS.iOSNotificationsWrapper::_GetDeliveredNotificationDataCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationsWrapper__GetDeliveredNotificationDataCount_m864DD268E5AABCBA46F9FF52EC71E53DD5D42B71 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_GetDeliveredNotificationDataCount)();

	return returnValue;
}
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_GetDeliveredNotificationDataAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__GetDeliveredNotificationDataAt_mB2887F92FFBF850A44C40D00B6C6A8B939AC14A1 (int32_t ___index0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(_GetDeliveredNotificationDataAt)(___index0);

	return returnValue;
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_RemoveScheduledNotification(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__RemoveScheduledNotification_m7D981C54A72CEC14A3EA9E31FD14C8C6033B0A00 (String_t* ___identifier0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___identifier0' to native representation
	char* ____identifier0_marshaled = NULL;
	____identifier0_marshaled = il2cpp_codegen_marshal_string(___identifier0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_RemoveScheduledNotification)(____identifier0_marshaled);

	// Marshaling cleanup of parameter '___identifier0' native representation
	il2cpp_codegen_marshal_free(____identifier0_marshaled);
	____identifier0_marshaled = NULL;

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_RemoveAllScheduledNotifications()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__RemoveAllScheduledNotifications_mC4515C33F416325FCFA88885FA16D6EA36EF2DFB (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_RemoveAllScheduledNotifications)();

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_RemoveDeliveredNotification(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__RemoveDeliveredNotification_m0297EA245D64A1A6510C98718E2BAF08A625A818 (String_t* ___identifier0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___identifier0' to native representation
	char* ____identifier0_marshaled = NULL;
	____identifier0_marshaled = il2cpp_codegen_marshal_string(___identifier0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_RemoveDeliveredNotification)(____identifier0_marshaled);

	// Marshaling cleanup of parameter '___identifier0' native representation
	il2cpp_codegen_marshal_free(____identifier0_marshaled);
	____identifier0_marshaled = NULL;

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_SetApplicationBadge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__SetApplicationBadge_m8783BF138FA9F3D96A391FBC14AD5A218027BF1E (int32_t ___badge0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_SetApplicationBadge)(___badge0);

}
// System.Int32 Unity.Notifications.iOS.iOSNotificationsWrapper::_GetApplicationBadge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationsWrapper__GetApplicationBadge_mAD93A8C52BC70B24D006AB5C8A89DF26643148BC (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_GetApplicationBadge)();

	return returnValue;
}
// System.Boolean Unity.Notifications.iOS.iOSNotificationsWrapper::_GetAppOpenedUsingNotification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationsWrapper__GetAppOpenedUsingNotification_m4893DF4E2971137B170098F975DB1991F94FBC89 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_GetAppOpenedUsingNotification)();

	return static_cast<bool>(returnValue);
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_RemoveAllDeliveredNotifications()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__RemoveAllDeliveredNotifications_m242CAF8C9AB902C5595C319C0AFCEC4B2C9598F6 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_RemoveAllDeliveredNotifications)();

}
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_GetLastNotificationData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__GetLastNotificationData_m7BF8F9AEEBC8E77D4B047A8389FCC597020AC3BE (const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(_GetLastNotificationData)();

	return returnValue;
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_FreeUnmanagedMemory(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__FreeUnmanagedMemory_mE11F2A32A0C013D93D8F3C56B736B9A1892CDD2D (intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_FreeUnmanagedMemory)(___ptr0);

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_FreeUnmanagediOSNotificationData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__FreeUnmanagediOSNotificationData_m26A232A569648B14E68A815B5E0B9F19D3885869 (intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_FreeUnmanagediOSNotificationData)(___ptr0);

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::RegisterAuthorizationRequestCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_RegisterAuthorizationRequestCallback_mA347E373A60EDFC6856FCA6EC0CF621B234F05BB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthorizationRequestCallback_tA1D3C80486C750EC3B6638B2C4B91540E393C4F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationsWrapper_AuthorizationRequestReceived_m90390A23265A5C3DA79A082E0466D6519C4FF424_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_OnAuthenticationRequestFinished = new AuthorizationRequestCallback(AuthorizationRequestReceived);
		AuthorizationRequestCallback_tA1D3C80486C750EC3B6638B2C4B91540E393C4F3 * L_0 = (AuthorizationRequestCallback_tA1D3C80486C750EC3B6638B2C4B91540E393C4F3 *)il2cpp_codegen_object_new(AuthorizationRequestCallback_tA1D3C80486C750EC3B6638B2C4B91540E393C4F3_il2cpp_TypeInfo_var);
		AuthorizationRequestCallback__ctor_m868F99A8BEFAEC8EC4117FCDD67497341FEBDD74(L_0, NULL, (intptr_t)((intptr_t)iOSNotificationsWrapper_AuthorizationRequestReceived_m90390A23265A5C3DA79A082E0466D6519C4FF424_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_il2cpp_TypeInfo_var);
		((iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_il2cpp_TypeInfo_var))->set_s_OnAuthenticationRequestFinished_4(L_0);
		// _SetAuthorizationRequestReceivedDelegate(s_OnAuthenticationRequestFinished);
		AuthorizationRequestCallback_tA1D3C80486C750EC3B6638B2C4B91540E393C4F3 * L_1 = ((iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_il2cpp_TypeInfo_var))->get_s_OnAuthenticationRequestFinished_4();
		iOSNotificationsWrapper__SetAuthorizationRequestReceivedDelegate_m53B50E456C34B0155E11E14EBBD4C29A559B940F(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::RegisterOnReceivedRemoteNotificationCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_RegisterOnReceivedRemoteNotificationCallback_m9558DD461486B0613BB2BB12FC0410930D125748 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationsWrapper_RemoteNotificationReceived_m277C3CFFA45FCD3514C6D8F9A422F09BDEA4F153_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_OnRemoteNotificationReceived = new NotificationReceivedCallback(RemoteNotificationReceived);
		NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 * L_0 = (NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 *)il2cpp_codegen_object_new(NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2_il2cpp_TypeInfo_var);
		NotificationReceivedCallback__ctor_mA1E99CE6E6538FA8F118BC8EC7200C8D677B515F(L_0, NULL, (intptr_t)((intptr_t)iOSNotificationsWrapper_RemoteNotificationReceived_m277C3CFFA45FCD3514C6D8F9A422F09BDEA4F153_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_il2cpp_TypeInfo_var);
		((iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_il2cpp_TypeInfo_var))->set_s_OnRemoteNotificationReceived_6(L_0);
		// _SetRemoteNotificationReceivedDelegate(s_OnRemoteNotificationReceived);
		NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 * L_1 = ((iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_il2cpp_TypeInfo_var))->get_s_OnRemoteNotificationReceived_6();
		iOSNotificationsWrapper__SetRemoteNotificationReceivedDelegate_mB24D9D7D169B8384EBD773792A76D0545AC42A95(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::RegisterOnReceivedCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_RegisterOnReceivedCallback_mE7EE23A3B5802F36B73989102962E66E5EFB0E25 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationsWrapper_NotificationReceived_mC235492A257B60D1DF1316B5855BF3713E04DD43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_OnNotificationReceived = new NotificationReceivedCallback(NotificationReceived);
		NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 * L_0 = (NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 *)il2cpp_codegen_object_new(NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2_il2cpp_TypeInfo_var);
		NotificationReceivedCallback__ctor_mA1E99CE6E6538FA8F118BC8EC7200C8D677B515F(L_0, NULL, (intptr_t)((intptr_t)iOSNotificationsWrapper_NotificationReceived_mC235492A257B60D1DF1316B5855BF3713E04DD43_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_il2cpp_TypeInfo_var);
		((iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_il2cpp_TypeInfo_var))->set_s_OnNotificationReceived_5(L_0);
		// _SetNotificationReceivedDelegate(s_OnNotificationReceived);
		NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 * L_1 = ((iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_il2cpp_TypeInfo_var))->get_s_OnNotificationReceived_5();
		iOSNotificationsWrapper__SetNotificationReceivedDelegate_m67AF6FD539392DF3CBCF7A40BAAE3A5C608D71B0(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::AuthorizationRequestReceived(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_AuthorizationRequestReceived_m90390A23265A5C3DA79A082E0466D6519C4FF424 (intptr_t ___authRequestDataPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// data = (iOSAuthorizationRequestData)Marshal.PtrToStructure(authRequestDataPtr, typeof(iOSAuthorizationRequestData));
		intptr_t L_0 = ___authRequestDataPtr0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		RuntimeObject * L_3;
		L_3 = Marshal_PtrToStructure_m5FA7EF86B49F005564D15359A6C10E4C7526F4A3((intptr_t)L_0, L_2, /*hidden argument*/NULL);
		V_0 = ((*(iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6 *)((iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6 *)UnBox(L_3, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_il2cpp_TypeInfo_var))));
		// iOSNotificationCenter.OnFinishedAuthorizationRequest(data);
		iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		iOSNotificationCenter_OnFinishedAuthorizationRequest_mBD5AAD252BD792ABD68CD78EA031F5B72FF74EBB(L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::RemoteNotificationReceived(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_RemoteNotificationReceived_m277C3CFFA45FCD3514C6D8F9A422F09BDEA4F153 (intptr_t ___notificationDataPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// data = (iOSNotificationData)Marshal.PtrToStructure(notificationDataPtr, typeof(iOSNotificationData));
		intptr_t L_0 = ___notificationDataPtr0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		RuntimeObject * L_3;
		L_3 = Marshal_PtrToStructure_m5FA7EF86B49F005564D15359A6C10E4C7526F4A3((intptr_t)L_0, L_2, /*hidden argument*/NULL);
		V_0 = ((*(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 *)((iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 *)UnBox(L_3, iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_il2cpp_TypeInfo_var))));
		// iOSNotificationCenter.OnReceivedRemoteNotification(data);
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		iOSNotificationCenter_OnReceivedRemoteNotification_mDE9587EF313E0FF1F94B4255DD834F7E8CA3796E(L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::NotificationReceived(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_NotificationReceived_mC235492A257B60D1DF1316B5855BF3713E04DD43 (intptr_t ___notificationDataPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// data = (iOSNotificationData)Marshal.PtrToStructure(notificationDataPtr, typeof(iOSNotificationData));
		intptr_t L_0 = ___notificationDataPtr0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		RuntimeObject * L_3;
		L_3 = Marshal_PtrToStructure_m5FA7EF86B49F005564D15359A6C10E4C7526F4A3((intptr_t)L_0, L_2, /*hidden argument*/NULL);
		V_0 = ((*(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 *)((iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 *)UnBox(L_3, iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_il2cpp_TypeInfo_var))));
		// iOSNotificationCenter.OnSentNotification(data);
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		iOSNotificationCenter_OnSentNotification_m1F59C13DF660147D3490025904C6CDC4F2A08DE8(L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::RequestAuthorization(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_RequestAuthorization_m341457AF6325E493269BDC7D26A51F057C2262FA (int32_t ___options0, bool ___registerRemote1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _RequestAuthorization(options, registerRemote);
		int32_t L_0 = ___options0;
		bool L_1 = ___registerRemote1;
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_il2cpp_TypeInfo_var);
		iOSNotificationsWrapper__RequestAuthorization_m96D52D1577E3B7B9A161CBE33B9417BC68061CB4(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Unity.Notifications.iOS.iOSNotificationSettings Unity.Notifications.iOS.iOSNotificationsWrapper::GetNotificationSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D  iOSNotificationsWrapper_GetNotificationSettings_mA5B969AC160ED447361BA8F16F11632DADE75ACC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// IntPtr ptr = _GetNotificationSettings();
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_il2cpp_TypeInfo_var);
		intptr_t L_0;
		L_0 = iOSNotificationsWrapper__GetNotificationSettings_mDD703CEF31142A83CBA8D1AEE71380F0996BA158(/*hidden argument*/NULL);
		V_1 = (intptr_t)L_0;
		// settings = (iOSNotificationSettings)Marshal.PtrToStructure(ptr, typeof(iOSNotificationSettings));
		intptr_t L_1 = V_1;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		RuntimeObject * L_4;
		L_4 = Marshal_PtrToStructure_m5FA7EF86B49F005564D15359A6C10E4C7526F4A3((intptr_t)L_1, L_3, /*hidden argument*/NULL);
		V_0 = ((*(iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D *)((iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D *)UnBox(L_4, iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D_il2cpp_TypeInfo_var))));
		// _FreeUnmanagedMemory(ptr);
		intptr_t L_5 = V_1;
		iOSNotificationsWrapper__FreeUnmanagedMemory_mE11F2A32A0C013D93D8F3C56B736B9A1892CDD2D((intptr_t)L_5, /*hidden argument*/NULL);
		// return settings;
		iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D  L_6 = V_0;
		V_2 = L_6;
		goto IL_0028;
	}

IL_0028:
	{
		// }
		iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D  L_7 = V_2;
		return L_7;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::ScheduleLocalNotification(Unity.Notifications.iOS.iOSNotificationData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_ScheduleLocalNotification_m352F2AD73A09D4ADC882E8001E614D38EF4576A1 (iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_SizeOf_TisiOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_mE1118FD79EDAD3D4068DAFCF0F86C0892D44D721_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_StructureToPtr_TisiOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_mA5A137B8C80DD53600055405992D2C85AA6E5A07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// IntPtr ptr = Marshal.AllocHGlobal(Marshal.SizeOf(data));
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  L_0 = ___data0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Marshal_SizeOf_TisiOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_mE1118FD79EDAD3D4068DAFCF0F86C0892D44D721(L_0, /*hidden argument*/Marshal_SizeOf_TisiOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_mE1118FD79EDAD3D4068DAFCF0F86C0892D44D721_RuntimeMethod_var);
		intptr_t L_2;
		L_2 = Marshal_AllocHGlobal_mED1B623D229DB8FAB58D187E4E73D3DA2E8AE6EC(L_1, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_2;
		// Marshal.StructureToPtr(data, ptr, false);
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  L_3 = ___data0;
		intptr_t L_4 = V_0;
		Marshal_StructureToPtr_TisiOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_mA5A137B8C80DD53600055405992D2C85AA6E5A07(L_3, (intptr_t)L_4, (bool)0, /*hidden argument*/Marshal_StructureToPtr_TisiOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_mA5A137B8C80DD53600055405992D2C85AA6E5A07_RuntimeMethod_var);
		// _ScheduleLocalNotification(ptr);
		intptr_t L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_il2cpp_TypeInfo_var);
		iOSNotificationsWrapper__ScheduleLocalNotification_m6AF3C95370B6F2E77027436B8E7BDD327A8CD544((intptr_t)L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Unity.Notifications.iOS.iOSNotificationData[] Unity.Notifications.iOS.iOSNotificationsWrapper::GetDeliveredNotificationData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationDataU5BU5D_t7889313E71D5D67EB0577E2743DBBCC3ED1FA590* iOSNotificationsWrapper_GetDeliveredNotificationData_m4767F1C31E09C482E5B589D6EA94A0F1A73AD451 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m1EFCA77693DC381F285C8F235B0278000A58E818_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m57ED027F5606FE5F8AD35744FC987E9E07625EDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC05329E0BBFE451A6B3071BFC91C41DBBE9C1F8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t169A85D76AB1E000B90048F77432786CB7349865_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	List_1_t169A85D76AB1E000B90048F77432786CB7349865 * V_1 = NULL;
	int32_t V_2 = 0;
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  V_3;
	memset((&V_3), 0, sizeof(V_3));
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	bool V_6 = false;
	iOSNotificationDataU5BU5D_t7889313E71D5D67EB0577E2743DBBCC3ED1FA590* V_7 = NULL;
	{
		// var size = _GetDeliveredNotificationDataCount();
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = iOSNotificationsWrapper__GetDeliveredNotificationDataCount_m864DD268E5AABCBA46F9FF52EC71E53DD5D42B71(/*hidden argument*/NULL);
		V_0 = L_0;
		// var dataList = new List<iOSNotificationData>();
		List_1_t169A85D76AB1E000B90048F77432786CB7349865 * L_1 = (List_1_t169A85D76AB1E000B90048F77432786CB7349865 *)il2cpp_codegen_object_new(List_1_t169A85D76AB1E000B90048F77432786CB7349865_il2cpp_TypeInfo_var);
		List_1__ctor_mC05329E0BBFE451A6B3071BFC91C41DBBE9C1F8F(L_1, /*hidden argument*/List_1__ctor_mC05329E0BBFE451A6B3071BFC91C41DBBE9C1F8F_RuntimeMethod_var);
		V_1 = L_1;
		// for (var i = 0; i < size; i++)
		V_2 = 0;
		goto IL_005a;
	}

IL_0011:
	{
		// IntPtr ptr = _GetDeliveredNotificationDataAt(i);
		int32_t L_2 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = iOSNotificationsWrapper__GetDeliveredNotificationDataAt_mB2887F92FFBF850A44C40D00B6C6A8B939AC14A1(L_2, /*hidden argument*/NULL);
		V_4 = (intptr_t)L_3;
		// if (ptr != IntPtr.Zero)
		intptr_t L_4 = V_4;
		bool L_5;
		L_5 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_4, (intptr_t)(0), /*hidden argument*/NULL);
		V_5 = L_5;
		bool L_6 = V_5;
		if (!L_6)
		{
			goto IL_0055;
		}
	}
	{
		// data = (iOSNotificationData)Marshal.PtrToStructure(ptr, typeof(iOSNotificationData));
		intptr_t L_7 = V_4;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_8 = { reinterpret_cast<intptr_t> (iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9;
		L_9 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		RuntimeObject * L_10;
		L_10 = Marshal_PtrToStructure_m5FA7EF86B49F005564D15359A6C10E4C7526F4A3((intptr_t)L_7, L_9, /*hidden argument*/NULL);
		V_3 = ((*(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 *)((iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 *)UnBox(L_10, iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_il2cpp_TypeInfo_var))));
		// dataList.Add(data);
		List_1_t169A85D76AB1E000B90048F77432786CB7349865 * L_11 = V_1;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  L_12 = V_3;
		NullCheck(L_11);
		List_1_Add_m1EFCA77693DC381F285C8F235B0278000A58E818(L_11, L_12, /*hidden argument*/List_1_Add_m1EFCA77693DC381F285C8F235B0278000A58E818_RuntimeMethod_var);
		// _FreeUnmanagediOSNotificationData(ptr);
		intptr_t L_13 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_il2cpp_TypeInfo_var);
		iOSNotificationsWrapper__FreeUnmanagediOSNotificationData_m26A232A569648B14E68A815B5E0B9F19D3885869((intptr_t)L_13, /*hidden argument*/NULL);
	}

IL_0055:
	{
		// for (var i = 0; i < size; i++)
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_005a:
	{
		// for (var i = 0; i < size; i++)
		int32_t L_15 = V_2;
		int32_t L_16 = V_0;
		V_6 = (bool)((((int32_t)L_15) < ((int32_t)L_16))? 1 : 0);
		bool L_17 = V_6;
		if (L_17)
		{
			goto IL_0011;
		}
	}
	{
		// return dataList.ToArray();
		List_1_t169A85D76AB1E000B90048F77432786CB7349865 * L_18 = V_1;
		NullCheck(L_18);
		iOSNotificationDataU5BU5D_t7889313E71D5D67EB0577E2743DBBCC3ED1FA590* L_19;
		L_19 = List_1_ToArray_m57ED027F5606FE5F8AD35744FC987E9E07625EDA(L_18, /*hidden argument*/List_1_ToArray_m57ED027F5606FE5F8AD35744FC987E9E07625EDA_RuntimeMethod_var);
		V_7 = L_19;
		goto IL_006e;
	}

IL_006e:
	{
		// }
		iOSNotificationDataU5BU5D_t7889313E71D5D67EB0577E2743DBBCC3ED1FA590* L_20 = V_7;
		return L_20;
	}
}
// Unity.Notifications.iOS.iOSNotificationData[] Unity.Notifications.iOS.iOSNotificationsWrapper::GetScheduledNotificationData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationDataU5BU5D_t7889313E71D5D67EB0577E2743DBBCC3ED1FA590* iOSNotificationsWrapper_GetScheduledNotificationData_m3E1F3F285581CA578833A9A91DA36153CA1C79BE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m1EFCA77693DC381F285C8F235B0278000A58E818_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m57ED027F5606FE5F8AD35744FC987E9E07625EDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC05329E0BBFE451A6B3071BFC91C41DBBE9C1F8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t169A85D76AB1E000B90048F77432786CB7349865_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	List_1_t169A85D76AB1E000B90048F77432786CB7349865 * V_1 = NULL;
	int32_t V_2 = 0;
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  V_3;
	memset((&V_3), 0, sizeof(V_3));
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	bool V_6 = false;
	iOSNotificationDataU5BU5D_t7889313E71D5D67EB0577E2743DBBCC3ED1FA590* V_7 = NULL;
	{
		// var size = _GetScheduledNotificationDataCount();
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = iOSNotificationsWrapper__GetScheduledNotificationDataCount_m2BEFABD8115B959399CD44CA1A3B25533B3794DD(/*hidden argument*/NULL);
		V_0 = L_0;
		// var dataList = new List<iOSNotificationData>();
		List_1_t169A85D76AB1E000B90048F77432786CB7349865 * L_1 = (List_1_t169A85D76AB1E000B90048F77432786CB7349865 *)il2cpp_codegen_object_new(List_1_t169A85D76AB1E000B90048F77432786CB7349865_il2cpp_TypeInfo_var);
		List_1__ctor_mC05329E0BBFE451A6B3071BFC91C41DBBE9C1F8F(L_1, /*hidden argument*/List_1__ctor_mC05329E0BBFE451A6B3071BFC91C41DBBE9C1F8F_RuntimeMethod_var);
		V_1 = L_1;
		// for (var i = 0; i < size; i++)
		V_2 = 0;
		goto IL_005a;
	}

IL_0011:
	{
		// IntPtr ptr = _GetScheduledNotificationDataAt(i);
		int32_t L_2 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = iOSNotificationsWrapper__GetScheduledNotificationDataAt_mB0F158CDFB1F6720E13080C8D42BBEB50D26292C(L_2, /*hidden argument*/NULL);
		V_4 = (intptr_t)L_3;
		// if (ptr != IntPtr.Zero)
		intptr_t L_4 = V_4;
		bool L_5;
		L_5 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_4, (intptr_t)(0), /*hidden argument*/NULL);
		V_5 = L_5;
		bool L_6 = V_5;
		if (!L_6)
		{
			goto IL_0055;
		}
	}
	{
		// data = (iOSNotificationData)Marshal.PtrToStructure(ptr, typeof(iOSNotificationData));
		intptr_t L_7 = V_4;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_8 = { reinterpret_cast<intptr_t> (iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9;
		L_9 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		RuntimeObject * L_10;
		L_10 = Marshal_PtrToStructure_m5FA7EF86B49F005564D15359A6C10E4C7526F4A3((intptr_t)L_7, L_9, /*hidden argument*/NULL);
		V_3 = ((*(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 *)((iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 *)UnBox(L_10, iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_il2cpp_TypeInfo_var))));
		// dataList.Add(data);
		List_1_t169A85D76AB1E000B90048F77432786CB7349865 * L_11 = V_1;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  L_12 = V_3;
		NullCheck(L_11);
		List_1_Add_m1EFCA77693DC381F285C8F235B0278000A58E818(L_11, L_12, /*hidden argument*/List_1_Add_m1EFCA77693DC381F285C8F235B0278000A58E818_RuntimeMethod_var);
		// _FreeUnmanagediOSNotificationData(ptr);
		intptr_t L_13 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_il2cpp_TypeInfo_var);
		iOSNotificationsWrapper__FreeUnmanagediOSNotificationData_m26A232A569648B14E68A815B5E0B9F19D3885869((intptr_t)L_13, /*hidden argument*/NULL);
	}

IL_0055:
	{
		// for (var i = 0; i < size; i++)
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_005a:
	{
		// for (var i = 0; i < size; i++)
		int32_t L_15 = V_2;
		int32_t L_16 = V_0;
		V_6 = (bool)((((int32_t)L_15) < ((int32_t)L_16))? 1 : 0);
		bool L_17 = V_6;
		if (L_17)
		{
			goto IL_0011;
		}
	}
	{
		// return dataList.ToArray();
		List_1_t169A85D76AB1E000B90048F77432786CB7349865 * L_18 = V_1;
		NullCheck(L_18);
		iOSNotificationDataU5BU5D_t7889313E71D5D67EB0577E2743DBBCC3ED1FA590* L_19;
		L_19 = List_1_ToArray_m57ED027F5606FE5F8AD35744FC987E9E07625EDA(L_18, /*hidden argument*/List_1_ToArray_m57ED027F5606FE5F8AD35744FC987E9E07625EDA_RuntimeMethod_var);
		V_7 = L_19;
		goto IL_006e;
	}

IL_006e:
	{
		// }
		iOSNotificationDataU5BU5D_t7889313E71D5D67EB0577E2743DBBCC3ED1FA590* L_20 = V_7;
		return L_20;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::SetApplicationBadge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_SetApplicationBadge_m9B98DEA25B8F0B42DC53F54AA8A2246E91E3DA77 (int32_t ___badge0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _SetApplicationBadge(badge);
		int32_t L_0 = ___badge0;
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_il2cpp_TypeInfo_var);
		iOSNotificationsWrapper__SetApplicationBadge_m8783BF138FA9F3D96A391FBC14AD5A218027BF1E(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 Unity.Notifications.iOS.iOSNotificationsWrapper::GetApplicationBadge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationsWrapper_GetApplicationBadge_m7810091A8AF73D2A346E95490A99BAC44F2AB2E0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// return _GetApplicationBadge();
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = iOSNotificationsWrapper__GetApplicationBadge_mAD93A8C52BC70B24D006AB5C8A89DF26643148BC(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Unity.Notifications.iOS.iOSNotificationsWrapper::GetAppOpenedUsingNotification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationsWrapper_GetAppOpenedUsingNotification_m3FC28F12769668442D15143476418BAA78EC0EAC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return _GetAppOpenedUsingNotification();
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = iOSNotificationsWrapper__GetAppOpenedUsingNotification_m4893DF4E2971137B170098F975DB1991F94FBC89(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Nullable`1<Unity.Notifications.iOS.iOSNotificationData> Unity.Notifications.iOS.iOSNotificationsWrapper::GetLastNotificationData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tB7162D02A8365A4081ED1B0FD019CD56F505B3CC  iOSNotificationsWrapper_GetLastNotificationData_m13FA019C477E253EA45ADBC5074B6101F6DD894B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mFE230167EC1EEF62518BEE849F67517E9061B7E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  V_1;
	memset((&V_1), 0, sizeof(V_1));
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	Nullable_1_tB7162D02A8365A4081ED1B0FD019CD56F505B3CC  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Nullable_1_tB7162D02A8365A4081ED1B0FD019CD56F505B3CC  V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// if (_GetAppOpenedUsingNotification())
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = iOSNotificationsWrapper__GetAppOpenedUsingNotification_m4893DF4E2971137B170098F975DB1991F94FBC89(/*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0049;
		}
	}
	{
		// IntPtr ptr = _GetLastNotificationData();
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = iOSNotificationsWrapper__GetLastNotificationData_m7BF8F9AEEBC8E77D4B047A8389FCC597020AC3BE(/*hidden argument*/NULL);
		V_2 = (intptr_t)L_2;
		// if (ptr != IntPtr.Zero)
		intptr_t L_3 = V_2;
		bool L_4;
		L_4 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
		V_3 = L_4;
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0048;
		}
	}
	{
		// data = (iOSNotificationData)Marshal.PtrToStructure(ptr, typeof(iOSNotificationData));
		intptr_t L_6 = V_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		RuntimeObject * L_9;
		L_9 = Marshal_PtrToStructure_m5FA7EF86B49F005564D15359A6C10E4C7526F4A3((intptr_t)L_6, L_8, /*hidden argument*/NULL);
		V_1 = ((*(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 *)((iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 *)UnBox(L_9, iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_il2cpp_TypeInfo_var))));
		// _FreeUnmanagediOSNotificationData(ptr);
		intptr_t L_10 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_il2cpp_TypeInfo_var);
		iOSNotificationsWrapper__FreeUnmanagediOSNotificationData_m26A232A569648B14E68A815B5E0B9F19D3885869((intptr_t)L_10, /*hidden argument*/NULL);
		// return data;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  L_11 = V_1;
		Nullable_1_tB7162D02A8365A4081ED1B0FD019CD56F505B3CC  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Nullable_1__ctor_mFE230167EC1EEF62518BEE849F67517E9061B7E5((&L_12), L_11, /*hidden argument*/Nullable_1__ctor_mFE230167EC1EEF62518BEE849F67517E9061B7E5_RuntimeMethod_var);
		V_4 = L_12;
		goto IL_0057;
	}

IL_0048:
	{
	}

IL_0049:
	{
		// return null;
		il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_tB7162D02A8365A4081ED1B0FD019CD56F505B3CC ));
		Nullable_1_tB7162D02A8365A4081ED1B0FD019CD56F505B3CC  L_13 = V_5;
		V_4 = L_13;
		goto IL_0057;
	}

IL_0057:
	{
		// }
		Nullable_1_tB7162D02A8365A4081ED1B0FD019CD56F505B3CC  L_14 = V_4;
		return L_14;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__ctor_m5738C126099AB6A70D2945B63CFB1094BE3E653E (iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__cctor_m538C04E37DA9FE4C83B94727AD4652B415129688 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static AuthorizationRequestCallback s_OnAuthenticationRequestFinished = null;
		((iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_il2cpp_TypeInfo_var))->set_s_OnAuthenticationRequestFinished_4((AuthorizationRequestCallback_tA1D3C80486C750EC3B6638B2C4B91540E393C4F3 *)NULL);
		// private static NotificationReceivedCallback s_OnNotificationReceived = null;
		((iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_il2cpp_TypeInfo_var))->set_s_OnNotificationReceived_5((NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 *)NULL);
		// private static NotificationReceivedCallback s_OnRemoteNotificationReceived = null;
		((iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783_il2cpp_TypeInfo_var))->set_s_OnRemoteNotificationReceived_6((NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 *)NULL);
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
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m73FAF531997F1BC546180674BF4DF0299763FE16 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C * L_0 = (U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C *)il2cpp_codegen_object_new(U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mC41C252011128378380FB873DA6C375C4B8E35D4(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC41C252011128378380FB873DA6C375C4B8E35D4 (U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/<>c::<.cctor>b__37_0(Unity.Notifications.iOS.iOSNotification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__37_0_mAF22E8FADE61F879B289E90A20B57886A64C580D (U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C * __this, iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// private static event NotificationReceivedCallback s_OnNotificationReceived = delegate {};
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/<>c::<.cctor>b__37_1(Unity.Notifications.iOS.iOSNotification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__37_1_mB96B155268106F62172BED44B622601627CAB03F (U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C * __this, iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// private static event NotificationReceivedCallback s_OnRemoteNotificationReceived = delegate {};
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/<>c::<.cctor>b__37_2(Unity.Notifications.iOS.iOSAuthorizationRequestData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__37_2_m1A3B6FE3BCD253BECDA531C4D894905C6EAF25AE (U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C * __this, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// internal static event AuthorizationRequestCompletedCallback OnAuthorizationRequestCompleted = delegate {};
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF (AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF * __this, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  ___data0, const RuntimeMethod* method)
{


	typedef void (DEFAULT_CALL *PInvokeFunc)(iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshaled_pinvoke);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___data0' to native representation
	iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshaled_pinvoke ____data0_marshaled = {};
	iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshal_pinvoke(___data0, ____data0_marshaled);

	// Native function invocation
	il2cppPInvokeFunc(____data0_marshaled);

	// Marshaling cleanup of parameter '___data0' native representation
	iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshal_pinvoke_cleanup(____data0_marshaled);

}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/AuthorizationRequestCompletedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequestCompletedCallback__ctor_m30EFF0819EB802C5E405EC72AFA55E2093002817 (AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/AuthorizationRequestCompletedCallback::Invoke(Unity.Notifications.iOS.iOSAuthorizationRequestData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequestCompletedCallback_Invoke_m98C3A172462D0B6C610EB757C91A2588E93F3C03 (AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF * __this, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  ___data0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  >::Invoke(targetMethod, targetThis, ___data0);
					else
						GenericVirtActionInvoker1< iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  >::Invoke(targetMethod, targetThis, ___data0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___data0);
					else
						VirtActionInvoker1< iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___data0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___data0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Unity.Notifications.iOS.iOSNotificationCenter/AuthorizationRequestCompletedCallback::BeginInvoke(Unity.Notifications.iOS.iOSAuthorizationRequestData,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AuthorizationRequestCompletedCallback_BeginInvoke_mD7E603228C3B454A78C21F49A32B82C72A0D8B49 (AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF * __this, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  ___data0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_il2cpp_TypeInfo_var, &___data0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/AuthorizationRequestCompletedCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequestCompletedCallback_EndInvoke_mE43F29739BF2E9DD09767E3C5C4977965E53DC8F (AuthorizationRequestCompletedCallback_t1A7B7FA0FC481828C8F0CBDC8991F02ECA30A9FF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback__ctor_m6AE0F51AFB3D07273AD38F0D7C6193528E7D1961 (NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback::Invoke(Unity.Notifications.iOS.iOSNotification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback_Invoke_mCCF71E824463A5CF6863EDFB9FB650FE5784CACC (NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * __this, iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * ___notification0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___notification0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___notification0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___notification0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___notification0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___notification0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___notification0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___notification0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * >::Invoke(targetMethod, targetThis, ___notification0);
					else
						GenericVirtActionInvoker1< iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * >::Invoke(targetMethod, targetThis, ___notification0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___notification0);
					else
						VirtActionInvoker1< iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___notification0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___notification0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___notification0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback::BeginInvoke(Unity.Notifications.iOS.iOSNotification,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NotificationReceivedCallback_BeginInvoke_m0488CEE5793DCF43C0E3CC91BDE3588678368527 (NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * __this, iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * ___notification0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___notification0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback_EndInvoke_m63776B1B0C6CC0CA5D5A08ECE31F4C53FBCB4A79 (NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_AuthorizationRequestCallback_tA1D3C80486C750EC3B6638B2C4B91540E393C4F3 (AuthorizationRequestCallback_tA1D3C80486C750EC3B6638B2C4B91540E393C4F3 * __this, intptr_t ___authdata0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___authdata0);

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper/AuthorizationRequestCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequestCallback__ctor_m868F99A8BEFAEC8EC4117FCDD67497341FEBDD74 (AuthorizationRequestCallback_tA1D3C80486C750EC3B6638B2C4B91540E393C4F3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper/AuthorizationRequestCallback::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequestCallback_Invoke_m3A7F7781A6F4644C93440041A5A2DE4DB60A22FF (AuthorizationRequestCallback_tA1D3C80486C750EC3B6638B2C4B91540E393C4F3 * __this, intptr_t ___authdata0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___authdata0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___authdata0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___authdata0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___authdata0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___authdata0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___authdata0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___authdata0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Unity.Notifications.iOS.iOSNotificationsWrapper/AuthorizationRequestCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AuthorizationRequestCallback_BeginInvoke_mE0D931D2B91E52A0F4FBD60906A61EE36C81878F (AuthorizationRequestCallback_tA1D3C80486C750EC3B6638B2C4B91540E393C4F3 * __this, intptr_t ___authdata0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___authdata0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper/AuthorizationRequestCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequestCallback_EndInvoke_m08EAE13F515327EACD162DC939B0693282F545C0 (AuthorizationRequestCallback_tA1D3C80486C750EC3B6638B2C4B91540E393C4F3 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 (NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 * __this, intptr_t ___notificationData0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___notificationData0);

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper/NotificationReceivedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback__ctor_mA1E99CE6E6538FA8F118BC8EC7200C8D677B515F (NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper/NotificationReceivedCallback::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback_Invoke_m5341563832DCF74B17675EAF3E41297C448DA543 (NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 * __this, intptr_t ___notificationData0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___notificationData0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___notificationData0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___notificationData0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___notificationData0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___notificationData0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___notificationData0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___notificationData0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Unity.Notifications.iOS.iOSNotificationsWrapper/NotificationReceivedCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NotificationReceivedCallback_BeginInvoke_m6F848EFD7D02ABCC99FDA84A8E0A0BC7DAA1E62A (NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 * __this, intptr_t ___notificationData0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___notificationData0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper/NotificationReceivedCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback_EndInvoke_mCFBA6F33499ECC319794CCC3333D319D4351FE81 (NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthorizationRequest_set_IsFinished_mAED11A9DD594CA7EA548FFD600E9FBB7F76CB336_inline (AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsFinished { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CIsFinishedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthorizationRequest_set_Granted_m0FDA28D3B975A3B02654DFB62C8F354047125D07_inline (AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool Granted { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CGrantedU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthorizationRequest_set_Error_mE85BA8C0180B42AEE7BCCD5EC37604D91BAA11EF_inline (AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Error { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CErrorU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthorizationRequest_set_DeviceToken_m3DD8821EB8D8C6AD3AD1A7383BF5AFF33362B447_inline (AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string DeviceToken { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CDeviceTokenU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool iOSNotificationTimeIntervalTrigger_get_Repeats_m48972F26AAE37EAE2D337E87AEBC4DE40987626F_inline (iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923 * __this, const RuntimeMethod* method)
{
	{
		// public bool Repeats { get; set; }
		bool L_0 = __this->get_U3CRepeatsU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Year_m8A0F301185923E277357D4EEE554EE673E1660C3_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method)
{
	{
		// public int? Year { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = __this->get_U3CYearU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Month_m2AFF6F4F357F8297E262AA31AEA418A4C0FC4F89_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method)
{
	{
		// public int? Month { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = __this->get_U3CMonthU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Day_m42898486914CB6EBB5B7AAD70B7981B21E929EA7_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method)
{
	{
		// public int? Day { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = __this->get_U3CDayU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Hour_mA4304F009A3F9CA93B9715AE5D3BAB81E5045FB6_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method)
{
	{
		// public int? Hour { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = __this->get_U3CHourU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Minute_mD045386C9F63AC301048D5C2EBF479DD25C64397_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method)
{
	{
		// public int? Minute { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = __this->get_U3CMinuteU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Second_m6EE7FF71AEA66769586E8559C2E7A11B2EC47E99_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method)
{
	{
		// public int? Second { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = __this->get_U3CSecondU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool iOSNotificationCalendarTrigger_get_Repeats_mE736C71557A7C086738EBD56C6D1936CE4200B34_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method)
{
	{
		// public bool Repeats { get; set; }
		bool L_0 = __this->get_U3CRepeatsU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  iOSNotificationLocationTrigger_get_Center_m908323B952AA351BCA1A2E8060B3776FE2FFB91A_inline (iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 Center { get; set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_U3CCenterU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool iOSNotificationLocationTrigger_get_NotifyOnEntry_mC842CDA7A8BE02A586FCE22413756402AE40C66A_inline (iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * __this, const RuntimeMethod* method)
{
	{
		// public bool NotifyOnEntry { get; set; }
		bool L_0 = __this->get_U3CNotifyOnEntryU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool iOSNotificationLocationTrigger_get_NotifyOnExit_mF117ACA5EAD44C39991624CA17B5909508776A98_inline (iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * __this, const RuntimeMethod* method)
{
	{
		// public bool NotifyOnExit { get; set; }
		bool L_0 = __this->get_U3CNotifyOnExitU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float iOSNotificationLocationTrigger_get_Radius_mD267EADF32C368187283E4B768C9EDF341B35E8F_inline (iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * __this, const RuntimeMethod* method)
{
	{
		// public float Radius { get; set; }
		float L_0 = __this->get_U3CRadiusU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationTimeIntervalTrigger_set_Repeats_m6171793E71519177BD5D31FD2EB3919063EF041D_inline (iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool Repeats { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CRepeatsU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
