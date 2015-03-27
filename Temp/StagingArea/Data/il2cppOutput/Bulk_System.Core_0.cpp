#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t664.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
extern TypeInfo t664_TI;
#include "t664MD.h"


#include "t24.h"

// Metadata Definition <Module>
static MethodInfo* t664_MIs[] =
{
	NULL
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType t664_0_0_0;
extern Il2CppType t664_1_0_0;
struct t664;
extern TypeInfo t664_TI;
TypeInfo t664_TI = 
{
	&g_System_Core_dll_Image, NULL, "<Module>", "", t664_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t664_TI, NULL, NULL, &EmptyCustomAttributesCache, &t664_TI, &t664_0_0_0, &t664_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t664), 0, -1, 0, 0, -1, 0, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#include "t663.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t663_TI;
#include "t663MD.h"

#include "t25.h"
#include "t487MD.h"
extern MethodInfo m2905_MI;


extern MethodInfo m3066_MI;
 void m3066 (t663 * __this, MethodInfo* method){
	{
		m2905(__this, &m2905_MI);
		return;
	}
}
// Metadata Definition System.Runtime.CompilerServices.ExtensionAttribute
extern TypeInfo t663_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m3066_MI = 
{
	".ctor", (methodPointerType)&m3066, &t663_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 1, NULL, (methodPointerType)NULL};
static MethodInfo* t663_MIs[] =
{
	&m3066_MI,
	NULL
};
extern MethodInfo m2906_MI;
extern MethodInfo m50_MI;
extern MethodInfo m2907_MI;
extern MethodInfo m72_MI;
static MethodInfo* t663_VT[] =
{
	&m2906_MI,
	&m50_MI,
	&m2907_MI,
	&m72_MI,
};
extern TypeInfo t601_TI;
static Il2CppInterfaceOffsetPair t663_IOs[] = 
{
	{ &t601_TI, 4},
};
extern TypeInfo t616_TI;
#include "t616.h"
#include "t616MD.h"
extern MethodInfo m2939_MI;
void t663_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t14 *) * cache->count, 0);
	{
		t616 * tmp;
		tmp = (t616 *)il2cpp_codegen_object_new (&t616_TI);
		m2939(tmp, 69, &m2939_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t663__CustomAttributeCache = {
1,
NULL,
&t663_CustomAttributesCacheGenerator
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType t663_0_0_0;
extern Il2CppType t663_1_0_0;
extern TypeInfo t487_TI;
struct t663;
extern TypeInfo t663_TI;
extern CustomAttributesCache t663__CustomAttributeCache;
TypeInfo t663_TI = 
{
	&g_System_Core_dll_Image, NULL, "ExtensionAttribute", "System.Runtime.CompilerServices", t663_MIs, NULL, NULL, NULL, &t487_TI, NULL, NULL, &t663_TI, NULL, t663_VT, &t663__CustomAttributeCache, &t663_TI, &t663_0_0_0, &t663_1_0_0, t663_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t663), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 1};
#include "t665.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t665_TI;
#include "t665MD.h"

#include "t14.h"
#include "t33.h"
#include "t338.h"
extern TypeInfo t338_TI;
#include "t338MD.h"
extern MethodInfo m2974_MI;


extern MethodInfo m3067_MI;
 void m3067 (t14 * __this, t14 * p0, t14 * p1, MethodInfo* method){
	{
		if (p0)
		{
			goto IL_0011;
		}
	}
	{
		t338 * L_0 = (t338 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t338_TI));
		m2974(L_0, (t33*) &_stringLiteral192, &m2974_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_0011:
	{
		if (p1)
		{
			goto IL_0022;
		}
	}
	{
		t338 * L_1 = (t338 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t338_TI));
		m2974(L_1, (t33*) &_stringLiteral193, &m2974_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0022:
	{
		return;
	}
}
// Metadata Definition System.Linq.Check
extern Il2CppType t14_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t665_m3067_ParameterInfos[] = 
{
	{"source", 0, 134217729, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"predicate", 1, 134217730, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t665_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m3067_MI = 
{
	"SourceAndPredicate", (methodPointerType)&m3067, &t665_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t14, t665_m3067_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 2, NULL, (methodPointerType)NULL};
static MethodInfo* t665_MIs[] =
{
	&m3067_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
static MethodInfo* t665_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType t665_0_0_0;
extern Il2CppType t665_1_0_0;
extern TypeInfo t14_TI;
struct t665;
extern TypeInfo t665_TI;
TypeInfo t665_TI = 
{
	&g_System_Core_dll_Image, NULL, "Check", "System.Linq", t665_MIs, NULL, NULL, NULL, &t14_TI, NULL, NULL, &t665_TI, NULL, t665_VT, &EmptyCustomAttributesCache, &t665_TI, &t665_0_0_0, &t665_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t665), 0, -1, 0, 0, -1, 1048960, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 0};
#include "t666.h"
extern Il2CppGenericContainer t666_IGC;
extern TypeInfo t666_gp_TSource_0_TI;
Il2CppGenericParamFull t666_gp_TSource_0_TI_GenericParamFull = { { &t666_IGC, 0}, {NULL, "TSource", 0, 0, NULL} };
static Il2CppGenericParamFull* t666_IGPA[1] = 
{
	&t666_gp_TSource_0_TI_GenericParamFull,
};
extern TypeInfo t666_TI;
Il2CppGenericContainer t666_IGC = { { NULL, NULL }, NULL, &t666_TI, 1, 0, t666_IGPA };
extern TypeInfo t666_TI;
extern Il2CppType t25_0_0_0;
MethodInfo m3068_MI = 
{
	".ctor", NULL, &t666_TI, &t25_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 5, NULL, (methodPointerType)NULL};
extern TypeInfo t666_TI;
extern Il2CppType t666_gp_0_0_0_0;
extern CustomAttributesCache t666__CustomAttributeCache_m3069;
MethodInfo m3069_MI = 
{
	"System.Collections.Generic.IEnumerator<TSource>.get_Current", NULL, &t666_TI, &t666_gp_0_0_0_0, NULL, NULL, &t666__CustomAttributeCache_m3069, 2529, 0, 9, 0, false, false, 6, NULL, (methodPointerType)NULL};
extern TypeInfo t666_TI;
extern Il2CppType t14_0_0_0;
extern CustomAttributesCache t666__CustomAttributeCache_m3070;
MethodInfo m3070_MI = 
{
	"System.Collections.IEnumerator.get_Current", NULL, &t666_TI, &t14_0_0_0, NULL, NULL, &t666__CustomAttributeCache_m3070, 2529, 0, 4, 0, false, false, 7, NULL, (methodPointerType)NULL};
extern TypeInfo t666_TI;
extern Il2CppType t36_0_0_0;
extern CustomAttributesCache t666__CustomAttributeCache_m3071;
MethodInfo m3071_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", NULL, &t666_TI, &t36_0_0_0, NULL, NULL, &t666__CustomAttributeCache_m3071, 481, 0, 7, 0, false, false, 8, NULL, (methodPointerType)NULL};
extern TypeInfo t666_TI;
extern Il2CppType t669_0_0_0;
extern CustomAttributesCache t666__CustomAttributeCache_m3072;
MethodInfo m3072_MI = 
{
	"System.Collections.Generic.IEnumerable<TSource>.GetEnumerator", NULL, &t666_TI, &t669_0_0_0, NULL, NULL, &t666__CustomAttributeCache_m3072, 481, 0, 8, 0, false, false, 9, NULL, (methodPointerType)NULL};
extern TypeInfo t666_TI;
extern Il2CppType t26_0_0_0;
MethodInfo m3073_MI = 
{
	"MoveNext", NULL, &t666_TI, &t26_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, false, 10, NULL, (methodPointerType)NULL};
extern TypeInfo t666_TI;
extern Il2CppType t25_0_0_0;
extern CustomAttributesCache t666__CustomAttributeCache_m3074;
MethodInfo m3074_MI = 
{
	"Dispose", NULL, &t666_TI, &t25_0_0_0, NULL, NULL, &t666__CustomAttributeCache_m3074, 486, 0, 6, 0, false, false, 11, NULL, (methodPointerType)NULL};
static MethodInfo* t666_MIs[] =
{
	&m3068_MI,
	&m3069_MI,
	&m3070_MI,
	&m3071_MI,
	&m3072_MI,
	&m3073_MI,
	&m3074_MI,
	NULL
};
extern MethodInfo m3069_MI;
static PropertyInfo t666____System_Collections_Generic_IEnumeratorU3CTSourceU3E_Current_PropertyInfo = 
{
	&t666_TI, "System.Collections.Generic.IEnumerator<TSource>.Current", &m3069_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3070_MI;
static PropertyInfo t666____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t666_TI, "System.Collections.IEnumerator.Current", &m3070_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t666_PIs[] =
{
	&t666____System_Collections_Generic_IEnumeratorU3CTSourceU3E_Current_PropertyInfo,
	&t666____System_Collections_IEnumerator_Current_PropertyInfo,
	NULL
};
extern Il2CppType t670_0_0_3;
FieldInfo t666_f0_FieldInfo = 
{
	"source", &t670_0_0_3, &t666_TI, 0, &EmptyCustomAttributesCache};
extern Il2CppType t669_0_0_3;
FieldInfo t666_f1_FieldInfo = 
{
	"<$s_92>__0", &t669_0_0_3, &t666_TI, 0, &EmptyCustomAttributesCache};
extern Il2CppType t666_gp_0_0_0_3;
FieldInfo t666_f2_FieldInfo = 
{
	"<element>__1", &t666_gp_0_0_0_3, &t666_TI, 0, &EmptyCustomAttributesCache};
extern Il2CppType t671_0_0_3;
FieldInfo t666_f3_FieldInfo = 
{
	"predicate", &t671_0_0_3, &t666_TI, 0, &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_3;
FieldInfo t666_f4_FieldInfo = 
{
	"$PC", &t35_0_0_3, &t666_TI, 0, &EmptyCustomAttributesCache};
extern Il2CppType t666_gp_0_0_0_3;
FieldInfo t666_f5_FieldInfo = 
{
	"$current", &t666_gp_0_0_0_3, &t666_TI, 0, &EmptyCustomAttributesCache};
extern Il2CppType t670_0_0_3;
FieldInfo t666_f6_FieldInfo = 
{
	"<$>source", &t670_0_0_3, &t666_TI, 0, &EmptyCustomAttributesCache};
extern Il2CppType t671_0_0_3;
FieldInfo t666_f7_FieldInfo = 
{
	"<$>predicate", &t671_0_0_3, &t666_TI, 0, &EmptyCustomAttributesCache};
static FieldInfo* t666_FIs[] =
{
	&t666_f0_FieldInfo,
	&t666_f1_FieldInfo,
	&t666_f2_FieldInfo,
	&t666_f3_FieldInfo,
	&t666_f4_FieldInfo,
	&t666_f5_FieldInfo,
	&t666_f6_FieldInfo,
	&t666_f7_FieldInfo,
	NULL
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType t666_0_0_0;
extern Il2CppType t666_1_0_0;
struct t666;
extern TypeInfo t666_TI;
extern TypeInfo t404_TI;
TypeInfo t666_TI = 
{
	&g_System_Core_dll_Image, NULL, "<CreateWhereIterator>c__Iterator1D`1", "", t666_MIs, t666_PIs, t666_FIs, NULL, NULL, NULL, &t404_TI, &t666_TI, NULL, NULL, NULL, NULL, &t666_0_0_0, &t666_1_0_0, NULL, NULL, &t666_IGC, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 8, 0, 0, 0, 0, 0};
extern TypeInfo t314_TI;
#include "t314.h"
#include "t314MD.h"
extern MethodInfo m1358_MI;
void t666_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t14 *) * cache->count, 0);
	{
		t314 * tmp;
		tmp = (t314 *)il2cpp_codegen_object_new (&t314_TI);
		m1358(tmp, &m1358_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t342_TI;
#include "t342.h"
#include "t342MD.h"
extern MethodInfo m1523_MI;
void t666_CustomAttributesCacheGenerator_m3069(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t14 *) * cache->count, 0);
	{
		t342 * tmp;
		tmp = (t342 *)il2cpp_codegen_object_new (&t342_TI);
		m1523(tmp, &m1523_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t342_TI;
extern MethodInfo m1523_MI;
void t666_CustomAttributesCacheGenerator_m3070(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t14 *) * cache->count, 0);
	{
		t342 * tmp;
		tmp = (t342 *)il2cpp_codegen_object_new (&t342_TI);
		m1523(tmp, &m1523_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t342_TI;
extern MethodInfo m1523_MI;
void t666_CustomAttributesCacheGenerator_m3071(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t14 *) * cache->count, 0);
	{
		t342 * tmp;
		tmp = (t342 *)il2cpp_codegen_object_new (&t342_TI);
		m1523(tmp, &m1523_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t342_TI;
extern MethodInfo m1523_MI;
void t666_CustomAttributesCacheGenerator_m3072(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t14 *) * cache->count, 0);
	{
		t342 * tmp;
		tmp = (t342 *)il2cpp_codegen_object_new (&t342_TI);
		m1523(tmp, &m1523_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t342_TI;
extern MethodInfo m1523_MI;
void t666_CustomAttributesCacheGenerator_m3074(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t14 *) * cache->count, 0);
	{
		t342 * tmp;
		tmp = (t342 *)il2cpp_codegen_object_new (&t342_TI);
		m1523(tmp, &m1523_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t666__CustomAttributeCache = {
1,
NULL,
&t666_CustomAttributesCacheGenerator
};
CustomAttributesCache t666__CustomAttributeCache_m3069 = {
1,
NULL,
&t666_CustomAttributesCacheGenerator_m3069
};
CustomAttributesCache t666__CustomAttributeCache_m3070 = {
1,
NULL,
&t666_CustomAttributesCacheGenerator_m3070
};
CustomAttributesCache t666__CustomAttributeCache_m3071 = {
1,
NULL,
&t666_CustomAttributesCacheGenerator_m3071
};
CustomAttributesCache t666__CustomAttributeCache_m3072 = {
1,
NULL,
&t666_CustomAttributesCacheGenerator_m3072
};
CustomAttributesCache t666__CustomAttributeCache_m3074 = {
1,
NULL,
&t666_CustomAttributesCacheGenerator_m3074
};
#include "t404.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t404_TI;
#include "t404MD.h"



// Metadata Definition System.Linq.Enumerable
extern TypeInfo t404_TI;
extern Il2CppType t672_0_0_0;
extern Il2CppGenericContainer m3075_IGC;
extern TypeInfo m3075_gp_TSource_0_TI;
Il2CppGenericParamFull m3075_gp_TSource_0_TI_GenericParamFull = { { &m3075_IGC, 0}, {NULL, "TSource", 0, 0, NULL} };
static Il2CppGenericParamFull* m3075_IGPA[1] = 
{
	&m3075_gp_TSource_0_TI_GenericParamFull,
};
extern MethodInfo m3075_MI;
Il2CppGenericContainer m3075_IGC = { { NULL, NULL }, NULL, &m3075_MI, 1, 1, m3075_IGPA };
extern CustomAttributesCache t404__CustomAttributeCache_m3075;
MethodInfo m3075_MI = 
{
	"Where", NULL, &t404_TI, &t672_0_0_0, NULL, NULL, &t404__CustomAttributeCache_m3075, 150, 0, 255, 0, true, false, 3, NULL, (methodPointerType)NULL};
extern TypeInfo t404_TI;
extern Il2CppType t674_0_0_0;
extern Il2CppGenericContainer m3076_IGC;
extern TypeInfo m3076_gp_TSource_0_TI;
Il2CppGenericParamFull m3076_gp_TSource_0_TI_GenericParamFull = { { &m3076_IGC, 0}, {NULL, "TSource", 0, 0, NULL} };
static Il2CppGenericParamFull* m3076_IGPA[1] = 
{
	&m3076_gp_TSource_0_TI_GenericParamFull,
};
extern MethodInfo m3076_MI;
Il2CppGenericContainer m3076_IGC = { { NULL, NULL }, NULL, &m3076_MI, 1, 1, m3076_IGPA };
extern CustomAttributesCache t404__CustomAttributeCache_m3076;
MethodInfo m3076_MI = 
{
	"CreateWhereIterator", NULL, &t404_TI, &t674_0_0_0, NULL, NULL, &t404__CustomAttributeCache_m3076, 145, 0, 255, 0, true, false, 4, NULL, (methodPointerType)NULL};
static MethodInfo* t404_MIs[] =
{
	&m3075_MI,
	&m3076_MI,
	NULL
};
extern TypeInfo t666_TI;
static TypeInfo* t404_TI__nestedTypes[2] =
{
	&t666_TI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
static MethodInfo* t404_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
};
extern TypeInfo t663_TI;
extern MethodInfo m3066_MI;
void t404_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t14 *) * cache->count, 0);
	{
		t663 * tmp;
		tmp = (t663 *)il2cpp_codegen_object_new (&t663_TI);
		m3066(tmp, &m3066_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t663_TI;
extern MethodInfo m3066_MI;
void t404_CustomAttributesCacheGenerator_m3075(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t14 *) * cache->count, 0);
	{
		t663 * tmp;
		tmp = (t663 *)il2cpp_codegen_object_new (&t663_TI);
		m3066(tmp, &m3066_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t342_TI;
extern MethodInfo m1523_MI;
void t404_CustomAttributesCacheGenerator_m3076(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t14 *) * cache->count, 0);
	{
		t342 * tmp;
		tmp = (t342 *)il2cpp_codegen_object_new (&t342_TI);
		m1523(tmp, &m1523_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t404__CustomAttributeCache = {
1,
NULL,
&t404_CustomAttributesCacheGenerator
};
CustomAttributesCache t404__CustomAttributeCache_m3075 = {
1,
NULL,
&t404_CustomAttributesCacheGenerator_m3075
};
CustomAttributesCache t404__CustomAttributeCache_m3076 = {
1,
NULL,
&t404_CustomAttributesCacheGenerator_m3076
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType t404_0_0_0;
extern Il2CppType t404_1_0_0;
extern TypeInfo t14_TI;
struct t404;
extern TypeInfo t404_TI;
extern CustomAttributesCache t404__CustomAttributeCache;
extern CustomAttributesCache t404__CustomAttributeCache_m3075;
extern CustomAttributesCache t404__CustomAttributeCache_m3076;
TypeInfo t404_TI = 
{
	&g_System_Core_dll_Image, NULL, "Enumerable", "System.Linq", t404_MIs, NULL, NULL, NULL, &t14_TI, t404_TI__nestedTypes, NULL, &t404_TI, NULL, t404_VT, &t404__CustomAttributeCache, &t404_TI, &t404_0_0_0, &t404_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t404), 0, -1, 0, 0, -1, 1048961, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 2, 0, 0, 0, 1, 4, 0, 0};
#include "t667.h"
extern Il2CppGenericContainer t667_IGC;
extern TypeInfo t667_gp_T_0_TI;
Il2CppGenericParamFull t667_gp_T_0_TI_GenericParamFull = { { &t667_IGC, 0}, {NULL, "T", 0, 0, NULL} };
extern TypeInfo t667_gp_TResult_1_TI;
Il2CppGenericParamFull t667_gp_TResult_1_TI_GenericParamFull = { { &t667_IGC, 1}, {NULL, "TResult", 0, 0, NULL} };
static Il2CppGenericParamFull* t667_IGPA[2] = 
{
	&t667_gp_T_0_TI_GenericParamFull,
	&t667_gp_TResult_1_TI_GenericParamFull,
};
extern TypeInfo t667_TI;
Il2CppGenericContainer t667_IGC = { { NULL, NULL }, NULL, &t667_TI, 2, 0, t667_IGPA };
extern Il2CppType t14_0_0_0;
extern Il2CppType t77_0_0_0;
static ParameterInfo t667_m3077_ParameterInfos[] = 
{
	{"object", 0, 134217735, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"method", 1, 134217736, &EmptyCustomAttributesCache, &t77_0_0_0},
};
extern TypeInfo t667_TI;
extern Il2CppType t25_0_0_0;
MethodInfo m3077_MI = 
{
	".ctor", NULL, &t667_TI, &t25_0_0_0, NULL, t667_m3077_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, false, 12, NULL, (methodPointerType)NULL};
extern Il2CppType t667_gp_0_0_0_0;
static ParameterInfo t667_m3078_ParameterInfos[] = 
{
	{"arg1", 0, 134217737, &EmptyCustomAttributesCache, &t667_gp_0_0_0_0},
};
extern TypeInfo t667_TI;
extern Il2CppType t667_gp_1_0_0_0;
MethodInfo m3078_MI = 
{
	"Invoke", NULL, &t667_TI, &t667_gp_1_0_0_0, NULL, t667_m3078_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, false, 13, NULL, (methodPointerType)NULL};
extern Il2CppType t667_gp_0_0_0_0;
extern Il2CppType t76_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t667_m3079_ParameterInfos[] = 
{
	{"arg1", 0, 134217738, &EmptyCustomAttributesCache, &t667_gp_0_0_0_0},
	{"callback", 1, 134217739, &EmptyCustomAttributesCache, &t76_0_0_0},
	{"object", 2, 134217740, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t667_TI;
extern Il2CppType t75_0_0_0;
MethodInfo m3079_MI = 
{
	"BeginInvoke", NULL, &t667_TI, &t75_0_0_0, NULL, t667_m3079_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, false, 14, NULL, (methodPointerType)NULL};
extern Il2CppType t75_0_0_0;
static ParameterInfo t667_m3080_ParameterInfos[] = 
{
	{"result", 0, 134217741, &EmptyCustomAttributesCache, &t75_0_0_0},
};
extern TypeInfo t667_TI;
extern Il2CppType t667_gp_1_0_0_0;
MethodInfo m3080_MI = 
{
	"EndInvoke", NULL, &t667_TI, &t667_gp_1_0_0_0, NULL, t667_m3080_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, false, 15, NULL, (methodPointerType)NULL};
static MethodInfo* t667_MIs[] =
{
	&m3077_MI,
	&m3078_MI,
	&m3079_MI,
	&m3080_MI,
	NULL
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType t667_0_0_0;
extern Il2CppType t667_1_0_0;
struct t667;
extern TypeInfo t667_TI;
TypeInfo t667_TI = 
{
	&g_System_Core_dll_Image, NULL, "Func`2", "System", t667_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t667_TI, NULL, NULL, NULL, NULL, &t667_0_0_0, &t667_1_0_0, NULL, NULL, &t667_IGC, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 0, 0, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
