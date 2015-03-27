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
extern TypeInfo t3475_TI;

#include "t386.h"

#include "t24.h"

// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.IMECompositionMode>
extern MethodInfo m25672_MI;
static PropertyInfo t3475____Current_PropertyInfo = 
{
	&t3475_TI, "Current", &m25672_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3475_PIs[] =
{
	&t3475____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3475_TI;
extern Il2CppType t386_0_0_0;
extern void* RuntimeInvoker_t386 (MethodInfo* method, void* obj, void** args);
MethodInfo m25672_MI = 
{
	"get_Current", NULL, &t3475_TI, &t386_0_0_0, RuntimeInvoker_t386, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3475_MIs[] =
{
	&m25672_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t3475_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3475_0_0_0;
extern Il2CppType t3475_1_0_0;
struct t3475;
extern TypeInfo t3475_TI;
extern Il2CppGenericClass t3475_GC;
TypeInfo t3475_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3475_MIs, t3475_PIs, NULL, NULL, NULL, NULL, NULL, &t3475_TI, t3475_ITIs, NULL, &EmptyCustomAttributesCache, &t3475_TI, &t3475_0_0_0, &t3475_1_0_0, NULL, &t3475_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2436.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2436_TI;
#include "t2436MD.h"

#include "t14.h"
#include "t35.h"
#include "t33.h"
#include "t1278.h"
#include "t25.h"
#include "t26.h"
extern TypeInfo t2436_TI;
extern TypeInfo t386_TI;
extern TypeInfo t1278_TI;
#include "t1278MD.h"
#include "t24MD.h"
extern MethodInfo m13674_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m19324_MI;
struct t24;
#include "t1242.h"
 int32_t m19324 (t24 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m19324_MI;


extern MethodInfo m13670_MI;
 void m13670 (t2436 * __this, t24 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m13671_MI;
 t14 * m13671 (t2436 * __this, MethodInfo* method){
	{
		int32_t L_0 = m13674(__this, &m13674_MI);
		int32_t L_1 = L_0;
		t14 * L_2 = Box(InitializedTypeInfo(&t386_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m13672_MI;
 void m13672 (t2436 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m13673_MI;
 bool m13673 (t2436 * __this, MethodInfo* method){
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
extern MethodInfo m13674_MI;
 int32_t m13674 (t2436 * __this, MethodInfo* method){
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
		int32_t L_8 = m19324(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m19324_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.IMECompositionMode>
extern Il2CppType t24_0_0_1;
FieldInfo t2436_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t2436_TI, offsetof(t2436, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t2436_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t2436_TI, offsetof(t2436, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t2436_FIs[] =
{
	&t2436_f0_FieldInfo,
	&t2436_f1_FieldInfo,
	NULL
};
extern MethodInfo m13671_MI;
static PropertyInfo t2436____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2436_TI, "System.Collections.IEnumerator.Current", &m13671_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13674_MI;
static PropertyInfo t2436____Current_PropertyInfo = 
{
	&t2436_TI, "Current", &m13674_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2436_PIs[] =
{
	&t2436____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2436____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t2436_m13670_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t2436_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13670_MI = 
{
	".ctor", (methodPointerType)&m13670, &t2436_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2436_m13670_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2436_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13671_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m13671, &t2436_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2436_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13672_MI = 
{
	"Dispose", (methodPointerType)&m13672, &t2436_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2436_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m13673_MI = 
{
	"MoveNext", (methodPointerType)&m13673, &t2436_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2436_TI;
extern Il2CppType t386_0_0_0;
extern void* RuntimeInvoker_t386 (MethodInfo* method, void* obj, void** args);
MethodInfo m13674_MI = 
{
	"get_Current", (methodPointerType)&m13674, &t2436_TI, &t386_0_0_0, RuntimeInvoker_t386, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2436_MIs[] =
{
	&m13670_MI,
	&m13671_MI,
	&m13672_MI,
	&m13673_MI,
	&m13674_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m13671_MI;
extern MethodInfo m13673_MI;
extern MethodInfo m13672_MI;
extern MethodInfo m13674_MI;
static MethodInfo* t2436_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m13671_MI,
	&m13673_MI,
	&m13672_MI,
	&m13674_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3475_TI;
static TypeInfo* t2436_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t3475_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3475_TI;
static Il2CppInterfaceOffsetPair t2436_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t3475_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2436_0_0_0;
extern Il2CppType t2436_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t2436_TI;
extern Il2CppGenericClass t2436_GC;
extern TypeInfo t24_TI;
TypeInfo t2436_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2436_MIs, t2436_PIs, t2436_FIs, NULL, &t122_TI, NULL, &t24_TI, &t2436_TI, t2436_ITIs, t2436_VT, &EmptyCustomAttributesCache, &t2436_TI, &t2436_0_0_0, &t2436_1_0_0, t2436_IOs, &t2436_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2436)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4350_TI;

#include "UnityEngine_ArrayTypes.h"


// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.IMECompositionMode>
extern MethodInfo m25673_MI;
static PropertyInfo t4350____Count_PropertyInfo = 
{
	&t4350_TI, "Count", &m25673_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m25674_MI;
static PropertyInfo t4350____IsReadOnly_PropertyInfo = 
{
	&t4350_TI, "IsReadOnly", &m25674_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4350_PIs[] =
{
	&t4350____Count_PropertyInfo,
	&t4350____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4350_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25673_MI = 
{
	"get_Count", NULL, &t4350_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4350_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m25674_MI = 
{
	"get_IsReadOnly", NULL, &t4350_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t386_0_0_0;
static ParameterInfo t4350_m25675_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t386_0_0_0},
};
extern TypeInfo t4350_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25675_MI = 
{
	"Add", NULL, &t4350_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t4350_m25675_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4350_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m25676_MI = 
{
	"Clear", NULL, &t4350_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t386_0_0_0;
static ParameterInfo t4350_m25677_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t386_0_0_0},
};
extern TypeInfo t4350_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25677_MI = 
{
	"Contains", NULL, &t4350_TI, &t26_0_0_0, RuntimeInvoker_t26_t35, t4350_m25677_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3118_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t4350_m25678_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3118_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4350_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25678_MI = 
{
	"CopyTo", NULL, &t4350_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t4350_m25678_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t386_0_0_0;
static ParameterInfo t4350_m25679_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t386_0_0_0},
};
extern TypeInfo t4350_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25679_MI = 
{
	"Remove", NULL, &t4350_TI, &t26_0_0_0, RuntimeInvoker_t26_t35, t4350_m25679_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4350_MIs[] =
{
	&m25673_MI,
	&m25674_MI,
	&m25675_MI,
	&m25676_MI,
	&m25677_MI,
	&m25678_MI,
	&m25679_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4352_TI;
static TypeInfo* t4350_ITIs[] = 
{
	&t600_TI,
	&t4352_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4350_0_0_0;
extern Il2CppType t4350_1_0_0;
struct t4350;
extern TypeInfo t4350_TI;
extern Il2CppGenericClass t4350_GC;
TypeInfo t4350_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4350_MIs, t4350_PIs, NULL, NULL, NULL, NULL, NULL, &t4350_TI, t4350_ITIs, NULL, &EmptyCustomAttributesCache, &t4350_TI, &t4350_0_0_0, &t4350_1_0_0, NULL, &t4350_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4352_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.IMECompositionMode>
extern TypeInfo t4352_TI;
extern Il2CppType t3475_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25680_MI = 
{
	"GetEnumerator", NULL, &t4352_TI, &t3475_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4352_MIs[] =
{
	&m25680_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t4352_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4352_0_0_0;
extern Il2CppType t4352_1_0_0;
struct t4352;
extern TypeInfo t4352_TI;
extern Il2CppGenericClass t4352_GC;
TypeInfo t4352_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4352_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4352_TI, t4352_ITIs, NULL, &EmptyCustomAttributesCache, &t4352_TI, &t4352_0_0_0, &t4352_1_0_0, NULL, &t4352_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4351_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.IMECompositionMode>
extern MethodInfo m25681_MI;
extern MethodInfo m25682_MI;
static PropertyInfo t4351____Item_PropertyInfo = 
{
	&t4351_TI, "Item", &m25681_MI, &m25682_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4351_PIs[] =
{
	&t4351____Item_PropertyInfo,
	NULL
};
extern Il2CppType t386_0_0_0;
static ParameterInfo t4351_m25683_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t386_0_0_0},
};
extern TypeInfo t4351_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25683_MI = 
{
	"IndexOf", NULL, &t4351_TI, &t35_0_0_0, RuntimeInvoker_t35_t35, t4351_m25683_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t386_0_0_0;
static ParameterInfo t4351_m25684_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t386_0_0_0},
};
extern TypeInfo t4351_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25684_MI = 
{
	"Insert", NULL, &t4351_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t35, t4351_m25684_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4351_m25685_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4351_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25685_MI = 
{
	"RemoveAt", NULL, &t4351_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t4351_m25685_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4351_m25681_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4351_TI;
extern Il2CppType t386_0_0_0;
extern void* RuntimeInvoker_t386_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25681_MI = 
{
	"get_Item", NULL, &t4351_TI, &t386_0_0_0, RuntimeInvoker_t386_t35, t4351_m25681_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t386_0_0_0;
static ParameterInfo t4351_m25682_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t386_0_0_0},
};
extern TypeInfo t4351_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25682_MI = 
{
	"set_Item", NULL, &t4351_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t35, t4351_m25682_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4351_MIs[] =
{
	&m25683_MI,
	&m25684_MI,
	&m25685_MI,
	&m25681_MI,
	&m25682_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4350_TI;
extern TypeInfo t4352_TI;
static TypeInfo* t4351_ITIs[] = 
{
	&t600_TI,
	&t4350_TI,
	&t4352_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4351_0_0_0;
extern Il2CppType t4351_1_0_0;
struct t4351;
extern TypeInfo t4351_TI;
extern Il2CppGenericClass t4351_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t4351_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4351_MIs, t4351_PIs, NULL, NULL, NULL, NULL, NULL, &t4351_TI, t4351_ITIs, NULL, &t1409__CustomAttributeCache, &t4351_TI, &t4351_0_0_0, &t4351_1_0_0, NULL, &t4351_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3476_TI;

#include "t385.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.HideFlags>
extern MethodInfo m25686_MI;
static PropertyInfo t3476____Current_PropertyInfo = 
{
	&t3476_TI, "Current", &m25686_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3476_PIs[] =
{
	&t3476____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3476_TI;
extern Il2CppType t385_0_0_0;
extern void* RuntimeInvoker_t385 (MethodInfo* method, void* obj, void** args);
MethodInfo m25686_MI = 
{
	"get_Current", NULL, &t3476_TI, &t385_0_0_0, RuntimeInvoker_t385, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3476_MIs[] =
{
	&m25686_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t3476_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3476_0_0_0;
extern Il2CppType t3476_1_0_0;
struct t3476;
extern TypeInfo t3476_TI;
extern Il2CppGenericClass t3476_GC;
TypeInfo t3476_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3476_MIs, t3476_PIs, NULL, NULL, NULL, NULL, NULL, &t3476_TI, t3476_ITIs, NULL, &EmptyCustomAttributesCache, &t3476_TI, &t3476_0_0_0, &t3476_1_0_0, NULL, &t3476_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2437.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2437_TI;
#include "t2437MD.h"

extern TypeInfo t2437_TI;
extern TypeInfo t385_TI;
extern TypeInfo t1278_TI;
extern MethodInfo m13679_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m19335_MI;
struct t24;
 int32_t m19335 (t24 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m19335_MI;


extern MethodInfo m13675_MI;
 void m13675 (t2437 * __this, t24 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m13676_MI;
 t14 * m13676 (t2437 * __this, MethodInfo* method){
	{
		int32_t L_0 = m13679(__this, &m13679_MI);
		int32_t L_1 = L_0;
		t14 * L_2 = Box(InitializedTypeInfo(&t385_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m13677_MI;
 void m13677 (t2437 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m13678_MI;
 bool m13678 (t2437 * __this, MethodInfo* method){
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
extern MethodInfo m13679_MI;
 int32_t m13679 (t2437 * __this, MethodInfo* method){
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
		int32_t L_8 = m19335(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m19335_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.HideFlags>
extern Il2CppType t24_0_0_1;
FieldInfo t2437_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t2437_TI, offsetof(t2437, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t2437_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t2437_TI, offsetof(t2437, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t2437_FIs[] =
{
	&t2437_f0_FieldInfo,
	&t2437_f1_FieldInfo,
	NULL
};
extern MethodInfo m13676_MI;
static PropertyInfo t2437____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2437_TI, "System.Collections.IEnumerator.Current", &m13676_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13679_MI;
static PropertyInfo t2437____Current_PropertyInfo = 
{
	&t2437_TI, "Current", &m13679_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2437_PIs[] =
{
	&t2437____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2437____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t2437_m13675_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t2437_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13675_MI = 
{
	".ctor", (methodPointerType)&m13675, &t2437_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2437_m13675_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2437_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13676_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m13676, &t2437_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2437_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13677_MI = 
{
	"Dispose", (methodPointerType)&m13677, &t2437_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2437_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m13678_MI = 
{
	"MoveNext", (methodPointerType)&m13678, &t2437_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2437_TI;
extern Il2CppType t385_0_0_0;
extern void* RuntimeInvoker_t385 (MethodInfo* method, void* obj, void** args);
MethodInfo m13679_MI = 
{
	"get_Current", (methodPointerType)&m13679, &t2437_TI, &t385_0_0_0, RuntimeInvoker_t385, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2437_MIs[] =
{
	&m13675_MI,
	&m13676_MI,
	&m13677_MI,
	&m13678_MI,
	&m13679_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m13676_MI;
extern MethodInfo m13678_MI;
extern MethodInfo m13677_MI;
extern MethodInfo m13679_MI;
static MethodInfo* t2437_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m13676_MI,
	&m13678_MI,
	&m13677_MI,
	&m13679_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3476_TI;
static TypeInfo* t2437_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t3476_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3476_TI;
static Il2CppInterfaceOffsetPair t2437_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t3476_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2437_0_0_0;
extern Il2CppType t2437_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t2437_TI;
extern Il2CppGenericClass t2437_GC;
extern TypeInfo t24_TI;
TypeInfo t2437_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2437_MIs, t2437_PIs, t2437_FIs, NULL, &t122_TI, NULL, &t24_TI, &t2437_TI, t2437_ITIs, t2437_VT, &EmptyCustomAttributesCache, &t2437_TI, &t2437_0_0_0, &t2437_1_0_0, t2437_IOs, &t2437_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2437)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4353_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.HideFlags>
extern MethodInfo m25687_MI;
static PropertyInfo t4353____Count_PropertyInfo = 
{
	&t4353_TI, "Count", &m25687_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m25688_MI;
static PropertyInfo t4353____IsReadOnly_PropertyInfo = 
{
	&t4353_TI, "IsReadOnly", &m25688_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4353_PIs[] =
{
	&t4353____Count_PropertyInfo,
	&t4353____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4353_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25687_MI = 
{
	"get_Count", NULL, &t4353_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4353_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m25688_MI = 
{
	"get_IsReadOnly", NULL, &t4353_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t385_0_0_0;
static ParameterInfo t4353_m25689_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t385_0_0_0},
};
extern TypeInfo t4353_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25689_MI = 
{
	"Add", NULL, &t4353_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t4353_m25689_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4353_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m25690_MI = 
{
	"Clear", NULL, &t4353_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t385_0_0_0;
static ParameterInfo t4353_m25691_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t385_0_0_0},
};
extern TypeInfo t4353_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25691_MI = 
{
	"Contains", NULL, &t4353_TI, &t26_0_0_0, RuntimeInvoker_t26_t35, t4353_m25691_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3119_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t4353_m25692_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3119_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4353_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25692_MI = 
{
	"CopyTo", NULL, &t4353_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t4353_m25692_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t385_0_0_0;
static ParameterInfo t4353_m25693_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t385_0_0_0},
};
extern TypeInfo t4353_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25693_MI = 
{
	"Remove", NULL, &t4353_TI, &t26_0_0_0, RuntimeInvoker_t26_t35, t4353_m25693_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4353_MIs[] =
{
	&m25687_MI,
	&m25688_MI,
	&m25689_MI,
	&m25690_MI,
	&m25691_MI,
	&m25692_MI,
	&m25693_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4355_TI;
static TypeInfo* t4353_ITIs[] = 
{
	&t600_TI,
	&t4355_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4353_0_0_0;
extern Il2CppType t4353_1_0_0;
struct t4353;
extern TypeInfo t4353_TI;
extern Il2CppGenericClass t4353_GC;
TypeInfo t4353_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4353_MIs, t4353_PIs, NULL, NULL, NULL, NULL, NULL, &t4353_TI, t4353_ITIs, NULL, &EmptyCustomAttributesCache, &t4353_TI, &t4353_0_0_0, &t4353_1_0_0, NULL, &t4353_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4355_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.HideFlags>
extern TypeInfo t4355_TI;
extern Il2CppType t3476_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25694_MI = 
{
	"GetEnumerator", NULL, &t4355_TI, &t3476_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4355_MIs[] =
{
	&m25694_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t4355_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4355_0_0_0;
extern Il2CppType t4355_1_0_0;
struct t4355;
extern TypeInfo t4355_TI;
extern Il2CppGenericClass t4355_GC;
TypeInfo t4355_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4355_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4355_TI, t4355_ITIs, NULL, &EmptyCustomAttributesCache, &t4355_TI, &t4355_0_0_0, &t4355_1_0_0, NULL, &t4355_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4354_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.HideFlags>
extern MethodInfo m25695_MI;
extern MethodInfo m25696_MI;
static PropertyInfo t4354____Item_PropertyInfo = 
{
	&t4354_TI, "Item", &m25695_MI, &m25696_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4354_PIs[] =
{
	&t4354____Item_PropertyInfo,
	NULL
};
extern Il2CppType t385_0_0_0;
static ParameterInfo t4354_m25697_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t385_0_0_0},
};
extern TypeInfo t4354_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25697_MI = 
{
	"IndexOf", NULL, &t4354_TI, &t35_0_0_0, RuntimeInvoker_t35_t35, t4354_m25697_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t385_0_0_0;
static ParameterInfo t4354_m25698_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t385_0_0_0},
};
extern TypeInfo t4354_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25698_MI = 
{
	"Insert", NULL, &t4354_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t35, t4354_m25698_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4354_m25699_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4354_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25699_MI = 
{
	"RemoveAt", NULL, &t4354_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t4354_m25699_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4354_m25695_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4354_TI;
extern Il2CppType t385_0_0_0;
extern void* RuntimeInvoker_t385_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25695_MI = 
{
	"get_Item", NULL, &t4354_TI, &t385_0_0_0, RuntimeInvoker_t385_t35, t4354_m25695_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t385_0_0_0;
static ParameterInfo t4354_m25696_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t385_0_0_0},
};
extern TypeInfo t4354_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25696_MI = 
{
	"set_Item", NULL, &t4354_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t35, t4354_m25696_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4354_MIs[] =
{
	&m25697_MI,
	&m25698_MI,
	&m25699_MI,
	&m25695_MI,
	&m25696_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4353_TI;
extern TypeInfo t4355_TI;
static TypeInfo* t4354_ITIs[] = 
{
	&t600_TI,
	&t4353_TI,
	&t4355_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4354_0_0_0;
extern Il2CppType t4354_1_0_0;
struct t4354;
extern TypeInfo t4354_TI;
extern Il2CppGenericClass t4354_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t4354_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4354_MIs, t4354_PIs, NULL, NULL, NULL, NULL, NULL, &t4354_TI, t4354_ITIs, NULL, &t1409__CustomAttributeCache, &t4354_TI, &t4354_0_0_0, &t4354_1_0_0, NULL, &t4354_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t2438.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2438_TI;
#include "t2438MD.h"

#include "t29.h"
#include "t554.h"
#include "mscorlib_ArrayTypes.h"
#include "t2439.h"
extern TypeInfo t40_TI;
extern TypeInfo t14_TI;
extern TypeInfo t2438_TI;
extern TypeInfo t29_TI;
extern TypeInfo t2439_TI;
extern TypeInfo t25_TI;
#include "t2439MD.h"
extern MethodInfo m13682_MI;
extern MethodInfo m13684_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Object>
extern Il2CppType t40_0_0_33;
FieldInfo t2438_f1_FieldInfo = 
{
	"m_Arg1", &t40_0_0_33, &t2438_TI, offsetof(t2438, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2438_FIs[] =
{
	&t2438_f1_FieldInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
extern Il2CppType t554_0_0_0;
extern Il2CppType t29_0_0_0;
static ParameterInfo t2438_m13680_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t554_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2438_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13680_MI = 
{
	".ctor", (methodPointerType)&m7907_gshared, &t2438_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t14_t14, t2438_m13680_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t40_0_0_0;
static ParameterInfo t2438_m13681_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t40_0_0_0},
};
extern TypeInfo t2438_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13681_MI = 
{
	"Invoke", (methodPointerType)&m7909_gshared, &t2438_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2438_m13681_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2438_MIs[] =
{
	&m13680_MI,
	&m13681_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m13681_MI;
extern MethodInfo m13685_MI;
static MethodInfo* t2438_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m13681_MI,
	&m13685_MI,
};
extern Il2CppType t2440_0_0_0;
extern TypeInfo t2440_TI;
extern MethodInfo m19345_MI;
extern TypeInfo t29_TI;
extern MethodInfo m13687_MI;
extern MethodInfo m13682_MI;
extern TypeInfo t29_TI;
extern MethodInfo m13684_MI;
static void* t2438_RGCTXData[8] = 
{
	(void*)&t2440_0_0_0,
	&t2440_TI,
	&m19345_MI,
	&t29_TI,
	&m13687_MI,
	&m13682_MI,
	&t29_TI,
	&m13684_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2438_0_0_0;
extern Il2CppType t2438_1_0_0;
extern TypeInfo t2439_TI;
struct t2438;
extern TypeInfo t2438_TI;
extern Il2CppGenericClass t2438_GC;
TypeInfo t2438_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t2438_MIs, NULL, t2438_FIs, NULL, &t2439_TI, NULL, NULL, &t2438_TI, NULL, t2438_VT, &EmptyCustomAttributesCache, &t2438_TI, &t2438_0_0_0, &t2438_1_0_0, NULL, &t2438_GC, NULL, NULL, NULL, t2438_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2438), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2439_TI;

#include "t2440.h"
#include "t31.h"
#include "t32.h"
#include "t353.h"
#include "t319.h"
extern TypeInfo t2439_TI;
extern TypeInfo t2440_TI;
extern TypeInfo t31_TI;
extern TypeInfo t319_TI;
extern TypeInfo t29_TI;
extern TypeInfo t25_TI;
#include "t553MD.h"
#include "t31MD.h"
#include "t353MD.h"
#include "t319MD.h"
#include "t2440MD.h"
extern Il2CppType t2440_0_0_0;
extern MethodInfo m2816_MI;
extern MethodInfo m1571_MI;
extern MethodInfo m2981_MI;
extern MethodInfo m1614_MI;
extern MethodInfo m2815_MI;
extern MethodInfo m1959_MI;
extern MethodInfo m19345_MI;
extern MethodInfo m2817_MI;
extern MethodInfo m13687_MI;
extern MethodInfo m2977_MI;
extern MethodInfo m2975_MI;
struct t553;
#include "t553.h"
struct t553;
 void m16422_gshared (t14 * __this, t14 * p0, MethodInfo* method);
#define m16422(__this, p0, method) (void)m16422_gshared((t14 *)__this, (t14 *)p0, method)
#define m19345(__this, p0, method) (void)m16422_gshared((t14 *)__this, (t14 *)p0, method)
extern MethodInfo m19345_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.Object>
extern Il2CppType t2440_0_0_1;
FieldInfo t2439_f0_FieldInfo = 
{
	"Delegate", &t2440_0_0_1, &t2439_TI, offsetof(t2439, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2439_FIs[] =
{
	&t2439_f0_FieldInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
extern Il2CppType t554_0_0_0;
static ParameterInfo t2439_m13682_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t554_0_0_0},
};
extern TypeInfo t2439_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13682_MI = 
{
	".ctor", (methodPointerType)&m7910_gshared, &t2439_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t14, t2439_m13682_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2440_0_0_0;
static ParameterInfo t2439_m13683_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t2440_0_0_0},
};
extern TypeInfo t2439_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13683_MI = 
{
	".ctor", (methodPointerType)&m7911_gshared, &t2439_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2439_m13683_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t40_0_0_0;
static ParameterInfo t2439_m13684_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t40_0_0_0},
};
extern TypeInfo t2439_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13684_MI = 
{
	"Invoke", (methodPointerType)&m7912_gshared, &t2439_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2439_m13684_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t554_0_0_0;
static ParameterInfo t2439_m13685_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t554_0_0_0},
};
extern TypeInfo t2439_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13685_MI = 
{
	"Find", (methodPointerType)&m7913_gshared, &t2439_TI, &t26_0_0_0, RuntimeInvoker_t26_t14_t14, t2439_m13685_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2439_MIs[] =
{
	&m13682_MI,
	&m13683_MI,
	&m13684_MI,
	&m13685_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m13684_MI;
extern MethodInfo m13685_MI;
static MethodInfo* t2439_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m13684_MI,
	&m13685_MI,
};
extern Il2CppType t2440_0_0_0;
extern TypeInfo t2440_TI;
extern MethodInfo m19345_MI;
extern TypeInfo t29_TI;
extern MethodInfo m13687_MI;
static void* t2439_RGCTXData[5] = 
{
	(void*)&t2440_0_0_0,
	&t2440_TI,
	&m19345_MI,
	&t29_TI,
	&m13687_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2439_0_0_0;
extern Il2CppType t2439_1_0_0;
extern TypeInfo t553_TI;
struct t2439;
extern TypeInfo t2439_TI;
extern Il2CppGenericClass t2439_GC;
TypeInfo t2439_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2439_MIs, NULL, t2439_FIs, NULL, &t553_TI, NULL, NULL, &t2439_TI, NULL, t2439_VT, &EmptyCustomAttributesCache, &t2439_TI, &t2439_0_0_0, &t2439_1_0_0, NULL, &t2439_GC, NULL, NULL, NULL, t2439_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2439), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2440_TI;

#include "t77.h"
#include "t76.h"


// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.Object>
extern Il2CppType t14_0_0_0;
extern Il2CppType t77_0_0_0;
static ParameterInfo t2440_m13686_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t77_0_0_0},
};
extern TypeInfo t2440_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t77 (MethodInfo* method, void* obj, void** args);
MethodInfo m13686_MI = 
{
	".ctor", (methodPointerType)&m7914_gshared, &t2440_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t77, t2440_m13686_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2440_m13687_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2440_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13687_MI = 
{
	"Invoke", (methodPointerType)&m7915_gshared, &t2440_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2440_m13687_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t29_0_0_0;
extern Il2CppType t76_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t2440_m13688_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t76_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2440_TI;
extern Il2CppType t75_0_0_0;
extern void* RuntimeInvoker_t14_t14_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13688_MI = 
{
	"BeginInvoke", (methodPointerType)&m7916_gshared, &t2440_TI, &t75_0_0_0, RuntimeInvoker_t14_t14_t14_t14, t2440_m13688_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t75_0_0_0;
static ParameterInfo t2440_m13689_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t75_0_0_0},
};
extern TypeInfo t2440_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13689_MI = 
{
	"EndInvoke", (methodPointerType)&m7917_gshared, &t2440_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2440_m13689_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2440_MIs[] =
{
	&m13686_MI,
	&m13687_MI,
	&m13688_MI,
	&m13689_MI,
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
extern MethodInfo m13687_MI;
extern MethodInfo m13688_MI;
extern MethodInfo m13689_MI;
static MethodInfo* t2440_VT[] =
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
	&m13687_MI,
	&m13688_MI,
	&m13689_MI,
};
extern TypeInfo t374_TI;
extern TypeInfo t375_TI;
static Il2CppInterfaceOffsetPair t2440_IOs[] = 
{
	{ &t374_TI, 4},
	{ &t375_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2440_0_0_0;
extern Il2CppType t2440_1_0_0;
extern TypeInfo t211_TI;
struct t2440;
extern TypeInfo t2440_TI;
extern Il2CppGenericClass t2440_GC;
TypeInfo t2440_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t2440_MIs, NULL, NULL, NULL, &t211_TI, NULL, NULL, &t2440_TI, NULL, t2440_VT, &EmptyCustomAttributesCache, &t2440_TI, &t2440_0_0_0, &t2440_1_0_0, t2440_IOs, &t2440_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2440), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t2441.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2441_TI;
#include "t2441MD.h"

#include "t30.h"
#include "t2442.h"
extern TypeInfo t40_TI;
extern TypeInfo t14_TI;
extern TypeInfo t2441_TI;
extern TypeInfo t30_TI;
extern TypeInfo t2442_TI;
extern TypeInfo t25_TI;
#include "t2442MD.h"
extern MethodInfo m13692_MI;
extern MethodInfo m13694_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Component>
extern Il2CppType t40_0_0_33;
FieldInfo t2441_f1_FieldInfo = 
{
	"m_Arg1", &t40_0_0_33, &t2441_TI, offsetof(t2441, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2441_FIs[] =
{
	&t2441_f1_FieldInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
extern Il2CppType t554_0_0_0;
extern Il2CppType t30_0_0_0;
static ParameterInfo t2441_m13690_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t554_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t30_0_0_0},
};
extern TypeInfo t2441_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13690_MI = 
{
	".ctor", (methodPointerType)&m7907_gshared, &t2441_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t14_t14, t2441_m13690_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t40_0_0_0;
static ParameterInfo t2441_m13691_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t40_0_0_0},
};
extern TypeInfo t2441_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13691_MI = 
{
	"Invoke", (methodPointerType)&m7909_gshared, &t2441_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2441_m13691_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2441_MIs[] =
{
	&m13690_MI,
	&m13691_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m13691_MI;
extern MethodInfo m13695_MI;
static MethodInfo* t2441_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m13691_MI,
	&m13695_MI,
};
extern Il2CppType t283_0_0_0;
extern TypeInfo t283_TI;
extern MethodInfo m19346_MI;
extern TypeInfo t30_TI;
extern MethodInfo m2026_MI;
extern MethodInfo m13692_MI;
extern TypeInfo t30_TI;
extern MethodInfo m13694_MI;
static void* t2441_RGCTXData[8] = 
{
	(void*)&t283_0_0_0,
	&t283_TI,
	&m19346_MI,
	&t30_TI,
	&m2026_MI,
	&m13692_MI,
	&t30_TI,
	&m13694_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2441_0_0_0;
extern Il2CppType t2441_1_0_0;
extern TypeInfo t2442_TI;
struct t2441;
extern TypeInfo t2441_TI;
extern Il2CppGenericClass t2441_GC;
TypeInfo t2441_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t2441_MIs, NULL, t2441_FIs, NULL, &t2442_TI, NULL, NULL, &t2441_TI, NULL, t2441_VT, &EmptyCustomAttributesCache, &t2441_TI, &t2441_0_0_0, &t2441_1_0_0, NULL, &t2441_GC, NULL, NULL, NULL, t2441_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2441), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2442_TI;

#include "t283.h"
extern TypeInfo t2442_TI;
extern TypeInfo t283_TI;
extern TypeInfo t31_TI;
extern TypeInfo t319_TI;
extern TypeInfo t30_TI;
extern TypeInfo t25_TI;
#include "t283MD.h"
extern Il2CppType t283_0_0_0;
extern MethodInfo m2816_MI;
extern MethodInfo m1571_MI;
extern MethodInfo m2981_MI;
extern MethodInfo m1614_MI;
extern MethodInfo m2815_MI;
extern MethodInfo m1959_MI;
extern MethodInfo m19346_MI;
extern MethodInfo m2817_MI;
extern MethodInfo m2026_MI;
extern MethodInfo m2977_MI;
extern MethodInfo m2975_MI;
struct t553;
#define m19346(__this, p0, method) (void)m16422_gshared((t14 *)__this, (t14 *)p0, method)
extern MethodInfo m19346_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.Component>
extern Il2CppType t283_0_0_1;
FieldInfo t2442_f0_FieldInfo = 
{
	"Delegate", &t283_0_0_1, &t2442_TI, offsetof(t2442, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2442_FIs[] =
{
	&t2442_f0_FieldInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
extern Il2CppType t554_0_0_0;
static ParameterInfo t2442_m13692_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t554_0_0_0},
};
extern TypeInfo t2442_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13692_MI = 
{
	".ctor", (methodPointerType)&m7910_gshared, &t2442_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t14, t2442_m13692_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t283_0_0_0;
static ParameterInfo t2442_m13693_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t283_0_0_0},
};
extern TypeInfo t2442_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13693_MI = 
{
	".ctor", (methodPointerType)&m7911_gshared, &t2442_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2442_m13693_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t40_0_0_0;
static ParameterInfo t2442_m13694_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t40_0_0_0},
};
extern TypeInfo t2442_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13694_MI = 
{
	"Invoke", (methodPointerType)&m7912_gshared, &t2442_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2442_m13694_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t554_0_0_0;
static ParameterInfo t2442_m13695_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t554_0_0_0},
};
extern TypeInfo t2442_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13695_MI = 
{
	"Find", (methodPointerType)&m7913_gshared, &t2442_TI, &t26_0_0_0, RuntimeInvoker_t26_t14_t14, t2442_m13695_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2442_MIs[] =
{
	&m13692_MI,
	&m13693_MI,
	&m13694_MI,
	&m13695_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m13694_MI;
extern MethodInfo m13695_MI;
static MethodInfo* t2442_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m13694_MI,
	&m13695_MI,
};
extern Il2CppType t283_0_0_0;
extern TypeInfo t283_TI;
extern MethodInfo m19346_MI;
extern TypeInfo t30_TI;
extern MethodInfo m2026_MI;
static void* t2442_RGCTXData[5] = 
{
	(void*)&t283_0_0_0,
	&t283_TI,
	&m19346_MI,
	&t30_TI,
	&m2026_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2442_0_0_0;
extern Il2CppType t2442_1_0_0;
extern TypeInfo t553_TI;
struct t2442;
extern TypeInfo t2442_TI;
extern Il2CppGenericClass t2442_GC;
TypeInfo t2442_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2442_MIs, NULL, t2442_FIs, NULL, &t553_TI, NULL, NULL, &t2442_TI, NULL, t2442_VT, &EmptyCustomAttributesCache, &t2442_TI, &t2442_0_0_0, &t2442_1_0_0, NULL, &t2442_GC, NULL, NULL, NULL, t2442_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2442), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#include "t2443.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2443_TI;
#include "t2443MD.h"

#include "t7.h"
#include "t2444.h"
extern TypeInfo t40_TI;
extern TypeInfo t14_TI;
extern TypeInfo t2443_TI;
extern TypeInfo t7_TI;
extern TypeInfo t2444_TI;
extern TypeInfo t25_TI;
#include "t2444MD.h"
extern MethodInfo m13698_MI;
extern MethodInfo m13700_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.GameObject>
extern Il2CppType t40_0_0_33;
FieldInfo t2443_f1_FieldInfo = 
{
	"m_Arg1", &t40_0_0_33, &t2443_TI, offsetof(t2443, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2443_FIs[] =
{
	&t2443_f1_FieldInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
extern Il2CppType t554_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2443_m13696_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t554_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2443_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13696_MI = 
{
	".ctor", (methodPointerType)&m7907_gshared, &t2443_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t14_t14, t2443_m13696_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t40_0_0_0;
static ParameterInfo t2443_m13697_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t40_0_0_0},
};
extern TypeInfo t2443_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13697_MI = 
{
	"Invoke", (methodPointerType)&m7909_gshared, &t2443_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2443_m13697_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2443_MIs[] =
{
	&m13696_MI,
	&m13697_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m13697_MI;
extern MethodInfo m13701_MI;
static MethodInfo* t2443_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m13697_MI,
	&m13701_MI,
};
extern Il2CppType t2445_0_0_0;
extern TypeInfo t2445_TI;
extern MethodInfo m19347_MI;
extern TypeInfo t7_TI;
extern MethodInfo m13703_MI;
extern MethodInfo m13698_MI;
extern TypeInfo t7_TI;
extern MethodInfo m13700_MI;
static void* t2443_RGCTXData[8] = 
{
	(void*)&t2445_0_0_0,
	&t2445_TI,
	&m19347_MI,
	&t7_TI,
	&m13703_MI,
	&m13698_MI,
	&t7_TI,
	&m13700_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2443_0_0_0;
extern Il2CppType t2443_1_0_0;
extern TypeInfo t2444_TI;
struct t2443;
extern TypeInfo t2443_TI;
extern Il2CppGenericClass t2443_GC;
TypeInfo t2443_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t2443_MIs, NULL, t2443_FIs, NULL, &t2444_TI, NULL, NULL, &t2443_TI, NULL, t2443_VT, &EmptyCustomAttributesCache, &t2443_TI, &t2443_0_0_0, &t2443_1_0_0, NULL, &t2443_GC, NULL, NULL, NULL, t2443_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2443), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2444_TI;

#include "t2445.h"
extern TypeInfo t2444_TI;
extern TypeInfo t2445_TI;
extern TypeInfo t31_TI;
extern TypeInfo t319_TI;
extern TypeInfo t7_TI;
extern TypeInfo t25_TI;
#include "t2445MD.h"
extern Il2CppType t2445_0_0_0;
extern MethodInfo m2816_MI;
extern MethodInfo m1571_MI;
extern MethodInfo m2981_MI;
extern MethodInfo m1614_MI;
extern MethodInfo m2815_MI;
extern MethodInfo m1959_MI;
extern MethodInfo m19347_MI;
extern MethodInfo m2817_MI;
extern MethodInfo m13703_MI;
extern MethodInfo m2977_MI;
extern MethodInfo m2975_MI;
struct t553;
#define m19347(__this, p0, method) (void)m16422_gshared((t14 *)__this, (t14 *)p0, method)
extern MethodInfo m19347_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.GameObject>
extern Il2CppType t2445_0_0_1;
FieldInfo t2444_f0_FieldInfo = 
{
	"Delegate", &t2445_0_0_1, &t2444_TI, offsetof(t2444, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2444_FIs[] =
{
	&t2444_f0_FieldInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
extern Il2CppType t554_0_0_0;
static ParameterInfo t2444_m13698_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t554_0_0_0},
};
extern TypeInfo t2444_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13698_MI = 
{
	".ctor", (methodPointerType)&m7910_gshared, &t2444_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t14, t2444_m13698_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2445_0_0_0;
static ParameterInfo t2444_m13699_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t2445_0_0_0},
};
extern TypeInfo t2444_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13699_MI = 
{
	".ctor", (methodPointerType)&m7911_gshared, &t2444_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2444_m13699_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t40_0_0_0;
static ParameterInfo t2444_m13700_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t40_0_0_0},
};
extern TypeInfo t2444_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13700_MI = 
{
	"Invoke", (methodPointerType)&m7912_gshared, &t2444_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2444_m13700_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t554_0_0_0;
static ParameterInfo t2444_m13701_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t554_0_0_0},
};
extern TypeInfo t2444_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13701_MI = 
{
	"Find", (methodPointerType)&m7913_gshared, &t2444_TI, &t26_0_0_0, RuntimeInvoker_t26_t14_t14, t2444_m13701_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2444_MIs[] =
{
	&m13698_MI,
	&m13699_MI,
	&m13700_MI,
	&m13701_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m13700_MI;
extern MethodInfo m13701_MI;
static MethodInfo* t2444_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m13700_MI,
	&m13701_MI,
};
extern Il2CppType t2445_0_0_0;
extern TypeInfo t2445_TI;
extern MethodInfo m19347_MI;
extern TypeInfo t7_TI;
extern MethodInfo m13703_MI;
static void* t2444_RGCTXData[5] = 
{
	(void*)&t2445_0_0_0,
	&t2445_TI,
	&m19347_MI,
	&t7_TI,
	&m13703_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2444_0_0_0;
extern Il2CppType t2444_1_0_0;
extern TypeInfo t553_TI;
struct t2444;
extern TypeInfo t2444_TI;
extern Il2CppGenericClass t2444_GC;
TypeInfo t2444_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2444_MIs, NULL, t2444_FIs, NULL, &t553_TI, NULL, NULL, &t2444_TI, NULL, t2444_VT, &EmptyCustomAttributesCache, &t2444_TI, &t2444_0_0_0, &t2444_1_0_0, NULL, &t2444_GC, NULL, NULL, NULL, t2444_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2444), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2445_TI;



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.GameObject>
extern Il2CppType t14_0_0_0;
extern Il2CppType t77_0_0_0;
static ParameterInfo t2445_m13702_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t77_0_0_0},
};
extern TypeInfo t2445_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t77 (MethodInfo* method, void* obj, void** args);
MethodInfo m13702_MI = 
{
	".ctor", (methodPointerType)&m7914_gshared, &t2445_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t77, t2445_m13702_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t2445_m13703_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2445_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13703_MI = 
{
	"Invoke", (methodPointerType)&m7915_gshared, &t2445_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2445_m13703_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
extern Il2CppType t76_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t2445_m13704_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t76_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2445_TI;
extern Il2CppType t75_0_0_0;
extern void* RuntimeInvoker_t14_t14_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13704_MI = 
{
	"BeginInvoke", (methodPointerType)&m7916_gshared, &t2445_TI, &t75_0_0_0, RuntimeInvoker_t14_t14_t14_t14, t2445_m13704_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t75_0_0_0;
static ParameterInfo t2445_m13705_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t75_0_0_0},
};
extern TypeInfo t2445_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13705_MI = 
{
	"EndInvoke", (methodPointerType)&m7917_gshared, &t2445_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2445_m13705_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2445_MIs[] =
{
	&m13702_MI,
	&m13703_MI,
	&m13704_MI,
	&m13705_MI,
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
extern MethodInfo m13703_MI;
extern MethodInfo m13704_MI;
extern MethodInfo m13705_MI;
static MethodInfo* t2445_VT[] =
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
	&m13703_MI,
	&m13704_MI,
	&m13705_MI,
};
extern TypeInfo t374_TI;
extern TypeInfo t375_TI;
static Il2CppInterfaceOffsetPair t2445_IOs[] = 
{
	{ &t374_TI, 4},
	{ &t375_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2445_0_0_0;
extern Il2CppType t2445_1_0_0;
extern TypeInfo t211_TI;
struct t2445;
extern TypeInfo t2445_TI;
extern Il2CppGenericClass t2445_GC;
TypeInfo t2445_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t2445_MIs, NULL, NULL, NULL, &t211_TI, NULL, NULL, &t2445_TI, NULL, t2445_VT, &EmptyCustomAttributesCache, &t2445_TI, &t2445_0_0_0, &t2445_1_0_0, t2445_IOs, &t2445_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2445), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t2446.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2446_TI;
#include "t2446MD.h"

#include "t8.h"
#include "t2447.h"
extern TypeInfo t40_TI;
extern TypeInfo t14_TI;
extern TypeInfo t2446_TI;
extern TypeInfo t8_TI;
extern TypeInfo t2447_TI;
extern TypeInfo t25_TI;
#include "t2447MD.h"
extern MethodInfo m13708_MI;
extern MethodInfo m13710_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Transform>
extern Il2CppType t40_0_0_33;
FieldInfo t2446_f1_FieldInfo = 
{
	"m_Arg1", &t40_0_0_33, &t2446_TI, offsetof(t2446, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2446_FIs[] =
{
	&t2446_f1_FieldInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
extern Il2CppType t554_0_0_0;
extern Il2CppType t8_0_0_0;
static ParameterInfo t2446_m13706_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t554_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern TypeInfo t2446_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13706_MI = 
{
	".ctor", (methodPointerType)&m7907_gshared, &t2446_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t14_t14, t2446_m13706_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t40_0_0_0;
static ParameterInfo t2446_m13707_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t40_0_0_0},
};
extern TypeInfo t2446_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13707_MI = 
{
	"Invoke", (methodPointerType)&m7909_gshared, &t2446_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2446_m13707_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2446_MIs[] =
{
	&m13706_MI,
	&m13707_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m13707_MI;
extern MethodInfo m13711_MI;
static MethodInfo* t2446_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m13707_MI,
	&m13711_MI,
};
extern Il2CppType t2448_0_0_0;
extern TypeInfo t2448_TI;
extern MethodInfo m19348_MI;
extern TypeInfo t8_TI;
extern MethodInfo m13713_MI;
extern MethodInfo m13708_MI;
extern TypeInfo t8_TI;
extern MethodInfo m13710_MI;
static void* t2446_RGCTXData[8] = 
{
	(void*)&t2448_0_0_0,
	&t2448_TI,
	&m19348_MI,
	&t8_TI,
	&m13713_MI,
	&m13708_MI,
	&t8_TI,
	&m13710_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2446_0_0_0;
extern Il2CppType t2446_1_0_0;
extern TypeInfo t2447_TI;
struct t2446;
extern TypeInfo t2446_TI;
extern Il2CppGenericClass t2446_GC;
TypeInfo t2446_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t2446_MIs, NULL, t2446_FIs, NULL, &t2447_TI, NULL, NULL, &t2446_TI, NULL, t2446_VT, &EmptyCustomAttributesCache, &t2446_TI, &t2446_0_0_0, &t2446_1_0_0, NULL, &t2446_GC, NULL, NULL, NULL, t2446_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2446), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2447_TI;

#include "t2448.h"
extern TypeInfo t2447_TI;
extern TypeInfo t2448_TI;
extern TypeInfo t31_TI;
extern TypeInfo t319_TI;
extern TypeInfo t8_TI;
extern TypeInfo t25_TI;
#include "t2448MD.h"
extern Il2CppType t2448_0_0_0;
extern MethodInfo m2816_MI;
extern MethodInfo m1571_MI;
extern MethodInfo m2981_MI;
extern MethodInfo m1614_MI;
extern MethodInfo m2815_MI;
extern MethodInfo m1959_MI;
extern MethodInfo m19348_MI;
extern MethodInfo m2817_MI;
extern MethodInfo m13713_MI;
extern MethodInfo m2977_MI;
extern MethodInfo m2975_MI;
struct t553;
#define m19348(__this, p0, method) (void)m16422_gshared((t14 *)__this, (t14 *)p0, method)
extern MethodInfo m19348_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.Transform>
extern Il2CppType t2448_0_0_1;
FieldInfo t2447_f0_FieldInfo = 
{
	"Delegate", &t2448_0_0_1, &t2447_TI, offsetof(t2447, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2447_FIs[] =
{
	&t2447_f0_FieldInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
extern Il2CppType t554_0_0_0;
static ParameterInfo t2447_m13708_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t554_0_0_0},
};
extern TypeInfo t2447_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13708_MI = 
{
	".ctor", (methodPointerType)&m7910_gshared, &t2447_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t14, t2447_m13708_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2448_0_0_0;
static ParameterInfo t2447_m13709_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t2448_0_0_0},
};
extern TypeInfo t2447_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13709_MI = 
{
	".ctor", (methodPointerType)&m7911_gshared, &t2447_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2447_m13709_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t40_0_0_0;
static ParameterInfo t2447_m13710_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t40_0_0_0},
};
extern TypeInfo t2447_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13710_MI = 
{
	"Invoke", (methodPointerType)&m7912_gshared, &t2447_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2447_m13710_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t554_0_0_0;
static ParameterInfo t2447_m13711_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t554_0_0_0},
};
extern TypeInfo t2447_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13711_MI = 
{
	"Find", (methodPointerType)&m7913_gshared, &t2447_TI, &t26_0_0_0, RuntimeInvoker_t26_t14_t14, t2447_m13711_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2447_MIs[] =
{
	&m13708_MI,
	&m13709_MI,
	&m13710_MI,
	&m13711_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m13710_MI;
extern MethodInfo m13711_MI;
static MethodInfo* t2447_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m13710_MI,
	&m13711_MI,
};
extern Il2CppType t2448_0_0_0;
extern TypeInfo t2448_TI;
extern MethodInfo m19348_MI;
extern TypeInfo t8_TI;
extern MethodInfo m13713_MI;
static void* t2447_RGCTXData[5] = 
{
	(void*)&t2448_0_0_0,
	&t2448_TI,
	&m19348_MI,
	&t8_TI,
	&m13713_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2447_0_0_0;
extern Il2CppType t2447_1_0_0;
extern TypeInfo t553_TI;
struct t2447;
extern TypeInfo t2447_TI;
extern Il2CppGenericClass t2447_GC;
TypeInfo t2447_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2447_MIs, NULL, t2447_FIs, NULL, &t553_TI, NULL, NULL, &t2447_TI, NULL, t2447_VT, &EmptyCustomAttributesCache, &t2447_TI, &t2447_0_0_0, &t2447_1_0_0, NULL, &t2447_GC, NULL, NULL, NULL, t2447_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2447), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2448_TI;



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.Transform>
extern Il2CppType t14_0_0_0;
extern Il2CppType t77_0_0_0;
static ParameterInfo t2448_m13712_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t77_0_0_0},
};
extern TypeInfo t2448_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t77 (MethodInfo* method, void* obj, void** args);
MethodInfo m13712_MI = 
{
	".ctor", (methodPointerType)&m7914_gshared, &t2448_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t77, t2448_m13712_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t8_0_0_0;
static ParameterInfo t2448_m13713_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern TypeInfo t2448_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13713_MI = 
{
	"Invoke", (methodPointerType)&m7915_gshared, &t2448_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2448_m13713_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t8_0_0_0;
extern Il2CppType t76_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t2448_m13714_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t76_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2448_TI;
extern Il2CppType t75_0_0_0;
extern void* RuntimeInvoker_t14_t14_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13714_MI = 
{
	"BeginInvoke", (methodPointerType)&m7916_gshared, &t2448_TI, &t75_0_0_0, RuntimeInvoker_t14_t14_t14_t14, t2448_m13714_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t75_0_0_0;
static ParameterInfo t2448_m13715_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t75_0_0_0},
};
extern TypeInfo t2448_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13715_MI = 
{
	"EndInvoke", (methodPointerType)&m7917_gshared, &t2448_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2448_m13715_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2448_MIs[] =
{
	&m13712_MI,
	&m13713_MI,
	&m13714_MI,
	&m13715_MI,
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
extern MethodInfo m13713_MI;
extern MethodInfo m13714_MI;
extern MethodInfo m13715_MI;
static MethodInfo* t2448_VT[] =
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
	&m13713_MI,
	&m13714_MI,
	&m13715_MI,
};
extern TypeInfo t374_TI;
extern TypeInfo t375_TI;
static Il2CppInterfaceOffsetPair t2448_IOs[] = 
{
	{ &t374_TI, 4},
	{ &t375_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2448_0_0_0;
extern Il2CppType t2448_1_0_0;
extern TypeInfo t211_TI;
struct t2448;
extern TypeInfo t2448_TI;
extern Il2CppGenericClass t2448_GC;
TypeInfo t2448_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t2448_MIs, NULL, NULL, NULL, &t211_TI, NULL, NULL, &t2448_TI, NULL, t2448_VT, &EmptyCustomAttributesCache, &t2448_TI, &t2448_0_0_0, &t2448_1_0_0, t2448_IOs, &t2448_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2448), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3477_TI;

#include "t336.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.Collider>
extern MethodInfo m25700_MI;
static PropertyInfo t3477____Current_PropertyInfo = 
{
	&t3477_TI, "Current", &m25700_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3477_PIs[] =
{
	&t3477____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3477_TI;
extern Il2CppType t336_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25700_MI = 
{
	"get_Current", NULL, &t3477_TI, &t336_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3477_MIs[] =
{
	&m25700_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t3477_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3477_0_0_0;
extern Il2CppType t3477_1_0_0;
struct t3477;
extern TypeInfo t3477_TI;
extern Il2CppGenericClass t3477_GC;
TypeInfo t3477_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3477_MIs, t3477_PIs, NULL, NULL, NULL, NULL, NULL, &t3477_TI, t3477_ITIs, NULL, &EmptyCustomAttributesCache, &t3477_TI, &t3477_0_0_0, &t3477_1_0_0, NULL, &t3477_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2449.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2449_TI;
#include "t2449MD.h"

extern TypeInfo t2449_TI;
extern TypeInfo t336_TI;
extern TypeInfo t1278_TI;
extern MethodInfo m13720_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m19350_MI;
struct t24;
struct t24;
 t14 * m16357_gshared (t24 * __this, int32_t p0, MethodInfo* method);
#define m16357(__this, p0, method) (t14 *)m16357_gshared((t24 *)__this, (int32_t)p0, method)
#define m19350(__this, p0, method) (t336 *)m16357_gshared((t24 *)__this, (int32_t)p0, method)
extern MethodInfo m19350_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.Collider>
extern Il2CppType t24_0_0_1;
FieldInfo t2449_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t2449_TI, offsetof(t2449, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t2449_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t2449_TI, offsetof(t2449, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t2449_FIs[] =
{
	&t2449_f0_FieldInfo,
	&t2449_f1_FieldInfo,
	NULL
};
extern MethodInfo m13717_MI;
static PropertyInfo t2449____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2449_TI, "System.Collections.IEnumerator.Current", &m13717_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13720_MI;
static PropertyInfo t2449____Current_PropertyInfo = 
{
	&t2449_TI, "Current", &m13720_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2449_PIs[] =
{
	&t2449____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2449____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t2449_m13716_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t2449_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13716_MI = 
{
	".ctor", (methodPointerType)&m7877_gshared, &t2449_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2449_m13716_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2449_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13717_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7879_gshared, &t2449_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2449_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13718_MI = 
{
	"Dispose", (methodPointerType)&m7881_gshared, &t2449_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2449_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m13719_MI = 
{
	"MoveNext", (methodPointerType)&m7883_gshared, &t2449_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2449_TI;
extern Il2CppType t336_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13720_MI = 
{
	"get_Current", (methodPointerType)&m7885_gshared, &t2449_TI, &t336_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2449_MIs[] =
{
	&m13716_MI,
	&m13717_MI,
	&m13718_MI,
	&m13719_MI,
	&m13720_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m13717_MI;
extern MethodInfo m13719_MI;
extern MethodInfo m13718_MI;
extern MethodInfo m13720_MI;
static MethodInfo* t2449_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m13717_MI,
	&m13719_MI,
	&m13718_MI,
	&m13720_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3477_TI;
static TypeInfo* t2449_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t3477_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3477_TI;
static Il2CppInterfaceOffsetPair t2449_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t3477_TI, 7},
};
extern MethodInfo m13720_MI;
extern TypeInfo t336_TI;
extern MethodInfo m19350_MI;
static void* t2449_RGCTXData[3] = 
{
	&m13720_MI,
	&t336_TI,
	&m19350_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2449_0_0_0;
extern Il2CppType t2449_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t2449_TI;
extern Il2CppGenericClass t2449_GC;
extern TypeInfo t24_TI;
TypeInfo t2449_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2449_MIs, t2449_PIs, t2449_FIs, NULL, &t122_TI, NULL, &t24_TI, &t2449_TI, t2449_ITIs, t2449_VT, &EmptyCustomAttributesCache, &t2449_TI, &t2449_0_0_0, &t2449_1_0_0, t2449_IOs, &t2449_GC, NULL, NULL, NULL, t2449_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2449)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4356_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.Collider>
extern MethodInfo m25701_MI;
static PropertyInfo t4356____Count_PropertyInfo = 
{
	&t4356_TI, "Count", &m25701_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m25702_MI;
static PropertyInfo t4356____IsReadOnly_PropertyInfo = 
{
	&t4356_TI, "IsReadOnly", &m25702_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4356_PIs[] =
{
	&t4356____Count_PropertyInfo,
	&t4356____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4356_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25701_MI = 
{
	"get_Count", NULL, &t4356_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4356_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m25702_MI = 
{
	"get_IsReadOnly", NULL, &t4356_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t336_0_0_0;
static ParameterInfo t4356_m25703_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t336_0_0_0},
};
extern TypeInfo t4356_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25703_MI = 
{
	"Add", NULL, &t4356_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t4356_m25703_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4356_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m25704_MI = 
{
	"Clear", NULL, &t4356_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t336_0_0_0;
static ParameterInfo t4356_m25705_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t336_0_0_0},
};
extern TypeInfo t4356_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25705_MI = 
{
	"Contains", NULL, &t4356_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t4356_m25705_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3120_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t4356_m25706_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3120_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4356_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25706_MI = 
{
	"CopyTo", NULL, &t4356_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t4356_m25706_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t336_0_0_0;
static ParameterInfo t4356_m25707_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t336_0_0_0},
};
extern TypeInfo t4356_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25707_MI = 
{
	"Remove", NULL, &t4356_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t4356_m25707_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4356_MIs[] =
{
	&m25701_MI,
	&m25702_MI,
	&m25703_MI,
	&m25704_MI,
	&m25705_MI,
	&m25706_MI,
	&m25707_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4358_TI;
static TypeInfo* t4356_ITIs[] = 
{
	&t600_TI,
	&t4358_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4356_0_0_0;
extern Il2CppType t4356_1_0_0;
struct t4356;
extern TypeInfo t4356_TI;
extern Il2CppGenericClass t4356_GC;
TypeInfo t4356_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4356_MIs, t4356_PIs, NULL, NULL, NULL, NULL, NULL, &t4356_TI, t4356_ITIs, NULL, &EmptyCustomAttributesCache, &t4356_TI, &t4356_0_0_0, &t4356_1_0_0, NULL, &t4356_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4358_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.Collider>
extern TypeInfo t4358_TI;
extern Il2CppType t3477_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25708_MI = 
{
	"GetEnumerator", NULL, &t4358_TI, &t3477_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4358_MIs[] =
{
	&m25708_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t4358_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4358_0_0_0;
extern Il2CppType t4358_1_0_0;
struct t4358;
extern TypeInfo t4358_TI;
extern Il2CppGenericClass t4358_GC;
TypeInfo t4358_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4358_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4358_TI, t4358_ITIs, NULL, &EmptyCustomAttributesCache, &t4358_TI, &t4358_0_0_0, &t4358_1_0_0, NULL, &t4358_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4357_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.Collider>
extern MethodInfo m25709_MI;
extern MethodInfo m25710_MI;
static PropertyInfo t4357____Item_PropertyInfo = 
{
	&t4357_TI, "Item", &m25709_MI, &m25710_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4357_PIs[] =
{
	&t4357____Item_PropertyInfo,
	NULL
};
extern Il2CppType t336_0_0_0;
static ParameterInfo t4357_m25711_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t336_0_0_0},
};
extern TypeInfo t4357_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25711_MI = 
{
	"IndexOf", NULL, &t4357_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t4357_m25711_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t336_0_0_0;
static ParameterInfo t4357_m25712_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t336_0_0_0},
};
extern TypeInfo t4357_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25712_MI = 
{
	"Insert", NULL, &t4357_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t4357_m25712_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4357_m25713_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4357_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25713_MI = 
{
	"RemoveAt", NULL, &t4357_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t4357_m25713_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4357_m25709_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4357_TI;
extern Il2CppType t336_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25709_MI = 
{
	"get_Item", NULL, &t4357_TI, &t336_0_0_0, RuntimeInvoker_t14_t35, t4357_m25709_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t336_0_0_0;
static ParameterInfo t4357_m25710_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t336_0_0_0},
};
extern TypeInfo t4357_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25710_MI = 
{
	"set_Item", NULL, &t4357_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t4357_m25710_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4357_MIs[] =
{
	&m25711_MI,
	&m25712_MI,
	&m25713_MI,
	&m25709_MI,
	&m25710_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4356_TI;
extern TypeInfo t4358_TI;
static TypeInfo* t4357_ITIs[] = 
{
	&t600_TI,
	&t4356_TI,
	&t4358_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4357_0_0_0;
extern Il2CppType t4357_1_0_0;
struct t4357;
extern TypeInfo t4357_TI;
extern Il2CppGenericClass t4357_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t4357_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4357_MIs, t4357_PIs, NULL, NULL, NULL, NULL, NULL, &t4357_TI, t4357_ITIs, NULL, &t1409__CustomAttributeCache, &t4357_TI, &t4357_0_0_0, &t4357_1_0_0, NULL, &t4357_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t2450.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2450_TI;
#include "t2450MD.h"

#include "t2451.h"
extern TypeInfo t40_TI;
extern TypeInfo t14_TI;
extern TypeInfo t2450_TI;
extern TypeInfo t336_TI;
extern TypeInfo t2451_TI;
extern TypeInfo t25_TI;
#include "t2451MD.h"
extern MethodInfo m13723_MI;
extern MethodInfo m13725_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Collider>
extern Il2CppType t40_0_0_33;
FieldInfo t2450_f1_FieldInfo = 
{
	"m_Arg1", &t40_0_0_33, &t2450_TI, offsetof(t2450, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2450_FIs[] =
{
	&t2450_f1_FieldInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
extern Il2CppType t554_0_0_0;
extern Il2CppType t336_0_0_0;
static ParameterInfo t2450_m13721_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t554_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t336_0_0_0},
};
extern TypeInfo t2450_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13721_MI = 
{
	".ctor", (methodPointerType)&m7907_gshared, &t2450_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t14_t14, t2450_m13721_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t40_0_0_0;
static ParameterInfo t2450_m13722_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t40_0_0_0},
};
extern TypeInfo t2450_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13722_MI = 
{
	"Invoke", (methodPointerType)&m7909_gshared, &t2450_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2450_m13722_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2450_MIs[] =
{
	&m13721_MI,
	&m13722_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m13722_MI;
extern MethodInfo m13726_MI;
static MethodInfo* t2450_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m13722_MI,
	&m13726_MI,
};
extern Il2CppType t2452_0_0_0;
extern TypeInfo t2452_TI;
extern MethodInfo m19360_MI;
extern TypeInfo t336_TI;
extern MethodInfo m13728_MI;
extern MethodInfo m13723_MI;
extern TypeInfo t336_TI;
extern MethodInfo m13725_MI;
static void* t2450_RGCTXData[8] = 
{
	(void*)&t2452_0_0_0,
	&t2452_TI,
	&m19360_MI,
	&t336_TI,
	&m13728_MI,
	&m13723_MI,
	&t336_TI,
	&m13725_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2450_0_0_0;
extern Il2CppType t2450_1_0_0;
extern TypeInfo t2451_TI;
struct t2450;
extern TypeInfo t2450_TI;
extern Il2CppGenericClass t2450_GC;
TypeInfo t2450_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t2450_MIs, NULL, t2450_FIs, NULL, &t2451_TI, NULL, NULL, &t2450_TI, NULL, t2450_VT, &EmptyCustomAttributesCache, &t2450_TI, &t2450_0_0_0, &t2450_1_0_0, NULL, &t2450_GC, NULL, NULL, NULL, t2450_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2450), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2451_TI;

#include "t2452.h"
extern TypeInfo t2451_TI;
extern TypeInfo t2452_TI;
extern TypeInfo t31_TI;
extern TypeInfo t319_TI;
extern TypeInfo t336_TI;
extern TypeInfo t25_TI;
#include "t2452MD.h"
extern Il2CppType t2452_0_0_0;
extern MethodInfo m2816_MI;
extern MethodInfo m1571_MI;
extern MethodInfo m2981_MI;
extern MethodInfo m1614_MI;
extern MethodInfo m2815_MI;
extern MethodInfo m1959_MI;
extern MethodInfo m19360_MI;
extern MethodInfo m2817_MI;
extern MethodInfo m13728_MI;
extern MethodInfo m2977_MI;
extern MethodInfo m2975_MI;
struct t553;
#define m19360(__this, p0, method) (void)m16422_gshared((t14 *)__this, (t14 *)p0, method)
extern MethodInfo m19360_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.Collider>
extern Il2CppType t2452_0_0_1;
FieldInfo t2451_f0_FieldInfo = 
{
	"Delegate", &t2452_0_0_1, &t2451_TI, offsetof(t2451, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2451_FIs[] =
{
	&t2451_f0_FieldInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
extern Il2CppType t554_0_0_0;
static ParameterInfo t2451_m13723_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t554_0_0_0},
};
extern TypeInfo t2451_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13723_MI = 
{
	".ctor", (methodPointerType)&m7910_gshared, &t2451_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t14, t2451_m13723_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2452_0_0_0;
static ParameterInfo t2451_m13724_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t2452_0_0_0},
};
extern TypeInfo t2451_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13724_MI = 
{
	".ctor", (methodPointerType)&m7911_gshared, &t2451_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2451_m13724_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t40_0_0_0;
static ParameterInfo t2451_m13725_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t40_0_0_0},
};
extern TypeInfo t2451_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13725_MI = 
{
	"Invoke", (methodPointerType)&m7912_gshared, &t2451_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2451_m13725_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t554_0_0_0;
static ParameterInfo t2451_m13726_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t554_0_0_0},
};
extern TypeInfo t2451_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13726_MI = 
{
	"Find", (methodPointerType)&m7913_gshared, &t2451_TI, &t26_0_0_0, RuntimeInvoker_t26_t14_t14, t2451_m13726_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2451_MIs[] =
{
	&m13723_MI,
	&m13724_MI,
	&m13725_MI,
	&m13726_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m13725_MI;
extern MethodInfo m13726_MI;
static MethodInfo* t2451_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m13725_MI,
	&m13726_MI,
};
extern Il2CppType t2452_0_0_0;
extern TypeInfo t2452_TI;
extern MethodInfo m19360_MI;
extern TypeInfo t336_TI;
extern MethodInfo m13728_MI;
static void* t2451_RGCTXData[5] = 
{
	(void*)&t2452_0_0_0,
	&t2452_TI,
	&m19360_MI,
	&t336_TI,
	&m13728_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2451_0_0_0;
extern Il2CppType t2451_1_0_0;
extern TypeInfo t553_TI;
struct t2451;
extern TypeInfo t2451_TI;
extern Il2CppGenericClass t2451_GC;
TypeInfo t2451_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2451_MIs, NULL, t2451_FIs, NULL, &t553_TI, NULL, NULL, &t2451_TI, NULL, t2451_VT, &EmptyCustomAttributesCache, &t2451_TI, &t2451_0_0_0, &t2451_1_0_0, NULL, &t2451_GC, NULL, NULL, NULL, t2451_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2451), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2452_TI;



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.Collider>
extern Il2CppType t14_0_0_0;
extern Il2CppType t77_0_0_0;
static ParameterInfo t2452_m13727_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t77_0_0_0},
};
extern TypeInfo t2452_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t77 (MethodInfo* method, void* obj, void** args);
MethodInfo m13727_MI = 
{
	".ctor", (methodPointerType)&m7914_gshared, &t2452_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t77, t2452_m13727_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t336_0_0_0;
static ParameterInfo t2452_m13728_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t336_0_0_0},
};
extern TypeInfo t2452_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13728_MI = 
{
	"Invoke", (methodPointerType)&m7915_gshared, &t2452_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2452_m13728_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t336_0_0_0;
extern Il2CppType t76_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t2452_m13729_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t336_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t76_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2452_TI;
extern Il2CppType t75_0_0_0;
extern void* RuntimeInvoker_t14_t14_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13729_MI = 
{
	"BeginInvoke", (methodPointerType)&m7916_gshared, &t2452_TI, &t75_0_0_0, RuntimeInvoker_t14_t14_t14_t14, t2452_m13729_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t75_0_0_0;
static ParameterInfo t2452_m13730_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t75_0_0_0},
};
extern TypeInfo t2452_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13730_MI = 
{
	"EndInvoke", (methodPointerType)&m7917_gshared, &t2452_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2452_m13730_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2452_MIs[] =
{
	&m13727_MI,
	&m13728_MI,
	&m13729_MI,
	&m13730_MI,
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
extern MethodInfo m13728_MI;
extern MethodInfo m13729_MI;
extern MethodInfo m13730_MI;
static MethodInfo* t2452_VT[] =
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
	&m13728_MI,
	&m13729_MI,
	&m13730_MI,
};
extern TypeInfo t374_TI;
extern TypeInfo t375_TI;
static Il2CppInterfaceOffsetPair t2452_IOs[] = 
{
	{ &t374_TI, 4},
	{ &t375_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2452_0_0_0;
extern Il2CppType t2452_1_0_0;
extern TypeInfo t211_TI;
struct t2452;
extern TypeInfo t2452_TI;
extern Il2CppGenericClass t2452_GC;
TypeInfo t2452_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t2452_MIs, NULL, NULL, NULL, &t211_TI, NULL, NULL, &t2452_TI, NULL, t2452_VT, &EmptyCustomAttributesCache, &t2452_TI, &t2452_0_0_0, &t2452_1_0_0, t2452_IOs, &t2452_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2452), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t503.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t503_TI;
#include "t503MD.h"

#include "t504.h"
#include "t2460.h"
#include "t2457.h"
#include "t2458.h"
#include "t338.h"
#include "t2466.h"
#include "t2459.h"
extern TypeInfo t503_TI;
extern TypeInfo t504_TI;
extern TypeInfo t35_TI;
extern TypeInfo t25_TI;
extern TypeInfo t319_TI;
extern TypeInfo t582_TI;
extern TypeInfo t1277_TI;
extern TypeInfo t1242_TI;
extern TypeInfo t2453_TI;
extern TypeInfo t2460_TI;
extern TypeInfo t26_TI;
extern TypeInfo t2455_TI;
extern TypeInfo t2456_TI;
extern TypeInfo t2454_TI;
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t2457_TI;
extern TypeInfo t338_TI;
extern TypeInfo t2458_TI;
extern TypeInfo t2466_TI;
#include "t1242MD.h"
#include "t14MD.h"
#include "t599MD.h"
#include "t2457MD.h"
#include "t338MD.h"
#include "t2458MD.h"
#include "t2460MD.h"
#include "t2466MD.h"
extern MethodInfo m13777_MI;
extern MethodInfo m13778_MI;
extern MethodInfo m1959_MI;
extern MethodInfo m6492_MI;
extern MethodInfo m19373_MI;
extern MethodInfo m6493_MI;
extern MethodInfo m13763_MI;
extern MethodInfo m73_MI;
extern MethodInfo m13760_MI;
extern MethodInfo m3786_MI;
extern MethodInfo m13748_MI;
extern MethodInfo m13755_MI;
extern MethodInfo m13761_MI;
extern MethodInfo m13764_MI;
extern MethodInfo m13766_MI;
extern MethodInfo m13749_MI;
extern MethodInfo m13774_MI;
extern MethodInfo m6930_MI;
extern MethodInfo m13775_MI;
extern MethodInfo m25714_MI;
extern MethodInfo m25715_MI;
extern MethodInfo m25716_MI;
extern MethodInfo m25717_MI;
extern MethodInfo m67_MI;
extern MethodInfo m68_MI;
extern MethodInfo m13765_MI;
extern MethodInfo m13750_MI;
extern MethodInfo m13751_MI;
extern MethodInfo m13790_MI;
extern MethodInfo m3782_MI;
extern MethodInfo m19375_MI;
extern MethodInfo m13758_MI;
extern MethodInfo m13759_MI;
extern MethodInfo m2974_MI;
extern MethodInfo m13865_MI;
extern MethodInfo m13784_MI;
extern MethodInfo m13762_MI;
extern MethodInfo m13768_MI;
extern MethodInfo m3798_MI;
extern MethodInfo m13871_MI;
extern MethodInfo m19377_MI;
extern MethodInfo m19385_MI;
extern MethodInfo m3785_MI;
struct t24;
struct t24;
 void m16651_gshared (t14 * __this, t40** p0, int32_t p1, MethodInfo* method);
#define m16651(__this, p0, p1, method) (void)m16651_gshared((t14 *)__this, (t40**)p0, (int32_t)p1, method)
#define m19373(__this, p0, p1, method) (void)m16651_gshared((t14 *)__this, (t40**)p0, (int32_t)p1, method)
extern MethodInfo m19373_MI;
struct t24;
#include "t2464.h"
struct t24;
#include "t1494.h"
 int32_t m7724_gshared (t14 * __this, t40* p0, t14 * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define m7724(__this, p0, p1, p2, p3, method) (int32_t)m7724_gshared((t14 *)__this, (t40*)p0, (t14 *)p1, (int32_t)p2, (int32_t)p3, method)
#define m19375(__this, p0, p1, p2, p3, method) (int32_t)m7724_gshared((t14 *)__this, (t40*)p0, (t14 *)p1, (int32_t)p2, (int32_t)p3, method)
extern MethodInfo m19375_MI;
struct t24;
struct t24;
 void m16720_gshared (t14 * __this, t40* p0, int32_t p1, int32_t p2, t14* p3, MethodInfo* method);
#define m16720(__this, p0, p1, p2, p3, method) (void)m16720_gshared((t14 *)__this, (t40*)p0, (int32_t)p1, (int32_t)p2, (t14*)p3, method)
#define m19377(__this, p0, p1, p2, p3, method) (void)m16720_gshared((t14 *)__this, (t40*)p0, (int32_t)p1, (int32_t)p2, (t14*)p3, method)
extern MethodInfo m19377_MI;
struct t24;
#include "t39.h"
struct t24;
#include "t1654.h"
 void m16794_gshared (t14 * __this, t40* p0, int32_t p1, t1654 * p2, MethodInfo* method);
#define m16794(__this, p0, p1, p2, method) (void)m16794_gshared((t14 *)__this, (t40*)p0, (int32_t)p1, (t1654 *)p2, method)
#define m19385(__this, p0, p1, p2, method) (void)m16794_gshared((t14 *)__this, (t40*)p0, (int32_t)p1, (t1654 *)p2, method)
extern MethodInfo m19385_MI;


extern MethodInfo m13760_MI;
 t2460  m13760 (t503 * __this, MethodInfo* method){
	{
		t2460  L_0 = {0};
		m13784(&L_0, __this, &m13784_MI);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
extern Il2CppType t35_0_0_32849;
FieldInfo t503_f0_FieldInfo = 
{
	"DefaultCapacity", &t35_0_0_32849, &t503_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2453_0_0_1;
FieldInfo t503_f1_FieldInfo = 
{
	"_items", &t2453_0_0_1, &t503_TI, offsetof(t503, f1), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t503_f2_FieldInfo = 
{
	"_size", &t35_0_0_1, &t503_TI, offsetof(t503, f2), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t503_f3_FieldInfo = 
{
	"_version", &t35_0_0_1, &t503_TI, offsetof(t503, f3), &EmptyCustomAttributesCache};
extern Il2CppType t2453_0_0_49;
FieldInfo t503_f4_FieldInfo = 
{
	"EmptyArray", &t2453_0_0_49, &t503_TI, offsetof(t503_SFs, f4), &EmptyCustomAttributesCache};
static FieldInfo* t503_FIs[] =
{
	&t503_f0_FieldInfo,
	&t503_f1_FieldInfo,
	&t503_f2_FieldInfo,
	&t503_f3_FieldInfo,
	&t503_f4_FieldInfo,
	NULL
};
static const int32_t t503_f0_DefaultValueData = 4;
extern Il2CppType t35_0_0_0;
static Il2CppFieldDefaultValueEntry t503_f0_DefaultValue = 
{
	&t503_f0_FieldInfo, { (char*)&t503_f0_DefaultValueData, &t35_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t503_FDVs[] = 
{
	&t503_f0_DefaultValue,
	NULL
};
extern MethodInfo m13741_MI;
static PropertyInfo t503____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t503_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m13741_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13742_MI;
static PropertyInfo t503____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t503_TI, "System.Collections.ICollection.IsSynchronized", &m13742_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13743_MI;
static PropertyInfo t503____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t503_TI, "System.Collections.ICollection.SyncRoot", &m13743_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13744_MI;
static PropertyInfo t503____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t503_TI, "System.Collections.IList.IsFixedSize", &m13744_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13745_MI;
static PropertyInfo t503____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t503_TI, "System.Collections.IList.IsReadOnly", &m13745_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13746_MI;
extern MethodInfo m13747_MI;
static PropertyInfo t503____System_Collections_IList_Item_PropertyInfo = 
{
	&t503_TI, "System.Collections.IList.Item", &m13746_MI, &m13747_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13774_MI;
extern MethodInfo m13775_MI;
static PropertyInfo t503____Capacity_PropertyInfo = 
{
	&t503_TI, "Capacity", &m13774_MI, &m13775_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13776_MI;
static PropertyInfo t503____Count_PropertyInfo = 
{
	&t503_TI, "Count", &m13776_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13777_MI;
extern MethodInfo m13778_MI;
static PropertyInfo t503____Item_PropertyInfo = 
{
	&t503_TI, "Item", &m13777_MI, &m13778_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t503_PIs[] =
{
	&t503____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t503____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t503____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t503____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t503____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t503____System_Collections_IList_Item_PropertyInfo,
	&t503____Capacity_PropertyInfo,
	&t503____Count_PropertyInfo,
	&t503____Item_PropertyInfo,
	NULL
};
extern TypeInfo t503_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m2925_MI = 
{
	".ctor", (methodPointerType)&m8086_gshared, &t503_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t503_m13731_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t503_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m13731_MI = 
{
	".ctor", (methodPointerType)&m8088_gshared, &t503_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t503_m13731_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t503_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13732_MI = 
{
	".cctor", (methodPointerType)&m8090_gshared, &t503_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t503_TI;
extern Il2CppType t2454_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13733_MI = 
{
	"System.Collections.Generic.IEnumerable<T>.GetEnumerator", (methodPointerType)&m8092_gshared, &t503_TI, &t2454_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 481, 0, 27, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t24_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t503_m13734_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t503_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m13734_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m8094_gshared, &t503_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t503_m13734_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t503_TI;
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13735_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8096_gshared, &t503_TI, &t36_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t503_m13736_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t503_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13736_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m8098_gshared, &t503_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t503_m13736_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t503_m13737_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t503_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13737_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m8100_gshared, &t503_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t503_m13737_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t503_m13738_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t503_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13738_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m8102_gshared, &t503_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t503_m13738_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t503_m13739_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t503_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13739_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m8104_gshared, &t503_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t503_m13739_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t503_m13740_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t503_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13740_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m8106_gshared, &t503_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t503_m13740_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t503_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m13741_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m8108_gshared, &t503_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t503_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m13742_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m8110_gshared, &t503_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t503_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13743_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m8112_gshared, &t503_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t503_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m13744_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m8114_gshared, &t503_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t503_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m13745_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m8116_gshared, &t503_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t503_m13746_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t503_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m13746_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m8118_gshared, &t503_TI, &t14_0_0_0, RuntimeInvoker_t14_t35, t503_m13746_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t503_m13747_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t503_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13747_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m8120_gshared, &t503_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t503_m13747_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t504_0_0_0;
static ParameterInfo t503_m13748_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
};
extern TypeInfo t503_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13748_MI = 
{
	"Add", (methodPointerType)&m8122_gshared, &t503_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t503_m13748_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t503_m13749_ParameterInfos[] = 
{
	{"newCount", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t503_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m13749_MI = 
{
	"GrowIfNeeded", (methodPointerType)&m8124_gshared, &t503_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t503_m13749_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2455_0_0_0;
static ParameterInfo t503_m13750_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2455_0_0_0},
};
extern TypeInfo t503_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13750_MI = 
{
	"AddCollection", (methodPointerType)&m8126_gshared, &t503_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t503_m13750_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2456_0_0_0;
static ParameterInfo t503_m13751_ParameterInfos[] = 
{
	{"enumerable", 0, 134217728, &EmptyCustomAttributesCache, &t2456_0_0_0},
};
extern TypeInfo t503_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13751_MI = 
{
	"AddEnumerable", (methodPointerType)&m8128_gshared, &t503_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t503_m13751_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2456_0_0_0;
static ParameterInfo t503_m13752_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2456_0_0_0},
};
extern TypeInfo t503_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13752_MI = 
{
	"AddRange", (methodPointerType)&m8130_gshared, &t503_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t503_m13752_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t503_TI;
extern Il2CppType t2457_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13753_MI = 
{
	"AsReadOnly", (methodPointerType)&m8132_gshared, &t503_TI, &t2457_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t503_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13754_MI = 
{
	"Clear", (methodPointerType)&m8134_gshared, &t503_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t504_0_0_0;
static ParameterInfo t503_m13755_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
};
extern TypeInfo t503_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13755_MI = 
{
	"Contains", (methodPointerType)&m8136_gshared, &t503_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t503_m13755_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2453_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t503_m13756_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2453_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t503_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m13756_MI = 
{
	"CopyTo", (methodPointerType)&m8138_gshared, &t503_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t503_m13756_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2458_0_0_0;
static ParameterInfo t503_m13757_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2458_0_0_0},
};
extern TypeInfo t503_TI;
extern Il2CppType t504_0_0_0;
extern void* RuntimeInvoker_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13757_MI = 
{
	"Find", (methodPointerType)&m8140_gshared, &t503_TI, &t504_0_0_0, RuntimeInvoker_t14_t14, t503_m13757_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2458_0_0_0;
static ParameterInfo t503_m13758_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2458_0_0_0},
};
extern TypeInfo t503_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13758_MI = 
{
	"CheckMatch", (methodPointerType)&m8142_gshared, &t503_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t503_m13758_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t35_0_0_0;
extern Il2CppType t2458_0_0_0;
static ParameterInfo t503_m13759_ParameterInfos[] = 
{
	{"startIndex", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"count", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"match", 2, 134217728, &EmptyCustomAttributesCache, &t2458_0_0_0},
};
extern TypeInfo t503_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t35_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13759_MI = 
{
	"GetIndex", (methodPointerType)&m8144_gshared, &t503_TI, &t35_0_0_0, RuntimeInvoker_t35_t35_t35_t14, t503_m13759_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t503_TI;
extern Il2CppType t2460_0_0_0;
extern void* RuntimeInvoker_t2460 (MethodInfo* method, void* obj, void** args);
MethodInfo m13760_MI = 
{
	"GetEnumerator", (methodPointerType)&m13760, &t503_TI, &t2460_0_0_0, RuntimeInvoker_t2460, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t504_0_0_0;
static ParameterInfo t503_m13761_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
};
extern TypeInfo t503_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13761_MI = 
{
	"IndexOf", (methodPointerType)&m8147_gshared, &t503_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t503_m13761_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t503_m13762_ParameterInfos[] = 
{
	{"start", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"delta", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t503_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m13762_MI = 
{
	"Shift", (methodPointerType)&m8149_gshared, &t503_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t35, t503_m13762_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t503_m13763_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t503_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m13763_MI = 
{
	"CheckIndex", (methodPointerType)&m8151_gshared, &t503_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t503_m13763_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t504_0_0_0;
static ParameterInfo t503_m13764_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
};
extern TypeInfo t503_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13764_MI = 
{
	"Insert", (methodPointerType)&m8153_gshared, &t503_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t503_m13764_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2456_0_0_0;
static ParameterInfo t503_m13765_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2456_0_0_0},
};
extern TypeInfo t503_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13765_MI = 
{
	"CheckCollection", (methodPointerType)&m8155_gshared, &t503_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t503_m13765_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t504_0_0_0;
static ParameterInfo t503_m13766_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
};
extern TypeInfo t503_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13766_MI = 
{
	"Remove", (methodPointerType)&m8157_gshared, &t503_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t503_m13766_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2458_0_0_0;
static ParameterInfo t503_m13767_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2458_0_0_0},
};
extern TypeInfo t503_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13767_MI = 
{
	"RemoveAll", (methodPointerType)&m8159_gshared, &t503_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t503_m13767_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t503_m13768_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t503_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m13768_MI = 
{
	"RemoveAt", (methodPointerType)&m8160_gshared, &t503_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t503_m13768_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t503_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13769_MI = 
{
	"Reverse", (methodPointerType)&m8162_gshared, &t503_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t503_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13770_MI = 
{
	"Sort", (methodPointerType)&m8164_gshared, &t503_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2459_0_0_0;
static ParameterInfo t503_m13771_ParameterInfos[] = 
{
	{"comparison", 0, 134217728, &EmptyCustomAttributesCache, &t2459_0_0_0},
};
extern TypeInfo t503_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13771_MI = 
{
	"Sort", (methodPointerType)&m8166_gshared, &t503_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t503_m13771_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t503_TI;
extern Il2CppType t2453_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13772_MI = 
{
	"ToArray", (methodPointerType)&m8168_gshared, &t503_TI, &t2453_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t503_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13773_MI = 
{
	"TrimExcess", (methodPointerType)&m8170_gshared, &t503_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t503_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m13774_MI = 
{
	"get_Capacity", (methodPointerType)&m8172_gshared, &t503_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t503_m13775_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t503_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m13775_MI = 
{
	"set_Capacity", (methodPointerType)&m8174_gshared, &t503_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t503_m13775_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t503_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m13776_MI = 
{
	"get_Count", (methodPointerType)&m8175_gshared, &t503_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t503_m13777_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t503_TI;
extern Il2CppType t504_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m13777_MI = 
{
	"get_Item", (methodPointerType)&m8176_gshared, &t503_TI, &t504_0_0_0, RuntimeInvoker_t14_t35, t503_m13777_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t504_0_0_0;
static ParameterInfo t503_m13778_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
};
extern TypeInfo t503_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13778_MI = 
{
	"set_Item", (methodPointerType)&m8178_gshared, &t503_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t503_m13778_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 32, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t503_MIs[] =
{
	&m2925_MI,
	&m13731_MI,
	&m13732_MI,
	&m13733_MI,
	&m13734_MI,
	&m13735_MI,
	&m13736_MI,
	&m13737_MI,
	&m13738_MI,
	&m13739_MI,
	&m13740_MI,
	&m13741_MI,
	&m13742_MI,
	&m13743_MI,
	&m13744_MI,
	&m13745_MI,
	&m13746_MI,
	&m13747_MI,
	&m13748_MI,
	&m13749_MI,
	&m13750_MI,
	&m13751_MI,
	&m13752_MI,
	&m13753_MI,
	&m13754_MI,
	&m13755_MI,
	&m13756_MI,
	&m13757_MI,
	&m13758_MI,
	&m13759_MI,
	&m13760_MI,
	&m13761_MI,
	&m13762_MI,
	&m13763_MI,
	&m13764_MI,
	&m13765_MI,
	&m13766_MI,
	&m13767_MI,
	&m13768_MI,
	&m13769_MI,
	&m13770_MI,
	&m13771_MI,
	&m13772_MI,
	&m13773_MI,
	&m13774_MI,
	&m13775_MI,
	&m13776_MI,
	&m13777_MI,
	&m13778_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m13735_MI;
extern MethodInfo m13776_MI;
extern MethodInfo m13742_MI;
extern MethodInfo m13743_MI;
extern MethodInfo m13734_MI;
extern MethodInfo m13744_MI;
extern MethodInfo m13745_MI;
extern MethodInfo m13746_MI;
extern MethodInfo m13747_MI;
extern MethodInfo m13736_MI;
extern MethodInfo m13754_MI;
extern MethodInfo m13737_MI;
extern MethodInfo m13738_MI;
extern MethodInfo m13739_MI;
extern MethodInfo m13740_MI;
extern MethodInfo m13768_MI;
extern MethodInfo m13776_MI;
extern MethodInfo m13741_MI;
extern MethodInfo m13748_MI;
extern MethodInfo m13754_MI;
extern MethodInfo m13755_MI;
extern MethodInfo m13756_MI;
extern MethodInfo m13766_MI;
extern MethodInfo m13733_MI;
extern MethodInfo m13761_MI;
extern MethodInfo m13764_MI;
extern MethodInfo m13768_MI;
extern MethodInfo m13777_MI;
extern MethodInfo m13778_MI;
static MethodInfo* t503_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m13735_MI,
	&m13776_MI,
	&m13742_MI,
	&m13743_MI,
	&m13734_MI,
	&m13744_MI,
	&m13745_MI,
	&m13746_MI,
	&m13747_MI,
	&m13736_MI,
	&m13754_MI,
	&m13737_MI,
	&m13738_MI,
	&m13739_MI,
	&m13740_MI,
	&m13768_MI,
	&m13776_MI,
	&m13741_MI,
	&m13748_MI,
	&m13754_MI,
	&m13755_MI,
	&m13756_MI,
	&m13766_MI,
	&m13733_MI,
	&m13761_MI,
	&m13764_MI,
	&m13768_MI,
	&m13777_MI,
	&m13778_MI,
};
extern TypeInfo t600_TI;
extern TypeInfo t651_TI;
extern TypeInfo t1023_TI;
extern TypeInfo t2455_TI;
extern TypeInfo t2456_TI;
extern TypeInfo t2462_TI;
static TypeInfo* t503_ITIs[] = 
{
	&t600_TI,
	&t651_TI,
	&t1023_TI,
	&t2455_TI,
	&t2456_TI,
	&t2462_TI,
};
extern TypeInfo t600_TI;
extern TypeInfo t651_TI;
extern TypeInfo t1023_TI;
extern TypeInfo t2455_TI;
extern TypeInfo t2456_TI;
extern TypeInfo t2462_TI;
static Il2CppInterfaceOffsetPair t503_IOs[] = 
{
	{ &t600_TI, 4},
	{ &t651_TI, 5},
	{ &t1023_TI, 9},
	{ &t2455_TI, 20},
	{ &t2456_TI, 27},
	{ &t2462_TI, 28},
};
extern TypeInfo t503_TI;
extern TypeInfo t2453_TI;
extern MethodInfo m13760_MI;
extern TypeInfo t2460_TI;
extern TypeInfo t504_TI;
extern MethodInfo m13748_MI;
extern MethodInfo m13755_MI;
extern MethodInfo m13761_MI;
extern MethodInfo m13763_MI;
extern MethodInfo m13764_MI;
extern MethodInfo m13766_MI;
extern MethodInfo m13777_MI;
extern MethodInfo m13778_MI;
extern MethodInfo m13749_MI;
extern MethodInfo m13774_MI;
extern MethodInfo m13775_MI;
extern MethodInfo m25714_MI;
extern MethodInfo m25715_MI;
extern MethodInfo m25716_MI;
extern MethodInfo m25717_MI;
extern MethodInfo m13765_MI;
extern TypeInfo t2455_TI;
extern MethodInfo m13750_MI;
extern MethodInfo m13751_MI;
extern TypeInfo t2457_TI;
extern MethodInfo m13790_MI;
extern MethodInfo m19375_MI;
extern MethodInfo m13758_MI;
extern MethodInfo m13759_MI;
extern MethodInfo m13865_MI;
extern MethodInfo m13784_MI;
extern MethodInfo m13762_MI;
extern MethodInfo m13768_MI;
extern MethodInfo m13871_MI;
extern MethodInfo m19377_MI;
extern MethodInfo m19385_MI;
extern MethodInfo m19373_MI;
static void* t503_RGCTXData[37] = 
{
	&t503_TI,
	&t2453_TI,
	&m13760_MI,
	&t2460_TI,
	&t504_TI,
	&m13748_MI,
	&m13755_MI,
	&m13761_MI,
	&m13763_MI,
	&m13764_MI,
	&m13766_MI,
	&m13777_MI,
	&m13778_MI,
	&m13749_MI,
	&m13774_MI,
	&m13775_MI,
	&m25714_MI,
	&m25715_MI,
	&m25716_MI,
	&m25717_MI,
	&m13765_MI,
	&t2455_TI,
	&m13750_MI,
	&m13751_MI,
	&t2457_TI,
	&m13790_MI,
	&m19375_MI,
	&m13758_MI,
	&m13759_MI,
	&m13865_MI,
	&m13784_MI,
	&m13762_MI,
	&m13768_MI,
	&m13871_MI,
	&m19377_MI,
	&m19385_MI,
	&m19373_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t503_0_0_0;
extern Il2CppType t503_1_0_0;
extern TypeInfo t14_TI;
struct t503;
extern TypeInfo t503_TI;
extern Il2CppGenericClass t503_GC;
extern CustomAttributesCache t848__CustomAttributeCache;
TypeInfo t503_TI = 
{
	&g_mscorlib_dll_Image, NULL, "List`1", "System.Collections.Generic", t503_MIs, t503_PIs, t503_FIs, NULL, &t14_TI, NULL, NULL, &t503_TI, t503_ITIs, t503_VT, &t848__CustomAttributeCache, &t503_TI, &t503_0_0_0, &t503_1_0_0, t503_IOs, &t503_GC, NULL, t503_FDVs, NULL, t503_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t503), 0, -1, sizeof(t503_SFs), 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 49, 9, 5, 0, 0, 33, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2455_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.Rigidbody2D>
extern MethodInfo m25714_MI;
static PropertyInfo t2455____Count_PropertyInfo = 
{
	&t2455_TI, "Count", &m25714_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m25718_MI;
static PropertyInfo t2455____IsReadOnly_PropertyInfo = 
{
	&t2455_TI, "IsReadOnly", &m25718_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2455_PIs[] =
{
	&t2455____Count_PropertyInfo,
	&t2455____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t2455_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25714_MI = 
{
	"get_Count", NULL, &t2455_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2455_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m25718_MI = 
{
	"get_IsReadOnly", NULL, &t2455_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t504_0_0_0;
static ParameterInfo t2455_m25719_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
};
extern TypeInfo t2455_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25719_MI = 
{
	"Add", NULL, &t2455_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2455_m25719_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2455_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m25720_MI = 
{
	"Clear", NULL, &t2455_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t504_0_0_0;
static ParameterInfo t2455_m25721_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
};
extern TypeInfo t2455_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25721_MI = 
{
	"Contains", NULL, &t2455_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t2455_m25721_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2453_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t2455_m25715_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2453_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t2455_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25715_MI = 
{
	"CopyTo", NULL, &t2455_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t2455_m25715_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t504_0_0_0;
static ParameterInfo t2455_m25722_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
};
extern TypeInfo t2455_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25722_MI = 
{
	"Remove", NULL, &t2455_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t2455_m25722_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2455_MIs[] =
{
	&m25714_MI,
	&m25718_MI,
	&m25719_MI,
	&m25720_MI,
	&m25721_MI,
	&m25715_MI,
	&m25722_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t2456_TI;
static TypeInfo* t2455_ITIs[] = 
{
	&t600_TI,
	&t2456_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2455_0_0_0;
extern Il2CppType t2455_1_0_0;
struct t2455;
extern TypeInfo t2455_TI;
extern Il2CppGenericClass t2455_GC;
TypeInfo t2455_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t2455_MIs, t2455_PIs, NULL, NULL, NULL, NULL, NULL, &t2455_TI, t2455_ITIs, NULL, &EmptyCustomAttributesCache, &t2455_TI, &t2455_0_0_0, &t2455_1_0_0, NULL, &t2455_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2456_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.Rigidbody2D>
extern TypeInfo t2456_TI;
extern Il2CppType t2454_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25716_MI = 
{
	"GetEnumerator", NULL, &t2456_TI, &t2454_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2456_MIs[] =
{
	&m25716_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t2456_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2456_0_0_0;
extern Il2CppType t2456_1_0_0;
struct t2456;
extern TypeInfo t2456_TI;
extern Il2CppGenericClass t2456_GC;
TypeInfo t2456_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t2456_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2456_TI, t2456_ITIs, NULL, &EmptyCustomAttributesCache, &t2456_TI, &t2456_0_0_0, &t2456_1_0_0, NULL, &t2456_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2454_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.Rigidbody2D>
extern MethodInfo m25717_MI;
static PropertyInfo t2454____Current_PropertyInfo = 
{
	&t2454_TI, "Current", &m25717_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2454_PIs[] =
{
	&t2454____Current_PropertyInfo,
	NULL
};
extern TypeInfo t2454_TI;
extern Il2CppType t504_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25717_MI = 
{
	"get_Current", NULL, &t2454_TI, &t504_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2454_MIs[] =
{
	&m25717_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t2454_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2454_0_0_0;
extern Il2CppType t2454_1_0_0;
struct t2454;
extern TypeInfo t2454_TI;
extern Il2CppGenericClass t2454_GC;
TypeInfo t2454_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t2454_MIs, t2454_PIs, NULL, NULL, NULL, NULL, NULL, &t2454_TI, t2454_ITIs, NULL, &EmptyCustomAttributesCache, &t2454_TI, &t2454_0_0_0, &t2454_1_0_0, NULL, &t2454_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2461.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2461_TI;
#include "t2461MD.h"

extern TypeInfo t2461_TI;
extern TypeInfo t504_TI;
extern TypeInfo t1278_TI;
extern MethodInfo m13783_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m19362_MI;
struct t24;
#define m19362(__this, p0, method) (t504 *)m16357_gshared((t24 *)__this, (int32_t)p0, method)
extern MethodInfo m19362_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.Rigidbody2D>
extern Il2CppType t24_0_0_1;
FieldInfo t2461_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t2461_TI, offsetof(t2461, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t2461_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t2461_TI, offsetof(t2461, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t2461_FIs[] =
{
	&t2461_f0_FieldInfo,
	&t2461_f1_FieldInfo,
	NULL
};
extern MethodInfo m13780_MI;
static PropertyInfo t2461____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2461_TI, "System.Collections.IEnumerator.Current", &m13780_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13783_MI;
static PropertyInfo t2461____Current_PropertyInfo = 
{
	&t2461_TI, "Current", &m13783_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2461_PIs[] =
{
	&t2461____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2461____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t2461_m13779_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t2461_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13779_MI = 
{
	".ctor", (methodPointerType)&m7877_gshared, &t2461_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2461_m13779_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2461_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13780_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7879_gshared, &t2461_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2461_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13781_MI = 
{
	"Dispose", (methodPointerType)&m7881_gshared, &t2461_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2461_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m13782_MI = 
{
	"MoveNext", (methodPointerType)&m7883_gshared, &t2461_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2461_TI;
extern Il2CppType t504_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13783_MI = 
{
	"get_Current", (methodPointerType)&m7885_gshared, &t2461_TI, &t504_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2461_MIs[] =
{
	&m13779_MI,
	&m13780_MI,
	&m13781_MI,
	&m13782_MI,
	&m13783_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m13780_MI;
extern MethodInfo m13782_MI;
extern MethodInfo m13781_MI;
extern MethodInfo m13783_MI;
static MethodInfo* t2461_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m13780_MI,
	&m13782_MI,
	&m13781_MI,
	&m13783_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t2454_TI;
static TypeInfo* t2461_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t2454_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t2454_TI;
static Il2CppInterfaceOffsetPair t2461_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t2454_TI, 7},
};
extern MethodInfo m13783_MI;
extern TypeInfo t504_TI;
extern MethodInfo m19362_MI;
static void* t2461_RGCTXData[3] = 
{
	&m13783_MI,
	&t504_TI,
	&m19362_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2461_0_0_0;
extern Il2CppType t2461_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t2461_TI;
extern Il2CppGenericClass t2461_GC;
extern TypeInfo t24_TI;
TypeInfo t2461_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2461_MIs, t2461_PIs, t2461_FIs, NULL, &t122_TI, NULL, &t24_TI, &t2461_TI, t2461_ITIs, t2461_VT, &EmptyCustomAttributesCache, &t2461_TI, &t2461_0_0_0, &t2461_1_0_0, t2461_IOs, &t2461_GC, NULL, NULL, NULL, t2461_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2461)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2462_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.Rigidbody2D>
extern MethodInfo m25723_MI;
extern MethodInfo m25724_MI;
static PropertyInfo t2462____Item_PropertyInfo = 
{
	&t2462_TI, "Item", &m25723_MI, &m25724_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2462_PIs[] =
{
	&t2462____Item_PropertyInfo,
	NULL
};
extern Il2CppType t504_0_0_0;
static ParameterInfo t2462_m25725_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
};
extern TypeInfo t2462_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25725_MI = 
{
	"IndexOf", NULL, &t2462_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t2462_m25725_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t504_0_0_0;
static ParameterInfo t2462_m25726_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
};
extern TypeInfo t2462_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25726_MI = 
{
	"Insert", NULL, &t2462_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t2462_m25726_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t2462_m25727_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t2462_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25727_MI = 
{
	"RemoveAt", NULL, &t2462_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t2462_m25727_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t2462_m25723_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t2462_TI;
extern Il2CppType t504_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25723_MI = 
{
	"get_Item", NULL, &t2462_TI, &t504_0_0_0, RuntimeInvoker_t14_t35, t2462_m25723_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t504_0_0_0;
static ParameterInfo t2462_m25724_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
};
extern TypeInfo t2462_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25724_MI = 
{
	"set_Item", NULL, &t2462_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t2462_m25724_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2462_MIs[] =
{
	&m25725_MI,
	&m25726_MI,
	&m25727_MI,
	&m25723_MI,
	&m25724_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t2455_TI;
extern TypeInfo t2456_TI;
static TypeInfo* t2462_ITIs[] = 
{
	&t600_TI,
	&t2455_TI,
	&t2456_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2462_0_0_0;
extern Il2CppType t2462_1_0_0;
struct t2462;
extern TypeInfo t2462_TI;
extern Il2CppGenericClass t2462_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t2462_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t2462_MIs, t2462_PIs, NULL, NULL, NULL, NULL, NULL, &t2462_TI, t2462_ITIs, NULL, &t1409__CustomAttributeCache, &t2462_TI, &t2462_0_0_0, &t2462_1_0_0, NULL, &t2462_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2460_TI;

#include "t1295.h"
extern TypeInfo t2460_TI;
extern TypeInfo t1278_TI;
extern TypeInfo t504_TI;
extern TypeInfo t503_TI;
extern TypeInfo t31_TI;
extern TypeInfo t33_TI;
extern TypeInfo t1295_TI;
#include "t1295MD.h"
extern MethodInfo m13787_MI;
extern MethodInfo m6924_MI;
extern MethodInfo m1450_MI;
extern MethodInfo m3022_MI;
extern MethodInfo m7129_MI;
extern MethodInfo m6925_MI;


// Metadata Definition System.Collections.Generic.List`1/Enumerator<UnityEngine.Rigidbody2D>
extern Il2CppType t503_0_0_1;
FieldInfo t2460_f0_FieldInfo = 
{
	"l", &t503_0_0_1, &t2460_TI, offsetof(t2460, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t2460_f1_FieldInfo = 
{
	"next", &t35_0_0_1, &t2460_TI, offsetof(t2460, f1) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t2460_f2_FieldInfo = 
{
	"ver", &t35_0_0_1, &t2460_TI, offsetof(t2460, f2) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t504_0_0_1;
FieldInfo t2460_f3_FieldInfo = 
{
	"current", &t504_0_0_1, &t2460_TI, offsetof(t2460, f3) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t2460_FIs[] =
{
	&t2460_f0_FieldInfo,
	&t2460_f1_FieldInfo,
	&t2460_f2_FieldInfo,
	&t2460_f3_FieldInfo,
	NULL
};
extern MethodInfo m13785_MI;
static PropertyInfo t2460____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2460_TI, "System.Collections.IEnumerator.Current", &m13785_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13789_MI;
static PropertyInfo t2460____Current_PropertyInfo = 
{
	&t2460_TI, "Current", &m13789_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2460_PIs[] =
{
	&t2460____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2460____Current_PropertyInfo,
	NULL
};
extern Il2CppType t503_0_0_0;
static ParameterInfo t2460_m13784_ParameterInfos[] = 
{
	{"l", 0, 134217728, &EmptyCustomAttributesCache, &t503_0_0_0},
};
extern TypeInfo t2460_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13784_MI = 
{
	".ctor", (methodPointerType)&m8180_gshared, &t2460_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2460_m13784_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2460_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13785_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8181_gshared, &t2460_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2460_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13786_MI = 
{
	"Dispose", (methodPointerType)&m8182_gshared, &t2460_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2460_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13787_MI = 
{
	"VerifyState", (methodPointerType)&m8183_gshared, &t2460_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2460_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m13788_MI = 
{
	"MoveNext", (methodPointerType)&m8184_gshared, &t2460_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2460_TI;
extern Il2CppType t504_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13789_MI = 
{
	"get_Current", (methodPointerType)&m8185_gshared, &t2460_TI, &t504_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2460_MIs[] =
{
	&m13784_MI,
	&m13785_MI,
	&m13786_MI,
	&m13787_MI,
	&m13788_MI,
	&m13789_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m13785_MI;
extern MethodInfo m13788_MI;
extern MethodInfo m13786_MI;
extern MethodInfo m13789_MI;
static MethodInfo* t2460_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m13785_MI,
	&m13788_MI,
	&m13786_MI,
	&m13789_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t2454_TI;
static TypeInfo* t2460_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t2454_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t2454_TI;
static Il2CppInterfaceOffsetPair t2460_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t2454_TI, 7},
};
extern MethodInfo m13787_MI;
extern TypeInfo t504_TI;
extern TypeInfo t2460_TI;
static void* t2460_RGCTXData[3] = 
{
	&m13787_MI,
	&t504_TI,
	&t2460_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2460_0_0_0;
extern Il2CppType t2460_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t2460_TI;
extern Il2CppGenericClass t2460_GC;
extern TypeInfo t848_TI;
TypeInfo t2460_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t2460_MIs, t2460_PIs, t2460_FIs, NULL, &t122_TI, NULL, &t848_TI, &t2460_TI, t2460_ITIs, t2460_VT, &EmptyCustomAttributesCache, &t2460_TI, &t2460_0_0_0, &t2460_1_0_0, t2460_IOs, &t2460_GC, NULL, NULL, NULL, t2460_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2460)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 4, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2457_TI;

#include "t345.h"
extern TypeInfo t2457_TI;
extern TypeInfo t504_TI;
extern TypeInfo t35_TI;
extern TypeInfo t345_TI;
extern TypeInfo t2462_TI;
extern TypeInfo t2455_TI;
extern TypeInfo t338_TI;
extern TypeInfo t651_TI;
extern TypeInfo t25_TI;
extern TypeInfo t24_TI;
extern TypeInfo t600_TI;
extern TypeInfo t36_TI;
extern TypeInfo t26_TI;
extern TypeInfo t2453_TI;
extern TypeInfo t2456_TI;
extern TypeInfo t2454_TI;
#include "t345MD.h"
#include "t2463MD.h"
extern MethodInfo m13819_MI;
extern MethodInfo m1532_MI;
extern MethodInfo m25723_MI;
extern MethodInfo m25714_MI;
extern MethodInfo m73_MI;
extern MethodInfo m2974_MI;
extern MethodInfo m7416_MI;
extern MethodInfo m7325_MI;
extern MethodInfo m13851_MI;
extern MethodInfo m25721_MI;
extern MethodInfo m25725_MI;
extern MethodInfo m25715_MI;
extern MethodInfo m25716_MI;


// Metadata Definition System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>
extern Il2CppType t2462_0_0_1;
FieldInfo t2457_f0_FieldInfo = 
{
	"list", &t2462_0_0_1, &t2457_TI, offsetof(t2457, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2457_FIs[] =
{
	&t2457_f0_FieldInfo,
	NULL
};
extern MethodInfo m13796_MI;
extern MethodInfo m13797_MI;
static PropertyInfo t2457____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo = 
{
	&t2457_TI, "System.Collections.Generic.IList<T>.Item", &m13796_MI, &m13797_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13798_MI;
static PropertyInfo t2457____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t2457_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m13798_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13808_MI;
static PropertyInfo t2457____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2457_TI, "System.Collections.ICollection.IsSynchronized", &m13808_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13809_MI;
static PropertyInfo t2457____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2457_TI, "System.Collections.ICollection.SyncRoot", &m13809_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13810_MI;
static PropertyInfo t2457____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t2457_TI, "System.Collections.IList.IsFixedSize", &m13810_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13811_MI;
static PropertyInfo t2457____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t2457_TI, "System.Collections.IList.IsReadOnly", &m13811_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13812_MI;
extern MethodInfo m13813_MI;
static PropertyInfo t2457____System_Collections_IList_Item_PropertyInfo = 
{
	&t2457_TI, "System.Collections.IList.Item", &m13812_MI, &m13813_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13818_MI;
static PropertyInfo t2457____Count_PropertyInfo = 
{
	&t2457_TI, "Count", &m13818_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13819_MI;
static PropertyInfo t2457____Item_PropertyInfo = 
{
	&t2457_TI, "Item", &m13819_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2457_PIs[] =
{
	&t2457____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo,
	&t2457____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t2457____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2457____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2457____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t2457____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t2457____System_Collections_IList_Item_PropertyInfo,
	&t2457____Count_PropertyInfo,
	&t2457____Item_PropertyInfo,
	NULL
};
extern Il2CppType t2462_0_0_0;
static ParameterInfo t2457_m13790_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2462_0_0_0},
};
extern TypeInfo t2457_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13790_MI = 
{
	".ctor", (methodPointerType)&m8186_gshared, &t2457_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2457_m13790_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t504_0_0_0;
static ParameterInfo t2457_m13791_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
};
extern TypeInfo t2457_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13791_MI = 
{
	"System.Collections.Generic.ICollection<T>.Add", (methodPointerType)&m8187_gshared, &t2457_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2457_m13791_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2457_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13792_MI = 
{
	"System.Collections.Generic.ICollection<T>.Clear", (methodPointerType)&m8188_gshared, &t2457_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 481, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t504_0_0_0;
static ParameterInfo t2457_m13793_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
};
extern TypeInfo t2457_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13793_MI = 
{
	"System.Collections.Generic.IList<T>.Insert", (methodPointerType)&m8189_gshared, &t2457_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t2457_m13793_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t504_0_0_0;
static ParameterInfo t2457_m13794_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
};
extern TypeInfo t2457_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13794_MI = 
{
	"System.Collections.Generic.ICollection<T>.Remove", (methodPointerType)&m8190_gshared, &t2457_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t2457_m13794_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t2457_m13795_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t2457_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m13795_MI = 
{
	"System.Collections.Generic.IList<T>.RemoveAt", (methodPointerType)&m8191_gshared, &t2457_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t2457_m13795_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t2457_m13796_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t2457_TI;
extern Il2CppType t504_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m13796_MI = 
{
	"System.Collections.Generic.IList<T>.get_Item", (methodPointerType)&m8192_gshared, &t2457_TI, &t504_0_0_0, RuntimeInvoker_t14_t35, t2457_m13796_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t504_0_0_0;
static ParameterInfo t2457_m13797_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
};
extern TypeInfo t2457_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13797_MI = 
{
	"System.Collections.Generic.IList<T>.set_Item", (methodPointerType)&m8193_gshared, &t2457_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t2457_m13797_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2457_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m13798_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m8194_gshared, &t2457_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t24_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t2457_m13799_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t2457_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m13799_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m8195_gshared, &t2457_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t2457_m13799_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2457_TI;
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13800_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8196_gshared, &t2457_TI, &t36_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2457_m13801_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2457_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13801_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m8197_gshared, &t2457_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t2457_m13801_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2457_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13802_MI = 
{
	"System.Collections.IList.Clear", (methodPointerType)&m8198_gshared, &t2457_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 481, 0, 14, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2457_m13803_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2457_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13803_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m8199_gshared, &t2457_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t2457_m13803_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2457_m13804_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2457_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13804_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m8200_gshared, &t2457_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t2457_m13804_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t2457_m13805_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2457_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13805_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m8201_gshared, &t2457_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t2457_m13805_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2457_m13806_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2457_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13806_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m8202_gshared, &t2457_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2457_m13806_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t2457_m13807_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t2457_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m13807_MI = 
{
	"System.Collections.IList.RemoveAt", (methodPointerType)&m8203_gshared, &t2457_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t2457_m13807_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 19, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2457_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m13808_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m8204_gshared, &t2457_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2457_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13809_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m8205_gshared, &t2457_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2457_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m13810_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m8206_gshared, &t2457_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2457_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m13811_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m8207_gshared, &t2457_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t2457_m13812_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t2457_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m13812_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m8208_gshared, &t2457_TI, &t14_0_0_0, RuntimeInvoker_t14_t35, t2457_m13812_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t2457_m13813_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2457_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13813_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m8209_gshared, &t2457_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t2457_m13813_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t504_0_0_0;
static ParameterInfo t2457_m13814_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
};
extern TypeInfo t2457_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13814_MI = 
{
	"Contains", (methodPointerType)&m8210_gshared, &t2457_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t2457_m13814_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2453_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t2457_m13815_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2453_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t2457_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m13815_MI = 
{
	"CopyTo", (methodPointerType)&m8211_gshared, &t2457_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t2457_m13815_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2457_TI;
extern Il2CppType t2454_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13816_MI = 
{
	"GetEnumerator", (methodPointerType)&m8212_gshared, &t2457_TI, &t2454_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t504_0_0_0;
static ParameterInfo t2457_m13817_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
};
extern TypeInfo t2457_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13817_MI = 
{
	"IndexOf", (methodPointerType)&m8213_gshared, &t2457_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t2457_m13817_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2457_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m13818_MI = 
{
	"get_Count", (methodPointerType)&m8214_gshared, &t2457_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t2457_m13819_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t2457_TI;
extern Il2CppType t504_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m13819_MI = 
{
	"get_Item", (methodPointerType)&m8215_gshared, &t2457_TI, &t504_0_0_0, RuntimeInvoker_t14_t35, t2457_m13819_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 33, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2457_MIs[] =
{
	&m13790_MI,
	&m13791_MI,
	&m13792_MI,
	&m13793_MI,
	&m13794_MI,
	&m13795_MI,
	&m13796_MI,
	&m13797_MI,
	&m13798_MI,
	&m13799_MI,
	&m13800_MI,
	&m13801_MI,
	&m13802_MI,
	&m13803_MI,
	&m13804_MI,
	&m13805_MI,
	&m13806_MI,
	&m13807_MI,
	&m13808_MI,
	&m13809_MI,
	&m13810_MI,
	&m13811_MI,
	&m13812_MI,
	&m13813_MI,
	&m13814_MI,
	&m13815_MI,
	&m13816_MI,
	&m13817_MI,
	&m13818_MI,
	&m13819_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m13800_MI;
extern MethodInfo m13818_MI;
extern MethodInfo m13808_MI;
extern MethodInfo m13809_MI;
extern MethodInfo m13799_MI;
extern MethodInfo m13810_MI;
extern MethodInfo m13811_MI;
extern MethodInfo m13812_MI;
extern MethodInfo m13813_MI;
extern MethodInfo m13801_MI;
extern MethodInfo m13802_MI;
extern MethodInfo m13803_MI;
extern MethodInfo m13804_MI;
extern MethodInfo m13805_MI;
extern MethodInfo m13806_MI;
extern MethodInfo m13807_MI;
extern MethodInfo m13818_MI;
extern MethodInfo m13798_MI;
extern MethodInfo m13791_MI;
extern MethodInfo m13792_MI;
extern MethodInfo m13814_MI;
extern MethodInfo m13815_MI;
extern MethodInfo m13794_MI;
extern MethodInfo m13817_MI;
extern MethodInfo m13793_MI;
extern MethodInfo m13795_MI;
extern MethodInfo m13796_MI;
extern MethodInfo m13797_MI;
extern MethodInfo m13816_MI;
extern MethodInfo m13819_MI;
static MethodInfo* t2457_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m13800_MI,
	&m13818_MI,
	&m13808_MI,
	&m13809_MI,
	&m13799_MI,
	&m13810_MI,
	&m13811_MI,
	&m13812_MI,
	&m13813_MI,
	&m13801_MI,
	&m13802_MI,
	&m13803_MI,
	&m13804_MI,
	&m13805_MI,
	&m13806_MI,
	&m13807_MI,
	&m13818_MI,
	&m13798_MI,
	&m13791_MI,
	&m13792_MI,
	&m13814_MI,
	&m13815_MI,
	&m13794_MI,
	&m13817_MI,
	&m13793_MI,
	&m13795_MI,
	&m13796_MI,
	&m13797_MI,
	&m13816_MI,
	&m13819_MI,
};
extern TypeInfo t600_TI;
extern TypeInfo t651_TI;
extern TypeInfo t1023_TI;
extern TypeInfo t2455_TI;
extern TypeInfo t2462_TI;
extern TypeInfo t2456_TI;
static TypeInfo* t2457_ITIs[] = 
{
	&t600_TI,
	&t651_TI,
	&t1023_TI,
	&t2455_TI,
	&t2462_TI,
	&t2456_TI,
};
extern TypeInfo t600_TI;
extern TypeInfo t651_TI;
extern TypeInfo t1023_TI;
extern TypeInfo t2455_TI;
extern TypeInfo t2462_TI;
extern TypeInfo t2456_TI;
static Il2CppInterfaceOffsetPair t2457_IOs[] = 
{
	{ &t600_TI, 4},
	{ &t651_TI, 5},
	{ &t1023_TI, 9},
	{ &t2455_TI, 20},
	{ &t2462_TI, 27},
	{ &t2456_TI, 32},
};
extern MethodInfo m13819_MI;
extern MethodInfo m13851_MI;
extern TypeInfo t504_TI;
extern MethodInfo m25721_MI;
extern MethodInfo m25725_MI;
extern MethodInfo m25723_MI;
extern MethodInfo m25715_MI;
extern MethodInfo m25716_MI;
extern MethodInfo m25714_MI;
static void* t2457_RGCTXData[9] = 
{
	&m13819_MI,
	&m13851_MI,
	&t504_TI,
	&m25721_MI,
	&m25725_MI,
	&m25723_MI,
	&m25715_MI,
	&m25716_MI,
	&m25714_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2457_0_0_0;
extern Il2CppType t2457_1_0_0;
extern TypeInfo t14_TI;
struct t2457;
extern TypeInfo t2457_TI;
extern Il2CppGenericClass t2457_GC;
extern CustomAttributesCache t850__CustomAttributeCache;
TypeInfo t2457_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ReadOnlyCollection`1", "System.Collections.ObjectModel", t2457_MIs, t2457_PIs, t2457_FIs, NULL, &t14_TI, NULL, NULL, &t2457_TI, t2457_ITIs, t2457_VT, &t850__CustomAttributeCache, &t2457_TI, &t2457_0_0_0, &t2457_1_0_0, t2457_IOs, &t2457_GC, NULL, NULL, NULL, t2457_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2457), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 30, 9, 1, 0, 0, 34, 6, 6};
#include "t2463.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2463_TI;

extern TypeInfo t2463_TI;
extern TypeInfo t2455_TI;
extern TypeInfo t26_TI;
extern TypeInfo t2462_TI;
extern TypeInfo t504_TI;
extern TypeInfo t35_TI;
extern TypeInfo t25_TI;
extern TypeInfo t503_TI;
extern TypeInfo t651_TI;
extern TypeInfo t14_TI;
extern TypeInfo t24_TI;
extern TypeInfo t2456_TI;
extern TypeInfo t2454_TI;
extern TypeInfo t2453_TI;
extern TypeInfo t31_TI;
extern TypeInfo t319_TI;
extern TypeInfo t345_TI;
extern TypeInfo t1023_TI;
extern Il2CppType t504_0_0_0;
extern MethodInfo m25718_MI;
extern MethodInfo m13854_MI;
extern MethodInfo m13855_MI;
extern MethodInfo m25723_MI;
extern MethodInfo m13852_MI;
extern MethodInfo m13850_MI;
extern MethodInfo m25714_MI;
extern MethodInfo m73_MI;
extern MethodInfo m2925_MI;
extern MethodInfo m7415_MI;
extern MethodInfo m7416_MI;
extern MethodInfo m25716_MI;
extern MethodInfo m13843_MI;
extern MethodInfo m13851_MI;
extern MethodInfo m25721_MI;
extern MethodInfo m25725_MI;
extern MethodInfo m13853_MI;
extern MethodInfo m13841_MI;
extern MethodInfo m13846_MI;
extern MethodInfo m13837_MI;
extern MethodInfo m25720_MI;
extern MethodInfo m25715_MI;
extern MethodInfo m25726_MI;
extern MethodInfo m25727_MI;
extern MethodInfo m25724_MI;
extern MethodInfo m1571_MI;
extern MethodInfo m3841_MI;
extern MethodInfo m1959_MI;
extern MethodInfo m1532_MI;
extern MethodInfo m7414_MI;
extern MethodInfo m7417_MI;


// Metadata Definition System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>
extern Il2CppType t2462_0_0_1;
FieldInfo t2463_f0_FieldInfo = 
{
	"list", &t2462_0_0_1, &t2463_TI, offsetof(t2463, f0), &EmptyCustomAttributesCache};
extern Il2CppType t14_0_0_1;
FieldInfo t2463_f1_FieldInfo = 
{
	"syncRoot", &t14_0_0_1, &t2463_TI, offsetof(t2463, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2463_FIs[] =
{
	&t2463_f0_FieldInfo,
	&t2463_f1_FieldInfo,
	NULL
};
extern MethodInfo m13821_MI;
static PropertyInfo t2463____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t2463_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m13821_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13829_MI;
static PropertyInfo t2463____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2463_TI, "System.Collections.ICollection.IsSynchronized", &m13829_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13830_MI;
static PropertyInfo t2463____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2463_TI, "System.Collections.ICollection.SyncRoot", &m13830_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13831_MI;
static PropertyInfo t2463____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t2463_TI, "System.Collections.IList.IsFixedSize", &m13831_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13832_MI;
static PropertyInfo t2463____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t2463_TI, "System.Collections.IList.IsReadOnly", &m13832_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13833_MI;
extern MethodInfo m13834_MI;
static PropertyInfo t2463____System_Collections_IList_Item_PropertyInfo = 
{
	&t2463_TI, "System.Collections.IList.Item", &m13833_MI, &m13834_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13847_MI;
static PropertyInfo t2463____Count_PropertyInfo = 
{
	&t2463_TI, "Count", &m13847_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13848_MI;
extern MethodInfo m13849_MI;
static PropertyInfo t2463____Item_PropertyInfo = 
{
	&t2463_TI, "Item", &m13848_MI, &m13849_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2463_PIs[] =
{
	&t2463____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t2463____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2463____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2463____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t2463____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t2463____System_Collections_IList_Item_PropertyInfo,
	&t2463____Count_PropertyInfo,
	&t2463____Item_PropertyInfo,
	NULL
};
extern TypeInfo t2463_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13820_MI = 
{
	".ctor", (methodPointerType)&m8216_gshared, &t2463_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2463_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m13821_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m8217_gshared, &t2463_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t24_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t2463_m13822_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t2463_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m13822_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m8218_gshared, &t2463_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t2463_m13822_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2463_TI;
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13823_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8219_gshared, &t2463_TI, &t36_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2463_m13824_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2463_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13824_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m8220_gshared, &t2463_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t2463_m13824_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2463_m13825_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2463_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13825_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m8221_gshared, &t2463_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t2463_m13825_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2463_m13826_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2463_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13826_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m8222_gshared, &t2463_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t2463_m13826_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t2463_m13827_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2463_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13827_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m8223_gshared, &t2463_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t2463_m13827_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2463_m13828_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2463_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13828_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m8224_gshared, &t2463_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2463_m13828_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2463_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m13829_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m8225_gshared, &t2463_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2463_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13830_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m8226_gshared, &t2463_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2463_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m13831_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m8227_gshared, &t2463_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2463_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m13832_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m8228_gshared, &t2463_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t2463_m13833_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t2463_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m13833_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m8229_gshared, &t2463_TI, &t14_0_0_0, RuntimeInvoker_t14_t35, t2463_m13833_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t2463_m13834_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2463_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13834_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m8230_gshared, &t2463_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t2463_m13834_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t504_0_0_0;
static ParameterInfo t2463_m13835_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
};
extern TypeInfo t2463_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13835_MI = 
{
	"Add", (methodPointerType)&m8231_gshared, &t2463_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2463_m13835_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2463_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13836_MI = 
{
	"Clear", (methodPointerType)&m8232_gshared, &t2463_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2463_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13837_MI = 
{
	"ClearItems", (methodPointerType)&m8233_gshared, &t2463_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 452, 0, 33, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t504_0_0_0;
static ParameterInfo t2463_m13838_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
};
extern TypeInfo t2463_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13838_MI = 
{
	"Contains", (methodPointerType)&m8234_gshared, &t2463_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t2463_m13838_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2453_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t2463_m13839_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2453_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t2463_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m13839_MI = 
{
	"CopyTo", (methodPointerType)&m8235_gshared, &t2463_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t2463_m13839_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2463_TI;
extern Il2CppType t2454_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13840_MI = 
{
	"GetEnumerator", (methodPointerType)&m8236_gshared, &t2463_TI, &t2454_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t504_0_0_0;
static ParameterInfo t2463_m13841_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
};
extern TypeInfo t2463_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13841_MI = 
{
	"IndexOf", (methodPointerType)&m8237_gshared, &t2463_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t2463_m13841_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t504_0_0_0;
static ParameterInfo t2463_m13842_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
};
extern TypeInfo t2463_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13842_MI = 
{
	"Insert", (methodPointerType)&m8238_gshared, &t2463_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t2463_m13842_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t504_0_0_0;
static ParameterInfo t2463_m13843_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
};
extern TypeInfo t2463_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13843_MI = 
{
	"InsertItem", (methodPointerType)&m8239_gshared, &t2463_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t2463_m13843_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 34, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t504_0_0_0;
static ParameterInfo t2463_m13844_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
};
extern TypeInfo t2463_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13844_MI = 
{
	"Remove", (methodPointerType)&m8240_gshared, &t2463_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t2463_m13844_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t2463_m13845_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t2463_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m13845_MI = 
{
	"RemoveAt", (methodPointerType)&m8241_gshared, &t2463_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t2463_m13845_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t2463_m13846_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t2463_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m13846_MI = 
{
	"RemoveItem", (methodPointerType)&m8242_gshared, &t2463_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t2463_m13846_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 35, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2463_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m13847_MI = 
{
	"get_Count", (methodPointerType)&m8243_gshared, &t2463_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t2463_m13848_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t2463_TI;
extern Il2CppType t504_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m13848_MI = 
{
	"get_Item", (methodPointerType)&m8244_gshared, &t2463_TI, &t504_0_0_0, RuntimeInvoker_t14_t35, t2463_m13848_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t504_0_0_0;
static ParameterInfo t2463_m13849_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
};
extern TypeInfo t2463_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13849_MI = 
{
	"set_Item", (methodPointerType)&m8245_gshared, &t2463_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t2463_m13849_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t504_0_0_0;
static ParameterInfo t2463_m13850_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
};
extern TypeInfo t2463_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13850_MI = 
{
	"SetItem", (methodPointerType)&m8246_gshared, &t2463_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t2463_m13850_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 36, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2463_m13851_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2463_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13851_MI = 
{
	"IsValidItem", (methodPointerType)&m8247_gshared, &t2463_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t2463_m13851_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2463_m13852_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2463_TI;
extern Il2CppType t504_0_0_0;
extern void* RuntimeInvoker_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13852_MI = 
{
	"ConvertItem", (methodPointerType)&m8248_gshared, &t2463_TI, &t504_0_0_0, RuntimeInvoker_t14_t14, t2463_m13852_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2462_0_0_0;
static ParameterInfo t2463_m13853_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2462_0_0_0},
};
extern TypeInfo t2463_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13853_MI = 
{
	"CheckWritable", (methodPointerType)&m8249_gshared, &t2463_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2463_m13853_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2462_0_0_0;
static ParameterInfo t2463_m13854_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2462_0_0_0},
};
extern TypeInfo t2463_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13854_MI = 
{
	"IsSynchronized", (methodPointerType)&m8250_gshared, &t2463_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t2463_m13854_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2462_0_0_0;
static ParameterInfo t2463_m13855_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2462_0_0_0},
};
extern TypeInfo t2463_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13855_MI = 
{
	"IsFixedSize", (methodPointerType)&m8251_gshared, &t2463_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t2463_m13855_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2463_MIs[] =
{
	&m13820_MI,
	&m13821_MI,
	&m13822_MI,
	&m13823_MI,
	&m13824_MI,
	&m13825_MI,
	&m13826_MI,
	&m13827_MI,
	&m13828_MI,
	&m13829_MI,
	&m13830_MI,
	&m13831_MI,
	&m13832_MI,
	&m13833_MI,
	&m13834_MI,
	&m13835_MI,
	&m13836_MI,
	&m13837_MI,
	&m13838_MI,
	&m13839_MI,
	&m13840_MI,
	&m13841_MI,
	&m13842_MI,
	&m13843_MI,
	&m13844_MI,
	&m13845_MI,
	&m13846_MI,
	&m13847_MI,
	&m13848_MI,
	&m13849_MI,
	&m13850_MI,
	&m13851_MI,
	&m13852_MI,
	&m13853_MI,
	&m13854_MI,
	&m13855_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m13823_MI;
extern MethodInfo m13847_MI;
extern MethodInfo m13829_MI;
extern MethodInfo m13830_MI;
extern MethodInfo m13822_MI;
extern MethodInfo m13831_MI;
extern MethodInfo m13832_MI;
extern MethodInfo m13833_MI;
extern MethodInfo m13834_MI;
extern MethodInfo m13824_MI;
extern MethodInfo m13836_MI;
extern MethodInfo m13825_MI;
extern MethodInfo m13826_MI;
extern MethodInfo m13827_MI;
extern MethodInfo m13828_MI;
extern MethodInfo m13845_MI;
extern MethodInfo m13847_MI;
extern MethodInfo m13821_MI;
extern MethodInfo m13835_MI;
extern MethodInfo m13836_MI;
extern MethodInfo m13838_MI;
extern MethodInfo m13839_MI;
extern MethodInfo m13844_MI;
extern MethodInfo m13841_MI;
extern MethodInfo m13842_MI;
extern MethodInfo m13845_MI;
extern MethodInfo m13848_MI;
extern MethodInfo m13849_MI;
extern MethodInfo m13840_MI;
extern MethodInfo m13837_MI;
extern MethodInfo m13843_MI;
extern MethodInfo m13846_MI;
extern MethodInfo m13850_MI;
static MethodInfo* t2463_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m13823_MI,
	&m13847_MI,
	&m13829_MI,
	&m13830_MI,
	&m13822_MI,
	&m13831_MI,
	&m13832_MI,
	&m13833_MI,
	&m13834_MI,
	&m13824_MI,
	&m13836_MI,
	&m13825_MI,
	&m13826_MI,
	&m13827_MI,
	&m13828_MI,
	&m13845_MI,
	&m13847_MI,
	&m13821_MI,
	&m13835_MI,
	&m13836_MI,
	&m13838_MI,
	&m13839_MI,
	&m13844_MI,
	&m13841_MI,
	&m13842_MI,
	&m13845_MI,
	&m13848_MI,
	&m13849_MI,
	&m13840_MI,
	&m13837_MI,
	&m13843_MI,
	&m13846_MI,
	&m13850_MI,
};
extern TypeInfo t600_TI;
extern TypeInfo t651_TI;
extern TypeInfo t1023_TI;
extern TypeInfo t2455_TI;
extern TypeInfo t2462_TI;
extern TypeInfo t2456_TI;
static TypeInfo* t2463_ITIs[] = 
{
	&t600_TI,
	&t651_TI,
	&t1023_TI,
	&t2455_TI,
	&t2462_TI,
	&t2456_TI,
};
extern TypeInfo t600_TI;
extern TypeInfo t651_TI;
extern TypeInfo t1023_TI;
extern TypeInfo t2455_TI;
extern TypeInfo t2462_TI;
extern TypeInfo t2456_TI;
static Il2CppInterfaceOffsetPair t2463_IOs[] = 
{
	{ &t600_TI, 4},
	{ &t651_TI, 5},
	{ &t1023_TI, 9},
	{ &t2455_TI, 20},
	{ &t2462_TI, 27},
	{ &t2456_TI, 32},
};
extern TypeInfo t503_TI;
extern MethodInfo m2925_MI;
extern MethodInfo m25718_MI;
extern MethodInfo m25716_MI;
extern MethodInfo m25714_MI;
extern MethodInfo m13852_MI;
extern MethodInfo m13843_MI;
extern MethodInfo m13851_MI;
extern TypeInfo t504_TI;
extern MethodInfo m25721_MI;
extern MethodInfo m25725_MI;
extern MethodInfo m13853_MI;
extern MethodInfo m13841_MI;
extern MethodInfo m13846_MI;
extern MethodInfo m13854_MI;
extern MethodInfo m13855_MI;
extern MethodInfo m25723_MI;
extern MethodInfo m13850_MI;
extern MethodInfo m13837_MI;
extern MethodInfo m25720_MI;
extern MethodInfo m25715_MI;
extern MethodInfo m25726_MI;
extern MethodInfo m25727_MI;
extern MethodInfo m25724_MI;
extern Il2CppType t504_0_0_0;
static void* t2463_RGCTXData[25] = 
{
	&t503_TI,
	&m2925_MI,
	&m25718_MI,
	&m25716_MI,
	&m25714_MI,
	&m13852_MI,
	&m13843_MI,
	&m13851_MI,
	&t504_TI,
	&m25721_MI,
	&m25725_MI,
	&m13853_MI,
	&m13841_MI,
	&m13846_MI,
	&m13854_MI,
	&m13855_MI,
	&m25723_MI,
	&m13850_MI,
	&m13837_MI,
	&m25720_MI,
	&m25715_MI,
	&m25726_MI,
	&m25727_MI,
	&m25724_MI,
	(void*)&t504_0_0_0,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2463_0_0_0;
extern Il2CppType t2463_1_0_0;
extern TypeInfo t14_TI;
struct t2463;
extern TypeInfo t2463_TI;
extern Il2CppGenericClass t2463_GC;
extern CustomAttributesCache t849__CustomAttributeCache;
TypeInfo t2463_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Collection`1", "System.Collections.ObjectModel", t2463_MIs, t2463_PIs, t2463_FIs, NULL, &t14_TI, NULL, NULL, &t2463_TI, t2463_ITIs, t2463_VT, &t849__CustomAttributeCache, &t2463_TI, &t2463_0_0_0, &t2463_1_0_0, t2463_IOs, &t2463_GC, NULL, NULL, NULL, t2463_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2463), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 36, 8, 2, 0, 0, 37, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2464_TI;
#include "t2464MD.h"

#include "t845.h"
#include "t2465.h"
extern TypeInfo t2464_TI;
extern TypeInfo t5194_TI;
extern TypeInfo t31_TI;
extern TypeInfo t504_TI;
extern TypeInfo t26_TI;
extern TypeInfo t845_TI;
extern TypeInfo t534_TI;
extern TypeInfo t2465_TI;
extern TypeInfo t35_TI;
#include "t1231MD.h"
#include "t2465MD.h"
extern Il2CppType t5194_0_0_0;
extern Il2CppType t504_0_0_0;
extern Il2CppType t845_0_0_0;
extern MethodInfo m73_MI;
extern MethodInfo m1571_MI;
extern MethodInfo m3005_MI;
extern MethodInfo m3003_MI;
extern MethodInfo m6460_MI;
extern MethodInfo m13861_MI;
extern MethodInfo m25728_MI;
extern MethodInfo m19374_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1<UnityEngine.Rigidbody2D>
extern Il2CppType t2464_0_0_49;
FieldInfo t2464_f0_FieldInfo = 
{
	"_default", &t2464_0_0_49, &t2464_TI, offsetof(t2464_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2464_FIs[] =
{
	&t2464_f0_FieldInfo,
	NULL
};
extern MethodInfo m13860_MI;
static PropertyInfo t2464____Default_PropertyInfo = 
{
	&t2464_TI, "Default", &m13860_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2464_PIs[] =
{
	&t2464____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2464_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13856_MI = 
{
	".ctor", (methodPointerType)&m8252_gshared, &t2464_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2464_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13857_MI = 
{
	".cctor", (methodPointerType)&m8253_gshared, &t2464_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2464_m13858_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2464_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13858_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m8254_gshared, &t2464_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t2464_m13858_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t2464_m13859_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2464_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13859_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m8255_gshared, &t2464_TI, &t26_0_0_0, RuntimeInvoker_t26_t14_t14, t2464_m13859_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t504_0_0_0;
static ParameterInfo t2464_m25728_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
};
extern TypeInfo t2464_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25728_MI = 
{
	"GetHashCode", NULL, &t2464_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t2464_m25728_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t504_0_0_0;
extern Il2CppType t504_0_0_0;
static ParameterInfo t2464_m19374_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
};
extern TypeInfo t2464_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m19374_MI = 
{
	"Equals", NULL, &t2464_TI, &t26_0_0_0, RuntimeInvoker_t26_t14_t14, t2464_m19374_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2464_TI;
extern Il2CppType t2464_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13860_MI = 
{
	"get_Default", (methodPointerType)&m8256_gshared, &t2464_TI, &t2464_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2464_MIs[] =
{
	&m13856_MI,
	&m13857_MI,
	&m13858_MI,
	&m13859_MI,
	&m25728_MI,
	&m19374_MI,
	&m13860_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m19374_MI;
extern MethodInfo m25728_MI;
extern MethodInfo m13859_MI;
extern MethodInfo m13858_MI;
static MethodInfo* t2464_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m19374_MI,
	&m25728_MI,
	&m13859_MI,
	&m13858_MI,
	NULL,
	NULL,
};
extern TypeInfo t5195_TI;
extern TypeInfo t868_TI;
static TypeInfo* t2464_ITIs[] = 
{
	&t5195_TI,
	&t868_TI,
};
extern TypeInfo t5195_TI;
extern TypeInfo t868_TI;
static Il2CppInterfaceOffsetPair t2464_IOs[] = 
{
	{ &t5195_TI, 4},
	{ &t868_TI, 6},
};
extern Il2CppType t5194_0_0_0;
extern Il2CppType t504_0_0_0;
extern TypeInfo t2464_TI;
extern TypeInfo t2464_TI;
extern TypeInfo t2465_TI;
extern MethodInfo m13861_MI;
extern TypeInfo t504_TI;
extern MethodInfo m25728_MI;
extern MethodInfo m19374_MI;
static void* t2464_RGCTXData[9] = 
{
	(void*)&t5194_0_0_0,
	(void*)&t504_0_0_0,
	&t2464_TI,
	&t2464_TI,
	&t2465_TI,
	&m13861_MI,
	&t504_TI,
	&m25728_MI,
	&m19374_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2464_0_0_0;
extern Il2CppType t2464_1_0_0;
extern TypeInfo t14_TI;
struct t2464;
extern TypeInfo t2464_TI;
extern Il2CppGenericClass t2464_GC;
TypeInfo t2464_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t2464_MIs, t2464_PIs, t2464_FIs, NULL, &t14_TI, NULL, NULL, &t2464_TI, t2464_ITIs, t2464_VT, &EmptyCustomAttributesCache, &t2464_TI, &t2464_0_0_0, &t2464_1_0_0, t2464_IOs, &t2464_GC, NULL, NULL, NULL, t2464_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2464), 0, -1, sizeof(t2464_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5195_TI;



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<UnityEngine.Rigidbody2D>
extern Il2CppType t504_0_0_0;
extern Il2CppType t504_0_0_0;
static ParameterInfo t5195_m25729_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
};
extern TypeInfo t5195_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25729_MI = 
{
	"Equals", NULL, &t5195_TI, &t26_0_0_0, RuntimeInvoker_t26_t14_t14, t5195_m25729_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t504_0_0_0;
static ParameterInfo t5195_m25730_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
};
extern TypeInfo t5195_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25730_MI = 
{
	"GetHashCode", NULL, &t5195_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t5195_m25730_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5195_MIs[] =
{
	&m25729_MI,
	&m25730_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5195_0_0_0;
extern Il2CppType t5195_1_0_0;
struct t5195;
extern TypeInfo t5195_TI;
extern Il2CppGenericClass t5195_GC;
TypeInfo t5195_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t5195_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5195_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5195_TI, &t5195_0_0_0, &t5195_1_0_0, NULL, &t5195_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5194_TI;



// Metadata Definition System.IEquatable`1<UnityEngine.Rigidbody2D>
extern Il2CppType t504_0_0_0;
static ParameterInfo t5194_m25731_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
};
extern TypeInfo t5194_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25731_MI = 
{
	"Equals", NULL, &t5194_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t5194_m25731_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5194_MIs[] =
{
	&m25731_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5194_0_0_0;
extern Il2CppType t5194_1_0_0;
struct t5194;
extern TypeInfo t5194_TI;
extern Il2CppGenericClass t5194_GC;
TypeInfo t5194_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t5194_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5194_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5194_TI, &t5194_0_0_0, &t5194_1_0_0, NULL, &t5194_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2465_TI;

extern TypeInfo t504_TI;
extern TypeInfo t14_TI;
extern TypeInfo t35_TI;
extern TypeInfo t26_TI;
extern MethodInfo m13856_MI;
extern MethodInfo m71_MI;
extern MethodInfo m70_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Rigidbody2D>
extern TypeInfo t2465_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13861_MI = 
{
	".ctor", (methodPointerType)&m8287_gshared, &t2465_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t504_0_0_0;
static ParameterInfo t2465_m13862_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
};
extern TypeInfo t2465_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13862_MI = 
{
	"GetHashCode", (methodPointerType)&m8288_gshared, &t2465_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t2465_m13862_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t504_0_0_0;
extern Il2CppType t504_0_0_0;
static ParameterInfo t2465_m13863_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
};
extern TypeInfo t2465_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13863_MI = 
{
	"Equals", (methodPointerType)&m8289_gshared, &t2465_TI, &t26_0_0_0, RuntimeInvoker_t26_t14_t14, t2465_m13863_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2465_MIs[] =
{
	&m13861_MI,
	&m13862_MI,
	&m13863_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m13863_MI;
extern MethodInfo m13862_MI;
extern MethodInfo m13859_MI;
extern MethodInfo m13858_MI;
extern MethodInfo m13862_MI;
extern MethodInfo m13863_MI;
static MethodInfo* t2465_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m13863_MI,
	&m13862_MI,
	&m13859_MI,
	&m13858_MI,
	&m13862_MI,
	&m13863_MI,
};
extern TypeInfo t5195_TI;
extern TypeInfo t868_TI;
static Il2CppInterfaceOffsetPair t2465_IOs[] = 
{
	{ &t5195_TI, 4},
	{ &t868_TI, 6},
};
extern Il2CppType t5194_0_0_0;
extern Il2CppType t504_0_0_0;
extern TypeInfo t2464_TI;
extern TypeInfo t2464_TI;
extern TypeInfo t2465_TI;
extern MethodInfo m13861_MI;
extern TypeInfo t504_TI;
extern MethodInfo m25728_MI;
extern MethodInfo m19374_MI;
extern MethodInfo m13856_MI;
extern TypeInfo t504_TI;
static void* t2465_RGCTXData[11] = 
{
	(void*)&t5194_0_0_0,
	(void*)&t504_0_0_0,
	&t2464_TI,
	&t2464_TI,
	&t2465_TI,
	&m13861_MI,
	&t504_TI,
	&m25728_MI,
	&m19374_MI,
	&m13856_MI,
	&t504_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2465_0_0_0;
extern Il2CppType t2465_1_0_0;
extern TypeInfo t2464_TI;
struct t2465;
extern TypeInfo t2465_TI;
extern Il2CppGenericClass t2465_GC;
extern TypeInfo t844_TI;
TypeInfo t2465_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2465_MIs, NULL, NULL, NULL, &t2464_TI, NULL, &t844_TI, &t2465_TI, NULL, t2465_VT, &EmptyCustomAttributesCache, &t2465_TI, &t2465_0_0_0, &t2465_1_0_0, t2465_IOs, &t2465_GC, NULL, NULL, NULL, t2465_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2465), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2458_TI;



// Metadata Definition System.Predicate`1<UnityEngine.Rigidbody2D>
extern Il2CppType t14_0_0_0;
extern Il2CppType t77_0_0_0;
static ParameterInfo t2458_m13864_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t77_0_0_0},
};
extern TypeInfo t2458_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t77 (MethodInfo* method, void* obj, void** args);
MethodInfo m13864_MI = 
{
	".ctor", (methodPointerType)&m8290_gshared, &t2458_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t77, t2458_m13864_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t504_0_0_0;
static ParameterInfo t2458_m13865_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
};
extern TypeInfo t2458_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13865_MI = 
{
	"Invoke", (methodPointerType)&m8291_gshared, &t2458_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t2458_m13865_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t504_0_0_0;
extern Il2CppType t76_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t2458_m13866_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t76_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2458_TI;
extern Il2CppType t75_0_0_0;
extern void* RuntimeInvoker_t14_t14_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13866_MI = 
{
	"BeginInvoke", (methodPointerType)&m8292_gshared, &t2458_TI, &t75_0_0_0, RuntimeInvoker_t14_t14_t14_t14, t2458_m13866_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t75_0_0_0;
static ParameterInfo t2458_m13867_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t75_0_0_0},
};
extern TypeInfo t2458_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13867_MI = 
{
	"EndInvoke", (methodPointerType)&m8293_gshared, &t2458_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t2458_m13867_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2458_MIs[] =
{
	&m13864_MI,
	&m13865_MI,
	&m13866_MI,
	&m13867_MI,
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
extern MethodInfo m13865_MI;
extern MethodInfo m13866_MI;
extern MethodInfo m13867_MI;
static MethodInfo* t2458_VT[] =
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
	&m13865_MI,
	&m13866_MI,
	&m13867_MI,
};
extern TypeInfo t374_TI;
extern TypeInfo t375_TI;
static Il2CppInterfaceOffsetPair t2458_IOs[] = 
{
	{ &t374_TI, 4},
	{ &t375_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2458_0_0_0;
extern Il2CppType t2458_1_0_0;
extern TypeInfo t211_TI;
struct t2458;
extern TypeInfo t2458_TI;
extern Il2CppGenericClass t2458_GC;
TypeInfo t2458_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Predicate`1", "System", t2458_MIs, NULL, NULL, NULL, &t211_TI, NULL, NULL, &t2458_TI, NULL, t2458_VT, &EmptyCustomAttributesCache, &t2458_TI, &t2458_0_0_0, &t2458_1_0_0, t2458_IOs, &t2458_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2458), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2466_TI;

#include "t833.h"
#include "t2467.h"
extern TypeInfo t2466_TI;
extern TypeInfo t3479_TI;
extern TypeInfo t31_TI;
extern TypeInfo t504_TI;
extern TypeInfo t26_TI;
extern TypeInfo t833_TI;
extern TypeInfo t534_TI;
extern TypeInfo t2467_TI;
extern TypeInfo t35_TI;
extern TypeInfo t319_TI;
#include "t2467MD.h"
extern Il2CppType t3479_0_0_0;
extern Il2CppType t504_0_0_0;
extern Il2CppType t833_0_0_0;
extern MethodInfo m73_MI;
extern MethodInfo m1571_MI;
extern MethodInfo m3005_MI;
extern MethodInfo m3003_MI;
extern MethodInfo m6460_MI;
extern MethodInfo m13872_MI;
extern MethodInfo m25732_MI;
extern MethodInfo m6482_MI;


// Metadata Definition System.Collections.Generic.Comparer`1<UnityEngine.Rigidbody2D>
extern Il2CppType t2466_0_0_49;
FieldInfo t2466_f0_FieldInfo = 
{
	"_default", &t2466_0_0_49, &t2466_TI, offsetof(t2466_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2466_FIs[] =
{
	&t2466_f0_FieldInfo,
	NULL
};
extern MethodInfo m13871_MI;
static PropertyInfo t2466____Default_PropertyInfo = 
{
	&t2466_TI, "Default", &m13871_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2466_PIs[] =
{
	&t2466____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2466_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13868_MI = 
{
	".ctor", (methodPointerType)&m8294_gshared, &t2466_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2466_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13869_MI = 
{
	".cctor", (methodPointerType)&m8295_gshared, &t2466_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t2466_m13870_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2466_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13870_MI = 
{
	"System.Collections.IComparer.Compare", (methodPointerType)&m8296_gshared, &t2466_TI, &t35_0_0_0, RuntimeInvoker_t35_t14_t14, t2466_m13870_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t504_0_0_0;
extern Il2CppType t504_0_0_0;
static ParameterInfo t2466_m25732_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
};
extern TypeInfo t2466_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25732_MI = 
{
	"Compare", NULL, &t2466_TI, &t35_0_0_0, RuntimeInvoker_t35_t14_t14, t2466_m25732_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2466_TI;
extern Il2CppType t2466_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13871_MI = 
{
	"get_Default", (methodPointerType)&m8297_gshared, &t2466_TI, &t2466_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2466_MIs[] =
{
	&m13868_MI,
	&m13869_MI,
	&m13870_MI,
	&m25732_MI,
	&m13871_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m25732_MI;
extern MethodInfo m13870_MI;
static MethodInfo* t2466_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m25732_MI,
	&m13870_MI,
	NULL,
};
extern TypeInfo t3478_TI;
extern TypeInfo t726_TI;
static TypeInfo* t2466_ITIs[] = 
{
	&t3478_TI,
	&t726_TI,
};
extern TypeInfo t3478_TI;
extern TypeInfo t726_TI;
static Il2CppInterfaceOffsetPair t2466_IOs[] = 
{
	{ &t3478_TI, 4},
	{ &t726_TI, 5},
};
extern Il2CppType t3479_0_0_0;
extern Il2CppType t504_0_0_0;
extern TypeInfo t2466_TI;
extern TypeInfo t2466_TI;
extern TypeInfo t2467_TI;
extern MethodInfo m13872_MI;
extern TypeInfo t504_TI;
extern MethodInfo m25732_MI;
static void* t2466_RGCTXData[8] = 
{
	(void*)&t3479_0_0_0,
	(void*)&t504_0_0_0,
	&t2466_TI,
	&t2466_TI,
	&t2467_TI,
	&m13872_MI,
	&t504_TI,
	&m25732_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2466_0_0_0;
extern Il2CppType t2466_1_0_0;
extern TypeInfo t14_TI;
struct t2466;
extern TypeInfo t2466_TI;
extern Il2CppGenericClass t2466_GC;
TypeInfo t2466_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparer`1", "System.Collections.Generic", t2466_MIs, t2466_PIs, t2466_FIs, NULL, &t14_TI, NULL, NULL, &t2466_TI, t2466_ITIs, t2466_VT, &EmptyCustomAttributesCache, &t2466_TI, &t2466_0_0_0, &t2466_1_0_0, t2466_IOs, &t2466_GC, NULL, NULL, NULL, t2466_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2466), 0, -1, sizeof(t2466_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 5, 1, 1, 0, 0, 7, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3478_TI;



// Metadata Definition System.Collections.Generic.IComparer`1<UnityEngine.Rigidbody2D>
extern Il2CppType t504_0_0_0;
extern Il2CppType t504_0_0_0;
static ParameterInfo t3478_m19382_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
};
extern TypeInfo t3478_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m19382_MI = 
{
	"Compare", NULL, &t3478_TI, &t35_0_0_0, RuntimeInvoker_t35_t14_t14, t3478_m19382_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3478_MIs[] =
{
	&m19382_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3478_0_0_0;
extern Il2CppType t3478_1_0_0;
struct t3478;
extern TypeInfo t3478_TI;
extern Il2CppGenericClass t3478_GC;
TypeInfo t3478_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t3478_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3478_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3478_TI, &t3478_0_0_0, &t3478_1_0_0, NULL, &t3478_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3479_TI;



// Metadata Definition System.IComparable`1<UnityEngine.Rigidbody2D>
extern Il2CppType t504_0_0_0;
static ParameterInfo t3479_m19383_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
};
extern TypeInfo t3479_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m19383_MI = 
{
	"CompareTo", NULL, &t3479_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t3479_m19383_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3479_MIs[] =
{
	&m19383_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3479_0_0_0;
extern Il2CppType t3479_1_0_0;
struct t3479;
extern TypeInfo t3479_TI;
extern Il2CppGenericClass t3479_GC;
TypeInfo t3479_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t3479_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3479_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3479_TI, &t3479_0_0_0, &t3479_1_0_0, NULL, &t3479_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2467_TI;

extern TypeInfo t504_TI;
extern TypeInfo t3479_TI;
extern TypeInfo t35_TI;
extern TypeInfo t43_TI;
extern TypeInfo t14_TI;
extern TypeInfo t319_TI;
extern MethodInfo m13868_MI;
extern MethodInfo m19383_MI;
extern MethodInfo m7322_MI;
extern MethodInfo m1959_MI;


// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Rigidbody2D>
extern TypeInfo t2467_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13872_MI = 
{
	".ctor", (methodPointerType)&m8298_gshared, &t2467_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t504_0_0_0;
extern Il2CppType t504_0_0_0;
static ParameterInfo t2467_m13873_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
};
extern TypeInfo t2467_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13873_MI = 
{
	"Compare", (methodPointerType)&m8299_gshared, &t2467_TI, &t35_0_0_0, RuntimeInvoker_t35_t14_t14, t2467_m13873_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2467_MIs[] =
{
	&m13872_MI,
	&m13873_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m13873_MI;
extern MethodInfo m13870_MI;
extern MethodInfo m13873_MI;
static MethodInfo* t2467_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m13873_MI,
	&m13870_MI,
	&m13873_MI,
};
extern TypeInfo t3478_TI;
extern TypeInfo t726_TI;
static Il2CppInterfaceOffsetPair t2467_IOs[] = 
{
	{ &t3478_TI, 4},
	{ &t726_TI, 5},
};
extern Il2CppType t3479_0_0_0;
extern Il2CppType t504_0_0_0;
extern TypeInfo t2466_TI;
extern TypeInfo t2466_TI;
extern TypeInfo t2467_TI;
extern MethodInfo m13872_MI;
extern TypeInfo t504_TI;
extern MethodInfo m25732_MI;
extern MethodInfo m13868_MI;
extern TypeInfo t504_TI;
extern TypeInfo t3479_TI;
extern MethodInfo m19383_MI;
static void* t2467_RGCTXData[12] = 
{
	(void*)&t3479_0_0_0,
	(void*)&t504_0_0_0,
	&t2466_TI,
	&t2466_TI,
	&t2467_TI,
	&m13872_MI,
	&t504_TI,
	&m25732_MI,
	&m13868_MI,
	&t504_TI,
	&t3479_TI,
	&m19383_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2467_0_0_0;
extern Il2CppType t2467_1_0_0;
extern TypeInfo t2466_TI;
struct t2467;
extern TypeInfo t2467_TI;
extern Il2CppGenericClass t2467_GC;
extern TypeInfo t832_TI;
TypeInfo t2467_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2467_MIs, NULL, NULL, NULL, &t2466_TI, NULL, &t832_TI, &t2467_TI, NULL, t2467_VT, &EmptyCustomAttributesCache, &t2467_TI, &t2467_0_0_0, &t2467_1_0_0, t2467_IOs, &t2467_GC, NULL, NULL, NULL, t2467_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2467), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2459_TI;
#include "t2459MD.h"



// Metadata Definition System.Comparison`1<UnityEngine.Rigidbody2D>
extern Il2CppType t14_0_0_0;
extern Il2CppType t77_0_0_0;
static ParameterInfo t2459_m13874_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t77_0_0_0},
};
extern TypeInfo t2459_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t77 (MethodInfo* method, void* obj, void** args);
MethodInfo m13874_MI = 
{
	".ctor", (methodPointerType)&m8330_gshared, &t2459_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t77, t2459_m13874_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t504_0_0_0;
extern Il2CppType t504_0_0_0;
static ParameterInfo t2459_m13875_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
};
extern TypeInfo t2459_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13875_MI = 
{
	"Invoke", (methodPointerType)&m8331_gshared, &t2459_TI, &t35_0_0_0, RuntimeInvoker_t35_t14_t14, t2459_m13875_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t504_0_0_0;
extern Il2CppType t504_0_0_0;
extern Il2CppType t76_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t2459_m13876_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t76_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2459_TI;
extern Il2CppType t75_0_0_0;
extern void* RuntimeInvoker_t14_t14_t14_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13876_MI = 
{
	"BeginInvoke", (methodPointerType)&m8332_gshared, &t2459_TI, &t75_0_0_0, RuntimeInvoker_t14_t14_t14_t14_t14, t2459_m13876_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t75_0_0_0;
static ParameterInfo t2459_m13877_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t75_0_0_0},
};
extern TypeInfo t2459_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13877_MI = 
{
	"EndInvoke", (methodPointerType)&m8333_gshared, &t2459_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t2459_m13877_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2459_MIs[] =
{
	&m13874_MI,
	&m13875_MI,
	&m13876_MI,
	&m13877_MI,
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
extern MethodInfo m13875_MI;
extern MethodInfo m13876_MI;
extern MethodInfo m13877_MI;
static MethodInfo* t2459_VT[] =
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
	&m13875_MI,
	&m13876_MI,
	&m13877_MI,
};
extern TypeInfo t374_TI;
extern TypeInfo t375_TI;
static Il2CppInterfaceOffsetPair t2459_IOs[] = 
{
	{ &t374_TI, 4},
	{ &t375_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2459_0_0_0;
extern Il2CppType t2459_1_0_0;
extern TypeInfo t211_TI;
struct t2459;
extern TypeInfo t2459_TI;
extern Il2CppGenericClass t2459_GC;
TypeInfo t2459_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparison`1", "System", t2459_MIs, NULL, NULL, NULL, &t211_TI, NULL, NULL, &t2459_TI, NULL, t2459_VT, &EmptyCustomAttributesCache, &t2459_TI, &t2459_0_0_0, &t2459_1_0_0, t2459_IOs, &t2459_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2459), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t2468.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2468_TI;
#include "t2468MD.h"

#include "t2469.h"
extern TypeInfo t40_TI;
extern TypeInfo t14_TI;
extern TypeInfo t2468_TI;
extern TypeInfo t504_TI;
extern TypeInfo t2469_TI;
extern TypeInfo t25_TI;
#include "t2469MD.h"
extern MethodInfo m13880_MI;
extern MethodInfo m13882_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Rigidbody2D>
extern Il2CppType t40_0_0_33;
FieldInfo t2468_f1_FieldInfo = 
{
	"m_Arg1", &t40_0_0_33, &t2468_TI, offsetof(t2468, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2468_FIs[] =
{
	&t2468_f1_FieldInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
extern Il2CppType t554_0_0_0;
extern Il2CppType t504_0_0_0;
static ParameterInfo t2468_m13878_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t554_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
};
extern TypeInfo t2468_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13878_MI = 
{
	".ctor", (methodPointerType)&m7907_gshared, &t2468_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t14_t14, t2468_m13878_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t40_0_0_0;
static ParameterInfo t2468_m13879_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t40_0_0_0},
};
extern TypeInfo t2468_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13879_MI = 
{
	"Invoke", (methodPointerType)&m7909_gshared, &t2468_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2468_m13879_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2468_MIs[] =
{
	&m13878_MI,
	&m13879_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m13879_MI;
extern MethodInfo m13883_MI;
static MethodInfo* t2468_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m13879_MI,
	&m13883_MI,
};
extern Il2CppType t2470_0_0_0;
extern TypeInfo t2470_TI;
extern MethodInfo m19387_MI;
extern TypeInfo t504_TI;
extern MethodInfo m13885_MI;
extern MethodInfo m13880_MI;
extern TypeInfo t504_TI;
extern MethodInfo m13882_MI;
static void* t2468_RGCTXData[8] = 
{
	(void*)&t2470_0_0_0,
	&t2470_TI,
	&m19387_MI,
	&t504_TI,
	&m13885_MI,
	&m13880_MI,
	&t504_TI,
	&m13882_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2468_0_0_0;
extern Il2CppType t2468_1_0_0;
extern TypeInfo t2469_TI;
struct t2468;
extern TypeInfo t2468_TI;
extern Il2CppGenericClass t2468_GC;
TypeInfo t2468_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t2468_MIs, NULL, t2468_FIs, NULL, &t2469_TI, NULL, NULL, &t2468_TI, NULL, t2468_VT, &EmptyCustomAttributesCache, &t2468_TI, &t2468_0_0_0, &t2468_1_0_0, NULL, &t2468_GC, NULL, NULL, NULL, t2468_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2468), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2469_TI;

#include "t2470.h"
extern TypeInfo t2469_TI;
extern TypeInfo t2470_TI;
extern TypeInfo t31_TI;
extern TypeInfo t319_TI;
extern TypeInfo t504_TI;
extern TypeInfo t25_TI;
#include "t2470MD.h"
extern Il2CppType t2470_0_0_0;
extern MethodInfo m2816_MI;
extern MethodInfo m1571_MI;
extern MethodInfo m2981_MI;
extern MethodInfo m1614_MI;
extern MethodInfo m2815_MI;
extern MethodInfo m1959_MI;
extern MethodInfo m19387_MI;
extern MethodInfo m2817_MI;
extern MethodInfo m13885_MI;
extern MethodInfo m2977_MI;
extern MethodInfo m2975_MI;
struct t553;
#define m19387(__this, p0, method) (void)m16422_gshared((t14 *)__this, (t14 *)p0, method)
extern MethodInfo m19387_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.Rigidbody2D>
extern Il2CppType t2470_0_0_1;
FieldInfo t2469_f0_FieldInfo = 
{
	"Delegate", &t2470_0_0_1, &t2469_TI, offsetof(t2469, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2469_FIs[] =
{
	&t2469_f0_FieldInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
extern Il2CppType t554_0_0_0;
static ParameterInfo t2469_m13880_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t554_0_0_0},
};
extern TypeInfo t2469_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13880_MI = 
{
	".ctor", (methodPointerType)&m7910_gshared, &t2469_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t14, t2469_m13880_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2470_0_0_0;
static ParameterInfo t2469_m13881_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t2470_0_0_0},
};
extern TypeInfo t2469_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13881_MI = 
{
	".ctor", (methodPointerType)&m7911_gshared, &t2469_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2469_m13881_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t40_0_0_0;
static ParameterInfo t2469_m13882_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t40_0_0_0},
};
extern TypeInfo t2469_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13882_MI = 
{
	"Invoke", (methodPointerType)&m7912_gshared, &t2469_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2469_m13882_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t554_0_0_0;
static ParameterInfo t2469_m13883_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t554_0_0_0},
};
extern TypeInfo t2469_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13883_MI = 
{
	"Find", (methodPointerType)&m7913_gshared, &t2469_TI, &t26_0_0_0, RuntimeInvoker_t26_t14_t14, t2469_m13883_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2469_MIs[] =
{
	&m13880_MI,
	&m13881_MI,
	&m13882_MI,
	&m13883_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m13882_MI;
extern MethodInfo m13883_MI;
static MethodInfo* t2469_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m13882_MI,
	&m13883_MI,
};
extern Il2CppType t2470_0_0_0;
extern TypeInfo t2470_TI;
extern MethodInfo m19387_MI;
extern TypeInfo t504_TI;
extern MethodInfo m13885_MI;
static void* t2469_RGCTXData[5] = 
{
	(void*)&t2470_0_0_0,
	&t2470_TI,
	&m19387_MI,
	&t504_TI,
	&m13885_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2469_0_0_0;
extern Il2CppType t2469_1_0_0;
extern TypeInfo t553_TI;
struct t2469;
extern TypeInfo t2469_TI;
extern Il2CppGenericClass t2469_GC;
TypeInfo t2469_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2469_MIs, NULL, t2469_FIs, NULL, &t553_TI, NULL, NULL, &t2469_TI, NULL, t2469_VT, &EmptyCustomAttributesCache, &t2469_TI, &t2469_0_0_0, &t2469_1_0_0, NULL, &t2469_GC, NULL, NULL, NULL, t2469_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2469), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2470_TI;



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.Rigidbody2D>
extern Il2CppType t14_0_0_0;
extern Il2CppType t77_0_0_0;
static ParameterInfo t2470_m13884_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t77_0_0_0},
};
extern TypeInfo t2470_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t77 (MethodInfo* method, void* obj, void** args);
MethodInfo m13884_MI = 
{
	".ctor", (methodPointerType)&m7914_gshared, &t2470_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t77, t2470_m13884_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t504_0_0_0;
static ParameterInfo t2470_m13885_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
};
extern TypeInfo t2470_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13885_MI = 
{
	"Invoke", (methodPointerType)&m7915_gshared, &t2470_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2470_m13885_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t504_0_0_0;
extern Il2CppType t76_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t2470_m13886_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t76_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2470_TI;
extern Il2CppType t75_0_0_0;
extern void* RuntimeInvoker_t14_t14_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13886_MI = 
{
	"BeginInvoke", (methodPointerType)&m7916_gshared, &t2470_TI, &t75_0_0_0, RuntimeInvoker_t14_t14_t14_t14, t2470_m13886_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t75_0_0_0;
static ParameterInfo t2470_m13887_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t75_0_0_0},
};
extern TypeInfo t2470_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13887_MI = 
{
	"EndInvoke", (methodPointerType)&m7917_gshared, &t2470_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2470_m13887_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2470_MIs[] =
{
	&m13884_MI,
	&m13885_MI,
	&m13886_MI,
	&m13887_MI,
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
extern MethodInfo m13885_MI;
extern MethodInfo m13886_MI;
extern MethodInfo m13887_MI;
static MethodInfo* t2470_VT[] =
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
	&m13885_MI,
	&m13886_MI,
	&m13887_MI,
};
extern TypeInfo t374_TI;
extern TypeInfo t375_TI;
static Il2CppInterfaceOffsetPair t2470_IOs[] = 
{
	{ &t374_TI, 4},
	{ &t375_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2470_0_0_0;
extern Il2CppType t2470_1_0_0;
extern TypeInfo t211_TI;
struct t2470;
extern TypeInfo t2470_TI;
extern Il2CppGenericClass t2470_GC;
TypeInfo t2470_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t2470_MIs, NULL, NULL, NULL, &t211_TI, NULL, NULL, &t2470_TI, NULL, t2470_VT, &EmptyCustomAttributesCache, &t2470_TI, &t2470_0_0_0, &t2470_1_0_0, t2470_IOs, &t2470_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2470), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3480_TI;

#include "t47.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.Collider2D>
extern MethodInfo m25733_MI;
static PropertyInfo t3480____Current_PropertyInfo = 
{
	&t3480_TI, "Current", &m25733_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3480_PIs[] =
{
	&t3480____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3480_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25733_MI = 
{
	"get_Current", NULL, &t3480_TI, &t47_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3480_MIs[] =
{
	&m25733_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t3480_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3480_0_0_0;
extern Il2CppType t3480_1_0_0;
struct t3480;
extern TypeInfo t3480_TI;
extern Il2CppGenericClass t3480_GC;
TypeInfo t3480_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3480_MIs, t3480_PIs, NULL, NULL, NULL, NULL, NULL, &t3480_TI, t3480_ITIs, NULL, &EmptyCustomAttributesCache, &t3480_TI, &t3480_0_0_0, &t3480_1_0_0, NULL, &t3480_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2471.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2471_TI;
#include "t2471MD.h"

extern TypeInfo t2471_TI;
extern TypeInfo t47_TI;
extern TypeInfo t1278_TI;
extern MethodInfo m13892_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m19389_MI;
struct t24;
#define m19389(__this, p0, method) (t47 *)m16357_gshared((t24 *)__this, (int32_t)p0, method)
extern MethodInfo m19389_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.Collider2D>
extern Il2CppType t24_0_0_1;
FieldInfo t2471_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t2471_TI, offsetof(t2471, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t2471_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t2471_TI, offsetof(t2471, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t2471_FIs[] =
{
	&t2471_f0_FieldInfo,
	&t2471_f1_FieldInfo,
	NULL
};
extern MethodInfo m13889_MI;
static PropertyInfo t2471____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2471_TI, "System.Collections.IEnumerator.Current", &m13889_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13892_MI;
static PropertyInfo t2471____Current_PropertyInfo = 
{
	&t2471_TI, "Current", &m13892_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2471_PIs[] =
{
	&t2471____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2471____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t2471_m13888_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t2471_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13888_MI = 
{
	".ctor", (methodPointerType)&m7877_gshared, &t2471_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2471_m13888_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2471_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13889_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7879_gshared, &t2471_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2471_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13890_MI = 
{
	"Dispose", (methodPointerType)&m7881_gshared, &t2471_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2471_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m13891_MI = 
{
	"MoveNext", (methodPointerType)&m7883_gshared, &t2471_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2471_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13892_MI = 
{
	"get_Current", (methodPointerType)&m7885_gshared, &t2471_TI, &t47_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2471_MIs[] =
{
	&m13888_MI,
	&m13889_MI,
	&m13890_MI,
	&m13891_MI,
	&m13892_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m13889_MI;
extern MethodInfo m13891_MI;
extern MethodInfo m13890_MI;
extern MethodInfo m13892_MI;
static MethodInfo* t2471_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m13889_MI,
	&m13891_MI,
	&m13890_MI,
	&m13892_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3480_TI;
static TypeInfo* t2471_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t3480_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3480_TI;
static Il2CppInterfaceOffsetPair t2471_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t3480_TI, 7},
};
extern MethodInfo m13892_MI;
extern TypeInfo t47_TI;
extern MethodInfo m19389_MI;
static void* t2471_RGCTXData[3] = 
{
	&m13892_MI,
	&t47_TI,
	&m19389_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2471_0_0_0;
extern Il2CppType t2471_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t2471_TI;
extern Il2CppGenericClass t2471_GC;
extern TypeInfo t24_TI;
TypeInfo t2471_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2471_MIs, t2471_PIs, t2471_FIs, NULL, &t122_TI, NULL, &t24_TI, &t2471_TI, t2471_ITIs, t2471_VT, &EmptyCustomAttributesCache, &t2471_TI, &t2471_0_0_0, &t2471_1_0_0, t2471_IOs, &t2471_GC, NULL, NULL, NULL, t2471_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2471)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4359_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.Collider2D>
extern MethodInfo m25734_MI;
static PropertyInfo t4359____Count_PropertyInfo = 
{
	&t4359_TI, "Count", &m25734_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m25735_MI;
static PropertyInfo t4359____IsReadOnly_PropertyInfo = 
{
	&t4359_TI, "IsReadOnly", &m25735_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4359_PIs[] =
{
	&t4359____Count_PropertyInfo,
	&t4359____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4359_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25734_MI = 
{
	"get_Count", NULL, &t4359_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4359_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m25735_MI = 
{
	"get_IsReadOnly", NULL, &t4359_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4359_m25736_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4359_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25736_MI = 
{
	"Add", NULL, &t4359_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t4359_m25736_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4359_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m25737_MI = 
{
	"Clear", NULL, &t4359_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4359_m25738_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4359_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25738_MI = 
{
	"Contains", NULL, &t4359_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t4359_m25738_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3121_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t4359_m25739_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3121_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4359_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25739_MI = 
{
	"CopyTo", NULL, &t4359_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t4359_m25739_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4359_m25740_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4359_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25740_MI = 
{
	"Remove", NULL, &t4359_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t4359_m25740_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4359_MIs[] =
{
	&m25734_MI,
	&m25735_MI,
	&m25736_MI,
	&m25737_MI,
	&m25738_MI,
	&m25739_MI,
	&m25740_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4361_TI;
static TypeInfo* t4359_ITIs[] = 
{
	&t600_TI,
	&t4361_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4359_0_0_0;
extern Il2CppType t4359_1_0_0;
struct t4359;
extern TypeInfo t4359_TI;
extern Il2CppGenericClass t4359_GC;
TypeInfo t4359_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4359_MIs, t4359_PIs, NULL, NULL, NULL, NULL, NULL, &t4359_TI, t4359_ITIs, NULL, &EmptyCustomAttributesCache, &t4359_TI, &t4359_0_0_0, &t4359_1_0_0, NULL, &t4359_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4361_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.Collider2D>
extern TypeInfo t4361_TI;
extern Il2CppType t3480_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25741_MI = 
{
	"GetEnumerator", NULL, &t4361_TI, &t3480_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4361_MIs[] =
{
	&m25741_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t4361_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4361_0_0_0;
extern Il2CppType t4361_1_0_0;
struct t4361;
extern TypeInfo t4361_TI;
extern Il2CppGenericClass t4361_GC;
TypeInfo t4361_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4361_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4361_TI, t4361_ITIs, NULL, &EmptyCustomAttributesCache, &t4361_TI, &t4361_0_0_0, &t4361_1_0_0, NULL, &t4361_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4360_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.Collider2D>
extern MethodInfo m25742_MI;
extern MethodInfo m25743_MI;
static PropertyInfo t4360____Item_PropertyInfo = 
{
	&t4360_TI, "Item", &m25742_MI, &m25743_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4360_PIs[] =
{
	&t4360____Item_PropertyInfo,
	NULL
};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4360_m25744_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4360_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25744_MI = 
{
	"IndexOf", NULL, &t4360_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t4360_m25744_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4360_m25745_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4360_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25745_MI = 
{
	"Insert", NULL, &t4360_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t4360_m25745_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4360_m25746_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4360_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25746_MI = 
{
	"RemoveAt", NULL, &t4360_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t4360_m25746_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4360_m25742_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4360_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25742_MI = 
{
	"get_Item", NULL, &t4360_TI, &t47_0_0_0, RuntimeInvoker_t14_t35, t4360_m25742_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4360_m25743_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4360_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25743_MI = 
{
	"set_Item", NULL, &t4360_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t4360_m25743_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4360_MIs[] =
{
	&m25744_MI,
	&m25745_MI,
	&m25746_MI,
	&m25742_MI,
	&m25743_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4359_TI;
extern TypeInfo t4361_TI;
static TypeInfo* t4360_ITIs[] = 
{
	&t600_TI,
	&t4359_TI,
	&t4361_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4360_0_0_0;
extern Il2CppType t4360_1_0_0;
struct t4360;
extern TypeInfo t4360_TI;
extern Il2CppGenericClass t4360_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t4360_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4360_MIs, t4360_PIs, NULL, NULL, NULL, NULL, NULL, &t4360_TI, t4360_ITIs, NULL, &t1409__CustomAttributeCache, &t4360_TI, &t4360_0_0_0, &t4360_1_0_0, NULL, &t4360_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t2472.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2472_TI;
#include "t2472MD.h"

#include "t2473.h"
extern TypeInfo t40_TI;
extern TypeInfo t14_TI;
extern TypeInfo t2472_TI;
extern TypeInfo t47_TI;
extern TypeInfo t2473_TI;
extern TypeInfo t25_TI;
#include "t2473MD.h"
extern MethodInfo m13895_MI;
extern MethodInfo m13897_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Collider2D>
extern Il2CppType t40_0_0_33;
FieldInfo t2472_f1_FieldInfo = 
{
	"m_Arg1", &t40_0_0_33, &t2472_TI, offsetof(t2472, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2472_FIs[] =
{
	&t2472_f1_FieldInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
extern Il2CppType t554_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t2472_m13893_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t554_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t2472_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13893_MI = 
{
	".ctor", (methodPointerType)&m7907_gshared, &t2472_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t14_t14, t2472_m13893_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t40_0_0_0;
static ParameterInfo t2472_m13894_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t40_0_0_0},
};
extern TypeInfo t2472_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13894_MI = 
{
	"Invoke", (methodPointerType)&m7909_gshared, &t2472_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2472_m13894_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2472_MIs[] =
{
	&m13893_MI,
	&m13894_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m13894_MI;
extern MethodInfo m13898_MI;
static MethodInfo* t2472_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m13894_MI,
	&m13898_MI,
};
extern Il2CppType t2474_0_0_0;
extern TypeInfo t2474_TI;
extern MethodInfo m19399_MI;
extern TypeInfo t47_TI;
extern MethodInfo m13900_MI;
extern MethodInfo m13895_MI;
extern TypeInfo t47_TI;
extern MethodInfo m13897_MI;
static void* t2472_RGCTXData[8] = 
{
	(void*)&t2474_0_0_0,
	&t2474_TI,
	&m19399_MI,
	&t47_TI,
	&m13900_MI,
	&m13895_MI,
	&t47_TI,
	&m13897_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2472_0_0_0;
extern Il2CppType t2472_1_0_0;
extern TypeInfo t2473_TI;
struct t2472;
extern TypeInfo t2472_TI;
extern Il2CppGenericClass t2472_GC;
TypeInfo t2472_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t2472_MIs, NULL, t2472_FIs, NULL, &t2473_TI, NULL, NULL, &t2472_TI, NULL, t2472_VT, &EmptyCustomAttributesCache, &t2472_TI, &t2472_0_0_0, &t2472_1_0_0, NULL, &t2472_GC, NULL, NULL, NULL, t2472_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2472), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2473_TI;

#include "t2474.h"
extern TypeInfo t2473_TI;
extern TypeInfo t2474_TI;
extern TypeInfo t31_TI;
extern TypeInfo t319_TI;
extern TypeInfo t47_TI;
extern TypeInfo t25_TI;
#include "t2474MD.h"
extern Il2CppType t2474_0_0_0;
extern MethodInfo m2816_MI;
extern MethodInfo m1571_MI;
extern MethodInfo m2981_MI;
extern MethodInfo m1614_MI;
extern MethodInfo m2815_MI;
extern MethodInfo m1959_MI;
extern MethodInfo m19399_MI;
extern MethodInfo m2817_MI;
extern MethodInfo m13900_MI;
extern MethodInfo m2977_MI;
extern MethodInfo m2975_MI;
struct t553;
#define m19399(__this, p0, method) (void)m16422_gshared((t14 *)__this, (t14 *)p0, method)
extern MethodInfo m19399_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.Collider2D>
extern Il2CppType t2474_0_0_1;
FieldInfo t2473_f0_FieldInfo = 
{
	"Delegate", &t2474_0_0_1, &t2473_TI, offsetof(t2473, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2473_FIs[] =
{
	&t2473_f0_FieldInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
extern Il2CppType t554_0_0_0;
static ParameterInfo t2473_m13895_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t554_0_0_0},
};
extern TypeInfo t2473_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13895_MI = 
{
	".ctor", (methodPointerType)&m7910_gshared, &t2473_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t14, t2473_m13895_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2474_0_0_0;
static ParameterInfo t2473_m13896_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t2474_0_0_0},
};
extern TypeInfo t2473_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13896_MI = 
{
	".ctor", (methodPointerType)&m7911_gshared, &t2473_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2473_m13896_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t40_0_0_0;
static ParameterInfo t2473_m13897_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t40_0_0_0},
};
extern TypeInfo t2473_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13897_MI = 
{
	"Invoke", (methodPointerType)&m7912_gshared, &t2473_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2473_m13897_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t554_0_0_0;
static ParameterInfo t2473_m13898_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t554_0_0_0},
};
extern TypeInfo t2473_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13898_MI = 
{
	"Find", (methodPointerType)&m7913_gshared, &t2473_TI, &t26_0_0_0, RuntimeInvoker_t26_t14_t14, t2473_m13898_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2473_MIs[] =
{
	&m13895_MI,
	&m13896_MI,
	&m13897_MI,
	&m13898_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m13897_MI;
extern MethodInfo m13898_MI;
static MethodInfo* t2473_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m13897_MI,
	&m13898_MI,
};
extern Il2CppType t2474_0_0_0;
extern TypeInfo t2474_TI;
extern MethodInfo m19399_MI;
extern TypeInfo t47_TI;
extern MethodInfo m13900_MI;
static void* t2473_RGCTXData[5] = 
{
	(void*)&t2474_0_0_0,
	&t2474_TI,
	&m19399_MI,
	&t47_TI,
	&m13900_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2473_0_0_0;
extern Il2CppType t2473_1_0_0;
extern TypeInfo t553_TI;
struct t2473;
extern TypeInfo t2473_TI;
extern Il2CppGenericClass t2473_GC;
TypeInfo t2473_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2473_MIs, NULL, t2473_FIs, NULL, &t553_TI, NULL, NULL, &t2473_TI, NULL, t2473_VT, &EmptyCustomAttributesCache, &t2473_TI, &t2473_0_0_0, &t2473_1_0_0, NULL, &t2473_GC, NULL, NULL, NULL, t2473_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2473), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2474_TI;



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.Collider2D>
extern Il2CppType t14_0_0_0;
extern Il2CppType t77_0_0_0;
static ParameterInfo t2474_m13899_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t77_0_0_0},
};
extern TypeInfo t2474_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t77 (MethodInfo* method, void* obj, void** args);
MethodInfo m13899_MI = 
{
	".ctor", (methodPointerType)&m7914_gshared, &t2474_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t77, t2474_m13899_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t2474_m13900_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t2474_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13900_MI = 
{
	"Invoke", (methodPointerType)&m7915_gshared, &t2474_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2474_m13900_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t76_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t2474_m13901_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t76_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2474_TI;
extern Il2CppType t75_0_0_0;
extern void* RuntimeInvoker_t14_t14_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13901_MI = 
{
	"BeginInvoke", (methodPointerType)&m7916_gshared, &t2474_TI, &t75_0_0_0, RuntimeInvoker_t14_t14_t14_t14, t2474_m13901_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t75_0_0_0;
static ParameterInfo t2474_m13902_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t75_0_0_0},
};
extern TypeInfo t2474_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13902_MI = 
{
	"EndInvoke", (methodPointerType)&m7917_gshared, &t2474_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2474_m13902_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2474_MIs[] =
{
	&m13899_MI,
	&m13900_MI,
	&m13901_MI,
	&m13902_MI,
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
extern MethodInfo m13900_MI;
extern MethodInfo m13901_MI;
extern MethodInfo m13902_MI;
static MethodInfo* t2474_VT[] =
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
	&m13900_MI,
	&m13901_MI,
	&m13902_MI,
};
extern TypeInfo t374_TI;
extern TypeInfo t375_TI;
static Il2CppInterfaceOffsetPair t2474_IOs[] = 
{
	{ &t374_TI, 4},
	{ &t375_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2474_0_0_0;
extern Il2CppType t2474_1_0_0;
extern TypeInfo t211_TI;
struct t2474;
extern TypeInfo t2474_TI;
extern Il2CppGenericClass t2474_GC;
TypeInfo t2474_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t2474_MIs, NULL, NULL, NULL, &t211_TI, NULL, NULL, &t2474_TI, NULL, t2474_VT, &EmptyCustomAttributesCache, &t2474_TI, &t2474_0_0_0, &t2474_1_0_0, t2474_IOs, &t2474_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2474), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3481_TI;

#include "t44.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.BoxCollider2D>
extern MethodInfo m25747_MI;
static PropertyInfo t3481____Current_PropertyInfo = 
{
	&t3481_TI, "Current", &m25747_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3481_PIs[] =
{
	&t3481____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3481_TI;
extern Il2CppType t44_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25747_MI = 
{
	"get_Current", NULL, &t3481_TI, &t44_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3481_MIs[] =
{
	&m25747_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t3481_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3481_0_0_0;
extern Il2CppType t3481_1_0_0;
struct t3481;
extern TypeInfo t3481_TI;
extern Il2CppGenericClass t3481_GC;
TypeInfo t3481_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3481_MIs, t3481_PIs, NULL, NULL, NULL, NULL, NULL, &t3481_TI, t3481_ITIs, NULL, &EmptyCustomAttributesCache, &t3481_TI, &t3481_0_0_0, &t3481_1_0_0, NULL, &t3481_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2475.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2475_TI;
#include "t2475MD.h"

extern TypeInfo t2475_TI;
extern TypeInfo t44_TI;
extern TypeInfo t1278_TI;
extern MethodInfo m13907_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m19401_MI;
struct t24;
#define m19401(__this, p0, method) (t44 *)m16357_gshared((t24 *)__this, (int32_t)p0, method)
extern MethodInfo m19401_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.BoxCollider2D>
extern Il2CppType t24_0_0_1;
FieldInfo t2475_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t2475_TI, offsetof(t2475, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t2475_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t2475_TI, offsetof(t2475, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t2475_FIs[] =
{
	&t2475_f0_FieldInfo,
	&t2475_f1_FieldInfo,
	NULL
};
extern MethodInfo m13904_MI;
static PropertyInfo t2475____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2475_TI, "System.Collections.IEnumerator.Current", &m13904_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13907_MI;
static PropertyInfo t2475____Current_PropertyInfo = 
{
	&t2475_TI, "Current", &m13907_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2475_PIs[] =
{
	&t2475____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2475____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t2475_m13903_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t2475_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13903_MI = 
{
	".ctor", (methodPointerType)&m7877_gshared, &t2475_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2475_m13903_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2475_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13904_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7879_gshared, &t2475_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2475_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13905_MI = 
{
	"Dispose", (methodPointerType)&m7881_gshared, &t2475_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2475_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m13906_MI = 
{
	"MoveNext", (methodPointerType)&m7883_gshared, &t2475_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2475_TI;
extern Il2CppType t44_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13907_MI = 
{
	"get_Current", (methodPointerType)&m7885_gshared, &t2475_TI, &t44_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2475_MIs[] =
{
	&m13903_MI,
	&m13904_MI,
	&m13905_MI,
	&m13906_MI,
	&m13907_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m13904_MI;
extern MethodInfo m13906_MI;
extern MethodInfo m13905_MI;
extern MethodInfo m13907_MI;
static MethodInfo* t2475_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m13904_MI,
	&m13906_MI,
	&m13905_MI,
	&m13907_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3481_TI;
static TypeInfo* t2475_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t3481_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3481_TI;
static Il2CppInterfaceOffsetPair t2475_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t3481_TI, 7},
};
extern MethodInfo m13907_MI;
extern TypeInfo t44_TI;
extern MethodInfo m19401_MI;
static void* t2475_RGCTXData[3] = 
{
	&m13907_MI,
	&t44_TI,
	&m19401_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2475_0_0_0;
extern Il2CppType t2475_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t2475_TI;
extern Il2CppGenericClass t2475_GC;
extern TypeInfo t24_TI;
TypeInfo t2475_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2475_MIs, t2475_PIs, t2475_FIs, NULL, &t122_TI, NULL, &t24_TI, &t2475_TI, t2475_ITIs, t2475_VT, &EmptyCustomAttributesCache, &t2475_TI, &t2475_0_0_0, &t2475_1_0_0, t2475_IOs, &t2475_GC, NULL, NULL, NULL, t2475_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2475)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4362_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.BoxCollider2D>
extern MethodInfo m25748_MI;
static PropertyInfo t4362____Count_PropertyInfo = 
{
	&t4362_TI, "Count", &m25748_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m25749_MI;
static PropertyInfo t4362____IsReadOnly_PropertyInfo = 
{
	&t4362_TI, "IsReadOnly", &m25749_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4362_PIs[] =
{
	&t4362____Count_PropertyInfo,
	&t4362____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4362_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25748_MI = 
{
	"get_Count", NULL, &t4362_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4362_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m25749_MI = 
{
	"get_IsReadOnly", NULL, &t4362_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t44_0_0_0;
static ParameterInfo t4362_m25750_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t44_0_0_0},
};
extern TypeInfo t4362_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25750_MI = 
{
	"Add", NULL, &t4362_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t4362_m25750_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4362_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m25751_MI = 
{
	"Clear", NULL, &t4362_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t44_0_0_0;
static ParameterInfo t4362_m25752_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t44_0_0_0},
};
extern TypeInfo t4362_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25752_MI = 
{
	"Contains", NULL, &t4362_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t4362_m25752_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3122_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t4362_m25753_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3122_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4362_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25753_MI = 
{
	"CopyTo", NULL, &t4362_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t4362_m25753_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t44_0_0_0;
static ParameterInfo t4362_m25754_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t44_0_0_0},
};
extern TypeInfo t4362_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25754_MI = 
{
	"Remove", NULL, &t4362_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t4362_m25754_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4362_MIs[] =
{
	&m25748_MI,
	&m25749_MI,
	&m25750_MI,
	&m25751_MI,
	&m25752_MI,
	&m25753_MI,
	&m25754_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4364_TI;
static TypeInfo* t4362_ITIs[] = 
{
	&t600_TI,
	&t4364_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4362_0_0_0;
extern Il2CppType t4362_1_0_0;
struct t4362;
extern TypeInfo t4362_TI;
extern Il2CppGenericClass t4362_GC;
TypeInfo t4362_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4362_MIs, t4362_PIs, NULL, NULL, NULL, NULL, NULL, &t4362_TI, t4362_ITIs, NULL, &EmptyCustomAttributesCache, &t4362_TI, &t4362_0_0_0, &t4362_1_0_0, NULL, &t4362_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4364_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.BoxCollider2D>
extern TypeInfo t4364_TI;
extern Il2CppType t3481_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25755_MI = 
{
	"GetEnumerator", NULL, &t4364_TI, &t3481_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4364_MIs[] =
{
	&m25755_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t4364_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4364_0_0_0;
extern Il2CppType t4364_1_0_0;
struct t4364;
extern TypeInfo t4364_TI;
extern Il2CppGenericClass t4364_GC;
TypeInfo t4364_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4364_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4364_TI, t4364_ITIs, NULL, &EmptyCustomAttributesCache, &t4364_TI, &t4364_0_0_0, &t4364_1_0_0, NULL, &t4364_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4363_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.BoxCollider2D>
extern MethodInfo m25756_MI;
extern MethodInfo m25757_MI;
static PropertyInfo t4363____Item_PropertyInfo = 
{
	&t4363_TI, "Item", &m25756_MI, &m25757_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4363_PIs[] =
{
	&t4363____Item_PropertyInfo,
	NULL
};
extern Il2CppType t44_0_0_0;
static ParameterInfo t4363_m25758_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t44_0_0_0},
};
extern TypeInfo t4363_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25758_MI = 
{
	"IndexOf", NULL, &t4363_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t4363_m25758_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t44_0_0_0;
static ParameterInfo t4363_m25759_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t44_0_0_0},
};
extern TypeInfo t4363_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25759_MI = 
{
	"Insert", NULL, &t4363_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t4363_m25759_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4363_m25760_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4363_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25760_MI = 
{
	"RemoveAt", NULL, &t4363_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t4363_m25760_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4363_m25756_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4363_TI;
extern Il2CppType t44_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25756_MI = 
{
	"get_Item", NULL, &t4363_TI, &t44_0_0_0, RuntimeInvoker_t14_t35, t4363_m25756_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t44_0_0_0;
static ParameterInfo t4363_m25757_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t44_0_0_0},
};
extern TypeInfo t4363_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25757_MI = 
{
	"set_Item", NULL, &t4363_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t4363_m25757_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4363_MIs[] =
{
	&m25758_MI,
	&m25759_MI,
	&m25760_MI,
	&m25756_MI,
	&m25757_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4362_TI;
extern TypeInfo t4364_TI;
static TypeInfo* t4363_ITIs[] = 
{
	&t600_TI,
	&t4362_TI,
	&t4364_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4363_0_0_0;
extern Il2CppType t4363_1_0_0;
struct t4363;
extern TypeInfo t4363_TI;
extern Il2CppGenericClass t4363_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t4363_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4363_MIs, t4363_PIs, NULL, NULL, NULL, NULL, NULL, &t4363_TI, t4363_ITIs, NULL, &t1409__CustomAttributeCache, &t4363_TI, &t4363_0_0_0, &t4363_1_0_0, NULL, &t4363_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t2476.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2476_TI;
#include "t2476MD.h"

#include "t2477.h"
extern TypeInfo t40_TI;
extern TypeInfo t14_TI;
extern TypeInfo t2476_TI;
extern TypeInfo t44_TI;
extern TypeInfo t2477_TI;
extern TypeInfo t25_TI;
#include "t2477MD.h"
extern MethodInfo m13910_MI;
extern MethodInfo m13912_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.BoxCollider2D>
extern Il2CppType t40_0_0_33;
FieldInfo t2476_f1_FieldInfo = 
{
	"m_Arg1", &t40_0_0_33, &t2476_TI, offsetof(t2476, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2476_FIs[] =
{
	&t2476_f1_FieldInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
extern Il2CppType t554_0_0_0;
extern Il2CppType t44_0_0_0;
static ParameterInfo t2476_m13908_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t554_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t44_0_0_0},
};
extern TypeInfo t2476_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13908_MI = 
{
	".ctor", (methodPointerType)&m7907_gshared, &t2476_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t14_t14, t2476_m13908_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t40_0_0_0;
static ParameterInfo t2476_m13909_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t40_0_0_0},
};
extern TypeInfo t2476_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13909_MI = 
{
	"Invoke", (methodPointerType)&m7909_gshared, &t2476_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2476_m13909_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2476_MIs[] =
{
	&m13908_MI,
	&m13909_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m13909_MI;
extern MethodInfo m13913_MI;
static MethodInfo* t2476_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m13909_MI,
	&m13913_MI,
};
extern Il2CppType t2478_0_0_0;
extern TypeInfo t2478_TI;
extern MethodInfo m19411_MI;
extern TypeInfo t44_TI;
extern MethodInfo m13915_MI;
extern MethodInfo m13910_MI;
extern TypeInfo t44_TI;
extern MethodInfo m13912_MI;
static void* t2476_RGCTXData[8] = 
{
	(void*)&t2478_0_0_0,
	&t2478_TI,
	&m19411_MI,
	&t44_TI,
	&m13915_MI,
	&m13910_MI,
	&t44_TI,
	&m13912_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2476_0_0_0;
extern Il2CppType t2476_1_0_0;
extern TypeInfo t2477_TI;
struct t2476;
extern TypeInfo t2476_TI;
extern Il2CppGenericClass t2476_GC;
TypeInfo t2476_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t2476_MIs, NULL, t2476_FIs, NULL, &t2477_TI, NULL, NULL, &t2476_TI, NULL, t2476_VT, &EmptyCustomAttributesCache, &t2476_TI, &t2476_0_0_0, &t2476_1_0_0, NULL, &t2476_GC, NULL, NULL, NULL, t2476_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2476), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2477_TI;

#include "t2478.h"
extern TypeInfo t2477_TI;
extern TypeInfo t2478_TI;
extern TypeInfo t31_TI;
extern TypeInfo t319_TI;
extern TypeInfo t44_TI;
extern TypeInfo t25_TI;
#include "t2478MD.h"
extern Il2CppType t2478_0_0_0;
extern MethodInfo m2816_MI;
extern MethodInfo m1571_MI;
extern MethodInfo m2981_MI;
extern MethodInfo m1614_MI;
extern MethodInfo m2815_MI;
extern MethodInfo m1959_MI;
extern MethodInfo m19411_MI;
extern MethodInfo m2817_MI;
extern MethodInfo m13915_MI;
extern MethodInfo m2977_MI;
extern MethodInfo m2975_MI;
struct t553;
#define m19411(__this, p0, method) (void)m16422_gshared((t14 *)__this, (t14 *)p0, method)
extern MethodInfo m19411_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.BoxCollider2D>
extern Il2CppType t2478_0_0_1;
FieldInfo t2477_f0_FieldInfo = 
{
	"Delegate", &t2478_0_0_1, &t2477_TI, offsetof(t2477, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2477_FIs[] =
{
	&t2477_f0_FieldInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
extern Il2CppType t554_0_0_0;
static ParameterInfo t2477_m13910_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t554_0_0_0},
};
extern TypeInfo t2477_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13910_MI = 
{
	".ctor", (methodPointerType)&m7910_gshared, &t2477_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t14, t2477_m13910_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2478_0_0_0;
static ParameterInfo t2477_m13911_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t2478_0_0_0},
};
extern TypeInfo t2477_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13911_MI = 
{
	".ctor", (methodPointerType)&m7911_gshared, &t2477_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2477_m13911_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t40_0_0_0;
static ParameterInfo t2477_m13912_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t40_0_0_0},
};
extern TypeInfo t2477_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13912_MI = 
{
	"Invoke", (methodPointerType)&m7912_gshared, &t2477_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2477_m13912_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t554_0_0_0;
static ParameterInfo t2477_m13913_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t554_0_0_0},
};
extern TypeInfo t2477_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13913_MI = 
{
	"Find", (methodPointerType)&m7913_gshared, &t2477_TI, &t26_0_0_0, RuntimeInvoker_t26_t14_t14, t2477_m13913_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2477_MIs[] =
{
	&m13910_MI,
	&m13911_MI,
	&m13912_MI,
	&m13913_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m13912_MI;
extern MethodInfo m13913_MI;
static MethodInfo* t2477_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m13912_MI,
	&m13913_MI,
};
extern Il2CppType t2478_0_0_0;
extern TypeInfo t2478_TI;
extern MethodInfo m19411_MI;
extern TypeInfo t44_TI;
extern MethodInfo m13915_MI;
static void* t2477_RGCTXData[5] = 
{
	(void*)&t2478_0_0_0,
	&t2478_TI,
	&m19411_MI,
	&t44_TI,
	&m13915_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2477_0_0_0;
extern Il2CppType t2477_1_0_0;
extern TypeInfo t553_TI;
struct t2477;
extern TypeInfo t2477_TI;
extern Il2CppGenericClass t2477_GC;
TypeInfo t2477_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2477_MIs, NULL, t2477_FIs, NULL, &t553_TI, NULL, NULL, &t2477_TI, NULL, t2477_VT, &EmptyCustomAttributesCache, &t2477_TI, &t2477_0_0_0, &t2477_1_0_0, NULL, &t2477_GC, NULL, NULL, NULL, t2477_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2477), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2478_TI;



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.BoxCollider2D>
extern Il2CppType t14_0_0_0;
extern Il2CppType t77_0_0_0;
static ParameterInfo t2478_m13914_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t77_0_0_0},
};
extern TypeInfo t2478_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t77 (MethodInfo* method, void* obj, void** args);
MethodInfo m13914_MI = 
{
	".ctor", (methodPointerType)&m7914_gshared, &t2478_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t77, t2478_m13914_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t44_0_0_0;
static ParameterInfo t2478_m13915_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t44_0_0_0},
};
extern TypeInfo t2478_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13915_MI = 
{
	"Invoke", (methodPointerType)&m7915_gshared, &t2478_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2478_m13915_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t44_0_0_0;
extern Il2CppType t76_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t2478_m13916_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t44_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t76_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2478_TI;
extern Il2CppType t75_0_0_0;
extern void* RuntimeInvoker_t14_t14_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13916_MI = 
{
	"BeginInvoke", (methodPointerType)&m7916_gshared, &t2478_TI, &t75_0_0_0, RuntimeInvoker_t14_t14_t14_t14, t2478_m13916_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t75_0_0_0;
static ParameterInfo t2478_m13917_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t75_0_0_0},
};
extern TypeInfo t2478_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13917_MI = 
{
	"EndInvoke", (methodPointerType)&m7917_gshared, &t2478_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2478_m13917_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2478_MIs[] =
{
	&m13914_MI,
	&m13915_MI,
	&m13916_MI,
	&m13917_MI,
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
extern MethodInfo m13915_MI;
extern MethodInfo m13916_MI;
extern MethodInfo m13917_MI;
static MethodInfo* t2478_VT[] =
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
	&m13915_MI,
	&m13916_MI,
	&m13917_MI,
};
extern TypeInfo t374_TI;
extern TypeInfo t375_TI;
static Il2CppInterfaceOffsetPair t2478_IOs[] = 
{
	{ &t374_TI, 4},
	{ &t375_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2478_0_0_0;
extern Il2CppType t2478_1_0_0;
extern TypeInfo t211_TI;
struct t2478;
extern TypeInfo t2478_TI;
extern Il2CppGenericClass t2478_GC;
TypeInfo t2478_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t2478_MIs, NULL, NULL, NULL, &t211_TI, NULL, NULL, &t2478_TI, NULL, t2478_VT, &EmptyCustomAttributesCache, &t2478_TI, &t2478_0_0_0, &t2478_1_0_0, t2478_IOs, &t2478_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2478), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3482_TI;

#include "t508.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.AudioClip>
extern MethodInfo m25761_MI;
static PropertyInfo t3482____Current_PropertyInfo = 
{
	&t3482_TI, "Current", &m25761_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3482_PIs[] =
{
	&t3482____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3482_TI;
extern Il2CppType t508_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25761_MI = 
{
	"get_Current", NULL, &t3482_TI, &t508_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3482_MIs[] =
{
	&m25761_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t3482_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3482_0_0_0;
extern Il2CppType t3482_1_0_0;
struct t3482;
extern TypeInfo t3482_TI;
extern Il2CppGenericClass t3482_GC;
TypeInfo t3482_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3482_MIs, t3482_PIs, NULL, NULL, NULL, NULL, NULL, &t3482_TI, t3482_ITIs, NULL, &EmptyCustomAttributesCache, &t3482_TI, &t3482_0_0_0, &t3482_1_0_0, NULL, &t3482_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2479.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2479_TI;
#include "t2479MD.h"

extern TypeInfo t2479_TI;
extern TypeInfo t508_TI;
extern TypeInfo t1278_TI;
extern MethodInfo m13922_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m19413_MI;
struct t24;
#define m19413(__this, p0, method) (t508 *)m16357_gshared((t24 *)__this, (int32_t)p0, method)
extern MethodInfo m19413_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.AudioClip>
extern Il2CppType t24_0_0_1;
FieldInfo t2479_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t2479_TI, offsetof(t2479, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t2479_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t2479_TI, offsetof(t2479, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t2479_FIs[] =
{
	&t2479_f0_FieldInfo,
	&t2479_f1_FieldInfo,
	NULL
};
extern MethodInfo m13919_MI;
static PropertyInfo t2479____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2479_TI, "System.Collections.IEnumerator.Current", &m13919_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13922_MI;
static PropertyInfo t2479____Current_PropertyInfo = 
{
	&t2479_TI, "Current", &m13922_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2479_PIs[] =
{
	&t2479____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2479____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t2479_m13918_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t2479_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13918_MI = 
{
	".ctor", (methodPointerType)&m7877_gshared, &t2479_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2479_m13918_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2479_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13919_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7879_gshared, &t2479_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2479_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13920_MI = 
{
	"Dispose", (methodPointerType)&m7881_gshared, &t2479_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2479_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m13921_MI = 
{
	"MoveNext", (methodPointerType)&m7883_gshared, &t2479_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2479_TI;
extern Il2CppType t508_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13922_MI = 
{
	"get_Current", (methodPointerType)&m7885_gshared, &t2479_TI, &t508_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2479_MIs[] =
{
	&m13918_MI,
	&m13919_MI,
	&m13920_MI,
	&m13921_MI,
	&m13922_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m13919_MI;
extern MethodInfo m13921_MI;
extern MethodInfo m13920_MI;
extern MethodInfo m13922_MI;
static MethodInfo* t2479_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m13919_MI,
	&m13921_MI,
	&m13920_MI,
	&m13922_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3482_TI;
static TypeInfo* t2479_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t3482_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3482_TI;
static Il2CppInterfaceOffsetPair t2479_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t3482_TI, 7},
};
extern MethodInfo m13922_MI;
extern TypeInfo t508_TI;
extern MethodInfo m19413_MI;
static void* t2479_RGCTXData[3] = 
{
	&m13922_MI,
	&t508_TI,
	&m19413_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2479_0_0_0;
extern Il2CppType t2479_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t2479_TI;
extern Il2CppGenericClass t2479_GC;
extern TypeInfo t24_TI;
TypeInfo t2479_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2479_MIs, t2479_PIs, t2479_FIs, NULL, &t122_TI, NULL, &t24_TI, &t2479_TI, t2479_ITIs, t2479_VT, &EmptyCustomAttributesCache, &t2479_TI, &t2479_0_0_0, &t2479_1_0_0, t2479_IOs, &t2479_GC, NULL, NULL, NULL, t2479_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2479)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4365_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.AudioClip>
extern MethodInfo m25762_MI;
static PropertyInfo t4365____Count_PropertyInfo = 
{
	&t4365_TI, "Count", &m25762_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m25763_MI;
static PropertyInfo t4365____IsReadOnly_PropertyInfo = 
{
	&t4365_TI, "IsReadOnly", &m25763_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4365_PIs[] =
{
	&t4365____Count_PropertyInfo,
	&t4365____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4365_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25762_MI = 
{
	"get_Count", NULL, &t4365_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4365_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m25763_MI = 
{
	"get_IsReadOnly", NULL, &t4365_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t508_0_0_0;
static ParameterInfo t4365_m25764_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t508_0_0_0},
};
extern TypeInfo t4365_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25764_MI = 
{
	"Add", NULL, &t4365_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t4365_m25764_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4365_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m25765_MI = 
{
	"Clear", NULL, &t4365_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t508_0_0_0;
static ParameterInfo t4365_m25766_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t508_0_0_0},
};
extern TypeInfo t4365_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25766_MI = 
{
	"Contains", NULL, &t4365_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t4365_m25766_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3123_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t4365_m25767_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3123_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4365_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25767_MI = 
{
	"CopyTo", NULL, &t4365_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t4365_m25767_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t508_0_0_0;
static ParameterInfo t4365_m25768_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t508_0_0_0},
};
extern TypeInfo t4365_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25768_MI = 
{
	"Remove", NULL, &t4365_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t4365_m25768_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4365_MIs[] =
{
	&m25762_MI,
	&m25763_MI,
	&m25764_MI,
	&m25765_MI,
	&m25766_MI,
	&m25767_MI,
	&m25768_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4367_TI;
static TypeInfo* t4365_ITIs[] = 
{
	&t600_TI,
	&t4367_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4365_0_0_0;
extern Il2CppType t4365_1_0_0;
struct t4365;
extern TypeInfo t4365_TI;
extern Il2CppGenericClass t4365_GC;
TypeInfo t4365_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4365_MIs, t4365_PIs, NULL, NULL, NULL, NULL, NULL, &t4365_TI, t4365_ITIs, NULL, &EmptyCustomAttributesCache, &t4365_TI, &t4365_0_0_0, &t4365_1_0_0, NULL, &t4365_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4367_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.AudioClip>
extern TypeInfo t4367_TI;
extern Il2CppType t3482_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25769_MI = 
{
	"GetEnumerator", NULL, &t4367_TI, &t3482_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4367_MIs[] =
{
	&m25769_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t4367_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4367_0_0_0;
extern Il2CppType t4367_1_0_0;
struct t4367;
extern TypeInfo t4367_TI;
extern Il2CppGenericClass t4367_GC;
TypeInfo t4367_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4367_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4367_TI, t4367_ITIs, NULL, &EmptyCustomAttributesCache, &t4367_TI, &t4367_0_0_0, &t4367_1_0_0, NULL, &t4367_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4366_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.AudioClip>
extern MethodInfo m25770_MI;
extern MethodInfo m25771_MI;
static PropertyInfo t4366____Item_PropertyInfo = 
{
	&t4366_TI, "Item", &m25770_MI, &m25771_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4366_PIs[] =
{
	&t4366____Item_PropertyInfo,
	NULL
};
extern Il2CppType t508_0_0_0;
static ParameterInfo t4366_m25772_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t508_0_0_0},
};
extern TypeInfo t4366_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25772_MI = 
{
	"IndexOf", NULL, &t4366_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t4366_m25772_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t508_0_0_0;
static ParameterInfo t4366_m25773_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t508_0_0_0},
};
extern TypeInfo t4366_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25773_MI = 
{
	"Insert", NULL, &t4366_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t4366_m25773_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4366_m25774_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4366_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25774_MI = 
{
	"RemoveAt", NULL, &t4366_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t4366_m25774_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4366_m25770_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4366_TI;
extern Il2CppType t508_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25770_MI = 
{
	"get_Item", NULL, &t4366_TI, &t508_0_0_0, RuntimeInvoker_t14_t35, t4366_m25770_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t508_0_0_0;
static ParameterInfo t4366_m25771_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t508_0_0_0},
};
extern TypeInfo t4366_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25771_MI = 
{
	"set_Item", NULL, &t4366_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t4366_m25771_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4366_MIs[] =
{
	&m25772_MI,
	&m25773_MI,
	&m25774_MI,
	&m25770_MI,
	&m25771_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4365_TI;
extern TypeInfo t4367_TI;
static TypeInfo* t4366_ITIs[] = 
{
	&t600_TI,
	&t4365_TI,
	&t4367_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4366_0_0_0;
extern Il2CppType t4366_1_0_0;
struct t4366;
extern TypeInfo t4366_TI;
extern Il2CppGenericClass t4366_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t4366_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4366_MIs, t4366_PIs, NULL, NULL, NULL, NULL, NULL, &t4366_TI, t4366_ITIs, NULL, &t1409__CustomAttributeCache, &t4366_TI, &t4366_0_0_0, &t4366_1_0_0, NULL, &t4366_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t2480.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2480_TI;
#include "t2480MD.h"

#include "t2481.h"
extern TypeInfo t40_TI;
extern TypeInfo t14_TI;
extern TypeInfo t2480_TI;
extern TypeInfo t508_TI;
extern TypeInfo t2481_TI;
extern TypeInfo t25_TI;
#include "t2481MD.h"
extern MethodInfo m13925_MI;
extern MethodInfo m13927_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.AudioClip>
extern Il2CppType t40_0_0_33;
FieldInfo t2480_f1_FieldInfo = 
{
	"m_Arg1", &t40_0_0_33, &t2480_TI, offsetof(t2480, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2480_FIs[] =
{
	&t2480_f1_FieldInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
extern Il2CppType t554_0_0_0;
extern Il2CppType t508_0_0_0;
static ParameterInfo t2480_m13923_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t554_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t508_0_0_0},
};
extern TypeInfo t2480_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13923_MI = 
{
	".ctor", (methodPointerType)&m7907_gshared, &t2480_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t14_t14, t2480_m13923_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t40_0_0_0;
static ParameterInfo t2480_m13924_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t40_0_0_0},
};
extern TypeInfo t2480_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13924_MI = 
{
	"Invoke", (methodPointerType)&m7909_gshared, &t2480_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2480_m13924_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2480_MIs[] =
{
	&m13923_MI,
	&m13924_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m13924_MI;
extern MethodInfo m13928_MI;
static MethodInfo* t2480_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m13924_MI,
	&m13928_MI,
};
extern Il2CppType t2482_0_0_0;
extern TypeInfo t2482_TI;
extern MethodInfo m19423_MI;
extern TypeInfo t508_TI;
extern MethodInfo m13930_MI;
extern MethodInfo m13925_MI;
extern TypeInfo t508_TI;
extern MethodInfo m13927_MI;
static void* t2480_RGCTXData[8] = 
{
	(void*)&t2482_0_0_0,
	&t2482_TI,
	&m19423_MI,
	&t508_TI,
	&m13930_MI,
	&m13925_MI,
	&t508_TI,
	&m13927_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2480_0_0_0;
extern Il2CppType t2480_1_0_0;
extern TypeInfo t2481_TI;
struct t2480;
extern TypeInfo t2480_TI;
extern Il2CppGenericClass t2480_GC;
TypeInfo t2480_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t2480_MIs, NULL, t2480_FIs, NULL, &t2481_TI, NULL, NULL, &t2480_TI, NULL, t2480_VT, &EmptyCustomAttributesCache, &t2480_TI, &t2480_0_0_0, &t2480_1_0_0, NULL, &t2480_GC, NULL, NULL, NULL, t2480_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2480), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2481_TI;

#include "t2482.h"
extern TypeInfo t2481_TI;
extern TypeInfo t2482_TI;
extern TypeInfo t31_TI;
extern TypeInfo t319_TI;
extern TypeInfo t508_TI;
extern TypeInfo t25_TI;
#include "t2482MD.h"
extern Il2CppType t2482_0_0_0;
extern MethodInfo m2816_MI;
extern MethodInfo m1571_MI;
extern MethodInfo m2981_MI;
extern MethodInfo m1614_MI;
extern MethodInfo m2815_MI;
extern MethodInfo m1959_MI;
extern MethodInfo m19423_MI;
extern MethodInfo m2817_MI;
extern MethodInfo m13930_MI;
extern MethodInfo m2977_MI;
extern MethodInfo m2975_MI;
struct t553;
#define m19423(__this, p0, method) (void)m16422_gshared((t14 *)__this, (t14 *)p0, method)
extern MethodInfo m19423_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.AudioClip>
extern Il2CppType t2482_0_0_1;
FieldInfo t2481_f0_FieldInfo = 
{
	"Delegate", &t2482_0_0_1, &t2481_TI, offsetof(t2481, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2481_FIs[] =
{
	&t2481_f0_FieldInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
extern Il2CppType t554_0_0_0;
static ParameterInfo t2481_m13925_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t554_0_0_0},
};
extern TypeInfo t2481_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13925_MI = 
{
	".ctor", (methodPointerType)&m7910_gshared, &t2481_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t14, t2481_m13925_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2482_0_0_0;
static ParameterInfo t2481_m13926_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t2482_0_0_0},
};
extern TypeInfo t2481_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13926_MI = 
{
	".ctor", (methodPointerType)&m7911_gshared, &t2481_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2481_m13926_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t40_0_0_0;
static ParameterInfo t2481_m13927_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t40_0_0_0},
};
extern TypeInfo t2481_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13927_MI = 
{
	"Invoke", (methodPointerType)&m7912_gshared, &t2481_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2481_m13927_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t554_0_0_0;
static ParameterInfo t2481_m13928_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t554_0_0_0},
};
extern TypeInfo t2481_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13928_MI = 
{
	"Find", (methodPointerType)&m7913_gshared, &t2481_TI, &t26_0_0_0, RuntimeInvoker_t26_t14_t14, t2481_m13928_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2481_MIs[] =
{
	&m13925_MI,
	&m13926_MI,
	&m13927_MI,
	&m13928_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m13927_MI;
extern MethodInfo m13928_MI;
static MethodInfo* t2481_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m13927_MI,
	&m13928_MI,
};
extern Il2CppType t2482_0_0_0;
extern TypeInfo t2482_TI;
extern MethodInfo m19423_MI;
extern TypeInfo t508_TI;
extern MethodInfo m13930_MI;
static void* t2481_RGCTXData[5] = 
{
	(void*)&t2482_0_0_0,
	&t2482_TI,
	&m19423_MI,
	&t508_TI,
	&m13930_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2481_0_0_0;
extern Il2CppType t2481_1_0_0;
extern TypeInfo t553_TI;
struct t2481;
extern TypeInfo t2481_TI;
extern Il2CppGenericClass t2481_GC;
TypeInfo t2481_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2481_MIs, NULL, t2481_FIs, NULL, &t553_TI, NULL, NULL, &t2481_TI, NULL, t2481_VT, &EmptyCustomAttributesCache, &t2481_TI, &t2481_0_0_0, &t2481_1_0_0, NULL, &t2481_GC, NULL, NULL, NULL, t2481_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2481), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2482_TI;



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.AudioClip>
extern Il2CppType t14_0_0_0;
extern Il2CppType t77_0_0_0;
static ParameterInfo t2482_m13929_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t77_0_0_0},
};
extern TypeInfo t2482_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t77 (MethodInfo* method, void* obj, void** args);
MethodInfo m13929_MI = 
{
	".ctor", (methodPointerType)&m7914_gshared, &t2482_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t77, t2482_m13929_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t508_0_0_0;
static ParameterInfo t2482_m13930_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t508_0_0_0},
};
extern TypeInfo t2482_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13930_MI = 
{
	"Invoke", (methodPointerType)&m7915_gshared, &t2482_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2482_m13930_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t508_0_0_0;
extern Il2CppType t76_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t2482_m13931_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t508_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t76_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2482_TI;
extern Il2CppType t75_0_0_0;
extern void* RuntimeInvoker_t14_t14_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13931_MI = 
{
	"BeginInvoke", (methodPointerType)&m7916_gshared, &t2482_TI, &t75_0_0_0, RuntimeInvoker_t14_t14_t14_t14, t2482_m13931_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t75_0_0_0;
static ParameterInfo t2482_m13932_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t75_0_0_0},
};
extern TypeInfo t2482_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13932_MI = 
{
	"EndInvoke", (methodPointerType)&m7917_gshared, &t2482_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2482_m13932_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2482_MIs[] =
{
	&m13929_MI,
	&m13930_MI,
	&m13931_MI,
	&m13932_MI,
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
extern MethodInfo m13930_MI;
extern MethodInfo m13931_MI;
extern MethodInfo m13932_MI;
static MethodInfo* t2482_VT[] =
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
	&m13930_MI,
	&m13931_MI,
	&m13932_MI,
};
extern TypeInfo t374_TI;
extern TypeInfo t375_TI;
static Il2CppInterfaceOffsetPair t2482_IOs[] = 
{
	{ &t374_TI, 4},
	{ &t375_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2482_0_0_0;
extern Il2CppType t2482_1_0_0;
extern TypeInfo t211_TI;
struct t2482;
extern TypeInfo t2482_TI;
extern Il2CppGenericClass t2482_GC;
TypeInfo t2482_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t2482_MIs, NULL, NULL, NULL, &t211_TI, NULL, NULL, &t2482_TI, NULL, t2482_VT, &EmptyCustomAttributesCache, &t2482_TI, &t2482_0_0_0, &t2482_1_0_0, t2482_IOs, &t2482_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2482), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3483_TI;

#include "t28.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Single>
extern MethodInfo m25775_MI;
static PropertyInfo t3483____Current_PropertyInfo = 
{
	&t3483_TI, "Current", &m25775_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3483_PIs[] =
{
	&t3483____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3483_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25775_MI = 
{
	"get_Current", NULL, &t3483_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3483_MIs[] =
{
	&m25775_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t3483_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3483_0_0_0;
extern Il2CppType t3483_1_0_0;
struct t3483;
extern TypeInfo t3483_TI;
extern Il2CppGenericClass t3483_GC;
TypeInfo t3483_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3483_MIs, t3483_PIs, NULL, NULL, NULL, NULL, NULL, &t3483_TI, t3483_ITIs, NULL, &EmptyCustomAttributesCache, &t3483_TI, &t3483_0_0_0, &t3483_1_0_0, NULL, &t3483_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2483.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2483_TI;
#include "t2483MD.h"

extern TypeInfo t2483_TI;
extern TypeInfo t28_TI;
extern TypeInfo t1278_TI;
extern MethodInfo m13937_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m19425_MI;
struct t24;
 float m19425 (t24 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m19425_MI;


extern MethodInfo m13933_MI;
 void m13933 (t2483 * __this, t24 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m13934_MI;
 t14 * m13934 (t2483 * __this, MethodInfo* method){
	{
		float L_0 = m13937(__this, &m13937_MI);
		float L_1 = L_0;
		t14 * L_2 = Box(InitializedTypeInfo(&t28_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m13935_MI;
 void m13935 (t2483 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m13936_MI;
 bool m13936 (t2483 * __this, MethodInfo* method){
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
extern MethodInfo m13937_MI;
 float m13937 (t2483 * __this, MethodInfo* method){
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
		float L_8 = m19425(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m19425_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Single>
extern Il2CppType t24_0_0_1;
FieldInfo t2483_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t2483_TI, offsetof(t2483, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t2483_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t2483_TI, offsetof(t2483, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t2483_FIs[] =
{
	&t2483_f0_FieldInfo,
	&t2483_f1_FieldInfo,
	NULL
};
extern MethodInfo m13934_MI;
static PropertyInfo t2483____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2483_TI, "System.Collections.IEnumerator.Current", &m13934_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13937_MI;
static PropertyInfo t2483____Current_PropertyInfo = 
{
	&t2483_TI, "Current", &m13937_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2483_PIs[] =
{
	&t2483____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2483____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t2483_m13933_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t2483_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13933_MI = 
{
	".ctor", (methodPointerType)&m13933, &t2483_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2483_m13933_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2483_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13934_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m13934, &t2483_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2483_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13935_MI = 
{
	"Dispose", (methodPointerType)&m13935, &t2483_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2483_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m13936_MI = 
{
	"MoveNext", (methodPointerType)&m13936, &t2483_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2483_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m13937_MI = 
{
	"get_Current", (methodPointerType)&m13937, &t2483_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2483_MIs[] =
{
	&m13933_MI,
	&m13934_MI,
	&m13935_MI,
	&m13936_MI,
	&m13937_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m13934_MI;
extern MethodInfo m13936_MI;
extern MethodInfo m13935_MI;
extern MethodInfo m13937_MI;
static MethodInfo* t2483_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m13934_MI,
	&m13936_MI,
	&m13935_MI,
	&m13937_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3483_TI;
static TypeInfo* t2483_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t3483_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3483_TI;
static Il2CppInterfaceOffsetPair t2483_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t3483_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2483_0_0_0;
extern Il2CppType t2483_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t2483_TI;
extern Il2CppGenericClass t2483_GC;
extern TypeInfo t24_TI;
TypeInfo t2483_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2483_MIs, t2483_PIs, t2483_FIs, NULL, &t122_TI, NULL, &t24_TI, &t2483_TI, t2483_ITIs, t2483_VT, &EmptyCustomAttributesCache, &t2483_TI, &t2483_0_0_0, &t2483_1_0_0, t2483_IOs, &t2483_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2483)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4368_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Single>
extern MethodInfo m25776_MI;
static PropertyInfo t4368____Count_PropertyInfo = 
{
	&t4368_TI, "Count", &m25776_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m25777_MI;
static PropertyInfo t4368____IsReadOnly_PropertyInfo = 
{
	&t4368_TI, "IsReadOnly", &m25777_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4368_PIs[] =
{
	&t4368____Count_PropertyInfo,
	&t4368____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4368_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25776_MI = 
{
	"get_Count", NULL, &t4368_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4368_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m25777_MI = 
{
	"get_IsReadOnly", NULL, &t4368_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
static ParameterInfo t4368_m25778_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t4368_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25778_MI = 
{
	"Add", NULL, &t4368_TI, &t25_0_0_0, RuntimeInvoker_t25_t28, t4368_m25778_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4368_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m25779_MI = 
{
	"Clear", NULL, &t4368_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
static ParameterInfo t4368_m25780_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t4368_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25780_MI = 
{
	"Contains", NULL, &t4368_TI, &t26_0_0_0, RuntimeInvoker_t26_t28, t4368_m25780_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t506_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t4368_m25781_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t506_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4368_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25781_MI = 
{
	"CopyTo", NULL, &t4368_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t4368_m25781_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
static ParameterInfo t4368_m25782_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t4368_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25782_MI = 
{
	"Remove", NULL, &t4368_TI, &t26_0_0_0, RuntimeInvoker_t26_t28, t4368_m25782_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4368_MIs[] =
{
	&m25776_MI,
	&m25777_MI,
	&m25778_MI,
	&m25779_MI,
	&m25780_MI,
	&m25781_MI,
	&m25782_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4370_TI;
static TypeInfo* t4368_ITIs[] = 
{
	&t600_TI,
	&t4370_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4368_0_0_0;
extern Il2CppType t4368_1_0_0;
struct t4368;
extern TypeInfo t4368_TI;
extern Il2CppGenericClass t4368_GC;
TypeInfo t4368_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4368_MIs, t4368_PIs, NULL, NULL, NULL, NULL, NULL, &t4368_TI, t4368_ITIs, NULL, &EmptyCustomAttributesCache, &t4368_TI, &t4368_0_0_0, &t4368_1_0_0, NULL, &t4368_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4370_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Single>
extern TypeInfo t4370_TI;
extern Il2CppType t3483_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25783_MI = 
{
	"GetEnumerator", NULL, &t4370_TI, &t3483_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4370_MIs[] =
{
	&m25783_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t4370_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4370_0_0_0;
extern Il2CppType t4370_1_0_0;
struct t4370;
extern TypeInfo t4370_TI;
extern Il2CppGenericClass t4370_GC;
TypeInfo t4370_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4370_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4370_TI, t4370_ITIs, NULL, &EmptyCustomAttributesCache, &t4370_TI, &t4370_0_0_0, &t4370_1_0_0, NULL, &t4370_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4369_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Single>
extern MethodInfo m25784_MI;
extern MethodInfo m25785_MI;
static PropertyInfo t4369____Item_PropertyInfo = 
{
	&t4369_TI, "Item", &m25784_MI, &m25785_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4369_PIs[] =
{
	&t4369____Item_PropertyInfo,
	NULL
};
extern Il2CppType t28_0_0_0;
static ParameterInfo t4369_m25786_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t4369_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25786_MI = 
{
	"IndexOf", NULL, &t4369_TI, &t35_0_0_0, RuntimeInvoker_t35_t28, t4369_m25786_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t4369_m25787_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t4369_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25787_MI = 
{
	"Insert", NULL, &t4369_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t28, t4369_m25787_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4369_m25788_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4369_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25788_MI = 
{
	"RemoveAt", NULL, &t4369_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t4369_m25788_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4369_m25784_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4369_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25784_MI = 
{
	"get_Item", NULL, &t4369_TI, &t28_0_0_0, RuntimeInvoker_t28_t35, t4369_m25784_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t4369_m25785_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t4369_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25785_MI = 
{
	"set_Item", NULL, &t4369_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t28, t4369_m25785_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4369_MIs[] =
{
	&m25786_MI,
	&m25787_MI,
	&m25788_MI,
	&m25784_MI,
	&m25785_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4368_TI;
extern TypeInfo t4370_TI;
static TypeInfo* t4369_ITIs[] = 
{
	&t600_TI,
	&t4368_TI,
	&t4370_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4369_0_0_0;
extern Il2CppType t4369_1_0_0;
struct t4369;
extern TypeInfo t4369_TI;
extern Il2CppGenericClass t4369_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t4369_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4369_MIs, t4369_PIs, NULL, NULL, NULL, NULL, NULL, &t4369_TI, t4369_ITIs, NULL, &t1409__CustomAttributeCache, &t4369_TI, &t4369_0_0_0, &t4369_1_0_0, NULL, &t4369_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4371_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IComparable`1<System.Single>>
extern MethodInfo m25789_MI;
static PropertyInfo t4371____Count_PropertyInfo = 
{
	&t4371_TI, "Count", &m25789_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m25790_MI;
static PropertyInfo t4371____IsReadOnly_PropertyInfo = 
{
	&t4371_TI, "IsReadOnly", &m25790_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4371_PIs[] =
{
	&t4371____Count_PropertyInfo,
	&t4371____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4371_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25789_MI = 
{
	"get_Count", NULL, &t4371_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4371_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m25790_MI = 
{
	"get_IsReadOnly", NULL, &t4371_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1379_0_0_0;
static ParameterInfo t4371_m25791_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1379_0_0_0},
};
extern TypeInfo t4371_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25791_MI = 
{
	"Add", NULL, &t4371_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t4371_m25791_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4371_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m25792_MI = 
{
	"Clear", NULL, &t4371_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1379_0_0_0;
static ParameterInfo t4371_m25793_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1379_0_0_0},
};
extern TypeInfo t4371_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25793_MI = 
{
	"Contains", NULL, &t4371_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t4371_m25793_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2911_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t4371_m25794_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2911_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4371_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25794_MI = 
{
	"CopyTo", NULL, &t4371_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t4371_m25794_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1379_0_0_0;
static ParameterInfo t4371_m25795_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1379_0_0_0},
};
extern TypeInfo t4371_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25795_MI = 
{
	"Remove", NULL, &t4371_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t4371_m25795_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4371_MIs[] =
{
	&m25789_MI,
	&m25790_MI,
	&m25791_MI,
	&m25792_MI,
	&m25793_MI,
	&m25794_MI,
	&m25795_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4373_TI;
static TypeInfo* t4371_ITIs[] = 
{
	&t600_TI,
	&t4373_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4371_0_0_0;
extern Il2CppType t4371_1_0_0;
struct t4371;
extern TypeInfo t4371_TI;
extern Il2CppGenericClass t4371_GC;
TypeInfo t4371_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4371_MIs, t4371_PIs, NULL, NULL, NULL, NULL, NULL, &t4371_TI, t4371_ITIs, NULL, &EmptyCustomAttributesCache, &t4371_TI, &t4371_0_0_0, &t4371_1_0_0, NULL, &t4371_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4373_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.Single>>
extern TypeInfo t4373_TI;
extern Il2CppType t3484_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25796_MI = 
{
	"GetEnumerator", NULL, &t4373_TI, &t3484_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4373_MIs[] =
{
	&m25796_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t4373_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4373_0_0_0;
extern Il2CppType t4373_1_0_0;
struct t4373;
extern TypeInfo t4373_TI;
extern Il2CppGenericClass t4373_GC;
TypeInfo t4373_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4373_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4373_TI, t4373_ITIs, NULL, &EmptyCustomAttributesCache, &t4373_TI, &t4373_0_0_0, &t4373_1_0_0, NULL, &t4373_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3484_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.Single>>
extern MethodInfo m25797_MI;
static PropertyInfo t3484____Current_PropertyInfo = 
{
	&t3484_TI, "Current", &m25797_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3484_PIs[] =
{
	&t3484____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3484_TI;
extern Il2CppType t1379_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25797_MI = 
{
	"get_Current", NULL, &t3484_TI, &t1379_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3484_MIs[] =
{
	&m25797_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t3484_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3484_0_0_0;
extern Il2CppType t3484_1_0_0;
struct t3484;
extern TypeInfo t3484_TI;
extern Il2CppGenericClass t3484_GC;
TypeInfo t3484_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3484_MIs, t3484_PIs, NULL, NULL, NULL, NULL, NULL, &t3484_TI, t3484_ITIs, NULL, &EmptyCustomAttributesCache, &t3484_TI, &t3484_0_0_0, &t3484_1_0_0, NULL, &t3484_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1379_TI;



// Metadata Definition System.IComparable`1<System.Single>
extern Il2CppType t28_0_0_0;
static ParameterInfo t1379_m25798_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t1379_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25798_MI = 
{
	"CompareTo", NULL, &t1379_TI, &t35_0_0_0, RuntimeInvoker_t35_t28, t1379_m25798_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1379_MIs[] =
{
	&m25798_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1379_0_0_0;
extern Il2CppType t1379_1_0_0;
struct t1379;
extern TypeInfo t1379_TI;
extern Il2CppGenericClass t1379_GC;
TypeInfo t1379_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t1379_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1379_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1379_TI, &t1379_0_0_0, &t1379_1_0_0, NULL, &t1379_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t2484.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2484_TI;
#include "t2484MD.h"

extern TypeInfo t2484_TI;
extern TypeInfo t1379_TI;
extern TypeInfo t1278_TI;
extern MethodInfo m13942_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m19436_MI;
struct t24;
#define m19436(__this, p0, method) (t14*)m16357_gshared((t24 *)__this, (int32_t)p0, method)
extern MethodInfo m19436_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.IComparable`1<System.Single>>
extern Il2CppType t24_0_0_1;
FieldInfo t2484_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t2484_TI, offsetof(t2484, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t2484_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t2484_TI, offsetof(t2484, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t2484_FIs[] =
{
	&t2484_f0_FieldInfo,
	&t2484_f1_FieldInfo,
	NULL
};
extern MethodInfo m13939_MI;
static PropertyInfo t2484____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2484_TI, "System.Collections.IEnumerator.Current", &m13939_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13942_MI;
static PropertyInfo t2484____Current_PropertyInfo = 
{
	&t2484_TI, "Current", &m13942_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2484_PIs[] =
{
	&t2484____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2484____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t2484_m13938_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t2484_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13938_MI = 
{
	".ctor", (methodPointerType)&m7877_gshared, &t2484_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2484_m13938_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2484_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13939_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7879_gshared, &t2484_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2484_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13940_MI = 
{
	"Dispose", (methodPointerType)&m7881_gshared, &t2484_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2484_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m13941_MI = 
{
	"MoveNext", (methodPointerType)&m7883_gshared, &t2484_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2484_TI;
extern Il2CppType t1379_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13942_MI = 
{
	"get_Current", (methodPointerType)&m7885_gshared, &t2484_TI, &t1379_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2484_MIs[] =
{
	&m13938_MI,
	&m13939_MI,
	&m13940_MI,
	&m13941_MI,
	&m13942_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m13939_MI;
extern MethodInfo m13941_MI;
extern MethodInfo m13940_MI;
extern MethodInfo m13942_MI;
static MethodInfo* t2484_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m13939_MI,
	&m13941_MI,
	&m13940_MI,
	&m13942_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3484_TI;
static TypeInfo* t2484_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t3484_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3484_TI;
static Il2CppInterfaceOffsetPair t2484_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t3484_TI, 7},
};
extern MethodInfo m13942_MI;
extern TypeInfo t1379_TI;
extern MethodInfo m19436_MI;
static void* t2484_RGCTXData[3] = 
{
	&m13942_MI,
	&t1379_TI,
	&m19436_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2484_0_0_0;
extern Il2CppType t2484_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t2484_TI;
extern Il2CppGenericClass t2484_GC;
extern TypeInfo t24_TI;
TypeInfo t2484_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2484_MIs, t2484_PIs, t2484_FIs, NULL, &t122_TI, NULL, &t24_TI, &t2484_TI, t2484_ITIs, t2484_VT, &EmptyCustomAttributesCache, &t2484_TI, &t2484_0_0_0, &t2484_1_0_0, t2484_IOs, &t2484_GC, NULL, NULL, NULL, t2484_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2484)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4372_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IComparable`1<System.Single>>
extern MethodInfo m25799_MI;
extern MethodInfo m25800_MI;
static PropertyInfo t4372____Item_PropertyInfo = 
{
	&t4372_TI, "Item", &m25799_MI, &m25800_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4372_PIs[] =
{
	&t4372____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1379_0_0_0;
static ParameterInfo t4372_m25801_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1379_0_0_0},
};
extern TypeInfo t4372_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25801_MI = 
{
	"IndexOf", NULL, &t4372_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t4372_m25801_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1379_0_0_0;
static ParameterInfo t4372_m25802_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1379_0_0_0},
};
extern TypeInfo t4372_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25802_MI = 
{
	"Insert", NULL, &t4372_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t4372_m25802_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4372_m25803_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4372_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25803_MI = 
{
	"RemoveAt", NULL, &t4372_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t4372_m25803_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4372_m25799_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4372_TI;
extern Il2CppType t1379_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25799_MI = 
{
	"get_Item", NULL, &t4372_TI, &t1379_0_0_0, RuntimeInvoker_t14_t35, t4372_m25799_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1379_0_0_0;
static ParameterInfo t4372_m25800_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1379_0_0_0},
};
extern TypeInfo t4372_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25800_MI = 
{
	"set_Item", NULL, &t4372_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t4372_m25800_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4372_MIs[] =
{
	&m25801_MI,
	&m25802_MI,
	&m25803_MI,
	&m25799_MI,
	&m25800_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4371_TI;
extern TypeInfo t4373_TI;
static TypeInfo* t4372_ITIs[] = 
{
	&t600_TI,
	&t4371_TI,
	&t4373_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4372_0_0_0;
extern Il2CppType t4372_1_0_0;
struct t4372;
extern TypeInfo t4372_TI;
extern Il2CppGenericClass t4372_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t4372_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4372_MIs, t4372_PIs, NULL, NULL, NULL, NULL, NULL, &t4372_TI, t4372_ITIs, NULL, &t1409__CustomAttributeCache, &t4372_TI, &t4372_0_0_0, &t4372_1_0_0, NULL, &t4372_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4374_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Single>>
extern MethodInfo m25804_MI;
static PropertyInfo t4374____Count_PropertyInfo = 
{
	&t4374_TI, "Count", &m25804_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m25805_MI;
static PropertyInfo t4374____IsReadOnly_PropertyInfo = 
{
	&t4374_TI, "IsReadOnly", &m25805_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4374_PIs[] =
{
	&t4374____Count_PropertyInfo,
	&t4374____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4374_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25804_MI = 
{
	"get_Count", NULL, &t4374_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4374_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m25805_MI = 
{
	"get_IsReadOnly", NULL, &t4374_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1380_0_0_0;
static ParameterInfo t4374_m25806_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1380_0_0_0},
};
extern TypeInfo t4374_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25806_MI = 
{
	"Add", NULL, &t4374_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t4374_m25806_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4374_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m25807_MI = 
{
	"Clear", NULL, &t4374_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1380_0_0_0;
static ParameterInfo t4374_m25808_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1380_0_0_0},
};
extern TypeInfo t4374_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25808_MI = 
{
	"Contains", NULL, &t4374_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t4374_m25808_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2912_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t4374_m25809_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2912_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4374_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25809_MI = 
{
	"CopyTo", NULL, &t4374_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t4374_m25809_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1380_0_0_0;
static ParameterInfo t4374_m25810_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1380_0_0_0},
};
extern TypeInfo t4374_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25810_MI = 
{
	"Remove", NULL, &t4374_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t4374_m25810_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4374_MIs[] =
{
	&m25804_MI,
	&m25805_MI,
	&m25806_MI,
	&m25807_MI,
	&m25808_MI,
	&m25809_MI,
	&m25810_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4376_TI;
static TypeInfo* t4374_ITIs[] = 
{
	&t600_TI,
	&t4376_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4374_0_0_0;
extern Il2CppType t4374_1_0_0;
struct t4374;
extern TypeInfo t4374_TI;
extern Il2CppGenericClass t4374_GC;
TypeInfo t4374_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4374_MIs, t4374_PIs, NULL, NULL, NULL, NULL, NULL, &t4374_TI, t4374_ITIs, NULL, &EmptyCustomAttributesCache, &t4374_TI, &t4374_0_0_0, &t4374_1_0_0, NULL, &t4374_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4376_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.Single>>
extern TypeInfo t4376_TI;
extern Il2CppType t3485_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25811_MI = 
{
	"GetEnumerator", NULL, &t4376_TI, &t3485_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4376_MIs[] =
{
	&m25811_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t4376_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4376_0_0_0;
extern Il2CppType t4376_1_0_0;
struct t4376;
extern TypeInfo t4376_TI;
extern Il2CppGenericClass t4376_GC;
TypeInfo t4376_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4376_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4376_TI, t4376_ITIs, NULL, &EmptyCustomAttributesCache, &t4376_TI, &t4376_0_0_0, &t4376_1_0_0, NULL, &t4376_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3485_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.Single>>
extern MethodInfo m25812_MI;
static PropertyInfo t3485____Current_PropertyInfo = 
{
	&t3485_TI, "Current", &m25812_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3485_PIs[] =
{
	&t3485____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3485_TI;
extern Il2CppType t1380_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25812_MI = 
{
	"get_Current", NULL, &t3485_TI, &t1380_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3485_MIs[] =
{
	&m25812_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t3485_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3485_0_0_0;
extern Il2CppType t3485_1_0_0;
struct t3485;
extern TypeInfo t3485_TI;
extern Il2CppGenericClass t3485_GC;
TypeInfo t3485_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3485_MIs, t3485_PIs, NULL, NULL, NULL, NULL, NULL, &t3485_TI, t3485_ITIs, NULL, &EmptyCustomAttributesCache, &t3485_TI, &t3485_0_0_0, &t3485_1_0_0, NULL, &t3485_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1380_TI;



// Metadata Definition System.IEquatable`1<System.Single>
extern Il2CppType t28_0_0_0;
static ParameterInfo t1380_m25813_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t1380_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25813_MI = 
{
	"Equals", NULL, &t1380_TI, &t26_0_0_0, RuntimeInvoker_t26_t28, t1380_m25813_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1380_MIs[] =
{
	&m25813_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1380_0_0_0;
extern Il2CppType t1380_1_0_0;
struct t1380;
extern TypeInfo t1380_TI;
extern Il2CppGenericClass t1380_GC;
TypeInfo t1380_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t1380_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1380_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1380_TI, &t1380_0_0_0, &t1380_1_0_0, NULL, &t1380_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t2485.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2485_TI;
#include "t2485MD.h"

extern TypeInfo t2485_TI;
extern TypeInfo t1380_TI;
extern TypeInfo t1278_TI;
extern MethodInfo m13947_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m19447_MI;
struct t24;
#define m19447(__this, p0, method) (t14*)m16357_gshared((t24 *)__this, (int32_t)p0, method)
extern MethodInfo m19447_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.IEquatable`1<System.Single>>
extern Il2CppType t24_0_0_1;
FieldInfo t2485_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t2485_TI, offsetof(t2485, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t2485_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t2485_TI, offsetof(t2485, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t2485_FIs[] =
{
	&t2485_f0_FieldInfo,
	&t2485_f1_FieldInfo,
	NULL
};
extern MethodInfo m13944_MI;
static PropertyInfo t2485____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2485_TI, "System.Collections.IEnumerator.Current", &m13944_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13947_MI;
static PropertyInfo t2485____Current_PropertyInfo = 
{
	&t2485_TI, "Current", &m13947_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2485_PIs[] =
{
	&t2485____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2485____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t2485_m13943_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t2485_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13943_MI = 
{
	".ctor", (methodPointerType)&m7877_gshared, &t2485_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2485_m13943_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2485_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13944_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7879_gshared, &t2485_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2485_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13945_MI = 
{
	"Dispose", (methodPointerType)&m7881_gshared, &t2485_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2485_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m13946_MI = 
{
	"MoveNext", (methodPointerType)&m7883_gshared, &t2485_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2485_TI;
extern Il2CppType t1380_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13947_MI = 
{
	"get_Current", (methodPointerType)&m7885_gshared, &t2485_TI, &t1380_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2485_MIs[] =
{
	&m13943_MI,
	&m13944_MI,
	&m13945_MI,
	&m13946_MI,
	&m13947_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m13944_MI;
extern MethodInfo m13946_MI;
extern MethodInfo m13945_MI;
extern MethodInfo m13947_MI;
static MethodInfo* t2485_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m13944_MI,
	&m13946_MI,
	&m13945_MI,
	&m13947_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3485_TI;
static TypeInfo* t2485_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t3485_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3485_TI;
static Il2CppInterfaceOffsetPair t2485_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t3485_TI, 7},
};
extern MethodInfo m13947_MI;
extern TypeInfo t1380_TI;
extern MethodInfo m19447_MI;
static void* t2485_RGCTXData[3] = 
{
	&m13947_MI,
	&t1380_TI,
	&m19447_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2485_0_0_0;
extern Il2CppType t2485_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t2485_TI;
extern Il2CppGenericClass t2485_GC;
extern TypeInfo t24_TI;
TypeInfo t2485_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2485_MIs, t2485_PIs, t2485_FIs, NULL, &t122_TI, NULL, &t24_TI, &t2485_TI, t2485_ITIs, t2485_VT, &EmptyCustomAttributesCache, &t2485_TI, &t2485_0_0_0, &t2485_1_0_0, t2485_IOs, &t2485_GC, NULL, NULL, NULL, t2485_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2485)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4375_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IEquatable`1<System.Single>>
extern MethodInfo m25814_MI;
extern MethodInfo m25815_MI;
static PropertyInfo t4375____Item_PropertyInfo = 
{
	&t4375_TI, "Item", &m25814_MI, &m25815_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4375_PIs[] =
{
	&t4375____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1380_0_0_0;
static ParameterInfo t4375_m25816_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1380_0_0_0},
};
extern TypeInfo t4375_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25816_MI = 
{
	"IndexOf", NULL, &t4375_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t4375_m25816_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1380_0_0_0;
static ParameterInfo t4375_m25817_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1380_0_0_0},
};
extern TypeInfo t4375_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25817_MI = 
{
	"Insert", NULL, &t4375_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t4375_m25817_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4375_m25818_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4375_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25818_MI = 
{
	"RemoveAt", NULL, &t4375_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t4375_m25818_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4375_m25814_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4375_TI;
extern Il2CppType t1380_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25814_MI = 
{
	"get_Item", NULL, &t4375_TI, &t1380_0_0_0, RuntimeInvoker_t14_t35, t4375_m25814_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1380_0_0_0;
static ParameterInfo t4375_m25815_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1380_0_0_0},
};
extern TypeInfo t4375_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25815_MI = 
{
	"set_Item", NULL, &t4375_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t4375_m25815_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4375_MIs[] =
{
	&m25816_MI,
	&m25817_MI,
	&m25818_MI,
	&m25814_MI,
	&m25815_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4374_TI;
extern TypeInfo t4376_TI;
static TypeInfo* t4375_ITIs[] = 
{
	&t600_TI,
	&t4374_TI,
	&t4376_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4375_0_0_0;
extern Il2CppType t4375_1_0_0;
struct t4375;
extern TypeInfo t4375_TI;
extern Il2CppGenericClass t4375_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t4375_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4375_MIs, t4375_PIs, NULL, NULL, NULL, NULL, NULL, &t4375_TI, t4375_ITIs, NULL, &t1409__CustomAttributeCache, &t4375_TI, &t4375_0_0_0, &t4375_1_0_0, NULL, &t4375_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3486_TI;

#include "t509.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.AnimationEventSource>
extern MethodInfo m25819_MI;
static PropertyInfo t3486____Current_PropertyInfo = 
{
	&t3486_TI, "Current", &m25819_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3486_PIs[] =
{
	&t3486____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3486_TI;
extern Il2CppType t509_0_0_0;
extern void* RuntimeInvoker_t509 (MethodInfo* method, void* obj, void** args);
MethodInfo m25819_MI = 
{
	"get_Current", NULL, &t3486_TI, &t509_0_0_0, RuntimeInvoker_t509, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3486_MIs[] =
{
	&m25819_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t3486_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3486_0_0_0;
extern Il2CppType t3486_1_0_0;
struct t3486;
extern TypeInfo t3486_TI;
extern Il2CppGenericClass t3486_GC;
TypeInfo t3486_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3486_MIs, t3486_PIs, NULL, NULL, NULL, NULL, NULL, &t3486_TI, t3486_ITIs, NULL, &EmptyCustomAttributesCache, &t3486_TI, &t3486_0_0_0, &t3486_1_0_0, NULL, &t3486_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2486.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2486_TI;
#include "t2486MD.h"

extern TypeInfo t2486_TI;
extern TypeInfo t509_TI;
extern TypeInfo t1278_TI;
extern MethodInfo m13952_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m19458_MI;
struct t24;
 int32_t m19458 (t24 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m19458_MI;


extern MethodInfo m13948_MI;
 void m13948 (t2486 * __this, t24 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m13949_MI;
 t14 * m13949 (t2486 * __this, MethodInfo* method){
	{
		int32_t L_0 = m13952(__this, &m13952_MI);
		int32_t L_1 = L_0;
		t14 * L_2 = Box(InitializedTypeInfo(&t509_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m13950_MI;
 void m13950 (t2486 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m13951_MI;
 bool m13951 (t2486 * __this, MethodInfo* method){
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
extern MethodInfo m13952_MI;
 int32_t m13952 (t2486 * __this, MethodInfo* method){
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
		int32_t L_8 = m19458(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m19458_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.AnimationEventSource>
extern Il2CppType t24_0_0_1;
FieldInfo t2486_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t2486_TI, offsetof(t2486, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t2486_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t2486_TI, offsetof(t2486, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t2486_FIs[] =
{
	&t2486_f0_FieldInfo,
	&t2486_f1_FieldInfo,
	NULL
};
extern MethodInfo m13949_MI;
static PropertyInfo t2486____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2486_TI, "System.Collections.IEnumerator.Current", &m13949_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13952_MI;
static PropertyInfo t2486____Current_PropertyInfo = 
{
	&t2486_TI, "Current", &m13952_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2486_PIs[] =
{
	&t2486____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2486____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t2486_m13948_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t2486_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13948_MI = 
{
	".ctor", (methodPointerType)&m13948, &t2486_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2486_m13948_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2486_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13949_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m13949, &t2486_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2486_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13950_MI = 
{
	"Dispose", (methodPointerType)&m13950, &t2486_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2486_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m13951_MI = 
{
	"MoveNext", (methodPointerType)&m13951, &t2486_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2486_TI;
extern Il2CppType t509_0_0_0;
extern void* RuntimeInvoker_t509 (MethodInfo* method, void* obj, void** args);
MethodInfo m13952_MI = 
{
	"get_Current", (methodPointerType)&m13952, &t2486_TI, &t509_0_0_0, RuntimeInvoker_t509, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2486_MIs[] =
{
	&m13948_MI,
	&m13949_MI,
	&m13950_MI,
	&m13951_MI,
	&m13952_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m13949_MI;
extern MethodInfo m13951_MI;
extern MethodInfo m13950_MI;
extern MethodInfo m13952_MI;
static MethodInfo* t2486_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m13949_MI,
	&m13951_MI,
	&m13950_MI,
	&m13952_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3486_TI;
static TypeInfo* t2486_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t3486_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3486_TI;
static Il2CppInterfaceOffsetPair t2486_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t3486_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2486_0_0_0;
extern Il2CppType t2486_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t2486_TI;
extern Il2CppGenericClass t2486_GC;
extern TypeInfo t24_TI;
TypeInfo t2486_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2486_MIs, t2486_PIs, t2486_FIs, NULL, &t122_TI, NULL, &t24_TI, &t2486_TI, t2486_ITIs, t2486_VT, &EmptyCustomAttributesCache, &t2486_TI, &t2486_0_0_0, &t2486_1_0_0, t2486_IOs, &t2486_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2486)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4377_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.AnimationEventSource>
extern MethodInfo m25820_MI;
static PropertyInfo t4377____Count_PropertyInfo = 
{
	&t4377_TI, "Count", &m25820_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m25821_MI;
static PropertyInfo t4377____IsReadOnly_PropertyInfo = 
{
	&t4377_TI, "IsReadOnly", &m25821_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4377_PIs[] =
{
	&t4377____Count_PropertyInfo,
	&t4377____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4377_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25820_MI = 
{
	"get_Count", NULL, &t4377_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4377_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m25821_MI = 
{
	"get_IsReadOnly", NULL, &t4377_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t509_0_0_0;
static ParameterInfo t4377_m25822_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t509_0_0_0},
};
extern TypeInfo t4377_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25822_MI = 
{
	"Add", NULL, &t4377_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t4377_m25822_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4377_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m25823_MI = 
{
	"Clear", NULL, &t4377_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t509_0_0_0;
static ParameterInfo t4377_m25824_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t509_0_0_0},
};
extern TypeInfo t4377_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25824_MI = 
{
	"Contains", NULL, &t4377_TI, &t26_0_0_0, RuntimeInvoker_t26_t35, t4377_m25824_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3124_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t4377_m25825_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3124_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4377_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25825_MI = 
{
	"CopyTo", NULL, &t4377_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t4377_m25825_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t509_0_0_0;
static ParameterInfo t4377_m25826_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t509_0_0_0},
};
extern TypeInfo t4377_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25826_MI = 
{
	"Remove", NULL, &t4377_TI, &t26_0_0_0, RuntimeInvoker_t26_t35, t4377_m25826_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4377_MIs[] =
{
	&m25820_MI,
	&m25821_MI,
	&m25822_MI,
	&m25823_MI,
	&m25824_MI,
	&m25825_MI,
	&m25826_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4379_TI;
static TypeInfo* t4377_ITIs[] = 
{
	&t600_TI,
	&t4379_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4377_0_0_0;
extern Il2CppType t4377_1_0_0;
struct t4377;
extern TypeInfo t4377_TI;
extern Il2CppGenericClass t4377_GC;
TypeInfo t4377_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4377_MIs, t4377_PIs, NULL, NULL, NULL, NULL, NULL, &t4377_TI, t4377_ITIs, NULL, &EmptyCustomAttributesCache, &t4377_TI, &t4377_0_0_0, &t4377_1_0_0, NULL, &t4377_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4379_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.AnimationEventSource>
extern TypeInfo t4379_TI;
extern Il2CppType t3486_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m25827_MI = 
{
	"GetEnumerator", NULL, &t4379_TI, &t3486_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4379_MIs[] =
{
	&m25827_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t4379_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4379_0_0_0;
extern Il2CppType t4379_1_0_0;
struct t4379;
extern TypeInfo t4379_TI;
extern Il2CppGenericClass t4379_GC;
TypeInfo t4379_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4379_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4379_TI, t4379_ITIs, NULL, &EmptyCustomAttributesCache, &t4379_TI, &t4379_0_0_0, &t4379_1_0_0, NULL, &t4379_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4378_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.AnimationEventSource>
extern MethodInfo m25828_MI;
extern MethodInfo m25829_MI;
static PropertyInfo t4378____Item_PropertyInfo = 
{
	&t4378_TI, "Item", &m25828_MI, &m25829_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4378_PIs[] =
{
	&t4378____Item_PropertyInfo,
	NULL
};
extern Il2CppType t509_0_0_0;
static ParameterInfo t4378_m25830_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t509_0_0_0},
};
extern TypeInfo t4378_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25830_MI = 
{
	"IndexOf", NULL, &t4378_TI, &t35_0_0_0, RuntimeInvoker_t35_t35, t4378_m25830_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t509_0_0_0;
static ParameterInfo t4378_m25831_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t509_0_0_0},
};
extern TypeInfo t4378_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25831_MI = 
{
	"Insert", NULL, &t4378_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t35, t4378_m25831_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4378_m25832_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4378_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25832_MI = 
{
	"RemoveAt", NULL, &t4378_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t4378_m25832_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4378_m25828_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4378_TI;
extern Il2CppType t509_0_0_0;
extern void* RuntimeInvoker_t509_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25828_MI = 
{
	"get_Item", NULL, &t4378_TI, &t509_0_0_0, RuntimeInvoker_t509_t35, t4378_m25828_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t509_0_0_0;
static ParameterInfo t4378_m25829_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t509_0_0_0},
};
extern TypeInfo t4378_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25829_MI = 
{
	"set_Item", NULL, &t4378_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t35, t4378_m25829_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4378_MIs[] =
{
	&m25830_MI,
	&m25831_MI,
	&m25832_MI,
	&m25828_MI,
	&m25829_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4377_TI;
extern TypeInfo t4379_TI;
static TypeInfo* t4378_ITIs[] = 
{
	&t600_TI,
	&t4377_TI,
	&t4379_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4378_0_0_0;
extern Il2CppType t4378_1_0_0;
struct t4378;
extern TypeInfo t4378_TI;
extern Il2CppGenericClass t4378_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t4378_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4378_MIs, t4378_PIs, NULL, NULL, NULL, NULL, NULL, &t4378_TI, t4378_ITIs, NULL, &t1409__CustomAttributeCache, &t4378_TI, &t4378_0_0_0, &t4378_1_0_0, NULL, &t4378_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3487_TI;

#include "t514.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.Keyframe>
extern MethodInfo m25833_MI;
static PropertyInfo t3487____Current_PropertyInfo = 
{
	&t3487_TI, "Current", &m25833_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3487_PIs[] =
{
	&t3487____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3487_TI;
extern Il2CppType t514_0_0_0;
extern void* RuntimeInvoker_t514 (MethodInfo* method, void* obj, void** args);
MethodInfo m25833_MI = 
{
	"get_Current", NULL, &t3487_TI, &t514_0_0_0, RuntimeInvoker_t514, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3487_MIs[] =
{
	&m25833_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t3487_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3487_0_0_0;
extern Il2CppType t3487_1_0_0;
struct t3487;
extern TypeInfo t3487_TI;
extern Il2CppGenericClass t3487_GC;
TypeInfo t3487_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3487_MIs, t3487_PIs, NULL, NULL, NULL, NULL, NULL, &t3487_TI, t3487_ITIs, NULL, &EmptyCustomAttributesCache, &t3487_TI, &t3487_0_0_0, &t3487_1_0_0, NULL, &t3487_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2487.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2487_TI;
#include "t2487MD.h"

extern TypeInfo t2487_TI;
extern TypeInfo t514_TI;
extern TypeInfo t1278_TI;
extern MethodInfo m13957_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m19469_MI;
struct t24;
 t514  m19469 (t24 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m19469_MI;


extern MethodInfo m13953_MI;
 void m13953 (t2487 * __this, t24 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m13954_MI;
 t14 * m13954 (t2487 * __this, MethodInfo* method){
	{
		t514  L_0 = m13957(__this, &m13957_MI);
		t514  L_1 = L_0;
		t14 * L_2 = Box(InitializedTypeInfo(&t514_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m13955_MI;
 void m13955 (t2487 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m13956_MI;
 bool m13956 (t2487 * __this, MethodInfo* method){
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
extern MethodInfo m13957_MI;
 t514  m13957 (t2487 * __this, MethodInfo* method){
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
		t514  L_8 = m19469(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m19469_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.Keyframe>
extern Il2CppType t24_0_0_1;
FieldInfo t2487_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t2487_TI, offsetof(t2487, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t2487_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t2487_TI, offsetof(t2487, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t2487_FIs[] =
{
	&t2487_f0_FieldInfo,
	&t2487_f1_FieldInfo,
	NULL
};
extern MethodInfo m13954_MI;
static PropertyInfo t2487____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2487_TI, "System.Collections.IEnumerator.Current", &m13954_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13957_MI;
static PropertyInfo t2487____Current_PropertyInfo = 
{
	&t2487_TI, "Current", &m13957_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2487_PIs[] =
{
	&t2487____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2487____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t2487_m13953_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t2487_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13953_MI = 
{
	".ctor", (methodPointerType)&m13953, &t2487_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2487_m13953_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2487_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13954_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m13954, &t2487_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2487_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13955_MI = 
{
	"Dispose", (methodPointerType)&m13955, &t2487_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2487_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m13956_MI = 
{
	"MoveNext", (methodPointerType)&m13956, &t2487_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2487_TI;
extern Il2CppType t514_0_0_0;
extern void* RuntimeInvoker_t514 (MethodInfo* method, void* obj, void** args);
MethodInfo m13957_MI = 
{
	"get_Current", (methodPointerType)&m13957, &t2487_TI, &t514_0_0_0, RuntimeInvoker_t514, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2487_MIs[] =
{
	&m13953_MI,
	&m13954_MI,
	&m13955_MI,
	&m13956_MI,
	&m13957_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m13954_MI;
extern MethodInfo m13956_MI;
extern MethodInfo m13955_MI;
extern MethodInfo m13957_MI;
static MethodInfo* t2487_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m13954_MI,
	&m13956_MI,
	&m13955_MI,
	&m13957_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3487_TI;
static TypeInfo* t2487_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t3487_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3487_TI;
static Il2CppInterfaceOffsetPair t2487_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t3487_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2487_0_0_0;
extern Il2CppType t2487_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t2487_TI;
extern Il2CppGenericClass t2487_GC;
extern TypeInfo t24_TI;
TypeInfo t2487_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2487_MIs, t2487_PIs, t2487_FIs, NULL, &t122_TI, NULL, &t24_TI, &t2487_TI, t2487_ITIs, t2487_VT, &EmptyCustomAttributesCache, &t2487_TI, &t2487_0_0_0, &t2487_1_0_0, t2487_IOs, &t2487_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2487)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4380_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.Keyframe>
extern MethodInfo m25834_MI;
static PropertyInfo t4380____Count_PropertyInfo = 
{
	&t4380_TI, "Count", &m25834_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m25835_MI;
static PropertyInfo t4380____IsReadOnly_PropertyInfo = 
{
	&t4380_TI, "IsReadOnly", &m25835_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4380_PIs[] =
{
	&t4380____Count_PropertyInfo,
	&t4380____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4380_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25834_MI = 
{
	"get_Count", NULL, &t4380_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4380_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m25835_MI = 
{
	"get_IsReadOnly", NULL, &t4380_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t514_0_0_0;
static ParameterInfo t4380_m25836_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t514_0_0_0},
};
extern TypeInfo t4380_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t514 (MethodInfo* method, void* obj, void** args);
MethodInfo m25836_MI = 
{
	"Add", NULL, &t4380_TI, &t25_0_0_0, RuntimeInvoker_t25_t514, t4380_m25836_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4380_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m25837_MI = 
{
	"Clear", NULL, &t4380_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t514_0_0_0;
static ParameterInfo t4380_m25838_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t514_0_0_0},
};
extern TypeInfo t4380_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t514 (MethodInfo* method, void* obj, void** args);
MethodInfo m25838_MI = 
{
	"Contains", NULL, &t4380_TI, &t26_0_0_0, RuntimeInvoker_t26_t514, t4380_m25838_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t516_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t4380_m25839_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t516_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4380_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m25839_MI = 
{
	"CopyTo", NULL, &t4380_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t4380_m25839_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t514_0_0_0;
static ParameterInfo t4380_m25840_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t514_0_0_0},
};
extern TypeInfo t4380_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t514 (MethodInfo* method, void* obj, void** args);
MethodInfo m25840_MI = 
{
	"Remove", NULL, &t4380_TI, &t26_0_0_0, RuntimeInvoker_t26_t514, t4380_m25840_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4380_MIs[] =
{
	&m25834_MI,
	&m25835_MI,
	&m25836_MI,
	&m25837_MI,
	&m25838_MI,
	&m25839_MI,
	&m25840_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4382_TI;
static TypeInfo* t4380_ITIs[] = 
{
	&t600_TI,
	&t4382_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4380_0_0_0;
extern Il2CppType t4380_1_0_0;
struct t4380;
extern TypeInfo t4380_TI;
extern Il2CppGenericClass t4380_GC;
TypeInfo t4380_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4380_MIs, t4380_PIs, NULL, NULL, NULL, NULL, NULL, &t4380_TI, t4380_ITIs, NULL, &EmptyCustomAttributesCache, &t4380_TI, &t4380_0_0_0, &t4380_1_0_0, NULL, &t4380_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
