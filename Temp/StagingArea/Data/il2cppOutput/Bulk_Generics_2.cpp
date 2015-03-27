#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
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
extern TypeInfo t3283_TI;

#include "t598.h"

#include "t24.h"

// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Double>
extern MethodInfo m22828_MI;
static PropertyInfo t3283____Current_PropertyInfo = 
{
	&t3283_TI, "Current", &m22828_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3283_PIs[] =
{
	&t3283____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3283_TI;
extern Il2CppType t598_0_0_0;
extern void* RuntimeInvoker_t598 (MethodInfo* method, void* obj, void** args);
MethodInfo m22828_MI = 
{
	"get_Current", NULL, &t3283_TI, &t598_0_0_0, RuntimeInvoker_t598, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3283_MIs[] =
{
	&m22828_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t3283_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3283_0_0_0;
extern Il2CppType t3283_1_0_0;
struct t3283;
extern TypeInfo t3283_TI;
extern Il2CppGenericClass t3283_GC;
TypeInfo t3283_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3283_MIs, t3283_PIs, NULL, NULL, NULL, NULL, NULL, &t3283_TI, t3283_ITIs, NULL, &EmptyCustomAttributesCache, &t3283_TI, &t3283_0_0_0, &t3283_1_0_0, NULL, &t3283_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t1670.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1670_TI;
#include "t1670MD.h"

#include "t14.h"
#include "t35.h"
#include "t33.h"
#include "t1278.h"
#include "t25.h"
#include "t26.h"
extern TypeInfo t1670_TI;
extern TypeInfo t598_TI;
extern TypeInfo t1278_TI;
#include "t1278MD.h"
#include "t24MD.h"
extern MethodInfo m8304_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m16724_MI;
struct t24;
#include "t1242.h"
 double m16724 (t24 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m16724_MI;


extern MethodInfo m8300_MI;
 void m8300 (t1670 * __this, t24 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m8301_MI;
 t14 * m8301 (t1670 * __this, MethodInfo* method){
	{
		double L_0 = m8304(__this, &m8304_MI);
		double L_1 = L_0;
		t14 * L_2 = Box(InitializedTypeInfo(&t598_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m8302_MI;
 void m8302 (t1670 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m8303_MI;
 bool m8303 (t1670 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		t24 * L_1 = (__this->f0);
		int32_t L_2 = m3737(L_1, &m3737_MI);
		__this->f1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->f1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->f1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->f1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
extern MethodInfo m8304_MI;
 double m8304 (t1670 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		t1278 * L_1 = (t1278 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1278_TI));
		m6925(L_1, (t33*) &_stringLiteral370, &m6925_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->f1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		t1278 * L_3 = (t1278 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1278_TI));
		m6925(L_3, (t33*) &_stringLiteral371, &m6925_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		t24 * L_4 = (__this->f0);
		t24 * L_5 = (__this->f0);
		int32_t L_6 = m3737(L_5, &m3737_MI);
		int32_t L_7 = (__this->f1);
		double L_8 = m16724(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m16724_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Double>
extern Il2CppType t24_0_0_1;
FieldInfo t1670_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t1670_TI, offsetof(t1670, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t1670_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t1670_TI, offsetof(t1670, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t1670_FIs[] =
{
	&t1670_f0_FieldInfo,
	&t1670_f1_FieldInfo,
	NULL
};
extern MethodInfo m8301_MI;
static PropertyInfo t1670____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1670_TI, "System.Collections.IEnumerator.Current", &m8301_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8304_MI;
static PropertyInfo t1670____Current_PropertyInfo = 
{
	&t1670_TI, "Current", &m8304_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1670_PIs[] =
{
	&t1670____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1670____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t1670_m8300_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t1670_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8300_MI = 
{
	".ctor", (methodPointerType)&m8300, &t1670_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1670_m8300_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1670_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8301_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8301, &t1670_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1670_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8302_MI = 
{
	"Dispose", (methodPointerType)&m8302, &t1670_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1670_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m8303_MI = 
{
	"MoveNext", (methodPointerType)&m8303, &t1670_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1670_TI;
extern Il2CppType t598_0_0_0;
extern void* RuntimeInvoker_t598 (MethodInfo* method, void* obj, void** args);
MethodInfo m8304_MI = 
{
	"get_Current", (methodPointerType)&m8304, &t1670_TI, &t598_0_0_0, RuntimeInvoker_t598, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1670_MIs[] =
{
	&m8300_MI,
	&m8301_MI,
	&m8302_MI,
	&m8303_MI,
	&m8304_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m8301_MI;
extern MethodInfo m8303_MI;
extern MethodInfo m8302_MI;
extern MethodInfo m8304_MI;
static MethodInfo* t1670_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m8301_MI,
	&m8303_MI,
	&m8302_MI,
	&m8304_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3283_TI;
static TypeInfo* t1670_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t3283_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3283_TI;
static Il2CppInterfaceOffsetPair t1670_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t3283_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1670_0_0_0;
extern Il2CppType t1670_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t1670_TI;
extern Il2CppGenericClass t1670_GC;
extern TypeInfo t24_TI;
TypeInfo t1670_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1670_MIs, t1670_PIs, t1670_FIs, NULL, &t122_TI, NULL, &t24_TI, &t1670_TI, t1670_ITIs, t1670_VT, &EmptyCustomAttributesCache, &t1670_TI, &t1670_0_0_0, &t1670_1_0_0, t1670_IOs, &t1670_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1670)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3835_TI;

#include "mscorlib_ArrayTypes.h"


// Metadata Definition System.Collections.Generic.ICollection`1<System.Double>
extern MethodInfo m22829_MI;
static PropertyInfo t3835____Count_PropertyInfo = 
{
	&t3835_TI, "Count", &m22829_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m22830_MI;
static PropertyInfo t3835____IsReadOnly_PropertyInfo = 
{
	&t3835_TI, "IsReadOnly", &m22830_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3835_PIs[] =
{
	&t3835____Count_PropertyInfo,
	&t3835____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t3835_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m22829_MI = 
{
	"get_Count", NULL, &t3835_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3835_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m22830_MI = 
{
	"get_IsReadOnly", NULL, &t3835_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t598_0_0_0;
static ParameterInfo t3835_m22831_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t598_0_0_0},
};
extern TypeInfo t3835_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t598 (MethodInfo* method, void* obj, void** args);
MethodInfo m22831_MI = 
{
	"Add", NULL, &t3835_TI, &t25_0_0_0, RuntimeInvoker_t25_t598, t3835_m22831_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3835_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m22832_MI = 
{
	"Clear", NULL, &t3835_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t598_0_0_0;
static ParameterInfo t3835_m22833_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t598_0_0_0},
};
extern TypeInfo t3835_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t598 (MethodInfo* method, void* obj, void** args);
MethodInfo m22833_MI = 
{
	"Contains", NULL, &t3835_TI, &t26_0_0_0, RuntimeInvoker_t26_t598, t3835_m22833_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t727_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t3835_m22834_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t727_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t3835_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m22834_MI = 
{
	"CopyTo", NULL, &t3835_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t3835_m22834_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t598_0_0_0;
static ParameterInfo t3835_m22835_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t598_0_0_0},
};
extern TypeInfo t3835_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t598 (MethodInfo* method, void* obj, void** args);
MethodInfo m22835_MI = 
{
	"Remove", NULL, &t3835_TI, &t26_0_0_0, RuntimeInvoker_t26_t598, t3835_m22835_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3835_MIs[] =
{
	&m22829_MI,
	&m22830_MI,
	&m22831_MI,
	&m22832_MI,
	&m22833_MI,
	&m22834_MI,
	&m22835_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t3837_TI;
static TypeInfo* t3835_ITIs[] = 
{
	&t600_TI,
	&t3837_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3835_0_0_0;
extern Il2CppType t3835_1_0_0;
struct t3835;
extern TypeInfo t3835_TI;
extern Il2CppGenericClass t3835_GC;
TypeInfo t3835_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t3835_MIs, t3835_PIs, NULL, NULL, NULL, NULL, NULL, &t3835_TI, t3835_ITIs, NULL, &EmptyCustomAttributesCache, &t3835_TI, &t3835_0_0_0, &t3835_1_0_0, NULL, &t3835_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3837_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Double>
extern TypeInfo t3837_TI;
extern Il2CppType t3283_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22836_MI = 
{
	"GetEnumerator", NULL, &t3837_TI, &t3283_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3837_MIs[] =
{
	&m22836_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t3837_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3837_0_0_0;
extern Il2CppType t3837_1_0_0;
struct t3837;
extern TypeInfo t3837_TI;
extern Il2CppGenericClass t3837_GC;
TypeInfo t3837_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t3837_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3837_TI, t3837_ITIs, NULL, &EmptyCustomAttributesCache, &t3837_TI, &t3837_0_0_0, &t3837_1_0_0, NULL, &t3837_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3836_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Double>
extern MethodInfo m22837_MI;
extern MethodInfo m22838_MI;
static PropertyInfo t3836____Item_PropertyInfo = 
{
	&t3836_TI, "Item", &m22837_MI, &m22838_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3836_PIs[] =
{
	&t3836____Item_PropertyInfo,
	NULL
};
extern Il2CppType t598_0_0_0;
static ParameterInfo t3836_m22839_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t598_0_0_0},
};
extern TypeInfo t3836_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t598 (MethodInfo* method, void* obj, void** args);
MethodInfo m22839_MI = 
{
	"IndexOf", NULL, &t3836_TI, &t35_0_0_0, RuntimeInvoker_t35_t598, t3836_m22839_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t598_0_0_0;
static ParameterInfo t3836_m22840_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t598_0_0_0},
};
extern TypeInfo t3836_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t598 (MethodInfo* method, void* obj, void** args);
MethodInfo m22840_MI = 
{
	"Insert", NULL, &t3836_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t598, t3836_m22840_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t3836_m22841_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t3836_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m22841_MI = 
{
	"RemoveAt", NULL, &t3836_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t3836_m22841_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t3836_m22837_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t3836_TI;
extern Il2CppType t598_0_0_0;
extern void* RuntimeInvoker_t598_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m22837_MI = 
{
	"get_Item", NULL, &t3836_TI, &t598_0_0_0, RuntimeInvoker_t598_t35, t3836_m22837_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t598_0_0_0;
static ParameterInfo t3836_m22838_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t598_0_0_0},
};
extern TypeInfo t3836_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t598 (MethodInfo* method, void* obj, void** args);
MethodInfo m22838_MI = 
{
	"set_Item", NULL, &t3836_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t598, t3836_m22838_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3836_MIs[] =
{
	&m22839_MI,
	&m22840_MI,
	&m22841_MI,
	&m22837_MI,
	&m22838_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t3835_TI;
extern TypeInfo t3837_TI;
static TypeInfo* t3836_ITIs[] = 
{
	&t600_TI,
	&t3835_TI,
	&t3837_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3836_0_0_0;
extern Il2CppType t3836_1_0_0;
struct t3836;
extern TypeInfo t3836_TI;
extern Il2CppGenericClass t3836_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t3836_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t3836_MIs, t3836_PIs, NULL, NULL, NULL, NULL, NULL, &t3836_TI, t3836_ITIs, NULL, &t1409__CustomAttributeCache, &t3836_TI, &t3836_0_0_0, &t3836_1_0_0, NULL, &t3836_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3838_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IComparable`1<System.Double>>
extern MethodInfo m22842_MI;
static PropertyInfo t3838____Count_PropertyInfo = 
{
	&t3838_TI, "Count", &m22842_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m22843_MI;
static PropertyInfo t3838____IsReadOnly_PropertyInfo = 
{
	&t3838_TI, "IsReadOnly", &m22843_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3838_PIs[] =
{
	&t3838____Count_PropertyInfo,
	&t3838____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t3838_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m22842_MI = 
{
	"get_Count", NULL, &t3838_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3838_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m22843_MI = 
{
	"get_IsReadOnly", NULL, &t3838_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1382_0_0_0;
static ParameterInfo t3838_m22844_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1382_0_0_0},
};
extern TypeInfo t3838_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22844_MI = 
{
	"Add", NULL, &t3838_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t3838_m22844_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3838_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m22845_MI = 
{
	"Clear", NULL, &t3838_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1382_0_0_0;
static ParameterInfo t3838_m22846_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1382_0_0_0},
};
extern TypeInfo t3838_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22846_MI = 
{
	"Contains", NULL, &t3838_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t3838_m22846_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2897_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t3838_m22847_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2897_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t3838_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m22847_MI = 
{
	"CopyTo", NULL, &t3838_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t3838_m22847_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1382_0_0_0;
static ParameterInfo t3838_m22848_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1382_0_0_0},
};
extern TypeInfo t3838_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22848_MI = 
{
	"Remove", NULL, &t3838_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t3838_m22848_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3838_MIs[] =
{
	&m22842_MI,
	&m22843_MI,
	&m22844_MI,
	&m22845_MI,
	&m22846_MI,
	&m22847_MI,
	&m22848_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t3840_TI;
static TypeInfo* t3838_ITIs[] = 
{
	&t600_TI,
	&t3840_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3838_0_0_0;
extern Il2CppType t3838_1_0_0;
struct t3838;
extern TypeInfo t3838_TI;
extern Il2CppGenericClass t3838_GC;
TypeInfo t3838_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t3838_MIs, t3838_PIs, NULL, NULL, NULL, NULL, NULL, &t3838_TI, t3838_ITIs, NULL, &EmptyCustomAttributesCache, &t3838_TI, &t3838_0_0_0, &t3838_1_0_0, NULL, &t3838_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3840_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.Double>>
extern TypeInfo t3840_TI;
extern Il2CppType t3284_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22849_MI = 
{
	"GetEnumerator", NULL, &t3840_TI, &t3284_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3840_MIs[] =
{
	&m22849_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t3840_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3840_0_0_0;
extern Il2CppType t3840_1_0_0;
struct t3840;
extern TypeInfo t3840_TI;
extern Il2CppGenericClass t3840_GC;
TypeInfo t3840_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t3840_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3840_TI, t3840_ITIs, NULL, &EmptyCustomAttributesCache, &t3840_TI, &t3840_0_0_0, &t3840_1_0_0, NULL, &t3840_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3284_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.Double>>
extern MethodInfo m22850_MI;
static PropertyInfo t3284____Current_PropertyInfo = 
{
	&t3284_TI, "Current", &m22850_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3284_PIs[] =
{
	&t3284____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3284_TI;
extern Il2CppType t1382_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22850_MI = 
{
	"get_Current", NULL, &t3284_TI, &t1382_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3284_MIs[] =
{
	&m22850_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t3284_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3284_0_0_0;
extern Il2CppType t3284_1_0_0;
struct t3284;
extern TypeInfo t3284_TI;
extern Il2CppGenericClass t3284_GC;
TypeInfo t3284_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3284_MIs, t3284_PIs, NULL, NULL, NULL, NULL, NULL, &t3284_TI, t3284_ITIs, NULL, &EmptyCustomAttributesCache, &t3284_TI, &t3284_0_0_0, &t3284_1_0_0, NULL, &t3284_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1382_TI;



// Metadata Definition System.IComparable`1<System.Double>
extern Il2CppType t598_0_0_0;
static ParameterInfo t1382_m22851_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t598_0_0_0},
};
extern TypeInfo t1382_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t598 (MethodInfo* method, void* obj, void** args);
MethodInfo m22851_MI = 
{
	"CompareTo", NULL, &t1382_TI, &t35_0_0_0, RuntimeInvoker_t35_t598, t1382_m22851_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1382_MIs[] =
{
	&m22851_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1382_0_0_0;
extern Il2CppType t1382_1_0_0;
struct t1382;
extern TypeInfo t1382_TI;
extern Il2CppGenericClass t1382_GC;
TypeInfo t1382_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t1382_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1382_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1382_TI, &t1382_0_0_0, &t1382_1_0_0, NULL, &t1382_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t1671.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1671_TI;
#include "t1671MD.h"

extern TypeInfo t1671_TI;
extern TypeInfo t1382_TI;
extern TypeInfo t1278_TI;
extern MethodInfo m8309_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m16735_MI;
struct t24;
struct t24;
 t14 * m16357_gshared (t24 * __this, int32_t p0, MethodInfo* method);
#define m16357(__this, p0, method) (t14 *)m16357_gshared((t24 *)__this, (int32_t)p0, method)
#define m16735(__this, p0, method) (t14*)m16357_gshared((t24 *)__this, (int32_t)p0, method)
extern MethodInfo m16735_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.IComparable`1<System.Double>>
extern Il2CppType t24_0_0_1;
FieldInfo t1671_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t1671_TI, offsetof(t1671, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t1671_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t1671_TI, offsetof(t1671, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t1671_FIs[] =
{
	&t1671_f0_FieldInfo,
	&t1671_f1_FieldInfo,
	NULL
};
extern MethodInfo m8306_MI;
static PropertyInfo t1671____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1671_TI, "System.Collections.IEnumerator.Current", &m8306_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8309_MI;
static PropertyInfo t1671____Current_PropertyInfo = 
{
	&t1671_TI, "Current", &m8309_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1671_PIs[] =
{
	&t1671____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1671____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t1671_m8305_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t1671_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8305_MI = 
{
	".ctor", (methodPointerType)&m7877_gshared, &t1671_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1671_m8305_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1671_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8306_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7879_gshared, &t1671_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1671_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8307_MI = 
{
	"Dispose", (methodPointerType)&m7881_gshared, &t1671_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1671_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m8308_MI = 
{
	"MoveNext", (methodPointerType)&m7883_gshared, &t1671_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1671_TI;
extern Il2CppType t1382_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8309_MI = 
{
	"get_Current", (methodPointerType)&m7885_gshared, &t1671_TI, &t1382_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1671_MIs[] =
{
	&m8305_MI,
	&m8306_MI,
	&m8307_MI,
	&m8308_MI,
	&m8309_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m8306_MI;
extern MethodInfo m8308_MI;
extern MethodInfo m8307_MI;
extern MethodInfo m8309_MI;
static MethodInfo* t1671_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m8306_MI,
	&m8308_MI,
	&m8307_MI,
	&m8309_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3284_TI;
static TypeInfo* t1671_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t3284_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3284_TI;
static Il2CppInterfaceOffsetPair t1671_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t3284_TI, 7},
};
extern MethodInfo m8309_MI;
extern TypeInfo t1382_TI;
extern MethodInfo m16735_MI;
static void* t1671_RGCTXData[3] = 
{
	&m8309_MI,
	&t1382_TI,
	&m16735_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1671_0_0_0;
extern Il2CppType t1671_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t1671_TI;
extern Il2CppGenericClass t1671_GC;
extern TypeInfo t24_TI;
TypeInfo t1671_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1671_MIs, t1671_PIs, t1671_FIs, NULL, &t122_TI, NULL, &t24_TI, &t1671_TI, t1671_ITIs, t1671_VT, &EmptyCustomAttributesCache, &t1671_TI, &t1671_0_0_0, &t1671_1_0_0, t1671_IOs, &t1671_GC, NULL, NULL, NULL, t1671_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1671)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3839_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IComparable`1<System.Double>>
extern MethodInfo m22852_MI;
extern MethodInfo m22853_MI;
static PropertyInfo t3839____Item_PropertyInfo = 
{
	&t3839_TI, "Item", &m22852_MI, &m22853_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3839_PIs[] =
{
	&t3839____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1382_0_0_0;
static ParameterInfo t3839_m22854_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1382_0_0_0},
};
extern TypeInfo t3839_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22854_MI = 
{
	"IndexOf", NULL, &t3839_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t3839_m22854_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1382_0_0_0;
static ParameterInfo t3839_m22855_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1382_0_0_0},
};
extern TypeInfo t3839_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22855_MI = 
{
	"Insert", NULL, &t3839_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t3839_m22855_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t3839_m22856_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t3839_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m22856_MI = 
{
	"RemoveAt", NULL, &t3839_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t3839_m22856_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t3839_m22852_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t3839_TI;
extern Il2CppType t1382_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m22852_MI = 
{
	"get_Item", NULL, &t3839_TI, &t1382_0_0_0, RuntimeInvoker_t14_t35, t3839_m22852_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1382_0_0_0;
static ParameterInfo t3839_m22853_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1382_0_0_0},
};
extern TypeInfo t3839_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22853_MI = 
{
	"set_Item", NULL, &t3839_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t3839_m22853_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3839_MIs[] =
{
	&m22854_MI,
	&m22855_MI,
	&m22856_MI,
	&m22852_MI,
	&m22853_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t3838_TI;
extern TypeInfo t3840_TI;
static TypeInfo* t3839_ITIs[] = 
{
	&t600_TI,
	&t3838_TI,
	&t3840_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3839_0_0_0;
extern Il2CppType t3839_1_0_0;
struct t3839;
extern TypeInfo t3839_TI;
extern Il2CppGenericClass t3839_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t3839_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t3839_MIs, t3839_PIs, NULL, NULL, NULL, NULL, NULL, &t3839_TI, t3839_ITIs, NULL, &t1409__CustomAttributeCache, &t3839_TI, &t3839_0_0_0, &t3839_1_0_0, NULL, &t3839_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3841_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Double>>
extern MethodInfo m22857_MI;
static PropertyInfo t3841____Count_PropertyInfo = 
{
	&t3841_TI, "Count", &m22857_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m22858_MI;
static PropertyInfo t3841____IsReadOnly_PropertyInfo = 
{
	&t3841_TI, "IsReadOnly", &m22858_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3841_PIs[] =
{
	&t3841____Count_PropertyInfo,
	&t3841____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t3841_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m22857_MI = 
{
	"get_Count", NULL, &t3841_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3841_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m22858_MI = 
{
	"get_IsReadOnly", NULL, &t3841_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1383_0_0_0;
static ParameterInfo t3841_m22859_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1383_0_0_0},
};
extern TypeInfo t3841_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22859_MI = 
{
	"Add", NULL, &t3841_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t3841_m22859_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3841_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m22860_MI = 
{
	"Clear", NULL, &t3841_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1383_0_0_0;
static ParameterInfo t3841_m22861_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1383_0_0_0},
};
extern TypeInfo t3841_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22861_MI = 
{
	"Contains", NULL, &t3841_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t3841_m22861_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2898_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t3841_m22862_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2898_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t3841_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m22862_MI = 
{
	"CopyTo", NULL, &t3841_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t3841_m22862_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1383_0_0_0;
static ParameterInfo t3841_m22863_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1383_0_0_0},
};
extern TypeInfo t3841_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22863_MI = 
{
	"Remove", NULL, &t3841_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t3841_m22863_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3841_MIs[] =
{
	&m22857_MI,
	&m22858_MI,
	&m22859_MI,
	&m22860_MI,
	&m22861_MI,
	&m22862_MI,
	&m22863_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t3843_TI;
static TypeInfo* t3841_ITIs[] = 
{
	&t600_TI,
	&t3843_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3841_0_0_0;
extern Il2CppType t3841_1_0_0;
struct t3841;
extern TypeInfo t3841_TI;
extern Il2CppGenericClass t3841_GC;
TypeInfo t3841_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t3841_MIs, t3841_PIs, NULL, NULL, NULL, NULL, NULL, &t3841_TI, t3841_ITIs, NULL, &EmptyCustomAttributesCache, &t3841_TI, &t3841_0_0_0, &t3841_1_0_0, NULL, &t3841_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3843_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.Double>>
extern TypeInfo t3843_TI;
extern Il2CppType t3285_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22864_MI = 
{
	"GetEnumerator", NULL, &t3843_TI, &t3285_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3843_MIs[] =
{
	&m22864_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t3843_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3843_0_0_0;
extern Il2CppType t3843_1_0_0;
struct t3843;
extern TypeInfo t3843_TI;
extern Il2CppGenericClass t3843_GC;
TypeInfo t3843_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t3843_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3843_TI, t3843_ITIs, NULL, &EmptyCustomAttributesCache, &t3843_TI, &t3843_0_0_0, &t3843_1_0_0, NULL, &t3843_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3285_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.Double>>
extern MethodInfo m22865_MI;
static PropertyInfo t3285____Current_PropertyInfo = 
{
	&t3285_TI, "Current", &m22865_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3285_PIs[] =
{
	&t3285____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3285_TI;
extern Il2CppType t1383_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22865_MI = 
{
	"get_Current", NULL, &t3285_TI, &t1383_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3285_MIs[] =
{
	&m22865_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t3285_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3285_0_0_0;
extern Il2CppType t3285_1_0_0;
struct t3285;
extern TypeInfo t3285_TI;
extern Il2CppGenericClass t3285_GC;
TypeInfo t3285_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3285_MIs, t3285_PIs, NULL, NULL, NULL, NULL, NULL, &t3285_TI, t3285_ITIs, NULL, &EmptyCustomAttributesCache, &t3285_TI, &t3285_0_0_0, &t3285_1_0_0, NULL, &t3285_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1383_TI;



// Metadata Definition System.IEquatable`1<System.Double>
extern Il2CppType t598_0_0_0;
static ParameterInfo t1383_m22866_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t598_0_0_0},
};
extern TypeInfo t1383_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t598 (MethodInfo* method, void* obj, void** args);
MethodInfo m22866_MI = 
{
	"Equals", NULL, &t1383_TI, &t26_0_0_0, RuntimeInvoker_t26_t598, t1383_m22866_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1383_MIs[] =
{
	&m22866_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1383_0_0_0;
extern Il2CppType t1383_1_0_0;
struct t1383;
extern TypeInfo t1383_TI;
extern Il2CppGenericClass t1383_GC;
TypeInfo t1383_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t1383_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1383_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1383_TI, &t1383_0_0_0, &t1383_1_0_0, NULL, &t1383_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t1672.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1672_TI;
#include "t1672MD.h"

extern TypeInfo t1672_TI;
extern TypeInfo t1383_TI;
extern TypeInfo t1278_TI;
extern MethodInfo m8314_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m16746_MI;
struct t24;
#define m16746(__this, p0, method) (t14*)m16357_gshared((t24 *)__this, (int32_t)p0, method)
extern MethodInfo m16746_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.IEquatable`1<System.Double>>
extern Il2CppType t24_0_0_1;
FieldInfo t1672_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t1672_TI, offsetof(t1672, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t1672_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t1672_TI, offsetof(t1672, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t1672_FIs[] =
{
	&t1672_f0_FieldInfo,
	&t1672_f1_FieldInfo,
	NULL
};
extern MethodInfo m8311_MI;
static PropertyInfo t1672____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1672_TI, "System.Collections.IEnumerator.Current", &m8311_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8314_MI;
static PropertyInfo t1672____Current_PropertyInfo = 
{
	&t1672_TI, "Current", &m8314_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1672_PIs[] =
{
	&t1672____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1672____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t1672_m8310_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t1672_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8310_MI = 
{
	".ctor", (methodPointerType)&m7877_gshared, &t1672_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1672_m8310_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1672_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8311_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7879_gshared, &t1672_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1672_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8312_MI = 
{
	"Dispose", (methodPointerType)&m7881_gshared, &t1672_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1672_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m8313_MI = 
{
	"MoveNext", (methodPointerType)&m7883_gshared, &t1672_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1672_TI;
extern Il2CppType t1383_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8314_MI = 
{
	"get_Current", (methodPointerType)&m7885_gshared, &t1672_TI, &t1383_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1672_MIs[] =
{
	&m8310_MI,
	&m8311_MI,
	&m8312_MI,
	&m8313_MI,
	&m8314_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m8311_MI;
extern MethodInfo m8313_MI;
extern MethodInfo m8312_MI;
extern MethodInfo m8314_MI;
static MethodInfo* t1672_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m8311_MI,
	&m8313_MI,
	&m8312_MI,
	&m8314_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3285_TI;
static TypeInfo* t1672_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t3285_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3285_TI;
static Il2CppInterfaceOffsetPair t1672_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t3285_TI, 7},
};
extern MethodInfo m8314_MI;
extern TypeInfo t1383_TI;
extern MethodInfo m16746_MI;
static void* t1672_RGCTXData[3] = 
{
	&m8314_MI,
	&t1383_TI,
	&m16746_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1672_0_0_0;
extern Il2CppType t1672_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t1672_TI;
extern Il2CppGenericClass t1672_GC;
extern TypeInfo t24_TI;
TypeInfo t1672_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1672_MIs, t1672_PIs, t1672_FIs, NULL, &t122_TI, NULL, &t24_TI, &t1672_TI, t1672_ITIs, t1672_VT, &EmptyCustomAttributesCache, &t1672_TI, &t1672_0_0_0, &t1672_1_0_0, t1672_IOs, &t1672_GC, NULL, NULL, NULL, t1672_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1672)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3842_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IEquatable`1<System.Double>>
extern MethodInfo m22867_MI;
extern MethodInfo m22868_MI;
static PropertyInfo t3842____Item_PropertyInfo = 
{
	&t3842_TI, "Item", &m22867_MI, &m22868_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3842_PIs[] =
{
	&t3842____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1383_0_0_0;
static ParameterInfo t3842_m22869_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1383_0_0_0},
};
extern TypeInfo t3842_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22869_MI = 
{
	"IndexOf", NULL, &t3842_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t3842_m22869_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1383_0_0_0;
static ParameterInfo t3842_m22870_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1383_0_0_0},
};
extern TypeInfo t3842_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22870_MI = 
{
	"Insert", NULL, &t3842_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t3842_m22870_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t3842_m22871_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t3842_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m22871_MI = 
{
	"RemoveAt", NULL, &t3842_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t3842_m22871_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t3842_m22867_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t3842_TI;
extern Il2CppType t1383_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m22867_MI = 
{
	"get_Item", NULL, &t3842_TI, &t1383_0_0_0, RuntimeInvoker_t14_t35, t3842_m22867_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1383_0_0_0;
static ParameterInfo t3842_m22868_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1383_0_0_0},
};
extern TypeInfo t3842_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22868_MI = 
{
	"set_Item", NULL, &t3842_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t3842_m22868_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3842_MIs[] =
{
	&m22869_MI,
	&m22870_MI,
	&m22871_MI,
	&m22867_MI,
	&m22868_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t3841_TI;
extern TypeInfo t3843_TI;
static TypeInfo* t3842_ITIs[] = 
{
	&t600_TI,
	&t3841_TI,
	&t3843_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3842_0_0_0;
extern Il2CppType t3842_1_0_0;
struct t3842;
extern TypeInfo t3842_TI;
extern Il2CppGenericClass t3842_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t3842_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t3842_MIs, t3842_PIs, NULL, NULL, NULL, NULL, NULL, &t3842_TI, t3842_ITIs, NULL, &t1409__CustomAttributeCache, &t3842_TI, &t3842_0_0_0, &t3842_1_0_0, NULL, &t3842_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t713_TI;

#include "t210.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Char>
extern MethodInfo m22872_MI;
static PropertyInfo t713____Current_PropertyInfo = 
{
	&t713_TI, "Current", &m22872_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t713_PIs[] =
{
	&t713____Current_PropertyInfo,
	NULL
};
extern TypeInfo t713_TI;
extern Il2CppType t210_0_0_0;
extern void* RuntimeInvoker_t210 (MethodInfo* method, void* obj, void** args);
MethodInfo m22872_MI = 
{
	"get_Current", NULL, &t713_TI, &t210_0_0_0, RuntimeInvoker_t210, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t713_MIs[] =
{
	&m22872_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t713_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t713_0_0_0;
extern Il2CppType t713_1_0_0;
struct t713;
extern TypeInfo t713_TI;
extern Il2CppGenericClass t713_GC;
TypeInfo t713_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t713_MIs, t713_PIs, NULL, NULL, NULL, NULL, NULL, &t713_TI, t713_ITIs, NULL, &EmptyCustomAttributesCache, &t713_TI, &t713_0_0_0, &t713_1_0_0, NULL, &t713_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t1673.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1673_TI;
#include "t1673MD.h"

extern TypeInfo t1673_TI;
extern TypeInfo t210_TI;
extern TypeInfo t1278_TI;
extern MethodInfo m8319_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m16757_MI;
struct t24;
 uint16_t m16757 (t24 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m16757_MI;


extern MethodInfo m8315_MI;
 void m8315 (t1673 * __this, t24 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m8316_MI;
 t14 * m8316 (t1673 * __this, MethodInfo* method){
	{
		uint16_t L_0 = m8319(__this, &m8319_MI);
		uint16_t L_1 = L_0;
		t14 * L_2 = Box(InitializedTypeInfo(&t210_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m8317_MI;
 void m8317 (t1673 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m8318_MI;
 bool m8318 (t1673 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		t24 * L_1 = (__this->f0);
		int32_t L_2 = m3737(L_1, &m3737_MI);
		__this->f1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->f1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->f1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->f1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
extern MethodInfo m8319_MI;
 uint16_t m8319 (t1673 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		t1278 * L_1 = (t1278 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1278_TI));
		m6925(L_1, (t33*) &_stringLiteral370, &m6925_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->f1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		t1278 * L_3 = (t1278 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1278_TI));
		m6925(L_3, (t33*) &_stringLiteral371, &m6925_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		t24 * L_4 = (__this->f0);
		t24 * L_5 = (__this->f0);
		int32_t L_6 = m3737(L_5, &m3737_MI);
		int32_t L_7 = (__this->f1);
		uint16_t L_8 = m16757(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m16757_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Char>
extern Il2CppType t24_0_0_1;
FieldInfo t1673_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t1673_TI, offsetof(t1673, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t1673_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t1673_TI, offsetof(t1673, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t1673_FIs[] =
{
	&t1673_f0_FieldInfo,
	&t1673_f1_FieldInfo,
	NULL
};
extern MethodInfo m8316_MI;
static PropertyInfo t1673____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1673_TI, "System.Collections.IEnumerator.Current", &m8316_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8319_MI;
static PropertyInfo t1673____Current_PropertyInfo = 
{
	&t1673_TI, "Current", &m8319_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1673_PIs[] =
{
	&t1673____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1673____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t1673_m8315_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t1673_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8315_MI = 
{
	".ctor", (methodPointerType)&m8315, &t1673_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1673_m8315_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1673_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8316_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8316, &t1673_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1673_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8317_MI = 
{
	"Dispose", (methodPointerType)&m8317, &t1673_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1673_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m8318_MI = 
{
	"MoveNext", (methodPointerType)&m8318, &t1673_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1673_TI;
extern Il2CppType t210_0_0_0;
extern void* RuntimeInvoker_t210 (MethodInfo* method, void* obj, void** args);
MethodInfo m8319_MI = 
{
	"get_Current", (methodPointerType)&m8319, &t1673_TI, &t210_0_0_0, RuntimeInvoker_t210, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1673_MIs[] =
{
	&m8315_MI,
	&m8316_MI,
	&m8317_MI,
	&m8318_MI,
	&m8319_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m8316_MI;
extern MethodInfo m8318_MI;
extern MethodInfo m8317_MI;
extern MethodInfo m8319_MI;
static MethodInfo* t1673_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m8316_MI,
	&m8318_MI,
	&m8317_MI,
	&m8319_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t713_TI;
static TypeInfo* t1673_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t713_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t713_TI;
static Il2CppInterfaceOffsetPair t1673_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t713_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1673_0_0_0;
extern Il2CppType t1673_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t1673_TI;
extern Il2CppGenericClass t1673_GC;
extern TypeInfo t24_TI;
TypeInfo t1673_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1673_MIs, t1673_PIs, t1673_FIs, NULL, &t122_TI, NULL, &t24_TI, &t1673_TI, t1673_ITIs, t1673_VT, &EmptyCustomAttributesCache, &t1673_TI, &t1673_0_0_0, &t1673_1_0_0, t1673_IOs, &t1673_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1673)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3844_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Char>
extern MethodInfo m22873_MI;
static PropertyInfo t3844____Count_PropertyInfo = 
{
	&t3844_TI, "Count", &m22873_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m22874_MI;
static PropertyInfo t3844____IsReadOnly_PropertyInfo = 
{
	&t3844_TI, "IsReadOnly", &m22874_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3844_PIs[] =
{
	&t3844____Count_PropertyInfo,
	&t3844____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t3844_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m22873_MI = 
{
	"get_Count", NULL, &t3844_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3844_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m22874_MI = 
{
	"get_IsReadOnly", NULL, &t3844_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t210_0_0_0;
static ParameterInfo t3844_m22875_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t210_0_0_0},
};
extern TypeInfo t3844_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t373 (MethodInfo* method, void* obj, void** args);
MethodInfo m22875_MI = 
{
	"Add", NULL, &t3844_TI, &t25_0_0_0, RuntimeInvoker_t25_t373, t3844_m22875_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3844_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m22876_MI = 
{
	"Clear", NULL, &t3844_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t210_0_0_0;
static ParameterInfo t3844_m22877_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t210_0_0_0},
};
extern TypeInfo t3844_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t373 (MethodInfo* method, void* obj, void** args);
MethodInfo m22877_MI = 
{
	"Contains", NULL, &t3844_TI, &t26_0_0_0, RuntimeInvoker_t26_t373, t3844_m22877_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t216_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t3844_m22878_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t216_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t3844_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m22878_MI = 
{
	"CopyTo", NULL, &t3844_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t3844_m22878_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t210_0_0_0;
static ParameterInfo t3844_m22879_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t210_0_0_0},
};
extern TypeInfo t3844_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t373 (MethodInfo* method, void* obj, void** args);
MethodInfo m22879_MI = 
{
	"Remove", NULL, &t3844_TI, &t26_0_0_0, RuntimeInvoker_t26_t373, t3844_m22879_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3844_MIs[] =
{
	&m22873_MI,
	&m22874_MI,
	&m22875_MI,
	&m22876_MI,
	&m22877_MI,
	&m22878_MI,
	&m22879_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t1375_TI;
static TypeInfo* t3844_ITIs[] = 
{
	&t600_TI,
	&t1375_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3844_0_0_0;
extern Il2CppType t3844_1_0_0;
struct t3844;
extern TypeInfo t3844_TI;
extern Il2CppGenericClass t3844_GC;
TypeInfo t3844_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t3844_MIs, t3844_PIs, NULL, NULL, NULL, NULL, NULL, &t3844_TI, t3844_ITIs, NULL, &EmptyCustomAttributesCache, &t3844_TI, &t3844_0_0_0, &t3844_1_0_0, NULL, &t3844_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1375_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Char>
extern TypeInfo t1375_TI;
extern Il2CppType t713_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22880_MI = 
{
	"GetEnumerator", NULL, &t1375_TI, &t713_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1375_MIs[] =
{
	&m22880_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t1375_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1375_0_0_0;
extern Il2CppType t1375_1_0_0;
struct t1375;
extern TypeInfo t1375_TI;
extern Il2CppGenericClass t1375_GC;
TypeInfo t1375_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t1375_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1375_TI, t1375_ITIs, NULL, &EmptyCustomAttributesCache, &t1375_TI, &t1375_0_0_0, &t1375_1_0_0, NULL, &t1375_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3845_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Char>
extern MethodInfo m22881_MI;
extern MethodInfo m22882_MI;
static PropertyInfo t3845____Item_PropertyInfo = 
{
	&t3845_TI, "Item", &m22881_MI, &m22882_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3845_PIs[] =
{
	&t3845____Item_PropertyInfo,
	NULL
};
extern Il2CppType t210_0_0_0;
static ParameterInfo t3845_m22883_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t210_0_0_0},
};
extern TypeInfo t3845_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t373 (MethodInfo* method, void* obj, void** args);
MethodInfo m22883_MI = 
{
	"IndexOf", NULL, &t3845_TI, &t35_0_0_0, RuntimeInvoker_t35_t373, t3845_m22883_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t210_0_0_0;
static ParameterInfo t3845_m22884_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t210_0_0_0},
};
extern TypeInfo t3845_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t373 (MethodInfo* method, void* obj, void** args);
MethodInfo m22884_MI = 
{
	"Insert", NULL, &t3845_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t373, t3845_m22884_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t3845_m22885_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t3845_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m22885_MI = 
{
	"RemoveAt", NULL, &t3845_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t3845_m22885_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t3845_m22881_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t3845_TI;
extern Il2CppType t210_0_0_0;
extern void* RuntimeInvoker_t210_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m22881_MI = 
{
	"get_Item", NULL, &t3845_TI, &t210_0_0_0, RuntimeInvoker_t210_t35, t3845_m22881_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t210_0_0_0;
static ParameterInfo t3845_m22882_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t210_0_0_0},
};
extern TypeInfo t3845_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t373 (MethodInfo* method, void* obj, void** args);
MethodInfo m22882_MI = 
{
	"set_Item", NULL, &t3845_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t373, t3845_m22882_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3845_MIs[] =
{
	&m22883_MI,
	&m22884_MI,
	&m22885_MI,
	&m22881_MI,
	&m22882_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t3844_TI;
extern TypeInfo t1375_TI;
static TypeInfo* t3845_ITIs[] = 
{
	&t600_TI,
	&t3844_TI,
	&t1375_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3845_0_0_0;
extern Il2CppType t3845_1_0_0;
struct t3845;
extern TypeInfo t3845_TI;
extern Il2CppGenericClass t3845_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t3845_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t3845_MIs, t3845_PIs, NULL, NULL, NULL, NULL, NULL, &t3845_TI, t3845_ITIs, NULL, &t1409__CustomAttributeCache, &t3845_TI, &t3845_0_0_0, &t3845_1_0_0, NULL, &t3845_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3846_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IComparable`1<System.Char>>
extern MethodInfo m22886_MI;
static PropertyInfo t3846____Count_PropertyInfo = 
{
	&t3846_TI, "Count", &m22886_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m22887_MI;
static PropertyInfo t3846____IsReadOnly_PropertyInfo = 
{
	&t3846_TI, "IsReadOnly", &m22887_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3846_PIs[] =
{
	&t3846____Count_PropertyInfo,
	&t3846____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t3846_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m22886_MI = 
{
	"get_Count", NULL, &t3846_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3846_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m22887_MI = 
{
	"get_IsReadOnly", NULL, &t3846_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1368_0_0_0;
static ParameterInfo t3846_m22888_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1368_0_0_0},
};
extern TypeInfo t3846_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22888_MI = 
{
	"Add", NULL, &t3846_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t3846_m22888_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3846_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m22889_MI = 
{
	"Clear", NULL, &t3846_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1368_0_0_0;
static ParameterInfo t3846_m22890_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1368_0_0_0},
};
extern TypeInfo t3846_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22890_MI = 
{
	"Contains", NULL, &t3846_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t3846_m22890_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2899_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t3846_m22891_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2899_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t3846_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m22891_MI = 
{
	"CopyTo", NULL, &t3846_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t3846_m22891_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1368_0_0_0;
static ParameterInfo t3846_m22892_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1368_0_0_0},
};
extern TypeInfo t3846_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22892_MI = 
{
	"Remove", NULL, &t3846_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t3846_m22892_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3846_MIs[] =
{
	&m22886_MI,
	&m22887_MI,
	&m22888_MI,
	&m22889_MI,
	&m22890_MI,
	&m22891_MI,
	&m22892_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t3848_TI;
static TypeInfo* t3846_ITIs[] = 
{
	&t600_TI,
	&t3848_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3846_0_0_0;
extern Il2CppType t3846_1_0_0;
struct t3846;
extern TypeInfo t3846_TI;
extern Il2CppGenericClass t3846_GC;
TypeInfo t3846_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t3846_MIs, t3846_PIs, NULL, NULL, NULL, NULL, NULL, &t3846_TI, t3846_ITIs, NULL, &EmptyCustomAttributesCache, &t3846_TI, &t3846_0_0_0, &t3846_1_0_0, NULL, &t3846_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3848_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.Char>>
extern TypeInfo t3848_TI;
extern Il2CppType t3286_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22893_MI = 
{
	"GetEnumerator", NULL, &t3848_TI, &t3286_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3848_MIs[] =
{
	&m22893_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t3848_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3848_0_0_0;
extern Il2CppType t3848_1_0_0;
struct t3848;
extern TypeInfo t3848_TI;
extern Il2CppGenericClass t3848_GC;
TypeInfo t3848_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t3848_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3848_TI, t3848_ITIs, NULL, &EmptyCustomAttributesCache, &t3848_TI, &t3848_0_0_0, &t3848_1_0_0, NULL, &t3848_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3286_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.Char>>
extern MethodInfo m22894_MI;
static PropertyInfo t3286____Current_PropertyInfo = 
{
	&t3286_TI, "Current", &m22894_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3286_PIs[] =
{
	&t3286____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3286_TI;
extern Il2CppType t1368_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22894_MI = 
{
	"get_Current", NULL, &t3286_TI, &t1368_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3286_MIs[] =
{
	&m22894_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t3286_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3286_0_0_0;
extern Il2CppType t3286_1_0_0;
struct t3286;
extern TypeInfo t3286_TI;
extern Il2CppGenericClass t3286_GC;
TypeInfo t3286_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3286_MIs, t3286_PIs, NULL, NULL, NULL, NULL, NULL, &t3286_TI, t3286_ITIs, NULL, &EmptyCustomAttributesCache, &t3286_TI, &t3286_0_0_0, &t3286_1_0_0, NULL, &t3286_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1368_TI;



// Metadata Definition System.IComparable`1<System.Char>
extern Il2CppType t210_0_0_0;
static ParameterInfo t1368_m22895_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t210_0_0_0},
};
extern TypeInfo t1368_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t373 (MethodInfo* method, void* obj, void** args);
MethodInfo m22895_MI = 
{
	"CompareTo", NULL, &t1368_TI, &t35_0_0_0, RuntimeInvoker_t35_t373, t1368_m22895_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1368_MIs[] =
{
	&m22895_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1368_0_0_0;
extern Il2CppType t1368_1_0_0;
struct t1368;
extern TypeInfo t1368_TI;
extern Il2CppGenericClass t1368_GC;
TypeInfo t1368_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t1368_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1368_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1368_TI, &t1368_0_0_0, &t1368_1_0_0, NULL, &t1368_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t1674.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1674_TI;
#include "t1674MD.h"

extern TypeInfo t1674_TI;
extern TypeInfo t1368_TI;
extern TypeInfo t1278_TI;
extern MethodInfo m8324_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m16768_MI;
struct t24;
#define m16768(__this, p0, method) (t14*)m16357_gshared((t24 *)__this, (int32_t)p0, method)
extern MethodInfo m16768_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.IComparable`1<System.Char>>
extern Il2CppType t24_0_0_1;
FieldInfo t1674_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t1674_TI, offsetof(t1674, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t1674_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t1674_TI, offsetof(t1674, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t1674_FIs[] =
{
	&t1674_f0_FieldInfo,
	&t1674_f1_FieldInfo,
	NULL
};
extern MethodInfo m8321_MI;
static PropertyInfo t1674____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1674_TI, "System.Collections.IEnumerator.Current", &m8321_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8324_MI;
static PropertyInfo t1674____Current_PropertyInfo = 
{
	&t1674_TI, "Current", &m8324_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1674_PIs[] =
{
	&t1674____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1674____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t1674_m8320_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t1674_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8320_MI = 
{
	".ctor", (methodPointerType)&m7877_gshared, &t1674_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1674_m8320_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1674_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8321_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7879_gshared, &t1674_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1674_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8322_MI = 
{
	"Dispose", (methodPointerType)&m7881_gshared, &t1674_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1674_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m8323_MI = 
{
	"MoveNext", (methodPointerType)&m7883_gshared, &t1674_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1674_TI;
extern Il2CppType t1368_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8324_MI = 
{
	"get_Current", (methodPointerType)&m7885_gshared, &t1674_TI, &t1368_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1674_MIs[] =
{
	&m8320_MI,
	&m8321_MI,
	&m8322_MI,
	&m8323_MI,
	&m8324_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m8321_MI;
extern MethodInfo m8323_MI;
extern MethodInfo m8322_MI;
extern MethodInfo m8324_MI;
static MethodInfo* t1674_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m8321_MI,
	&m8323_MI,
	&m8322_MI,
	&m8324_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3286_TI;
static TypeInfo* t1674_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t3286_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3286_TI;
static Il2CppInterfaceOffsetPair t1674_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t3286_TI, 7},
};
extern MethodInfo m8324_MI;
extern TypeInfo t1368_TI;
extern MethodInfo m16768_MI;
static void* t1674_RGCTXData[3] = 
{
	&m8324_MI,
	&t1368_TI,
	&m16768_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1674_0_0_0;
extern Il2CppType t1674_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t1674_TI;
extern Il2CppGenericClass t1674_GC;
extern TypeInfo t24_TI;
TypeInfo t1674_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1674_MIs, t1674_PIs, t1674_FIs, NULL, &t122_TI, NULL, &t24_TI, &t1674_TI, t1674_ITIs, t1674_VT, &EmptyCustomAttributesCache, &t1674_TI, &t1674_0_0_0, &t1674_1_0_0, t1674_IOs, &t1674_GC, NULL, NULL, NULL, t1674_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1674)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3847_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IComparable`1<System.Char>>
extern MethodInfo m22896_MI;
extern MethodInfo m22897_MI;
static PropertyInfo t3847____Item_PropertyInfo = 
{
	&t3847_TI, "Item", &m22896_MI, &m22897_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3847_PIs[] =
{
	&t3847____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1368_0_0_0;
static ParameterInfo t3847_m22898_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1368_0_0_0},
};
extern TypeInfo t3847_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22898_MI = 
{
	"IndexOf", NULL, &t3847_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t3847_m22898_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1368_0_0_0;
static ParameterInfo t3847_m22899_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1368_0_0_0},
};
extern TypeInfo t3847_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22899_MI = 
{
	"Insert", NULL, &t3847_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t3847_m22899_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t3847_m22900_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t3847_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m22900_MI = 
{
	"RemoveAt", NULL, &t3847_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t3847_m22900_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t3847_m22896_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t3847_TI;
extern Il2CppType t1368_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m22896_MI = 
{
	"get_Item", NULL, &t3847_TI, &t1368_0_0_0, RuntimeInvoker_t14_t35, t3847_m22896_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1368_0_0_0;
static ParameterInfo t3847_m22897_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1368_0_0_0},
};
extern TypeInfo t3847_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22897_MI = 
{
	"set_Item", NULL, &t3847_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t3847_m22897_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3847_MIs[] =
{
	&m22898_MI,
	&m22899_MI,
	&m22900_MI,
	&m22896_MI,
	&m22897_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t3846_TI;
extern TypeInfo t3848_TI;
static TypeInfo* t3847_ITIs[] = 
{
	&t600_TI,
	&t3846_TI,
	&t3848_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3847_0_0_0;
extern Il2CppType t3847_1_0_0;
struct t3847;
extern TypeInfo t3847_TI;
extern Il2CppGenericClass t3847_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t3847_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t3847_MIs, t3847_PIs, NULL, NULL, NULL, NULL, NULL, &t3847_TI, t3847_ITIs, NULL, &t1409__CustomAttributeCache, &t3847_TI, &t3847_0_0_0, &t3847_1_0_0, NULL, &t3847_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3849_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Char>>
extern MethodInfo m22901_MI;
static PropertyInfo t3849____Count_PropertyInfo = 
{
	&t3849_TI, "Count", &m22901_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m22902_MI;
static PropertyInfo t3849____IsReadOnly_PropertyInfo = 
{
	&t3849_TI, "IsReadOnly", &m22902_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3849_PIs[] =
{
	&t3849____Count_PropertyInfo,
	&t3849____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t3849_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m22901_MI = 
{
	"get_Count", NULL, &t3849_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3849_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m22902_MI = 
{
	"get_IsReadOnly", NULL, &t3849_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1369_0_0_0;
static ParameterInfo t3849_m22903_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1369_0_0_0},
};
extern TypeInfo t3849_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22903_MI = 
{
	"Add", NULL, &t3849_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t3849_m22903_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3849_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m22904_MI = 
{
	"Clear", NULL, &t3849_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1369_0_0_0;
static ParameterInfo t3849_m22905_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1369_0_0_0},
};
extern TypeInfo t3849_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22905_MI = 
{
	"Contains", NULL, &t3849_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t3849_m22905_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2900_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t3849_m22906_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2900_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t3849_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m22906_MI = 
{
	"CopyTo", NULL, &t3849_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t3849_m22906_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1369_0_0_0;
static ParameterInfo t3849_m22907_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1369_0_0_0},
};
extern TypeInfo t3849_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22907_MI = 
{
	"Remove", NULL, &t3849_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t3849_m22907_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3849_MIs[] =
{
	&m22901_MI,
	&m22902_MI,
	&m22903_MI,
	&m22904_MI,
	&m22905_MI,
	&m22906_MI,
	&m22907_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t3851_TI;
static TypeInfo* t3849_ITIs[] = 
{
	&t600_TI,
	&t3851_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3849_0_0_0;
extern Il2CppType t3849_1_0_0;
struct t3849;
extern TypeInfo t3849_TI;
extern Il2CppGenericClass t3849_GC;
TypeInfo t3849_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t3849_MIs, t3849_PIs, NULL, NULL, NULL, NULL, NULL, &t3849_TI, t3849_ITIs, NULL, &EmptyCustomAttributesCache, &t3849_TI, &t3849_0_0_0, &t3849_1_0_0, NULL, &t3849_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3851_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.Char>>
extern TypeInfo t3851_TI;
extern Il2CppType t3287_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22908_MI = 
{
	"GetEnumerator", NULL, &t3851_TI, &t3287_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3851_MIs[] =
{
	&m22908_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t3851_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3851_0_0_0;
extern Il2CppType t3851_1_0_0;
struct t3851;
extern TypeInfo t3851_TI;
extern Il2CppGenericClass t3851_GC;
TypeInfo t3851_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t3851_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3851_TI, t3851_ITIs, NULL, &EmptyCustomAttributesCache, &t3851_TI, &t3851_0_0_0, &t3851_1_0_0, NULL, &t3851_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3287_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.Char>>
extern MethodInfo m22909_MI;
static PropertyInfo t3287____Current_PropertyInfo = 
{
	&t3287_TI, "Current", &m22909_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3287_PIs[] =
{
	&t3287____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3287_TI;
extern Il2CppType t1369_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22909_MI = 
{
	"get_Current", NULL, &t3287_TI, &t1369_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3287_MIs[] =
{
	&m22909_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t3287_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3287_0_0_0;
extern Il2CppType t3287_1_0_0;
struct t3287;
extern TypeInfo t3287_TI;
extern Il2CppGenericClass t3287_GC;
TypeInfo t3287_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3287_MIs, t3287_PIs, NULL, NULL, NULL, NULL, NULL, &t3287_TI, t3287_ITIs, NULL, &EmptyCustomAttributesCache, &t3287_TI, &t3287_0_0_0, &t3287_1_0_0, NULL, &t3287_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1369_TI;



// Metadata Definition System.IEquatable`1<System.Char>
extern Il2CppType t210_0_0_0;
static ParameterInfo t1369_m22910_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t210_0_0_0},
};
extern TypeInfo t1369_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t373 (MethodInfo* method, void* obj, void** args);
MethodInfo m22910_MI = 
{
	"Equals", NULL, &t1369_TI, &t26_0_0_0, RuntimeInvoker_t26_t373, t1369_m22910_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1369_MIs[] =
{
	&m22910_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1369_0_0_0;
extern Il2CppType t1369_1_0_0;
struct t1369;
extern TypeInfo t1369_TI;
extern Il2CppGenericClass t1369_GC;
TypeInfo t1369_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t1369_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1369_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1369_TI, &t1369_0_0_0, &t1369_1_0_0, NULL, &t1369_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t1675.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1675_TI;
#include "t1675MD.h"

extern TypeInfo t1675_TI;
extern TypeInfo t1369_TI;
extern TypeInfo t1278_TI;
extern MethodInfo m8329_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m16779_MI;
struct t24;
#define m16779(__this, p0, method) (t14*)m16357_gshared((t24 *)__this, (int32_t)p0, method)
extern MethodInfo m16779_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.IEquatable`1<System.Char>>
extern Il2CppType t24_0_0_1;
FieldInfo t1675_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t1675_TI, offsetof(t1675, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t1675_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t1675_TI, offsetof(t1675, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t1675_FIs[] =
{
	&t1675_f0_FieldInfo,
	&t1675_f1_FieldInfo,
	NULL
};
extern MethodInfo m8326_MI;
static PropertyInfo t1675____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1675_TI, "System.Collections.IEnumerator.Current", &m8326_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8329_MI;
static PropertyInfo t1675____Current_PropertyInfo = 
{
	&t1675_TI, "Current", &m8329_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1675_PIs[] =
{
	&t1675____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1675____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t1675_m8325_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t1675_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8325_MI = 
{
	".ctor", (methodPointerType)&m7877_gshared, &t1675_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1675_m8325_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1675_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8326_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7879_gshared, &t1675_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1675_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8327_MI = 
{
	"Dispose", (methodPointerType)&m7881_gshared, &t1675_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1675_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m8328_MI = 
{
	"MoveNext", (methodPointerType)&m7883_gshared, &t1675_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1675_TI;
extern Il2CppType t1369_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8329_MI = 
{
	"get_Current", (methodPointerType)&m7885_gshared, &t1675_TI, &t1369_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1675_MIs[] =
{
	&m8325_MI,
	&m8326_MI,
	&m8327_MI,
	&m8328_MI,
	&m8329_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m8326_MI;
extern MethodInfo m8328_MI;
extern MethodInfo m8327_MI;
extern MethodInfo m8329_MI;
static MethodInfo* t1675_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m8326_MI,
	&m8328_MI,
	&m8327_MI,
	&m8329_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3287_TI;
static TypeInfo* t1675_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t3287_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3287_TI;
static Il2CppInterfaceOffsetPair t1675_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t3287_TI, 7},
};
extern MethodInfo m8329_MI;
extern TypeInfo t1369_TI;
extern MethodInfo m16779_MI;
static void* t1675_RGCTXData[3] = 
{
	&m8329_MI,
	&t1369_TI,
	&m16779_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1675_0_0_0;
extern Il2CppType t1675_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t1675_TI;
extern Il2CppGenericClass t1675_GC;
extern TypeInfo t24_TI;
TypeInfo t1675_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1675_MIs, t1675_PIs, t1675_FIs, NULL, &t122_TI, NULL, &t24_TI, &t1675_TI, t1675_ITIs, t1675_VT, &EmptyCustomAttributesCache, &t1675_TI, &t1675_0_0_0, &t1675_1_0_0, t1675_IOs, &t1675_GC, NULL, NULL, NULL, t1675_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1675)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3850_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IEquatable`1<System.Char>>
extern MethodInfo m22911_MI;
extern MethodInfo m22912_MI;
static PropertyInfo t3850____Item_PropertyInfo = 
{
	&t3850_TI, "Item", &m22911_MI, &m22912_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3850_PIs[] =
{
	&t3850____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1369_0_0_0;
static ParameterInfo t3850_m22913_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1369_0_0_0},
};
extern TypeInfo t3850_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22913_MI = 
{
	"IndexOf", NULL, &t3850_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t3850_m22913_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1369_0_0_0;
static ParameterInfo t3850_m22914_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1369_0_0_0},
};
extern TypeInfo t3850_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22914_MI = 
{
	"Insert", NULL, &t3850_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t3850_m22914_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t3850_m22915_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t3850_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m22915_MI = 
{
	"RemoveAt", NULL, &t3850_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t3850_m22915_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t3850_m22911_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t3850_TI;
extern Il2CppType t1369_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m22911_MI = 
{
	"get_Item", NULL, &t3850_TI, &t1369_0_0_0, RuntimeInvoker_t14_t35, t3850_m22911_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1369_0_0_0;
static ParameterInfo t3850_m22912_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1369_0_0_0},
};
extern TypeInfo t3850_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22912_MI = 
{
	"set_Item", NULL, &t3850_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t3850_m22912_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3850_MIs[] =
{
	&m22913_MI,
	&m22914_MI,
	&m22915_MI,
	&m22911_MI,
	&m22912_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t3849_TI;
extern TypeInfo t3851_TI;
static TypeInfo* t3850_ITIs[] = 
{
	&t600_TI,
	&t3849_TI,
	&t3851_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3850_0_0_0;
extern Il2CppType t3850_1_0_0;
struct t3850;
extern TypeInfo t3850_TI;
extern Il2CppGenericClass t3850_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t3850_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t3850_MIs, t3850_PIs, NULL, NULL, NULL, NULL, NULL, &t3850_TI, t3850_ITIs, NULL, &t1409__CustomAttributeCache, &t3850_TI, &t3850_0_0_0, &t3850_1_0_0, NULL, &t3850_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t1654.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1654_TI;
#include "t1654MD.h"

#include "t77.h"
#include "t76.h"


extern MethodInfo m8330_MI;
 void m8330_gshared (t1654 * __this, t14 * p0, t77 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m8331_MI;
 int32_t m8331_gshared (t1654 * __this, t14 * p0, t14 * p1, MethodInfo* method)
{
	typedef  int32_t (*FunctionPointerType) (t14 * __this, t14 * p0, t14 * p1, MethodInfo* method);
	if (__this->f9)
		m8331((t1654 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m8332_MI;
 t14 * m8332_gshared (t1654 * __this, t14 * p0, t14 * p1, t76 * p2, t14 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t14 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m8333_MI;
 int32_t m8333_gshared (t1654 * __this, t14 * p0, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Comparison`1<System.Object>
extern Il2CppType t14_0_0_0;
extern Il2CppType t77_0_0_0;
static ParameterInfo t1654_m8330_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t77_0_0_0},
};
extern TypeInfo t1654_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t77 (MethodInfo* method, void* obj, void** args);
MethodInfo m8330_MI = 
{
	".ctor", (methodPointerType)&m8330_gshared, &t1654_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t77, t1654_m8330_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t1654_m8331_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1654_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8331_MI = 
{
	"Invoke", (methodPointerType)&m8331_gshared, &t1654_TI, &t35_0_0_0, RuntimeInvoker_t35_t14_t14, t1654_m8331_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t14_0_0_0;
extern Il2CppType t76_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t1654_m8332_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t76_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1654_TI;
extern Il2CppType t75_0_0_0;
extern void* RuntimeInvoker_t14_t14_t14_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8332_MI = 
{
	"BeginInvoke", (methodPointerType)&m8332_gshared, &t1654_TI, &t75_0_0_0, RuntimeInvoker_t14_t14_t14_t14_t14, t1654_m8332_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t75_0_0_0;
static ParameterInfo t1654_m8333_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t75_0_0_0},
};
extern TypeInfo t1654_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8333_MI = 
{
	"EndInvoke", (methodPointerType)&m8333_gshared, &t1654_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t1654_m8333_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1654_MIs[] =
{
	&m8330_MI,
	&m8331_MI,
	&m8332_MI,
	&m8333_MI,
	NULL
};
extern MethodInfo m1719_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1720_MI;
extern MethodInfo m72_MI;
extern MethodInfo m1721_MI;
extern MethodInfo m1722_MI;
extern MethodInfo m1721_MI;
extern MethodInfo m1723_MI;
extern MethodInfo m1724_MI;
extern MethodInfo m1725_MI;
extern MethodInfo m8331_MI;
extern MethodInfo m8332_MI;
extern MethodInfo m8333_MI;
static MethodInfo* t1654_VT[] =
{
	&m1719_MI,
	&m50_MI,
	&m1720_MI,
	&m72_MI,
	&m1721_MI,
	&m1722_MI,
	&m1721_MI,
	&m1723_MI,
	&m1724_MI,
	&m1725_MI,
	&m8331_MI,
	&m8332_MI,
	&m8333_MI,
};
extern TypeInfo t374_TI;
extern TypeInfo t375_TI;
static Il2CppInterfaceOffsetPair t1654_IOs[] = 
{
	{ &t374_TI, 4},
	{ &t375_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1654_0_0_0;
extern Il2CppType t1654_1_0_0;
extern TypeInfo t211_TI;
struct t1654;
extern TypeInfo t1654_TI;
extern Il2CppGenericClass t1654_GC;
TypeInfo t1654_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparison`1", "System", t1654_MIs, NULL, NULL, NULL, &t211_TI, NULL, NULL, &t1654_TI, NULL, t1654_VT, &EmptyCustomAttributesCache, &t1654_TI, &t1654_0_0_0, &t1654_1_0_0, t1654_IOs, &t1654_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1654), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1647_TI;

#include "t60.h"
#include "UnityEngine.UI_ArrayTypes.h"


// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.BaseInputModule>
extern MethodInfo m22735_MI;
static PropertyInfo t1647____Count_PropertyInfo = 
{
	&t1647_TI, "Count", &m22735_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m22916_MI;
static PropertyInfo t1647____IsReadOnly_PropertyInfo = 
{
	&t1647_TI, "IsReadOnly", &m22916_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1647_PIs[] =
{
	&t1647____Count_PropertyInfo,
	&t1647____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t1647_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m22735_MI = 
{
	"get_Count", NULL, &t1647_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1647_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m22916_MI = 
{
	"get_IsReadOnly", NULL, &t1647_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t1647_m22917_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t1647_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22917_MI = 
{
	"Add", NULL, &t1647_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1647_m22917_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1647_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m22918_MI = 
{
	"Clear", NULL, &t1647_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t1647_m22919_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t1647_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22919_MI = 
{
	"Contains", NULL, &t1647_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1647_m22919_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1645_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t1647_m22736_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1645_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1647_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m22736_MI = 
{
	"CopyTo", NULL, &t1647_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t1647_m22736_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t1647_m22920_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t1647_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22920_MI = 
{
	"Remove", NULL, &t1647_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1647_m22920_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1647_MIs[] =
{
	&m22735_MI,
	&m22916_MI,
	&m22917_MI,
	&m22918_MI,
	&m22919_MI,
	&m22736_MI,
	&m22920_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t1648_TI;
static TypeInfo* t1647_ITIs[] = 
{
	&t600_TI,
	&t1648_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1647_0_0_0;
extern Il2CppType t1647_1_0_0;
struct t1647;
extern TypeInfo t1647_TI;
extern Il2CppGenericClass t1647_GC;
TypeInfo t1647_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t1647_MIs, t1647_PIs, NULL, NULL, NULL, NULL, NULL, &t1647_TI, t1647_ITIs, NULL, &EmptyCustomAttributesCache, &t1647_TI, &t1647_0_0_0, &t1647_1_0_0, NULL, &t1647_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1648_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.BaseInputModule>
extern TypeInfo t1648_TI;
extern Il2CppType t1646_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22737_MI = 
{
	"GetEnumerator", NULL, &t1648_TI, &t1646_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1648_MIs[] =
{
	&m22737_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t1648_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1648_0_0_0;
extern Il2CppType t1648_1_0_0;
struct t1648;
extern TypeInfo t1648_TI;
extern Il2CppGenericClass t1648_GC;
TypeInfo t1648_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t1648_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1648_TI, t1648_ITIs, NULL, &EmptyCustomAttributesCache, &t1648_TI, &t1648_0_0_0, &t1648_1_0_0, NULL, &t1648_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1646_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.BaseInputModule>
extern MethodInfo m22738_MI;
static PropertyInfo t1646____Current_PropertyInfo = 
{
	&t1646_TI, "Current", &m22738_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1646_PIs[] =
{
	&t1646____Current_PropertyInfo,
	NULL
};
extern TypeInfo t1646_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22738_MI = 
{
	"get_Current", NULL, &t1646_TI, &t60_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1646_MIs[] =
{
	&m22738_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t1646_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1646_0_0_0;
extern Il2CppType t1646_1_0_0;
struct t1646;
extern TypeInfo t1646_TI;
extern Il2CppGenericClass t1646_GC;
TypeInfo t1646_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t1646_MIs, t1646_PIs, NULL, NULL, NULL, NULL, NULL, &t1646_TI, t1646_ITIs, NULL, &EmptyCustomAttributesCache, &t1646_TI, &t1646_0_0_0, &t1646_1_0_0, NULL, &t1646_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t1676.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1676_TI;
#include "t1676MD.h"

extern TypeInfo t1676_TI;
extern TypeInfo t60_TI;
extern TypeInfo t1278_TI;
extern MethodInfo m8338_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m16797_MI;
struct t24;
#define m16797(__this, p0, method) (t60 *)m16357_gshared((t24 *)__this, (int32_t)p0, method)
extern MethodInfo m16797_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.EventSystems.BaseInputModule>
extern Il2CppType t24_0_0_1;
FieldInfo t1676_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t1676_TI, offsetof(t1676, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t1676_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t1676_TI, offsetof(t1676, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t1676_FIs[] =
{
	&t1676_f0_FieldInfo,
	&t1676_f1_FieldInfo,
	NULL
};
extern MethodInfo m8335_MI;
static PropertyInfo t1676____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1676_TI, "System.Collections.IEnumerator.Current", &m8335_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8338_MI;
static PropertyInfo t1676____Current_PropertyInfo = 
{
	&t1676_TI, "Current", &m8338_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1676_PIs[] =
{
	&t1676____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1676____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t1676_m8334_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t1676_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8334_MI = 
{
	".ctor", (methodPointerType)&m7877_gshared, &t1676_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1676_m8334_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1676_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8335_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7879_gshared, &t1676_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1676_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8336_MI = 
{
	"Dispose", (methodPointerType)&m7881_gshared, &t1676_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1676_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m8337_MI = 
{
	"MoveNext", (methodPointerType)&m7883_gshared, &t1676_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1676_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8338_MI = 
{
	"get_Current", (methodPointerType)&m7885_gshared, &t1676_TI, &t60_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1676_MIs[] =
{
	&m8334_MI,
	&m8335_MI,
	&m8336_MI,
	&m8337_MI,
	&m8338_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m8335_MI;
extern MethodInfo m8337_MI;
extern MethodInfo m8336_MI;
extern MethodInfo m8338_MI;
static MethodInfo* t1676_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m8335_MI,
	&m8337_MI,
	&m8336_MI,
	&m8338_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t1646_TI;
static TypeInfo* t1676_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t1646_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t1646_TI;
static Il2CppInterfaceOffsetPair t1676_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t1646_TI, 7},
};
extern MethodInfo m8338_MI;
extern TypeInfo t60_TI;
extern MethodInfo m16797_MI;
static void* t1676_RGCTXData[3] = 
{
	&m8338_MI,
	&t60_TI,
	&m16797_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1676_0_0_0;
extern Il2CppType t1676_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t1676_TI;
extern Il2CppGenericClass t1676_GC;
extern TypeInfo t24_TI;
TypeInfo t1676_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1676_MIs, t1676_PIs, t1676_FIs, NULL, &t122_TI, NULL, &t24_TI, &t1676_TI, t1676_ITIs, t1676_VT, &EmptyCustomAttributesCache, &t1676_TI, &t1676_0_0_0, &t1676_1_0_0, t1676_IOs, &t1676_GC, NULL, NULL, NULL, t1676_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1676)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1677_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.EventSystems.BaseInputModule>
extern MethodInfo m22921_MI;
extern MethodInfo m22922_MI;
static PropertyInfo t1677____Item_PropertyInfo = 
{
	&t1677_TI, "Item", &m22921_MI, &m22922_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1677_PIs[] =
{
	&t1677____Item_PropertyInfo,
	NULL
};
extern Il2CppType t60_0_0_0;
static ParameterInfo t1677_m22923_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t1677_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22923_MI = 
{
	"IndexOf", NULL, &t1677_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t1677_m22923_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t1677_m22924_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t1677_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22924_MI = 
{
	"Insert", NULL, &t1677_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t1677_m22924_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1677_m22925_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1677_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m22925_MI = 
{
	"RemoveAt", NULL, &t1677_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t1677_m22925_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1677_m22921_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1677_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m22921_MI = 
{
	"get_Item", NULL, &t1677_TI, &t60_0_0_0, RuntimeInvoker_t14_t35, t1677_m22921_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t1677_m22922_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t1677_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22922_MI = 
{
	"set_Item", NULL, &t1677_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t1677_m22922_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1677_MIs[] =
{
	&m22923_MI,
	&m22924_MI,
	&m22925_MI,
	&m22921_MI,
	&m22922_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t1647_TI;
extern TypeInfo t1648_TI;
static TypeInfo* t1677_ITIs[] = 
{
	&t600_TI,
	&t1647_TI,
	&t1648_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1677_0_0_0;
extern Il2CppType t1677_1_0_0;
struct t1677;
extern TypeInfo t1677_TI;
extern Il2CppGenericClass t1677_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t1677_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t1677_MIs, t1677_PIs, NULL, NULL, NULL, NULL, NULL, &t1677_TI, t1677_ITIs, NULL, &t1409__CustomAttributeCache, &t1677_TI, &t1677_0_0_0, &t1677_1_0_0, NULL, &t1677_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t1652.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1652_TI;
#include "t1652MD.h"

#include "t59.h"
#include "t31.h"
#include "t1295.h"
extern TypeInfo t1652_TI;
extern TypeInfo t1278_TI;
extern TypeInfo t60_TI;
extern TypeInfo t59_TI;
extern TypeInfo t31_TI;
extern TypeInfo t33_TI;
extern TypeInfo t1295_TI;
#include "t14MD.h"
#include "t31MD.h"
#include "t1295MD.h"
extern MethodInfo m8342_MI;
extern MethodInfo m6924_MI;
extern MethodInfo m1450_MI;
extern MethodInfo m3022_MI;
extern MethodInfo m7129_MI;
extern MethodInfo m6925_MI;


// Metadata Definition System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.BaseInputModule>
extern Il2CppType t59_0_0_1;
FieldInfo t1652_f0_FieldInfo = 
{
	"l", &t59_0_0_1, &t1652_TI, offsetof(t1652, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t1652_f1_FieldInfo = 
{
	"next", &t35_0_0_1, &t1652_TI, offsetof(t1652, f1) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t1652_f2_FieldInfo = 
{
	"ver", &t35_0_0_1, &t1652_TI, offsetof(t1652, f2) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t1652_f3_FieldInfo = 
{
	"current", &t60_0_0_1, &t1652_TI, offsetof(t1652, f3) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t1652_FIs[] =
{
	&t1652_f0_FieldInfo,
	&t1652_f1_FieldInfo,
	&t1652_f2_FieldInfo,
	&t1652_f3_FieldInfo,
	NULL
};
extern MethodInfo m8340_MI;
static PropertyInfo t1652____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1652_TI, "System.Collections.IEnumerator.Current", &m8340_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8344_MI;
static PropertyInfo t1652____Current_PropertyInfo = 
{
	&t1652_TI, "Current", &m8344_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1652_PIs[] =
{
	&t1652____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1652____Current_PropertyInfo,
	NULL
};
extern Il2CppType t59_0_0_0;
static ParameterInfo t1652_m8339_ParameterInfos[] = 
{
	{"l", 0, 134217728, &EmptyCustomAttributesCache, &t59_0_0_0},
};
extern TypeInfo t1652_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8339_MI = 
{
	".ctor", (methodPointerType)&m8180_gshared, &t1652_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1652_m8339_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1652_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8340_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8181_gshared, &t1652_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1652_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8341_MI = 
{
	"Dispose", (methodPointerType)&m8182_gshared, &t1652_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1652_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8342_MI = 
{
	"VerifyState", (methodPointerType)&m8183_gshared, &t1652_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1652_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m8343_MI = 
{
	"MoveNext", (methodPointerType)&m8184_gshared, &t1652_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1652_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8344_MI = 
{
	"get_Current", (methodPointerType)&m8185_gshared, &t1652_TI, &t60_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1652_MIs[] =
{
	&m8339_MI,
	&m8340_MI,
	&m8341_MI,
	&m8342_MI,
	&m8343_MI,
	&m8344_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m8340_MI;
extern MethodInfo m8343_MI;
extern MethodInfo m8341_MI;
extern MethodInfo m8344_MI;
static MethodInfo* t1652_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m8340_MI,
	&m8343_MI,
	&m8341_MI,
	&m8344_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t1646_TI;
static TypeInfo* t1652_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t1646_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t1646_TI;
static Il2CppInterfaceOffsetPair t1652_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t1646_TI, 7},
};
extern MethodInfo m8342_MI;
extern TypeInfo t60_TI;
extern TypeInfo t1652_TI;
static void* t1652_RGCTXData[3] = 
{
	&m8342_MI,
	&t60_TI,
	&t1652_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1652_0_0_0;
extern Il2CppType t1652_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t1652_TI;
extern Il2CppGenericClass t1652_GC;
extern TypeInfo t848_TI;
TypeInfo t1652_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t1652_MIs, t1652_PIs, t1652_FIs, NULL, &t122_TI, NULL, &t848_TI, &t1652_TI, t1652_ITIs, t1652_VT, &EmptyCustomAttributesCache, &t1652_TI, &t1652_0_0_0, &t1652_1_0_0, t1652_IOs, &t1652_GC, NULL, NULL, NULL, t1652_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1652)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 4, 0, 0, 8, 3, 3};
#include "t1649.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1649_TI;
#include "t1649MD.h"

#include "t345.h"
#include "t338.h"
extern TypeInfo t1649_TI;
extern TypeInfo t60_TI;
extern TypeInfo t35_TI;
extern TypeInfo t345_TI;
extern TypeInfo t1677_TI;
extern TypeInfo t1647_TI;
extern TypeInfo t338_TI;
extern TypeInfo t651_TI;
extern TypeInfo t25_TI;
extern TypeInfo t24_TI;
extern TypeInfo t600_TI;
extern TypeInfo t36_TI;
extern TypeInfo t26_TI;
extern TypeInfo t1645_TI;
extern TypeInfo t1648_TI;
extern TypeInfo t1646_TI;
#include "t345MD.h"
#include "t338MD.h"
#include "t1678MD.h"
extern MethodInfo m8374_MI;
extern MethodInfo m1532_MI;
extern MethodInfo m22921_MI;
extern MethodInfo m22735_MI;
extern MethodInfo m73_MI;
extern MethodInfo m2974_MI;
extern MethodInfo m7416_MI;
extern MethodInfo m7325_MI;
extern MethodInfo m8406_MI;
extern MethodInfo m22919_MI;
extern MethodInfo m22923_MI;
extern MethodInfo m22736_MI;
extern MethodInfo m22737_MI;


// Metadata Definition System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseInputModule>
extern Il2CppType t1677_0_0_1;
FieldInfo t1649_f0_FieldInfo = 
{
	"list", &t1677_0_0_1, &t1649_TI, offsetof(t1649, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1649_FIs[] =
{
	&t1649_f0_FieldInfo,
	NULL
};
extern MethodInfo m8351_MI;
extern MethodInfo m8352_MI;
static PropertyInfo t1649____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo = 
{
	&t1649_TI, "System.Collections.Generic.IList<T>.Item", &m8351_MI, &m8352_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8353_MI;
static PropertyInfo t1649____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t1649_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m8353_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8363_MI;
static PropertyInfo t1649____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t1649_TI, "System.Collections.ICollection.IsSynchronized", &m8363_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8364_MI;
static PropertyInfo t1649____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t1649_TI, "System.Collections.ICollection.SyncRoot", &m8364_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8365_MI;
static PropertyInfo t1649____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t1649_TI, "System.Collections.IList.IsFixedSize", &m8365_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8366_MI;
static PropertyInfo t1649____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t1649_TI, "System.Collections.IList.IsReadOnly", &m8366_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8367_MI;
extern MethodInfo m8368_MI;
static PropertyInfo t1649____System_Collections_IList_Item_PropertyInfo = 
{
	&t1649_TI, "System.Collections.IList.Item", &m8367_MI, &m8368_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8373_MI;
static PropertyInfo t1649____Count_PropertyInfo = 
{
	&t1649_TI, "Count", &m8373_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8374_MI;
static PropertyInfo t1649____Item_PropertyInfo = 
{
	&t1649_TI, "Item", &m8374_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1649_PIs[] =
{
	&t1649____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo,
	&t1649____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t1649____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t1649____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t1649____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t1649____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t1649____System_Collections_IList_Item_PropertyInfo,
	&t1649____Count_PropertyInfo,
	&t1649____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1677_0_0_0;
static ParameterInfo t1649_m8345_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t1677_0_0_0},
};
extern TypeInfo t1649_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8345_MI = 
{
	".ctor", (methodPointerType)&m8186_gshared, &t1649_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1649_m8345_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t1649_m8346_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t1649_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8346_MI = 
{
	"System.Collections.Generic.ICollection<T>.Add", (methodPointerType)&m8187_gshared, &t1649_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1649_m8346_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1649_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8347_MI = 
{
	"System.Collections.Generic.ICollection<T>.Clear", (methodPointerType)&m8188_gshared, &t1649_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 481, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t1649_m8348_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t1649_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8348_MI = 
{
	"System.Collections.Generic.IList<T>.Insert", (methodPointerType)&m8189_gshared, &t1649_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t1649_m8348_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t1649_m8349_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t1649_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8349_MI = 
{
	"System.Collections.Generic.ICollection<T>.Remove", (methodPointerType)&m8190_gshared, &t1649_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1649_m8349_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1649_m8350_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1649_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m8350_MI = 
{
	"System.Collections.Generic.IList<T>.RemoveAt", (methodPointerType)&m8191_gshared, &t1649_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t1649_m8350_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1649_m8351_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1649_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m8351_MI = 
{
	"System.Collections.Generic.IList<T>.get_Item", (methodPointerType)&m8192_gshared, &t1649_TI, &t60_0_0_0, RuntimeInvoker_t14_t35, t1649_m8351_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t1649_m8352_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t1649_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8352_MI = 
{
	"System.Collections.Generic.IList<T>.set_Item", (methodPointerType)&m8193_gshared, &t1649_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t1649_m8352_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1649_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m8353_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m8194_gshared, &t1649_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t24_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t1649_m8354_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1649_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m8354_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m8195_gshared, &t1649_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t1649_m8354_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1649_TI;
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8355_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8196_gshared, &t1649_TI, &t36_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1649_m8356_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1649_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8356_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m8197_gshared, &t1649_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t1649_m8356_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1649_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8357_MI = 
{
	"System.Collections.IList.Clear", (methodPointerType)&m8198_gshared, &t1649_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 481, 0, 14, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1649_m8358_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1649_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8358_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m8199_gshared, &t1649_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1649_m8358_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1649_m8359_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1649_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8359_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m8200_gshared, &t1649_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t1649_m8359_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t1649_m8360_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1649_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8360_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m8201_gshared, &t1649_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t1649_m8360_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1649_m8361_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1649_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8361_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m8202_gshared, &t1649_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1649_m8361_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1649_m8362_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1649_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m8362_MI = 
{
	"System.Collections.IList.RemoveAt", (methodPointerType)&m8203_gshared, &t1649_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t1649_m8362_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 19, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1649_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m8363_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m8204_gshared, &t1649_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1649_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8364_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m8205_gshared, &t1649_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1649_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m8365_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m8206_gshared, &t1649_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1649_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m8366_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m8207_gshared, &t1649_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1649_m8367_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1649_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m8367_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m8208_gshared, &t1649_TI, &t14_0_0_0, RuntimeInvoker_t14_t35, t1649_m8367_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t1649_m8368_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1649_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8368_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m8209_gshared, &t1649_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t1649_m8368_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t1649_m8369_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t1649_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8369_MI = 
{
	"Contains", (methodPointerType)&m8210_gshared, &t1649_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1649_m8369_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1645_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t1649_m8370_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1645_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1649_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m8370_MI = 
{
	"CopyTo", (methodPointerType)&m8211_gshared, &t1649_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t1649_m8370_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1649_TI;
extern Il2CppType t1646_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8371_MI = 
{
	"GetEnumerator", (methodPointerType)&m8212_gshared, &t1649_TI, &t1646_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t1649_m8372_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t1649_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8372_MI = 
{
	"IndexOf", (methodPointerType)&m8213_gshared, &t1649_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t1649_m8372_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1649_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m8373_MI = 
{
	"get_Count", (methodPointerType)&m8214_gshared, &t1649_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1649_m8374_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1649_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m8374_MI = 
{
	"get_Item", (methodPointerType)&m8215_gshared, &t1649_TI, &t60_0_0_0, RuntimeInvoker_t14_t35, t1649_m8374_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 33, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1649_MIs[] =
{
	&m8345_MI,
	&m8346_MI,
	&m8347_MI,
	&m8348_MI,
	&m8349_MI,
	&m8350_MI,
	&m8351_MI,
	&m8352_MI,
	&m8353_MI,
	&m8354_MI,
	&m8355_MI,
	&m8356_MI,
	&m8357_MI,
	&m8358_MI,
	&m8359_MI,
	&m8360_MI,
	&m8361_MI,
	&m8362_MI,
	&m8363_MI,
	&m8364_MI,
	&m8365_MI,
	&m8366_MI,
	&m8367_MI,
	&m8368_MI,
	&m8369_MI,
	&m8370_MI,
	&m8371_MI,
	&m8372_MI,
	&m8373_MI,
	&m8374_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m8355_MI;
extern MethodInfo m8373_MI;
extern MethodInfo m8363_MI;
extern MethodInfo m8364_MI;
extern MethodInfo m8354_MI;
extern MethodInfo m8365_MI;
extern MethodInfo m8366_MI;
extern MethodInfo m8367_MI;
extern MethodInfo m8368_MI;
extern MethodInfo m8356_MI;
extern MethodInfo m8357_MI;
extern MethodInfo m8358_MI;
extern MethodInfo m8359_MI;
extern MethodInfo m8360_MI;
extern MethodInfo m8361_MI;
extern MethodInfo m8362_MI;
extern MethodInfo m8373_MI;
extern MethodInfo m8353_MI;
extern MethodInfo m8346_MI;
extern MethodInfo m8347_MI;
extern MethodInfo m8369_MI;
extern MethodInfo m8370_MI;
extern MethodInfo m8349_MI;
extern MethodInfo m8372_MI;
extern MethodInfo m8348_MI;
extern MethodInfo m8350_MI;
extern MethodInfo m8351_MI;
extern MethodInfo m8352_MI;
extern MethodInfo m8371_MI;
extern MethodInfo m8374_MI;
static MethodInfo* t1649_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m8355_MI,
	&m8373_MI,
	&m8363_MI,
	&m8364_MI,
	&m8354_MI,
	&m8365_MI,
	&m8366_MI,
	&m8367_MI,
	&m8368_MI,
	&m8356_MI,
	&m8357_MI,
	&m8358_MI,
	&m8359_MI,
	&m8360_MI,
	&m8361_MI,
	&m8362_MI,
	&m8373_MI,
	&m8353_MI,
	&m8346_MI,
	&m8347_MI,
	&m8369_MI,
	&m8370_MI,
	&m8349_MI,
	&m8372_MI,
	&m8348_MI,
	&m8350_MI,
	&m8351_MI,
	&m8352_MI,
	&m8371_MI,
	&m8374_MI,
};
extern TypeInfo t600_TI;
extern TypeInfo t651_TI;
extern TypeInfo t1023_TI;
extern TypeInfo t1647_TI;
extern TypeInfo t1677_TI;
extern TypeInfo t1648_TI;
static TypeInfo* t1649_ITIs[] = 
{
	&t600_TI,
	&t651_TI,
	&t1023_TI,
	&t1647_TI,
	&t1677_TI,
	&t1648_TI,
};
extern TypeInfo t600_TI;
extern TypeInfo t651_TI;
extern TypeInfo t1023_TI;
extern TypeInfo t1647_TI;
extern TypeInfo t1677_TI;
extern TypeInfo t1648_TI;
static Il2CppInterfaceOffsetPair t1649_IOs[] = 
{
	{ &t600_TI, 4},
	{ &t651_TI, 5},
	{ &t1023_TI, 9},
	{ &t1647_TI, 20},
	{ &t1677_TI, 27},
	{ &t1648_TI, 32},
};
extern MethodInfo m8374_MI;
extern MethodInfo m8406_MI;
extern TypeInfo t60_TI;
extern MethodInfo m22919_MI;
extern MethodInfo m22923_MI;
extern MethodInfo m22921_MI;
extern MethodInfo m22736_MI;
extern MethodInfo m22737_MI;
extern MethodInfo m22735_MI;
static void* t1649_RGCTXData[9] = 
{
	&m8374_MI,
	&m8406_MI,
	&t60_TI,
	&m22919_MI,
	&m22923_MI,
	&m22921_MI,
	&m22736_MI,
	&m22737_MI,
	&m22735_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1649_0_0_0;
extern Il2CppType t1649_1_0_0;
extern TypeInfo t14_TI;
struct t1649;
extern TypeInfo t1649_TI;
extern Il2CppGenericClass t1649_GC;
extern CustomAttributesCache t850__CustomAttributeCache;
TypeInfo t1649_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ReadOnlyCollection`1", "System.Collections.ObjectModel", t1649_MIs, t1649_PIs, t1649_FIs, NULL, &t14_TI, NULL, NULL, &t1649_TI, t1649_ITIs, t1649_VT, &t850__CustomAttributeCache, &t1649_TI, &t1649_0_0_0, &t1649_1_0_0, t1649_IOs, &t1649_GC, NULL, NULL, NULL, t1649_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1649), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 30, 9, 1, 0, 0, 34, 6, 6};
#include "t1678.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1678_TI;

#include "t32.h"
#include "t319.h"
extern TypeInfo t1678_TI;
extern TypeInfo t1647_TI;
extern TypeInfo t26_TI;
extern TypeInfo t1677_TI;
extern TypeInfo t60_TI;
extern TypeInfo t35_TI;
extern TypeInfo t25_TI;
extern TypeInfo t59_TI;
extern TypeInfo t651_TI;
extern TypeInfo t14_TI;
extern TypeInfo t24_TI;
extern TypeInfo t1648_TI;
extern TypeInfo t1646_TI;
extern TypeInfo t1645_TI;
extern TypeInfo t31_TI;
extern TypeInfo t319_TI;
extern TypeInfo t345_TI;
extern TypeInfo t1023_TI;
#include "t59MD.h"
#include "t319MD.h"
extern Il2CppType t60_0_0_0;
extern MethodInfo m22916_MI;
extern MethodInfo m8409_MI;
extern MethodInfo m8410_MI;
extern MethodInfo m22921_MI;
extern MethodInfo m8407_MI;
extern MethodInfo m8405_MI;
extern MethodInfo m22735_MI;
extern MethodInfo m73_MI;
extern MethodInfo m1330_MI;
extern MethodInfo m7415_MI;
extern MethodInfo m7416_MI;
extern MethodInfo m22737_MI;
extern MethodInfo m8398_MI;
extern MethodInfo m8406_MI;
extern MethodInfo m22919_MI;
extern MethodInfo m22923_MI;
extern MethodInfo m8408_MI;
extern MethodInfo m8396_MI;
extern MethodInfo m8401_MI;
extern MethodInfo m8392_MI;
extern MethodInfo m22918_MI;
extern MethodInfo m22736_MI;
extern MethodInfo m22924_MI;
extern MethodInfo m22925_MI;
extern MethodInfo m22922_MI;
extern MethodInfo m1571_MI;
extern MethodInfo m3841_MI;
extern MethodInfo m1959_MI;
extern MethodInfo m1532_MI;
extern MethodInfo m7414_MI;
extern MethodInfo m7417_MI;


// Metadata Definition System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseInputModule>
extern Il2CppType t1677_0_0_1;
FieldInfo t1678_f0_FieldInfo = 
{
	"list", &t1677_0_0_1, &t1678_TI, offsetof(t1678, f0), &EmptyCustomAttributesCache};
extern Il2CppType t14_0_0_1;
FieldInfo t1678_f1_FieldInfo = 
{
	"syncRoot", &t14_0_0_1, &t1678_TI, offsetof(t1678, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1678_FIs[] =
{
	&t1678_f0_FieldInfo,
	&t1678_f1_FieldInfo,
	NULL
};
extern MethodInfo m8376_MI;
static PropertyInfo t1678____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t1678_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m8376_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8384_MI;
static PropertyInfo t1678____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t1678_TI, "System.Collections.ICollection.IsSynchronized", &m8384_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8385_MI;
static PropertyInfo t1678____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t1678_TI, "System.Collections.ICollection.SyncRoot", &m8385_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8386_MI;
static PropertyInfo t1678____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t1678_TI, "System.Collections.IList.IsFixedSize", &m8386_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8387_MI;
static PropertyInfo t1678____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t1678_TI, "System.Collections.IList.IsReadOnly", &m8387_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8388_MI;
extern MethodInfo m8389_MI;
static PropertyInfo t1678____System_Collections_IList_Item_PropertyInfo = 
{
	&t1678_TI, "System.Collections.IList.Item", &m8388_MI, &m8389_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8402_MI;
static PropertyInfo t1678____Count_PropertyInfo = 
{
	&t1678_TI, "Count", &m8402_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8403_MI;
extern MethodInfo m8404_MI;
static PropertyInfo t1678____Item_PropertyInfo = 
{
	&t1678_TI, "Item", &m8403_MI, &m8404_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1678_PIs[] =
{
	&t1678____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t1678____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t1678____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t1678____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t1678____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t1678____System_Collections_IList_Item_PropertyInfo,
	&t1678____Count_PropertyInfo,
	&t1678____Item_PropertyInfo,
	NULL
};
extern TypeInfo t1678_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8375_MI = 
{
	".ctor", (methodPointerType)&m8216_gshared, &t1678_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1678_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m8376_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m8217_gshared, &t1678_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t24_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t1678_m8377_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1678_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m8377_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m8218_gshared, &t1678_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t1678_m8377_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1678_TI;
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8378_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8219_gshared, &t1678_TI, &t36_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1678_m8379_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1678_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8379_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m8220_gshared, &t1678_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t1678_m8379_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1678_m8380_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1678_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8380_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m8221_gshared, &t1678_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1678_m8380_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1678_m8381_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1678_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8381_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m8222_gshared, &t1678_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t1678_m8381_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t1678_m8382_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1678_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8382_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m8223_gshared, &t1678_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t1678_m8382_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1678_m8383_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1678_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8383_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m8224_gshared, &t1678_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1678_m8383_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1678_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m8384_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m8225_gshared, &t1678_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1678_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8385_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m8226_gshared, &t1678_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1678_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m8386_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m8227_gshared, &t1678_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1678_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m8387_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m8228_gshared, &t1678_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1678_m8388_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1678_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m8388_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m8229_gshared, &t1678_TI, &t14_0_0_0, RuntimeInvoker_t14_t35, t1678_m8388_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t1678_m8389_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1678_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8389_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m8230_gshared, &t1678_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t1678_m8389_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t1678_m8390_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t1678_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8390_MI = 
{
	"Add", (methodPointerType)&m8231_gshared, &t1678_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1678_m8390_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1678_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8391_MI = 
{
	"Clear", (methodPointerType)&m8232_gshared, &t1678_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1678_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8392_MI = 
{
	"ClearItems", (methodPointerType)&m8233_gshared, &t1678_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 452, 0, 33, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t1678_m8393_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t1678_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8393_MI = 
{
	"Contains", (methodPointerType)&m8234_gshared, &t1678_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1678_m8393_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1645_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t1678_m8394_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1645_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1678_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m8394_MI = 
{
	"CopyTo", (methodPointerType)&m8235_gshared, &t1678_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t1678_m8394_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1678_TI;
extern Il2CppType t1646_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8395_MI = 
{
	"GetEnumerator", (methodPointerType)&m8236_gshared, &t1678_TI, &t1646_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t1678_m8396_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t1678_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8396_MI = 
{
	"IndexOf", (methodPointerType)&m8237_gshared, &t1678_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t1678_m8396_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t1678_m8397_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t1678_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8397_MI = 
{
	"Insert", (methodPointerType)&m8238_gshared, &t1678_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t1678_m8397_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t1678_m8398_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t1678_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8398_MI = 
{
	"InsertItem", (methodPointerType)&m8239_gshared, &t1678_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t1678_m8398_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 34, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t1678_m8399_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t1678_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8399_MI = 
{
	"Remove", (methodPointerType)&m8240_gshared, &t1678_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1678_m8399_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1678_m8400_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1678_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m8400_MI = 
{
	"RemoveAt", (methodPointerType)&m8241_gshared, &t1678_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t1678_m8400_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1678_m8401_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1678_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m8401_MI = 
{
	"RemoveItem", (methodPointerType)&m8242_gshared, &t1678_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t1678_m8401_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 35, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1678_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m8402_MI = 
{
	"get_Count", (methodPointerType)&m8243_gshared, &t1678_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1678_m8403_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1678_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m8403_MI = 
{
	"get_Item", (methodPointerType)&m8244_gshared, &t1678_TI, &t60_0_0_0, RuntimeInvoker_t14_t35, t1678_m8403_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t1678_m8404_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t1678_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8404_MI = 
{
	"set_Item", (methodPointerType)&m8245_gshared, &t1678_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t1678_m8404_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t1678_m8405_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t1678_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8405_MI = 
{
	"SetItem", (methodPointerType)&m8246_gshared, &t1678_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t1678_m8405_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 36, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1678_m8406_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1678_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8406_MI = 
{
	"IsValidItem", (methodPointerType)&m8247_gshared, &t1678_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1678_m8406_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1678_m8407_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1678_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8407_MI = 
{
	"ConvertItem", (methodPointerType)&m8248_gshared, &t1678_TI, &t60_0_0_0, RuntimeInvoker_t14_t14, t1678_m8407_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1677_0_0_0;
static ParameterInfo t1678_m8408_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t1677_0_0_0},
};
extern TypeInfo t1678_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8408_MI = 
{
	"CheckWritable", (methodPointerType)&m8249_gshared, &t1678_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1678_m8408_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1677_0_0_0;
static ParameterInfo t1678_m8409_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t1677_0_0_0},
};
extern TypeInfo t1678_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8409_MI = 
{
	"IsSynchronized", (methodPointerType)&m8250_gshared, &t1678_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1678_m8409_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1677_0_0_0;
static ParameterInfo t1678_m8410_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t1677_0_0_0},
};
extern TypeInfo t1678_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8410_MI = 
{
	"IsFixedSize", (methodPointerType)&m8251_gshared, &t1678_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1678_m8410_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1678_MIs[] =
{
	&m8375_MI,
	&m8376_MI,
	&m8377_MI,
	&m8378_MI,
	&m8379_MI,
	&m8380_MI,
	&m8381_MI,
	&m8382_MI,
	&m8383_MI,
	&m8384_MI,
	&m8385_MI,
	&m8386_MI,
	&m8387_MI,
	&m8388_MI,
	&m8389_MI,
	&m8390_MI,
	&m8391_MI,
	&m8392_MI,
	&m8393_MI,
	&m8394_MI,
	&m8395_MI,
	&m8396_MI,
	&m8397_MI,
	&m8398_MI,
	&m8399_MI,
	&m8400_MI,
	&m8401_MI,
	&m8402_MI,
	&m8403_MI,
	&m8404_MI,
	&m8405_MI,
	&m8406_MI,
	&m8407_MI,
	&m8408_MI,
	&m8409_MI,
	&m8410_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m8378_MI;
extern MethodInfo m8402_MI;
extern MethodInfo m8384_MI;
extern MethodInfo m8385_MI;
extern MethodInfo m8377_MI;
extern MethodInfo m8386_MI;
extern MethodInfo m8387_MI;
extern MethodInfo m8388_MI;
extern MethodInfo m8389_MI;
extern MethodInfo m8379_MI;
extern MethodInfo m8391_MI;
extern MethodInfo m8380_MI;
extern MethodInfo m8381_MI;
extern MethodInfo m8382_MI;
extern MethodInfo m8383_MI;
extern MethodInfo m8400_MI;
extern MethodInfo m8402_MI;
extern MethodInfo m8376_MI;
extern MethodInfo m8390_MI;
extern MethodInfo m8391_MI;
extern MethodInfo m8393_MI;
extern MethodInfo m8394_MI;
extern MethodInfo m8399_MI;
extern MethodInfo m8396_MI;
extern MethodInfo m8397_MI;
extern MethodInfo m8400_MI;
extern MethodInfo m8403_MI;
extern MethodInfo m8404_MI;
extern MethodInfo m8395_MI;
extern MethodInfo m8392_MI;
extern MethodInfo m8398_MI;
extern MethodInfo m8401_MI;
extern MethodInfo m8405_MI;
static MethodInfo* t1678_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m8378_MI,
	&m8402_MI,
	&m8384_MI,
	&m8385_MI,
	&m8377_MI,
	&m8386_MI,
	&m8387_MI,
	&m8388_MI,
	&m8389_MI,
	&m8379_MI,
	&m8391_MI,
	&m8380_MI,
	&m8381_MI,
	&m8382_MI,
	&m8383_MI,
	&m8400_MI,
	&m8402_MI,
	&m8376_MI,
	&m8390_MI,
	&m8391_MI,
	&m8393_MI,
	&m8394_MI,
	&m8399_MI,
	&m8396_MI,
	&m8397_MI,
	&m8400_MI,
	&m8403_MI,
	&m8404_MI,
	&m8395_MI,
	&m8392_MI,
	&m8398_MI,
	&m8401_MI,
	&m8405_MI,
};
extern TypeInfo t600_TI;
extern TypeInfo t651_TI;
extern TypeInfo t1023_TI;
extern TypeInfo t1647_TI;
extern TypeInfo t1677_TI;
extern TypeInfo t1648_TI;
static TypeInfo* t1678_ITIs[] = 
{
	&t600_TI,
	&t651_TI,
	&t1023_TI,
	&t1647_TI,
	&t1677_TI,
	&t1648_TI,
};
extern TypeInfo t600_TI;
extern TypeInfo t651_TI;
extern TypeInfo t1023_TI;
extern TypeInfo t1647_TI;
extern TypeInfo t1677_TI;
extern TypeInfo t1648_TI;
static Il2CppInterfaceOffsetPair t1678_IOs[] = 
{
	{ &t600_TI, 4},
	{ &t651_TI, 5},
	{ &t1023_TI, 9},
	{ &t1647_TI, 20},
	{ &t1677_TI, 27},
	{ &t1648_TI, 32},
};
extern TypeInfo t59_TI;
extern MethodInfo m1330_MI;
extern MethodInfo m22916_MI;
extern MethodInfo m22737_MI;
extern MethodInfo m22735_MI;
extern MethodInfo m8407_MI;
extern MethodInfo m8398_MI;
extern MethodInfo m8406_MI;
extern TypeInfo t60_TI;
extern MethodInfo m22919_MI;
extern MethodInfo m22923_MI;
extern MethodInfo m8408_MI;
extern MethodInfo m8396_MI;
extern MethodInfo m8401_MI;
extern MethodInfo m8409_MI;
extern MethodInfo m8410_MI;
extern MethodInfo m22921_MI;
extern MethodInfo m8405_MI;
extern MethodInfo m8392_MI;
extern MethodInfo m22918_MI;
extern MethodInfo m22736_MI;
extern MethodInfo m22924_MI;
extern MethodInfo m22925_MI;
extern MethodInfo m22922_MI;
extern Il2CppType t60_0_0_0;
static void* t1678_RGCTXData[25] = 
{
	&t59_TI,
	&m1330_MI,
	&m22916_MI,
	&m22737_MI,
	&m22735_MI,
	&m8407_MI,
	&m8398_MI,
	&m8406_MI,
	&t60_TI,
	&m22919_MI,
	&m22923_MI,
	&m8408_MI,
	&m8396_MI,
	&m8401_MI,
	&m8409_MI,
	&m8410_MI,
	&m22921_MI,
	&m8405_MI,
	&m8392_MI,
	&m22918_MI,
	&m22736_MI,
	&m22924_MI,
	&m22925_MI,
	&m22922_MI,
	(void*)&t60_0_0_0,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1678_0_0_0;
extern Il2CppType t1678_1_0_0;
extern TypeInfo t14_TI;
struct t1678;
extern TypeInfo t1678_TI;
extern Il2CppGenericClass t1678_GC;
extern CustomAttributesCache t849__CustomAttributeCache;
TypeInfo t1678_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Collection`1", "System.Collections.ObjectModel", t1678_MIs, t1678_PIs, t1678_FIs, NULL, &t14_TI, NULL, NULL, &t1678_TI, t1678_ITIs, t1678_VT, &t849__CustomAttributeCache, &t1678_TI, &t1678_0_0_0, &t1678_1_0_0, t1678_IOs, &t1678_GC, NULL, NULL, NULL, t1678_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1678), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 36, 8, 2, 0, 0, 37, 6, 6};
#include "t1679.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1679_TI;
#include "t1679MD.h"

#include "t845.h"
#include "t1680.h"
extern TypeInfo t1679_TI;
extern TypeInfo t5134_TI;
extern TypeInfo t31_TI;
extern TypeInfo t60_TI;
extern TypeInfo t26_TI;
extern TypeInfo t845_TI;
extern TypeInfo t534_TI;
extern TypeInfo t1680_TI;
extern TypeInfo t35_TI;
#include "t1231MD.h"
#include "t1680MD.h"
extern Il2CppType t5134_0_0_0;
extern Il2CppType t60_0_0_0;
extern Il2CppType t845_0_0_0;
extern MethodInfo m73_MI;
extern MethodInfo m1571_MI;
extern MethodInfo m3005_MI;
extern MethodInfo m3003_MI;
extern MethodInfo m6460_MI;
extern MethodInfo m8416_MI;
extern MethodInfo m22926_MI;
extern MethodInfo m16809_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.BaseInputModule>
extern Il2CppType t1679_0_0_49;
FieldInfo t1679_f0_FieldInfo = 
{
	"_default", &t1679_0_0_49, &t1679_TI, offsetof(t1679_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1679_FIs[] =
{
	&t1679_f0_FieldInfo,
	NULL
};
extern MethodInfo m8415_MI;
static PropertyInfo t1679____Default_PropertyInfo = 
{
	&t1679_TI, "Default", &m8415_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1679_PIs[] =
{
	&t1679____Default_PropertyInfo,
	NULL
};
extern TypeInfo t1679_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8411_MI = 
{
	".ctor", (methodPointerType)&m8252_gshared, &t1679_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1679_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8412_MI = 
{
	".cctor", (methodPointerType)&m8253_gshared, &t1679_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1679_m8413_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1679_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8413_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m8254_gshared, &t1679_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t1679_m8413_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t1679_m8414_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1679_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8414_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m8255_gshared, &t1679_TI, &t26_0_0_0, RuntimeInvoker_t26_t14_t14, t1679_m8414_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t1679_m22926_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t1679_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22926_MI = 
{
	"GetHashCode", NULL, &t1679_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t1679_m22926_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t1679_m16809_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t1679_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m16809_MI = 
{
	"Equals", NULL, &t1679_TI, &t26_0_0_0, RuntimeInvoker_t26_t14_t14, t1679_m16809_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1679_TI;
extern Il2CppType t1679_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8415_MI = 
{
	"get_Default", (methodPointerType)&m8256_gshared, &t1679_TI, &t1679_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1679_MIs[] =
{
	&m8411_MI,
	&m8412_MI,
	&m8413_MI,
	&m8414_MI,
	&m22926_MI,
	&m16809_MI,
	&m8415_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m16809_MI;
extern MethodInfo m22926_MI;
extern MethodInfo m8414_MI;
extern MethodInfo m8413_MI;
static MethodInfo* t1679_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m16809_MI,
	&m22926_MI,
	&m8414_MI,
	&m8413_MI,
	NULL,
	NULL,
};
extern TypeInfo t5135_TI;
extern TypeInfo t868_TI;
static TypeInfo* t1679_ITIs[] = 
{
	&t5135_TI,
	&t868_TI,
};
extern TypeInfo t5135_TI;
extern TypeInfo t868_TI;
static Il2CppInterfaceOffsetPair t1679_IOs[] = 
{
	{ &t5135_TI, 4},
	{ &t868_TI, 6},
};
extern Il2CppType t5134_0_0_0;
extern Il2CppType t60_0_0_0;
extern TypeInfo t1679_TI;
extern TypeInfo t1679_TI;
extern TypeInfo t1680_TI;
extern MethodInfo m8416_MI;
extern TypeInfo t60_TI;
extern MethodInfo m22926_MI;
extern MethodInfo m16809_MI;
static void* t1679_RGCTXData[9] = 
{
	(void*)&t5134_0_0_0,
	(void*)&t60_0_0_0,
	&t1679_TI,
	&t1679_TI,
	&t1680_TI,
	&m8416_MI,
	&t60_TI,
	&m22926_MI,
	&m16809_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1679_0_0_0;
extern Il2CppType t1679_1_0_0;
extern TypeInfo t14_TI;
struct t1679;
extern TypeInfo t1679_TI;
extern Il2CppGenericClass t1679_GC;
TypeInfo t1679_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t1679_MIs, t1679_PIs, t1679_FIs, NULL, &t14_TI, NULL, NULL, &t1679_TI, t1679_ITIs, t1679_VT, &EmptyCustomAttributesCache, &t1679_TI, &t1679_0_0_0, &t1679_1_0_0, t1679_IOs, &t1679_GC, NULL, NULL, NULL, t1679_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1679), 0, -1, sizeof(t1679_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5135_TI;



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<UnityEngine.EventSystems.BaseInputModule>
extern Il2CppType t60_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5135_m22927_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5135_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22927_MI = 
{
	"Equals", NULL, &t5135_TI, &t26_0_0_0, RuntimeInvoker_t26_t14_t14, t5135_m22927_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5135_m22928_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5135_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22928_MI = 
{
	"GetHashCode", NULL, &t5135_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t5135_m22928_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5135_MIs[] =
{
	&m22927_MI,
	&m22928_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5135_0_0_0;
extern Il2CppType t5135_1_0_0;
struct t5135;
extern TypeInfo t5135_TI;
extern Il2CppGenericClass t5135_GC;
TypeInfo t5135_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t5135_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5135_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5135_TI, &t5135_0_0_0, &t5135_1_0_0, NULL, &t5135_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5134_TI;



// Metadata Definition System.IEquatable`1<UnityEngine.EventSystems.BaseInputModule>
extern Il2CppType t60_0_0_0;
static ParameterInfo t5134_m22929_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5134_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22929_MI = 
{
	"Equals", NULL, &t5134_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t5134_m22929_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5134_MIs[] =
{
	&m22929_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5134_0_0_0;
extern Il2CppType t5134_1_0_0;
struct t5134;
extern TypeInfo t5134_TI;
extern Il2CppGenericClass t5134_GC;
TypeInfo t5134_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t5134_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5134_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5134_TI, &t5134_0_0_0, &t5134_1_0_0, NULL, &t5134_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1680_TI;

extern TypeInfo t60_TI;
extern TypeInfo t14_TI;
extern TypeInfo t35_TI;
extern TypeInfo t26_TI;
extern MethodInfo m8411_MI;
extern MethodInfo m71_MI;
extern MethodInfo m70_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.BaseInputModule>
extern TypeInfo t1680_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8416_MI = 
{
	".ctor", (methodPointerType)&m8287_gshared, &t1680_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t1680_m8417_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t1680_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8417_MI = 
{
	"GetHashCode", (methodPointerType)&m8288_gshared, &t1680_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t1680_m8417_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t1680_m8418_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t1680_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8418_MI = 
{
	"Equals", (methodPointerType)&m8289_gshared, &t1680_TI, &t26_0_0_0, RuntimeInvoker_t26_t14_t14, t1680_m8418_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1680_MIs[] =
{
	&m8416_MI,
	&m8417_MI,
	&m8418_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m8418_MI;
extern MethodInfo m8417_MI;
extern MethodInfo m8414_MI;
extern MethodInfo m8413_MI;
extern MethodInfo m8417_MI;
extern MethodInfo m8418_MI;
static MethodInfo* t1680_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m8418_MI,
	&m8417_MI,
	&m8414_MI,
	&m8413_MI,
	&m8417_MI,
	&m8418_MI,
};
extern TypeInfo t5135_TI;
extern TypeInfo t868_TI;
static Il2CppInterfaceOffsetPair t1680_IOs[] = 
{
	{ &t5135_TI, 4},
	{ &t868_TI, 6},
};
extern Il2CppType t5134_0_0_0;
extern Il2CppType t60_0_0_0;
extern TypeInfo t1679_TI;
extern TypeInfo t1679_TI;
extern TypeInfo t1680_TI;
extern MethodInfo m8416_MI;
extern TypeInfo t60_TI;
extern MethodInfo m22926_MI;
extern MethodInfo m16809_MI;
extern MethodInfo m8411_MI;
extern TypeInfo t60_TI;
static void* t1680_RGCTXData[11] = 
{
	(void*)&t5134_0_0_0,
	(void*)&t60_0_0_0,
	&t1679_TI,
	&t1679_TI,
	&t1680_TI,
	&m8416_MI,
	&t60_TI,
	&m22926_MI,
	&m16809_MI,
	&m8411_MI,
	&t60_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1680_0_0_0;
extern Il2CppType t1680_1_0_0;
extern TypeInfo t1679_TI;
struct t1680;
extern TypeInfo t1680_TI;
extern Il2CppGenericClass t1680_GC;
extern TypeInfo t844_TI;
TypeInfo t1680_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t1680_MIs, NULL, NULL, NULL, &t1679_TI, NULL, &t844_TI, &t1680_TI, NULL, t1680_VT, &EmptyCustomAttributesCache, &t1680_TI, &t1680_0_0_0, &t1680_1_0_0, t1680_IOs, &t1680_GC, NULL, NULL, NULL, t1680_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1680), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#include "t1650.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1650_TI;
#include "t1650MD.h"



// Metadata Definition System.Predicate`1<UnityEngine.EventSystems.BaseInputModule>
extern Il2CppType t14_0_0_0;
extern Il2CppType t77_0_0_0;
static ParameterInfo t1650_m8419_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t77_0_0_0},
};
extern TypeInfo t1650_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t77 (MethodInfo* method, void* obj, void** args);
MethodInfo m8419_MI = 
{
	".ctor", (methodPointerType)&m8290_gshared, &t1650_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t77, t1650_m8419_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t1650_m8420_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t1650_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8420_MI = 
{
	"Invoke", (methodPointerType)&m8291_gshared, &t1650_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1650_m8420_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t76_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t1650_m8421_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t76_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1650_TI;
extern Il2CppType t75_0_0_0;
extern void* RuntimeInvoker_t14_t14_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8421_MI = 
{
	"BeginInvoke", (methodPointerType)&m8292_gshared, &t1650_TI, &t75_0_0_0, RuntimeInvoker_t14_t14_t14_t14, t1650_m8421_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t75_0_0_0;
static ParameterInfo t1650_m8422_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t75_0_0_0},
};
extern TypeInfo t1650_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8422_MI = 
{
	"EndInvoke", (methodPointerType)&m8293_gshared, &t1650_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1650_m8422_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1650_MIs[] =
{
	&m8419_MI,
	&m8420_MI,
	&m8421_MI,
	&m8422_MI,
	NULL
};
extern MethodInfo m1719_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1720_MI;
extern MethodInfo m72_MI;
extern MethodInfo m1721_MI;
extern MethodInfo m1722_MI;
extern MethodInfo m1721_MI;
extern MethodInfo m1723_MI;
extern MethodInfo m1724_MI;
extern MethodInfo m1725_MI;
extern MethodInfo m8420_MI;
extern MethodInfo m8421_MI;
extern MethodInfo m8422_MI;
static MethodInfo* t1650_VT[] =
{
	&m1719_MI,
	&m50_MI,
	&m1720_MI,
	&m72_MI,
	&m1721_MI,
	&m1722_MI,
	&m1721_MI,
	&m1723_MI,
	&m1724_MI,
	&m1725_MI,
	&m8420_MI,
	&m8421_MI,
	&m8422_MI,
};
extern TypeInfo t374_TI;
extern TypeInfo t375_TI;
static Il2CppInterfaceOffsetPair t1650_IOs[] = 
{
	{ &t374_TI, 4},
	{ &t375_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1650_0_0_0;
extern Il2CppType t1650_1_0_0;
extern TypeInfo t211_TI;
struct t1650;
extern TypeInfo t1650_TI;
extern Il2CppGenericClass t1650_GC;
TypeInfo t1650_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Predicate`1", "System", t1650_MIs, NULL, NULL, NULL, &t211_TI, NULL, NULL, &t1650_TI, NULL, t1650_VT, &EmptyCustomAttributesCache, &t1650_TI, &t1650_0_0_0, &t1650_1_0_0, t1650_IOs, &t1650_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1650), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t1681.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1681_TI;
#include "t1681MD.h"

#include "t833.h"
#include "t1682.h"
extern TypeInfo t1681_TI;
extern TypeInfo t3291_TI;
extern TypeInfo t31_TI;
extern TypeInfo t60_TI;
extern TypeInfo t26_TI;
extern TypeInfo t833_TI;
extern TypeInfo t534_TI;
extern TypeInfo t1682_TI;
extern TypeInfo t35_TI;
extern TypeInfo t319_TI;
#include "t1682MD.h"
extern Il2CppType t3291_0_0_0;
extern Il2CppType t60_0_0_0;
extern Il2CppType t833_0_0_0;
extern MethodInfo m73_MI;
extern MethodInfo m1571_MI;
extern MethodInfo m3005_MI;
extern MethodInfo m3003_MI;
extern MethodInfo m6460_MI;
extern MethodInfo m8427_MI;
extern MethodInfo m22930_MI;
extern MethodInfo m6482_MI;


// Metadata Definition System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.BaseInputModule>
extern Il2CppType t1681_0_0_49;
FieldInfo t1681_f0_FieldInfo = 
{
	"_default", &t1681_0_0_49, &t1681_TI, offsetof(t1681_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1681_FIs[] =
{
	&t1681_f0_FieldInfo,
	NULL
};
extern MethodInfo m8426_MI;
static PropertyInfo t1681____Default_PropertyInfo = 
{
	&t1681_TI, "Default", &m8426_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1681_PIs[] =
{
	&t1681____Default_PropertyInfo,
	NULL
};
extern TypeInfo t1681_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8423_MI = 
{
	".ctor", (methodPointerType)&m8294_gshared, &t1681_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1681_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8424_MI = 
{
	".cctor", (methodPointerType)&m8295_gshared, &t1681_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t1681_m8425_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1681_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8425_MI = 
{
	"System.Collections.IComparer.Compare", (methodPointerType)&m8296_gshared, &t1681_TI, &t35_0_0_0, RuntimeInvoker_t35_t14_t14, t1681_m8425_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t1681_m22930_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t1681_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22930_MI = 
{
	"Compare", NULL, &t1681_TI, &t35_0_0_0, RuntimeInvoker_t35_t14_t14, t1681_m22930_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1681_TI;
extern Il2CppType t1681_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8426_MI = 
{
	"get_Default", (methodPointerType)&m8297_gshared, &t1681_TI, &t1681_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1681_MIs[] =
{
	&m8423_MI,
	&m8424_MI,
	&m8425_MI,
	&m22930_MI,
	&m8426_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m22930_MI;
extern MethodInfo m8425_MI;
static MethodInfo* t1681_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m22930_MI,
	&m8425_MI,
	NULL,
};
extern TypeInfo t3290_TI;
extern TypeInfo t726_TI;
static TypeInfo* t1681_ITIs[] = 
{
	&t3290_TI,
	&t726_TI,
};
extern TypeInfo t3290_TI;
extern TypeInfo t726_TI;
static Il2CppInterfaceOffsetPair t1681_IOs[] = 
{
	{ &t3290_TI, 4},
	{ &t726_TI, 5},
};
extern Il2CppType t3291_0_0_0;
extern Il2CppType t60_0_0_0;
extern TypeInfo t1681_TI;
extern TypeInfo t1681_TI;
extern TypeInfo t1682_TI;
extern MethodInfo m8427_MI;
extern TypeInfo t60_TI;
extern MethodInfo m22930_MI;
static void* t1681_RGCTXData[8] = 
{
	(void*)&t3291_0_0_0,
	(void*)&t60_0_0_0,
	&t1681_TI,
	&t1681_TI,
	&t1682_TI,
	&m8427_MI,
	&t60_TI,
	&m22930_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1681_0_0_0;
extern Il2CppType t1681_1_0_0;
extern TypeInfo t14_TI;
struct t1681;
extern TypeInfo t1681_TI;
extern Il2CppGenericClass t1681_GC;
TypeInfo t1681_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparer`1", "System.Collections.Generic", t1681_MIs, t1681_PIs, t1681_FIs, NULL, &t14_TI, NULL, NULL, &t1681_TI, t1681_ITIs, t1681_VT, &EmptyCustomAttributesCache, &t1681_TI, &t1681_0_0_0, &t1681_1_0_0, t1681_IOs, &t1681_GC, NULL, NULL, NULL, t1681_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1681), 0, -1, sizeof(t1681_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 5, 1, 1, 0, 0, 7, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3290_TI;



// Metadata Definition System.Collections.Generic.IComparer`1<UnityEngine.EventSystems.BaseInputModule>
extern Il2CppType t60_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t3290_m16817_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t3290_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m16817_MI = 
{
	"Compare", NULL, &t3290_TI, &t35_0_0_0, RuntimeInvoker_t35_t14_t14, t3290_m16817_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3290_MIs[] =
{
	&m16817_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3290_0_0_0;
extern Il2CppType t3290_1_0_0;
struct t3290;
extern TypeInfo t3290_TI;
extern Il2CppGenericClass t3290_GC;
TypeInfo t3290_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t3290_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3290_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3290_TI, &t3290_0_0_0, &t3290_1_0_0, NULL, &t3290_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3291_TI;



// Metadata Definition System.IComparable`1<UnityEngine.EventSystems.BaseInputModule>
extern Il2CppType t60_0_0_0;
static ParameterInfo t3291_m16818_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t3291_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m16818_MI = 
{
	"CompareTo", NULL, &t3291_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t3291_m16818_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3291_MIs[] =
{
	&m16818_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3291_0_0_0;
extern Il2CppType t3291_1_0_0;
struct t3291;
extern TypeInfo t3291_TI;
extern Il2CppGenericClass t3291_GC;
TypeInfo t3291_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t3291_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3291_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3291_TI, &t3291_0_0_0, &t3291_1_0_0, NULL, &t3291_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1682_TI;

extern TypeInfo t60_TI;
extern TypeInfo t3291_TI;
extern TypeInfo t35_TI;
extern TypeInfo t43_TI;
extern TypeInfo t14_TI;
extern TypeInfo t319_TI;
extern MethodInfo m8423_MI;
extern MethodInfo m16818_MI;
extern MethodInfo m7322_MI;
extern MethodInfo m1959_MI;


// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.BaseInputModule>
extern TypeInfo t1682_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8427_MI = 
{
	".ctor", (methodPointerType)&m8298_gshared, &t1682_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t1682_m8428_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t1682_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8428_MI = 
{
	"Compare", (methodPointerType)&m8299_gshared, &t1682_TI, &t35_0_0_0, RuntimeInvoker_t35_t14_t14, t1682_m8428_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1682_MIs[] =
{
	&m8427_MI,
	&m8428_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m8428_MI;
extern MethodInfo m8425_MI;
extern MethodInfo m8428_MI;
static MethodInfo* t1682_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m8428_MI,
	&m8425_MI,
	&m8428_MI,
};
extern TypeInfo t3290_TI;
extern TypeInfo t726_TI;
static Il2CppInterfaceOffsetPair t1682_IOs[] = 
{
	{ &t3290_TI, 4},
	{ &t726_TI, 5},
};
extern Il2CppType t3291_0_0_0;
extern Il2CppType t60_0_0_0;
extern TypeInfo t1681_TI;
extern TypeInfo t1681_TI;
extern TypeInfo t1682_TI;
extern MethodInfo m8427_MI;
extern TypeInfo t60_TI;
extern MethodInfo m22930_MI;
extern MethodInfo m8423_MI;
extern TypeInfo t60_TI;
extern TypeInfo t3291_TI;
extern MethodInfo m16818_MI;
static void* t1682_RGCTXData[12] = 
{
	(void*)&t3291_0_0_0,
	(void*)&t60_0_0_0,
	&t1681_TI,
	&t1681_TI,
	&t1682_TI,
	&m8427_MI,
	&t60_TI,
	&m22930_MI,
	&m8423_MI,
	&t60_TI,
	&t3291_TI,
	&m16818_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1682_0_0_0;
extern Il2CppType t1682_1_0_0;
extern TypeInfo t1681_TI;
struct t1682;
extern TypeInfo t1682_TI;
extern Il2CppGenericClass t1682_GC;
extern TypeInfo t832_TI;
TypeInfo t1682_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t1682_MIs, NULL, NULL, NULL, &t1681_TI, NULL, &t832_TI, &t1682_TI, NULL, t1682_VT, &EmptyCustomAttributesCache, &t1682_TI, &t1682_0_0_0, &t1682_1_0_0, t1682_IOs, &t1682_GC, NULL, NULL, NULL, t1682_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1682), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#include "t1651.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1651_TI;
#include "t1651MD.h"



// Metadata Definition System.Comparison`1<UnityEngine.EventSystems.BaseInputModule>
extern Il2CppType t14_0_0_0;
extern Il2CppType t77_0_0_0;
static ParameterInfo t1651_m8429_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t77_0_0_0},
};
extern TypeInfo t1651_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t77 (MethodInfo* method, void* obj, void** args);
MethodInfo m8429_MI = 
{
	".ctor", (methodPointerType)&m8330_gshared, &t1651_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t77, t1651_m8429_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t1651_m8430_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t1651_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8430_MI = 
{
	"Invoke", (methodPointerType)&m8331_gshared, &t1651_TI, &t35_0_0_0, RuntimeInvoker_t35_t14_t14, t1651_m8430_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t60_0_0_0;
extern Il2CppType t76_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t1651_m8431_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t76_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1651_TI;
extern Il2CppType t75_0_0_0;
extern void* RuntimeInvoker_t14_t14_t14_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8431_MI = 
{
	"BeginInvoke", (methodPointerType)&m8332_gshared, &t1651_TI, &t75_0_0_0, RuntimeInvoker_t14_t14_t14_t14_t14, t1651_m8431_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t75_0_0_0;
static ParameterInfo t1651_m8432_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t75_0_0_0},
};
extern TypeInfo t1651_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8432_MI = 
{
	"EndInvoke", (methodPointerType)&m8333_gshared, &t1651_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t1651_m8432_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1651_MIs[] =
{
	&m8429_MI,
	&m8430_MI,
	&m8431_MI,
	&m8432_MI,
	NULL
};
extern MethodInfo m1719_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1720_MI;
extern MethodInfo m72_MI;
extern MethodInfo m1721_MI;
extern MethodInfo m1722_MI;
extern MethodInfo m1721_MI;
extern MethodInfo m1723_MI;
extern MethodInfo m1724_MI;
extern MethodInfo m1725_MI;
extern MethodInfo m8430_MI;
extern MethodInfo m8431_MI;
extern MethodInfo m8432_MI;
static MethodInfo* t1651_VT[] =
{
	&m1719_MI,
	&m50_MI,
	&m1720_MI,
	&m72_MI,
	&m1721_MI,
	&m1722_MI,
	&m1721_MI,
	&m1723_MI,
	&m1724_MI,
	&m1725_MI,
	&m8430_MI,
	&m8431_MI,
	&m8432_MI,
};
extern TypeInfo t374_TI;
extern TypeInfo t375_TI;
static Il2CppInterfaceOffsetPair t1651_IOs[] = 
{
	{ &t374_TI, 4},
	{ &t375_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1651_0_0_0;
extern Il2CppType t1651_1_0_0;
extern TypeInfo t211_TI;
struct t1651;
extern TypeInfo t1651_TI;
extern Il2CppGenericClass t1651_GC;
TypeInfo t1651_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparison`1", "System", t1651_MIs, NULL, NULL, NULL, &t211_TI, NULL, NULL, &t1651_TI, NULL, t1651_VT, &EmptyCustomAttributesCache, &t1651_TI, &t1651_0_0_0, &t1651_1_0_0, t1651_IOs, &t1651_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1651), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t62.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t62_TI;
#include "t62MD.h"

#include "t66.h"


extern MethodInfo m1331_MI;
 void m1331 (t62 * __this, t14 * p0, t77 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m8433_MI;
 int32_t m8433 (t62 * __this, t66  p0, t66  p1, MethodInfo* method){
	typedef  int32_t (*FunctionPointerType) (t14 * __this, t66  p0, t66  p1, MethodInfo* method);
	if (__this->f9)
		m8433((t62 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m8434_MI;
 t14 * m8434 (t62 * __this, t66  p0, t66  p1, t76 * p2, t14 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t66_TI), &p0);
	__d_args[1] = Box(InitializedTypeInfo(&t66_TI), &p1);
	return (t14 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m8435_MI;
 int32_t m8435 (t62 * __this, t14 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
extern Il2CppType t14_0_0_0;
extern Il2CppType t77_0_0_0;
static ParameterInfo t62_m1331_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t77_0_0_0},
};
extern TypeInfo t62_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t77 (MethodInfo* method, void* obj, void** args);
MethodInfo m1331_MI = 
{
	".ctor", (methodPointerType)&m1331, &t62_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t77, t62_m1331_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t66_0_0_0;
extern Il2CppType t66_0_0_0;
static ParameterInfo t62_m8433_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t66_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t66_0_0_0},
};
extern TypeInfo t62_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t66_t66 (MethodInfo* method, void* obj, void** args);
MethodInfo m8433_MI = 
{
	"Invoke", (methodPointerType)&m8433, &t62_TI, &t35_0_0_0, RuntimeInvoker_t35_t66_t66, t62_m8433_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t66_0_0_0;
extern Il2CppType t66_0_0_0;
extern Il2CppType t76_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t62_m8434_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t66_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t66_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t76_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t62_TI;
extern Il2CppType t75_0_0_0;
extern void* RuntimeInvoker_t14_t66_t66_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8434_MI = 
{
	"BeginInvoke", (methodPointerType)&m8434, &t62_TI, &t75_0_0_0, RuntimeInvoker_t14_t66_t66_t14_t14, t62_m8434_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t75_0_0_0;
static ParameterInfo t62_m8435_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t75_0_0_0},
};
extern TypeInfo t62_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8435_MI = 
{
	"EndInvoke", (methodPointerType)&m8435, &t62_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t62_m8435_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t62_MIs[] =
{
	&m1331_MI,
	&m8433_MI,
	&m8434_MI,
	&m8435_MI,
	NULL
};
extern MethodInfo m1719_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1720_MI;
extern MethodInfo m72_MI;
extern MethodInfo m1721_MI;
extern MethodInfo m1722_MI;
extern MethodInfo m1721_MI;
extern MethodInfo m1723_MI;
extern MethodInfo m1724_MI;
extern MethodInfo m1725_MI;
extern MethodInfo m8433_MI;
extern MethodInfo m8434_MI;
extern MethodInfo m8435_MI;
static MethodInfo* t62_VT[] =
{
	&m1719_MI,
	&m50_MI,
	&m1720_MI,
	&m72_MI,
	&m1721_MI,
	&m1722_MI,
	&m1721_MI,
	&m1723_MI,
	&m1724_MI,
	&m1725_MI,
	&m8433_MI,
	&m8434_MI,
	&m8435_MI,
};
extern TypeInfo t374_TI;
extern TypeInfo t375_TI;
static Il2CppInterfaceOffsetPair t62_IOs[] = 
{
	{ &t374_TI, 4},
	{ &t375_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t62_0_0_0;
extern Il2CppType t62_1_0_0;
extern TypeInfo t211_TI;
struct t62;
extern TypeInfo t62_TI;
extern Il2CppGenericClass t62_GC;
TypeInfo t62_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparison`1", "System", t62_MIs, NULL, NULL, NULL, &t211_TI, NULL, NULL, &t62_TI, NULL, t62_VT, &EmptyCustomAttributesCache, &t62_TI, &t62_0_0_0, &t62_1_0_0, t62_IOs, &t62_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t62), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t92.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t92_TI;
#include "t92MD.h"

#include "t61.h"


// Metadata Definition UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler>
extern Il2CppType t14_0_0_0;
extern Il2CppType t77_0_0_0;
static ParameterInfo t92_m1388_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t77_0_0_0},
};
extern TypeInfo t92_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t77 (MethodInfo* method, void* obj, void** args);
MethodInfo m1388_MI = 
{
	".ctor", (methodPointerType)&m8436_gshared, &t92_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t77, t92_m1388_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t92_m8437_ParameterInfos[] = 
{
	{"handler", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
	{"eventData", 1, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern TypeInfo t92_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8437_MI = 
{
	"Invoke", (methodPointerType)&m8438_gshared, &t92_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t14, t92_m8437_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
extern Il2CppType t61_0_0_0;
extern Il2CppType t76_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t92_m8439_ParameterInfos[] = 
{
	{"handler", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
	{"eventData", 1, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t76_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t92_TI;
extern Il2CppType t75_0_0_0;
extern void* RuntimeInvoker_t14_t14_t14_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8439_MI = 
{
	"BeginInvoke", (methodPointerType)&m8440_gshared, &t92_TI, &t75_0_0_0, RuntimeInvoker_t14_t14_t14_t14_t14, t92_m8439_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t75_0_0_0;
static ParameterInfo t92_m8441_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t75_0_0_0},
};
extern TypeInfo t92_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8441_MI = 
{
	"EndInvoke", (methodPointerType)&m8442_gshared, &t92_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t92_m8441_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t92_MIs[] =
{
	&m1388_MI,
	&m8437_MI,
	&m8439_MI,
	&m8441_MI,
	NULL
};
extern MethodInfo m1719_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1720_MI;
extern MethodInfo m72_MI;
extern MethodInfo m1721_MI;
extern MethodInfo m1722_MI;
extern MethodInfo m1721_MI;
extern MethodInfo m1723_MI;
extern MethodInfo m1724_MI;
extern MethodInfo m1725_MI;
extern MethodInfo m8437_MI;
extern MethodInfo m8439_MI;
extern MethodInfo m8441_MI;
static MethodInfo* t92_VT[] =
{
	&m1719_MI,
	&m50_MI,
	&m1720_MI,
	&m72_MI,
	&m1721_MI,
	&m1722_MI,
	&m1721_MI,
	&m1723_MI,
	&m1724_MI,
	&m1725_MI,
	&m8437_MI,
	&m8439_MI,
	&m8441_MI,
};
extern TypeInfo t374_TI;
extern TypeInfo t375_TI;
static Il2CppInterfaceOffsetPair t92_IOs[] = 
{
	{ &t374_TI, 4},
	{ &t375_TI, 4},
};
extern Il2CppImage g_UnityEngine_UI_dll_Image;
extern Il2CppType t92_0_0_0;
extern Il2CppType t92_1_0_0;
extern TypeInfo t211_TI;
struct t92;
extern TypeInfo t92_TI;
extern Il2CppGenericClass t92_GC;
extern TypeInfo t78_TI;
TypeInfo t92_TI = 
{
	&g_UnityEngine_UI_dll_Image, NULL, "EventFunction`1", "", t92_MIs, NULL, NULL, NULL, &t211_TI, NULL, &t78_TI, &t92_TI, NULL, t92_VT, &EmptyCustomAttributesCache, &t92_TI, &t92_0_0_0, &t92_1_0_0, t92_IOs, &t92_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t92), 0, -1, 0, 0, -1, 258, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t1683.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1683_TI;
#include "t1683MD.h"



extern MethodInfo m8436_MI;
 void m8436_gshared (t1683 * __this, t14 * p0, t77 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m8438_MI;
 void m8438_gshared (t1683 * __this, t14 * p0, t61 * p1, MethodInfo* method)
{
	typedef  void (*FunctionPointerType) (t14 * __this, t14 * p0, t61 * p1, MethodInfo* method);
	if (__this->f9)
		m8438((t1683 *)__this->f9,  p0, p1, method);
	((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m8440_MI;
 t14 * m8440_gshared (t1683 * __this, t14 * p0, t61 * p1, t76 * p2, t14 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t14 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m8442_MI;
 void m8442_gshared (t1683 * __this, t14 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
// Metadata Definition UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
extern Il2CppType t14_0_0_0;
extern Il2CppType t77_0_0_0;
static ParameterInfo t1683_m8436_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t77_0_0_0},
};
extern TypeInfo t1683_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t77 (MethodInfo* method, void* obj, void** args);
MethodInfo m8436_MI = 
{
	".ctor", (methodPointerType)&m8436_gshared, &t1683_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t77, t1683_m8436_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t1683_m8438_ParameterInfos[] = 
{
	{"handler", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"eventData", 1, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern TypeInfo t1683_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8438_MI = 
{
	"Invoke", (methodPointerType)&m8438_gshared, &t1683_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t14, t1683_m8438_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t61_0_0_0;
extern Il2CppType t76_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t1683_m8440_ParameterInfos[] = 
{
	{"handler", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"eventData", 1, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t76_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1683_TI;
extern Il2CppType t75_0_0_0;
extern void* RuntimeInvoker_t14_t14_t14_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8440_MI = 
{
	"BeginInvoke", (methodPointerType)&m8440_gshared, &t1683_TI, &t75_0_0_0, RuntimeInvoker_t14_t14_t14_t14_t14, t1683_m8440_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t75_0_0_0;
static ParameterInfo t1683_m8442_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t75_0_0_0},
};
extern TypeInfo t1683_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8442_MI = 
{
	"EndInvoke", (methodPointerType)&m8442_gshared, &t1683_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1683_m8442_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1683_MIs[] =
{
	&m8436_MI,
	&m8438_MI,
	&m8440_MI,
	&m8442_MI,
	NULL
};
extern MethodInfo m1719_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1720_MI;
extern MethodInfo m72_MI;
extern MethodInfo m1721_MI;
extern MethodInfo m1722_MI;
extern MethodInfo m1721_MI;
extern MethodInfo m1723_MI;
extern MethodInfo m1724_MI;
extern MethodInfo m1725_MI;
extern MethodInfo m8438_MI;
extern MethodInfo m8440_MI;
extern MethodInfo m8442_MI;
static MethodInfo* t1683_VT[] =
{
	&m1719_MI,
	&m50_MI,
	&m1720_MI,
	&m72_MI,
	&m1721_MI,
	&m1722_MI,
	&m1721_MI,
	&m1723_MI,
	&m1724_MI,
	&m1725_MI,
	&m8438_MI,
	&m8440_MI,
	&m8442_MI,
};
extern TypeInfo t374_TI;
extern TypeInfo t375_TI;
static Il2CppInterfaceOffsetPair t1683_IOs[] = 
{
	{ &t374_TI, 4},
	{ &t375_TI, 4},
};
extern Il2CppImage g_UnityEngine_UI_dll_Image;
extern Il2CppType t1683_0_0_0;
extern Il2CppType t1683_1_0_0;
extern TypeInfo t211_TI;
struct t1683;
extern TypeInfo t1683_TI;
extern Il2CppGenericClass t1683_GC;
extern TypeInfo t78_TI;
TypeInfo t1683_TI = 
{
	&g_UnityEngine_UI_dll_Image, NULL, "EventFunction`1", "", t1683_MIs, NULL, NULL, NULL, &t211_TI, NULL, &t78_TI, &t1683_TI, NULL, t1683_VT, &EmptyCustomAttributesCache, &t1683_TI, &t1683_0_0_0, &t1683_1_0_0, t1683_IOs, &t1683_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1683), 0, -1, 0, 0, -1, 258, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t117.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t117_TI;
#include "t117MD.h"

#include "t1691.h"
#include "t1688.h"
#include "t1689.h"
#include "t1697.h"
#include "t1690.h"
extern TypeInfo t117_TI;
extern TypeInfo t306_TI;
extern TypeInfo t35_TI;
extern TypeInfo t25_TI;
extern TypeInfo t319_TI;
extern TypeInfo t582_TI;
extern TypeInfo t1277_TI;
extern TypeInfo t1242_TI;
extern TypeInfo t1684_TI;
extern TypeInfo t1691_TI;
extern TypeInfo t26_TI;
extern TypeInfo t1686_TI;
extern TypeInfo t1687_TI;
extern TypeInfo t1685_TI;
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t1688_TI;
extern TypeInfo t338_TI;
extern TypeInfo t1689_TI;
extern TypeInfo t1697_TI;
#include "t1242MD.h"
#include "t599MD.h"
#include "t1688MD.h"
#include "t1689MD.h"
#include "t1691MD.h"
#include "t1697MD.h"
extern MethodInfo m8489_MI;
extern MethodInfo m8490_MI;
extern MethodInfo m1959_MI;
extern MethodInfo m6492_MI;
extern MethodInfo m16835_MI;
extern MethodInfo m6493_MI;
extern MethodInfo m8475_MI;
extern MethodInfo m73_MI;
extern MethodInfo m8472_MI;
extern MethodInfo m3786_MI;
extern MethodInfo m8461_MI;
extern MethodInfo m8467_MI;
extern MethodInfo m8473_MI;
extern MethodInfo m8476_MI;
extern MethodInfo m8478_MI;
extern MethodInfo m8462_MI;
extern MethodInfo m8486_MI;
extern MethodInfo m6930_MI;
extern MethodInfo m8487_MI;
extern MethodInfo m22931_MI;
extern MethodInfo m22932_MI;
extern MethodInfo m22933_MI;
extern MethodInfo m22934_MI;
extern MethodInfo m67_MI;
extern MethodInfo m68_MI;
extern MethodInfo m8477_MI;
extern MethodInfo m8463_MI;
extern MethodInfo m8464_MI;
extern MethodInfo m8502_MI;
extern MethodInfo m3782_MI;
extern MethodInfo m16837_MI;
extern MethodInfo m8470_MI;
extern MethodInfo m8471_MI;
extern MethodInfo m2974_MI;
extern MethodInfo m8577_MI;
extern MethodInfo m8496_MI;
extern MethodInfo m8474_MI;
extern MethodInfo m8480_MI;
extern MethodInfo m3798_MI;
extern MethodInfo m8583_MI;
extern MethodInfo m16839_MI;
extern MethodInfo m16847_MI;
extern MethodInfo m3785_MI;
struct t24;
struct t24;
 void m16651_gshared (t14 * __this, t40** p0, int32_t p1, MethodInfo* method);
#define m16651(__this, p0, p1, method) (void)m16651_gshared((t14 *)__this, (t40**)p0, (int32_t)p1, method)
#define m16835(__this, p0, p1, method) (void)m16651_gshared((t14 *)__this, (t40**)p0, (int32_t)p1, method)
extern MethodInfo m16835_MI;
struct t24;
#include "t1695.h"
struct t24;
#include "t1494.h"
 int32_t m7724_gshared (t14 * __this, t40* p0, t14 * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define m7724(__this, p0, p1, p2, p3, method) (int32_t)m7724_gshared((t14 *)__this, (t40*)p0, (t14 *)p1, (int32_t)p2, (int32_t)p3, method)
#define m16837(__this, p0, p1, p2, p3, method) (int32_t)m7724_gshared((t14 *)__this, (t40*)p0, (t14 *)p1, (int32_t)p2, (int32_t)p3, method)
extern MethodInfo m16837_MI;
struct t24;
struct t24;
 void m16720_gshared (t14 * __this, t40* p0, int32_t p1, int32_t p2, t14* p3, MethodInfo* method);
#define m16720(__this, p0, p1, p2, p3, method) (void)m16720_gshared((t14 *)__this, (t40*)p0, (int32_t)p1, (int32_t)p2, (t14*)p3, method)
#define m16839(__this, p0, p1, p2, p3, method) (void)m16720_gshared((t14 *)__this, (t40*)p0, (int32_t)p1, (int32_t)p2, (t14*)p3, method)
extern MethodInfo m16839_MI;
struct t24;
#include "t39.h"
struct t24;
 void m16794_gshared (t14 * __this, t40* p0, int32_t p1, t1654 * p2, MethodInfo* method);
#define m16794(__this, p0, p1, p2, method) (void)m16794_gshared((t14 *)__this, (t40*)p0, (int32_t)p1, (t1654 *)p2, method)
#define m16847(__this, p0, p1, p2, method) (void)m16794_gshared((t14 *)__this, (t40*)p0, (int32_t)p1, (t1654 *)p2, method)
extern MethodInfo m16847_MI;


extern MethodInfo m8472_MI;
 t1691  m8472 (t117 * __this, MethodInfo* method){
	{
		t1691  L_0 = {0};
		m8496(&L_0, __this, &m8496_MI);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>
extern Il2CppType t35_0_0_32849;
FieldInfo t117_f0_FieldInfo = 
{
	"DefaultCapacity", &t35_0_0_32849, &t117_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1684_0_0_1;
FieldInfo t117_f1_FieldInfo = 
{
	"_items", &t1684_0_0_1, &t117_TI, offsetof(t117, f1), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t117_f2_FieldInfo = 
{
	"_size", &t35_0_0_1, &t117_TI, offsetof(t117, f2), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t117_f3_FieldInfo = 
{
	"_version", &t35_0_0_1, &t117_TI, offsetof(t117, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1684_0_0_49;
FieldInfo t117_f4_FieldInfo = 
{
	"EmptyArray", &t1684_0_0_49, &t117_TI, offsetof(t117_SFs, f4), &EmptyCustomAttributesCache};
static FieldInfo* t117_FIs[] =
{
	&t117_f0_FieldInfo,
	&t117_f1_FieldInfo,
	&t117_f2_FieldInfo,
	&t117_f3_FieldInfo,
	&t117_f4_FieldInfo,
	NULL
};
static const int32_t t117_f0_DefaultValueData = 4;
extern Il2CppType t35_0_0_0;
static Il2CppFieldDefaultValueEntry t117_f0_DefaultValue = 
{
	&t117_f0_FieldInfo, { (char*)&t117_f0_DefaultValueData, &t35_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t117_FDVs[] = 
{
	&t117_f0_DefaultValue,
	NULL
};
extern MethodInfo m8454_MI;
static PropertyInfo t117____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t117_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m8454_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8455_MI;
static PropertyInfo t117____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t117_TI, "System.Collections.ICollection.IsSynchronized", &m8455_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8456_MI;
static PropertyInfo t117____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t117_TI, "System.Collections.ICollection.SyncRoot", &m8456_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8457_MI;
static PropertyInfo t117____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t117_TI, "System.Collections.IList.IsFixedSize", &m8457_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8458_MI;
static PropertyInfo t117____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t117_TI, "System.Collections.IList.IsReadOnly", &m8458_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8459_MI;
extern MethodInfo m8460_MI;
static PropertyInfo t117____System_Collections_IList_Item_PropertyInfo = 
{
	&t117_TI, "System.Collections.IList.Item", &m8459_MI, &m8460_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8486_MI;
extern MethodInfo m8487_MI;
static PropertyInfo t117____Capacity_PropertyInfo = 
{
	&t117_TI, "Capacity", &m8486_MI, &m8487_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8488_MI;
static PropertyInfo t117____Count_PropertyInfo = 
{
	&t117_TI, "Count", &m8488_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8489_MI;
extern MethodInfo m8490_MI;
static PropertyInfo t117____Item_PropertyInfo = 
{
	&t117_TI, "Item", &m8489_MI, &m8490_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t117_PIs[] =
{
	&t117____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t117____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t117____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t117____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t117____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t117____System_Collections_IList_Item_PropertyInfo,
	&t117____Capacity_PropertyInfo,
	&t117____Count_PropertyInfo,
	&t117____Item_PropertyInfo,
	NULL
};
extern TypeInfo t117_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8443_MI = 
{
	".ctor", (methodPointerType)&m8086_gshared, &t117_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t117_m8444_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t117_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m8444_MI = 
{
	".ctor", (methodPointerType)&m8088_gshared, &t117_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t117_m8444_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t117_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8445_MI = 
{
	".cctor", (methodPointerType)&m8090_gshared, &t117_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t117_TI;
extern Il2CppType t1685_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8446_MI = 
{
	"System.Collections.Generic.IEnumerable<T>.GetEnumerator", (methodPointerType)&m8092_gshared, &t117_TI, &t1685_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 481, 0, 27, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t24_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t117_m8447_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t117_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m8447_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m8094_gshared, &t117_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t117_m8447_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t117_TI;
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8448_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8096_gshared, &t117_TI, &t36_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t117_m8449_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t117_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8449_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m8098_gshared, &t117_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t117_m8449_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t117_m8450_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t117_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8450_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m8100_gshared, &t117_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t117_m8450_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t117_m8451_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t117_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8451_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m8102_gshared, &t117_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t117_m8451_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t117_m8452_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t117_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8452_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m8104_gshared, &t117_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t117_m8452_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t117_m8453_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t117_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8453_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m8106_gshared, &t117_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t117_m8453_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t117_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m8454_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m8108_gshared, &t117_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t117_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m8455_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m8110_gshared, &t117_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t117_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8456_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m8112_gshared, &t117_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t117_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m8457_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m8114_gshared, &t117_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t117_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m8458_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m8116_gshared, &t117_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t117_m8459_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t117_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m8459_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m8118_gshared, &t117_TI, &t14_0_0_0, RuntimeInvoker_t14_t35, t117_m8459_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t117_m8460_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t117_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8460_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m8120_gshared, &t117_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t117_m8460_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t306_0_0_0;
static ParameterInfo t117_m8461_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t306_0_0_0},
};
extern TypeInfo t117_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8461_MI = 
{
	"Add", (methodPointerType)&m8122_gshared, &t117_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t117_m8461_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t117_m8462_ParameterInfos[] = 
{
	{"newCount", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t117_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m8462_MI = 
{
	"GrowIfNeeded", (methodPointerType)&m8124_gshared, &t117_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t117_m8462_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1686_0_0_0;
static ParameterInfo t117_m8463_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t1686_0_0_0},
};
extern TypeInfo t117_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8463_MI = 
{
	"AddCollection", (methodPointerType)&m8126_gshared, &t117_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t117_m8463_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1687_0_0_0;
static ParameterInfo t117_m8464_ParameterInfos[] = 
{
	{"enumerable", 0, 134217728, &EmptyCustomAttributesCache, &t1687_0_0_0},
};
extern TypeInfo t117_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8464_MI = 
{
	"AddEnumerable", (methodPointerType)&m8128_gshared, &t117_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t117_m8464_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1687_0_0_0;
static ParameterInfo t117_m8465_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t1687_0_0_0},
};
extern TypeInfo t117_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8465_MI = 
{
	"AddRange", (methodPointerType)&m8130_gshared, &t117_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t117_m8465_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t117_TI;
extern Il2CppType t1688_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8466_MI = 
{
	"AsReadOnly", (methodPointerType)&m8132_gshared, &t117_TI, &t1688_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t117_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m1400_MI = 
{
	"Clear", (methodPointerType)&m8134_gshared, &t117_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t306_0_0_0;
static ParameterInfo t117_m8467_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t306_0_0_0},
};
extern TypeInfo t117_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8467_MI = 
{
	"Contains", (methodPointerType)&m8136_gshared, &t117_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t117_m8467_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1684_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t117_m8468_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1684_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t117_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m8468_MI = 
{
	"CopyTo", (methodPointerType)&m8138_gshared, &t117_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t117_m8468_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1689_0_0_0;
static ParameterInfo t117_m8469_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t1689_0_0_0},
};
extern TypeInfo t117_TI;
extern Il2CppType t306_0_0_0;
extern void* RuntimeInvoker_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8469_MI = 
{
	"Find", (methodPointerType)&m8140_gshared, &t117_TI, &t306_0_0_0, RuntimeInvoker_t14_t14, t117_m8469_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1689_0_0_0;
static ParameterInfo t117_m8470_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t1689_0_0_0},
};
extern TypeInfo t117_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8470_MI = 
{
	"CheckMatch", (methodPointerType)&m8142_gshared, &t117_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t117_m8470_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t35_0_0_0;
extern Il2CppType t1689_0_0_0;
static ParameterInfo t117_m8471_ParameterInfos[] = 
{
	{"startIndex", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"count", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"match", 2, 134217728, &EmptyCustomAttributesCache, &t1689_0_0_0},
};
extern TypeInfo t117_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t35_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8471_MI = 
{
	"GetIndex", (methodPointerType)&m8144_gshared, &t117_TI, &t35_0_0_0, RuntimeInvoker_t35_t35_t35_t14, t117_m8471_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t117_TI;
extern Il2CppType t1691_0_0_0;
extern void* RuntimeInvoker_t1691 (MethodInfo* method, void* obj, void** args);
MethodInfo m8472_MI = 
{
	"GetEnumerator", (methodPointerType)&m8472, &t117_TI, &t1691_0_0_0, RuntimeInvoker_t1691, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t306_0_0_0;
static ParameterInfo t117_m8473_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t306_0_0_0},
};
extern TypeInfo t117_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8473_MI = 
{
	"IndexOf", (methodPointerType)&m8147_gshared, &t117_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t117_m8473_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t117_m8474_ParameterInfos[] = 
{
	{"start", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"delta", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t117_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m8474_MI = 
{
	"Shift", (methodPointerType)&m8149_gshared, &t117_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t35, t117_m8474_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t117_m8475_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t117_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m8475_MI = 
{
	"CheckIndex", (methodPointerType)&m8151_gshared, &t117_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t117_m8475_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t306_0_0_0;
static ParameterInfo t117_m8476_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t306_0_0_0},
};
extern TypeInfo t117_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8476_MI = 
{
	"Insert", (methodPointerType)&m8153_gshared, &t117_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t117_m8476_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1687_0_0_0;
static ParameterInfo t117_m8477_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t1687_0_0_0},
};
extern TypeInfo t117_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8477_MI = 
{
	"CheckCollection", (methodPointerType)&m8155_gshared, &t117_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t117_m8477_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t306_0_0_0;
static ParameterInfo t117_m8478_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t306_0_0_0},
};
extern TypeInfo t117_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8478_MI = 
{
	"Remove", (methodPointerType)&m8157_gshared, &t117_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t117_m8478_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1689_0_0_0;
static ParameterInfo t117_m8479_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t1689_0_0_0},
};
extern TypeInfo t117_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8479_MI = 
{
	"RemoveAll", (methodPointerType)&m8159_gshared, &t117_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t117_m8479_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t117_m8480_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t117_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m8480_MI = 
{
	"RemoveAt", (methodPointerType)&m8160_gshared, &t117_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t117_m8480_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t117_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8481_MI = 
{
	"Reverse", (methodPointerType)&m8162_gshared, &t117_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t117_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8482_MI = 
{
	"Sort", (methodPointerType)&m8164_gshared, &t117_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1690_0_0_0;
static ParameterInfo t117_m8483_ParameterInfos[] = 
{
	{"comparison", 0, 134217728, &EmptyCustomAttributesCache, &t1690_0_0_0},
};
extern TypeInfo t117_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8483_MI = 
{
	"Sort", (methodPointerType)&m8166_gshared, &t117_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t117_m8483_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t117_TI;
extern Il2CppType t1684_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8484_MI = 
{
	"ToArray", (methodPointerType)&m8168_gshared, &t117_TI, &t1684_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t117_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8485_MI = 
{
	"TrimExcess", (methodPointerType)&m8170_gshared, &t117_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t117_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m8486_MI = 
{
	"get_Capacity", (methodPointerType)&m8172_gshared, &t117_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t117_m8487_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t117_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m8487_MI = 
{
	"set_Capacity", (methodPointerType)&m8174_gshared, &t117_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t117_m8487_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t117_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m8488_MI = 
{
	"get_Count", (methodPointerType)&m8175_gshared, &t117_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t117_m8489_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t117_TI;
extern Il2CppType t306_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m8489_MI = 
{
	"get_Item", (methodPointerType)&m8176_gshared, &t117_TI, &t306_0_0_0, RuntimeInvoker_t14_t35, t117_m8489_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t306_0_0_0;
static ParameterInfo t117_m8490_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t306_0_0_0},
};
extern TypeInfo t117_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8490_MI = 
{
	"set_Item", (methodPointerType)&m8178_gshared, &t117_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t117_m8490_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 32, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t117_MIs[] =
{
	&m8443_MI,
	&m8444_MI,
	&m8445_MI,
	&m8446_MI,
	&m8447_MI,
	&m8448_MI,
	&m8449_MI,
	&m8450_MI,
	&m8451_MI,
	&m8452_MI,
	&m8453_MI,
	&m8454_MI,
	&m8455_MI,
	&m8456_MI,
	&m8457_MI,
	&m8458_MI,
	&m8459_MI,
	&m8460_MI,
	&m8461_MI,
	&m8462_MI,
	&m8463_MI,
	&m8464_MI,
	&m8465_MI,
	&m8466_MI,
	&m1400_MI,
	&m8467_MI,
	&m8468_MI,
	&m8469_MI,
	&m8470_MI,
	&m8471_MI,
	&m8472_MI,
	&m8473_MI,
	&m8474_MI,
	&m8475_MI,
	&m8476_MI,
	&m8477_MI,
	&m8478_MI,
	&m8479_MI,
	&m8480_MI,
	&m8481_MI,
	&m8482_MI,
	&m8483_MI,
	&m8484_MI,
	&m8485_MI,
	&m8486_MI,
	&m8487_MI,
	&m8488_MI,
	&m8489_MI,
	&m8490_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m8448_MI;
extern MethodInfo m8488_MI;
extern MethodInfo m8455_MI;
extern MethodInfo m8456_MI;
extern MethodInfo m8447_MI;
extern MethodInfo m8457_MI;
extern MethodInfo m8458_MI;
extern MethodInfo m8459_MI;
extern MethodInfo m8460_MI;
extern MethodInfo m8449_MI;
extern MethodInfo m1400_MI;
extern MethodInfo m8450_MI;
extern MethodInfo m8451_MI;
extern MethodInfo m8452_MI;
extern MethodInfo m8453_MI;
extern MethodInfo m8480_MI;
extern MethodInfo m8488_MI;
extern MethodInfo m8454_MI;
extern MethodInfo m8461_MI;
extern MethodInfo m1400_MI;
extern MethodInfo m8467_MI;
extern MethodInfo m8468_MI;
extern MethodInfo m8478_MI;
extern MethodInfo m8446_MI;
extern MethodInfo m8473_MI;
extern MethodInfo m8476_MI;
extern MethodInfo m8480_MI;
extern MethodInfo m8489_MI;
extern MethodInfo m8490_MI;
static MethodInfo* t117_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m8448_MI,
	&m8488_MI,
	&m8455_MI,
	&m8456_MI,
	&m8447_MI,
	&m8457_MI,
	&m8458_MI,
	&m8459_MI,
	&m8460_MI,
	&m8449_MI,
	&m1400_MI,
	&m8450_MI,
	&m8451_MI,
	&m8452_MI,
	&m8453_MI,
	&m8480_MI,
	&m8488_MI,
	&m8454_MI,
	&m8461_MI,
	&m1400_MI,
	&m8467_MI,
	&m8468_MI,
	&m8478_MI,
	&m8446_MI,
	&m8473_MI,
	&m8476_MI,
	&m8480_MI,
	&m8489_MI,
	&m8490_MI,
};
extern TypeInfo t600_TI;
extern TypeInfo t651_TI;
extern TypeInfo t1023_TI;
extern TypeInfo t1686_TI;
extern TypeInfo t1687_TI;
extern TypeInfo t1693_TI;
static TypeInfo* t117_ITIs[] = 
{
	&t600_TI,
	&t651_TI,
	&t1023_TI,
	&t1686_TI,
	&t1687_TI,
	&t1693_TI,
};
extern TypeInfo t600_TI;
extern TypeInfo t651_TI;
extern TypeInfo t1023_TI;
extern TypeInfo t1686_TI;
extern TypeInfo t1687_TI;
extern TypeInfo t1693_TI;
static Il2CppInterfaceOffsetPair t117_IOs[] = 
{
	{ &t600_TI, 4},
	{ &t651_TI, 5},
	{ &t1023_TI, 9},
	{ &t1686_TI, 20},
	{ &t1687_TI, 27},
	{ &t1693_TI, 28},
};
extern TypeInfo t117_TI;
extern TypeInfo t1684_TI;
extern MethodInfo m8472_MI;
extern TypeInfo t1691_TI;
extern TypeInfo t306_TI;
extern MethodInfo m8461_MI;
extern MethodInfo m8467_MI;
extern MethodInfo m8473_MI;
extern MethodInfo m8475_MI;
extern MethodInfo m8476_MI;
extern MethodInfo m8478_MI;
extern MethodInfo m8489_MI;
extern MethodInfo m8490_MI;
extern MethodInfo m8462_MI;
extern MethodInfo m8486_MI;
extern MethodInfo m8487_MI;
extern MethodInfo m22931_MI;
extern MethodInfo m22932_MI;
extern MethodInfo m22933_MI;
extern MethodInfo m22934_MI;
extern MethodInfo m8477_MI;
extern TypeInfo t1686_TI;
extern MethodInfo m8463_MI;
extern MethodInfo m8464_MI;
extern TypeInfo t1688_TI;
extern MethodInfo m8502_MI;
extern MethodInfo m16837_MI;
extern MethodInfo m8470_MI;
extern MethodInfo m8471_MI;
extern MethodInfo m8577_MI;
extern MethodInfo m8496_MI;
extern MethodInfo m8474_MI;
extern MethodInfo m8480_MI;
extern MethodInfo m8583_MI;
extern MethodInfo m16839_MI;
extern MethodInfo m16847_MI;
extern MethodInfo m16835_MI;
static void* t117_RGCTXData[37] = 
{
	&t117_TI,
	&t1684_TI,
	&m8472_MI,
	&t1691_TI,
	&t306_TI,
	&m8461_MI,
	&m8467_MI,
	&m8473_MI,
	&m8475_MI,
	&m8476_MI,
	&m8478_MI,
	&m8489_MI,
	&m8490_MI,
	&m8462_MI,
	&m8486_MI,
	&m8487_MI,
	&m22931_MI,
	&m22932_MI,
	&m22933_MI,
	&m22934_MI,
	&m8477_MI,
	&t1686_TI,
	&m8463_MI,
	&m8464_MI,
	&t1688_TI,
	&m8502_MI,
	&m16837_MI,
	&m8470_MI,
	&m8471_MI,
	&m8577_MI,
	&m8496_MI,
	&m8474_MI,
	&m8480_MI,
	&m8583_MI,
	&m16839_MI,
	&m16847_MI,
	&m16835_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t117_0_0_0;
extern Il2CppType t117_1_0_0;
extern TypeInfo t14_TI;
struct t117;
extern TypeInfo t117_TI;
extern Il2CppGenericClass t117_GC;
extern CustomAttributesCache t848__CustomAttributeCache;
TypeInfo t117_TI = 
{
	&g_mscorlib_dll_Image, NULL, "List`1", "System.Collections.Generic", t117_MIs, t117_PIs, t117_FIs, NULL, &t14_TI, NULL, NULL, &t117_TI, t117_ITIs, t117_VT, &t848__CustomAttributeCache, &t117_TI, &t117_0_0_0, &t117_1_0_0, t117_IOs, &t117_GC, NULL, t117_FDVs, NULL, t117_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t117), 0, -1, sizeof(t117_SFs), 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 49, 9, 5, 0, 0, 33, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1686_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IEventSystemHandler>
extern MethodInfo m22931_MI;
static PropertyInfo t1686____Count_PropertyInfo = 
{
	&t1686_TI, "Count", &m22931_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m22935_MI;
static PropertyInfo t1686____IsReadOnly_PropertyInfo = 
{
	&t1686_TI, "IsReadOnly", &m22935_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1686_PIs[] =
{
	&t1686____Count_PropertyInfo,
	&t1686____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t1686_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m22931_MI = 
{
	"get_Count", NULL, &t1686_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1686_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m22935_MI = 
{
	"get_IsReadOnly", NULL, &t1686_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t306_0_0_0;
static ParameterInfo t1686_m16900_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t306_0_0_0},
};
extern TypeInfo t1686_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m16900_MI = 
{
	"Add", NULL, &t1686_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1686_m16900_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1686_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m22936_MI = 
{
	"Clear", NULL, &t1686_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t306_0_0_0;
static ParameterInfo t1686_m22937_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t306_0_0_0},
};
extern TypeInfo t1686_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22937_MI = 
{
	"Contains", NULL, &t1686_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1686_m22937_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1684_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t1686_m22932_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1684_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1686_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m22932_MI = 
{
	"CopyTo", NULL, &t1686_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t1686_m22932_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t306_0_0_0;
static ParameterInfo t1686_m22938_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t306_0_0_0},
};
extern TypeInfo t1686_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22938_MI = 
{
	"Remove", NULL, &t1686_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1686_m22938_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1686_MIs[] =
{
	&m22931_MI,
	&m22935_MI,
	&m16900_MI,
	&m22936_MI,
	&m22937_MI,
	&m22932_MI,
	&m22938_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t1687_TI;
static TypeInfo* t1686_ITIs[] = 
{
	&t600_TI,
	&t1687_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1686_0_0_0;
extern Il2CppType t1686_1_0_0;
struct t1686;
extern TypeInfo t1686_TI;
extern Il2CppGenericClass t1686_GC;
TypeInfo t1686_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t1686_MIs, t1686_PIs, NULL, NULL, NULL, NULL, NULL, &t1686_TI, t1686_ITIs, NULL, &EmptyCustomAttributesCache, &t1686_TI, &t1686_0_0_0, &t1686_1_0_0, NULL, &t1686_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1687_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.IEventSystemHandler>
extern TypeInfo t1687_TI;
extern Il2CppType t1685_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22933_MI = 
{
	"GetEnumerator", NULL, &t1687_TI, &t1685_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1687_MIs[] =
{
	&m22933_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t1687_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1687_0_0_0;
extern Il2CppType t1687_1_0_0;
struct t1687;
extern TypeInfo t1687_TI;
extern Il2CppGenericClass t1687_GC;
TypeInfo t1687_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t1687_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1687_TI, t1687_ITIs, NULL, &EmptyCustomAttributesCache, &t1687_TI, &t1687_0_0_0, &t1687_1_0_0, NULL, &t1687_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1685_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.IEventSystemHandler>
extern MethodInfo m22934_MI;
static PropertyInfo t1685____Current_PropertyInfo = 
{
	&t1685_TI, "Current", &m22934_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1685_PIs[] =
{
	&t1685____Current_PropertyInfo,
	NULL
};
extern TypeInfo t1685_TI;
extern Il2CppType t306_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22934_MI = 
{
	"get_Current", NULL, &t1685_TI, &t306_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1685_MIs[] =
{
	&m22934_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t1685_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1685_0_0_0;
extern Il2CppType t1685_1_0_0;
struct t1685;
extern TypeInfo t1685_TI;
extern Il2CppGenericClass t1685_GC;
TypeInfo t1685_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t1685_MIs, t1685_PIs, NULL, NULL, NULL, NULL, NULL, &t1685_TI, t1685_ITIs, NULL, &EmptyCustomAttributesCache, &t1685_TI, &t1685_0_0_0, &t1685_1_0_0, NULL, &t1685_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t1692.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1692_TI;
#include "t1692MD.h"

extern TypeInfo t1692_TI;
extern TypeInfo t306_TI;
extern TypeInfo t1278_TI;
extern MethodInfo m8495_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m16824_MI;
struct t24;
#define m16824(__this, p0, method) (t14 *)m16357_gshared((t24 *)__this, (int32_t)p0, method)
extern MethodInfo m16824_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IEventSystemHandler>
extern Il2CppType t24_0_0_1;
FieldInfo t1692_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t1692_TI, offsetof(t1692, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t1692_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t1692_TI, offsetof(t1692, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t1692_FIs[] =
{
	&t1692_f0_FieldInfo,
	&t1692_f1_FieldInfo,
	NULL
};
extern MethodInfo m8492_MI;
static PropertyInfo t1692____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1692_TI, "System.Collections.IEnumerator.Current", &m8492_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8495_MI;
static PropertyInfo t1692____Current_PropertyInfo = 
{
	&t1692_TI, "Current", &m8495_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1692_PIs[] =
{
	&t1692____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1692____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t1692_m8491_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t1692_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8491_MI = 
{
	".ctor", (methodPointerType)&m7877_gshared, &t1692_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1692_m8491_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1692_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8492_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7879_gshared, &t1692_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1692_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8493_MI = 
{
	"Dispose", (methodPointerType)&m7881_gshared, &t1692_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1692_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m8494_MI = 
{
	"MoveNext", (methodPointerType)&m7883_gshared, &t1692_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1692_TI;
extern Il2CppType t306_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8495_MI = 
{
	"get_Current", (methodPointerType)&m7885_gshared, &t1692_TI, &t306_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1692_MIs[] =
{
	&m8491_MI,
	&m8492_MI,
	&m8493_MI,
	&m8494_MI,
	&m8495_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m8492_MI;
extern MethodInfo m8494_MI;
extern MethodInfo m8493_MI;
extern MethodInfo m8495_MI;
static MethodInfo* t1692_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m8492_MI,
	&m8494_MI,
	&m8493_MI,
	&m8495_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t1685_TI;
static TypeInfo* t1692_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t1685_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t1685_TI;
static Il2CppInterfaceOffsetPair t1692_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t1685_TI, 7},
};
extern MethodInfo m8495_MI;
extern TypeInfo t306_TI;
extern MethodInfo m16824_MI;
static void* t1692_RGCTXData[3] = 
{
	&m8495_MI,
	&t306_TI,
	&m16824_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1692_0_0_0;
extern Il2CppType t1692_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t1692_TI;
extern Il2CppGenericClass t1692_GC;
extern TypeInfo t24_TI;
TypeInfo t1692_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1692_MIs, t1692_PIs, t1692_FIs, NULL, &t122_TI, NULL, &t24_TI, &t1692_TI, t1692_ITIs, t1692_VT, &EmptyCustomAttributesCache, &t1692_TI, &t1692_0_0_0, &t1692_1_0_0, t1692_IOs, &t1692_GC, NULL, NULL, NULL, t1692_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1692)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1693_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.EventSystems.IEventSystemHandler>
extern MethodInfo m22939_MI;
extern MethodInfo m22940_MI;
static PropertyInfo t1693____Item_PropertyInfo = 
{
	&t1693_TI, "Item", &m22939_MI, &m22940_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1693_PIs[] =
{
	&t1693____Item_PropertyInfo,
	NULL
};
extern Il2CppType t306_0_0_0;
static ParameterInfo t1693_m22941_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t306_0_0_0},
};
extern TypeInfo t1693_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22941_MI = 
{
	"IndexOf", NULL, &t1693_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t1693_m22941_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t306_0_0_0;
static ParameterInfo t1693_m22942_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t306_0_0_0},
};
extern TypeInfo t1693_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22942_MI = 
{
	"Insert", NULL, &t1693_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t1693_m22942_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1693_m22943_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1693_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m22943_MI = 
{
	"RemoveAt", NULL, &t1693_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t1693_m22943_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1693_m22939_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1693_TI;
extern Il2CppType t306_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m22939_MI = 
{
	"get_Item", NULL, &t1693_TI, &t306_0_0_0, RuntimeInvoker_t14_t35, t1693_m22939_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t306_0_0_0;
static ParameterInfo t1693_m22940_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t306_0_0_0},
};
extern TypeInfo t1693_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22940_MI = 
{
	"set_Item", NULL, &t1693_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t1693_m22940_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1693_MIs[] =
{
	&m22941_MI,
	&m22942_MI,
	&m22943_MI,
	&m22939_MI,
	&m22940_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t1686_TI;
extern TypeInfo t1687_TI;
static TypeInfo* t1693_ITIs[] = 
{
	&t600_TI,
	&t1686_TI,
	&t1687_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1693_0_0_0;
extern Il2CppType t1693_1_0_0;
struct t1693;
extern TypeInfo t1693_TI;
extern Il2CppGenericClass t1693_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t1693_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t1693_MIs, t1693_PIs, NULL, NULL, NULL, NULL, NULL, &t1693_TI, t1693_ITIs, NULL, &t1409__CustomAttributeCache, &t1693_TI, &t1693_0_0_0, &t1693_1_0_0, NULL, &t1693_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1691_TI;

extern TypeInfo t1691_TI;
extern TypeInfo t1278_TI;
extern TypeInfo t306_TI;
extern TypeInfo t117_TI;
extern TypeInfo t31_TI;
extern TypeInfo t33_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m8499_MI;
extern MethodInfo m6924_MI;
extern MethodInfo m1450_MI;
extern MethodInfo m3022_MI;
extern MethodInfo m7129_MI;
extern MethodInfo m6925_MI;


// Metadata Definition System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.IEventSystemHandler>
extern Il2CppType t117_0_0_1;
FieldInfo t1691_f0_FieldInfo = 
{
	"l", &t117_0_0_1, &t1691_TI, offsetof(t1691, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t1691_f1_FieldInfo = 
{
	"next", &t35_0_0_1, &t1691_TI, offsetof(t1691, f1) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t1691_f2_FieldInfo = 
{
	"ver", &t35_0_0_1, &t1691_TI, offsetof(t1691, f2) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t306_0_0_1;
FieldInfo t1691_f3_FieldInfo = 
{
	"current", &t306_0_0_1, &t1691_TI, offsetof(t1691, f3) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t1691_FIs[] =
{
	&t1691_f0_FieldInfo,
	&t1691_f1_FieldInfo,
	&t1691_f2_FieldInfo,
	&t1691_f3_FieldInfo,
	NULL
};
extern MethodInfo m8497_MI;
static PropertyInfo t1691____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1691_TI, "System.Collections.IEnumerator.Current", &m8497_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8501_MI;
static PropertyInfo t1691____Current_PropertyInfo = 
{
	&t1691_TI, "Current", &m8501_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1691_PIs[] =
{
	&t1691____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1691____Current_PropertyInfo,
	NULL
};
extern Il2CppType t117_0_0_0;
static ParameterInfo t1691_m8496_ParameterInfos[] = 
{
	{"l", 0, 134217728, &EmptyCustomAttributesCache, &t117_0_0_0},
};
extern TypeInfo t1691_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8496_MI = 
{
	".ctor", (methodPointerType)&m8180_gshared, &t1691_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1691_m8496_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1691_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8497_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8181_gshared, &t1691_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1691_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8498_MI = 
{
	"Dispose", (methodPointerType)&m8182_gshared, &t1691_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1691_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8499_MI = 
{
	"VerifyState", (methodPointerType)&m8183_gshared, &t1691_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1691_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m8500_MI = 
{
	"MoveNext", (methodPointerType)&m8184_gshared, &t1691_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1691_TI;
extern Il2CppType t306_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8501_MI = 
{
	"get_Current", (methodPointerType)&m8185_gshared, &t1691_TI, &t306_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1691_MIs[] =
{
	&m8496_MI,
	&m8497_MI,
	&m8498_MI,
	&m8499_MI,
	&m8500_MI,
	&m8501_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m8497_MI;
extern MethodInfo m8500_MI;
extern MethodInfo m8498_MI;
extern MethodInfo m8501_MI;
static MethodInfo* t1691_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m8497_MI,
	&m8500_MI,
	&m8498_MI,
	&m8501_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t1685_TI;
static TypeInfo* t1691_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t1685_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t1685_TI;
static Il2CppInterfaceOffsetPair t1691_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t1685_TI, 7},
};
extern MethodInfo m8499_MI;
extern TypeInfo t306_TI;
extern TypeInfo t1691_TI;
static void* t1691_RGCTXData[3] = 
{
	&m8499_MI,
	&t306_TI,
	&t1691_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1691_0_0_0;
extern Il2CppType t1691_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t1691_TI;
extern Il2CppGenericClass t1691_GC;
extern TypeInfo t848_TI;
TypeInfo t1691_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t1691_MIs, t1691_PIs, t1691_FIs, NULL, &t122_TI, NULL, &t848_TI, &t1691_TI, t1691_ITIs, t1691_VT, &EmptyCustomAttributesCache, &t1691_TI, &t1691_0_0_0, &t1691_1_0_0, t1691_IOs, &t1691_GC, NULL, NULL, NULL, t1691_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1691)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 4, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1688_TI;

extern TypeInfo t1688_TI;
extern TypeInfo t306_TI;
extern TypeInfo t35_TI;
extern TypeInfo t345_TI;
extern TypeInfo t1693_TI;
extern TypeInfo t1686_TI;
extern TypeInfo t338_TI;
extern TypeInfo t651_TI;
extern TypeInfo t25_TI;
extern TypeInfo t24_TI;
extern TypeInfo t600_TI;
extern TypeInfo t36_TI;
extern TypeInfo t26_TI;
extern TypeInfo t1684_TI;
extern TypeInfo t1687_TI;
extern TypeInfo t1685_TI;
#include "t1694MD.h"
extern MethodInfo m8531_MI;
extern MethodInfo m1532_MI;
extern MethodInfo m22939_MI;
extern MethodInfo m22931_MI;
extern MethodInfo m73_MI;
extern MethodInfo m2974_MI;
extern MethodInfo m7416_MI;
extern MethodInfo m7325_MI;
extern MethodInfo m8563_MI;
extern MethodInfo m22937_MI;
extern MethodInfo m22941_MI;
extern MethodInfo m22932_MI;
extern MethodInfo m22933_MI;


// Metadata Definition System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>
extern Il2CppType t1693_0_0_1;
FieldInfo t1688_f0_FieldInfo = 
{
	"list", &t1693_0_0_1, &t1688_TI, offsetof(t1688, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1688_FIs[] =
{
	&t1688_f0_FieldInfo,
	NULL
};
extern MethodInfo m8508_MI;
extern MethodInfo m8509_MI;
static PropertyInfo t1688____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo = 
{
	&t1688_TI, "System.Collections.Generic.IList<T>.Item", &m8508_MI, &m8509_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8510_MI;
static PropertyInfo t1688____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t1688_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m8510_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8520_MI;
static PropertyInfo t1688____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t1688_TI, "System.Collections.ICollection.IsSynchronized", &m8520_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8521_MI;
static PropertyInfo t1688____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t1688_TI, "System.Collections.ICollection.SyncRoot", &m8521_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8522_MI;
static PropertyInfo t1688____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t1688_TI, "System.Collections.IList.IsFixedSize", &m8522_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8523_MI;
static PropertyInfo t1688____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t1688_TI, "System.Collections.IList.IsReadOnly", &m8523_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8524_MI;
extern MethodInfo m8525_MI;
static PropertyInfo t1688____System_Collections_IList_Item_PropertyInfo = 
{
	&t1688_TI, "System.Collections.IList.Item", &m8524_MI, &m8525_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8530_MI;
static PropertyInfo t1688____Count_PropertyInfo = 
{
	&t1688_TI, "Count", &m8530_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8531_MI;
static PropertyInfo t1688____Item_PropertyInfo = 
{
	&t1688_TI, "Item", &m8531_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1688_PIs[] =
{
	&t1688____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo,
	&t1688____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t1688____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t1688____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t1688____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t1688____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t1688____System_Collections_IList_Item_PropertyInfo,
	&t1688____Count_PropertyInfo,
	&t1688____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1693_0_0_0;
static ParameterInfo t1688_m8502_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t1693_0_0_0},
};
extern TypeInfo t1688_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8502_MI = 
{
	".ctor", (methodPointerType)&m8186_gshared, &t1688_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1688_m8502_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t306_0_0_0;
static ParameterInfo t1688_m8503_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t306_0_0_0},
};
extern TypeInfo t1688_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8503_MI = 
{
	"System.Collections.Generic.ICollection<T>.Add", (methodPointerType)&m8187_gshared, &t1688_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1688_m8503_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1688_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8504_MI = 
{
	"System.Collections.Generic.ICollection<T>.Clear", (methodPointerType)&m8188_gshared, &t1688_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 481, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t306_0_0_0;
static ParameterInfo t1688_m8505_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t306_0_0_0},
};
extern TypeInfo t1688_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8505_MI = 
{
	"System.Collections.Generic.IList<T>.Insert", (methodPointerType)&m8189_gshared, &t1688_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t1688_m8505_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t306_0_0_0;
static ParameterInfo t1688_m8506_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t306_0_0_0},
};
extern TypeInfo t1688_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8506_MI = 
{
	"System.Collections.Generic.ICollection<T>.Remove", (methodPointerType)&m8190_gshared, &t1688_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1688_m8506_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1688_m8507_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1688_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m8507_MI = 
{
	"System.Collections.Generic.IList<T>.RemoveAt", (methodPointerType)&m8191_gshared, &t1688_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t1688_m8507_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1688_m8508_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1688_TI;
extern Il2CppType t306_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m8508_MI = 
{
	"System.Collections.Generic.IList<T>.get_Item", (methodPointerType)&m8192_gshared, &t1688_TI, &t306_0_0_0, RuntimeInvoker_t14_t35, t1688_m8508_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t306_0_0_0;
static ParameterInfo t1688_m8509_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t306_0_0_0},
};
extern TypeInfo t1688_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8509_MI = 
{
	"System.Collections.Generic.IList<T>.set_Item", (methodPointerType)&m8193_gshared, &t1688_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t1688_m8509_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1688_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m8510_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m8194_gshared, &t1688_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t24_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t1688_m8511_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1688_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m8511_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m8195_gshared, &t1688_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t1688_m8511_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1688_TI;
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8512_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8196_gshared, &t1688_TI, &t36_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1688_m8513_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1688_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8513_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m8197_gshared, &t1688_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t1688_m8513_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1688_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8514_MI = 
{
	"System.Collections.IList.Clear", (methodPointerType)&m8198_gshared, &t1688_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 481, 0, 14, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1688_m8515_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1688_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8515_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m8199_gshared, &t1688_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1688_m8515_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1688_m8516_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1688_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8516_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m8200_gshared, &t1688_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t1688_m8516_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t1688_m8517_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1688_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8517_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m8201_gshared, &t1688_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t1688_m8517_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1688_m8518_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1688_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8518_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m8202_gshared, &t1688_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1688_m8518_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1688_m8519_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1688_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m8519_MI = 
{
	"System.Collections.IList.RemoveAt", (methodPointerType)&m8203_gshared, &t1688_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t1688_m8519_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 19, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1688_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m8520_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m8204_gshared, &t1688_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1688_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8521_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m8205_gshared, &t1688_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1688_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m8522_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m8206_gshared, &t1688_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1688_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m8523_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m8207_gshared, &t1688_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1688_m8524_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1688_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m8524_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m8208_gshared, &t1688_TI, &t14_0_0_0, RuntimeInvoker_t14_t35, t1688_m8524_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t1688_m8525_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1688_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8525_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m8209_gshared, &t1688_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t1688_m8525_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t306_0_0_0;
static ParameterInfo t1688_m8526_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t306_0_0_0},
};
extern TypeInfo t1688_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8526_MI = 
{
	"Contains", (methodPointerType)&m8210_gshared, &t1688_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1688_m8526_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1684_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t1688_m8527_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1684_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1688_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m8527_MI = 
{
	"CopyTo", (methodPointerType)&m8211_gshared, &t1688_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t1688_m8527_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1688_TI;
extern Il2CppType t1685_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8528_MI = 
{
	"GetEnumerator", (methodPointerType)&m8212_gshared, &t1688_TI, &t1685_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t306_0_0_0;
static ParameterInfo t1688_m8529_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t306_0_0_0},
};
extern TypeInfo t1688_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8529_MI = 
{
	"IndexOf", (methodPointerType)&m8213_gshared, &t1688_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t1688_m8529_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1688_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m8530_MI = 
{
	"get_Count", (methodPointerType)&m8214_gshared, &t1688_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1688_m8531_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1688_TI;
extern Il2CppType t306_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m8531_MI = 
{
	"get_Item", (methodPointerType)&m8215_gshared, &t1688_TI, &t306_0_0_0, RuntimeInvoker_t14_t35, t1688_m8531_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 33, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1688_MIs[] =
{
	&m8502_MI,
	&m8503_MI,
	&m8504_MI,
	&m8505_MI,
	&m8506_MI,
	&m8507_MI,
	&m8508_MI,
	&m8509_MI,
	&m8510_MI,
	&m8511_MI,
	&m8512_MI,
	&m8513_MI,
	&m8514_MI,
	&m8515_MI,
	&m8516_MI,
	&m8517_MI,
	&m8518_MI,
	&m8519_MI,
	&m8520_MI,
	&m8521_MI,
	&m8522_MI,
	&m8523_MI,
	&m8524_MI,
	&m8525_MI,
	&m8526_MI,
	&m8527_MI,
	&m8528_MI,
	&m8529_MI,
	&m8530_MI,
	&m8531_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m8512_MI;
extern MethodInfo m8530_MI;
extern MethodInfo m8520_MI;
extern MethodInfo m8521_MI;
extern MethodInfo m8511_MI;
extern MethodInfo m8522_MI;
extern MethodInfo m8523_MI;
extern MethodInfo m8524_MI;
extern MethodInfo m8525_MI;
extern MethodInfo m8513_MI;
extern MethodInfo m8514_MI;
extern MethodInfo m8515_MI;
extern MethodInfo m8516_MI;
extern MethodInfo m8517_MI;
extern MethodInfo m8518_MI;
extern MethodInfo m8519_MI;
extern MethodInfo m8530_MI;
extern MethodInfo m8510_MI;
extern MethodInfo m8503_MI;
extern MethodInfo m8504_MI;
extern MethodInfo m8526_MI;
extern MethodInfo m8527_MI;
extern MethodInfo m8506_MI;
extern MethodInfo m8529_MI;
extern MethodInfo m8505_MI;
extern MethodInfo m8507_MI;
extern MethodInfo m8508_MI;
extern MethodInfo m8509_MI;
extern MethodInfo m8528_MI;
extern MethodInfo m8531_MI;
static MethodInfo* t1688_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m8512_MI,
	&m8530_MI,
	&m8520_MI,
	&m8521_MI,
	&m8511_MI,
	&m8522_MI,
	&m8523_MI,
	&m8524_MI,
	&m8525_MI,
	&m8513_MI,
	&m8514_MI,
	&m8515_MI,
	&m8516_MI,
	&m8517_MI,
	&m8518_MI,
	&m8519_MI,
	&m8530_MI,
	&m8510_MI,
	&m8503_MI,
	&m8504_MI,
	&m8526_MI,
	&m8527_MI,
	&m8506_MI,
	&m8529_MI,
	&m8505_MI,
	&m8507_MI,
	&m8508_MI,
	&m8509_MI,
	&m8528_MI,
	&m8531_MI,
};
extern TypeInfo t600_TI;
extern TypeInfo t651_TI;
extern TypeInfo t1023_TI;
extern TypeInfo t1686_TI;
extern TypeInfo t1693_TI;
extern TypeInfo t1687_TI;
static TypeInfo* t1688_ITIs[] = 
{
	&t600_TI,
	&t651_TI,
	&t1023_TI,
	&t1686_TI,
	&t1693_TI,
	&t1687_TI,
};
extern TypeInfo t600_TI;
extern TypeInfo t651_TI;
extern TypeInfo t1023_TI;
extern TypeInfo t1686_TI;
extern TypeInfo t1693_TI;
extern TypeInfo t1687_TI;
static Il2CppInterfaceOffsetPair t1688_IOs[] = 
{
	{ &t600_TI, 4},
	{ &t651_TI, 5},
	{ &t1023_TI, 9},
	{ &t1686_TI, 20},
	{ &t1693_TI, 27},
	{ &t1687_TI, 32},
};
extern MethodInfo m8531_MI;
extern MethodInfo m8563_MI;
extern TypeInfo t306_TI;
extern MethodInfo m22937_MI;
extern MethodInfo m22941_MI;
extern MethodInfo m22939_MI;
extern MethodInfo m22932_MI;
extern MethodInfo m22933_MI;
extern MethodInfo m22931_MI;
static void* t1688_RGCTXData[9] = 
{
	&m8531_MI,
	&m8563_MI,
	&t306_TI,
	&m22937_MI,
	&m22941_MI,
	&m22939_MI,
	&m22932_MI,
	&m22933_MI,
	&m22931_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1688_0_0_0;
extern Il2CppType t1688_1_0_0;
extern TypeInfo t14_TI;
struct t1688;
extern TypeInfo t1688_TI;
extern Il2CppGenericClass t1688_GC;
extern CustomAttributesCache t850__CustomAttributeCache;
TypeInfo t1688_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ReadOnlyCollection`1", "System.Collections.ObjectModel", t1688_MIs, t1688_PIs, t1688_FIs, NULL, &t14_TI, NULL, NULL, &t1688_TI, t1688_ITIs, t1688_VT, &t850__CustomAttributeCache, &t1688_TI, &t1688_0_0_0, &t1688_1_0_0, t1688_IOs, &t1688_GC, NULL, NULL, NULL, t1688_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1688), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 30, 9, 1, 0, 0, 34, 6, 6};
#include "t1694.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1694_TI;

extern TypeInfo t1694_TI;
extern TypeInfo t1686_TI;
extern TypeInfo t26_TI;
extern TypeInfo t1693_TI;
extern TypeInfo t306_TI;
extern TypeInfo t35_TI;
extern TypeInfo t25_TI;
extern TypeInfo t117_TI;
extern TypeInfo t651_TI;
extern TypeInfo t14_TI;
extern TypeInfo t24_TI;
extern TypeInfo t1687_TI;
extern TypeInfo t1685_TI;
extern TypeInfo t1684_TI;
extern TypeInfo t31_TI;
extern TypeInfo t319_TI;
extern TypeInfo t345_TI;
extern TypeInfo t1023_TI;
extern Il2CppType t306_0_0_0;
extern MethodInfo m22935_MI;
extern MethodInfo m8566_MI;
extern MethodInfo m8567_MI;
extern MethodInfo m22939_MI;
extern MethodInfo m8564_MI;
extern MethodInfo m8562_MI;
extern MethodInfo m22931_MI;
extern MethodInfo m73_MI;
extern MethodInfo m8443_MI;
extern MethodInfo m7415_MI;
extern MethodInfo m7416_MI;
extern MethodInfo m22933_MI;
extern MethodInfo m8555_MI;
extern MethodInfo m8563_MI;
extern MethodInfo m22937_MI;
extern MethodInfo m22941_MI;
extern MethodInfo m8565_MI;
extern MethodInfo m8553_MI;
extern MethodInfo m8558_MI;
extern MethodInfo m8549_MI;
extern MethodInfo m22936_MI;
extern MethodInfo m22932_MI;
extern MethodInfo m22942_MI;
extern MethodInfo m22943_MI;
extern MethodInfo m22940_MI;
extern MethodInfo m1571_MI;
extern MethodInfo m3841_MI;
extern MethodInfo m1959_MI;
extern MethodInfo m1532_MI;
extern MethodInfo m7414_MI;
extern MethodInfo m7417_MI;


// Metadata Definition System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>
extern Il2CppType t1693_0_0_1;
FieldInfo t1694_f0_FieldInfo = 
{
	"list", &t1693_0_0_1, &t1694_TI, offsetof(t1694, f0), &EmptyCustomAttributesCache};
extern Il2CppType t14_0_0_1;
FieldInfo t1694_f1_FieldInfo = 
{
	"syncRoot", &t14_0_0_1, &t1694_TI, offsetof(t1694, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1694_FIs[] =
{
	&t1694_f0_FieldInfo,
	&t1694_f1_FieldInfo,
	NULL
};
extern MethodInfo m8533_MI;
static PropertyInfo t1694____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t1694_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m8533_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8541_MI;
static PropertyInfo t1694____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t1694_TI, "System.Collections.ICollection.IsSynchronized", &m8541_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8542_MI;
static PropertyInfo t1694____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t1694_TI, "System.Collections.ICollection.SyncRoot", &m8542_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8543_MI;
static PropertyInfo t1694____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t1694_TI, "System.Collections.IList.IsFixedSize", &m8543_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8544_MI;
static PropertyInfo t1694____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t1694_TI, "System.Collections.IList.IsReadOnly", &m8544_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8545_MI;
extern MethodInfo m8546_MI;
static PropertyInfo t1694____System_Collections_IList_Item_PropertyInfo = 
{
	&t1694_TI, "System.Collections.IList.Item", &m8545_MI, &m8546_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8559_MI;
static PropertyInfo t1694____Count_PropertyInfo = 
{
	&t1694_TI, "Count", &m8559_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8560_MI;
extern MethodInfo m8561_MI;
static PropertyInfo t1694____Item_PropertyInfo = 
{
	&t1694_TI, "Item", &m8560_MI, &m8561_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1694_PIs[] =
{
	&t1694____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t1694____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t1694____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t1694____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t1694____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t1694____System_Collections_IList_Item_PropertyInfo,
	&t1694____Count_PropertyInfo,
	&t1694____Item_PropertyInfo,
	NULL
};
extern TypeInfo t1694_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8532_MI = 
{
	".ctor", (methodPointerType)&m8216_gshared, &t1694_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1694_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m8533_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m8217_gshared, &t1694_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t24_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t1694_m8534_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1694_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m8534_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m8218_gshared, &t1694_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t1694_m8534_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1694_TI;
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8535_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8219_gshared, &t1694_TI, &t36_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1694_m8536_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1694_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8536_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m8220_gshared, &t1694_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t1694_m8536_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1694_m8537_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1694_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8537_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m8221_gshared, &t1694_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1694_m8537_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1694_m8538_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1694_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8538_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m8222_gshared, &t1694_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t1694_m8538_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t1694_m8539_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1694_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8539_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m8223_gshared, &t1694_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t1694_m8539_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1694_m8540_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1694_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8540_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m8224_gshared, &t1694_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1694_m8540_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1694_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m8541_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m8225_gshared, &t1694_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1694_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8542_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m8226_gshared, &t1694_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1694_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m8543_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m8227_gshared, &t1694_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1694_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m8544_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m8228_gshared, &t1694_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1694_m8545_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1694_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m8545_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m8229_gshared, &t1694_TI, &t14_0_0_0, RuntimeInvoker_t14_t35, t1694_m8545_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t1694_m8546_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1694_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8546_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m8230_gshared, &t1694_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t1694_m8546_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t306_0_0_0;
static ParameterInfo t1694_m8547_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t306_0_0_0},
};
extern TypeInfo t1694_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8547_MI = 
{
	"Add", (methodPointerType)&m8231_gshared, &t1694_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1694_m8547_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1694_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8548_MI = 
{
	"Clear", (methodPointerType)&m8232_gshared, &t1694_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1694_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8549_MI = 
{
	"ClearItems", (methodPointerType)&m8233_gshared, &t1694_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 452, 0, 33, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t306_0_0_0;
static ParameterInfo t1694_m8550_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t306_0_0_0},
};
extern TypeInfo t1694_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8550_MI = 
{
	"Contains", (methodPointerType)&m8234_gshared, &t1694_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1694_m8550_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1684_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t1694_m8551_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1684_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1694_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m8551_MI = 
{
	"CopyTo", (methodPointerType)&m8235_gshared, &t1694_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t1694_m8551_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1694_TI;
extern Il2CppType t1685_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8552_MI = 
{
	"GetEnumerator", (methodPointerType)&m8236_gshared, &t1694_TI, &t1685_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t306_0_0_0;
static ParameterInfo t1694_m8553_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t306_0_0_0},
};
extern TypeInfo t1694_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8553_MI = 
{
	"IndexOf", (methodPointerType)&m8237_gshared, &t1694_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t1694_m8553_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t306_0_0_0;
static ParameterInfo t1694_m8554_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t306_0_0_0},
};
extern TypeInfo t1694_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8554_MI = 
{
	"Insert", (methodPointerType)&m8238_gshared, &t1694_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t1694_m8554_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t306_0_0_0;
static ParameterInfo t1694_m8555_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t306_0_0_0},
};
extern TypeInfo t1694_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8555_MI = 
{
	"InsertItem", (methodPointerType)&m8239_gshared, &t1694_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t1694_m8555_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 34, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t306_0_0_0;
static ParameterInfo t1694_m8556_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t306_0_0_0},
};
extern TypeInfo t1694_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8556_MI = 
{
	"Remove", (methodPointerType)&m8240_gshared, &t1694_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1694_m8556_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1694_m8557_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1694_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m8557_MI = 
{
	"RemoveAt", (methodPointerType)&m8241_gshared, &t1694_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t1694_m8557_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1694_m8558_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1694_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m8558_MI = 
{
	"RemoveItem", (methodPointerType)&m8242_gshared, &t1694_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t1694_m8558_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 35, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1694_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m8559_MI = 
{
	"get_Count", (methodPointerType)&m8243_gshared, &t1694_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1694_m8560_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1694_TI;
extern Il2CppType t306_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m8560_MI = 
{
	"get_Item", (methodPointerType)&m8244_gshared, &t1694_TI, &t306_0_0_0, RuntimeInvoker_t14_t35, t1694_m8560_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t306_0_0_0;
static ParameterInfo t1694_m8561_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t306_0_0_0},
};
extern TypeInfo t1694_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8561_MI = 
{
	"set_Item", (methodPointerType)&m8245_gshared, &t1694_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t1694_m8561_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t306_0_0_0;
static ParameterInfo t1694_m8562_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t306_0_0_0},
};
extern TypeInfo t1694_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8562_MI = 
{
	"SetItem", (methodPointerType)&m8246_gshared, &t1694_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t1694_m8562_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 36, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1694_m8563_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1694_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8563_MI = 
{
	"IsValidItem", (methodPointerType)&m8247_gshared, &t1694_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1694_m8563_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1694_m8564_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1694_TI;
extern Il2CppType t306_0_0_0;
extern void* RuntimeInvoker_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8564_MI = 
{
	"ConvertItem", (methodPointerType)&m8248_gshared, &t1694_TI, &t306_0_0_0, RuntimeInvoker_t14_t14, t1694_m8564_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1693_0_0_0;
static ParameterInfo t1694_m8565_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t1693_0_0_0},
};
extern TypeInfo t1694_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8565_MI = 
{
	"CheckWritable", (methodPointerType)&m8249_gshared, &t1694_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1694_m8565_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1693_0_0_0;
static ParameterInfo t1694_m8566_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t1693_0_0_0},
};
extern TypeInfo t1694_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8566_MI = 
{
	"IsSynchronized", (methodPointerType)&m8250_gshared, &t1694_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1694_m8566_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1693_0_0_0;
static ParameterInfo t1694_m8567_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t1693_0_0_0},
};
extern TypeInfo t1694_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8567_MI = 
{
	"IsFixedSize", (methodPointerType)&m8251_gshared, &t1694_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1694_m8567_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1694_MIs[] =
{
	&m8532_MI,
	&m8533_MI,
	&m8534_MI,
	&m8535_MI,
	&m8536_MI,
	&m8537_MI,
	&m8538_MI,
	&m8539_MI,
	&m8540_MI,
	&m8541_MI,
	&m8542_MI,
	&m8543_MI,
	&m8544_MI,
	&m8545_MI,
	&m8546_MI,
	&m8547_MI,
	&m8548_MI,
	&m8549_MI,
	&m8550_MI,
	&m8551_MI,
	&m8552_MI,
	&m8553_MI,
	&m8554_MI,
	&m8555_MI,
	&m8556_MI,
	&m8557_MI,
	&m8558_MI,
	&m8559_MI,
	&m8560_MI,
	&m8561_MI,
	&m8562_MI,
	&m8563_MI,
	&m8564_MI,
	&m8565_MI,
	&m8566_MI,
	&m8567_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m8535_MI;
extern MethodInfo m8559_MI;
extern MethodInfo m8541_MI;
extern MethodInfo m8542_MI;
extern MethodInfo m8534_MI;
extern MethodInfo m8543_MI;
extern MethodInfo m8544_MI;
extern MethodInfo m8545_MI;
extern MethodInfo m8546_MI;
extern MethodInfo m8536_MI;
extern MethodInfo m8548_MI;
extern MethodInfo m8537_MI;
extern MethodInfo m8538_MI;
extern MethodInfo m8539_MI;
extern MethodInfo m8540_MI;
extern MethodInfo m8557_MI;
extern MethodInfo m8559_MI;
extern MethodInfo m8533_MI;
extern MethodInfo m8547_MI;
extern MethodInfo m8548_MI;
extern MethodInfo m8550_MI;
extern MethodInfo m8551_MI;
extern MethodInfo m8556_MI;
extern MethodInfo m8553_MI;
extern MethodInfo m8554_MI;
extern MethodInfo m8557_MI;
extern MethodInfo m8560_MI;
extern MethodInfo m8561_MI;
extern MethodInfo m8552_MI;
extern MethodInfo m8549_MI;
extern MethodInfo m8555_MI;
extern MethodInfo m8558_MI;
extern MethodInfo m8562_MI;
static MethodInfo* t1694_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m8535_MI,
	&m8559_MI,
	&m8541_MI,
	&m8542_MI,
	&m8534_MI,
	&m8543_MI,
	&m8544_MI,
	&m8545_MI,
	&m8546_MI,
	&m8536_MI,
	&m8548_MI,
	&m8537_MI,
	&m8538_MI,
	&m8539_MI,
	&m8540_MI,
	&m8557_MI,
	&m8559_MI,
	&m8533_MI,
	&m8547_MI,
	&m8548_MI,
	&m8550_MI,
	&m8551_MI,
	&m8556_MI,
	&m8553_MI,
	&m8554_MI,
	&m8557_MI,
	&m8560_MI,
	&m8561_MI,
	&m8552_MI,
	&m8549_MI,
	&m8555_MI,
	&m8558_MI,
	&m8562_MI,
};
extern TypeInfo t600_TI;
extern TypeInfo t651_TI;
extern TypeInfo t1023_TI;
extern TypeInfo t1686_TI;
extern TypeInfo t1693_TI;
extern TypeInfo t1687_TI;
static TypeInfo* t1694_ITIs[] = 
{
	&t600_TI,
	&t651_TI,
	&t1023_TI,
	&t1686_TI,
	&t1693_TI,
	&t1687_TI,
};
extern TypeInfo t600_TI;
extern TypeInfo t651_TI;
extern TypeInfo t1023_TI;
extern TypeInfo t1686_TI;
extern TypeInfo t1693_TI;
extern TypeInfo t1687_TI;
static Il2CppInterfaceOffsetPair t1694_IOs[] = 
{
	{ &t600_TI, 4},
	{ &t651_TI, 5},
	{ &t1023_TI, 9},
	{ &t1686_TI, 20},
	{ &t1693_TI, 27},
	{ &t1687_TI, 32},
};
extern TypeInfo t117_TI;
extern MethodInfo m8443_MI;
extern MethodInfo m22935_MI;
extern MethodInfo m22933_MI;
extern MethodInfo m22931_MI;
extern MethodInfo m8564_MI;
extern MethodInfo m8555_MI;
extern MethodInfo m8563_MI;
extern TypeInfo t306_TI;
extern MethodInfo m22937_MI;
extern MethodInfo m22941_MI;
extern MethodInfo m8565_MI;
extern MethodInfo m8553_MI;
extern MethodInfo m8558_MI;
extern MethodInfo m8566_MI;
extern MethodInfo m8567_MI;
extern MethodInfo m22939_MI;
extern MethodInfo m8562_MI;
extern MethodInfo m8549_MI;
extern MethodInfo m22936_MI;
extern MethodInfo m22932_MI;
extern MethodInfo m22942_MI;
extern MethodInfo m22943_MI;
extern MethodInfo m22940_MI;
extern Il2CppType t306_0_0_0;
static void* t1694_RGCTXData[25] = 
{
	&t117_TI,
	&m8443_MI,
	&m22935_MI,
	&m22933_MI,
	&m22931_MI,
	&m8564_MI,
	&m8555_MI,
	&m8563_MI,
	&t306_TI,
	&m22937_MI,
	&m22941_MI,
	&m8565_MI,
	&m8553_MI,
	&m8558_MI,
	&m8566_MI,
	&m8567_MI,
	&m22939_MI,
	&m8562_MI,
	&m8549_MI,
	&m22936_MI,
	&m22932_MI,
	&m22942_MI,
	&m22943_MI,
	&m22940_MI,
	(void*)&t306_0_0_0,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1694_0_0_0;
extern Il2CppType t1694_1_0_0;
extern TypeInfo t14_TI;
struct t1694;
extern TypeInfo t1694_TI;
extern Il2CppGenericClass t1694_GC;
extern CustomAttributesCache t849__CustomAttributeCache;
TypeInfo t1694_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Collection`1", "System.Collections.ObjectModel", t1694_MIs, t1694_PIs, t1694_FIs, NULL, &t14_TI, NULL, NULL, &t1694_TI, t1694_ITIs, t1694_VT, &t849__CustomAttributeCache, &t1694_TI, &t1694_0_0_0, &t1694_1_0_0, t1694_IOs, &t1694_GC, NULL, NULL, NULL, t1694_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1694), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 36, 8, 2, 0, 0, 37, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1695_TI;
#include "t1695MD.h"

#include "t1696.h"
extern TypeInfo t1695_TI;
extern TypeInfo t5136_TI;
extern TypeInfo t31_TI;
extern TypeInfo t306_TI;
extern TypeInfo t26_TI;
extern TypeInfo t845_TI;
extern TypeInfo t534_TI;
extern TypeInfo t1696_TI;
extern TypeInfo t35_TI;
#include "t1696MD.h"
extern Il2CppType t5136_0_0_0;
extern Il2CppType t306_0_0_0;
extern Il2CppType t845_0_0_0;
extern MethodInfo m73_MI;
extern MethodInfo m1571_MI;
extern MethodInfo m3005_MI;
extern MethodInfo m3003_MI;
extern MethodInfo m6460_MI;
extern MethodInfo m8573_MI;
extern MethodInfo m22944_MI;
extern MethodInfo m16836_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.IEventSystemHandler>
extern Il2CppType t1695_0_0_49;
FieldInfo t1695_f0_FieldInfo = 
{
	"_default", &t1695_0_0_49, &t1695_TI, offsetof(t1695_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1695_FIs[] =
{
	&t1695_f0_FieldInfo,
	NULL
};
extern MethodInfo m8572_MI;
static PropertyInfo t1695____Default_PropertyInfo = 
{
	&t1695_TI, "Default", &m8572_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1695_PIs[] =
{
	&t1695____Default_PropertyInfo,
	NULL
};
extern TypeInfo t1695_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8568_MI = 
{
	".ctor", (methodPointerType)&m8252_gshared, &t1695_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1695_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8569_MI = 
{
	".cctor", (methodPointerType)&m8253_gshared, &t1695_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1695_m8570_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1695_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8570_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m8254_gshared, &t1695_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t1695_m8570_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t1695_m8571_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1695_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8571_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m8255_gshared, &t1695_TI, &t26_0_0_0, RuntimeInvoker_t26_t14_t14, t1695_m8571_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t306_0_0_0;
static ParameterInfo t1695_m22944_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t306_0_0_0},
};
extern TypeInfo t1695_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22944_MI = 
{
	"GetHashCode", NULL, &t1695_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t1695_m22944_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t306_0_0_0;
extern Il2CppType t306_0_0_0;
static ParameterInfo t1695_m16836_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t306_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t306_0_0_0},
};
extern TypeInfo t1695_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m16836_MI = 
{
	"Equals", NULL, &t1695_TI, &t26_0_0_0, RuntimeInvoker_t26_t14_t14, t1695_m16836_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1695_TI;
extern Il2CppType t1695_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8572_MI = 
{
	"get_Default", (methodPointerType)&m8256_gshared, &t1695_TI, &t1695_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1695_MIs[] =
{
	&m8568_MI,
	&m8569_MI,
	&m8570_MI,
	&m8571_MI,
	&m22944_MI,
	&m16836_MI,
	&m8572_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m16836_MI;
extern MethodInfo m22944_MI;
extern MethodInfo m8571_MI;
extern MethodInfo m8570_MI;
static MethodInfo* t1695_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m16836_MI,
	&m22944_MI,
	&m8571_MI,
	&m8570_MI,
	NULL,
	NULL,
};
extern TypeInfo t5137_TI;
extern TypeInfo t868_TI;
static TypeInfo* t1695_ITIs[] = 
{
	&t5137_TI,
	&t868_TI,
};
extern TypeInfo t5137_TI;
extern TypeInfo t868_TI;
static Il2CppInterfaceOffsetPair t1695_IOs[] = 
{
	{ &t5137_TI, 4},
	{ &t868_TI, 6},
};
extern Il2CppType t5136_0_0_0;
extern Il2CppType t306_0_0_0;
extern TypeInfo t1695_TI;
extern TypeInfo t1695_TI;
extern TypeInfo t1696_TI;
extern MethodInfo m8573_MI;
extern TypeInfo t306_TI;
extern MethodInfo m22944_MI;
extern MethodInfo m16836_MI;
static void* t1695_RGCTXData[9] = 
{
	(void*)&t5136_0_0_0,
	(void*)&t306_0_0_0,
	&t1695_TI,
	&t1695_TI,
	&t1696_TI,
	&m8573_MI,
	&t306_TI,
	&m22944_MI,
	&m16836_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1695_0_0_0;
extern Il2CppType t1695_1_0_0;
extern TypeInfo t14_TI;
struct t1695;
extern TypeInfo t1695_TI;
extern Il2CppGenericClass t1695_GC;
TypeInfo t1695_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t1695_MIs, t1695_PIs, t1695_FIs, NULL, &t14_TI, NULL, NULL, &t1695_TI, t1695_ITIs, t1695_VT, &EmptyCustomAttributesCache, &t1695_TI, &t1695_0_0_0, &t1695_1_0_0, t1695_IOs, &t1695_GC, NULL, NULL, NULL, t1695_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1695), 0, -1, sizeof(t1695_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5137_TI;



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<UnityEngine.EventSystems.IEventSystemHandler>
extern Il2CppType t306_0_0_0;
extern Il2CppType t306_0_0_0;
static ParameterInfo t5137_m22945_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t306_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t306_0_0_0},
};
extern TypeInfo t5137_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22945_MI = 
{
	"Equals", NULL, &t5137_TI, &t26_0_0_0, RuntimeInvoker_t26_t14_t14, t5137_m22945_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t306_0_0_0;
static ParameterInfo t5137_m22946_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t306_0_0_0},
};
extern TypeInfo t5137_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22946_MI = 
{
	"GetHashCode", NULL, &t5137_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t5137_m22946_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5137_MIs[] =
{
	&m22945_MI,
	&m22946_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5137_0_0_0;
extern Il2CppType t5137_1_0_0;
struct t5137;
extern TypeInfo t5137_TI;
extern Il2CppGenericClass t5137_GC;
TypeInfo t5137_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t5137_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5137_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5137_TI, &t5137_0_0_0, &t5137_1_0_0, NULL, &t5137_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5136_TI;



// Metadata Definition System.IEquatable`1<UnityEngine.EventSystems.IEventSystemHandler>
extern Il2CppType t306_0_0_0;
static ParameterInfo t5136_m22947_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t306_0_0_0},
};
extern TypeInfo t5136_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22947_MI = 
{
	"Equals", NULL, &t5136_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t5136_m22947_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5136_MIs[] =
{
	&m22947_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5136_0_0_0;
extern Il2CppType t5136_1_0_0;
struct t5136;
extern TypeInfo t5136_TI;
extern Il2CppGenericClass t5136_GC;
TypeInfo t5136_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t5136_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5136_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5136_TI, &t5136_0_0_0, &t5136_1_0_0, NULL, &t5136_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1696_TI;

extern TypeInfo t306_TI;
extern TypeInfo t14_TI;
extern TypeInfo t35_TI;
extern TypeInfo t26_TI;
extern MethodInfo m8568_MI;
extern MethodInfo m71_MI;
extern MethodInfo m70_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.IEventSystemHandler>
extern TypeInfo t1696_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8573_MI = 
{
	".ctor", (methodPointerType)&m8287_gshared, &t1696_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t306_0_0_0;
static ParameterInfo t1696_m8574_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t306_0_0_0},
};
extern TypeInfo t1696_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8574_MI = 
{
	"GetHashCode", (methodPointerType)&m8288_gshared, &t1696_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t1696_m8574_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t306_0_0_0;
extern Il2CppType t306_0_0_0;
static ParameterInfo t1696_m8575_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t306_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t306_0_0_0},
};
extern TypeInfo t1696_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8575_MI = 
{
	"Equals", (methodPointerType)&m8289_gshared, &t1696_TI, &t26_0_0_0, RuntimeInvoker_t26_t14_t14, t1696_m8575_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1696_MIs[] =
{
	&m8573_MI,
	&m8574_MI,
	&m8575_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m8575_MI;
extern MethodInfo m8574_MI;
extern MethodInfo m8571_MI;
extern MethodInfo m8570_MI;
extern MethodInfo m8574_MI;
extern MethodInfo m8575_MI;
static MethodInfo* t1696_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m8575_MI,
	&m8574_MI,
	&m8571_MI,
	&m8570_MI,
	&m8574_MI,
	&m8575_MI,
};
extern TypeInfo t5137_TI;
extern TypeInfo t868_TI;
static Il2CppInterfaceOffsetPair t1696_IOs[] = 
{
	{ &t5137_TI, 4},
	{ &t868_TI, 6},
};
extern Il2CppType t5136_0_0_0;
extern Il2CppType t306_0_0_0;
extern TypeInfo t1695_TI;
extern TypeInfo t1695_TI;
extern TypeInfo t1696_TI;
extern MethodInfo m8573_MI;
extern TypeInfo t306_TI;
extern MethodInfo m22944_MI;
extern MethodInfo m16836_MI;
extern MethodInfo m8568_MI;
extern TypeInfo t306_TI;
static void* t1696_RGCTXData[11] = 
{
	(void*)&t5136_0_0_0,
	(void*)&t306_0_0_0,
	&t1695_TI,
	&t1695_TI,
	&t1696_TI,
	&m8573_MI,
	&t306_TI,
	&m22944_MI,
	&m16836_MI,
	&m8568_MI,
	&t306_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1696_0_0_0;
extern Il2CppType t1696_1_0_0;
extern TypeInfo t1695_TI;
struct t1696;
extern TypeInfo t1696_TI;
extern Il2CppGenericClass t1696_GC;
extern TypeInfo t844_TI;
TypeInfo t1696_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t1696_MIs, NULL, NULL, NULL, &t1695_TI, NULL, &t844_TI, &t1696_TI, NULL, t1696_VT, &EmptyCustomAttributesCache, &t1696_TI, &t1696_0_0_0, &t1696_1_0_0, t1696_IOs, &t1696_GC, NULL, NULL, NULL, t1696_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1696), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1689_TI;



// Metadata Definition System.Predicate`1<UnityEngine.EventSystems.IEventSystemHandler>
extern Il2CppType t14_0_0_0;
extern Il2CppType t77_0_0_0;
static ParameterInfo t1689_m8576_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t77_0_0_0},
};
extern TypeInfo t1689_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t77 (MethodInfo* method, void* obj, void** args);
MethodInfo m8576_MI = 
{
	".ctor", (methodPointerType)&m8290_gshared, &t1689_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t77, t1689_m8576_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t306_0_0_0;
static ParameterInfo t1689_m8577_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t306_0_0_0},
};
extern TypeInfo t1689_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8577_MI = 
{
	"Invoke", (methodPointerType)&m8291_gshared, &t1689_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1689_m8577_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t306_0_0_0;
extern Il2CppType t76_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t1689_m8578_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t306_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t76_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1689_TI;
extern Il2CppType t75_0_0_0;
extern void* RuntimeInvoker_t14_t14_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8578_MI = 
{
	"BeginInvoke", (methodPointerType)&m8292_gshared, &t1689_TI, &t75_0_0_0, RuntimeInvoker_t14_t14_t14_t14, t1689_m8578_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t75_0_0_0;
static ParameterInfo t1689_m8579_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t75_0_0_0},
};
extern TypeInfo t1689_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8579_MI = 
{
	"EndInvoke", (methodPointerType)&m8293_gshared, &t1689_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1689_m8579_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1689_MIs[] =
{
	&m8576_MI,
	&m8577_MI,
	&m8578_MI,
	&m8579_MI,
	NULL
};
extern MethodInfo m1719_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1720_MI;
extern MethodInfo m72_MI;
extern MethodInfo m1721_MI;
extern MethodInfo m1722_MI;
extern MethodInfo m1721_MI;
extern MethodInfo m1723_MI;
extern MethodInfo m1724_MI;
extern MethodInfo m1725_MI;
extern MethodInfo m8577_MI;
extern MethodInfo m8578_MI;
extern MethodInfo m8579_MI;
static MethodInfo* t1689_VT[] =
{
	&m1719_MI,
	&m50_MI,
	&m1720_MI,
	&m72_MI,
	&m1721_MI,
	&m1722_MI,
	&m1721_MI,
	&m1723_MI,
	&m1724_MI,
	&m1725_MI,
	&m8577_MI,
	&m8578_MI,
	&m8579_MI,
};
extern TypeInfo t374_TI;
extern TypeInfo t375_TI;
static Il2CppInterfaceOffsetPair t1689_IOs[] = 
{
	{ &t374_TI, 4},
	{ &t375_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1689_0_0_0;
extern Il2CppType t1689_1_0_0;
extern TypeInfo t211_TI;
struct t1689;
extern TypeInfo t1689_TI;
extern Il2CppGenericClass t1689_GC;
TypeInfo t1689_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Predicate`1", "System", t1689_MIs, NULL, NULL, NULL, &t211_TI, NULL, NULL, &t1689_TI, NULL, t1689_VT, &EmptyCustomAttributesCache, &t1689_TI, &t1689_0_0_0, &t1689_1_0_0, t1689_IOs, &t1689_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1689), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1697_TI;

#include "t1698.h"
extern TypeInfo t1697_TI;
extern TypeInfo t3293_TI;
extern TypeInfo t31_TI;
extern TypeInfo t306_TI;
extern TypeInfo t26_TI;
extern TypeInfo t833_TI;
extern TypeInfo t534_TI;
extern TypeInfo t1698_TI;
extern TypeInfo t35_TI;
extern TypeInfo t319_TI;
#include "t1698MD.h"
extern Il2CppType t3293_0_0_0;
extern Il2CppType t306_0_0_0;
extern Il2CppType t833_0_0_0;
extern MethodInfo m73_MI;
extern MethodInfo m1571_MI;
extern MethodInfo m3005_MI;
extern MethodInfo m3003_MI;
extern MethodInfo m6460_MI;
extern MethodInfo m8584_MI;
extern MethodInfo m22948_MI;
extern MethodInfo m6482_MI;


// Metadata Definition System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.IEventSystemHandler>
extern Il2CppType t1697_0_0_49;
FieldInfo t1697_f0_FieldInfo = 
{
	"_default", &t1697_0_0_49, &t1697_TI, offsetof(t1697_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1697_FIs[] =
{
	&t1697_f0_FieldInfo,
	NULL
};
extern MethodInfo m8583_MI;
static PropertyInfo t1697____Default_PropertyInfo = 
{
	&t1697_TI, "Default", &m8583_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1697_PIs[] =
{
	&t1697____Default_PropertyInfo,
	NULL
};
extern TypeInfo t1697_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8580_MI = 
{
	".ctor", (methodPointerType)&m8294_gshared, &t1697_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1697_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8581_MI = 
{
	".cctor", (methodPointerType)&m8295_gshared, &t1697_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t1697_m8582_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1697_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8582_MI = 
{
	"System.Collections.IComparer.Compare", (methodPointerType)&m8296_gshared, &t1697_TI, &t35_0_0_0, RuntimeInvoker_t35_t14_t14, t1697_m8582_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t306_0_0_0;
extern Il2CppType t306_0_0_0;
static ParameterInfo t1697_m22948_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t306_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t306_0_0_0},
};
extern TypeInfo t1697_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22948_MI = 
{
	"Compare", NULL, &t1697_TI, &t35_0_0_0, RuntimeInvoker_t35_t14_t14, t1697_m22948_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1697_TI;
extern Il2CppType t1697_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8583_MI = 
{
	"get_Default", (methodPointerType)&m8297_gshared, &t1697_TI, &t1697_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1697_MIs[] =
{
	&m8580_MI,
	&m8581_MI,
	&m8582_MI,
	&m22948_MI,
	&m8583_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m22948_MI;
extern MethodInfo m8582_MI;
static MethodInfo* t1697_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m22948_MI,
	&m8582_MI,
	NULL,
};
extern TypeInfo t3292_TI;
extern TypeInfo t726_TI;
static TypeInfo* t1697_ITIs[] = 
{
	&t3292_TI,
	&t726_TI,
};
extern TypeInfo t3292_TI;
extern TypeInfo t726_TI;
static Il2CppInterfaceOffsetPair t1697_IOs[] = 
{
	{ &t3292_TI, 4},
	{ &t726_TI, 5},
};
extern Il2CppType t3293_0_0_0;
extern Il2CppType t306_0_0_0;
extern TypeInfo t1697_TI;
extern TypeInfo t1697_TI;
extern TypeInfo t1698_TI;
extern MethodInfo m8584_MI;
extern TypeInfo t306_TI;
extern MethodInfo m22948_MI;
static void* t1697_RGCTXData[8] = 
{
	(void*)&t3293_0_0_0,
	(void*)&t306_0_0_0,
	&t1697_TI,
	&t1697_TI,
	&t1698_TI,
	&m8584_MI,
	&t306_TI,
	&m22948_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1697_0_0_0;
extern Il2CppType t1697_1_0_0;
extern TypeInfo t14_TI;
struct t1697;
extern TypeInfo t1697_TI;
extern Il2CppGenericClass t1697_GC;
TypeInfo t1697_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparer`1", "System.Collections.Generic", t1697_MIs, t1697_PIs, t1697_FIs, NULL, &t14_TI, NULL, NULL, &t1697_TI, t1697_ITIs, t1697_VT, &EmptyCustomAttributesCache, &t1697_TI, &t1697_0_0_0, &t1697_1_0_0, t1697_IOs, &t1697_GC, NULL, NULL, NULL, t1697_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1697), 0, -1, sizeof(t1697_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 5, 1, 1, 0, 0, 7, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3292_TI;



// Metadata Definition System.Collections.Generic.IComparer`1<UnityEngine.EventSystems.IEventSystemHandler>
extern Il2CppType t306_0_0_0;
extern Il2CppType t306_0_0_0;
static ParameterInfo t3292_m16844_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t306_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t306_0_0_0},
};
extern TypeInfo t3292_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m16844_MI = 
{
	"Compare", NULL, &t3292_TI, &t35_0_0_0, RuntimeInvoker_t35_t14_t14, t3292_m16844_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3292_MIs[] =
{
	&m16844_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3292_0_0_0;
extern Il2CppType t3292_1_0_0;
struct t3292;
extern TypeInfo t3292_TI;
extern Il2CppGenericClass t3292_GC;
TypeInfo t3292_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t3292_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3292_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3292_TI, &t3292_0_0_0, &t3292_1_0_0, NULL, &t3292_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3293_TI;



// Metadata Definition System.IComparable`1<UnityEngine.EventSystems.IEventSystemHandler>
extern Il2CppType t306_0_0_0;
static ParameterInfo t3293_m16845_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t306_0_0_0},
};
extern TypeInfo t3293_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m16845_MI = 
{
	"CompareTo", NULL, &t3293_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t3293_m16845_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3293_MIs[] =
{
	&m16845_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3293_0_0_0;
extern Il2CppType t3293_1_0_0;
struct t3293;
extern TypeInfo t3293_TI;
extern Il2CppGenericClass t3293_GC;
TypeInfo t3293_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t3293_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3293_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3293_TI, &t3293_0_0_0, &t3293_1_0_0, NULL, &t3293_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1698_TI;

extern TypeInfo t306_TI;
extern TypeInfo t3293_TI;
extern TypeInfo t35_TI;
extern TypeInfo t43_TI;
extern TypeInfo t14_TI;
extern TypeInfo t319_TI;
extern MethodInfo m8580_MI;
extern MethodInfo m16845_MI;
extern MethodInfo m7322_MI;
extern MethodInfo m1959_MI;


// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.IEventSystemHandler>
extern TypeInfo t1698_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8584_MI = 
{
	".ctor", (methodPointerType)&m8298_gshared, &t1698_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t306_0_0_0;
extern Il2CppType t306_0_0_0;
static ParameterInfo t1698_m8585_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t306_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t306_0_0_0},
};
extern TypeInfo t1698_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8585_MI = 
{
	"Compare", (methodPointerType)&m8299_gshared, &t1698_TI, &t35_0_0_0, RuntimeInvoker_t35_t14_t14, t1698_m8585_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1698_MIs[] =
{
	&m8584_MI,
	&m8585_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m8585_MI;
extern MethodInfo m8582_MI;
extern MethodInfo m8585_MI;
static MethodInfo* t1698_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m8585_MI,
	&m8582_MI,
	&m8585_MI,
};
extern TypeInfo t3292_TI;
extern TypeInfo t726_TI;
static Il2CppInterfaceOffsetPair t1698_IOs[] = 
{
	{ &t3292_TI, 4},
	{ &t726_TI, 5},
};
extern Il2CppType t3293_0_0_0;
extern Il2CppType t306_0_0_0;
extern TypeInfo t1697_TI;
extern TypeInfo t1697_TI;
extern TypeInfo t1698_TI;
extern MethodInfo m8584_MI;
extern TypeInfo t306_TI;
extern MethodInfo m22948_MI;
extern MethodInfo m8580_MI;
extern TypeInfo t306_TI;
extern TypeInfo t3293_TI;
extern MethodInfo m16845_MI;
static void* t1698_RGCTXData[12] = 
{
	(void*)&t3293_0_0_0,
	(void*)&t306_0_0_0,
	&t1697_TI,
	&t1697_TI,
	&t1698_TI,
	&m8584_MI,
	&t306_TI,
	&m22948_MI,
	&m8580_MI,
	&t306_TI,
	&t3293_TI,
	&m16845_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1698_0_0_0;
extern Il2CppType t1698_1_0_0;
extern TypeInfo t1697_TI;
struct t1698;
extern TypeInfo t1698_TI;
extern Il2CppGenericClass t1698_GC;
extern TypeInfo t832_TI;
TypeInfo t1698_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t1698_MIs, NULL, NULL, NULL, &t1697_TI, NULL, &t832_TI, &t1698_TI, NULL, t1698_VT, &EmptyCustomAttributesCache, &t1698_TI, &t1698_0_0_0, &t1698_1_0_0, t1698_IOs, &t1698_GC, NULL, NULL, NULL, t1698_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1698), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1690_TI;
#include "t1690MD.h"



// Metadata Definition System.Comparison`1<UnityEngine.EventSystems.IEventSystemHandler>
extern Il2CppType t14_0_0_0;
extern Il2CppType t77_0_0_0;
static ParameterInfo t1690_m8586_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t77_0_0_0},
};
extern TypeInfo t1690_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t77 (MethodInfo* method, void* obj, void** args);
MethodInfo m8586_MI = 
{
	".ctor", (methodPointerType)&m8330_gshared, &t1690_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t77, t1690_m8586_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t306_0_0_0;
extern Il2CppType t306_0_0_0;
static ParameterInfo t1690_m8587_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t306_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t306_0_0_0},
};
extern TypeInfo t1690_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8587_MI = 
{
	"Invoke", (methodPointerType)&m8331_gshared, &t1690_TI, &t35_0_0_0, RuntimeInvoker_t35_t14_t14, t1690_m8587_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t306_0_0_0;
extern Il2CppType t306_0_0_0;
extern Il2CppType t76_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t1690_m8588_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t306_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t306_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t76_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1690_TI;
extern Il2CppType t75_0_0_0;
extern void* RuntimeInvoker_t14_t14_t14_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8588_MI = 
{
	"BeginInvoke", (methodPointerType)&m8332_gshared, &t1690_TI, &t75_0_0_0, RuntimeInvoker_t14_t14_t14_t14_t14, t1690_m8588_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t75_0_0_0;
static ParameterInfo t1690_m8589_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t75_0_0_0},
};
extern TypeInfo t1690_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8589_MI = 
{
	"EndInvoke", (methodPointerType)&m8333_gshared, &t1690_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t1690_m8589_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1690_MIs[] =
{
	&m8586_MI,
	&m8587_MI,
	&m8588_MI,
	&m8589_MI,
	NULL
};
extern MethodInfo m1719_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1720_MI;
extern MethodInfo m72_MI;
extern MethodInfo m1721_MI;
extern MethodInfo m1722_MI;
extern MethodInfo m1721_MI;
extern MethodInfo m1723_MI;
extern MethodInfo m1724_MI;
extern MethodInfo m1725_MI;
extern MethodInfo m8587_MI;
extern MethodInfo m8588_MI;
extern MethodInfo m8589_MI;
static MethodInfo* t1690_VT[] =
{
	&m1719_MI,
	&m50_MI,
	&m1720_MI,
	&m72_MI,
	&m1721_MI,
	&m1722_MI,
	&m1721_MI,
	&m1723_MI,
	&m1724_MI,
	&m1725_MI,
	&m8587_MI,
	&m8588_MI,
	&m8589_MI,
};
extern TypeInfo t374_TI;
extern TypeInfo t375_TI;
static Il2CppInterfaceOffsetPair t1690_IOs[] = 
{
	{ &t374_TI, 4},
	{ &t375_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1690_0_0_0;
extern Il2CppType t1690_1_0_0;
extern TypeInfo t211_TI;
struct t1690;
extern TypeInfo t1690_TI;
extern Il2CppGenericClass t1690_GC;
TypeInfo t1690_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparison`1", "System", t1690_MIs, NULL, NULL, NULL, &t211_TI, NULL, NULL, &t1690_TI, NULL, t1690_VT, &EmptyCustomAttributesCache, &t1690_TI, &t1690_0_0_0, &t1690_1_0_0, t1690_IOs, &t1690_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1690), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t96.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t96_TI;
#include "t96MD.h"

#include "t1699.h"
#include "t98.h"
extern TypeInfo t96_TI;
extern TypeInfo t1699_TI;
extern TypeInfo t35_TI;
extern TypeInfo t117_TI;
extern TypeInfo t98_TI;
extern TypeInfo t25_TI;
#include "t1699MD.h"
#include "t98MD.h"
#include "t38MD.h"
extern MethodInfo m8591_MI;
extern MethodInfo m8597_MI;
extern MethodInfo m8628_MI;
extern MethodInfo m8619_MI;
extern MethodInfo m73_MI;
extern MethodInfo m16896_MI;
extern MethodInfo m8593_MI;
extern MethodInfo m8626_MI;
extern MethodInfo m8655_MI;
extern MethodInfo m8625_MI;
extern MethodInfo m2892_MI;
extern MethodInfo m1337_MI;
extern MethodInfo m8627_MI;
struct t1231;
#include "t1231.h"
struct t1231;
 t14 * m16849_gshared (t14 * __this, MethodInfo* method);
#define m16849(__this, method) (t14 *)m16849_gshared((t14 *)__this, method)
#define m16896(__this, method) (t117 *)m16849_gshared((t14 *)__this, method)
extern MethodInfo m16896_MI;


// Metadata Definition UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
extern Il2CppType t1699_0_0_33;
FieldInfo t96_f0_FieldInfo = 
{
	"m_Stack", &t1699_0_0_33, &t96_TI, offsetof(t96, f0), &EmptyCustomAttributesCache};
extern Il2CppType t98_0_0_33;
FieldInfo t96_f1_FieldInfo = 
{
	"m_ActionOnGet", &t98_0_0_33, &t96_TI, offsetof(t96, f1), &EmptyCustomAttributesCache};
extern Il2CppType t98_0_0_33;
FieldInfo t96_f2_FieldInfo = 
{
	"m_ActionOnRelease", &t98_0_0_33, &t96_TI, offsetof(t96, f2), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
extern CustomAttributesCache t299__CustomAttributeCache_U3CcountAllU3Ek__BackingField;
FieldInfo t96_f3_FieldInfo = 
{
	"<countAll>k__BackingField", &t35_0_0_1, &t96_TI, offsetof(t96, f3), &t299__CustomAttributeCache_U3CcountAllU3Ek__BackingField};
static FieldInfo* t96_FIs[] =
{
	&t96_f0_FieldInfo,
	&t96_f1_FieldInfo,
	&t96_f2_FieldInfo,
	&t96_f3_FieldInfo,
	NULL
};
extern MethodInfo m8591_MI;
extern MethodInfo m8593_MI;
static PropertyInfo t96____countAll_PropertyInfo = 
{
	&t96_TI, "countAll", &m8591_MI, &m8593_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8595_MI;
static PropertyInfo t96____countActive_PropertyInfo = 
{
	&t96_TI, "countActive", &m8595_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8597_MI;
static PropertyInfo t96____countInactive_PropertyInfo = 
{
	&t96_TI, "countInactive", &m8597_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t96_PIs[] =
{
	&t96____countAll_PropertyInfo,
	&t96____countActive_PropertyInfo,
	&t96____countInactive_PropertyInfo,
	NULL
};
extern Il2CppType t98_0_0_0;
extern Il2CppType t98_0_0_0;
static ParameterInfo t96_m1393_ParameterInfos[] = 
{
	{"actionOnGet", 0, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
	{"actionOnRelease", 1, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
};
extern TypeInfo t96_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m1393_MI = 
{
	".ctor", (methodPointerType)&m8590_gshared, &t96_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t14, t96_m1393_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t96_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t299__CustomAttributeCache_m2061;
MethodInfo m8591_MI = 
{
	"get_countAll", (methodPointerType)&m8592_gshared, &t96_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &t299__CustomAttributeCache_m2061, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t96_m8593_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t96_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t299__CustomAttributeCache_m2062;
MethodInfo m8593_MI = 
{
	"set_countAll", (methodPointerType)&m8594_gshared, &t96_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t96_m8593_ParameterInfos, &t299__CustomAttributeCache_m2062, 2177, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t96_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m8595_MI = 
{
	"get_countActive", (methodPointerType)&m8596_gshared, &t96_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t96_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m8597_MI = 
{
	"get_countInactive", (methodPointerType)&m8598_gshared, &t96_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t96_TI;
extern Il2CppType t117_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8599_MI = 
{
	"Get", (methodPointerType)&m8600_gshared, &t96_TI, &t117_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t117_0_0_0;
static ParameterInfo t96_m8601_ParameterInfos[] = 
{
	{"element", 0, 134217728, &EmptyCustomAttributesCache, &t117_0_0_0},
};
extern TypeInfo t96_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8601_MI = 
{
	"Release", (methodPointerType)&m8602_gshared, &t96_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t96_m8601_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t96_MIs[] =
{
	&m1393_MI,
	&m8591_MI,
	&m8593_MI,
	&m8595_MI,
	&m8597_MI,
	&m8599_MI,
	&m8601_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
static MethodInfo* t96_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
};
extern TypeInfo t1699_TI;
extern MethodInfo m8619_MI;
extern MethodInfo m8591_MI;
extern MethodInfo m8597_MI;
extern MethodInfo m8628_MI;
extern TypeInfo t117_TI;
extern MethodInfo m16896_MI;
extern MethodInfo m8593_MI;
extern MethodInfo m8626_MI;
extern MethodInfo m8655_MI;
extern MethodInfo m8625_MI;
extern MethodInfo m8627_MI;
static void* t96_RGCTXData[12] = 
{
	&t1699_TI,
	&m8619_MI,
	&m8591_MI,
	&m8597_MI,
	&m8628_MI,
	&t117_TI,
	&m16896_MI,
	&m8593_MI,
	&m8626_MI,
	&m8655_MI,
	&m8625_MI,
	&m8627_MI,
};
extern Il2CppImage g_UnityEngine_UI_dll_Image;
extern Il2CppType t96_0_0_0;
extern Il2CppType t96_1_0_0;
extern TypeInfo t14_TI;
struct t96;
extern TypeInfo t96_TI;
extern Il2CppGenericClass t96_GC;
extern CustomAttributesCache t299__CustomAttributeCache_U3CcountAllU3Ek__BackingField;
extern CustomAttributesCache t299__CustomAttributeCache_m2061;
extern CustomAttributesCache t299__CustomAttributeCache_m2062;
TypeInfo t96_TI = 
{
	&g_UnityEngine_UI_dll_Image, NULL, "ObjectPool`1", "UnityEngine.UI", t96_MIs, t96_PIs, t96_FIs, NULL, &t14_TI, NULL, NULL, &t96_TI, NULL, t96_VT, &EmptyCustomAttributesCache, &t96_TI, &t96_0_0_0, &t96_1_0_0, NULL, &t96_GC, NULL, NULL, NULL, t96_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t96), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 7, 3, 4, 0, 0, 4, 0, 0};
#include "t1700.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1700_TI;
#include "t1700MD.h"

#include "t1701.h"
#include "t1605.h"
extern TypeInfo t1700_TI;
extern TypeInfo t1701_TI;
extern TypeInfo t35_TI;
extern TypeInfo t14_TI;
extern TypeInfo t1605_TI;
extern TypeInfo t25_TI;
#include "t1701MD.h"
#include "t1605MD.h"
extern MethodInfo m8592_MI;
extern MethodInfo m8598_MI;
extern MethodInfo m8612_MI;
extern MethodInfo m8603_MI;
extern MethodInfo m73_MI;
extern MethodInfo m16849_MI;
extern MethodInfo m8594_MI;
extern MethodInfo m8610_MI;
extern MethodInfo m7915_MI;
extern MethodInfo m8609_MI;
extern MethodInfo m2892_MI;
extern MethodInfo m1337_MI;
extern MethodInfo m8611_MI;
extern MethodInfo m16849_MI;


extern MethodInfo m8590_MI;
 void m8590_gshared (t1700 * __this, t1605 * p0, t1605 * p1, MethodInfo* method)
{
	{
		t1701 * L_0 = (t1701 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 0));
		(( void (*) (t1701 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1));
		__this->f0 = L_0;
		m73(__this, &m73_MI);
		__this->f1 = p0;
		__this->f2 = p1;
		return;
	}
}
extern MethodInfo m8592_MI;
 int32_t m8592_gshared (t1700 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m8594_MI;
 void m8594_gshared (t1700 * __this, int32_t p0, MethodInfo* method)
{
	{
		__this->f3 = p0;
		return;
	}
}
extern MethodInfo m8596_MI;
 int32_t m8596_gshared (t1700 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (( int32_t (*) (t1700 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2));
		int32_t L_1 = (( int32_t (*) (t1700 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 3)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 3));
		return ((int32_t)(L_0-L_1));
	}
}
extern MethodInfo m8598_MI;
 int32_t m8598_gshared (t1700 * __this, MethodInfo* method)
{
	{
		t1701 * L_0 = (__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4), L_0);
		return L_1;
	}
}
extern MethodInfo m8600_MI;
 t14 * m8600_gshared (t1700 * __this, MethodInfo* method)
{
	t14 * V_0 = {0};
	t14 * V_1 = {0};
	t14 * G_B4_0 = {0};
	{
		t1701 * L_0 = (__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4), L_0);
		if (L_1)
		{
			goto IL_0047;
		}
	}
	{
		Initobj (&t14_TI, (&V_1));
		t14 * L_2 = V_1;
		if (!((t14 *)L_2))
		{
			goto IL_002e;
		}
	}
	{
		Initobj (&t14_TI, (&V_1));
		G_B4_0 = V_1;
		goto IL_0033;
	}

IL_002e:
	{
		t14 * L_3 = (( t14 * (*) (t14 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6)->method)(NULL, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6));
		G_B4_0 = L_3;
	}

IL_0033:
	{
		V_0 = G_B4_0;
		int32_t L_4 = (( int32_t (*) (t1700 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2));
		(( void (*) (t1700 * __this, int32_t p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 7)->method)(__this, ((int32_t)(L_4+1)), IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 7));
		goto IL_0053;
	}

IL_0047:
	{
		t1701 * L_5 = (__this->f0);
		t14 * L_6 = (( t14 * (*) (t1701 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8)->method)(L_5, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8));
		V_0 = L_6;
	}

IL_0053:
	{
		t1605 * L_7 = (__this->f1);
		if (!L_7)
		{
			goto IL_006a;
		}
	}
	{
		t1605 * L_8 = (__this->f1);
		VirtActionInvoker1< t14 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 9), L_8, V_0);
	}

IL_006a:
	{
		return V_0;
	}
}
extern MethodInfo m8602_MI;
 void m8602_gshared (t1700 * __this, t14 * p0, MethodInfo* method)
{
	{
		t1701 * L_0 = (__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4), L_0);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		t1701 * L_2 = (__this->f0);
		t14 * L_3 = (( t14 * (*) (t1701 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 10)->method)(L_2, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 10));
		t14 * L_4 = L_3;
		t14 * L_5 = p0;
		bool L_6 = m2892(NULL, ((t14 *)L_4), ((t14 *)L_5), &m2892_MI);
		if (!L_6)
		{
			goto IL_003b;
		}
	}
	{
		m1337(NULL, (t33*) &_stringLiteral66, &m1337_MI);
	}

IL_003b:
	{
		t1605 * L_7 = (__this->f2);
		if (!L_7)
		{
			goto IL_0052;
		}
	}
	{
		t1605 * L_8 = (__this->f2);
		VirtActionInvoker1< t14 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 9), L_8, p0);
	}

IL_0052:
	{
		t1701 * L_9 = (__this->f0);
		(( void (*) (t1701 * __this, t14 * p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 11)->method)(L_9, p0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 11));
		return;
	}
}
// Metadata Definition UnityEngine.UI.ObjectPool`1<System.Object>
extern Il2CppType t1701_0_0_33;
FieldInfo t1700_f0_FieldInfo = 
{
	"m_Stack", &t1701_0_0_33, &t1700_TI, offsetof(t1700, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1605_0_0_33;
FieldInfo t1700_f1_FieldInfo = 
{
	"m_ActionOnGet", &t1605_0_0_33, &t1700_TI, offsetof(t1700, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1605_0_0_33;
FieldInfo t1700_f2_FieldInfo = 
{
	"m_ActionOnRelease", &t1605_0_0_33, &t1700_TI, offsetof(t1700, f2), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
extern CustomAttributesCache t299__CustomAttributeCache_U3CcountAllU3Ek__BackingField;
FieldInfo t1700_f3_FieldInfo = 
{
	"<countAll>k__BackingField", &t35_0_0_1, &t1700_TI, offsetof(t1700, f3), &t299__CustomAttributeCache_U3CcountAllU3Ek__BackingField};
static FieldInfo* t1700_FIs[] =
{
	&t1700_f0_FieldInfo,
	&t1700_f1_FieldInfo,
	&t1700_f2_FieldInfo,
	&t1700_f3_FieldInfo,
	NULL
};
extern MethodInfo m8592_MI;
extern MethodInfo m8594_MI;
static PropertyInfo t1700____countAll_PropertyInfo = 
{
	&t1700_TI, "countAll", &m8592_MI, &m8594_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8596_MI;
static PropertyInfo t1700____countActive_PropertyInfo = 
{
	&t1700_TI, "countActive", &m8596_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8598_MI;
static PropertyInfo t1700____countInactive_PropertyInfo = 
{
	&t1700_TI, "countInactive", &m8598_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1700_PIs[] =
{
	&t1700____countAll_PropertyInfo,
	&t1700____countActive_PropertyInfo,
	&t1700____countInactive_PropertyInfo,
	NULL
};
extern Il2CppType t1605_0_0_0;
extern Il2CppType t1605_0_0_0;
static ParameterInfo t1700_m8590_ParameterInfos[] = 
{
	{"actionOnGet", 0, 134217728, &EmptyCustomAttributesCache, &t1605_0_0_0},
	{"actionOnRelease", 1, 134217728, &EmptyCustomAttributesCache, &t1605_0_0_0},
};
extern TypeInfo t1700_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8590_MI = 
{
	".ctor", (methodPointerType)&m8590_gshared, &t1700_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t14, t1700_m8590_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1700_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t299__CustomAttributeCache_m2061;
MethodInfo m8592_MI = 
{
	"get_countAll", (methodPointerType)&m8592_gshared, &t1700_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &t299__CustomAttributeCache_m2061, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1700_m8594_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1700_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t299__CustomAttributeCache_m2062;
MethodInfo m8594_MI = 
{
	"set_countAll", (methodPointerType)&m8594_gshared, &t1700_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t1700_m8594_ParameterInfos, &t299__CustomAttributeCache_m2062, 2177, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1700_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m8596_MI = 
{
	"get_countActive", (methodPointerType)&m8596_gshared, &t1700_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1700_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m8598_MI = 
{
	"get_countInactive", (methodPointerType)&m8598_gshared, &t1700_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1700_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8600_MI = 
{
	"Get", (methodPointerType)&m8600_gshared, &t1700_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1700_m8602_ParameterInfos[] = 
{
	{"element", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1700_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8602_MI = 
{
	"Release", (methodPointerType)&m8602_gshared, &t1700_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1700_m8602_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1700_MIs[] =
{
	&m8590_MI,
	&m8592_MI,
	&m8594_MI,
	&m8596_MI,
	&m8598_MI,
	&m8600_MI,
	&m8602_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
static MethodInfo* t1700_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
};
extern TypeInfo t1701_TI;
extern MethodInfo m8603_MI;
extern MethodInfo m8592_MI;
extern MethodInfo m8598_MI;
extern MethodInfo m8612_MI;
extern TypeInfo t14_TI;
extern MethodInfo m16849_MI;
extern MethodInfo m8594_MI;
extern MethodInfo m8610_MI;
extern MethodInfo m7915_MI;
extern MethodInfo m8609_MI;
extern MethodInfo m8611_MI;
static void* t1700_RGCTXData[12] = 
{
	&t1701_TI,
	&m8603_MI,
	&m8592_MI,
	&m8598_MI,
	&m8612_MI,
	&t14_TI,
	&m16849_MI,
	&m8594_MI,
	&m8610_MI,
	&m7915_MI,
	&m8609_MI,
	&m8611_MI,
};
extern Il2CppImage g_UnityEngine_UI_dll_Image;
extern Il2CppType t1700_0_0_0;
extern Il2CppType t1700_1_0_0;
extern TypeInfo t14_TI;
struct t1700;
extern TypeInfo t1700_TI;
extern Il2CppGenericClass t1700_GC;
extern CustomAttributesCache t299__CustomAttributeCache_U3CcountAllU3Ek__BackingField;
extern CustomAttributesCache t299__CustomAttributeCache_m2061;
extern CustomAttributesCache t299__CustomAttributeCache_m2062;
TypeInfo t1700_TI = 
{
	&g_UnityEngine_UI_dll_Image, NULL, "ObjectPool`1", "UnityEngine.UI", t1700_MIs, t1700_PIs, t1700_FIs, NULL, &t14_TI, NULL, NULL, &t1700_TI, NULL, t1700_VT, &EmptyCustomAttributesCache, &t1700_TI, &t1700_0_0_0, &t1700_1_0_0, NULL, &t1700_GC, NULL, NULL, NULL, t1700_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1700), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 7, 3, 4, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1701_TI;

#include "t1702.h"
extern TypeInfo t1701_TI;
extern TypeInfo t24_TI;
extern TypeInfo t25_TI;
extern TypeInfo t35_TI;
extern TypeInfo t319_TI;
extern TypeInfo t1244_TI;
extern TypeInfo t1702_TI;
extern TypeInfo t1278_TI;
extern TypeInfo t14_TI;
#include "t1702MD.h"
extern MethodInfo m73_MI;
extern MethodInfo m3818_MI;
extern MethodInfo m3798_MI;
extern MethodInfo m6482_MI;
extern MethodInfo m8613_MI;
extern MethodInfo m6924_MI;
extern MethodInfo m16651_MI;
extern MethodInfo m8614_MI;
extern MethodInfo m16651_MI;


extern MethodInfo m8603_MI;
 void m8603_gshared (t1701 * __this, MethodInfo* method)
{
	{
		m73(__this, &m73_MI);
		return;
	}
}
extern MethodInfo m8604_MI;
 bool m8604_gshared (t1701 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m8605_MI;
 t14 * m8605_gshared (t1701 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
extern MethodInfo m8606_MI;
 void m8606_gshared (t1701 * __this, t24 * p0, int32_t p1, MethodInfo* method)
{
	t39 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t39 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			t40* L_0 = (__this->f1);
			if (!L_0)
			{
				goto IL_0025;
			}
		}

IL_000b:
		{
			t40* L_1 = (__this->f1);
			VirtActionInvoker2< t24 *, int32_t >::Invoke(&m3818_MI, L_1, p0, p1);
			int32_t L_2 = (__this->f2);
			m3798(NULL, p0, p1, L_2, &m3798_MI);
		}

IL_0025:
		{
			// IL_0025: leave IL_0036
			goto IL_0036;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t39 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t1244_TI, e.ex->object.klass))
			goto IL_002a;
		throw e;
	}

IL_002a:
	{ // begin catch(System.ArrayTypeMismatchException)
		t319 * L_3 = (t319 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t319_TI));
		m6482(L_3, &m6482_MI);
		il2cpp_codegen_raise_exception (L_3);
		// IL_0031: leave IL_0036
		goto IL_0036;
	} // end catch (depth: 1)

IL_0036:
	{
		return;
	}
}
extern MethodInfo m8607_MI;
 t14* m8607_gshared (t1701 * __this, MethodInfo* method)
{
	{
		t1702  L_0 = (( t1702  (*) (t1701 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0));
		t1702  L_1 = L_0;
		t14 * L_2 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 1), &L_1);
		return (t14*)L_2;
	}
}
extern MethodInfo m8608_MI;
 t14 * m8608_gshared (t1701 * __this, MethodInfo* method)
{
	{
		t1702  L_0 = (( t1702  (*) (t1701 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0));
		t1702  L_1 = L_0;
		t14 * L_2 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 1), &L_1);
		return (t14 *)L_2;
	}
}
extern MethodInfo m8609_MI;
 t14 * m8609_gshared (t1701 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		t1278 * L_1 = (t1278 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1278_TI));
		m6924(L_1, &m6924_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0011:
	{
		t40* L_2 = (__this->f1);
		int32_t L_3 = (__this->f2);
		return (*(t14 **)(t14 **)SZArrayLdElema(L_2, ((int32_t)(L_3-1))));
	}
}
extern MethodInfo m8610_MI;
 t14 * m8610_gshared (t1701 * __this, MethodInfo* method)
{
	t14 * V_0 = {0};
	int32_t V_1 = 0;
	t14 * V_2 = {0};
	{
		int32_t L_0 = (__this->f2);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		t1278 * L_1 = (t1278 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1278_TI));
		m6924(L_1, &m6924_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0011:
	{
		int32_t L_2 = (__this->f3);
		__this->f3 = ((int32_t)(L_2+1));
		t40* L_3 = (__this->f1);
		int32_t L_4 = (__this->f2);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_1 = L_5;
		__this->f2 = L_5;
		V_0 = (*(t14 **)(t14 **)SZArrayLdElema(L_3, V_1));
		t40* L_6 = (__this->f1);
		int32_t L_7 = (__this->f2);
		Initobj (&t14_TI, (&V_2));
		*((t14 **)(t14 **)SZArrayLdElema(L_6, L_7)) = (t14 *)V_2;
		return V_0;
	}
}
extern MethodInfo m8611_MI;
 void m8611_gshared (t1701 * __this, t14 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	t40** G_B4_0 = {0};
	t40** G_B3_0 = {0};
	int32_t G_B5_0 = 0;
	t40** G_B5_1 = {0};
	{
		t40* L_0 = (__this->f1);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = (__this->f2);
		t40* L_2 = (__this->f1);
		if ((((uint32_t)L_1) != ((uint32_t)(((int32_t)(((t24 *)L_2)->max_length))))))
		{
			goto IL_0043;
		}
	}

IL_001e:
	{
		t40** L_3 = &(__this->f1);
		int32_t L_4 = (__this->f2);
		G_B3_0 = L_3;
		if (L_4)
		{
			G_B4_0 = L_3;
			goto IL_0036;
		}
	}
	{
		G_B5_0 = ((int32_t)16);
		G_B5_1 = G_B3_0;
		goto IL_003e;
	}

IL_0036:
	{
		int32_t L_5 = (__this->f2);
		G_B5_0 = ((int32_t)(2*L_5));
		G_B5_1 = G_B4_0;
	}

IL_003e:
	{
		(( void (*) (t14 * __this, t40** p0, int32_t p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2)->method)(NULL, G_B5_1, G_B5_0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2));
	}

IL_0043:
	{
		int32_t L_6 = (__this->f3);
		__this->f3 = ((int32_t)(L_6+1));
		t40* L_7 = (__this->f1);
		int32_t L_8 = (__this->f2);
		int32_t L_9 = L_8;
		V_0 = L_9;
		__this->f2 = ((int32_t)(L_9+1));
		*((t14 **)(t14 **)SZArrayLdElema(L_7, V_0)) = (t14 *)p0;
		return;
	}
}
extern MethodInfo m8612_MI;
 int32_t m8612_gshared (t1701 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m8613_MI;
 t1702  m8613 (t1701 * __this, MethodInfo* method){
	{
		t1702  L_0 = {0};
		m8614(&L_0, __this, &m8614_MI);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.Stack`1<System.Object>
extern Il2CppType t35_0_0_32849;
FieldInfo t1701_f0_FieldInfo = 
{
	"INITIAL_SIZE", &t35_0_0_32849, &t1701_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t40_0_0_1;
FieldInfo t1701_f1_FieldInfo = 
{
	"_array", &t40_0_0_1, &t1701_TI, offsetof(t1701, f1), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t1701_f2_FieldInfo = 
{
	"_size", &t35_0_0_1, &t1701_TI, offsetof(t1701, f2), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t1701_f3_FieldInfo = 
{
	"_version", &t35_0_0_1, &t1701_TI, offsetof(t1701, f3), &EmptyCustomAttributesCache};
static FieldInfo* t1701_FIs[] =
{
	&t1701_f0_FieldInfo,
	&t1701_f1_FieldInfo,
	&t1701_f2_FieldInfo,
	&t1701_f3_FieldInfo,
	NULL
};
static const int32_t t1701_f0_DefaultValueData = 16;
extern Il2CppType t35_0_0_0;
static Il2CppFieldDefaultValueEntry t1701_f0_DefaultValue = 
{
	&t1701_f0_FieldInfo, { (char*)&t1701_f0_DefaultValueData, &t35_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1701_FDVs[] = 
{
	&t1701_f0_DefaultValue,
	NULL
};
extern MethodInfo m8604_MI;
static PropertyInfo t1701____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t1701_TI, "System.Collections.ICollection.IsSynchronized", &m8604_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8605_MI;
static PropertyInfo t1701____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t1701_TI, "System.Collections.ICollection.SyncRoot", &m8605_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8612_MI;
static PropertyInfo t1701____Count_PropertyInfo = 
{
	&t1701_TI, "Count", &m8612_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1701_PIs[] =
{
	&t1701____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t1701____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t1701____Count_PropertyInfo,
	NULL
};
extern TypeInfo t1701_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8603_MI = 
{
	".ctor", (methodPointerType)&m8603_gshared, &t1701_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1701_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m8604_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m8604_gshared, &t1701_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1701_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8605_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m8605_gshared, &t1701_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t24_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t1701_m8606_ParameterInfos[] = 
{
	{"dest", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
	{"idx", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1701_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m8606_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m8606_gshared, &t1701_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t1701_m8606_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1701_TI;
extern Il2CppType t346_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8607_MI = 
{
	"System.Collections.Generic.IEnumerable<T>.GetEnumerator", (methodPointerType)&m8607_gshared, &t1701_TI, &t346_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 481, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1701_TI;
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8608_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8608_gshared, &t1701_TI, &t36_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 481, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1701_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8609_MI = 
{
	"Peek", (methodPointerType)&m8609_gshared, &t1701_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1701_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8610_MI = 
{
	"Pop", (methodPointerType)&m8610_gshared, &t1701_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1701_m8611_ParameterInfos[] = 
{
	{"t", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1701_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8611_MI = 
{
	"Push", (methodPointerType)&m8611_gshared, &t1701_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1701_m8611_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1701_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m8612_MI = 
{
	"get_Count", (methodPointerType)&m8612_gshared, &t1701_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1701_TI;
extern Il2CppType t1702_0_0_0;
extern void* RuntimeInvoker_t1702 (MethodInfo* method, void* obj, void** args);
MethodInfo m8613_MI = 
{
	"GetEnumerator", (methodPointerType)&m8613, &t1701_TI, &t1702_0_0_0, RuntimeInvoker_t1702, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1701_MIs[] =
{
	&m8603_MI,
	&m8604_MI,
	&m8605_MI,
	&m8606_MI,
	&m8607_MI,
	&m8608_MI,
	&m8609_MI,
	&m8610_MI,
	&m8611_MI,
	&m8612_MI,
	&m8613_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m8612_MI;
extern MethodInfo m8604_MI;
extern MethodInfo m8605_MI;
extern MethodInfo m8606_MI;
extern MethodInfo m8608_MI;
extern MethodInfo m8607_MI;
static MethodInfo* t1701_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m8612_MI,
	&m8604_MI,
	&m8605_MI,
	&m8606_MI,
	&m8608_MI,
	&m8607_MI,
};
extern TypeInfo t651_TI;
extern TypeInfo t600_TI;
extern TypeInfo t1656_TI;
static TypeInfo* t1701_ITIs[] = 
{
	&t651_TI,
	&t600_TI,
	&t1656_TI,
};
extern TypeInfo t651_TI;
extern TypeInfo t600_TI;
extern TypeInfo t1656_TI;
static Il2CppInterfaceOffsetPair t1701_IOs[] = 
{
	{ &t651_TI, 4},
	{ &t600_TI, 8},
	{ &t1656_TI, 9},
};
extern MethodInfo m8613_MI;
extern TypeInfo t1702_TI;
extern MethodInfo m16651_MI;
extern MethodInfo m8614_MI;
static void* t1701_RGCTXData[4] = 
{
	&m8613_MI,
	&t1702_TI,
	&m16651_MI,
	&m8614_MI,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1701_0_0_0;
extern Il2CppType t1701_1_0_0;
extern TypeInfo t14_TI;
struct t1701;
extern TypeInfo t1701_TI;
extern Il2CppGenericClass t1701_GC;
extern CustomAttributesCache t689__CustomAttributeCache;
TypeInfo t1701_TI = 
{
	&g_System_dll_Image, NULL, "Stack`1", "System.Collections.Generic", t1701_MIs, t1701_PIs, t1701_FIs, NULL, &t14_TI, NULL, NULL, &t1701_TI, t1701_ITIs, t1701_VT, &t689__CustomAttributeCache, &t1701_TI, &t1701_0_0_0, &t1701_1_0_0, t1701_IOs, &t1701_GC, NULL, t1701_FDVs, NULL, t1701_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1701), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 11, 3, 4, 0, 0, 10, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1702_TI;

extern TypeInfo t1702_TI;
extern TypeInfo t14_TI;
extern TypeInfo t1278_TI;
extern TypeInfo t1701_TI;
extern MethodInfo m8618_MI;
extern MethodInfo m6924_MI;


extern MethodInfo m8614_MI;
 void m8614_gshared (t1702 * __this, t1701 * p0, MethodInfo* method)
{
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		int32_t L_0 = (p0->f3);
		__this->f2 = L_0;
		return;
	}
}
extern MethodInfo m8615_MI;
 t14 * m8615_gshared (t1702 * __this, MethodInfo* method)
{
	{
		t14 * L_0 = (( t14 * (*) (t1702 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0));
		t14 * L_1 = L_0;
		return ((t14 *)L_1);
	}
}
extern MethodInfo m8616_MI;
 void m8616_gshared (t1702 * __this, MethodInfo* method)
{
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m8617_MI;
 bool m8617_gshared (t1702 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B7_0 = 0;
	{
		int32_t L_0 = (__this->f2);
		t1701 * L_1 = (__this->f0);
		int32_t L_2 = (L_1->f3);
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_001c;
		}
	}
	{
		t1278 * L_3 = (t1278 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1278_TI));
		m6924(L_3, &m6924_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_001c:
	{
		int32_t L_4 = (__this->f1);
		if ((((uint32_t)L_4) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_003a;
		}
	}
	{
		t1701 * L_5 = (__this->f0);
		int32_t L_6 = (L_5->f2);
		__this->f1 = L_6;
	}

IL_003a:
	{
		int32_t L_7 = (__this->f1);
		if ((((int32_t)L_7) == ((int32_t)(-1))))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_8 = (__this->f1);
		int32_t L_9 = ((int32_t)(L_8-1));
		V_0 = L_9;
		__this->f1 = L_9;
		G_B7_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0060;
	}

IL_005f:
	{
		G_B7_0 = 0;
	}

IL_0060:
	{
		return G_B7_0;
	}
}
extern MethodInfo m8618_MI;
 t14 * m8618_gshared (t1702 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		t1278 * L_1 = (t1278 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1278_TI));
		m6924(L_1, &m6924_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0012:
	{
		t1701 * L_2 = (__this->f0);
		t40* L_3 = (L_2->f1);
		int32_t L_4 = (__this->f1);
		return (*(t14 **)(t14 **)SZArrayLdElema(L_3, L_4));
	}
}
// Metadata Definition System.Collections.Generic.Stack`1/Enumerator<System.Object>
extern Il2CppType t1701_0_0_1;
FieldInfo t1702_f0_FieldInfo = 
{
	"parent", &t1701_0_0_1, &t1702_TI, offsetof(t1702, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t1702_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t1702_TI, offsetof(t1702, f1) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t1702_f2_FieldInfo = 
{
	"_version", &t35_0_0_1, &t1702_TI, offsetof(t1702, f2) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t1702_FIs[] =
{
	&t1702_f0_FieldInfo,
	&t1702_f1_FieldInfo,
	&t1702_f2_FieldInfo,
	NULL
};
extern MethodInfo m8615_MI;
static PropertyInfo t1702____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1702_TI, "System.Collections.IEnumerator.Current", &m8615_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8618_MI;
static PropertyInfo t1702____Current_PropertyInfo = 
{
	&t1702_TI, "Current", &m8618_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1702_PIs[] =
{
	&t1702____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1702____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1701_0_0_0;
static ParameterInfo t1702_m8614_ParameterInfos[] = 
{
	{"t", 0, 134217728, &EmptyCustomAttributesCache, &t1701_0_0_0},
};
extern TypeInfo t1702_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8614_MI = 
{
	".ctor", (methodPointerType)&m8614_gshared, &t1702_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1702_m8614_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1702_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8615_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8615_gshared, &t1702_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1702_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8616_MI = 
{
	"Dispose", (methodPointerType)&m8616_gshared, &t1702_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1702_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m8617_MI = 
{
	"MoveNext", (methodPointerType)&m8617_gshared, &t1702_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1702_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8618_MI = 
{
	"get_Current", (methodPointerType)&m8618_gshared, &t1702_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1702_MIs[] =
{
	&m8614_MI,
	&m8615_MI,
	&m8616_MI,
	&m8617_MI,
	&m8618_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m8615_MI;
extern MethodInfo m8617_MI;
extern MethodInfo m8616_MI;
extern MethodInfo m8618_MI;
static MethodInfo* t1702_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m8615_MI,
	&m8617_MI,
	&m8616_MI,
	&m8618_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t346_TI;
static TypeInfo* t1702_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t346_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t346_TI;
static Il2CppInterfaceOffsetPair t1702_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t346_TI, 7},
};
extern MethodInfo m8618_MI;
extern TypeInfo t14_TI;
static void* t1702_RGCTXData[2] = 
{
	&m8618_MI,
	&t14_TI,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1702_0_0_0;
extern Il2CppType t1702_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t1702_TI;
extern Il2CppGenericClass t1702_GC;
extern TypeInfo t689_TI;
TypeInfo t1702_TI = 
{
	&g_System_dll_Image, NULL, "Enumerator", "", t1702_MIs, t1702_PIs, t1702_FIs, NULL, &t122_TI, NULL, &t689_TI, &t1702_TI, t1702_ITIs, t1702_VT, &EmptyCustomAttributesCache, &t1702_TI, &t1702_0_0_0, &t1702_1_0_0, t1702_IOs, &t1702_GC, NULL, NULL, NULL, t1702_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1702)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 3, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1699_TI;

#include "t1705.h"
extern TypeInfo t1699_TI;
extern TypeInfo t24_TI;
extern TypeInfo t25_TI;
extern TypeInfo t35_TI;
extern TypeInfo t319_TI;
extern TypeInfo t1244_TI;
extern TypeInfo t1705_TI;
extern TypeInfo t1278_TI;
extern TypeInfo t117_TI;
#include "t1705MD.h"
extern MethodInfo m73_MI;
extern MethodInfo m3818_MI;
extern MethodInfo m3798_MI;
extern MethodInfo m6482_MI;
extern MethodInfo m8629_MI;
extern MethodInfo m6924_MI;
extern MethodInfo m16895_MI;
extern MethodInfo m8650_MI;
struct t24;
#define m16895(__this, p0, p1, method) (void)m16651_gshared((t14 *)__this, (t40**)p0, (int32_t)p1, method)
extern MethodInfo m16895_MI;


extern MethodInfo m8629_MI;
 t1705  m8629 (t1699 * __this, MethodInfo* method){
	{
		t1705  L_0 = {0};
		m8650(&L_0, __this, &m8650_MI);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
extern Il2CppType t35_0_0_32849;
FieldInfo t1699_f0_FieldInfo = 
{
	"INITIAL_SIZE", &t35_0_0_32849, &t1699_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1703_0_0_1;
FieldInfo t1699_f1_FieldInfo = 
{
	"_array", &t1703_0_0_1, &t1699_TI, offsetof(t1699, f1), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t1699_f2_FieldInfo = 
{
	"_size", &t35_0_0_1, &t1699_TI, offsetof(t1699, f2), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t1699_f3_FieldInfo = 
{
	"_version", &t35_0_0_1, &t1699_TI, offsetof(t1699, f3), &EmptyCustomAttributesCache};
static FieldInfo* t1699_FIs[] =
{
	&t1699_f0_FieldInfo,
	&t1699_f1_FieldInfo,
	&t1699_f2_FieldInfo,
	&t1699_f3_FieldInfo,
	NULL
};
static const int32_t t1699_f0_DefaultValueData = 16;
extern Il2CppType t35_0_0_0;
static Il2CppFieldDefaultValueEntry t1699_f0_DefaultValue = 
{
	&t1699_f0_FieldInfo, { (char*)&t1699_f0_DefaultValueData, &t35_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1699_FDVs[] = 
{
	&t1699_f0_DefaultValue,
	NULL
};
extern MethodInfo m8620_MI;
static PropertyInfo t1699____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t1699_TI, "System.Collections.ICollection.IsSynchronized", &m8620_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8621_MI;
static PropertyInfo t1699____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t1699_TI, "System.Collections.ICollection.SyncRoot", &m8621_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8628_MI;
static PropertyInfo t1699____Count_PropertyInfo = 
{
	&t1699_TI, "Count", &m8628_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1699_PIs[] =
{
	&t1699____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t1699____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t1699____Count_PropertyInfo,
	NULL
};
extern TypeInfo t1699_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8619_MI = 
{
	".ctor", (methodPointerType)&m8603_gshared, &t1699_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1699_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m8620_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m8604_gshared, &t1699_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1699_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8621_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m8605_gshared, &t1699_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t24_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t1699_m8622_ParameterInfos[] = 
{
	{"dest", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
	{"idx", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1699_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m8622_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m8606_gshared, &t1699_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t1699_m8622_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1699_TI;
extern Il2CppType t1704_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8623_MI = 
{
	"System.Collections.Generic.IEnumerable<T>.GetEnumerator", (methodPointerType)&m8607_gshared, &t1699_TI, &t1704_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 481, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1699_TI;
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8624_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8608_gshared, &t1699_TI, &t36_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 481, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1699_TI;
extern Il2CppType t117_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8625_MI = 
{
	"Peek", (methodPointerType)&m8609_gshared, &t1699_TI, &t117_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1699_TI;
extern Il2CppType t117_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8626_MI = 
{
	"Pop", (methodPointerType)&m8610_gshared, &t1699_TI, &t117_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t117_0_0_0;
static ParameterInfo t1699_m8627_ParameterInfos[] = 
{
	{"t", 0, 134217728, &EmptyCustomAttributesCache, &t117_0_0_0},
};
extern TypeInfo t1699_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8627_MI = 
{
	"Push", (methodPointerType)&m8611_gshared, &t1699_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1699_m8627_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1699_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m8628_MI = 
{
	"get_Count", (methodPointerType)&m8612_gshared, &t1699_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1699_TI;
extern Il2CppType t1705_0_0_0;
extern void* RuntimeInvoker_t1705 (MethodInfo* method, void* obj, void** args);
MethodInfo m8629_MI = 
{
	"GetEnumerator", (methodPointerType)&m8629, &t1699_TI, &t1705_0_0_0, RuntimeInvoker_t1705, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1699_MIs[] =
{
	&m8619_MI,
	&m8620_MI,
	&m8621_MI,
	&m8622_MI,
	&m8623_MI,
	&m8624_MI,
	&m8625_MI,
	&m8626_MI,
	&m8627_MI,
	&m8628_MI,
	&m8629_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m8628_MI;
extern MethodInfo m8620_MI;
extern MethodInfo m8621_MI;
extern MethodInfo m8622_MI;
extern MethodInfo m8624_MI;
extern MethodInfo m8623_MI;
static MethodInfo* t1699_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m8628_MI,
	&m8620_MI,
	&m8621_MI,
	&m8622_MI,
	&m8624_MI,
	&m8623_MI,
};
extern TypeInfo t651_TI;
extern TypeInfo t600_TI;
extern TypeInfo t3854_TI;
static TypeInfo* t1699_ITIs[] = 
{
	&t651_TI,
	&t600_TI,
	&t3854_TI,
};
extern TypeInfo t651_TI;
extern TypeInfo t600_TI;
extern TypeInfo t3854_TI;
static Il2CppInterfaceOffsetPair t1699_IOs[] = 
{
	{ &t651_TI, 4},
	{ &t600_TI, 8},
	{ &t3854_TI, 9},
};
extern MethodInfo m8629_MI;
extern TypeInfo t1705_TI;
extern MethodInfo m16895_MI;
extern MethodInfo m8650_MI;
static void* t1699_RGCTXData[4] = 
{
	&m8629_MI,
	&t1705_TI,
	&m16895_MI,
	&m8650_MI,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1699_0_0_0;
extern Il2CppType t1699_1_0_0;
extern TypeInfo t14_TI;
struct t1699;
extern TypeInfo t1699_TI;
extern Il2CppGenericClass t1699_GC;
extern CustomAttributesCache t689__CustomAttributeCache;
TypeInfo t1699_TI = 
{
	&g_System_dll_Image, NULL, "Stack`1", "System.Collections.Generic", t1699_MIs, t1699_PIs, t1699_FIs, NULL, &t14_TI, NULL, NULL, &t1699_TI, t1699_ITIs, t1699_VT, &t689__CustomAttributeCache, &t1699_TI, &t1699_0_0_0, &t1699_1_0_0, t1699_IOs, &t1699_GC, NULL, t1699_FDVs, NULL, t1699_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1699), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 11, 3, 4, 0, 0, 10, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3854_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
extern TypeInfo t3854_TI;
extern Il2CppType t1704_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22949_MI = 
{
	"GetEnumerator", NULL, &t3854_TI, &t1704_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3854_MIs[] =
{
	&m22949_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t3854_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3854_0_0_0;
extern Il2CppType t3854_1_0_0;
struct t3854;
extern TypeInfo t3854_TI;
extern Il2CppGenericClass t3854_GC;
TypeInfo t3854_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t3854_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3854_TI, t3854_ITIs, NULL, &EmptyCustomAttributesCache, &t3854_TI, &t3854_0_0_0, &t3854_1_0_0, NULL, &t3854_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1704_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
extern MethodInfo m22950_MI;
static PropertyInfo t1704____Current_PropertyInfo = 
{
	&t1704_TI, "Current", &m22950_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1704_PIs[] =
{
	&t1704____Current_PropertyInfo,
	NULL
};
extern TypeInfo t1704_TI;
extern Il2CppType t117_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22950_MI = 
{
	"get_Current", NULL, &t1704_TI, &t117_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1704_MIs[] =
{
	&m22950_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t1704_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1704_0_0_0;
extern Il2CppType t1704_1_0_0;
struct t1704;
extern TypeInfo t1704_TI;
extern Il2CppGenericClass t1704_GC;
TypeInfo t1704_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t1704_MIs, t1704_PIs, NULL, NULL, NULL, NULL, NULL, &t1704_TI, t1704_ITIs, NULL, &EmptyCustomAttributesCache, &t1704_TI, &t1704_0_0_0, &t1704_1_0_0, NULL, &t1704_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t1706.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1706_TI;
#include "t1706MD.h"

extern TypeInfo t1706_TI;
extern TypeInfo t117_TI;
extern TypeInfo t1278_TI;
extern MethodInfo m8634_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m16851_MI;
struct t24;
#define m16851(__this, p0, method) (t117 *)m16357_gshared((t24 *)__this, (int32_t)p0, method)
extern MethodInfo m16851_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
extern Il2CppType t24_0_0_1;
FieldInfo t1706_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t1706_TI, offsetof(t1706, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t1706_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t1706_TI, offsetof(t1706, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t1706_FIs[] =
{
	&t1706_f0_FieldInfo,
	&t1706_f1_FieldInfo,
	NULL
};
extern MethodInfo m8631_MI;
static PropertyInfo t1706____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1706_TI, "System.Collections.IEnumerator.Current", &m8631_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8634_MI;
static PropertyInfo t1706____Current_PropertyInfo = 
{
	&t1706_TI, "Current", &m8634_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1706_PIs[] =
{
	&t1706____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1706____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t1706_m8630_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t1706_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8630_MI = 
{
	".ctor", (methodPointerType)&m7877_gshared, &t1706_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1706_m8630_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1706_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8631_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7879_gshared, &t1706_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1706_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8632_MI = 
{
	"Dispose", (methodPointerType)&m7881_gshared, &t1706_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1706_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m8633_MI = 
{
	"MoveNext", (methodPointerType)&m7883_gshared, &t1706_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1706_TI;
extern Il2CppType t117_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8634_MI = 
{
	"get_Current", (methodPointerType)&m7885_gshared, &t1706_TI, &t117_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1706_MIs[] =
{
	&m8630_MI,
	&m8631_MI,
	&m8632_MI,
	&m8633_MI,
	&m8634_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m8631_MI;
extern MethodInfo m8633_MI;
extern MethodInfo m8632_MI;
extern MethodInfo m8634_MI;
static MethodInfo* t1706_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m8631_MI,
	&m8633_MI,
	&m8632_MI,
	&m8634_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t1704_TI;
static TypeInfo* t1706_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t1704_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t1704_TI;
static Il2CppInterfaceOffsetPair t1706_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t1704_TI, 7},
};
extern MethodInfo m8634_MI;
extern TypeInfo t117_TI;
extern MethodInfo m16851_MI;
static void* t1706_RGCTXData[3] = 
{
	&m8634_MI,
	&t117_TI,
	&m16851_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1706_0_0_0;
extern Il2CppType t1706_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t1706_TI;
extern Il2CppGenericClass t1706_GC;
extern TypeInfo t24_TI;
TypeInfo t1706_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1706_MIs, t1706_PIs, t1706_FIs, NULL, &t122_TI, NULL, &t24_TI, &t1706_TI, t1706_ITIs, t1706_VT, &EmptyCustomAttributesCache, &t1706_TI, &t1706_0_0_0, &t1706_1_0_0, t1706_IOs, &t1706_GC, NULL, NULL, NULL, t1706_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1706)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3852_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
extern MethodInfo m22951_MI;
static PropertyInfo t3852____Count_PropertyInfo = 
{
	&t3852_TI, "Count", &m22951_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m22952_MI;
static PropertyInfo t3852____IsReadOnly_PropertyInfo = 
{
	&t3852_TI, "IsReadOnly", &m22952_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3852_PIs[] =
{
	&t3852____Count_PropertyInfo,
	&t3852____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t3852_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m22951_MI = 
{
	"get_Count", NULL, &t3852_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3852_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m22952_MI = 
{
	"get_IsReadOnly", NULL, &t3852_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t117_0_0_0;
static ParameterInfo t3852_m22953_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t117_0_0_0},
};
extern TypeInfo t3852_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22953_MI = 
{
	"Add", NULL, &t3852_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t3852_m22953_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3852_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m22954_MI = 
{
	"Clear", NULL, &t3852_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t117_0_0_0;
static ParameterInfo t3852_m22955_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t117_0_0_0},
};
extern TypeInfo t3852_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22955_MI = 
{
	"Contains", NULL, &t3852_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t3852_m22955_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1703_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t3852_m22956_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1703_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t3852_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m22956_MI = 
{
	"CopyTo", NULL, &t3852_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t3852_m22956_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t117_0_0_0;
static ParameterInfo t3852_m22957_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t117_0_0_0},
};
extern TypeInfo t3852_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22957_MI = 
{
	"Remove", NULL, &t3852_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t3852_m22957_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3852_MIs[] =
{
	&m22951_MI,
	&m22952_MI,
	&m22953_MI,
	&m22954_MI,
	&m22955_MI,
	&m22956_MI,
	&m22957_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t3854_TI;
static TypeInfo* t3852_ITIs[] = 
{
	&t600_TI,
	&t3854_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3852_0_0_0;
extern Il2CppType t3852_1_0_0;
struct t3852;
extern TypeInfo t3852_TI;
extern Il2CppGenericClass t3852_GC;
TypeInfo t3852_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t3852_MIs, t3852_PIs, NULL, NULL, NULL, NULL, NULL, &t3852_TI, t3852_ITIs, NULL, &EmptyCustomAttributesCache, &t3852_TI, &t3852_0_0_0, &t3852_1_0_0, NULL, &t3852_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3853_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
extern MethodInfo m22958_MI;
extern MethodInfo m22959_MI;
static PropertyInfo t3853____Item_PropertyInfo = 
{
	&t3853_TI, "Item", &m22958_MI, &m22959_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3853_PIs[] =
{
	&t3853____Item_PropertyInfo,
	NULL
};
extern Il2CppType t117_0_0_0;
static ParameterInfo t3853_m22960_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t117_0_0_0},
};
extern TypeInfo t3853_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22960_MI = 
{
	"IndexOf", NULL, &t3853_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t3853_m22960_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t117_0_0_0;
static ParameterInfo t3853_m22961_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t117_0_0_0},
};
extern TypeInfo t3853_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22961_MI = 
{
	"Insert", NULL, &t3853_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t3853_m22961_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t3853_m22962_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t3853_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m22962_MI = 
{
	"RemoveAt", NULL, &t3853_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t3853_m22962_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t3853_m22958_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t3853_TI;
extern Il2CppType t117_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m22958_MI = 
{
	"get_Item", NULL, &t3853_TI, &t117_0_0_0, RuntimeInvoker_t14_t35, t3853_m22958_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t117_0_0_0;
static ParameterInfo t3853_m22959_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t117_0_0_0},
};
extern TypeInfo t3853_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22959_MI = 
{
	"set_Item", NULL, &t3853_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t3853_m22959_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3853_MIs[] =
{
	&m22960_MI,
	&m22961_MI,
	&m22962_MI,
	&m22958_MI,
	&m22959_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t3852_TI;
extern TypeInfo t3854_TI;
static TypeInfo* t3853_ITIs[] = 
{
	&t600_TI,
	&t3852_TI,
	&t3854_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3853_0_0_0;
extern Il2CppType t3853_1_0_0;
struct t3853;
extern TypeInfo t3853_TI;
extern Il2CppGenericClass t3853_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t3853_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t3853_MIs, t3853_PIs, NULL, NULL, NULL, NULL, NULL, &t3853_TI, t3853_ITIs, NULL, &t1409__CustomAttributeCache, &t3853_TI, &t3853_0_0_0, &t3853_1_0_0, NULL, &t3853_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3855_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Collections.IEnumerable>
extern MethodInfo m22963_MI;
static PropertyInfo t3855____Count_PropertyInfo = 
{
	&t3855_TI, "Count", &m22963_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m22964_MI;
static PropertyInfo t3855____IsReadOnly_PropertyInfo = 
{
	&t3855_TI, "IsReadOnly", &m22964_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3855_PIs[] =
{
	&t3855____Count_PropertyInfo,
	&t3855____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t3855_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m22963_MI = 
{
	"get_Count", NULL, &t3855_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3855_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m22964_MI = 
{
	"get_IsReadOnly", NULL, &t3855_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t600_0_0_0;
static ParameterInfo t3855_m22965_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t600_0_0_0},
};
extern TypeInfo t3855_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22965_MI = 
{
	"Add", NULL, &t3855_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t3855_m22965_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3855_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m22966_MI = 
{
	"Clear", NULL, &t3855_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t600_0_0_0;
static ParameterInfo t3855_m22967_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t600_0_0_0},
};
extern TypeInfo t3855_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22967_MI = 
{
	"Contains", NULL, &t3855_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t3855_m22967_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2901_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t3855_m22968_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2901_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t3855_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m22968_MI = 
{
	"CopyTo", NULL, &t3855_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t3855_m22968_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t600_0_0_0;
static ParameterInfo t3855_m22969_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t600_0_0_0},
};
extern TypeInfo t3855_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22969_MI = 
{
	"Remove", NULL, &t3855_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t3855_m22969_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3855_MIs[] =
{
	&m22963_MI,
	&m22964_MI,
	&m22965_MI,
	&m22966_MI,
	&m22967_MI,
	&m22968_MI,
	&m22969_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t3857_TI;
static TypeInfo* t3855_ITIs[] = 
{
	&t600_TI,
	&t3857_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3855_0_0_0;
extern Il2CppType t3855_1_0_0;
struct t3855;
extern TypeInfo t3855_TI;
extern Il2CppGenericClass t3855_GC;
TypeInfo t3855_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t3855_MIs, t3855_PIs, NULL, NULL, NULL, NULL, NULL, &t3855_TI, t3855_ITIs, NULL, &EmptyCustomAttributesCache, &t3855_TI, &t3855_0_0_0, &t3855_1_0_0, NULL, &t3855_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3857_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Collections.IEnumerable>
extern TypeInfo t3857_TI;
extern Il2CppType t3294_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22970_MI = 
{
	"GetEnumerator", NULL, &t3857_TI, &t3294_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3857_MIs[] =
{
	&m22970_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t3857_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3857_0_0_0;
extern Il2CppType t3857_1_0_0;
struct t3857;
extern TypeInfo t3857_TI;
extern Il2CppGenericClass t3857_GC;
TypeInfo t3857_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t3857_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3857_TI, t3857_ITIs, NULL, &EmptyCustomAttributesCache, &t3857_TI, &t3857_0_0_0, &t3857_1_0_0, NULL, &t3857_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3294_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Collections.IEnumerable>
extern MethodInfo m22971_MI;
static PropertyInfo t3294____Current_PropertyInfo = 
{
	&t3294_TI, "Current", &m22971_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3294_PIs[] =
{
	&t3294____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3294_TI;
extern Il2CppType t600_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22971_MI = 
{
	"get_Current", NULL, &t3294_TI, &t600_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3294_MIs[] =
{
	&m22971_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t3294_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3294_0_0_0;
extern Il2CppType t3294_1_0_0;
struct t3294;
extern TypeInfo t3294_TI;
extern Il2CppGenericClass t3294_GC;
TypeInfo t3294_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3294_MIs, t3294_PIs, NULL, NULL, NULL, NULL, NULL, &t3294_TI, t3294_ITIs, NULL, &EmptyCustomAttributesCache, &t3294_TI, &t3294_0_0_0, &t3294_1_0_0, NULL, &t3294_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t1707.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1707_TI;
#include "t1707MD.h"

extern TypeInfo t1707_TI;
extern TypeInfo t600_TI;
extern TypeInfo t1278_TI;
extern MethodInfo m8639_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m16862_MI;
struct t24;
#define m16862(__this, p0, method) (t14 *)m16357_gshared((t24 *)__this, (int32_t)p0, method)
extern MethodInfo m16862_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Collections.IEnumerable>
extern Il2CppType t24_0_0_1;
FieldInfo t1707_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t1707_TI, offsetof(t1707, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t1707_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t1707_TI, offsetof(t1707, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t1707_FIs[] =
{
	&t1707_f0_FieldInfo,
	&t1707_f1_FieldInfo,
	NULL
};
extern MethodInfo m8636_MI;
static PropertyInfo t1707____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1707_TI, "System.Collections.IEnumerator.Current", &m8636_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8639_MI;
static PropertyInfo t1707____Current_PropertyInfo = 
{
	&t1707_TI, "Current", &m8639_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1707_PIs[] =
{
	&t1707____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1707____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t1707_m8635_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t1707_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8635_MI = 
{
	".ctor", (methodPointerType)&m7877_gshared, &t1707_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1707_m8635_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1707_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8636_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7879_gshared, &t1707_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1707_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8637_MI = 
{
	"Dispose", (methodPointerType)&m7881_gshared, &t1707_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1707_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m8638_MI = 
{
	"MoveNext", (methodPointerType)&m7883_gshared, &t1707_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1707_TI;
extern Il2CppType t600_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8639_MI = 
{
	"get_Current", (methodPointerType)&m7885_gshared, &t1707_TI, &t600_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1707_MIs[] =
{
	&m8635_MI,
	&m8636_MI,
	&m8637_MI,
	&m8638_MI,
	&m8639_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m8636_MI;
extern MethodInfo m8638_MI;
extern MethodInfo m8637_MI;
extern MethodInfo m8639_MI;
static MethodInfo* t1707_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m8636_MI,
	&m8638_MI,
	&m8637_MI,
	&m8639_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3294_TI;
static TypeInfo* t1707_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t3294_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3294_TI;
static Il2CppInterfaceOffsetPair t1707_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t3294_TI, 7},
};
extern MethodInfo m8639_MI;
extern TypeInfo t600_TI;
extern MethodInfo m16862_MI;
static void* t1707_RGCTXData[3] = 
{
	&m8639_MI,
	&t600_TI,
	&m16862_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1707_0_0_0;
extern Il2CppType t1707_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t1707_TI;
extern Il2CppGenericClass t1707_GC;
extern TypeInfo t24_TI;
TypeInfo t1707_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1707_MIs, t1707_PIs, t1707_FIs, NULL, &t122_TI, NULL, &t24_TI, &t1707_TI, t1707_ITIs, t1707_VT, &EmptyCustomAttributesCache, &t1707_TI, &t1707_0_0_0, &t1707_1_0_0, t1707_IOs, &t1707_GC, NULL, NULL, NULL, t1707_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1707)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3856_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Collections.IEnumerable>
extern MethodInfo m22972_MI;
extern MethodInfo m22973_MI;
static PropertyInfo t3856____Item_PropertyInfo = 
{
	&t3856_TI, "Item", &m22972_MI, &m22973_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3856_PIs[] =
{
	&t3856____Item_PropertyInfo,
	NULL
};
extern Il2CppType t600_0_0_0;
static ParameterInfo t3856_m22974_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t600_0_0_0},
};
extern TypeInfo t3856_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22974_MI = 
{
	"IndexOf", NULL, &t3856_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t3856_m22974_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t600_0_0_0;
static ParameterInfo t3856_m22975_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t600_0_0_0},
};
extern TypeInfo t3856_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22975_MI = 
{
	"Insert", NULL, &t3856_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t3856_m22975_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t3856_m22976_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t3856_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m22976_MI = 
{
	"RemoveAt", NULL, &t3856_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t3856_m22976_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t3856_m22972_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t3856_TI;
extern Il2CppType t600_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m22972_MI = 
{
	"get_Item", NULL, &t3856_TI, &t600_0_0_0, RuntimeInvoker_t14_t35, t3856_m22972_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t600_0_0_0;
static ParameterInfo t3856_m22973_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t600_0_0_0},
};
extern TypeInfo t3856_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22973_MI = 
{
	"set_Item", NULL, &t3856_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t3856_m22973_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3856_MIs[] =
{
	&m22974_MI,
	&m22975_MI,
	&m22976_MI,
	&m22972_MI,
	&m22973_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t3855_TI;
extern TypeInfo t3857_TI;
static TypeInfo* t3856_ITIs[] = 
{
	&t600_TI,
	&t3855_TI,
	&t3857_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3856_0_0_0;
extern Il2CppType t3856_1_0_0;
struct t3856;
extern TypeInfo t3856_TI;
extern Il2CppGenericClass t3856_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t3856_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t3856_MIs, t3856_PIs, NULL, NULL, NULL, NULL, NULL, &t3856_TI, t3856_ITIs, NULL, &t1409__CustomAttributeCache, &t3856_TI, &t3856_0_0_0, &t3856_1_0_0, NULL, &t3856_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3858_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Collections.ICollection>
extern MethodInfo m22977_MI;
static PropertyInfo t3858____Count_PropertyInfo = 
{
	&t3858_TI, "Count", &m22977_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m22978_MI;
static PropertyInfo t3858____IsReadOnly_PropertyInfo = 
{
	&t3858_TI, "IsReadOnly", &m22978_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3858_PIs[] =
{
	&t3858____Count_PropertyInfo,
	&t3858____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t3858_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m22977_MI = 
{
	"get_Count", NULL, &t3858_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3858_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m22978_MI = 
{
	"get_IsReadOnly", NULL, &t3858_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t651_0_0_0;
static ParameterInfo t3858_m22979_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t651_0_0_0},
};
extern TypeInfo t3858_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22979_MI = 
{
	"Add", NULL, &t3858_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t3858_m22979_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3858_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m22980_MI = 
{
	"Clear", NULL, &t3858_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t651_0_0_0;
static ParameterInfo t3858_m22981_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t651_0_0_0},
};
extern TypeInfo t3858_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22981_MI = 
{
	"Contains", NULL, &t3858_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t3858_m22981_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2902_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t3858_m22982_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2902_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t3858_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m22982_MI = 
{
	"CopyTo", NULL, &t3858_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t3858_m22982_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t651_0_0_0;
static ParameterInfo t3858_m22983_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t651_0_0_0},
};
extern TypeInfo t3858_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22983_MI = 
{
	"Remove", NULL, &t3858_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t3858_m22983_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3858_MIs[] =
{
	&m22977_MI,
	&m22978_MI,
	&m22979_MI,
	&m22980_MI,
	&m22981_MI,
	&m22982_MI,
	&m22983_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t3860_TI;
static TypeInfo* t3858_ITIs[] = 
{
	&t600_TI,
	&t3860_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3858_0_0_0;
extern Il2CppType t3858_1_0_0;
struct t3858;
extern TypeInfo t3858_TI;
extern Il2CppGenericClass t3858_GC;
TypeInfo t3858_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t3858_MIs, t3858_PIs, NULL, NULL, NULL, NULL, NULL, &t3858_TI, t3858_ITIs, NULL, &EmptyCustomAttributesCache, &t3858_TI, &t3858_0_0_0, &t3858_1_0_0, NULL, &t3858_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3860_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Collections.ICollection>
extern TypeInfo t3860_TI;
extern Il2CppType t3295_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22984_MI = 
{
	"GetEnumerator", NULL, &t3860_TI, &t3295_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3860_MIs[] =
{
	&m22984_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t3860_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3860_0_0_0;
extern Il2CppType t3860_1_0_0;
struct t3860;
extern TypeInfo t3860_TI;
extern Il2CppGenericClass t3860_GC;
TypeInfo t3860_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t3860_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3860_TI, t3860_ITIs, NULL, &EmptyCustomAttributesCache, &t3860_TI, &t3860_0_0_0, &t3860_1_0_0, NULL, &t3860_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3295_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Collections.ICollection>
extern MethodInfo m22985_MI;
static PropertyInfo t3295____Current_PropertyInfo = 
{
	&t3295_TI, "Current", &m22985_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3295_PIs[] =
{
	&t3295____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3295_TI;
extern Il2CppType t651_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22985_MI = 
{
	"get_Current", NULL, &t3295_TI, &t651_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3295_MIs[] =
{
	&m22985_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t3295_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3295_0_0_0;
extern Il2CppType t3295_1_0_0;
struct t3295;
extern TypeInfo t3295_TI;
extern Il2CppGenericClass t3295_GC;
TypeInfo t3295_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3295_MIs, t3295_PIs, NULL, NULL, NULL, NULL, NULL, &t3295_TI, t3295_ITIs, NULL, &EmptyCustomAttributesCache, &t3295_TI, &t3295_0_0_0, &t3295_1_0_0, NULL, &t3295_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t1708.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1708_TI;
#include "t1708MD.h"

extern TypeInfo t1708_TI;
extern TypeInfo t651_TI;
extern TypeInfo t1278_TI;
extern MethodInfo m8644_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m16873_MI;
struct t24;
#define m16873(__this, p0, method) (t14 *)m16357_gshared((t24 *)__this, (int32_t)p0, method)
extern MethodInfo m16873_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Collections.ICollection>
extern Il2CppType t24_0_0_1;
FieldInfo t1708_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t1708_TI, offsetof(t1708, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t1708_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t1708_TI, offsetof(t1708, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t1708_FIs[] =
{
	&t1708_f0_FieldInfo,
	&t1708_f1_FieldInfo,
	NULL
};
extern MethodInfo m8641_MI;
static PropertyInfo t1708____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1708_TI, "System.Collections.IEnumerator.Current", &m8641_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8644_MI;
static PropertyInfo t1708____Current_PropertyInfo = 
{
	&t1708_TI, "Current", &m8644_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1708_PIs[] =
{
	&t1708____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1708____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t1708_m8640_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t1708_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8640_MI = 
{
	".ctor", (methodPointerType)&m7877_gshared, &t1708_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1708_m8640_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1708_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8641_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7879_gshared, &t1708_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1708_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8642_MI = 
{
	"Dispose", (methodPointerType)&m7881_gshared, &t1708_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1708_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m8643_MI = 
{
	"MoveNext", (methodPointerType)&m7883_gshared, &t1708_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1708_TI;
extern Il2CppType t651_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8644_MI = 
{
	"get_Current", (methodPointerType)&m7885_gshared, &t1708_TI, &t651_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1708_MIs[] =
{
	&m8640_MI,
	&m8641_MI,
	&m8642_MI,
	&m8643_MI,
	&m8644_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m8641_MI;
extern MethodInfo m8643_MI;
extern MethodInfo m8642_MI;
extern MethodInfo m8644_MI;
static MethodInfo* t1708_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m8641_MI,
	&m8643_MI,
	&m8642_MI,
	&m8644_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3295_TI;
static TypeInfo* t1708_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t3295_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3295_TI;
static Il2CppInterfaceOffsetPair t1708_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t3295_TI, 7},
};
extern MethodInfo m8644_MI;
extern TypeInfo t651_TI;
extern MethodInfo m16873_MI;
static void* t1708_RGCTXData[3] = 
{
	&m8644_MI,
	&t651_TI,
	&m16873_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1708_0_0_0;
extern Il2CppType t1708_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t1708_TI;
extern Il2CppGenericClass t1708_GC;
extern TypeInfo t24_TI;
TypeInfo t1708_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1708_MIs, t1708_PIs, t1708_FIs, NULL, &t122_TI, NULL, &t24_TI, &t1708_TI, t1708_ITIs, t1708_VT, &EmptyCustomAttributesCache, &t1708_TI, &t1708_0_0_0, &t1708_1_0_0, t1708_IOs, &t1708_GC, NULL, NULL, NULL, t1708_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1708)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3859_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Collections.ICollection>
extern MethodInfo m22986_MI;
extern MethodInfo m22987_MI;
static PropertyInfo t3859____Item_PropertyInfo = 
{
	&t3859_TI, "Item", &m22986_MI, &m22987_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3859_PIs[] =
{
	&t3859____Item_PropertyInfo,
	NULL
};
extern Il2CppType t651_0_0_0;
static ParameterInfo t3859_m22988_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t651_0_0_0},
};
extern TypeInfo t3859_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22988_MI = 
{
	"IndexOf", NULL, &t3859_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t3859_m22988_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t651_0_0_0;
static ParameterInfo t3859_m22989_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t651_0_0_0},
};
extern TypeInfo t3859_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22989_MI = 
{
	"Insert", NULL, &t3859_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t3859_m22989_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t3859_m22990_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t3859_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m22990_MI = 
{
	"RemoveAt", NULL, &t3859_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t3859_m22990_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t3859_m22986_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t3859_TI;
extern Il2CppType t651_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m22986_MI = 
{
	"get_Item", NULL, &t3859_TI, &t651_0_0_0, RuntimeInvoker_t14_t35, t3859_m22986_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t651_0_0_0;
static ParameterInfo t3859_m22987_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t651_0_0_0},
};
extern TypeInfo t3859_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22987_MI = 
{
	"set_Item", NULL, &t3859_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t3859_m22987_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3859_MIs[] =
{
	&m22988_MI,
	&m22989_MI,
	&m22990_MI,
	&m22986_MI,
	&m22987_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t3858_TI;
extern TypeInfo t3860_TI;
static TypeInfo* t3859_ITIs[] = 
{
	&t600_TI,
	&t3858_TI,
	&t3860_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3859_0_0_0;
extern Il2CppType t3859_1_0_0;
struct t3859;
extern TypeInfo t3859_TI;
extern Il2CppGenericClass t3859_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t3859_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t3859_MIs, t3859_PIs, NULL, NULL, NULL, NULL, NULL, &t3859_TI, t3859_ITIs, NULL, &t1409__CustomAttributeCache, &t3859_TI, &t3859_0_0_0, &t3859_1_0_0, NULL, &t3859_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3861_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Collections.IList>
extern MethodInfo m22991_MI;
static PropertyInfo t3861____Count_PropertyInfo = 
{
	&t3861_TI, "Count", &m22991_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m22992_MI;
static PropertyInfo t3861____IsReadOnly_PropertyInfo = 
{
	&t3861_TI, "IsReadOnly", &m22992_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3861_PIs[] =
{
	&t3861____Count_PropertyInfo,
	&t3861____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t3861_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m22991_MI = 
{
	"get_Count", NULL, &t3861_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3861_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m22992_MI = 
{
	"get_IsReadOnly", NULL, &t3861_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1023_0_0_0;
static ParameterInfo t3861_m22993_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1023_0_0_0},
};
extern TypeInfo t3861_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22993_MI = 
{
	"Add", NULL, &t3861_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t3861_m22993_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3861_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m22994_MI = 
{
	"Clear", NULL, &t3861_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1023_0_0_0;
static ParameterInfo t3861_m22995_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1023_0_0_0},
};
extern TypeInfo t3861_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22995_MI = 
{
	"Contains", NULL, &t3861_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t3861_m22995_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2903_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t3861_m22996_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2903_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t3861_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m22996_MI = 
{
	"CopyTo", NULL, &t3861_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t3861_m22996_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1023_0_0_0;
static ParameterInfo t3861_m22997_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1023_0_0_0},
};
extern TypeInfo t3861_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22997_MI = 
{
	"Remove", NULL, &t3861_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t3861_m22997_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3861_MIs[] =
{
	&m22991_MI,
	&m22992_MI,
	&m22993_MI,
	&m22994_MI,
	&m22995_MI,
	&m22996_MI,
	&m22997_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t3863_TI;
static TypeInfo* t3861_ITIs[] = 
{
	&t600_TI,
	&t3863_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3861_0_0_0;
extern Il2CppType t3861_1_0_0;
struct t3861;
extern TypeInfo t3861_TI;
extern Il2CppGenericClass t3861_GC;
TypeInfo t3861_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t3861_MIs, t3861_PIs, NULL, NULL, NULL, NULL, NULL, &t3861_TI, t3861_ITIs, NULL, &EmptyCustomAttributesCache, &t3861_TI, &t3861_0_0_0, &t3861_1_0_0, NULL, &t3861_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3863_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Collections.IList>
extern TypeInfo t3863_TI;
extern Il2CppType t3296_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22998_MI = 
{
	"GetEnumerator", NULL, &t3863_TI, &t3296_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3863_MIs[] =
{
	&m22998_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t3863_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3863_0_0_0;
extern Il2CppType t3863_1_0_0;
struct t3863;
extern TypeInfo t3863_TI;
extern Il2CppGenericClass t3863_GC;
TypeInfo t3863_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t3863_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3863_TI, t3863_ITIs, NULL, &EmptyCustomAttributesCache, &t3863_TI, &t3863_0_0_0, &t3863_1_0_0, NULL, &t3863_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3296_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Collections.IList>
extern MethodInfo m22999_MI;
static PropertyInfo t3296____Current_PropertyInfo = 
{
	&t3296_TI, "Current", &m22999_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3296_PIs[] =
{
	&t3296____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3296_TI;
extern Il2CppType t1023_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m22999_MI = 
{
	"get_Current", NULL, &t3296_TI, &t1023_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3296_MIs[] =
{
	&m22999_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t3296_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3296_0_0_0;
extern Il2CppType t3296_1_0_0;
struct t3296;
extern TypeInfo t3296_TI;
extern Il2CppGenericClass t3296_GC;
TypeInfo t3296_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3296_MIs, t3296_PIs, NULL, NULL, NULL, NULL, NULL, &t3296_TI, t3296_ITIs, NULL, &EmptyCustomAttributesCache, &t3296_TI, &t3296_0_0_0, &t3296_1_0_0, NULL, &t3296_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t1709.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1709_TI;
#include "t1709MD.h"

extern TypeInfo t1709_TI;
extern TypeInfo t1023_TI;
extern TypeInfo t1278_TI;
extern MethodInfo m8649_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m16884_MI;
struct t24;
#define m16884(__this, p0, method) (t14 *)m16357_gshared((t24 *)__this, (int32_t)p0, method)
extern MethodInfo m16884_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Collections.IList>
extern Il2CppType t24_0_0_1;
FieldInfo t1709_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t1709_TI, offsetof(t1709, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t1709_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t1709_TI, offsetof(t1709, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t1709_FIs[] =
{
	&t1709_f0_FieldInfo,
	&t1709_f1_FieldInfo,
	NULL
};
extern MethodInfo m8646_MI;
static PropertyInfo t1709____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1709_TI, "System.Collections.IEnumerator.Current", &m8646_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8649_MI;
static PropertyInfo t1709____Current_PropertyInfo = 
{
	&t1709_TI, "Current", &m8649_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1709_PIs[] =
{
	&t1709____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1709____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t1709_m8645_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t1709_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8645_MI = 
{
	".ctor", (methodPointerType)&m7877_gshared, &t1709_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1709_m8645_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1709_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8646_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7879_gshared, &t1709_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1709_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8647_MI = 
{
	"Dispose", (methodPointerType)&m7881_gshared, &t1709_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1709_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m8648_MI = 
{
	"MoveNext", (methodPointerType)&m7883_gshared, &t1709_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1709_TI;
extern Il2CppType t1023_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m8649_MI = 
{
	"get_Current", (methodPointerType)&m7885_gshared, &t1709_TI, &t1023_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1709_MIs[] =
{
	&m8645_MI,
	&m8646_MI,
	&m8647_MI,
	&m8648_MI,
	&m8649_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m8646_MI;
extern MethodInfo m8648_MI;
extern MethodInfo m8647_MI;
extern MethodInfo m8649_MI;
static MethodInfo* t1709_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m8646_MI,
	&m8648_MI,
	&m8647_MI,
	&m8649_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3296_TI;
static TypeInfo* t1709_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t3296_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3296_TI;
static Il2CppInterfaceOffsetPair t1709_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t3296_TI, 7},
};
extern MethodInfo m8649_MI;
extern TypeInfo t1023_TI;
extern MethodInfo m16884_MI;
static void* t1709_RGCTXData[3] = 
{
	&m8649_MI,
	&t1023_TI,
	&m16884_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1709_0_0_0;
extern Il2CppType t1709_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t1709_TI;
extern Il2CppGenericClass t1709_GC;
extern TypeInfo t24_TI;
TypeInfo t1709_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1709_MIs, t1709_PIs, t1709_FIs, NULL, &t122_TI, NULL, &t24_TI, &t1709_TI, t1709_ITIs, t1709_VT, &EmptyCustomAttributesCache, &t1709_TI, &t1709_0_0_0, &t1709_1_0_0, t1709_IOs, &t1709_GC, NULL, NULL, NULL, t1709_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1709)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3862_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Collections.IList>
extern MethodInfo m23000_MI;
extern MethodInfo m23001_MI;
static PropertyInfo t3862____Item_PropertyInfo = 
{
	&t3862_TI, "Item", &m23000_MI, &m23001_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3862_PIs[] =
{
	&t3862____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1023_0_0_0;
static ParameterInfo t3862_m23002_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1023_0_0_0},
};
extern TypeInfo t3862_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23002_MI = 
{
	"IndexOf", NULL, &t3862_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t3862_m23002_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1023_0_0_0;
static ParameterInfo t3862_m23003_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1023_0_0_0},
};
extern TypeInfo t3862_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23003_MI = 
{
	"Insert", NULL, &t3862_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t3862_m23003_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t3862_m23004_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t3862_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m23004_MI = 
{
	"RemoveAt", NULL, &t3862_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t3862_m23004_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t3862_m23000_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t3862_TI;
extern Il2CppType t1023_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m23000_MI = 
{
	"get_Item", NULL, &t3862_TI, &t1023_0_0_0, RuntimeInvoker_t14_t35, t3862_m23000_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1023_0_0_0;
static ParameterInfo t3862_m23001_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1023_0_0_0},
};
extern TypeInfo t3862_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23001_MI = 
{
	"set_Item", NULL, &t3862_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t3862_m23001_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3862_MIs[] =
{
	&m23002_MI,
	&m23003_MI,
	&m23004_MI,
	&m23000_MI,
	&m23001_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t3861_TI;
extern TypeInfo t3863_TI;
static TypeInfo* t3862_ITIs[] = 
{
	&t600_TI,
	&t3861_TI,
	&t3863_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3862_0_0_0;
extern Il2CppType t3862_1_0_0;
struct t3862;
extern TypeInfo t3862_TI;
extern Il2CppGenericClass t3862_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t3862_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t3862_MIs, t3862_PIs, NULL, NULL, NULL, NULL, NULL, &t3862_TI, t3862_ITIs, NULL, &t1409__CustomAttributeCache, &t3862_TI, &t3862_0_0_0, &t3862_1_0_0, NULL, &t3862_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
