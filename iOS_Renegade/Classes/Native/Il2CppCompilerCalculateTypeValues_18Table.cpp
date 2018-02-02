#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// UnityEngine.GameObject
struct GameObject_t1113636619;
// System.String
struct String_t;
// System.Collections.Generic.List`1<UnityEngine.Analytics.AnalyticsEventParam>
struct List_1_t3952196670;
// System.Type
struct Type_t;
// UnityEngine.Analytics.AnalyticsEventParamListContainer
struct AnalyticsEventParamListContainer_t587083383;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2865362463;
// System.Collections.Generic.List`1<UnityEngine.Analytics.TriggerRule>
struct List_1_t3418373063;
// UnityEngine.Object
struct Object_t631007953;
// System.Collections.Generic.List`1<UnityEngine.Analytics.TrackableProperty/FieldWithTarget>
struct List_1_t235857739;
// System.Void
struct Void_t1185182177;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// UnityEngine.Analytics.TriggerListContainer
struct TriggerListContainer_t2032715483;
// UnityEngine.Analytics.EventTrigger/OnTrigger
struct OnTrigger_t4184125570;
// UnityEngine.Analytics.TriggerMethod
struct TriggerMethod_t582536534;
// UnityEngine.Analytics.TrackableField
struct TrackableField_t1772682203;
// UnityEngine.Analytics.ValueProperty
struct ValueProperty_t1868393739;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// UnityEngine.Transform[]
struct TransformU5BU5D_t807237628;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3235626157;
// UnityEngine.Analytics.TrackableProperty
struct TrackableProperty_t3943537984;
// UnityEngine.Rigidbody
struct Rigidbody_t3916780224;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t2439009922;
// UnityEngine.UI.Image
struct Image_t2670269651;
// UnityEngine.UI.Slider
struct Slider_t3903728902;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Renderer
struct Renderer_t2627027031;




#ifndef U3CMODULEU3E_T692745547_H
#define U3CMODULEU3E_T692745547_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745547 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745547_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef TRACKABLETRIGGER_T621205209_H
#define TRACKABLETRIGGER_T621205209_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TrackableTrigger
struct  TrackableTrigger_t621205209  : public RuntimeObject
{
public:
	// UnityEngine.GameObject UnityEngine.Analytics.TrackableTrigger::m_Target
	GameObject_t1113636619 * ___m_Target_0;
	// System.String UnityEngine.Analytics.TrackableTrigger::m_MethodPath
	String_t* ___m_MethodPath_1;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(TrackableTrigger_t621205209, ___m_Target_0)); }
	inline GameObject_t1113636619 * get_m_Target_0() const { return ___m_Target_0; }
	inline GameObject_t1113636619 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(GameObject_t1113636619 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_0), value);
	}

	inline static int32_t get_offset_of_m_MethodPath_1() { return static_cast<int32_t>(offsetof(TrackableTrigger_t621205209, ___m_MethodPath_1)); }
	inline String_t* get_m_MethodPath_1() const { return ___m_MethodPath_1; }
	inline String_t** get_address_of_m_MethodPath_1() { return &___m_MethodPath_1; }
	inline void set_m_MethodPath_1(String_t* value)
	{
		___m_MethodPath_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_MethodPath_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLETRIGGER_T621205209_H
#ifndef ANALYTICSEVENTPARAMLISTCONTAINER_T587083383_H
#define ANALYTICSEVENTPARAMLISTCONTAINER_T587083383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.AnalyticsEventParamListContainer
struct  AnalyticsEventParamListContainer_t587083383  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Analytics.AnalyticsEventParam> UnityEngine.Analytics.AnalyticsEventParamListContainer::m_Parameters
	List_1_t3952196670 * ___m_Parameters_0;

public:
	inline static int32_t get_offset_of_m_Parameters_0() { return static_cast<int32_t>(offsetof(AnalyticsEventParamListContainer_t587083383, ___m_Parameters_0)); }
	inline List_1_t3952196670 * get_m_Parameters_0() const { return ___m_Parameters_0; }
	inline List_1_t3952196670 ** get_address_of_m_Parameters_0() { return &___m_Parameters_0; }
	inline void set_m_Parameters_0(List_1_t3952196670 * value)
	{
		___m_Parameters_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Parameters_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANALYTICSEVENTPARAMLISTCONTAINER_T587083383_H
#ifndef STANDARDEVENTPAYLOAD_T1629891255_H
#define STANDARDEVENTPAYLOAD_T1629891255_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.StandardEventPayload
struct  StandardEventPayload_t1629891255  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Analytics.StandardEventPayload::m_IsEventExpanded
	bool ___m_IsEventExpanded_0;
	// System.String UnityEngine.Analytics.StandardEventPayload::m_StandardEventType
	String_t* ___m_StandardEventType_1;
	// System.Type UnityEngine.Analytics.StandardEventPayload::standardEventType
	Type_t * ___standardEventType_2;
	// UnityEngine.Analytics.AnalyticsEventParamListContainer UnityEngine.Analytics.StandardEventPayload::m_Parameters
	AnalyticsEventParamListContainer_t587083383 * ___m_Parameters_3;
	// System.String UnityEngine.Analytics.StandardEventPayload::m_Name
	String_t* ___m_Name_5;

public:
	inline static int32_t get_offset_of_m_IsEventExpanded_0() { return static_cast<int32_t>(offsetof(StandardEventPayload_t1629891255, ___m_IsEventExpanded_0)); }
	inline bool get_m_IsEventExpanded_0() const { return ___m_IsEventExpanded_0; }
	inline bool* get_address_of_m_IsEventExpanded_0() { return &___m_IsEventExpanded_0; }
	inline void set_m_IsEventExpanded_0(bool value)
	{
		___m_IsEventExpanded_0 = value;
	}

	inline static int32_t get_offset_of_m_StandardEventType_1() { return static_cast<int32_t>(offsetof(StandardEventPayload_t1629891255, ___m_StandardEventType_1)); }
	inline String_t* get_m_StandardEventType_1() const { return ___m_StandardEventType_1; }
	inline String_t** get_address_of_m_StandardEventType_1() { return &___m_StandardEventType_1; }
	inline void set_m_StandardEventType_1(String_t* value)
	{
		___m_StandardEventType_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_StandardEventType_1), value);
	}

	inline static int32_t get_offset_of_standardEventType_2() { return static_cast<int32_t>(offsetof(StandardEventPayload_t1629891255, ___standardEventType_2)); }
	inline Type_t * get_standardEventType_2() const { return ___standardEventType_2; }
	inline Type_t ** get_address_of_standardEventType_2() { return &___standardEventType_2; }
	inline void set_standardEventType_2(Type_t * value)
	{
		___standardEventType_2 = value;
		Il2CppCodeGenWriteBarrier((&___standardEventType_2), value);
	}

	inline static int32_t get_offset_of_m_Parameters_3() { return static_cast<int32_t>(offsetof(StandardEventPayload_t1629891255, ___m_Parameters_3)); }
	inline AnalyticsEventParamListContainer_t587083383 * get_m_Parameters_3() const { return ___m_Parameters_3; }
	inline AnalyticsEventParamListContainer_t587083383 ** get_address_of_m_Parameters_3() { return &___m_Parameters_3; }
	inline void set_m_Parameters_3(AnalyticsEventParamListContainer_t587083383 * value)
	{
		___m_Parameters_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Parameters_3), value);
	}

	inline static int32_t get_offset_of_m_Name_5() { return static_cast<int32_t>(offsetof(StandardEventPayload_t1629891255, ___m_Name_5)); }
	inline String_t* get_m_Name_5() const { return ___m_Name_5; }
	inline String_t** get_address_of_m_Name_5() { return &___m_Name_5; }
	inline void set_m_Name_5(String_t* value)
	{
		___m_Name_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Name_5), value);
	}
};

struct StandardEventPayload_t1629891255_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Analytics.StandardEventPayload::m_EventData
	Dictionary_2_t2865362463 * ___m_EventData_4;

