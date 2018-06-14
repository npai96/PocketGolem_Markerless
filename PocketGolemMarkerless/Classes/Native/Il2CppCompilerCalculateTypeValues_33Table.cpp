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


// System.Text.StringBuilder
struct StringBuilder_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Type>
struct Dictionary_2_t2269201059;
// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.Assembly>
struct Dictionary_2_t3887689098;
// System.Collections.Generic.List`1<System.Reflection.Assembly>
struct List_1_t1279540245;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t107971893;
// System.String
struct String_t;
// System.IO.StringReader
struct StringReader_t3465604688;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// IBM.Watson.DeveloperCloud.Editor.UnitTestManager/OnTestsComplete
struct OnTestsComplete_t1076207448;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t1113559212;
// UnityEngine.GUIStyle
struct GUIStyle_t3956901511;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;




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
#ifndef SERIALIZER_T1539586466_H
#define SERIALIZER_T1539586466_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MiniJSON.Json/Serializer
struct  Serializer_t1539586466  : public RuntimeObject
{
public:
	// System.Text.StringBuilder MiniJSON.Json/Serializer::builder
	StringBuilder_t * ___builder_0;

public:
	inline static int32_t get_offset_of_builder_0() { return static_cast<int32_t>(offsetof(Serializer_t1539586466, ___builder_0)); }
	inline StringBuilder_t * get_builder_0() const { return ___builder_0; }
	inline StringBuilder_t ** get_address_of_builder_0() { return &___builder_0; }
	inline void set_builder_0(StringBuilder_t * value)
	{
		___builder_0 = value;
		Il2CppCodeGenWriteBarrier((&___builder_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZER_T1539586466_H
#ifndef FSTYPECACHE_T3469578604_H
#define FSTYPECACHE_T3469578604_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FullSerializer.Internal.fsTypeCache
struct  fsTypeCache_t3469578604  : public RuntimeObject
{
public:

public:
};

struct fsTypeCache_t3469578604_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Type> FullSerializer.Internal.fsTypeCache::_cachedTypes
	Dictionary_2_t2269201059 * ____cachedTypes_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.Assembly> FullSerializer.Internal.fsTypeCache::_assembliesByName
	Dictionary_2_t3887689098 * ____assembliesByName_1;
	// System.Collections.Generic.List`1<System.Reflection.Assembly> FullSerializer.Internal.fsTypeCache::_assembliesByIndex
	List_1_t1279540245 * ____assembliesByIndex_2;
	// System.AssemblyLoadEventHandler FullSerializer.Internal.fsTypeCache::<>f__mg$cache0
	AssemblyLoadEventHandler_t107971893 * ___U3CU3Ef__mgU24cache0_3;

public:
	inline static int32_t get_offset_of__cachedTypes_0() { return static_cast<int32_t>(offsetof(fsTypeCache_t3469578604_StaticFields, ____cachedTypes_0)); }
	inline Dictionary_2_t2269201059 * get__cachedTypes_0() const { return ____cachedTypes_0; }
	inline Dictionary_2_t2269201059 ** get_address_of__cachedTypes_0() { return &____cachedTypes_0; }
	inline void set__cachedTypes_0(Dictionary_2_t2269201059 * value)
	{
		____cachedTypes_0 = value;
		Il2CppCodeGenWriteBarrier((&____cachedTypes_0), value);
	}

	inline static int32_t get_offset_of__assembliesByName_1() { return static_cast<int32_t>(offsetof(fsTypeCache_t3469578604_StaticFields, ____assembliesByName_1)); }
	inline Dictionary_2_t3887689098 * get__assembliesByName_1() const { return ____assembliesByName_1; }
	inline Dictionary_2_t3887689098 ** get_address_of__assembliesByName_1() { return &____assembliesByName_1; }
	inline void set__assembliesByName_1(Dictionary_2_t3887689098 * value)
	{
		____assembliesByName_1 = value;
		Il2CppCodeGenWriteBarrier((&____assembliesByName_1), value);
	}

	inline static int32_t get_offset_of__assembliesByIndex_2() { return static_cast<int32_t>(offsetof(fsTypeCache_t3469578604_StaticFields, ____assembliesByIndex_2)); }
	inline List_1_t1279540245 * get__assembliesByIndex_2() const { return ____assembliesByIndex_2; }
	inline List_1_t1279540245 ** get_address_of__assembliesByIndex_2() { return &____assembliesByIndex_2; }
	inline void set__assembliesByIndex_2(List_1_t1279540245 * value)
	{
		____assembliesByIndex_2 = value;
		Il2CppCodeGenWriteBarrier((&____assembliesByIndex_2), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_3() { return static_cast<int32_t>(offsetof(fsTypeCache_t3469578604_StaticFields, ___U3CU3Ef__mgU24cache0_3)); }
	inline AssemblyLoadEventHandler_t107971893 * get_U3CU3Ef__mgU24cache0_3() const { return ___U3CU3Ef__mgU24cache0_3; }
	inline AssemblyLoadEventHandler_t107971893 ** get_address_of_U3CU3Ef__mgU24cache0_3() { return &___U3CU3Ef__mgU24cache0_3; }
	inline void set_U3CU3Ef__mgU24cache0_3(AssemblyLoadEventHandler_t107971893 * value)
	{
		___U3CU3Ef__mgU24cache0_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FSTYPECACHE_T3469578604_H
#ifndef PARSER_T3021620180_H
#define PARSER_T3021620180_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MiniJSON.Json/Parser
struct  Parser_t3021620180  : public RuntimeObject
{
public:
	// System.IO.StringReader MiniJSON.Json/Parser::json
	StringReader_t3465604688 * ___json_1;

public:
	inline static int32_t get_offset_of_json_1() { return static_cast<int32_t>(offsetof(Parser_t3021620180, ___json_1)); }
	inline StringReader_t3465604688 * get_json_1() const { return ___json_1; }
	inline StringReader_t3465604688 ** get_address_of_json_1() { return &___json_1; }
	inline void set_json_1(StringReader_t3465604688 * value)
	{
		___json_1 = value;
		Il2CppCodeGenWriteBarrier((&___json_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARSER_T3021620180_H
#ifndef JSON_T27535148_H
#define JSON_T27535148_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MiniJSON.Json
struct  Json_t27535148  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSON_T27535148_H
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
#ifndef TOKEN_T3126366611_H
#define TOKEN_T3126366611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MiniJSON.Json/Parser/TOKEN
struct  TOKEN_t3126366611 
{
public:
	// System.Int32 MiniJSON.Json/Parser/TOKEN::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TOKEN_t3126366611, ___value___1)); }
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
#endif // TOKEN_T3126366611_H
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
#ifndef TRAVISINTEGRATIONTESTS_T2617180283_H
#define TRAVISINTEGRATIONTESTS_T2617180283_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.Watson.DeveloperCloud.Editor.TravisIntegrationTests
struct  TravisIntegrationTests_t2617180283  : public MonoBehaviour_t3962482529
{
public:

public:
};

struct TravisIntegrationTests_t2617180283_StaticFields
{
public:
	// IBM.Watson.DeveloperCloud.Editor.UnitTestManager/OnTestsComplete IBM.Watson.DeveloperCloud.Editor.TravisIntegrationTests::<>f__mg$cache0
	OnTestsComplete_t1076207448 * ___U3CU3Ef__mgU24cache0_2;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_2() { return static_cast<int32_t>(offsetof(TravisIntegrationTests_t2617180283_StaticFields, ___U3CU3Ef__mgU24cache0_2)); }
	inline OnTestsComplete_t1076207448 * get_U3CU3Ef__mgU24cache0_2() const { return ___U3CU3Ef__mgU24cache0_2; }
	inline OnTestsComplete_t1076207448 ** get_address_of_U3CU3Ef__mgU24cache0_2() { return &___U3CU3Ef__mgU24cache0_2; }
	inline void set_U3CU3Ef__mgU24cache0_2(OnTestsComplete_t1076207448 * value)
	{
		___U3CU3Ef__mgU24cache0_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRAVISINTEGRATIONTESTS_T2617180283_H
#ifndef DEFAULTTRACKABLEEVENTHANDLER_T1588957063_H
#define DEFAULTTRACKABLEEVENTHANDLER_T1588957063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DefaultTrackableEventHandler
struct  DefaultTrackableEventHandler_t1588957063  : public MonoBehaviour_t3962482529
{
public:
	// Vuforia.TrackableBehaviour DefaultTrackableEventHandler::mTrackableBehaviour
	TrackableBehaviour_t1113559212 * ___mTrackableBehaviour_2;

public:
	inline static int32_t get_offset_of_mTrackableBehaviour_2() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t1588957063, ___mTrackableBehaviour_2)); }
	inline TrackableBehaviour_t1113559212 * get_mTrackableBehaviour_2() const { return ___mTrackableBehaviour_2; }
	inline TrackableBehaviour_t1113559212 ** get_address_of_mTrackableBehaviour_2() { return &___mTrackableBehaviour_2; }
	inline void set_mTrackableBehaviour_2(TrackableBehaviour_t1113559212 * value)
	{
		___mTrackableBehaviour_2 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableBehaviour_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTTRACKABLEEVENTHANDLER_T1588957063_H
#ifndef VUFORIAMONOBEHAVIOUR_T1150221792_H
#define VUFORIAMONOBEHAVIOUR_T1150221792_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VuforiaMonoBehaviour
struct  VuforiaMonoBehaviour_t1150221792  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIAMONOBEHAVIOUR_T1150221792_H
#ifndef DEFAULTINITIALIZATIONERRORHANDLER_T3109936861_H
#define DEFAULTINITIALIZATIONERRORHANDLER_T3109936861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DefaultInitializationErrorHandler
struct  DefaultInitializationErrorHandler_t3109936861  : public VuforiaMonoBehaviour_t1150221792
{
public:
	// System.String DefaultInitializationErrorHandler::mErrorText
	String_t* ___mErrorText_2;
	// System.Boolean DefaultInitializationErrorHandler::mErrorOccurred
	bool ___mErrorOccurred_3;
	// UnityEngine.GUIStyle DefaultInitializationErrorHandler::bodyStyle
	GUIStyle_t3956901511 * ___bodyStyle_5;
	// UnityEngine.GUIStyle DefaultInitializationErrorHandler::headerStyle
	GUIStyle_t3956901511 * ___headerStyle_6;
	// UnityEngine.GUIStyle DefaultInitializationErrorHandler::footerStyle
	GUIStyle_t3956901511 * ___footerStyle_7;
	// UnityEngine.Texture2D DefaultInitializationErrorHandler::bodyTexture
	Texture2D_t3840446185 * ___bodyTexture_8;
	// UnityEngine.Texture2D DefaultInitializationErrorHandler::headerTexture
	Texture2D_t3840446185 * ___headerTexture_9;
	// UnityEngine.Texture2D DefaultInitializationErrorHandler::footerTexture
	Texture2D_t3840446185 * ___footerTexture_10;

public:
	inline static int32_t get_offset_of_mErrorText_2() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___mErrorText_2)); }
	inline String_t* get_mErrorText_2() const { return ___mErrorText_2; }
	inline String_t** get_address_of_mErrorText_2() { return &___mErrorText_2; }
	inline void set_mErrorText_2(String_t* value)
	{
		___mErrorText_2 = value;
		Il2CppCodeGenWriteBarrier((&___mErrorText_2), value);
	}

	inline static int32_t get_offset_of_mErrorOccurred_3() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___mErrorOccurred_3)); }
	inline bool get_mErrorOccurred_3() const { return ___mErrorOccurred_3; }
	inline bool* get_address_of_mErrorOccurred_3() { return &___mErrorOccurred_3; }
	inline void set_mErrorOccurred_3(bool value)
	{
		___mErrorOccurred_3 = value;
	}

	inline static int32_t get_offset_of_bodyStyle_5() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___bodyStyle_5)); }
	inline GUIStyle_t3956901511 * get_bodyStyle_5() const { return ___bodyStyle_5; }
	inline GUIStyle_t3956901511 ** get_address_of_bodyStyle_5() { return &___bodyStyle_5; }
	inline void set_bodyStyle_5(GUIStyle_t3956901511 * value)
	{
		___bodyStyle_5 = value;
		Il2CppCodeGenWriteBarrier((&___bodyStyle_5), value);
	}

	inline static int32_t get_offset_of_headerStyle_6() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___headerStyle_6)); }
	inline GUIStyle_t3956901511 * get_headerStyle_6() const { return ___headerStyle_6; }
	inline GUIStyle_t3956901511 ** get_address_of_headerStyle_6() { return &___headerStyle_6; }
	inline void set_headerStyle_6(GUIStyle_t3956901511 * value)
	{
		___headerStyle_6 = value;
		Il2CppCodeGenWriteBarrier((&___headerStyle_6), value);
	}

	inline static int32_t get_offset_of_footerStyle_7() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___footerStyle_7)); }
	inline GUIStyle_t3956901511 * get_footerStyle_7() const { return ___footerStyle_7; }
	inline GUIStyle_t3956901511 ** get_address_of_footerStyle_7() { return &___footerStyle_7; }
	inline void set_footerStyle_7(GUIStyle_t3956901511 * value)
	{
		___footerStyle_7 = value;
		Il2CppCodeGenWriteBarrier((&___footerStyle_7), value);
	}

	inline static int32_t get_offset_of_bodyTexture_8() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___bodyTexture_8)); }
	inline Texture2D_t3840446185 * get_bodyTexture_8() const { return ___bodyTexture_8; }
	inline Texture2D_t3840446185 ** get_address_of_bodyTexture_8() { return &___bodyTexture_8; }
	inline void set_bodyTexture_8(Texture2D_t3840446185 * value)
	{
		___bodyTexture_8 = value;
		Il2CppCodeGenWriteBarrier((&___bodyTexture_8), value);
	}

	inline static int32_t get_offset_of_headerTexture_9() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___headerTexture_9)); }
	inline Texture2D_t3840446185 * get_headerTexture_9() const { return ___headerTexture_9; }
	inline Texture2D_t3840446185 ** get_address_of_headerTexture_9() { return &___headerTexture_9; }
	inline void set_headerTexture_9(Texture2D_t3840446185 * value)
	{
		___headerTexture_9 = value;
		Il2CppCodeGenWriteBarrier((&___headerTexture_9), value);
	}

	inline static int32_t get_offset_of_footerTexture_10() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___footerTexture_10)); }
	inline Texture2D_t3840446185 * get_footerTexture_10() const { return ___footerTexture_10; }
	inline Texture2D_t3840446185 ** get_address_of_footerTexture_10() { return &___footerTexture_10; }
	inline void set_footerTexture_10(Texture2D_t3840446185 * value)
	{
		___footerTexture_10 = value;
		Il2CppCodeGenWriteBarrier((&___footerTexture_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTINITIALIZATIONERRORHANDLER_T3109936861_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3300 = { sizeof (fsTypeCache_t3469578604), -1, sizeof(fsTypeCache_t3469578604_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3300[4] = 
{
	fsTypeCache_t3469578604_StaticFields::get_offset_of__cachedTypes_0(),
	fsTypeCache_t3469578604_StaticFields::get_offset_of__assembliesByName_1(),
	fsTypeCache_t3469578604_StaticFields::get_offset_of__assembliesByIndex_2(),
	fsTypeCache_t3469578604_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3301 = { sizeof (Json_t27535148), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3302 = { sizeof (Parser_t3021620180), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3302[2] = 
{
	0,
	Parser_t3021620180::get_offset_of_json_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3303 = { sizeof (TOKEN_t3126366611)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3303[13] = 
{
	TOKEN_t3126366611::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3304 = { sizeof (Serializer_t1539586466), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3304[1] = 
{
	Serializer_t1539586466::get_offset_of_builder_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3305 = { sizeof (TravisIntegrationTests_t2617180283), -1, sizeof(TravisIntegrationTests_t2617180283_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3305[1] = 
{
	TravisIntegrationTests_t2617180283_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3306 = { sizeof (DefaultInitializationErrorHandler_t3109936861), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3306[9] = 
{
	DefaultInitializationErrorHandler_t3109936861::get_offset_of_mErrorText_2(),
	DefaultInitializationErrorHandler_t3109936861::get_offset_of_mErrorOccurred_3(),
	0,
	DefaultInitializationErrorHandler_t3109936861::get_offset_of_bodyStyle_5(),
	DefaultInitializationErrorHandler_t3109936861::get_offset_of_headerStyle_6(),
	DefaultInitializationErrorHandler_t3109936861::get_offset_of_footerStyle_7(),
	DefaultInitializationErrorHandler_t3109936861::get_offset_of_bodyTexture_8(),
	DefaultInitializationErrorHandler_t3109936861::get_offset_of_headerTexture_9(),
	DefaultInitializationErrorHandler_t3109936861::get_offset_of_footerTexture_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3307 = { sizeof (DefaultTrackableEventHandler_t1588957063), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3307[1] = 
{
	DefaultTrackableEventHandler_t1588957063::get_offset_of_mTrackableBehaviour_2(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