public:
	inline static int32_t get_offset_of_m_EventData_4() { return static_cast<int32_t>(offsetof(StandardEventPayload_t1629891255_StaticFields, ___m_EventData_4)); }
	inline Dictionary_2_t2865362463 * get_m_EventData_4() const { return ___m_EventData_4; }
	inline Dictionary_2_t2865362463 ** get_address_of_m_EventData_4() { return &___m_EventData_4; }
	inline void set_m_EventData_4(Dictionary_2_t2865362463 * value)
	{
		___m_EventData_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventData_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STANDARDEVENTPAYLOAD_T1629891255_H
#ifndef TRIGGERLISTCONTAINER_T2032715483_H
#define TRIGGERLISTCONTAINER_T2032715483_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TriggerListContainer
struct  TriggerListContainer_t2032715483  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Analytics.TriggerRule> UnityEngine.Analytics.TriggerListContainer::m_Rules
	List_1_t3418373063 * ___m_Rules_0;

public:
	inline static int32_t get_offset_of_m_Rules_0() { return static_cast<int32_t>(offsetof(TriggerListContainer_t2032715483, ___m_Rules_0)); }
	inline List_1_t3418373063 * get_m_Rules_0() const { return ___m_Rules_0; }
	inline List_1_t3418373063 ** get_address_of_m_Rules_0() { return &___m_Rules_0; }
	inline void set_m_Rules_0(List_1_t3418373063 * value)
	{
		___m_Rules_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rules_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIGGERLISTCONTAINER_T2032715483_H
#ifndef TRACKABLEPROPERTYBASE_T2121532948_H
#define TRACKABLEPROPERTYBASE_T2121532948_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TrackablePropertyBase
struct  TrackablePropertyBase_t2121532948  : public RuntimeObject
{
public:
	// UnityEngine.Object UnityEngine.Analytics.TrackablePropertyBase::m_Target
	Object_t631007953 * ___m_Target_0;
	// System.String UnityEngine.Analytics.TrackablePropertyBase::m_Path
	String_t* ___m_Path_1;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(TrackablePropertyBase_t2121532948, ___m_Target_0)); }
	inline Object_t631007953 * get_m_Target_0() const { return ___m_Target_0; }
	inline Object_t631007953 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(Object_t631007953 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_0), value);
	}

	inline static int32_t get_offset_of_m_Path_1() { return static_cast<int32_t>(offsetof(TrackablePropertyBase_t2121532948, ___m_Path_1)); }
	inline String_t* get_m_Path_1() const { return ___m_Path_1; }
	inline String_t** get_address_of_m_Path_1() { return &___m_Path_1; }
	inline void set_m_Path_1(String_t* value)
	{
		___m_Path_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Path_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLEPROPERTYBASE_T2121532948_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef TRIGGERMETHOD_T582536534_H
#define TRIGGERMETHOD_T582536534_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TriggerMethod
struct  TriggerMethod_t582536534  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIGGERMETHOD_T582536534_H
#ifndef TRACKABLEPROPERTY_T3943537984_H
#define TRACKABLEPROPERTY_T3943537984_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TrackableProperty
struct  TrackableProperty_t3943537984  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Analytics.TrackableProperty/FieldWithTarget> UnityEngine.Analytics.TrackableProperty::m_Fields
	List_1_t235857739 * ___m_Fields_1;

public:
	inline static int32_t get_offset_of_m_Fields_1() { return static_cast<int32_t>(offsetof(TrackableProperty_t3943537984, ___m_Fields_1)); }
	inline List_1_t235857739 * get_m_Fields_1() const { return ___m_Fields_1; }
	inline List_1_t235857739 ** get_address_of_m_Fields_1() { return &___m_Fields_1; }
	inline void set_m_Fields_1(List_1_t235857739 * value)
	{
		___m_Fields_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Fields_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLEPROPERTY_T3943537984_H
#ifndef FIELDWITHTARGET_T3058750293_H
#define FIELDWITHTARGET_T3058750293_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TrackableProperty/FieldWithTarget
struct  FieldWithTarget_t3058750293  : public RuntimeObject
{
public:
	// System.String UnityEngine.Analytics.TrackableProperty/FieldWithTarget::m_ParamName
	String_t* ___m_ParamName_0;
	// UnityEngine.Object UnityEngine.Analytics.TrackableProperty/FieldWithTarget::m_Target
	Object_t631007953 * ___m_Target_1;
	// System.String UnityEngine.Analytics.TrackableProperty/FieldWithTarget::m_FieldPath
	String_t* ___m_FieldPath_2;
	// System.String UnityEngine.Analytics.TrackableProperty/FieldWithTarget::m_TypeString
	String_t* ___m_TypeString_3;
	// System.Boolean UnityEngine.Analytics.TrackableProperty/FieldWithTarget::m_DoStatic
	bool ___m_DoStatic_4;
	// System.String UnityEngine.Analytics.TrackableProperty/FieldWithTarget::m_StaticString
	String_t* ___m_StaticString_5;

public:
	inline static int32_t get_offset_of_m_ParamName_0() { return static_cast<int32_t>(offsetof(FieldWithTarget_t3058750293, ___m_ParamName_0)); }
	inline String_t* get_m_ParamName_0() const { return ___m_ParamName_0; }
	inline String_t** get_address_of_m_ParamName_0() { return &___m_ParamName_0; }
	inline void set_m_ParamName_0(String_t* value)
	{
		___m_ParamName_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParamName_0), value);
	}

	inline static int32_t get_offset_of_m_Target_1() { return static_cast<int32_t>(offsetof(FieldWithTarget_t3058750293, ___m_Target_1)); }
	inline Object_t631007953 * get_m_Target_1() const { return ___m_Target_1; }
	inline Object_t631007953 ** get_address_of_m_Target_1() { return &___m_Target_1; }
	inline void set_m_Target_1(Object_t631007953 * value)
	{
		___m_Target_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_1), value);
	}

	inline static int32_t get_offset_of_m_FieldPath_2() { return static_cast<int32_t>(offsetof(FieldWithTarget_t3058750293, ___m_FieldPath_2)); }
	inline String_t* get_m_FieldPath_2() const { return ___m_FieldPath_2; }
	inline String_t** get_address_of_m_FieldPath_2() { return &___m_FieldPath_2; }
	inline void set_m_FieldPath_2(String_t* value)
	{
		___m_FieldPath_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_FieldPath_2), value);
	}

	inline static int32_t get_offset_of_m_TypeString_3() { return static_cast<int32_t>(offsetof(FieldWithTarget_t3058750293, ___m_TypeString_3)); }
	inline String_t* get_m_TypeString_3() const { return ___m_TypeString_3; }
	inline String_t** get_address_of_m_TypeString_3() { return &___m_TypeString_3; }
	inline void set_m_TypeString_3(String_t* value)
	{
		___m_TypeString_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeString_3), value);
	}

	inline static int32_t get_offset_of_m_DoStatic_4() { return static_cast<int32_t>(offsetof(FieldWithTarget_t3058750293, ___m_DoStatic_4)); }
	inline bool get_m_DoStatic_4() const { return ___m_DoStatic_4; }
	inline bool* get_address_of_m_DoStatic_4() { return &___m_DoStatic_4; }
	inline void set_m_DoStatic_4(bool value)
	{
		___m_DoStatic_4 = value;
	}

	inline static int32_t get_offset_of_m_StaticString_5() { return static_cast<int32_t>(offsetof(FieldWithTarget_t3058750293, ___m_StaticString_5)); }
	inline String_t* get_m_StaticString_5() const { return ___m_StaticString_5; }
	inline String_t** get_address_of_m_StaticString_5() { return &___m_StaticString_5; }
	inline void set_m_StaticString_5(String_t* value)
	{
		___m_StaticString_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_StaticString_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDWITHTARGET_T3058750293_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef TRACKABLEFIELD_T1772682203_H
#define TRACKABLEFIELD_T1772682203_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TrackableField
struct  TrackableField_t1772682203  : public TrackablePropertyBase_t2121532948
{
public:
	// System.String[] UnityEngine.Analytics.TrackableField::m_ValidTypeNames
	StringU5BU5D_t1281789340* ___m_ValidTypeNames_2;
	// System.String UnityEngine.Analytics.TrackableField::m_Type
	String_t* ___m_Type_3;
	// System.String UnityEngine.Analytics.TrackableField::m_EnumType
	String_t* ___m_EnumType_4;

public:
	inline static int32_t get_offset_of_m_ValidTypeNames_2() { return static_cast<int32_t>(offsetof(TrackableField_t1772682203, ___m_ValidTypeNames_2)); }
	inline StringU5BU5D_t1281789340* get_m_ValidTypeNames_2() const { return ___m_ValidTypeNames_2; }
	inline StringU5BU5D_t1281789340** get_address_of_m_ValidTypeNames_2() { return &___m_ValidTypeNames_2; }
	inline void set_m_ValidTypeNames_2(StringU5BU5D_t1281789340* value)
	{
		___m_ValidTypeNames_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ValidTypeNames_2), value);
	}

	inline static int32_t get_offset_of_m_Type_3() { return static_cast<int32_t>(offsetof(TrackableField_t1772682203, ___m_Type_3)); }
	inline String_t* get_m_Type_3() const { return ___m_Type_3; }
	inline String_t** get_address_of_m_Type_3() { return &___m_Type_3; }
	inline void set_m_Type_3(String_t* value)
	{
		___m_Type_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Type_3), value);
	}

	inline static int32_t get_offset_of_m_EnumType_4() { return static_cast<int32_t>(offsetof(TrackableField_t1772682203, ___m_EnumType_4)); }
	inline String_t* get_m_EnumType_4() const { return ___m_EnumType_4; }
	inline String_t** get_address_of_m_EnumType_4() { return &___m_EnumType_4; }
	inline void set_m_EnumType_4(String_t* value)
	{
		___m_EnumType_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_EnumType_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLEFIELD_T1772682203_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
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
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef REQUIREMENTTYPE_T3584265503_H
#define REQUIREMENTTYPE_T3584265503_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.AnalyticsEventParam/RequirementType
struct  RequirementType_t3584265503 
{
public:
	// System.Int32 UnityEngine.Analytics.AnalyticsEventParam/RequirementType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RequirementType_t3584265503, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUIREMENTTYPE_T3584265503_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef TRIGGER_T4199345191_H
#define TRIGGER_T4199345191_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.AnalyticsTracker/Trigger
struct  Trigger_t4199345191 
{
public:
	// System.Int32 UnityEngine.Analytics.AnalyticsTracker/Trigger::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Trigger_t4199345191, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIGGER_T4199345191_H
#ifndef TRIGGERLIFECYCLEEVENT_T3193146760_H
#define TRIGGERLIFECYCLEEVENT_T3193146760_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TriggerLifecycleEvent
struct  TriggerLifecycleEvent_t3193146760 
{
public:
	// System.Int32 UnityEngine.Analytics.TriggerLifecycleEvent::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TriggerLifecycleEvent_t3193146760, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIGGERLIFECYCLEEVENT_T3193146760_H
#ifndef TRIGGERTYPE_T105272677_H
#define TRIGGERTYPE_T105272677_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TriggerType
struct  TriggerType_t105272677 
{
public:
	// System.Int32 UnityEngine.Analytics.TriggerType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TriggerType_t105272677, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIGGERTYPE_T105272677_H
#ifndef TRIGGERBOOL_T501031542_H
#define TRIGGERBOOL_T501031542_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TriggerBool
struct  TriggerBool_t501031542 
{
public:
	// System.Int32 UnityEngine.Analytics.TriggerBool::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TriggerBool_t501031542, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIGGERBOOL_T501031542_H
#ifndef TRIGGEROPERATOR_T3611898925_H
#define TRIGGEROPERATOR_T3611898925_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TriggerOperator
struct  TriggerOperator_t3611898925 
{
public:
	// System.Int32 UnityEngine.Analytics.TriggerOperator::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TriggerOperator_t3611898925, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIGGEROPERATOR_T3611898925_H
#ifndef PROPERTYTYPE_T4040930247_H
#define PROPERTYTYPE_T4040930247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.ValueProperty/PropertyType
struct  PropertyType_t4040930247 
{
public:
	// System.Int32 UnityEngine.Analytics.ValueProperty/PropertyType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PropertyType_t4040930247, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYTYPE_T4040930247_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef EVENTTRIGGER_T2527451695_H
#define EVENTTRIGGER_T2527451695_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.EventTrigger
struct  EventTrigger_t2527451695  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Analytics.EventTrigger::m_IsTriggerExpanded
	bool ___m_IsTriggerExpanded_0;
	// UnityEngine.Analytics.TriggerType UnityEngine.Analytics.EventTrigger::m_Type
	int32_t ___m_Type_1;
	// UnityEngine.Analytics.TriggerLifecycleEvent UnityEngine.Analytics.EventTrigger::m_LifecycleEvent
	int32_t ___m_LifecycleEvent_2;
	// System.Boolean UnityEngine.Analytics.EventTrigger::m_ApplyRules
	bool ___m_ApplyRules_3;
	// UnityEngine.Analytics.TriggerListContainer UnityEngine.Analytics.EventTrigger::m_Rules
	TriggerListContainer_t2032715483 * ___m_Rules_4;
	// UnityEngine.Analytics.TriggerBool UnityEngine.Analytics.EventTrigger::m_TriggerBool
	int32_t ___m_TriggerBool_5;
	// System.Single UnityEngine.Analytics.EventTrigger::m_InitTime
	float ___m_InitTime_6;
	// System.Single UnityEngine.Analytics.EventTrigger::m_RepeatTime
	float ___m_RepeatTime_7;
	// System.Int32 UnityEngine.Analytics.EventTrigger::m_Repetitions
	int32_t ___m_Repetitions_8;
	// System.Int32 UnityEngine.Analytics.EventTrigger::repetitionCount
	int32_t ___repetitionCount_9;
	// UnityEngine.Analytics.EventTrigger/OnTrigger UnityEngine.Analytics.EventTrigger::m_TriggerFunction
	OnTrigger_t4184125570 * ___m_TriggerFunction_10;
	// UnityEngine.Analytics.TriggerMethod UnityEngine.Analytics.EventTrigger::m_Method
	TriggerMethod_t582536534 * ___m_Method_11;

public:
	inline static int32_t get_offset_of_m_IsTriggerExpanded_0() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_IsTriggerExpanded_0)); }
	inline bool get_m_IsTriggerExpanded_0() const { return ___m_IsTriggerExpanded_0; }
	inline bool* get_address_of_m_IsTriggerExpanded_0() { return &___m_IsTriggerExpanded_0; }
	inline void set_m_IsTriggerExpanded_0(bool value)
	{
		___m_IsTriggerExpanded_0 = value;
	}

	inline static int32_t get_offset_of_m_Type_1() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_Type_1)); }
	inline int32_t get_m_Type_1() const { return ___m_Type_1; }
	inline int32_t* get_address_of_m_Type_1() { return &___m_Type_1; }
	inline void set_m_Type_1(int32_t value)
	{
		___m_Type_1 = value;
	}

	inline static int32_t get_offset_of_m_LifecycleEvent_2() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_LifecycleEvent_2)); }
	inline int32_t get_m_LifecycleEvent_2() const { return ___m_LifecycleEvent_2; }
	inline int32_t* get_address_of_m_LifecycleEvent_2() { return &___m_LifecycleEvent_2; }
	inline void set_m_LifecycleEvent_2(int32_t value)
	{
		___m_LifecycleEvent_2 = value;
	}

	inline static int32_t get_offset_of_m_ApplyRules_3() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_ApplyRules_3)); }
	inline bool get_m_ApplyRules_3() const { return ___m_ApplyRules_3; }
	inline bool* get_address_of_m_ApplyRules_3() { return &___m_ApplyRules_3; }
	inline void set_m_ApplyRules_3(bool value)
	{
		___m_ApplyRules_3 = value;
	}

	inline static int32_t get_offset_of_m_Rules_4() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_Rules_4)); }
	inline TriggerListContainer_t2032715483 * get_m_Rules_4() const { return ___m_Rules_4; }
	inline TriggerListContainer_t2032715483 ** get_address_of_m_Rules_4() { return &___m_Rules_4; }
	inline void set_m_Rules_4(TriggerListContainer_t2032715483 * value)
	{
		___m_Rules_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rules_4), value);
	}

	inline static int32_t get_offset_of_m_TriggerBool_5() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_TriggerBool_5)); }
	inline int32_t get_m_TriggerBool_5() const { return ___m_TriggerBool_5; }
	inline int32_t* get_address_of_m_TriggerBool_5() { return &___m_TriggerBool_5; }
	inline void set_m_TriggerBool_5(int32_t value)
	{
		___m_TriggerBool_5 = value;
	}

	inline static int32_t get_offset_of_m_InitTime_6() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_InitTime_6)); }
	inline float get_m_InitTime_6() const { return ___m_InitTime_6; }
	inline float* get_address_of_m_InitTime_6() { return &___m_InitTime_6; }
	inline void set_m_InitTime_6(float value)
	{
		___m_InitTime_6 = value;
	}

	inline static int32_t get_offset_of_m_RepeatTime_7() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_RepeatTime_7)); }
	inline float get_m_RepeatTime_7() const { return ___m_RepeatTime_7; }
	inline float* get_address_of_m_RepeatTime_7() { return &___m_RepeatTime_7; }
	inline void set_m_RepeatTime_7(float value)
	{
		___m_RepeatTime_7 = value;
	}

	inline static int32_t get_offset_of_m_Repetitions_8() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_Repetitions_8)); }
	inline int32_t get_m_Repetitions_8() const { return ___m_Repetitions_8; }
	inline int32_t* get_address_of_m_Repetitions_8() { return &___m_Repetitions_8; }
	inline void set_m_Repetitions_8(int32_t value)
	{
		___m_Repetitions_8 = value;
	}

	inline static int32_t get_offset_of_repetitionCount_9() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___repetitionCount_9)); }
	inline int32_t get_repetitionCount_9() const { return ___repetitionCount_9; }
	inline int32_t* get_address_of_repetitionCount_9() { return &___repetitionCount_9; }
	inline void set_repetitionCount_9(int32_t value)
	{
		___repetitionCount_9 = value;
	}

	inline static int32_t get_offset_of_m_TriggerFunction_10() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_TriggerFunction_10)); }
	inline OnTrigger_t4184125570 * get_m_TriggerFunction_10() const { return ___m_TriggerFunction_10; }
	inline OnTrigger_t4184125570 ** get_address_of_m_TriggerFunction_10() { return &___m_TriggerFunction_10; }
	inline void set_m_TriggerFunction_10(OnTrigger_t4184125570 * value)
	{
		___m_TriggerFunction_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_TriggerFunction_10), value);
	}

	inline static int32_t get_offset_of_m_Method_11() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_Method_11)); }
	inline TriggerMethod_t582536534 * get_m_Method_11() const { return ___m_Method_11; }
	inline TriggerMethod_t582536534 ** get_address_of_m_Method_11() { return &___m_Method_11; }
	inline void set_m_Method_11(TriggerMethod_t582536534 * value)
	{
		___m_Method_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Method_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTTRIGGER_T2527451695_H
#ifndef VALUEPROPERTY_T1868393739_H
#define VALUEPROPERTY_T1868393739_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.ValueProperty
struct  ValueProperty_t1868393739  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Analytics.ValueProperty::m_EditingCustomValue
	bool ___m_EditingCustomValue_0;
	// System.Int32 UnityEngine.Analytics.ValueProperty::m_PopupIndex
	int32_t ___m_PopupIndex_1;
	// System.String UnityEngine.Analytics.ValueProperty::m_CustomValue
	String_t* ___m_CustomValue_2;
	// System.Boolean UnityEngine.Analytics.ValueProperty::m_FixedType
	bool ___m_FixedType_3;
	// System.String UnityEngine.Analytics.ValueProperty::m_EnumType
	String_t* ___m_EnumType_4;
	// System.Boolean UnityEngine.Analytics.ValueProperty::m_EnumTypeIsCustomizable
	bool ___m_EnumTypeIsCustomizable_5;
	// System.Boolean UnityEngine.Analytics.ValueProperty::m_CanDisable
	bool ___m_CanDisable_6;
	// UnityEngine.Analytics.ValueProperty/PropertyType UnityEngine.Analytics.ValueProperty::m_PropertyType
	int32_t ___m_PropertyType_7;
	// System.String UnityEngine.Analytics.ValueProperty::m_ValueType
	String_t* ___m_ValueType_8;
	// System.String UnityEngine.Analytics.ValueProperty::m_Value
	String_t* ___m_Value_9;
	// UnityEngine.Analytics.TrackableField UnityEngine.Analytics.ValueProperty::m_Target
	TrackableField_t1772682203 * ___m_Target_10;

public:
	inline static int32_t get_offset_of_m_EditingCustomValue_0() { return static_cast<int32_t>(offsetof(ValueProperty_t1868393739, ___m_EditingCustomValue_0)); }
	inline bool get_m_EditingCustomValue_0() const { return ___m_EditingCustomValue_0; }
	inline bool* get_address_of_m_EditingCustomValue_0() { return &___m_EditingCustomValue_0; }
	inline void set_m_EditingCustomValue_0(bool value)
	{
		___m_EditingCustomValue_0 = value;
	}

	inline static int32_t get_offset_of_m_PopupIndex_1() { return static_cast<int32_t>(offsetof(ValueProperty_t1868393739, ___m_PopupIndex_1)); }
	inline int32_t get_m_PopupIndex_1() const { return ___m_PopupIndex_1; }
	inline int32_t* get_address_of_m_PopupIndex_1() { return &___m_PopupIndex_1; }
	inline void set_m_PopupIndex_1(int32_t value)
	{
		___m_PopupIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_CustomValue_2() { return static_cast<int32_t>(offsetof(ValueProperty_t1868393739, ___m_CustomValue_2)); }
	inline String_t* get_m_CustomValue_2() const { return ___m_CustomValue_2; }
	inline String_t** get_address_of_m_CustomValue_2() { return &___m_CustomValue_2; }
	inline void set_m_CustomValue_2(String_t* value)
	{
		___m_CustomValue_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_CustomValue_2), value);
	}

	inline static int32_t get_offset_of_m_FixedType_3() { return static_cast<int32_t>(offsetof(ValueProperty_t1868393739, ___m_FixedType_3)); }
	inline bool get_m_FixedType_3() const { return ___m_FixedType_3; }
	inline bool* get_address_of_m_FixedType_3() { return &___m_FixedType_3; }
	inline void set_m_FixedType_3(bool value)
	{
		___m_FixedType_3 = value;
	}

	inline static int32_t get_offset_of_m_EnumType_4() { return static_cast<int32_t>(offsetof(ValueProperty_t1868393739, ___m_EnumType_4)); }
	inline String_t* get_m_EnumType_4() const { return ___m_EnumType_4; }
	inline String_t** get_address_of_m_EnumType_4() { return &___m_EnumType_4; }
	inline void set_m_EnumType_4(String_t* value)
	{
		___m_EnumType_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_EnumType_4), value);
	}

	inline static int32_t get_offset_of_m_EnumTypeIsCustomizable_5() { return static_cast<int32_t>(offsetof(ValueProperty_t1868393739, ___m_EnumTypeIsCustomizable_5)); }
	inline bool get_m_EnumTypeIsCustomizable_5() const { return ___m_EnumTypeIsCustomizable_5; }
	inline bool* get_address_of_m_EnumTypeIsCustomizable_5() { return &___m_EnumTypeIsCustomizable_5; }
	inline void set_m_EnumTypeIsCustomizable_5(bool value)
	{
		___m_EnumTypeIsCustomizable_5 = value;
	}

	inline static int32_t get_offset_of_m_CanDisable_6() { return static_cast<int32_t>(offsetof(ValueProperty_t1868393739, ___m_CanDisable_6)); }
	inline bool get_m_CanDisable_6() const { return ___m_CanDisable_6; }
	inline bool* get_address_of_m_CanDisable_6() { return &___m_CanDisable_6; }
	inline void set_m_CanDisable_6(bool value)
	{
		___m_CanDisable_6 = value;
	}

	inline static int32_t get_offset_of_m_PropertyType_7() { return static_cast<int32_t>(offsetof(ValueProperty_t1868393739, ___m_PropertyType_7)); }
	inline int32_t get_m_PropertyType_7() const { return ___m_PropertyType_7; }
	inline int32_t* get_address_of_m_PropertyType_7() { return &___m_PropertyType_7; }
	inline void set_m_PropertyType_7(int32_t value)
	{
		___m_PropertyType_7 = value;
	}

	inline static int32_t get_offset_of_m_ValueType_8() { return static_cast<int32_t>(offsetof(ValueProperty_t1868393739, ___m_ValueType_8)); }
	inline String_t* get_m_ValueType_8() const { return ___m_ValueType_8; }
	inline String_t** get_address_of_m_ValueType_8() { return &___m_ValueType_8; }
	inline void set_m_ValueType_8(String_t* value)
	{
		___m_ValueType_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_ValueType_8), value);
	}

	inline static int32_t get_offset_of_m_Value_9() { return static_cast<int32_t>(offsetof(ValueProperty_t1868393739, ___m_Value_9)); }
	inline String_t* get_m_Value_9() const { return ___m_Value_9; }
	inline String_t** get_address_of_m_Value_9() { return &___m_Value_9; }
	inline void set_m_Value_9(String_t* value)
	{
		___m_Value_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Value_9), value);
	}

	inline static int32_t get_offset_of_m_Target_10() { return static_cast<int32_t>(offsetof(ValueProperty_t1868393739, ___m_Target_10)); }
	inline TrackableField_t1772682203 * get_m_Target_10() const { return ___m_Target_10; }
	inline TrackableField_t1772682203 ** get_address_of_m_Target_10() { return &___m_Target_10; }
	inline void set_m_Target_10(TrackableField_t1772682203 * value)
	{
		___m_Target_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALUEPROPERTY_T1868393739_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef TRIGGERRULE_T1946298321_H
#define TRIGGERRULE_T1946298321_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TriggerRule
struct  TriggerRule_t1946298321  : public RuntimeObject
{
public:
	// UnityEngine.Analytics.TrackableField UnityEngine.Analytics.TriggerRule::m_Target
	TrackableField_t1772682203 * ___m_Target_0;
	// UnityEngine.Analytics.TriggerOperator UnityEngine.Analytics.TriggerRule::m_Operator
	int32_t ___m_Operator_1;
	// UnityEngine.Analytics.ValueProperty UnityEngine.Analytics.TriggerRule::m_Value
	ValueProperty_t1868393739 * ___m_Value_2;
	// UnityEngine.Analytics.ValueProperty UnityEngine.Analytics.TriggerRule::m_Value2
	ValueProperty_t1868393739 * ___m_Value2_3;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(TriggerRule_t1946298321, ___m_Target_0)); }
	inline TrackableField_t1772682203 * get_m_Target_0() const { return ___m_Target_0; }
	inline TrackableField_t1772682203 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(TrackableField_t1772682203 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_0), value);
	}

	inline static int32_t get_offset_of_m_Operator_1() { return static_cast<int32_t>(offsetof(TriggerRule_t1946298321, ___m_Operator_1)); }
	inline int32_t get_m_Operator_1() const { return ___m_Operator_1; }
	inline int32_t* get_address_of_m_Operator_1() { return &___m_Operator_1; }
	inline void set_m_Operator_1(int32_t value)
	{
		___m_Operator_1 = value;
	}

	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(TriggerRule_t1946298321, ___m_Value_2)); }
	inline ValueProperty_t1868393739 * get_m_Value_2() const { return ___m_Value_2; }
	inline ValueProperty_t1868393739 ** get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(ValueProperty_t1868393739 * value)
	{
		___m_Value_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Value_2), value);
	}

	inline static int32_t get_offset_of_m_Value2_3() { return static_cast<int32_t>(offsetof(TriggerRule_t1946298321, ___m_Value2_3)); }
	inline ValueProperty_t1868393739 * get_m_Value2_3() const { return ___m_Value2_3; }
	inline ValueProperty_t1868393739 ** get_address_of_m_Value2_3() { return &___m_Value2_3; }
	inline void set_m_Value2_3(ValueProperty_t1868393739 * value)
	{
		___m_Value2_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Value2_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIGGERRULE_T1946298321_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef ONTRIGGER_T4184125570_H
#define ONTRIGGER_T4184125570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.EventTrigger/OnTrigger
struct  OnTrigger_t4184125570  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONTRIGGER_T4184125570_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef SPAWNSPIKES_T2984661397_H
#define SPAWNSPIKES_T2984661397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpawnSpikes
struct  SpawnSpikes_t2984661397  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject SpawnSpikes::Spike
	GameObject_t1113636619 * ___Spike_2;
	// UnityEngine.Transform[] SpawnSpikes::SpawnPoints
	TransformU5BU5D_t807237628* ___SpawnPoints_3;

public:
	inline static int32_t get_offset_of_Spike_2() { return static_cast<int32_t>(offsetof(SpawnSpikes_t2984661397, ___Spike_2)); }
	inline GameObject_t1113636619 * get_Spike_2() const { return ___Spike_2; }
	inline GameObject_t1113636619 ** get_address_of_Spike_2() { return &___Spike_2; }
	inline void set_Spike_2(GameObject_t1113636619 * value)
	{
		___Spike_2 = value;
		Il2CppCodeGenWriteBarrier((&___Spike_2), value);
	}

	inline static int32_t get_offset_of_SpawnPoints_3() { return static_cast<int32_t>(offsetof(SpawnSpikes_t2984661397, ___SpawnPoints_3)); }
	inline TransformU5BU5D_t807237628* get_SpawnPoints_3() const { return ___SpawnPoints_3; }
	inline TransformU5BU5D_t807237628** get_address_of_SpawnPoints_3() { return &___SpawnPoints_3; }
	inline void set_SpawnPoints_3(TransformU5BU5D_t807237628* value)
	{
		___SpawnPoints_3 = value;
		Il2CppCodeGenWriteBarrier((&___SpawnPoints_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPAWNSPIKES_T2984661397_H
#ifndef SPAWN_T617419884_H
#define SPAWN_T617419884_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spawn
struct  Spawn_t617419884  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject Spawn::Enemy
	GameObject_t1113636619 * ___Enemy_2;
	// UnityEngine.Transform Spawn::SpawnPoint
	Transform_t3600365921 * ___SpawnPoint_3;
	// System.Int32 Spawn::maxNum_Enemies
	int32_t ___maxNum_Enemies_4;
	// System.Single Spawn::spawnRate
	float ___spawnRate_5;
	// System.Int32 Spawn::num_Spawned
	int32_t ___num_Spawned_6;

public:
	inline static int32_t get_offset_of_Enemy_2() { return static_cast<int32_t>(offsetof(Spawn_t617419884, ___Enemy_2)); }
	inline GameObject_t1113636619 * get_Enemy_2() const { return ___Enemy_2; }
	inline GameObject_t1113636619 ** get_address_of_Enemy_2() { return &___Enemy_2; }
	inline void set_Enemy_2(GameObject_t1113636619 * value)
	{
		___Enemy_2 = value;
		Il2CppCodeGenWriteBarrier((&___Enemy_2), value);
	}

	inline static int32_t get_offset_of_SpawnPoint_3() { return static_cast<int32_t>(offsetof(Spawn_t617419884, ___SpawnPoint_3)); }
	inline Transform_t3600365921 * get_SpawnPoint_3() const { return ___SpawnPoint_3; }
	inline Transform_t3600365921 ** get_address_of_SpawnPoint_3() { return &___SpawnPoint_3; }
	inline void set_SpawnPoint_3(Transform_t3600365921 * value)
	{
		___SpawnPoint_3 = value;
		Il2CppCodeGenWriteBarrier((&___SpawnPoint_3), value);
	}

	inline static int32_t get_offset_of_maxNum_Enemies_4() { return static_cast<int32_t>(offsetof(Spawn_t617419884, ___maxNum_Enemies_4)); }
	inline int32_t get_maxNum_Enemies_4() const { return ___maxNum_Enemies_4; }
	inline int32_t* get_address_of_maxNum_Enemies_4() { return &___maxNum_Enemies_4; }
	inline void set_maxNum_Enemies_4(int32_t value)
	{
		___maxNum_Enemies_4 = value;
	}

	inline static int32_t get_offset_of_spawnRate_5() { return static_cast<int32_t>(offsetof(Spawn_t617419884, ___spawnRate_5)); }
	inline float get_spawnRate_5() const { return ___spawnRate_5; }
	inline float* get_address_of_spawnRate_5() { return &___spawnRate_5; }
	inline void set_spawnRate_5(float value)
	{
		___spawnRate_5 = value;
	}

	inline static int32_t get_offset_of_num_Spawned_6() { return static_cast<int32_t>(offsetof(Spawn_t617419884, ___num_Spawned_6)); }
	inline int32_t get_num_Spawned_6() const { return ___num_Spawned_6; }
	inline int32_t* get_address_of_num_Spawned_6() { return &___num_Spawned_6; }
	inline void set_num_Spawned_6(int32_t value)
	{
		___num_Spawned_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPAWN_T617419884_H
#ifndef SHOOT_T2202938192_H
#define SHOOT_T2202938192_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Shoot
struct  Shoot_t2202938192  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject Shoot::bullet
	GameObject_t1113636619 * ___bullet_2;
	// UnityEngine.Transform Shoot::nuzzle
	Transform_t3600365921 * ___nuzzle_3;
	// System.Single Shoot::fireRate
	float ___fireRate_4;
	// System.Single Shoot::lastFired
	float ___lastFired_5;
	// UnityEngine.SpriteRenderer Shoot::srend
	SpriteRenderer_t3235626157 * ___srend_6;

public:
	inline static int32_t get_offset_of_bullet_2() { return static_cast<int32_t>(offsetof(Shoot_t2202938192, ___bullet_2)); }
	inline GameObject_t1113636619 * get_bullet_2() const { return ___bullet_2; }
	inline GameObject_t1113636619 ** get_address_of_bullet_2() { return &___bullet_2; }
	inline void set_bullet_2(GameObject_t1113636619 * value)
	{
		___bullet_2 = value;
		Il2CppCodeGenWriteBarrier((&___bullet_2), value);
	}

	inline static int32_t get_offset_of_nuzzle_3() { return static_cast<int32_t>(offsetof(Shoot_t2202938192, ___nuzzle_3)); }
	inline Transform_t3600365921 * get_nuzzle_3() const { return ___nuzzle_3; }
	inline Transform_t3600365921 ** get_address_of_nuzzle_3() { return &___nuzzle_3; }
	inline void set_nuzzle_3(Transform_t3600365921 * value)
	{
		___nuzzle_3 = value;
		Il2CppCodeGenWriteBarrier((&___nuzzle_3), value);
	}

	inline static int32_t get_offset_of_fireRate_4() { return static_cast<int32_t>(offsetof(Shoot_t2202938192, ___fireRate_4)); }
	inline float get_fireRate_4() const { return ___fireRate_4; }
	inline float* get_address_of_fireRate_4() { return &___fireRate_4; }
	inline void set_fireRate_4(float value)
	{
		___fireRate_4 = value;
	}

	inline static int32_t get_offset_of_lastFired_5() { return static_cast<int32_t>(offsetof(Shoot_t2202938192, ___lastFired_5)); }
	inline float get_lastFired_5() const { return ___lastFired_5; }
	inline float* get_address_of_lastFired_5() { return &___lastFired_5; }
	inline void set_lastFired_5(float value)
	{
		___lastFired_5 = value;
	}

	inline static int32_t get_offset_of_srend_6() { return static_cast<int32_t>(offsetof(Shoot_t2202938192, ___srend_6)); }
	inline SpriteRenderer_t3235626157 * get_srend_6() const { return ___srend_6; }
	inline SpriteRenderer_t3235626157 ** get_address_of_srend_6() { return &___srend_6; }
	inline void set_srend_6(SpriteRenderer_t3235626157 * value)
	{
		___srend_6 = value;
		Il2CppCodeGenWriteBarrier((&___srend_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHOOT_T2202938192_H
#ifndef ANALYTICSTRACKER_T731021378_H
#define ANALYTICSTRACKER_T731021378_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.AnalyticsTracker
struct  AnalyticsTracker_t731021378  : public MonoBehaviour_t3962482529
{
public:
	// System.String UnityEngine.Analytics.AnalyticsTracker::m_EventName
	String_t* ___m_EventName_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Analytics.AnalyticsTracker::m_Dict
	Dictionary_2_t2865362463 * ___m_Dict_3;
	// System.Int32 UnityEngine.Analytics.AnalyticsTracker::m_PrevDictHash
	int32_t ___m_PrevDictHash_4;
	// UnityEngine.Analytics.TrackableProperty UnityEngine.Analytics.AnalyticsTracker::m_TrackableProperty
	TrackableProperty_t3943537984 * ___m_TrackableProperty_5;
	// UnityEngine.Analytics.AnalyticsTracker/Trigger UnityEngine.Analytics.AnalyticsTracker::m_Trigger
	int32_t ___m_Trigger_6;

public:
	inline static int32_t get_offset_of_m_EventName_2() { return static_cast<int32_t>(offsetof(AnalyticsTracker_t731021378, ___m_EventName_2)); }
	inline String_t* get_m_EventName_2() const { return ___m_EventName_2; }
	inline String_t** get_address_of_m_EventName_2() { return &___m_EventName_2; }
	inline void set_m_EventName_2(String_t* value)
	{
		___m_EventName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventName_2), value);
	}

	inline static int32_t get_offset_of_m_Dict_3() { return static_cast<int32_t>(offsetof(AnalyticsTracker_t731021378, ___m_Dict_3)); }
	inline Dictionary_2_t2865362463 * get_m_Dict_3() const { return ___m_Dict_3; }
	inline Dictionary_2_t2865362463 ** get_address_of_m_Dict_3() { return &___m_Dict_3; }
	inline void set_m_Dict_3(Dictionary_2_t2865362463 * value)
	{
		___m_Dict_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Dict_3), value);
	}

	inline static int32_t get_offset_of_m_PrevDictHash_4() { return static_cast<int32_t>(offsetof(AnalyticsTracker_t731021378, ___m_PrevDictHash_4)); }
	inline int32_t get_m_PrevDictHash_4() const { return ___m_PrevDictHash_4; }
	inline int32_t* get_address_of_m_PrevDictHash_4() { return &___m_PrevDictHash_4; }
	inline void set_m_PrevDictHash_4(int32_t value)
	{
		___m_PrevDictHash_4 = value;
	}

	inline static int32_t get_offset_of_m_TrackableProperty_5() { return static_cast<int32_t>(offsetof(AnalyticsTracker_t731021378, ___m_TrackableProperty_5)); }
	inline TrackableProperty_t3943537984 * get_m_TrackableProperty_5() const { return ___m_TrackableProperty_5; }
	inline TrackableProperty_t3943537984 ** get_address_of_m_TrackableProperty_5() { return &___m_TrackableProperty_5; }
	inline void set_m_TrackableProperty_5(TrackableProperty_t3943537984 * value)
	{
		___m_TrackableProperty_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_TrackableProperty_5), value);
	}

	inline static int32_t get_offset_of_m_Trigger_6() { return static_cast<int32_t>(offsetof(AnalyticsTracker_t731021378, ___m_Trigger_6)); }
	inline int32_t get_m_Trigger_6() const { return ___m_Trigger_6; }
	inline int32_t* get_address_of_m_Trigger_6() { return &___m_Trigger_6; }
	inline void set_m_Trigger_6(int32_t value)
	{
		___m_Trigger_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANALYTICSTRACKER_T731021378_H
#ifndef PLAYER_DETECTION_T3270809841_H
#define PLAYER_DETECTION_T3270809841_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Player_Detection
struct  Player_Detection_t3270809841  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject Player_Detection::target
	GameObject_t1113636619 * ___target_2;
	// UnityEngine.Rigidbody Player_Detection::rigidbody
	Rigidbody_t3916780224 * ___rigidbody_3;
	// UnityEngine.Vector3 Player_Detection::velocity
	Vector3_t3722313464  ___velocity_4;
	// System.Boolean Player_Detection::isSeeking
	bool ___isSeeking_5;
	// System.Single Player_Detection::moveSpeed
	float ___moveSpeed_6;
	// UnityEngine.Transform[] Player_Detection::Waypoints
	TransformU5BU5D_t807237628* ___Waypoints_7;
	// UnityEngine.Transform Player_Detection::WaypointParent
	Transform_t3600365921 * ___WaypointParent_8;
	// System.Int32 Player_Detection::numOfPoints
	int32_t ___numOfPoints_9;
	// System.Int32 Player_Detection::counter
	int32_t ___counter_10;
	// System.Single Player_Detection::distanceToSeek
	float ___distanceToSeek_11;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(Player_Detection_t3270809841, ___target_2)); }
	inline GameObject_t1113636619 * get_target_2() const { return ___target_2; }
	inline GameObject_t1113636619 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(GameObject_t1113636619 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier((&___target_2), value);
	}

	inline static int32_t get_offset_of_rigidbody_3() { return static_cast<int32_t>(offsetof(Player_Detection_t3270809841, ___rigidbody_3)); }
	inline Rigidbody_t3916780224 * get_rigidbody_3() const { return ___rigidbody_3; }
	inline Rigidbody_t3916780224 ** get_address_of_rigidbody_3() { return &___rigidbody_3; }
	inline void set_rigidbody_3(Rigidbody_t3916780224 * value)
	{
		___rigidbody_3 = value;
		Il2CppCodeGenWriteBarrier((&___rigidbody_3), value);
	}

	inline static int32_t get_offset_of_velocity_4() { return static_cast<int32_t>(offsetof(Player_Detection_t3270809841, ___velocity_4)); }
	inline Vector3_t3722313464  get_velocity_4() const { return ___velocity_4; }
	inline Vector3_t3722313464 * get_address_of_velocity_4() { return &___velocity_4; }
	inline void set_velocity_4(Vector3_t3722313464  value)
	{
		___velocity_4 = value;
	}

	inline static int32_t get_offset_of_isSeeking_5() { return static_cast<int32_t>(offsetof(Player_Detection_t3270809841, ___isSeeking_5)); }
	inline bool get_isSeeking_5() const { return ___isSeeking_5; }
	inline bool* get_address_of_isSeeking_5() { return &___isSeeking_5; }
	inline void set_isSeeking_5(bool value)
	{
		___isSeeking_5 = value;
	}

	inline static int32_t get_offset_of_moveSpeed_6() { return static_cast<int32_t>(offsetof(Player_Detection_t3270809841, ___moveSpeed_6)); }
	inline float get_moveSpeed_6() const { return ___moveSpeed_6; }
	inline float* get_address_of_moveSpeed_6() { return &___moveSpeed_6; }
	inline void set_moveSpeed_6(float value)
	{
		___moveSpeed_6 = value;
	}

	inline static int32_t get_offset_of_Waypoints_7() { return static_cast<int32_t>(offsetof(Player_Detection_t3270809841, ___Waypoints_7)); }
	inline TransformU5BU5D_t807237628* get_Waypoints_7() const { return ___Waypoints_7; }
	inline TransformU5BU5D_t807237628** get_address_of_Waypoints_7() { return &___Waypoints_7; }
	inline void set_Waypoints_7(TransformU5BU5D_t807237628* value)
	{
		___Waypoints_7 = value;
		Il2CppCodeGenWriteBarrier((&___Waypoints_7), value);
	}

	inline static int32_t get_offset_of_WaypointParent_8() { return static_cast<int32_t>(offsetof(Player_Detection_t3270809841, ___WaypointParent_8)); }
	inline Transform_t3600365921 * get_WaypointParent_8() const { return ___WaypointParent_8; }
	inline Transform_t3600365921 ** get_address_of_WaypointParent_8() { return &___WaypointParent_8; }
	inline void set_WaypointParent_8(Transform_t3600365921 * value)
	{
		___WaypointParent_8 = value;
		Il2CppCodeGenWriteBarrier((&___WaypointParent_8), value);
	}

	inline static int32_t get_offset_of_numOfPoints_9() { return static_cast<int32_t>(offsetof(Player_Detection_t3270809841, ___numOfPoints_9)); }
	inline int32_t get_numOfPoints_9() const { return ___numOfPoints_9; }
	inline int32_t* get_address_of_numOfPoints_9() { return &___numOfPoints_9; }
	inline void set_numOfPoints_9(int32_t value)
	{
		___numOfPoints_9 = value;
	}

	inline static int32_t get_offset_of_counter_10() { return static_cast<int32_t>(offsetof(Player_Detection_t3270809841, ___counter_10)); }
	inline int32_t get_counter_10() const { return ___counter_10; }
	inline int32_t* get_address_of_counter_10() { return &___counter_10; }
	inline void set_counter_10(int32_t value)
	{
		___counter_10 = value;
	}

	inline static int32_t get_offset_of_distanceToSeek_11() { return static_cast<int32_t>(offsetof(Player_Detection_t3270809841, ___distanceToSeek_11)); }
	inline float get_distanceToSeek_11() const { return ___distanceToSeek_11; }
	inline float* get_address_of_distanceToSeek_11() { return &___distanceToSeek_11; }
	inline void set_distanceToSeek_11(float value)
	{
		___distanceToSeek_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYER_DETECTION_T3270809841_H
#ifndef ACTIVATECHILD_T59513335_H
#define ACTIVATECHILD_T59513335_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ActivateChild
struct  ActivateChild_t59513335  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject ActivateChild::Child
	GameObject_t1113636619 * ___Child_2;
	// System.Single ActivateChild::timeTillActivation
	float ___timeTillActivation_3;

public:
	inline static int32_t get_offset_of_Child_2() { return static_cast<int32_t>(offsetof(ActivateChild_t59513335, ___Child_2)); }
	inline GameObject_t1113636619 * get_Child_2() const { return ___Child_2; }
	inline GameObject_t1113636619 ** get_address_of_Child_2() { return &___Child_2; }
	inline void set_Child_2(GameObject_t1113636619 * value)
	{
		___Child_2 = value;
		Il2CppCodeGenWriteBarrier((&___Child_2), value);
	}

	inline static int32_t get_offset_of_timeTillActivation_3() { return static_cast<int32_t>(offsetof(ActivateChild_t59513335, ___timeTillActivation_3)); }
	inline float get_timeTillActivation_3() const { return ___timeTillActivation_3; }
	inline float* get_address_of_timeTillActivation_3() { return &___timeTillActivation_3; }
	inline void set_timeTillActivation_3(float value)
	{
		___timeTillActivation_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVATECHILD_T59513335_H
#ifndef ADS_T829224404_H
#define ADS_T829224404_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ads
struct  Ads_t829224404  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Image[] Ads::Advertisement
	ImageU5BU5D_t2439009922* ___Advertisement_2;
	// UnityEngine.UI.Image Ads::place_Ads
	Image_t2670269651 * ___place_Ads_3;
	// System.Int32 Ads::random_Num
	int32_t ___random_Num_4;

public:
	inline static int32_t get_offset_of_Advertisement_2() { return static_cast<int32_t>(offsetof(Ads_t829224404, ___Advertisement_2)); }
	inline ImageU5BU5D_t2439009922* get_Advertisement_2() const { return ___Advertisement_2; }
	inline ImageU5BU5D_t2439009922** get_address_of_Advertisement_2() { return &___Advertisement_2; }
	inline void set_Advertisement_2(ImageU5BU5D_t2439009922* value)
	{
		___Advertisement_2 = value;
		Il2CppCodeGenWriteBarrier((&___Advertisement_2), value);
	}

	inline static int32_t get_offset_of_place_Ads_3() { return static_cast<int32_t>(offsetof(Ads_t829224404, ___place_Ads_3)); }
	inline Image_t2670269651 * get_place_Ads_3() const { return ___place_Ads_3; }
	inline Image_t2670269651 ** get_address_of_place_Ads_3() { return &___place_Ads_3; }
	inline void set_place_Ads_3(Image_t2670269651 * value)
	{
		___place_Ads_3 = value;
		Il2CppCodeGenWriteBarrier((&___place_Ads_3), value);
	}

	inline static int32_t get_offset_of_random_Num_4() { return static_cast<int32_t>(offsetof(Ads_t829224404, ___random_Num_4)); }
	inline int32_t get_random_Num_4() const { return ___random_Num_4; }
	inline int32_t* get_address_of_random_Num_4() { return &___random_Num_4; }
	inline void set_random_Num_4(int32_t value)
	{
		___random_Num_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADS_T829224404_H
#ifndef PLAYERHEALTH_T2068385516_H
#define PLAYERHEALTH_T2068385516_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerHealth
struct  PlayerHealth_t2068385516  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32 PlayerHealth::maxHealth
	int32_t ___maxHealth_2;
	// System.Int32 PlayerHealth::curHealth
	int32_t ___curHealth_3;
	// UnityEngine.UI.Slider PlayerHealth::hpBar
	Slider_t3903728902 * ___hpBar_4;
	// System.Boolean PlayerHealth::isDead
	bool ___isDead_5;
	// System.Boolean PlayerHealth::isDamaged
	bool ___isDamaged_6;

public:
	inline static int32_t get_offset_of_maxHealth_2() { return static_cast<int32_t>(offsetof(PlayerHealth_t2068385516, ___maxHealth_2)); }
	inline int32_t get_maxHealth_2() const { return ___maxHealth_2; }
	inline int32_t* get_address_of_maxHealth_2() { return &___maxHealth_2; }
	inline void set_maxHealth_2(int32_t value)
	{
		___maxHealth_2 = value;
	}

	inline static int32_t get_offset_of_curHealth_3() { return static_cast<int32_t>(offsetof(PlayerHealth_t2068385516, ___curHealth_3)); }
	inline int32_t get_curHealth_3() const { return ___curHealth_3; }
	inline int32_t* get_address_of_curHealth_3() { return &___curHealth_3; }
	inline void set_curHealth_3(int32_t value)
	{
		___curHealth_3 = value;
	}

	inline static int32_t get_offset_of_hpBar_4() { return static_cast<int32_t>(offsetof(PlayerHealth_t2068385516, ___hpBar_4)); }
	inline Slider_t3903728902 * get_hpBar_4() const { return ___hpBar_4; }
	inline Slider_t3903728902 ** get_address_of_hpBar_4() { return &___hpBar_4; }
	inline void set_hpBar_4(Slider_t3903728902 * value)
	{
		___hpBar_4 = value;
		Il2CppCodeGenWriteBarrier((&___hpBar_4), value);
	}

	inline static int32_t get_offset_of_isDead_5() { return static_cast<int32_t>(offsetof(PlayerHealth_t2068385516, ___isDead_5)); }
	inline bool get_isDead_5() const { return ___isDead_5; }
	inline bool* get_address_of_isDead_5() { return &___isDead_5; }
	inline void set_isDead_5(bool value)
	{
		___isDead_5 = value;
	}

	inline static int32_t get_offset_of_isDamaged_6() { return static_cast<int32_t>(offsetof(PlayerHealth_t2068385516, ___isDamaged_6)); }
	inline bool get_isDamaged_6() const { return ___isDamaged_6; }
	inline bool* get_address_of_isDamaged_6() { return &___isDamaged_6; }
	inline void set_isDamaged_6(bool value)
	{
		___isDamaged_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERHEALTH_T2068385516_H
#ifndef PATROL_T2573740331_H
#define PATROL_T2573740331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Patrol
struct  Patrol_t2573740331  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PATROL_T2573740331_H
#ifndef ROTATERIGHT_T2074839137_H
#define ROTATERIGHT_T2074839137_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RotateRight
struct  RotateRight_t2074839137  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject RotateRight::Player
	GameObject_t1113636619 * ___Player_2;
	// System.Single RotateRight::rotSpeed
	float ___rotSpeed_3;
	// UnityEngine.SpriteRenderer RotateRight::srend
	SpriteRenderer_t3235626157 * ___srend_4;

public:
	inline static int32_t get_offset_of_Player_2() { return static_cast<int32_t>(offsetof(RotateRight_t2074839137, ___Player_2)); }
	inline GameObject_t1113636619 * get_Player_2() const { return ___Player_2; }
	inline GameObject_t1113636619 ** get_address_of_Player_2() { return &___Player_2; }
	inline void set_Player_2(GameObject_t1113636619 * value)
	{
		___Player_2 = value;
		Il2CppCodeGenWriteBarrier((&___Player_2), value);
	}

	inline static int32_t get_offset_of_rotSpeed_3() { return static_cast<int32_t>(offsetof(RotateRight_t2074839137, ___rotSpeed_3)); }
	inline float get_rotSpeed_3() const { return ___rotSpeed_3; }
	inline float* get_address_of_rotSpeed_3() { return &___rotSpeed_3; }
	inline void set_rotSpeed_3(float value)
	{
		___rotSpeed_3 = value;
	}

	inline static int32_t get_offset_of_srend_4() { return static_cast<int32_t>(offsetof(RotateRight_t2074839137, ___srend_4)); }
	inline SpriteRenderer_t3235626157 * get_srend_4() const { return ___srend_4; }
	inline SpriteRenderer_t3235626157 ** get_address_of_srend_4() { return &___srend_4; }
	inline void set_srend_4(SpriteRenderer_t3235626157 * value)
	{
		___srend_4 = value;
		Il2CppCodeGenWriteBarrier((&___srend_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROTATERIGHT_T2074839137_H
#ifndef ROTATEPLATFORM_T2669065297_H
#define ROTATEPLATFORM_T2669065297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RotatePlatform
struct  RotatePlatform_t2669065297  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean RotatePlatform::canRotate
	bool ___canRotate_2;
	// System.Boolean RotatePlatform::isRight
	bool ___isRight_3;
	// System.Boolean RotatePlatform::isLeft
	bool ___isLeft_4;
	// UnityEngine.Vector3 RotatePlatform::rightTurn
	Vector3_t3722313464  ___rightTurn_5;
	// UnityEngine.Vector3 RotatePlatform::leftTurn
	Vector3_t3722313464  ___leftTurn_6;
	// UnityEngine.Vector3 RotatePlatform::currentRot
	Vector3_t3722313464  ___currentRot_7;

public:
	inline static int32_t get_offset_of_canRotate_2() { return static_cast<int32_t>(offsetof(RotatePlatform_t2669065297, ___canRotate_2)); }
	inline bool get_canRotate_2() const { return ___canRotate_2; }
	inline bool* get_address_of_canRotate_2() { return &___canRotate_2; }
	inline void set_canRotate_2(bool value)
	{
		___canRotate_2 = value;
	}

	inline static int32_t get_offset_of_isRight_3() { return static_cast<int32_t>(offsetof(RotatePlatform_t2669065297, ___isRight_3)); }
	inline bool get_isRight_3() const { return ___isRight_3; }
	inline bool* get_address_of_isRight_3() { return &___isRight_3; }
	inline void set_isRight_3(bool value)
	{
		___isRight_3 = value;
	}

	inline static int32_t get_offset_of_isLeft_4() { return static_cast<int32_t>(offsetof(RotatePlatform_t2669065297, ___isLeft_4)); }
	inline bool get_isLeft_4() const { return ___isLeft_4; }
	inline bool* get_address_of_isLeft_4() { return &___isLeft_4; }
	inline void set_isLeft_4(bool value)
	{
		___isLeft_4 = value;
	}

	inline static int32_t get_offset_of_rightTurn_5() { return static_cast<int32_t>(offsetof(RotatePlatform_t2669065297, ___rightTurn_5)); }
	inline Vector3_t3722313464  get_rightTurn_5() const { return ___rightTurn_5; }
	inline Vector3_t3722313464 * get_address_of_rightTurn_5() { return &___rightTurn_5; }
	inline void set_rightTurn_5(Vector3_t3722313464  value)
	{
		___rightTurn_5 = value;
	}

	inline static int32_t get_offset_of_leftTurn_6() { return static_cast<int32_t>(offsetof(RotatePlatform_t2669065297, ___leftTurn_6)); }
	inline Vector3_t3722313464  get_leftTurn_6() const { return ___leftTurn_6; }
	inline Vector3_t3722313464 * get_address_of_leftTurn_6() { return &___leftTurn_6; }
	inline void set_leftTurn_6(Vector3_t3722313464  value)
	{
		___leftTurn_6 = value;
	}

	inline static int32_t get_offset_of_currentRot_7() { return static_cast<int32_t>(offsetof(RotatePlatform_t2669065297, ___currentRot_7)); }
	inline Vector3_t3722313464  get_currentRot_7() const { return ___currentRot_7; }
	inline Vector3_t3722313464 * get_address_of_currentRot_7() { return &___currentRot_7; }
	inline void set_currentRot_7(Vector3_t3722313464  value)
	{
		___currentRot_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROTATEPLATFORM_T2669065297_H
#ifndef ROTATELEFT_T2200218285_H
#define ROTATELEFT_T2200218285_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RotateLeft
struct  RotateLeft_t2200218285  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject RotateLeft::Player
	GameObject_t1113636619 * ___Player_2;
	// System.Single RotateLeft::rotSpeed
	float ___rotSpeed_3;
	// UnityEngine.SpriteRenderer RotateLeft::srend
	SpriteRenderer_t3235626157 * ___srend_4;

public:
	inline static int32_t get_offset_of_Player_2() { return static_cast<int32_t>(offsetof(RotateLeft_t2200218285, ___Player_2)); }
	inline GameObject_t1113636619 * get_Player_2() const { return ___Player_2; }
	inline GameObject_t1113636619 ** get_address_of_Player_2() { return &___Player_2; }
	inline void set_Player_2(GameObject_t1113636619 * value)
	{
		___Player_2 = value;
		Il2CppCodeGenWriteBarrier((&___Player_2), value);
	}

	inline static int32_t get_offset_of_rotSpeed_3() { return static_cast<int32_t>(offsetof(RotateLeft_t2200218285, ___rotSpeed_3)); }
	inline float get_rotSpeed_3() const { return ___rotSpeed_3; }
	inline float* get_address_of_rotSpeed_3() { return &___rotSpeed_3; }
	inline void set_rotSpeed_3(float value)
	{
		___rotSpeed_3 = value;
	}

	inline static int32_t get_offset_of_srend_4() { return static_cast<int32_t>(offsetof(RotateLeft_t2200218285, ___srend_4)); }
	inline SpriteRenderer_t3235626157 * get_srend_4() const { return ___srend_4; }
	inline SpriteRenderer_t3235626157 ** get_address_of_srend_4() { return &___srend_4; }
	inline void set_srend_4(SpriteRenderer_t3235626157 * value)
	{
		___srend_4 = value;
		Il2CppCodeGenWriteBarrier((&___srend_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROTATELEFT_T2200218285_H
#ifndef MOVEFORWARD_T2564727450_H
#define MOVEFORWARD_T2564727450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoveForward
struct  MoveForward_t2564727450  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject MoveForward::Player
	GameObject_t1113636619 * ___Player_2;
	// System.Single MoveForward::moveSpeed
	float ___moveSpeed_3;
	// UnityEngine.SpriteRenderer MoveForward::srend
	SpriteRenderer_t3235626157 * ___srend_4;

public:
	inline static int32_t get_offset_of_Player_2() { return static_cast<int32_t>(offsetof(MoveForward_t2564727450, ___Player_2)); }
	inline GameObject_t1113636619 * get_Player_2() const { return ___Player_2; }
	inline GameObject_t1113636619 ** get_address_of_Player_2() { return &___Player_2; }
	inline void set_Player_2(GameObject_t1113636619 * value)
	{
		___Player_2 = value;
		Il2CppCodeGenWriteBarrier((&___Player_2), value);
	}

	inline static int32_t get_offset_of_moveSpeed_3() { return static_cast<int32_t>(offsetof(MoveForward_t2564727450, ___moveSpeed_3)); }
	inline float get_moveSpeed_3() const { return ___moveSpeed_3; }
	inline float* get_address_of_moveSpeed_3() { return &___moveSpeed_3; }
	inline void set_moveSpeed_3(float value)
	{
		___moveSpeed_3 = value;
	}

	inline static int32_t get_offset_of_srend_4() { return static_cast<int32_t>(offsetof(MoveForward_t2564727450, ___srend_4)); }
	inline SpriteRenderer_t3235626157 * get_srend_4() const { return ___srend_4; }
	inline SpriteRenderer_t3235626157 ** get_address_of_srend_4() { return &___srend_4; }
	inline void set_srend_4(SpriteRenderer_t3235626157 * value)
	{
		___srend_4 = value;
		Il2CppCodeGenWriteBarrier((&___srend_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOVEFORWARD_T2564727450_H
#ifndef MOVEBACKWARD_T3372879665_H
#define MOVEBACKWARD_T3372879665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoveBackward
struct  MoveBackward_t3372879665  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject MoveBackward::Player
	GameObject_t1113636619 * ___Player_2;
	// System.Single MoveBackward::moveSpeed
	float ___moveSpeed_3;
	// UnityEngine.SpriteRenderer MoveBackward::srend
	SpriteRenderer_t3235626157 * ___srend_4;

public:
	inline static int32_t get_offset_of_Player_2() { return static_cast<int32_t>(offsetof(MoveBackward_t3372879665, ___Player_2)); }
	inline GameObject_t1113636619 * get_Player_2() const { return ___Player_2; }
	inline GameObject_t1113636619 ** get_address_of_Player_2() { return &___Player_2; }
	inline void set_Player_2(GameObject_t1113636619 * value)
	{
		___Player_2 = value;
		Il2CppCodeGenWriteBarrier((&___Player_2), value);
	}

	inline static int32_t get_offset_of_moveSpeed_3() { return static_cast<int32_t>(offsetof(MoveBackward_t3372879665, ___moveSpeed_3)); }
	inline float get_moveSpeed_3() const { return ___moveSpeed_3; }
	inline float* get_address_of_moveSpeed_3() { return &___moveSpeed_3; }
	inline void set_moveSpeed_3(float value)
	{
		___moveSpeed_3 = value;
	}

	inline static int32_t get_offset_of_srend_4() { return static_cast<int32_t>(offsetof(MoveBackward_t3372879665, ___srend_4)); }
	inline SpriteRenderer_t3235626157 * get_srend_4() const { return ___srend_4; }
	inline SpriteRenderer_t3235626157 ** get_address_of_srend_4() { return &___srend_4; }
	inline void set_srend_4(SpriteRenderer_t3235626157 * value)
	{
		___srend_4 = value;
		Il2CppCodeGenWriteBarrier((&___srend_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOVEBACKWARD_T3372879665_H
#ifndef MOVE_T3440333737_H
#define MOVE_T3440333737_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Move
struct  Move_t3440333737  : public MonoBehaviour_t3962482529
{
public:
	// System.Single Move::moveSpeed
	float ___moveSpeed_2;
	// System.Single Move::rotSpeed
	float ___rotSpeed_3;
	// System.Int32 Move::sprintSpeed
	int32_t ___sprintSpeed_4;
	// System.Boolean Move::isSprinting
	bool ___isSprinting_5;
	// System.Single Move::Stamina
	float ___Stamina_6;
	// UnityEngine.UI.Slider Move::staminaBar
	Slider_t3903728902 * ___staminaBar_7;

public:
	inline static int32_t get_offset_of_moveSpeed_2() { return static_cast<int32_t>(offsetof(Move_t3440333737, ___moveSpeed_2)); }
	inline float get_moveSpeed_2() const { return ___moveSpeed_2; }
	inline float* get_address_of_moveSpeed_2() { return &___moveSpeed_2; }
	inline void set_moveSpeed_2(float value)
	{
		___moveSpeed_2 = value;
	}

	inline static int32_t get_offset_of_rotSpeed_3() { return static_cast<int32_t>(offsetof(Move_t3440333737, ___rotSpeed_3)); }
	inline float get_rotSpeed_3() const { return ___rotSpeed_3; }
	inline float* get_address_of_rotSpeed_3() { return &___rotSpeed_3; }
	inline void set_rotSpeed_3(float value)
	{
		___rotSpeed_3 = value;
	}

	inline static int32_t get_offset_of_sprintSpeed_4() { return static_cast<int32_t>(offsetof(Move_t3440333737, ___sprintSpeed_4)); }
	inline int32_t get_sprintSpeed_4() const { return ___sprintSpeed_4; }
	inline int32_t* get_address_of_sprintSpeed_4() { return &___sprintSpeed_4; }
	inline void set_sprintSpeed_4(int32_t value)
	{
		___sprintSpeed_4 = value;
	}

	inline static int32_t get_offset_of_isSprinting_5() { return static_cast<int32_t>(offsetof(Move_t3440333737, ___isSprinting_5)); }
	inline bool get_isSprinting_5() const { return ___isSprinting_5; }
	inline bool* get_address_of_isSprinting_5() { return &___isSprinting_5; }
	inline void set_isSprinting_5(bool value)
	{
		___isSprinting_5 = value;
	}

	inline static int32_t get_offset_of_Stamina_6() { return static_cast<int32_t>(offsetof(Move_t3440333737, ___Stamina_6)); }
	inline float get_Stamina_6() const { return ___Stamina_6; }
	inline float* get_address_of_Stamina_6() { return &___Stamina_6; }
	inline void set_Stamina_6(float value)
	{
		___Stamina_6 = value;
	}

	inline static int32_t get_offset_of_staminaBar_7() { return static_cast<int32_t>(offsetof(Move_t3440333737, ___staminaBar_7)); }
	inline Slider_t3903728902 * get_staminaBar_7() const { return ___staminaBar_7; }
	inline Slider_t3903728902 ** get_address_of_staminaBar_7() { return &___staminaBar_7; }
	inline void set_staminaBar_7(Slider_t3903728902 * value)
	{
		___staminaBar_7 = value;
		Il2CppCodeGenWriteBarrier((&___staminaBar_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOVE_T3440333737_H
#ifndef LEVELCHECK_T3917146222_H
#define LEVELCHECK_T3917146222_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LevelCheck
struct  LevelCheck_t3917146222  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32 LevelCheck::playerLevel
	int32_t ___playerLevel_2;
	// UnityEngine.GameObject LevelCheck::LevelSelection
	GameObject_t1113636619 * ___LevelSelection_3;
	// UnityEngine.GameObject[] LevelCheck::Levels
	GameObjectU5BU5D_t3328599146* ___Levels_4;
	// System.Int32 LevelCheck::num_Levels
	int32_t ___num_Levels_5;
	// System.Int32 LevelCheck::counter
	int32_t ___counter_6;

public:
	inline static int32_t get_offset_of_playerLevel_2() { return static_cast<int32_t>(offsetof(LevelCheck_t3917146222, ___playerLevel_2)); }
	inline int32_t get_playerLevel_2() const { return ___playerLevel_2; }
	inline int32_t* get_address_of_playerLevel_2() { return &___playerLevel_2; }
	inline void set_playerLevel_2(int32_t value)
	{
		___playerLevel_2 = value;
	}

	inline static int32_t get_offset_of_LevelSelection_3() { return static_cast<int32_t>(offsetof(LevelCheck_t3917146222, ___LevelSelection_3)); }
	inline GameObject_t1113636619 * get_LevelSelection_3() const { return ___LevelSelection_3; }
	inline GameObject_t1113636619 ** get_address_of_LevelSelection_3() { return &___LevelSelection_3; }
	inline void set_LevelSelection_3(GameObject_t1113636619 * value)
	{
		___LevelSelection_3 = value;
		Il2CppCodeGenWriteBarrier((&___LevelSelection_3), value);
	}

	inline static int32_t get_offset_of_Levels_4() { return static_cast<int32_t>(offsetof(LevelCheck_t3917146222, ___Levels_4)); }
	inline GameObjectU5BU5D_t3328599146* get_Levels_4() const { return ___Levels_4; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_Levels_4() { return &___Levels_4; }
	inline void set_Levels_4(GameObjectU5BU5D_t3328599146* value)
	{
		___Levels_4 = value;
		Il2CppCodeGenWriteBarrier((&___Levels_4), value);
	}

	inline static int32_t get_offset_of_num_Levels_5() { return static_cast<int32_t>(offsetof(LevelCheck_t3917146222, ___num_Levels_5)); }
	inline int32_t get_num_Levels_5() const { return ___num_Levels_5; }
	inline int32_t* get_address_of_num_Levels_5() { return &___num_Levels_5; }
	inline void set_num_Levels_5(int32_t value)
	{
		___num_Levels_5 = value;
	}

	inline static int32_t get_offset_of_counter_6() { return static_cast<int32_t>(offsetof(LevelCheck_t3917146222, ___counter_6)); }
	inline int32_t get_counter_6() const { return ___counter_6; }
	inline int32_t* get_address_of_counter_6() { return &___counter_6; }
	inline void set_counter_6(int32_t value)
	{
		___counter_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEVELCHECK_T3917146222_H
#ifndef ENEMYHEALTH_T797421206_H
#define ENEMYHEALTH_T797421206_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyHealth
struct  EnemyHealth_t797421206  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32 EnemyHealth::maxHealth
	int32_t ___maxHealth_2;
	// System.Int32 EnemyHealth::curHealth
	int32_t ___curHealth_3;
	// UnityEngine.Material EnemyHealth::FullHp
	Material_t340375123 * ___FullHp_4;
	// UnityEngine.Material EnemyHealth::NearDeath
	Material_t340375123 * ___NearDeath_5;
	// UnityEngine.GameObject EnemyHealth::Player_bullet
	GameObject_t1113636619 * ___Player_bullet_6;
	// UnityEngine.Renderer EnemyHealth::renderer
	Renderer_t2627027031 * ___renderer_7;
	// System.Boolean EnemyHealth::isDead
	bool ___isDead_8;
	// System.Boolean EnemyHealth::isDamaged
	bool ___isDamaged_9;

public:
	inline static int32_t get_offset_of_maxHealth_2() { return static_cast<int32_t>(offsetof(EnemyHealth_t797421206, ___maxHealth_2)); }
	inline int32_t get_maxHealth_2() const { return ___maxHealth_2; }
	inline int32_t* get_address_of_maxHealth_2() { return &___maxHealth_2; }
	inline void set_maxHealth_2(int32_t value)
	{
		___maxHealth_2 = value;
	}

	inline static int32_t get_offset_of_curHealth_3() { return static_cast<int32_t>(offsetof(EnemyHealth_t797421206, ___curHealth_3)); }
	inline int32_t get_curHealth_3() const { return ___curHealth_3; }
	inline int32_t* get_address_of_curHealth_3() { return &___curHealth_3; }
	inline void set_curHealth_3(int32_t value)
	{
		___curHealth_3 = value;
	}

	inline static int32_t get_offset_of_FullHp_4() { return static_cast<int32_t>(offsetof(EnemyHealth_t797421206, ___FullHp_4)); }
	inline Material_t340375123 * get_FullHp_4() const { return ___FullHp_4; }
	inline Material_t340375123 ** get_address_of_FullHp_4() { return &___FullHp_4; }
	inline void set_FullHp_4(Material_t340375123 * value)
	{
		___FullHp_4 = value;
		Il2CppCodeGenWriteBarrier((&___FullHp_4), value);
	}

	inline static int32_t get_offset_of_NearDeath_5() { return static_cast<int32_t>(offsetof(EnemyHealth_t797421206, ___NearDeath_5)); }
	inline Material_t340375123 * get_NearDeath_5() const { return ___NearDeath_5; }
	inline Material_t340375123 ** get_address_of_NearDeath_5() { return &___NearDeath_5; }
	inline void set_NearDeath_5(Material_t340375123 * value)
	{
		___NearDeath_5 = value;
		Il2CppCodeGenWriteBarrier((&___NearDeath_5), value);
	}

	inline static int32_t get_offset_of_Player_bullet_6() { return static_cast<int32_t>(offsetof(EnemyHealth_t797421206, ___Player_bullet_6)); }
	inline GameObject_t1113636619 * get_Player_bullet_6() const { return ___Player_bullet_6; }
	inline GameObject_t1113636619 ** get_address_of_Player_bullet_6() { return &___Player_bullet_6; }
	inline void set_Player_bullet_6(GameObject_t1113636619 * value)
	{
		___Player_bullet_6 = value;
		Il2CppCodeGenWriteBarrier((&___Player_bullet_6), value);
	}

	inline static int32_t get_offset_of_renderer_7() { return static_cast<int32_t>(offsetof(EnemyHealth_t797421206, ___renderer_7)); }
	inline Renderer_t2627027031 * get_renderer_7() const { return ___renderer_7; }
	inline Renderer_t2627027031 ** get_address_of_renderer_7() { return &___renderer_7; }
	inline void set_renderer_7(Renderer_t2627027031 * value)
	{
		___renderer_7 = value;
		Il2CppCodeGenWriteBarrier((&___renderer_7), value);
	}

	inline static int32_t get_offset_of_isDead_8() { return static_cast<int32_t>(offsetof(EnemyHealth_t797421206, ___isDead_8)); }
	inline bool get_isDead_8() const { return ___isDead_8; }
	inline bool* get_address_of_isDead_8() { return &___isDead_8; }
	inline void set_isDead_8(bool value)
	{
		___isDead_8 = value;
	}

	inline static int32_t get_offset_of_isDamaged_9() { return static_cast<int32_t>(offsetof(EnemyHealth_t797421206, ___isDamaged_9)); }
	inline bool get_isDamaged_9() const { return ___isDamaged_9; }
	inline bool* get_address_of_isDamaged_9() { return &___isDamaged_9; }
	inline void set_isDamaged_9(bool value)
	{
		___isDamaged_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENEMYHEALTH_T797421206_H
#ifndef DESTROYTILL_T3914420476_H
#define DESTROYTILL_T3914420476_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DestroyTill
struct  DestroyTill_t3914420476  : public MonoBehaviour_t3962482529
{
public:
	// System.Single DestroyTill::destroyTime
	float ___destroyTime_2;

public:
	inline static int32_t get_offset_of_destroyTime_2() { return static_cast<int32_t>(offsetof(DestroyTill_t3914420476, ___destroyTime_2)); }
	inline float get_destroyTime_2() const { return ___destroyTime_2; }
	inline float* get_address_of_destroyTime_2() { return &___destroyTime_2; }
	inline void set_destroyTime_2(float value)
	{
		___destroyTime_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESTROYTILL_T3914420476_H
#ifndef BULLETBEHAVIOR_T4017821764_H
#define BULLETBEHAVIOR_T4017821764_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BulletBehavior
struct  BulletBehavior_t4017821764  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Rigidbody BulletBehavior::rigidbody
	Rigidbody_t3916780224 * ___rigidbody_2;
	// UnityEngine.Vector3 BulletBehavior::velocity
	Vector3_t3722313464  ___velocity_3;
	// System.Single BulletBehavior::timeTillDestroy
	float ___timeTillDestroy_4;
	// System.Single BulletBehavior::moveSpeed
	float ___moveSpeed_5;
	// System.Int32 BulletBehavior::damage
	int32_t ___damage_6;

public:
	inline static int32_t get_offset_of_rigidbody_2() { return static_cast<int32_t>(offsetof(BulletBehavior_t4017821764, ___rigidbody_2)); }
	inline Rigidbody_t3916780224 * get_rigidbody_2() const { return ___rigidbody_2; }
	inline Rigidbody_t3916780224 ** get_address_of_rigidbody_2() { return &___rigidbody_2; }
	inline void set_rigidbody_2(Rigidbody_t3916780224 * value)
	{
		___rigidbody_2 = value;
		Il2CppCodeGenWriteBarrier((&___rigidbody_2), value);
	}

	inline static int32_t get_offset_of_velocity_3() { return static_cast<int32_t>(offsetof(BulletBehavior_t4017821764, ___velocity_3)); }
	inline Vector3_t3722313464  get_velocity_3() const { return ___velocity_3; }
	inline Vector3_t3722313464 * get_address_of_velocity_3() { return &___velocity_3; }
	inline void set_velocity_3(Vector3_t3722313464  value)
	{
		___velocity_3 = value;
	}

	inline static int32_t get_offset_of_timeTillDestroy_4() { return static_cast<int32_t>(offsetof(BulletBehavior_t4017821764, ___timeTillDestroy_4)); }
	inline float get_timeTillDestroy_4() const { return ___timeTillDestroy_4; }
	inline float* get_address_of_timeTillDestroy_4() { return &___timeTillDestroy_4; }
	inline void set_timeTillDestroy_4(float value)
	{
		___timeTillDestroy_4 = value;
	}

	inline static int32_t get_offset_of_moveSpeed_5() { return static_cast<int32_t>(offsetof(BulletBehavior_t4017821764, ___moveSpeed_5)); }
	inline float get_moveSpeed_5() const { return ___moveSpeed_5; }
	inline float* get_address_of_moveSpeed_5() { return &___moveSpeed_5; }
	inline void set_moveSpeed_5(float value)
	{
		___moveSpeed_5 = value;
	}

	inline static int32_t get_offset_of_damage_6() { return static_cast<int32_t>(offsetof(BulletBehavior_t4017821764, ___damage_6)); }
	inline int32_t get_damage_6() const { return ___damage_6; }
	inline int32_t* get_address_of_damage_6() { return &___damage_6; }
	inline void set_damage_6(int32_t value)
	{
		___damage_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BULLETBEHAVIOR_T4017821764_H
#ifndef CAMERACONTROL_T3123314556_H
#define CAMERACONTROL_T3123314556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraControl
struct  CameraControl_t3123314556  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Transform[] CameraControl::views
	TransformU5BU5D_t807237628* ___views_2;
	// System.Single CameraControl::transitionSpeed
	float ___transitionSpeed_3;
	// UnityEngine.Transform CameraControl::currentView
	Transform_t3600365921 * ___currentView_4;

public:
	inline static int32_t get_offset_of_views_2() { return static_cast<int32_t>(offsetof(CameraControl_t3123314556, ___views_2)); }
	inline TransformU5BU5D_t807237628* get_views_2() const { return ___views_2; }
	inline TransformU5BU5D_t807237628** get_address_of_views_2() { return &___views_2; }
	inline void set_views_2(TransformU5BU5D_t807237628* value)
	{
		___views_2 = value;
		Il2CppCodeGenWriteBarrier((&___views_2), value);
	}

	inline static int32_t get_offset_of_transitionSpeed_3() { return static_cast<int32_t>(offsetof(CameraControl_t3123314556, ___transitionSpeed_3)); }
	inline float get_transitionSpeed_3() const { return ___transitionSpeed_3; }
	inline float* get_address_of_transitionSpeed_3() { return &___transitionSpeed_3; }
	inline void set_transitionSpeed_3(float value)
	{
		___transitionSpeed_3 = value;
	}

	inline static int32_t get_offset_of_currentView_4() { return static_cast<int32_t>(offsetof(CameraControl_t3123314556, ___currentView_4)); }
	inline Transform_t3600365921 * get_currentView_4() const { return ___currentView_4; }
	inline Transform_t3600365921 ** get_address_of_currentView_4() { return &___currentView_4; }
	inline void set_currentView_4(Transform_t3600365921 * value)
	{
		___currentView_4 = value;
		Il2CppCodeGenWriteBarrier((&___currentView_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERACONTROL_T3123314556_H
#ifndef BUTTONS_T3044739808_H
#define BUTTONS_T3044739808_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Buttons
struct  Buttons_t3044739808  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject Buttons::CharacterSelection
	GameObject_t1113636619 * ___CharacterSelection_2;

public:
	inline static int32_t get_offset_of_CharacterSelection_2() { return static_cast<int32_t>(offsetof(Buttons_t3044739808, ___CharacterSelection_2)); }
	inline GameObject_t1113636619 * get_CharacterSelection_2() const { return ___CharacterSelection_2; }
	inline GameObject_t1113636619 ** get_address_of_CharacterSelection_2() { return &___CharacterSelection_2; }
	inline void set_CharacterSelection_2(GameObject_t1113636619 * value)
	{
		___CharacterSelection_2 = value;
		Il2CppCodeGenWriteBarrier((&___CharacterSelection_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUTTONS_T3044739808_H
#ifndef CAMERACHANGE_T3559359345_H
#define CAMERACHANGE_T3559359345_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraChange
struct  CameraChange_t3559359345  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean CameraChange::isFirstPerson
	bool ___isFirstPerson_2;
	// UnityEngine.Transform[] CameraChange::views
	TransformU5BU5D_t807237628* ___views_3;
	// System.Single CameraChange::transitionSpeed
	float ___transitionSpeed_4;
	// UnityEngine.Transform CameraChange::currentView
	Transform_t3600365921 * ___currentView_5;

public:
	inline static int32_t get_offset_of_isFirstPerson_2() { return static_cast<int32_t>(offsetof(CameraChange_t3559359345, ___isFirstPerson_2)); }
	inline bool get_isFirstPerson_2() const { return ___isFirstPerson_2; }
	inline bool* get_address_of_isFirstPerson_2() { return &___isFirstPerson_2; }
	inline void set_isFirstPerson_2(bool value)
	{
		___isFirstPerson_2 = value;
	}

	inline static int32_t get_offset_of_views_3() { return static_cast<int32_t>(offsetof(CameraChange_t3559359345, ___views_3)); }
	inline TransformU5BU5D_t807237628* get_views_3() const { return ___views_3; }
	inline TransformU5BU5D_t807237628** get_address_of_views_3() { return &___views_3; }
	inline void set_views_3(TransformU5BU5D_t807237628* value)
	{
		___views_3 = value;
		Il2CppCodeGenWriteBarrier((&___views_3), value);
	}

	inline static int32_t get_offset_of_transitionSpeed_4() { return static_cast<int32_t>(offsetof(CameraChange_t3559359345, ___transitionSpeed_4)); }
	inline float get_transitionSpeed_4() const { return ___transitionSpeed_4; }
	inline float* get_address_of_transitionSpeed_4() { return &___transitionSpeed_4; }
	inline void set_transitionSpeed_4(float value)
	{
		___transitionSpeed_4 = value;
	}

	inline static int32_t get_offset_of_currentView_5() { return static_cast<int32_t>(offsetof(CameraChange_t3559359345, ___currentView_5)); }
	inline Transform_t3600365921 * get_currentView_5() const { return ___currentView_5; }
	inline Transform_t3600365921 ** get_address_of_currentView_5() { return &___currentView_5; }
	inline void set_currentView_5(Transform_t3600365921 * value)
	{
		___currentView_5 = value;
		Il2CppCodeGenWriteBarrier((&___currentView_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERACHANGE_T3559359345_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1800 = { sizeof (RequirementType_t3584265503)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1800[4] = 
{
	RequirementType_t3584265503::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1801 = { sizeof (AnalyticsEventParamListContainer_t587083383), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1801[1] = 
{
	AnalyticsEventParamListContainer_t587083383::get_offset_of_m_Parameters_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1802 = { sizeof (StandardEventPayload_t1629891255), -1, sizeof(StandardEventPayload_t1629891255_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1802[6] = 
{
	StandardEventPayload_t1629891255::get_offset_of_m_IsEventExpanded_0(),
	StandardEventPayload_t1629891255::get_offset_of_m_StandardEventType_1(),
	StandardEventPayload_t1629891255::get_offset_of_standardEventType_2(),
	StandardEventPayload_t1629891255::get_offset_of_m_Parameters_3(),
	StandardEventPayload_t1629891255_StaticFields::get_offset_of_m_EventData_4(),
	StandardEventPayload_t1629891255::get_offset_of_m_Name_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1803 = { sizeof (TrackableField_t1772682203), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1803[3] = 
{
	TrackableField_t1772682203::get_offset_of_m_ValidTypeNames_2(),
	TrackableField_t1772682203::get_offset_of_m_Type_3(),
	TrackableField_t1772682203::get_offset_of_m_EnumType_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1804 = { sizeof (TrackablePropertyBase_t2121532948), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1804[2] = 
{
	TrackablePropertyBase_t2121532948::get_offset_of_m_Target_0(),
	TrackablePropertyBase_t2121532948::get_offset_of_m_Path_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1805 = { sizeof (ValueProperty_t1868393739), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1805[11] = 
{
	ValueProperty_t1868393739::get_offset_of_m_EditingCustomValue_0(),
	ValueProperty_t1868393739::get_offset_of_m_PopupIndex_1(),
	ValueProperty_t1868393739::get_offset_of_m_CustomValue_2(),
	ValueProperty_t1868393739::get_offset_of_m_FixedType_3(),
	ValueProperty_t1868393739::get_offset_of_m_EnumType_4(),
	ValueProperty_t1868393739::get_offset_of_m_EnumTypeIsCustomizable_5(),
	ValueProperty_t1868393739::get_offset_of_m_CanDisable_6(),
	ValueProperty_t1868393739::get_offset_of_m_PropertyType_7(),
	ValueProperty_t1868393739::get_offset_of_m_ValueType_8(),
	ValueProperty_t1868393739::get_offset_of_m_Value_9(),
	ValueProperty_t1868393739::get_offset_of_m_Target_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1806 = { sizeof (PropertyType_t4040930247)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1806[4] = 
{
	PropertyType_t4040930247::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1807 = { sizeof (AnalyticsTracker_t731021378), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1807[5] = 
{
	AnalyticsTracker_t731021378::get_offset_of_m_EventName_2(),
	AnalyticsTracker_t731021378::get_offset_of_m_Dict_3(),
	AnalyticsTracker_t731021378::get_offset_of_m_PrevDictHash_4(),
	AnalyticsTracker_t731021378::get_offset_of_m_TrackableProperty_5(),
	AnalyticsTracker_t731021378::get_offset_of_m_Trigger_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1808 = { sizeof (Trigger_t4199345191)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1808[8] = 
{
	Trigger_t4199345191::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1809 = { sizeof (TrackableProperty_t3943537984), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1809[2] = 
{
	0,
	TrackableProperty_t3943537984::get_offset_of_m_Fields_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1810 = { sizeof (FieldWithTarget_t3058750293), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1810[6] = 
{
	FieldWithTarget_t3058750293::get_offset_of_m_ParamName_0(),
	FieldWithTarget_t3058750293::get_offset_of_m_Target_1(),
	FieldWithTarget_t3058750293::get_offset_of_m_FieldPath_2(),
	FieldWithTarget_t3058750293::get_offset_of_m_TypeString_3(),
	FieldWithTarget_t3058750293::get_offset_of_m_DoStatic_4(),
	FieldWithTarget_t3058750293::get_offset_of_m_StaticString_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1811 = { sizeof (TriggerBool_t501031542)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1811[4] = 
{
	TriggerBool_t501031542::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1812 = { sizeof (TriggerLifecycleEvent_t3193146760)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1812[9] = 
{
	TriggerLifecycleEvent_t3193146760::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1813 = { sizeof (TriggerOperator_t3611898925)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1813[9] = 
{
	TriggerOperator_t3611898925::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1814 = { sizeof (TriggerType_t105272677)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1814[5] = 
{
	TriggerType_t105272677::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1815 = { sizeof (TriggerListContainer_t2032715483), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1815[1] = 
{
	TriggerListContainer_t2032715483::get_offset_of_m_Rules_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1816 = { sizeof (EventTrigger_t2527451695), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1816[12] = 
{
	EventTrigger_t2527451695::get_offset_of_m_IsTriggerExpanded_0(),
	EventTrigger_t2527451695::get_offset_of_m_Type_1(),
	EventTrigger_t2527451695::get_offset_of_m_LifecycleEvent_2(),
	EventTrigger_t2527451695::get_offset_of_m_ApplyRules_3(),
	EventTrigger_t2527451695::get_offset_of_m_Rules_4(),
	EventTrigger_t2527451695::get_offset_of_m_TriggerBool_5(),
	EventTrigger_t2527451695::get_offset_of_m_InitTime_6(),
	EventTrigger_t2527451695::get_offset_of_m_RepeatTime_7(),
	EventTrigger_t2527451695::get_offset_of_m_Repetitions_8(),
	EventTrigger_t2527451695::get_offset_of_repetitionCount_9(),
	EventTrigger_t2527451695::get_offset_of_m_TriggerFunction_10(),
	EventTrigger_t2527451695::get_offset_of_m_Method_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1817 = { sizeof (OnTrigger_t4184125570), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1818 = { sizeof (TrackableTrigger_t621205209), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1818[2] = 
{
	TrackableTrigger_t621205209::get_offset_of_m_Target_0(),
	TrackableTrigger_t621205209::get_offset_of_m_MethodPath_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1819 = { sizeof (TriggerMethod_t582536534), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1820 = { sizeof (TriggerRule_t1946298321), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1820[4] = 
{
	TriggerRule_t1946298321::get_offset_of_m_Target_0(),
	TriggerRule_t1946298321::get_offset_of_m_Operator_1(),
	TriggerRule_t1946298321::get_offset_of_m_Value_2(),
	TriggerRule_t1946298321::get_offset_of_m_Value2_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1821 = { sizeof (U3CModuleU3E_t692745547), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1822 = { sizeof (CameraControl_t3123314556), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1822[3] = 
{
	CameraControl_t3123314556::get_offset_of_views_2(),
	CameraControl_t3123314556::get_offset_of_transitionSpeed_3(),
	CameraControl_t3123314556::get_offset_of_currentView_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1823 = { sizeof (BulletBehavior_t4017821764), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1823[5] = 
{
	BulletBehavior_t4017821764::get_offset_of_rigidbody_2(),
	BulletBehavior_t4017821764::get_offset_of_velocity_3(),
	BulletBehavior_t4017821764::get_offset_of_timeTillDestroy_4(),
	BulletBehavior_t4017821764::get_offset_of_moveSpeed_5(),
	BulletBehavior_t4017821764::get_offset_of_damage_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1824 = { sizeof (DestroyTill_t3914420476), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1824[1] = 
{
	DestroyTill_t3914420476::get_offset_of_destroyTime_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1825 = { sizeof (EnemyHealth_t797421206), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1825[8] = 
{
	EnemyHealth_t797421206::get_offset_of_maxHealth_2(),
	EnemyHealth_t797421206::get_offset_of_curHealth_3(),
	EnemyHealth_t797421206::get_offset_of_FullHp_4(),
	EnemyHealth_t797421206::get_offset_of_NearDeath_5(),
	EnemyHealth_t797421206::get_offset_of_Player_bullet_6(),
	EnemyHealth_t797421206::get_offset_of_renderer_7(),
	EnemyHealth_t797421206::get_offset_of_isDead_8(),
	EnemyHealth_t797421206::get_offset_of_isDamaged_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1826 = { sizeof (LevelCheck_t3917146222), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1826[5] = 
{
	LevelCheck_t3917146222::get_offset_of_playerLevel_2(),
	LevelCheck_t3917146222::get_offset_of_LevelSelection_3(),
	LevelCheck_t3917146222::get_offset_of_Levels_4(),
	LevelCheck_t3917146222::get_offset_of_num_Levels_5(),
	LevelCheck_t3917146222::get_offset_of_counter_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1827 = { sizeof (CameraChange_t3559359345), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1827[4] = 
{
	CameraChange_t3559359345::get_offset_of_isFirstPerson_2(),
	CameraChange_t3559359345::get_offset_of_views_3(),
	CameraChange_t3559359345::get_offset_of_transitionSpeed_4(),
	CameraChange_t3559359345::get_offset_of_currentView_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1828 = { sizeof (Move_t3440333737), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1828[6] = 
{
	Move_t3440333737::get_offset_of_moveSpeed_2(),
	Move_t3440333737::get_offset_of_rotSpeed_3(),
	Move_t3440333737::get_offset_of_sprintSpeed_4(),
	Move_t3440333737::get_offset_of_isSprinting_5(),
	Move_t3440333737::get_offset_of_Stamina_6(),
	Move_t3440333737::get_offset_of_staminaBar_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1829 = { sizeof (MoveBackward_t3372879665), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1829[3] = 
{
	MoveBackward_t3372879665::get_offset_of_Player_2(),
	MoveBackward_t3372879665::get_offset_of_moveSpeed_3(),
	MoveBackward_t3372879665::get_offset_of_srend_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1830 = { sizeof (MoveForward_t2564727450), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1830[3] = 
{
	MoveForward_t2564727450::get_offset_of_Player_2(),
	MoveForward_t2564727450::get_offset_of_moveSpeed_3(),
	MoveForward_t2564727450::get_offset_of_srend_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1831 = { sizeof (RotateLeft_t2200218285), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1831[3] = 
{
	RotateLeft_t2200218285::get_offset_of_Player_2(),
	RotateLeft_t2200218285::get_offset_of_rotSpeed_3(),
	RotateLeft_t2200218285::get_offset_of_srend_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1832 = { sizeof (RotatePlatform_t2669065297), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1832[6] = 
{
	RotatePlatform_t2669065297::get_offset_of_canRotate_2(),
	RotatePlatform_t2669065297::get_offset_of_isRight_3(),
	RotatePlatform_t2669065297::get_offset_of_isLeft_4(),
	RotatePlatform_t2669065297::get_offset_of_rightTurn_5(),
	RotatePlatform_t2669065297::get_offset_of_leftTurn_6(),
	RotatePlatform_t2669065297::get_offset_of_currentRot_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1833 = { sizeof (RotateRight_t2074839137), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1833[3] = 
{
	RotateRight_t2074839137::get_offset_of_Player_2(),
	RotateRight_t2074839137::get_offset_of_rotSpeed_3(),
	RotateRight_t2074839137::get_offset_of_srend_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1834 = { sizeof (Patrol_t2573740331), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1835 = { sizeof (PlayerHealth_t2068385516), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1835[5] = 
{
	PlayerHealth_t2068385516::get_offset_of_maxHealth_2(),
	PlayerHealth_t2068385516::get_offset_of_curHealth_3(),
	PlayerHealth_t2068385516::get_offset_of_hpBar_4(),
	PlayerHealth_t2068385516::get_offset_of_isDead_5(),
	PlayerHealth_t2068385516::get_offset_of_isDamaged_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1836 = { sizeof (ActivateChild_t59513335), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1836[2] = 
{
	ActivateChild_t59513335::get_offset_of_Child_2(),
	ActivateChild_t59513335::get_offset_of_timeTillActivation_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1837 = { sizeof (Ads_t829224404), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1837[3] = 
{
	Ads_t829224404::get_offset_of_Advertisement_2(),
	Ads_t829224404::get_offset_of_place_Ads_3(),
	Ads_t829224404::get_offset_of_random_Num_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1838 = { sizeof (Buttons_t3044739808), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1838[1] = 
{
	Buttons_t3044739808::get_offset_of_CharacterSelection_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1839 = { sizeof (Player_Detection_t3270809841), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1839[10] = 
{
	Player_Detection_t3270809841::get_offset_of_target_2(),
	Player_Detection_t3270809841::get_offset_of_rigidbody_3(),
	Player_Detection_t3270809841::get_offset_of_velocity_4(),
	Player_Detection_t3270809841::get_offset_of_isSeeking_5(),
	Player_Detection_t3270809841::get_offset_of_moveSpeed_6(),
	Player_Detection_t3270809841::get_offset_of_Waypoints_7(),
	Player_Detection_t3270809841::get_offset_of_WaypointParent_8(),
	Player_Detection_t3270809841::get_offset_of_numOfPoints_9(),
	Player_Detection_t3270809841::get_offset_of_counter_10(),
	Player_Detection_t3270809841::get_offset_of_distanceToSeek_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1840 = { sizeof (Shoot_t2202938192), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1840[5] = 
{
	Shoot_t2202938192::get_offset_of_bullet_2(),
	Shoot_t2202938192::get_offset_of_nuzzle_3(),
	Shoot_t2202938192::get_offset_of_fireRate_4(),
	Shoot_t2202938192::get_offset_of_lastFired_5(),
	Shoot_t2202938192::get_offset_of_srend_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1841 = { sizeof (Spawn_t617419884), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1841[5] = 
{
	Spawn_t617419884::get_offset_of_Enemy_2(),
	Spawn_t617419884::get_offset_of_SpawnPoint_3(),
	Spawn_t617419884::get_offset_of_maxNum_Enemies_4(),
	Spawn_t617419884::get_offset_of_spawnRate_5(),
	Spawn_t617419884::get_offset_of_num_Spawned_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1842 = { sizeof (SpawnSpikes_t2984661397), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1842[2] = 
{
	SpawnSpikes_t2984661397::get_offset_of_Spike_2(),
	SpawnSpikes_t2984661397::get_offset_of_SpawnPoints_3(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
