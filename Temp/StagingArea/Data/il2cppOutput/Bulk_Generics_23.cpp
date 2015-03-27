#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t2652.h"
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
extern TypeInfo t2652_TI;
#include "t2652MD.h"

#include "t14.h"
#include "t344.h"
#include "t35.h"
#include "t33.h"
#include "t1278.h"
#include "t25.h"
#include "t24.h"
#include "t26.h"
extern TypeInfo t2652_TI;
extern TypeInfo t344_TI;
extern TypeInfo t1278_TI;
#include "t1278MD.h"
#include "t24MD.h"
extern MethodInfo m15151_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m20166_MI;
struct t24;
#include "t1242.h"
 uint32_t m20166 (t24 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20166_MI;


extern MethodInfo m15147_MI;
 void m15147 (t2652 * __this, t24 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15148_MI;
 t14 * m15148 (t2652 * __this, MethodInfo* method){
	{
		uint32_t L_0 = m15151(__this, &m15151_MI);
		uint32_t L_1 = L_0;
		t14 * L_2 = Box(InitializedTypeInfo(&t344_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m15149_MI;
 void m15149 (t2652 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15150_MI;
 bool m15150 (t2652 * __this, MethodInfo* method){
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
extern MethodInfo m15151_MI;
 uint32_t m15151 (t2652 * __this, MethodInfo* method){
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
		uint32_t L_8 = m20166(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m20166_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.UInt32>
extern Il2CppType t24_0_0_1;
FieldInfo t2652_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t2652_TI, offsetof(t2652, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t2652_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t2652_TI, offsetof(t2652, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t2652_FIs[] =
{
	&t2652_f0_FieldInfo,
	&t2652_f1_FieldInfo,
	NULL
};
extern MethodInfo m15148_MI;
static PropertyInfo t2652____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2652_TI, "System.Collections.IEnumerator.Current", &m15148_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15151_MI;
static PropertyInfo t2652____Current_PropertyInfo = 
{
	&t2652_TI, "Current", &m15151_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2652_PIs[] =
{
	&t2652____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2652____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t2652_m15147_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t2652_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m15147_MI = 
{
	".ctor", (methodPointerType)&m15147, &t2652_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2652_m15147_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2652_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m15148_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m15148, &t2652_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2652_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m15149_MI = 
{
	"Dispose", (methodPointerType)&m15149, &t2652_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2652_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m15150_MI = 
{
	"MoveNext", (methodPointerType)&m15150, &t2652_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2652_TI;
extern Il2CppType t344_0_0_0;
extern void* RuntimeInvoker_t344 (MethodInfo* method, void* obj, void** args);
MethodInfo m15151_MI = 
{
	"get_Current", (methodPointerType)&m15151, &t2652_TI, &t344_0_0_0, RuntimeInvoker_t344, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2652_MIs[] =
{
	&m15147_MI,
	&m15148_MI,
	&m15149_MI,
	&m15150_MI,
	&m15151_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m15148_MI;
extern MethodInfo m15150_MI;
extern MethodInfo m15149_MI;
extern MethodInfo m15151_MI;
static MethodInfo* t2652_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m15148_MI,
	&m15150_MI,
	&m15149_MI,
	&m15151_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3548_TI;
static TypeInfo* t2652_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t3548_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3548_TI;
static Il2CppInterfaceOffsetPair t2652_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t3548_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2652_0_0_0;
extern Il2CppType t2652_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t2652_TI;
extern Il2CppGenericClass t2652_GC;
extern TypeInfo t24_TI;
TypeInfo t2652_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2652_MIs, t2652_PIs, t2652_FIs, NULL, &t122_TI, NULL, &t24_TI, &t2652_TI, t2652_ITIs, t2652_VT, &EmptyCustomAttributesCache, &t2652_TI, &t2652_0_0_0, &t2652_1_0_0, t2652_IOs, &t2652_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2652)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4539_TI;

#include "mscorlib_ArrayTypes.h"


// Metadata Definition System.Collections.Generic.ICollection`1<System.UInt32>
extern MethodInfo m26646_MI;
static PropertyInfo t4539____Count_PropertyInfo = 
{
	&t4539_TI, "Count", &m26646_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26647_MI;
static PropertyInfo t4539____IsReadOnly_PropertyInfo = 
{
	&t4539_TI, "IsReadOnly", &m26647_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4539_PIs[] =
{
	&t4539____Count_PropertyInfo,
	&t4539____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4539_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26646_MI = 
{
	"get_Count", NULL, &t4539_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4539_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m26647_MI = 
{
	"get_IsReadOnly", NULL, &t4539_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t344_0_0_0;
static ParameterInfo t4539_m26648_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t4539_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26648_MI = 
{
	"Add", NULL, &t4539_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t4539_m26648_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4539_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m26649_MI = 
{
	"Clear", NULL, &t4539_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t344_0_0_0;
static ParameterInfo t4539_m26650_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t4539_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26650_MI = 
{
	"Contains", NULL, &t4539_TI, &t26_0_0_0, RuntimeInvoker_t26_t35, t4539_m26650_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t797_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t4539_m26651_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t797_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4539_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26651_MI = 
{
	"CopyTo", NULL, &t4539_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t4539_m26651_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t344_0_0_0;
static ParameterInfo t4539_m26652_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t4539_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26652_MI = 
{
	"Remove", NULL, &t4539_TI, &t26_0_0_0, RuntimeInvoker_t26_t35, t4539_m26652_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4539_MIs[] =
{
	&m26646_MI,
	&m26647_MI,
	&m26648_MI,
	&m26649_MI,
	&m26650_MI,
	&m26651_MI,
	&m26652_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4541_TI;
static TypeInfo* t4539_ITIs[] = 
{
	&t600_TI,
	&t4541_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4539_0_0_0;
extern Il2CppType t4539_1_0_0;
struct t4539;
extern TypeInfo t4539_TI;
extern Il2CppGenericClass t4539_GC;
TypeInfo t4539_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4539_MIs, t4539_PIs, NULL, NULL, NULL, NULL, NULL, &t4539_TI, t4539_ITIs, NULL, &EmptyCustomAttributesCache, &t4539_TI, &t4539_0_0_0, &t4539_1_0_0, NULL, &t4539_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4541_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.UInt32>
extern TypeInfo t4541_TI;
extern Il2CppType t3548_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26653_MI = 
{
	"GetEnumerator", NULL, &t4541_TI, &t3548_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4541_MIs[] =
{
	&m26653_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t4541_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4541_0_0_0;
extern Il2CppType t4541_1_0_0;
struct t4541;
extern TypeInfo t4541_TI;
extern Il2CppGenericClass t4541_GC;
TypeInfo t4541_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4541_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4541_TI, t4541_ITIs, NULL, &EmptyCustomAttributesCache, &t4541_TI, &t4541_0_0_0, &t4541_1_0_0, NULL, &t4541_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4540_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.UInt32>
extern MethodInfo m26654_MI;
extern MethodInfo m26655_MI;
static PropertyInfo t4540____Item_PropertyInfo = 
{
	&t4540_TI, "Item", &m26654_MI, &m26655_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4540_PIs[] =
{
	&t4540____Item_PropertyInfo,
	NULL
};
extern Il2CppType t344_0_0_0;
static ParameterInfo t4540_m26656_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t4540_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26656_MI = 
{
	"IndexOf", NULL, &t4540_TI, &t35_0_0_0, RuntimeInvoker_t35_t35, t4540_m26656_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t344_0_0_0;
static ParameterInfo t4540_m26657_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t4540_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26657_MI = 
{
	"Insert", NULL, &t4540_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t35, t4540_m26657_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4540_m26658_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4540_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26658_MI = 
{
	"RemoveAt", NULL, &t4540_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t4540_m26658_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4540_m26654_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4540_TI;
extern Il2CppType t344_0_0_0;
extern void* RuntimeInvoker_t344_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26654_MI = 
{
	"get_Item", NULL, &t4540_TI, &t344_0_0_0, RuntimeInvoker_t344_t35, t4540_m26654_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t344_0_0_0;
static ParameterInfo t4540_m26655_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t4540_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26655_MI = 
{
	"set_Item", NULL, &t4540_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t35, t4540_m26655_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4540_MIs[] =
{
	&m26656_MI,
	&m26657_MI,
	&m26658_MI,
	&m26654_MI,
	&m26655_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4539_TI;
extern TypeInfo t4541_TI;
static TypeInfo* t4540_ITIs[] = 
{
	&t600_TI,
	&t4539_TI,
	&t4541_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4540_0_0_0;
extern Il2CppType t4540_1_0_0;
struct t4540;
extern TypeInfo t4540_TI;
extern Il2CppGenericClass t4540_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t4540_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4540_MIs, t4540_PIs, NULL, NULL, NULL, NULL, NULL, &t4540_TI, t4540_ITIs, NULL, &t1409__CustomAttributeCache, &t4540_TI, &t4540_0_0_0, &t4540_1_0_0, NULL, &t4540_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4542_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt32>>
extern MethodInfo m26659_MI;
static PropertyInfo t4542____Count_PropertyInfo = 
{
	&t4542_TI, "Count", &m26659_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26660_MI;
static PropertyInfo t4542____IsReadOnly_PropertyInfo = 
{
	&t4542_TI, "IsReadOnly", &m26660_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4542_PIs[] =
{
	&t4542____Count_PropertyInfo,
	&t4542____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4542_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26659_MI = 
{
	"get_Count", NULL, &t4542_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4542_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m26660_MI = 
{
	"get_IsReadOnly", NULL, &t4542_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1347_0_0_0;
static ParameterInfo t4542_m26661_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1347_0_0_0},
};
extern TypeInfo t4542_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26661_MI = 
{
	"Add", NULL, &t4542_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t4542_m26661_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4542_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m26662_MI = 
{
	"Clear", NULL, &t4542_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1347_0_0_0;
static ParameterInfo t4542_m26663_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1347_0_0_0},
};
extern TypeInfo t4542_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26663_MI = 
{
	"Contains", NULL, &t4542_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t4542_m26663_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2921_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t4542_m26664_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2921_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4542_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26664_MI = 
{
	"CopyTo", NULL, &t4542_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t4542_m26664_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1347_0_0_0;
static ParameterInfo t4542_m26665_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1347_0_0_0},
};
extern TypeInfo t4542_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26665_MI = 
{
	"Remove", NULL, &t4542_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t4542_m26665_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4542_MIs[] =
{
	&m26659_MI,
	&m26660_MI,
	&m26661_MI,
	&m26662_MI,
	&m26663_MI,
	&m26664_MI,
	&m26665_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4544_TI;
static TypeInfo* t4542_ITIs[] = 
{
	&t600_TI,
	&t4544_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4542_0_0_0;
extern Il2CppType t4542_1_0_0;
struct t4542;
extern TypeInfo t4542_TI;
extern Il2CppGenericClass t4542_GC;
TypeInfo t4542_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4542_MIs, t4542_PIs, NULL, NULL, NULL, NULL, NULL, &t4542_TI, t4542_ITIs, NULL, &EmptyCustomAttributesCache, &t4542_TI, &t4542_0_0_0, &t4542_1_0_0, NULL, &t4542_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4544_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.UInt32>>
extern TypeInfo t4544_TI;
extern Il2CppType t3549_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26666_MI = 
{
	"GetEnumerator", NULL, &t4544_TI, &t3549_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4544_MIs[] =
{
	&m26666_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t4544_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4544_0_0_0;
extern Il2CppType t4544_1_0_0;
struct t4544;
extern TypeInfo t4544_TI;
extern Il2CppGenericClass t4544_GC;
TypeInfo t4544_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4544_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4544_TI, t4544_ITIs, NULL, &EmptyCustomAttributesCache, &t4544_TI, &t4544_0_0_0, &t4544_1_0_0, NULL, &t4544_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3549_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.UInt32>>
extern MethodInfo m26667_MI;
static PropertyInfo t3549____Current_PropertyInfo = 
{
	&t3549_TI, "Current", &m26667_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3549_PIs[] =
{
	&t3549____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3549_TI;
extern Il2CppType t1347_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26667_MI = 
{
	"get_Current", NULL, &t3549_TI, &t1347_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3549_MIs[] =
{
	&m26667_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t3549_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3549_0_0_0;
extern Il2CppType t3549_1_0_0;
struct t3549;
extern TypeInfo t3549_TI;
extern Il2CppGenericClass t3549_GC;
TypeInfo t3549_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3549_MIs, t3549_PIs, NULL, NULL, NULL, NULL, NULL, &t3549_TI, t3549_ITIs, NULL, &EmptyCustomAttributesCache, &t3549_TI, &t3549_0_0_0, &t3549_1_0_0, NULL, &t3549_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1347_TI;



// Metadata Definition System.IComparable`1<System.UInt32>
extern Il2CppType t344_0_0_0;
static ParameterInfo t1347_m26668_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t1347_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26668_MI = 
{
	"CompareTo", NULL, &t1347_TI, &t35_0_0_0, RuntimeInvoker_t35_t35, t1347_m26668_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1347_MIs[] =
{
	&m26668_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1347_0_0_0;
extern Il2CppType t1347_1_0_0;
struct t1347;
extern TypeInfo t1347_TI;
extern Il2CppGenericClass t1347_GC;
TypeInfo t1347_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t1347_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1347_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1347_TI, &t1347_0_0_0, &t1347_1_0_0, NULL, &t1347_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t2653.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2653_TI;
#include "t2653MD.h"

extern TypeInfo t2653_TI;
extern TypeInfo t1347_TI;
extern TypeInfo t1278_TI;
extern MethodInfo m15156_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m20177_MI;
struct t24;
struct t24;
 t14 * m16357_gshared (t24 * __this, int32_t p0, MethodInfo* method);
#define m16357(__this, p0, method) (t14 *)m16357_gshared((t24 *)__this, (int32_t)p0, method)
#define m20177(__this, p0, method) (t14*)m16357_gshared((t24 *)__this, (int32_t)p0, method)
extern MethodInfo m20177_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt32>>
extern Il2CppType t24_0_0_1;
FieldInfo t2653_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t2653_TI, offsetof(t2653, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t2653_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t2653_TI, offsetof(t2653, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t2653_FIs[] =
{
	&t2653_f0_FieldInfo,
	&t2653_f1_FieldInfo,
	NULL
};
extern MethodInfo m15153_MI;
static PropertyInfo t2653____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2653_TI, "System.Collections.IEnumerator.Current", &m15153_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15156_MI;
static PropertyInfo t2653____Current_PropertyInfo = 
{
	&t2653_TI, "Current", &m15156_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2653_PIs[] =
{
	&t2653____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2653____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t2653_m15152_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t2653_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m15152_MI = 
{
	".ctor", (methodPointerType)&m7877_gshared, &t2653_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2653_m15152_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2653_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m15153_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7879_gshared, &t2653_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2653_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m15154_MI = 
{
	"Dispose", (methodPointerType)&m7881_gshared, &t2653_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2653_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m15155_MI = 
{
	"MoveNext", (methodPointerType)&m7883_gshared, &t2653_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2653_TI;
extern Il2CppType t1347_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m15156_MI = 
{
	"get_Current", (methodPointerType)&m7885_gshared, &t2653_TI, &t1347_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2653_MIs[] =
{
	&m15152_MI,
	&m15153_MI,
	&m15154_MI,
	&m15155_MI,
	&m15156_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m15153_MI;
extern MethodInfo m15155_MI;
extern MethodInfo m15154_MI;
extern MethodInfo m15156_MI;
static MethodInfo* t2653_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m15153_MI,
	&m15155_MI,
	&m15154_MI,
	&m15156_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3549_TI;
static TypeInfo* t2653_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t3549_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3549_TI;
static Il2CppInterfaceOffsetPair t2653_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t3549_TI, 7},
};
extern MethodInfo m15156_MI;
extern TypeInfo t1347_TI;
extern MethodInfo m20177_MI;
static void* t2653_RGCTXData[3] = 
{
	&m15156_MI,
	&t1347_TI,
	&m20177_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2653_0_0_0;
extern Il2CppType t2653_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t2653_TI;
extern Il2CppGenericClass t2653_GC;
extern TypeInfo t24_TI;
TypeInfo t2653_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2653_MIs, t2653_PIs, t2653_FIs, NULL, &t122_TI, NULL, &t24_TI, &t2653_TI, t2653_ITIs, t2653_VT, &EmptyCustomAttributesCache, &t2653_TI, &t2653_0_0_0, &t2653_1_0_0, t2653_IOs, &t2653_GC, NULL, NULL, NULL, t2653_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2653)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4543_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IComparable`1<System.UInt32>>
extern MethodInfo m26669_MI;
extern MethodInfo m26670_MI;
static PropertyInfo t4543____Item_PropertyInfo = 
{
	&t4543_TI, "Item", &m26669_MI, &m26670_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4543_PIs[] =
{
	&t4543____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1347_0_0_0;
static ParameterInfo t4543_m26671_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1347_0_0_0},
};
extern TypeInfo t4543_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26671_MI = 
{
	"IndexOf", NULL, &t4543_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t4543_m26671_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1347_0_0_0;
static ParameterInfo t4543_m26672_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1347_0_0_0},
};
extern TypeInfo t4543_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26672_MI = 
{
	"Insert", NULL, &t4543_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t4543_m26672_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4543_m26673_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4543_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26673_MI = 
{
	"RemoveAt", NULL, &t4543_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t4543_m26673_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4543_m26669_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4543_TI;
extern Il2CppType t1347_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26669_MI = 
{
	"get_Item", NULL, &t4543_TI, &t1347_0_0_0, RuntimeInvoker_t14_t35, t4543_m26669_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1347_0_0_0;
static ParameterInfo t4543_m26670_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1347_0_0_0},
};
extern TypeInfo t4543_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26670_MI = 
{
	"set_Item", NULL, &t4543_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t4543_m26670_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4543_MIs[] =
{
	&m26671_MI,
	&m26672_MI,
	&m26673_MI,
	&m26669_MI,
	&m26670_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4542_TI;
extern TypeInfo t4544_TI;
static TypeInfo* t4543_ITIs[] = 
{
	&t600_TI,
	&t4542_TI,
	&t4544_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4543_0_0_0;
extern Il2CppType t4543_1_0_0;
struct t4543;
extern TypeInfo t4543_TI;
extern Il2CppGenericClass t4543_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t4543_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4543_MIs, t4543_PIs, NULL, NULL, NULL, NULL, NULL, &t4543_TI, t4543_ITIs, NULL, &t1409__CustomAttributeCache, &t4543_TI, &t4543_0_0_0, &t4543_1_0_0, NULL, &t4543_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4545_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt32>>
extern MethodInfo m26674_MI;
static PropertyInfo t4545____Count_PropertyInfo = 
{
	&t4545_TI, "Count", &m26674_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26675_MI;
static PropertyInfo t4545____IsReadOnly_PropertyInfo = 
{
	&t4545_TI, "IsReadOnly", &m26675_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4545_PIs[] =
{
	&t4545____Count_PropertyInfo,
	&t4545____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4545_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26674_MI = 
{
	"get_Count", NULL, &t4545_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4545_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m26675_MI = 
{
	"get_IsReadOnly", NULL, &t4545_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1348_0_0_0;
static ParameterInfo t4545_m26676_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1348_0_0_0},
};
extern TypeInfo t4545_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26676_MI = 
{
	"Add", NULL, &t4545_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t4545_m26676_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4545_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m26677_MI = 
{
	"Clear", NULL, &t4545_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1348_0_0_0;
static ParameterInfo t4545_m26678_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1348_0_0_0},
};
extern TypeInfo t4545_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26678_MI = 
{
	"Contains", NULL, &t4545_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t4545_m26678_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2922_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t4545_m26679_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2922_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4545_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26679_MI = 
{
	"CopyTo", NULL, &t4545_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t4545_m26679_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1348_0_0_0;
static ParameterInfo t4545_m26680_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1348_0_0_0},
};
extern TypeInfo t4545_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26680_MI = 
{
	"Remove", NULL, &t4545_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t4545_m26680_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4545_MIs[] =
{
	&m26674_MI,
	&m26675_MI,
	&m26676_MI,
	&m26677_MI,
	&m26678_MI,
	&m26679_MI,
	&m26680_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4547_TI;
static TypeInfo* t4545_ITIs[] = 
{
	&t600_TI,
	&t4547_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4545_0_0_0;
extern Il2CppType t4545_1_0_0;
struct t4545;
extern TypeInfo t4545_TI;
extern Il2CppGenericClass t4545_GC;
TypeInfo t4545_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4545_MIs, t4545_PIs, NULL, NULL, NULL, NULL, NULL, &t4545_TI, t4545_ITIs, NULL, &EmptyCustomAttributesCache, &t4545_TI, &t4545_0_0_0, &t4545_1_0_0, NULL, &t4545_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4547_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.UInt32>>
extern TypeInfo t4547_TI;
extern Il2CppType t3550_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26681_MI = 
{
	"GetEnumerator", NULL, &t4547_TI, &t3550_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4547_MIs[] =
{
	&m26681_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t4547_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4547_0_0_0;
extern Il2CppType t4547_1_0_0;
struct t4547;
extern TypeInfo t4547_TI;
extern Il2CppGenericClass t4547_GC;
TypeInfo t4547_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4547_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4547_TI, t4547_ITIs, NULL, &EmptyCustomAttributesCache, &t4547_TI, &t4547_0_0_0, &t4547_1_0_0, NULL, &t4547_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3550_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.UInt32>>
extern MethodInfo m26682_MI;
static PropertyInfo t3550____Current_PropertyInfo = 
{
	&t3550_TI, "Current", &m26682_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3550_PIs[] =
{
	&t3550____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3550_TI;
extern Il2CppType t1348_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26682_MI = 
{
	"get_Current", NULL, &t3550_TI, &t1348_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3550_MIs[] =
{
	&m26682_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t3550_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3550_0_0_0;
extern Il2CppType t3550_1_0_0;
struct t3550;
extern TypeInfo t3550_TI;
extern Il2CppGenericClass t3550_GC;
TypeInfo t3550_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3550_MIs, t3550_PIs, NULL, NULL, NULL, NULL, NULL, &t3550_TI, t3550_ITIs, NULL, &EmptyCustomAttributesCache, &t3550_TI, &t3550_0_0_0, &t3550_1_0_0, NULL, &t3550_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1348_TI;



// Metadata Definition System.IEquatable`1<System.UInt32>
extern Il2CppType t344_0_0_0;
static ParameterInfo t1348_m26683_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t1348_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26683_MI = 
{
	"Equals", NULL, &t1348_TI, &t26_0_0_0, RuntimeInvoker_t26_t35, t1348_m26683_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1348_MIs[] =
{
	&m26683_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1348_0_0_0;
extern Il2CppType t1348_1_0_0;
struct t1348;
extern TypeInfo t1348_TI;
extern Il2CppGenericClass t1348_GC;
TypeInfo t1348_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t1348_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1348_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1348_TI, &t1348_0_0_0, &t1348_1_0_0, NULL, &t1348_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t2654.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2654_TI;
#include "t2654MD.h"

extern TypeInfo t2654_TI;
extern TypeInfo t1348_TI;
extern TypeInfo t1278_TI;
extern MethodInfo m15161_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m20188_MI;
struct t24;
#define m20188(__this, p0, method) (t14*)m16357_gshared((t24 *)__this, (int32_t)p0, method)
extern MethodInfo m20188_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt32>>
extern Il2CppType t24_0_0_1;
FieldInfo t2654_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t2654_TI, offsetof(t2654, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t2654_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t2654_TI, offsetof(t2654, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t2654_FIs[] =
{
	&t2654_f0_FieldInfo,
	&t2654_f1_FieldInfo,
	NULL
};
extern MethodInfo m15158_MI;
static PropertyInfo t2654____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2654_TI, "System.Collections.IEnumerator.Current", &m15158_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15161_MI;
static PropertyInfo t2654____Current_PropertyInfo = 
{
	&t2654_TI, "Current", &m15161_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2654_PIs[] =
{
	&t2654____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2654____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t2654_m15157_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t2654_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m15157_MI = 
{
	".ctor", (methodPointerType)&m7877_gshared, &t2654_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2654_m15157_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2654_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m15158_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7879_gshared, &t2654_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2654_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m15159_MI = 
{
	"Dispose", (methodPointerType)&m7881_gshared, &t2654_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2654_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m15160_MI = 
{
	"MoveNext", (methodPointerType)&m7883_gshared, &t2654_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2654_TI;
extern Il2CppType t1348_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m15161_MI = 
{
	"get_Current", (methodPointerType)&m7885_gshared, &t2654_TI, &t1348_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2654_MIs[] =
{
	&m15157_MI,
	&m15158_MI,
	&m15159_MI,
	&m15160_MI,
	&m15161_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m15158_MI;
extern MethodInfo m15160_MI;
extern MethodInfo m15159_MI;
extern MethodInfo m15161_MI;
static MethodInfo* t2654_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m15158_MI,
	&m15160_MI,
	&m15159_MI,
	&m15161_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3550_TI;
static TypeInfo* t2654_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t3550_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3550_TI;
static Il2CppInterfaceOffsetPair t2654_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t3550_TI, 7},
};
extern MethodInfo m15161_MI;
extern TypeInfo t1348_TI;
extern MethodInfo m20188_MI;
static void* t2654_RGCTXData[3] = 
{
	&m15161_MI,
	&t1348_TI,
	&m20188_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2654_0_0_0;
extern Il2CppType t2654_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t2654_TI;
extern Il2CppGenericClass t2654_GC;
extern TypeInfo t24_TI;
TypeInfo t2654_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2654_MIs, t2654_PIs, t2654_FIs, NULL, &t122_TI, NULL, &t24_TI, &t2654_TI, t2654_ITIs, t2654_VT, &EmptyCustomAttributesCache, &t2654_TI, &t2654_0_0_0, &t2654_1_0_0, t2654_IOs, &t2654_GC, NULL, NULL, NULL, t2654_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2654)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4546_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IEquatable`1<System.UInt32>>
extern MethodInfo m26684_MI;
extern MethodInfo m26685_MI;
static PropertyInfo t4546____Item_PropertyInfo = 
{
	&t4546_TI, "Item", &m26684_MI, &m26685_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4546_PIs[] =
{
	&t4546____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1348_0_0_0;
static ParameterInfo t4546_m26686_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1348_0_0_0},
};
extern TypeInfo t4546_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26686_MI = 
{
	"IndexOf", NULL, &t4546_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t4546_m26686_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1348_0_0_0;
static ParameterInfo t4546_m26687_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1348_0_0_0},
};
extern TypeInfo t4546_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26687_MI = 
{
	"Insert", NULL, &t4546_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t4546_m26687_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4546_m26688_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4546_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26688_MI = 
{
	"RemoveAt", NULL, &t4546_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t4546_m26688_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4546_m26684_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4546_TI;
extern Il2CppType t1348_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26684_MI = 
{
	"get_Item", NULL, &t4546_TI, &t1348_0_0_0, RuntimeInvoker_t14_t35, t4546_m26684_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1348_0_0_0;
static ParameterInfo t4546_m26685_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1348_0_0_0},
};
extern TypeInfo t4546_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26685_MI = 
{
	"set_Item", NULL, &t4546_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t4546_m26685_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4546_MIs[] =
{
	&m26686_MI,
	&m26687_MI,
	&m26688_MI,
	&m26684_MI,
	&m26685_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4545_TI;
extern TypeInfo t4547_TI;
static TypeInfo* t4546_ITIs[] = 
{
	&t600_TI,
	&t4545_TI,
	&t4547_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4546_0_0_0;
extern Il2CppType t4546_1_0_0;
struct t4546;
extern TypeInfo t4546_TI;
extern Il2CppGenericClass t4546_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t4546_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4546_MIs, t4546_PIs, NULL, NULL, NULL, NULL, NULL, &t4546_TI, t4546_ITIs, NULL, &t1409__CustomAttributeCache, &t4546_TI, &t4546_0_0_0, &t4546_1_0_0, NULL, &t4546_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3551_TI;

#include "t681.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.CLSCompliantAttribute>
extern MethodInfo m26689_MI;
static PropertyInfo t3551____Current_PropertyInfo = 
{
	&t3551_TI, "Current", &m26689_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3551_PIs[] =
{
	&t3551____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3551_TI;
extern Il2CppType t681_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26689_MI = 
{
	"get_Current", NULL, &t3551_TI, &t681_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3551_MIs[] =
{
	&m26689_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t3551_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3551_0_0_0;
extern Il2CppType t3551_1_0_0;
struct t3551;
extern TypeInfo t3551_TI;
extern Il2CppGenericClass t3551_GC;
TypeInfo t3551_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3551_MIs, t3551_PIs, NULL, NULL, NULL, NULL, NULL, &t3551_TI, t3551_ITIs, NULL, &EmptyCustomAttributesCache, &t3551_TI, &t3551_0_0_0, &t3551_1_0_0, NULL, &t3551_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2655.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2655_TI;
#include "t2655MD.h"

extern TypeInfo t2655_TI;
extern TypeInfo t681_TI;
extern TypeInfo t1278_TI;
extern MethodInfo m15166_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m20199_MI;
struct t24;
#define m20199(__this, p0, method) (t681 *)m16357_gshared((t24 *)__this, (int32_t)p0, method)
extern MethodInfo m20199_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.CLSCompliantAttribute>
extern Il2CppType t24_0_0_1;
FieldInfo t2655_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t2655_TI, offsetof(t2655, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t2655_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t2655_TI, offsetof(t2655, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t2655_FIs[] =
{
	&t2655_f0_FieldInfo,
	&t2655_f1_FieldInfo,
	NULL
};
extern MethodInfo m15163_MI;
static PropertyInfo t2655____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2655_TI, "System.Collections.IEnumerator.Current", &m15163_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15166_MI;
static PropertyInfo t2655____Current_PropertyInfo = 
{
	&t2655_TI, "Current", &m15166_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2655_PIs[] =
{
	&t2655____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2655____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t2655_m15162_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t2655_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m15162_MI = 
{
	".ctor", (methodPointerType)&m7877_gshared, &t2655_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2655_m15162_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2655_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m15163_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7879_gshared, &t2655_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2655_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m15164_MI = 
{
	"Dispose", (methodPointerType)&m7881_gshared, &t2655_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2655_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m15165_MI = 
{
	"MoveNext", (methodPointerType)&m7883_gshared, &t2655_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2655_TI;
extern Il2CppType t681_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m15166_MI = 
{
	"get_Current", (methodPointerType)&m7885_gshared, &t2655_TI, &t681_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2655_MIs[] =
{
	&m15162_MI,
	&m15163_MI,
	&m15164_MI,
	&m15165_MI,
	&m15166_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m15163_MI;
extern MethodInfo m15165_MI;
extern MethodInfo m15164_MI;
extern MethodInfo m15166_MI;
static MethodInfo* t2655_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m15163_MI,
	&m15165_MI,
	&m15164_MI,
	&m15166_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3551_TI;
static TypeInfo* t2655_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t3551_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3551_TI;
static Il2CppInterfaceOffsetPair t2655_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t3551_TI, 7},
};
extern MethodInfo m15166_MI;
extern TypeInfo t681_TI;
extern MethodInfo m20199_MI;
static void* t2655_RGCTXData[3] = 
{
	&m15166_MI,
	&t681_TI,
	&m20199_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2655_0_0_0;
extern Il2CppType t2655_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t2655_TI;
extern Il2CppGenericClass t2655_GC;
extern TypeInfo t24_TI;
TypeInfo t2655_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2655_MIs, t2655_PIs, t2655_FIs, NULL, &t122_TI, NULL, &t24_TI, &t2655_TI, t2655_ITIs, t2655_VT, &EmptyCustomAttributesCache, &t2655_TI, &t2655_0_0_0, &t2655_1_0_0, t2655_IOs, &t2655_GC, NULL, NULL, NULL, t2655_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2655)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4548_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.CLSCompliantAttribute>
extern MethodInfo m26690_MI;
static PropertyInfo t4548____Count_PropertyInfo = 
{
	&t4548_TI, "Count", &m26690_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26691_MI;
static PropertyInfo t4548____IsReadOnly_PropertyInfo = 
{
	&t4548_TI, "IsReadOnly", &m26691_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4548_PIs[] =
{
	&t4548____Count_PropertyInfo,
	&t4548____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4548_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26690_MI = 
{
	"get_Count", NULL, &t4548_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4548_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m26691_MI = 
{
	"get_IsReadOnly", NULL, &t4548_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t681_0_0_0;
static ParameterInfo t4548_m26692_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t681_0_0_0},
};
extern TypeInfo t4548_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26692_MI = 
{
	"Add", NULL, &t4548_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t4548_m26692_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4548_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m26693_MI = 
{
	"Clear", NULL, &t4548_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t681_0_0_0;
static ParameterInfo t4548_m26694_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t681_0_0_0},
};
extern TypeInfo t4548_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26694_MI = 
{
	"Contains", NULL, &t4548_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t4548_m26694_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2923_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t4548_m26695_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2923_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4548_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26695_MI = 
{
	"CopyTo", NULL, &t4548_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t4548_m26695_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t681_0_0_0;
static ParameterInfo t4548_m26696_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t681_0_0_0},
};
extern TypeInfo t4548_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26696_MI = 
{
	"Remove", NULL, &t4548_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t4548_m26696_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4548_MIs[] =
{
	&m26690_MI,
	&m26691_MI,
	&m26692_MI,
	&m26693_MI,
	&m26694_MI,
	&m26695_MI,
	&m26696_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4550_TI;
static TypeInfo* t4548_ITIs[] = 
{
	&t600_TI,
	&t4550_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4548_0_0_0;
extern Il2CppType t4548_1_0_0;
struct t4548;
extern TypeInfo t4548_TI;
extern Il2CppGenericClass t4548_GC;
TypeInfo t4548_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4548_MIs, t4548_PIs, NULL, NULL, NULL, NULL, NULL, &t4548_TI, t4548_ITIs, NULL, &EmptyCustomAttributesCache, &t4548_TI, &t4548_0_0_0, &t4548_1_0_0, NULL, &t4548_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4550_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.CLSCompliantAttribute>
extern TypeInfo t4550_TI;
extern Il2CppType t3551_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26697_MI = 
{
	"GetEnumerator", NULL, &t4550_TI, &t3551_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4550_MIs[] =
{
	&m26697_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t4550_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4550_0_0_0;
extern Il2CppType t4550_1_0_0;
struct t4550;
extern TypeInfo t4550_TI;
extern Il2CppGenericClass t4550_GC;
TypeInfo t4550_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4550_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4550_TI, t4550_ITIs, NULL, &EmptyCustomAttributesCache, &t4550_TI, &t4550_0_0_0, &t4550_1_0_0, NULL, &t4550_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4549_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.CLSCompliantAttribute>
extern MethodInfo m26698_MI;
extern MethodInfo m26699_MI;
static PropertyInfo t4549____Item_PropertyInfo = 
{
	&t4549_TI, "Item", &m26698_MI, &m26699_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4549_PIs[] =
{
	&t4549____Item_PropertyInfo,
	NULL
};
extern Il2CppType t681_0_0_0;
static ParameterInfo t4549_m26700_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t681_0_0_0},
};
extern TypeInfo t4549_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26700_MI = 
{
	"IndexOf", NULL, &t4549_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t4549_m26700_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t681_0_0_0;
static ParameterInfo t4549_m26701_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t681_0_0_0},
};
extern TypeInfo t4549_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26701_MI = 
{
	"Insert", NULL, &t4549_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t4549_m26701_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4549_m26702_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4549_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26702_MI = 
{
	"RemoveAt", NULL, &t4549_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t4549_m26702_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4549_m26698_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4549_TI;
extern Il2CppType t681_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26698_MI = 
{
	"get_Item", NULL, &t4549_TI, &t681_0_0_0, RuntimeInvoker_t14_t35, t4549_m26698_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t681_0_0_0;
static ParameterInfo t4549_m26699_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t681_0_0_0},
};
extern TypeInfo t4549_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26699_MI = 
{
	"set_Item", NULL, &t4549_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t4549_m26699_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4549_MIs[] =
{
	&m26700_MI,
	&m26701_MI,
	&m26702_MI,
	&m26698_MI,
	&m26699_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4548_TI;
extern TypeInfo t4550_TI;
static TypeInfo* t4549_ITIs[] = 
{
	&t600_TI,
	&t4548_TI,
	&t4550_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4549_0_0_0;
extern Il2CppType t4549_1_0_0;
struct t4549;
extern TypeInfo t4549_TI;
extern Il2CppGenericClass t4549_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t4549_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4549_MIs, t4549_PIs, NULL, NULL, NULL, NULL, NULL, &t4549_TI, t4549_ITIs, NULL, &t1409__CustomAttributeCache, &t4549_TI, &t4549_0_0_0, &t4549_1_0_0, NULL, &t4549_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3552_TI;

#include "t711.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.UInt64>
extern MethodInfo m26703_MI;
static PropertyInfo t3552____Current_PropertyInfo = 
{
	&t3552_TI, "Current", &m26703_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3552_PIs[] =
{
	&t3552____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3552_TI;
extern Il2CppType t711_0_0_0;
extern void* RuntimeInvoker_t711 (MethodInfo* method, void* obj, void** args);
MethodInfo m26703_MI = 
{
	"get_Current", NULL, &t3552_TI, &t711_0_0_0, RuntimeInvoker_t711, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3552_MIs[] =
{
	&m26703_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t3552_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3552_0_0_0;
extern Il2CppType t3552_1_0_0;
struct t3552;
extern TypeInfo t3552_TI;
extern Il2CppGenericClass t3552_GC;
TypeInfo t3552_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3552_MIs, t3552_PIs, NULL, NULL, NULL, NULL, NULL, &t3552_TI, t3552_ITIs, NULL, &EmptyCustomAttributesCache, &t3552_TI, &t3552_0_0_0, &t3552_1_0_0, NULL, &t3552_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2656.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2656_TI;
#include "t2656MD.h"

extern TypeInfo t2656_TI;
extern TypeInfo t711_TI;
extern TypeInfo t1278_TI;
extern MethodInfo m15171_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m20210_MI;
struct t24;
 uint64_t m20210 (t24 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20210_MI;


extern MethodInfo m15167_MI;
 void m15167 (t2656 * __this, t24 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15168_MI;
 t14 * m15168 (t2656 * __this, MethodInfo* method){
	{
		uint64_t L_0 = m15171(__this, &m15171_MI);
		uint64_t L_1 = L_0;
		t14 * L_2 = Box(InitializedTypeInfo(&t711_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m15169_MI;
 void m15169 (t2656 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15170_MI;
 bool m15170 (t2656 * __this, MethodInfo* method){
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
extern MethodInfo m15171_MI;
 uint64_t m15171 (t2656 * __this, MethodInfo* method){
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
		uint64_t L_8 = m20210(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m20210_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.UInt64>
extern Il2CppType t24_0_0_1;
FieldInfo t2656_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t2656_TI, offsetof(t2656, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t2656_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t2656_TI, offsetof(t2656, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t2656_FIs[] =
{
	&t2656_f0_FieldInfo,
	&t2656_f1_FieldInfo,
	NULL
};
extern MethodInfo m15168_MI;
static PropertyInfo t2656____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2656_TI, "System.Collections.IEnumerator.Current", &m15168_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15171_MI;
static PropertyInfo t2656____Current_PropertyInfo = 
{
	&t2656_TI, "Current", &m15171_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2656_PIs[] =
{
	&t2656____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2656____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t2656_m15167_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t2656_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m15167_MI = 
{
	".ctor", (methodPointerType)&m15167, &t2656_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2656_m15167_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2656_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m15168_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m15168, &t2656_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2656_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m15169_MI = 
{
	"Dispose", (methodPointerType)&m15169, &t2656_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2656_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m15170_MI = 
{
	"MoveNext", (methodPointerType)&m15170, &t2656_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2656_TI;
extern Il2CppType t711_0_0_0;
extern void* RuntimeInvoker_t711 (MethodInfo* method, void* obj, void** args);
MethodInfo m15171_MI = 
{
	"get_Current", (methodPointerType)&m15171, &t2656_TI, &t711_0_0_0, RuntimeInvoker_t711, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2656_MIs[] =
{
	&m15167_MI,
	&m15168_MI,
	&m15169_MI,
	&m15170_MI,
	&m15171_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m15168_MI;
extern MethodInfo m15170_MI;
extern MethodInfo m15169_MI;
extern MethodInfo m15171_MI;
static MethodInfo* t2656_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m15168_MI,
	&m15170_MI,
	&m15169_MI,
	&m15171_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3552_TI;
static TypeInfo* t2656_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t3552_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3552_TI;
static Il2CppInterfaceOffsetPair t2656_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t3552_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2656_0_0_0;
extern Il2CppType t2656_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t2656_TI;
extern Il2CppGenericClass t2656_GC;
extern TypeInfo t24_TI;
TypeInfo t2656_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2656_MIs, t2656_PIs, t2656_FIs, NULL, &t122_TI, NULL, &t24_TI, &t2656_TI, t2656_ITIs, t2656_VT, &EmptyCustomAttributesCache, &t2656_TI, &t2656_0_0_0, &t2656_1_0_0, t2656_IOs, &t2656_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2656)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4551_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.UInt64>
extern MethodInfo m26704_MI;
static PropertyInfo t4551____Count_PropertyInfo = 
{
	&t4551_TI, "Count", &m26704_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26705_MI;
static PropertyInfo t4551____IsReadOnly_PropertyInfo = 
{
	&t4551_TI, "IsReadOnly", &m26705_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4551_PIs[] =
{
	&t4551____Count_PropertyInfo,
	&t4551____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4551_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26704_MI = 
{
	"get_Count", NULL, &t4551_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4551_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m26705_MI = 
{
	"get_IsReadOnly", NULL, &t4551_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t711_0_0_0;
static ParameterInfo t4551_m26706_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t711_0_0_0},
};
extern TypeInfo t4551_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t710 (MethodInfo* method, void* obj, void** args);
MethodInfo m26706_MI = 
{
	"Add", NULL, &t4551_TI, &t25_0_0_0, RuntimeInvoker_t25_t710, t4551_m26706_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4551_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m26707_MI = 
{
	"Clear", NULL, &t4551_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t711_0_0_0;
static ParameterInfo t4551_m26708_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t711_0_0_0},
};
extern TypeInfo t4551_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t710 (MethodInfo* method, void* obj, void** args);
MethodInfo m26708_MI = 
{
	"Contains", NULL, &t4551_TI, &t26_0_0_0, RuntimeInvoker_t26_t710, t4551_m26708_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1171_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t4551_m26709_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1171_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4551_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26709_MI = 
{
	"CopyTo", NULL, &t4551_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t4551_m26709_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t711_0_0_0;
static ParameterInfo t4551_m26710_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t711_0_0_0},
};
extern TypeInfo t4551_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t710 (MethodInfo* method, void* obj, void** args);
MethodInfo m26710_MI = 
{
	"Remove", NULL, &t4551_TI, &t26_0_0_0, RuntimeInvoker_t26_t710, t4551_m26710_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4551_MIs[] =
{
	&m26704_MI,
	&m26705_MI,
	&m26706_MI,
	&m26707_MI,
	&m26708_MI,
	&m26709_MI,
	&m26710_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4553_TI;
static TypeInfo* t4551_ITIs[] = 
{
	&t600_TI,
	&t4553_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4551_0_0_0;
extern Il2CppType t4551_1_0_0;
struct t4551;
extern TypeInfo t4551_TI;
extern Il2CppGenericClass t4551_GC;
TypeInfo t4551_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4551_MIs, t4551_PIs, NULL, NULL, NULL, NULL, NULL, &t4551_TI, t4551_ITIs, NULL, &EmptyCustomAttributesCache, &t4551_TI, &t4551_0_0_0, &t4551_1_0_0, NULL, &t4551_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4553_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.UInt64>
extern TypeInfo t4553_TI;
extern Il2CppType t3552_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26711_MI = 
{
	"GetEnumerator", NULL, &t4553_TI, &t3552_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4553_MIs[] =
{
	&m26711_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t4553_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4553_0_0_0;
extern Il2CppType t4553_1_0_0;
struct t4553;
extern TypeInfo t4553_TI;
extern Il2CppGenericClass t4553_GC;
TypeInfo t4553_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4553_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4553_TI, t4553_ITIs, NULL, &EmptyCustomAttributesCache, &t4553_TI, &t4553_0_0_0, &t4553_1_0_0, NULL, &t4553_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4552_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.UInt64>
extern MethodInfo m26712_MI;
extern MethodInfo m26713_MI;
static PropertyInfo t4552____Item_PropertyInfo = 
{
	&t4552_TI, "Item", &m26712_MI, &m26713_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4552_PIs[] =
{
	&t4552____Item_PropertyInfo,
	NULL
};
extern Il2CppType t711_0_0_0;
static ParameterInfo t4552_m26714_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t711_0_0_0},
};
extern TypeInfo t4552_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t710 (MethodInfo* method, void* obj, void** args);
MethodInfo m26714_MI = 
{
	"IndexOf", NULL, &t4552_TI, &t35_0_0_0, RuntimeInvoker_t35_t710, t4552_m26714_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t711_0_0_0;
static ParameterInfo t4552_m26715_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t711_0_0_0},
};
extern TypeInfo t4552_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t710 (MethodInfo* method, void* obj, void** args);
MethodInfo m26715_MI = 
{
	"Insert", NULL, &t4552_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t710, t4552_m26715_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4552_m26716_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4552_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26716_MI = 
{
	"RemoveAt", NULL, &t4552_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t4552_m26716_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4552_m26712_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4552_TI;
extern Il2CppType t711_0_0_0;
extern void* RuntimeInvoker_t711_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26712_MI = 
{
	"get_Item", NULL, &t4552_TI, &t711_0_0_0, RuntimeInvoker_t711_t35, t4552_m26712_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t711_0_0_0;
static ParameterInfo t4552_m26713_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t711_0_0_0},
};
extern TypeInfo t4552_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t710 (MethodInfo* method, void* obj, void** args);
MethodInfo m26713_MI = 
{
	"set_Item", NULL, &t4552_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t710, t4552_m26713_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4552_MIs[] =
{
	&m26714_MI,
	&m26715_MI,
	&m26716_MI,
	&m26712_MI,
	&m26713_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4551_TI;
extern TypeInfo t4553_TI;
static TypeInfo* t4552_ITIs[] = 
{
	&t600_TI,
	&t4551_TI,
	&t4553_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4552_0_0_0;
extern Il2CppType t4552_1_0_0;
struct t4552;
extern TypeInfo t4552_TI;
extern Il2CppGenericClass t4552_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t4552_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4552_MIs, t4552_PIs, NULL, NULL, NULL, NULL, NULL, &t4552_TI, t4552_ITIs, NULL, &t1409__CustomAttributeCache, &t4552_TI, &t4552_0_0_0, &t4552_1_0_0, NULL, &t4552_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4554_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt64>>
extern MethodInfo m26717_MI;
static PropertyInfo t4554____Count_PropertyInfo = 
{
	&t4554_TI, "Count", &m26717_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26718_MI;
static PropertyInfo t4554____IsReadOnly_PropertyInfo = 
{
	&t4554_TI, "IsReadOnly", &m26718_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4554_PIs[] =
{
	&t4554____Count_PropertyInfo,
	&t4554____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4554_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26717_MI = 
{
	"get_Count", NULL, &t4554_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4554_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m26718_MI = 
{
	"get_IsReadOnly", NULL, &t4554_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1350_0_0_0;
static ParameterInfo t4554_m26719_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1350_0_0_0},
};
extern TypeInfo t4554_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26719_MI = 
{
	"Add", NULL, &t4554_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t4554_m26719_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4554_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m26720_MI = 
{
	"Clear", NULL, &t4554_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1350_0_0_0;
static ParameterInfo t4554_m26721_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1350_0_0_0},
};
extern TypeInfo t4554_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26721_MI = 
{
	"Contains", NULL, &t4554_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t4554_m26721_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2924_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t4554_m26722_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2924_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4554_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26722_MI = 
{
	"CopyTo", NULL, &t4554_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t4554_m26722_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1350_0_0_0;
static ParameterInfo t4554_m26723_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1350_0_0_0},
};
extern TypeInfo t4554_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26723_MI = 
{
	"Remove", NULL, &t4554_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t4554_m26723_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4554_MIs[] =
{
	&m26717_MI,
	&m26718_MI,
	&m26719_MI,
	&m26720_MI,
	&m26721_MI,
	&m26722_MI,
	&m26723_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4556_TI;
static TypeInfo* t4554_ITIs[] = 
{
	&t600_TI,
	&t4556_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4554_0_0_0;
extern Il2CppType t4554_1_0_0;
struct t4554;
extern TypeInfo t4554_TI;
extern Il2CppGenericClass t4554_GC;
TypeInfo t4554_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4554_MIs, t4554_PIs, NULL, NULL, NULL, NULL, NULL, &t4554_TI, t4554_ITIs, NULL, &EmptyCustomAttributesCache, &t4554_TI, &t4554_0_0_0, &t4554_1_0_0, NULL, &t4554_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4556_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.UInt64>>
extern TypeInfo t4556_TI;
extern Il2CppType t3553_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26724_MI = 
{
	"GetEnumerator", NULL, &t4556_TI, &t3553_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4556_MIs[] =
{
	&m26724_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t4556_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4556_0_0_0;
extern Il2CppType t4556_1_0_0;
struct t4556;
extern TypeInfo t4556_TI;
extern Il2CppGenericClass t4556_GC;
TypeInfo t4556_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4556_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4556_TI, t4556_ITIs, NULL, &EmptyCustomAttributesCache, &t4556_TI, &t4556_0_0_0, &t4556_1_0_0, NULL, &t4556_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3553_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.UInt64>>
extern MethodInfo m26725_MI;
static PropertyInfo t3553____Current_PropertyInfo = 
{
	&t3553_TI, "Current", &m26725_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3553_PIs[] =
{
	&t3553____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3553_TI;
extern Il2CppType t1350_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26725_MI = 
{
	"get_Current", NULL, &t3553_TI, &t1350_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3553_MIs[] =
{
	&m26725_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t3553_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3553_0_0_0;
extern Il2CppType t3553_1_0_0;
struct t3553;
extern TypeInfo t3553_TI;
extern Il2CppGenericClass t3553_GC;
TypeInfo t3553_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3553_MIs, t3553_PIs, NULL, NULL, NULL, NULL, NULL, &t3553_TI, t3553_ITIs, NULL, &EmptyCustomAttributesCache, &t3553_TI, &t3553_0_0_0, &t3553_1_0_0, NULL, &t3553_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1350_TI;



// Metadata Definition System.IComparable`1<System.UInt64>
extern Il2CppType t711_0_0_0;
static ParameterInfo t1350_m26726_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t711_0_0_0},
};
extern TypeInfo t1350_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t710 (MethodInfo* method, void* obj, void** args);
MethodInfo m26726_MI = 
{
	"CompareTo", NULL, &t1350_TI, &t35_0_0_0, RuntimeInvoker_t35_t710, t1350_m26726_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1350_MIs[] =
{
	&m26726_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1350_0_0_0;
extern Il2CppType t1350_1_0_0;
struct t1350;
extern TypeInfo t1350_TI;
extern Il2CppGenericClass t1350_GC;
TypeInfo t1350_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t1350_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1350_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1350_TI, &t1350_0_0_0, &t1350_1_0_0, NULL, &t1350_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t2657.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2657_TI;
#include "t2657MD.h"

extern TypeInfo t2657_TI;
extern TypeInfo t1350_TI;
extern TypeInfo t1278_TI;
extern MethodInfo m15176_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m20221_MI;
struct t24;
#define m20221(__this, p0, method) (t14*)m16357_gshared((t24 *)__this, (int32_t)p0, method)
extern MethodInfo m20221_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt64>>
extern Il2CppType t24_0_0_1;
FieldInfo t2657_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t2657_TI, offsetof(t2657, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t2657_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t2657_TI, offsetof(t2657, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t2657_FIs[] =
{
	&t2657_f0_FieldInfo,
	&t2657_f1_FieldInfo,
	NULL
};
extern MethodInfo m15173_MI;
static PropertyInfo t2657____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2657_TI, "System.Collections.IEnumerator.Current", &m15173_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15176_MI;
static PropertyInfo t2657____Current_PropertyInfo = 
{
	&t2657_TI, "Current", &m15176_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2657_PIs[] =
{
	&t2657____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2657____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t2657_m15172_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t2657_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m15172_MI = 
{
	".ctor", (methodPointerType)&m7877_gshared, &t2657_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2657_m15172_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2657_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m15173_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7879_gshared, &t2657_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2657_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m15174_MI = 
{
	"Dispose", (methodPointerType)&m7881_gshared, &t2657_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2657_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m15175_MI = 
{
	"MoveNext", (methodPointerType)&m7883_gshared, &t2657_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2657_TI;
extern Il2CppType t1350_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m15176_MI = 
{
	"get_Current", (methodPointerType)&m7885_gshared, &t2657_TI, &t1350_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2657_MIs[] =
{
	&m15172_MI,
	&m15173_MI,
	&m15174_MI,
	&m15175_MI,
	&m15176_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m15173_MI;
extern MethodInfo m15175_MI;
extern MethodInfo m15174_MI;
extern MethodInfo m15176_MI;
static MethodInfo* t2657_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m15173_MI,
	&m15175_MI,
	&m15174_MI,
	&m15176_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3553_TI;
static TypeInfo* t2657_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t3553_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3553_TI;
static Il2CppInterfaceOffsetPair t2657_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t3553_TI, 7},
};
extern MethodInfo m15176_MI;
extern TypeInfo t1350_TI;
extern MethodInfo m20221_MI;
static void* t2657_RGCTXData[3] = 
{
	&m15176_MI,
	&t1350_TI,
	&m20221_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2657_0_0_0;
extern Il2CppType t2657_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t2657_TI;
extern Il2CppGenericClass t2657_GC;
extern TypeInfo t24_TI;
TypeInfo t2657_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2657_MIs, t2657_PIs, t2657_FIs, NULL, &t122_TI, NULL, &t24_TI, &t2657_TI, t2657_ITIs, t2657_VT, &EmptyCustomAttributesCache, &t2657_TI, &t2657_0_0_0, &t2657_1_0_0, t2657_IOs, &t2657_GC, NULL, NULL, NULL, t2657_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2657)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4555_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IComparable`1<System.UInt64>>
extern MethodInfo m26727_MI;
extern MethodInfo m26728_MI;
static PropertyInfo t4555____Item_PropertyInfo = 
{
	&t4555_TI, "Item", &m26727_MI, &m26728_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4555_PIs[] =
{
	&t4555____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1350_0_0_0;
static ParameterInfo t4555_m26729_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1350_0_0_0},
};
extern TypeInfo t4555_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26729_MI = 
{
	"IndexOf", NULL, &t4555_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t4555_m26729_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1350_0_0_0;
static ParameterInfo t4555_m26730_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1350_0_0_0},
};
extern TypeInfo t4555_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26730_MI = 
{
	"Insert", NULL, &t4555_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t4555_m26730_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4555_m26731_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4555_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26731_MI = 
{
	"RemoveAt", NULL, &t4555_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t4555_m26731_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4555_m26727_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4555_TI;
extern Il2CppType t1350_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26727_MI = 
{
	"get_Item", NULL, &t4555_TI, &t1350_0_0_0, RuntimeInvoker_t14_t35, t4555_m26727_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1350_0_0_0;
static ParameterInfo t4555_m26728_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1350_0_0_0},
};
extern TypeInfo t4555_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26728_MI = 
{
	"set_Item", NULL, &t4555_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t4555_m26728_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4555_MIs[] =
{
	&m26729_MI,
	&m26730_MI,
	&m26731_MI,
	&m26727_MI,
	&m26728_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4554_TI;
extern TypeInfo t4556_TI;
static TypeInfo* t4555_ITIs[] = 
{
	&t600_TI,
	&t4554_TI,
	&t4556_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4555_0_0_0;
extern Il2CppType t4555_1_0_0;
struct t4555;
extern TypeInfo t4555_TI;
extern Il2CppGenericClass t4555_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t4555_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4555_MIs, t4555_PIs, NULL, NULL, NULL, NULL, NULL, &t4555_TI, t4555_ITIs, NULL, &t1409__CustomAttributeCache, &t4555_TI, &t4555_0_0_0, &t4555_1_0_0, NULL, &t4555_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4557_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt64>>
extern MethodInfo m26732_MI;
static PropertyInfo t4557____Count_PropertyInfo = 
{
	&t4557_TI, "Count", &m26732_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26733_MI;
static PropertyInfo t4557____IsReadOnly_PropertyInfo = 
{
	&t4557_TI, "IsReadOnly", &m26733_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4557_PIs[] =
{
	&t4557____Count_PropertyInfo,
	&t4557____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4557_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26732_MI = 
{
	"get_Count", NULL, &t4557_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4557_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m26733_MI = 
{
	"get_IsReadOnly", NULL, &t4557_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1351_0_0_0;
static ParameterInfo t4557_m26734_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1351_0_0_0},
};
extern TypeInfo t4557_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26734_MI = 
{
	"Add", NULL, &t4557_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t4557_m26734_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4557_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m26735_MI = 
{
	"Clear", NULL, &t4557_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1351_0_0_0;
static ParameterInfo t4557_m26736_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1351_0_0_0},
};
extern TypeInfo t4557_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26736_MI = 
{
	"Contains", NULL, &t4557_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t4557_m26736_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2925_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t4557_m26737_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2925_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4557_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26737_MI = 
{
	"CopyTo", NULL, &t4557_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t4557_m26737_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1351_0_0_0;
static ParameterInfo t4557_m26738_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1351_0_0_0},
};
extern TypeInfo t4557_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26738_MI = 
{
	"Remove", NULL, &t4557_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t4557_m26738_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4557_MIs[] =
{
	&m26732_MI,
	&m26733_MI,
	&m26734_MI,
	&m26735_MI,
	&m26736_MI,
	&m26737_MI,
	&m26738_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4559_TI;
static TypeInfo* t4557_ITIs[] = 
{
	&t600_TI,
	&t4559_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4557_0_0_0;
extern Il2CppType t4557_1_0_0;
struct t4557;
extern TypeInfo t4557_TI;
extern Il2CppGenericClass t4557_GC;
TypeInfo t4557_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4557_MIs, t4557_PIs, NULL, NULL, NULL, NULL, NULL, &t4557_TI, t4557_ITIs, NULL, &EmptyCustomAttributesCache, &t4557_TI, &t4557_0_0_0, &t4557_1_0_0, NULL, &t4557_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4559_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.UInt64>>
extern TypeInfo t4559_TI;
extern Il2CppType t3554_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26739_MI = 
{
	"GetEnumerator", NULL, &t4559_TI, &t3554_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4559_MIs[] =
{
	&m26739_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t4559_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4559_0_0_0;
extern Il2CppType t4559_1_0_0;
struct t4559;
extern TypeInfo t4559_TI;
extern Il2CppGenericClass t4559_GC;
TypeInfo t4559_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4559_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4559_TI, t4559_ITIs, NULL, &EmptyCustomAttributesCache, &t4559_TI, &t4559_0_0_0, &t4559_1_0_0, NULL, &t4559_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3554_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.UInt64>>
extern MethodInfo m26740_MI;
static PropertyInfo t3554____Current_PropertyInfo = 
{
	&t3554_TI, "Current", &m26740_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3554_PIs[] =
{
	&t3554____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3554_TI;
extern Il2CppType t1351_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26740_MI = 
{
	"get_Current", NULL, &t3554_TI, &t1351_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3554_MIs[] =
{
	&m26740_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t3554_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3554_0_0_0;
extern Il2CppType t3554_1_0_0;
struct t3554;
extern TypeInfo t3554_TI;
extern Il2CppGenericClass t3554_GC;
TypeInfo t3554_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3554_MIs, t3554_PIs, NULL, NULL, NULL, NULL, NULL, &t3554_TI, t3554_ITIs, NULL, &EmptyCustomAttributesCache, &t3554_TI, &t3554_0_0_0, &t3554_1_0_0, NULL, &t3554_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1351_TI;



// Metadata Definition System.IEquatable`1<System.UInt64>
extern Il2CppType t711_0_0_0;
static ParameterInfo t1351_m26741_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t711_0_0_0},
};
extern TypeInfo t1351_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t710 (MethodInfo* method, void* obj, void** args);
MethodInfo m26741_MI = 
{
	"Equals", NULL, &t1351_TI, &t26_0_0_0, RuntimeInvoker_t26_t710, t1351_m26741_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1351_MIs[] =
{
	&m26741_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1351_0_0_0;
extern Il2CppType t1351_1_0_0;
struct t1351;
extern TypeInfo t1351_TI;
extern Il2CppGenericClass t1351_GC;
TypeInfo t1351_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t1351_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1351_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1351_TI, &t1351_0_0_0, &t1351_1_0_0, NULL, &t1351_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t2658.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2658_TI;
#include "t2658MD.h"

extern TypeInfo t2658_TI;
extern TypeInfo t1351_TI;
extern TypeInfo t1278_TI;
extern MethodInfo m15181_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m20232_MI;
struct t24;
#define m20232(__this, p0, method) (t14*)m16357_gshared((t24 *)__this, (int32_t)p0, method)
extern MethodInfo m20232_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt64>>
extern Il2CppType t24_0_0_1;
FieldInfo t2658_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t2658_TI, offsetof(t2658, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t2658_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t2658_TI, offsetof(t2658, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t2658_FIs[] =
{
	&t2658_f0_FieldInfo,
	&t2658_f1_FieldInfo,
	NULL
};
extern MethodInfo m15178_MI;
static PropertyInfo t2658____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2658_TI, "System.Collections.IEnumerator.Current", &m15178_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15181_MI;
static PropertyInfo t2658____Current_PropertyInfo = 
{
	&t2658_TI, "Current", &m15181_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2658_PIs[] =
{
	&t2658____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2658____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t2658_m15177_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t2658_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m15177_MI = 
{
	".ctor", (methodPointerType)&m7877_gshared, &t2658_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2658_m15177_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2658_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m15178_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7879_gshared, &t2658_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2658_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m15179_MI = 
{
	"Dispose", (methodPointerType)&m7881_gshared, &t2658_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2658_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m15180_MI = 
{
	"MoveNext", (methodPointerType)&m7883_gshared, &t2658_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2658_TI;
extern Il2CppType t1351_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m15181_MI = 
{
	"get_Current", (methodPointerType)&m7885_gshared, &t2658_TI, &t1351_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2658_MIs[] =
{
	&m15177_MI,
	&m15178_MI,
	&m15179_MI,
	&m15180_MI,
	&m15181_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m15178_MI;
extern MethodInfo m15180_MI;
extern MethodInfo m15179_MI;
extern MethodInfo m15181_MI;
static MethodInfo* t2658_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m15178_MI,
	&m15180_MI,
	&m15179_MI,
	&m15181_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3554_TI;
static TypeInfo* t2658_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t3554_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3554_TI;
static Il2CppInterfaceOffsetPair t2658_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t3554_TI, 7},
};
extern MethodInfo m15181_MI;
extern TypeInfo t1351_TI;
extern MethodInfo m20232_MI;
static void* t2658_RGCTXData[3] = 
{
	&m15181_MI,
	&t1351_TI,
	&m20232_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2658_0_0_0;
extern Il2CppType t2658_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t2658_TI;
extern Il2CppGenericClass t2658_GC;
extern TypeInfo t24_TI;
TypeInfo t2658_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2658_MIs, t2658_PIs, t2658_FIs, NULL, &t122_TI, NULL, &t24_TI, &t2658_TI, t2658_ITIs, t2658_VT, &EmptyCustomAttributesCache, &t2658_TI, &t2658_0_0_0, &t2658_1_0_0, t2658_IOs, &t2658_GC, NULL, NULL, NULL, t2658_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2658)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4558_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IEquatable`1<System.UInt64>>
extern MethodInfo m26742_MI;
extern MethodInfo m26743_MI;
static PropertyInfo t4558____Item_PropertyInfo = 
{
	&t4558_TI, "Item", &m26742_MI, &m26743_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4558_PIs[] =
{
	&t4558____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1351_0_0_0;
static ParameterInfo t4558_m26744_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1351_0_0_0},
};
extern TypeInfo t4558_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26744_MI = 
{
	"IndexOf", NULL, &t4558_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t4558_m26744_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1351_0_0_0;
static ParameterInfo t4558_m26745_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1351_0_0_0},
};
extern TypeInfo t4558_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26745_MI = 
{
	"Insert", NULL, &t4558_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t4558_m26745_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4558_m26746_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4558_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26746_MI = 
{
	"RemoveAt", NULL, &t4558_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t4558_m26746_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4558_m26742_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4558_TI;
extern Il2CppType t1351_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26742_MI = 
{
	"get_Item", NULL, &t4558_TI, &t1351_0_0_0, RuntimeInvoker_t14_t35, t4558_m26742_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1351_0_0_0;
static ParameterInfo t4558_m26743_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1351_0_0_0},
};
extern TypeInfo t4558_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26743_MI = 
{
	"set_Item", NULL, &t4558_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t4558_m26743_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4558_MIs[] =
{
	&m26744_MI,
	&m26745_MI,
	&m26746_MI,
	&m26742_MI,
	&m26743_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4557_TI;
extern TypeInfo t4559_TI;
static TypeInfo* t4558_ITIs[] = 
{
	&t600_TI,
	&t4557_TI,
	&t4559_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4558_0_0_0;
extern Il2CppType t4558_1_0_0;
struct t4558;
extern TypeInfo t4558_TI;
extern Il2CppGenericClass t4558_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t4558_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4558_MIs, t4558_PIs, NULL, NULL, NULL, NULL, NULL, &t4558_TI, t4558_ITIs, NULL, &t1409__CustomAttributeCache, &t4558_TI, &t4558_0_0_0, &t4558_1_0_0, NULL, &t4558_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3555_TI;

#include "t348.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Byte>
extern MethodInfo m26747_MI;
static PropertyInfo t3555____Current_PropertyInfo = 
{
	&t3555_TI, "Current", &m26747_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3555_PIs[] =
{
	&t3555____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3555_TI;
extern Il2CppType t348_0_0_0;
extern void* RuntimeInvoker_t348 (MethodInfo* method, void* obj, void** args);
MethodInfo m26747_MI = 
{
	"get_Current", NULL, &t3555_TI, &t348_0_0_0, RuntimeInvoker_t348, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3555_MIs[] =
{
	&m26747_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t3555_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3555_0_0_0;
extern Il2CppType t3555_1_0_0;
struct t3555;
extern TypeInfo t3555_TI;
extern Il2CppGenericClass t3555_GC;
TypeInfo t3555_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3555_MIs, t3555_PIs, NULL, NULL, NULL, NULL, NULL, &t3555_TI, t3555_ITIs, NULL, &EmptyCustomAttributesCache, &t3555_TI, &t3555_0_0_0, &t3555_1_0_0, NULL, &t3555_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2659.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2659_TI;
#include "t2659MD.h"

extern TypeInfo t2659_TI;
extern TypeInfo t348_TI;
extern TypeInfo t1278_TI;
extern MethodInfo m15186_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m20243_MI;
struct t24;
 uint8_t m20243 (t24 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20243_MI;


extern MethodInfo m15182_MI;
 void m15182 (t2659 * __this, t24 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15183_MI;
 t14 * m15183 (t2659 * __this, MethodInfo* method){
	{
		uint8_t L_0 = m15186(__this, &m15186_MI);
		uint8_t L_1 = L_0;
		t14 * L_2 = Box(InitializedTypeInfo(&t348_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m15184_MI;
 void m15184 (t2659 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15185_MI;
 bool m15185 (t2659 * __this, MethodInfo* method){
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
extern MethodInfo m15186_MI;
 uint8_t m15186 (t2659 * __this, MethodInfo* method){
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
		uint8_t L_8 = m20243(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m20243_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Byte>
extern Il2CppType t24_0_0_1;
FieldInfo t2659_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t2659_TI, offsetof(t2659, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t2659_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t2659_TI, offsetof(t2659, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t2659_FIs[] =
{
	&t2659_f0_FieldInfo,
	&t2659_f1_FieldInfo,
	NULL
};
extern MethodInfo m15183_MI;
static PropertyInfo t2659____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2659_TI, "System.Collections.IEnumerator.Current", &m15183_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15186_MI;
static PropertyInfo t2659____Current_PropertyInfo = 
{
	&t2659_TI, "Current", &m15186_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2659_PIs[] =
{
	&t2659____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2659____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t2659_m15182_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t2659_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m15182_MI = 
{
	".ctor", (methodPointerType)&m15182, &t2659_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2659_m15182_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2659_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m15183_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m15183, &t2659_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2659_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m15184_MI = 
{
	"Dispose", (methodPointerType)&m15184, &t2659_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2659_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m15185_MI = 
{
	"MoveNext", (methodPointerType)&m15185, &t2659_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2659_TI;
extern Il2CppType t348_0_0_0;
extern void* RuntimeInvoker_t348 (MethodInfo* method, void* obj, void** args);
MethodInfo m15186_MI = 
{
	"get_Current", (methodPointerType)&m15186, &t2659_TI, &t348_0_0_0, RuntimeInvoker_t348, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2659_MIs[] =
{
	&m15182_MI,
	&m15183_MI,
	&m15184_MI,
	&m15185_MI,
	&m15186_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m15183_MI;
extern MethodInfo m15185_MI;
extern MethodInfo m15184_MI;
extern MethodInfo m15186_MI;
static MethodInfo* t2659_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m15183_MI,
	&m15185_MI,
	&m15184_MI,
	&m15186_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3555_TI;
static TypeInfo* t2659_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t3555_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3555_TI;
static Il2CppInterfaceOffsetPair t2659_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t3555_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2659_0_0_0;
extern Il2CppType t2659_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t2659_TI;
extern Il2CppGenericClass t2659_GC;
extern TypeInfo t24_TI;
TypeInfo t2659_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2659_MIs, t2659_PIs, t2659_FIs, NULL, &t122_TI, NULL, &t24_TI, &t2659_TI, t2659_ITIs, t2659_VT, &EmptyCustomAttributesCache, &t2659_TI, &t2659_0_0_0, &t2659_1_0_0, t2659_IOs, &t2659_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2659)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4560_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Byte>
extern MethodInfo m26748_MI;
static PropertyInfo t4560____Count_PropertyInfo = 
{
	&t4560_TI, "Count", &m26748_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26749_MI;
static PropertyInfo t4560____IsReadOnly_PropertyInfo = 
{
	&t4560_TI, "IsReadOnly", &m26749_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4560_PIs[] =
{
	&t4560____Count_PropertyInfo,
	&t4560____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4560_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26748_MI = 
{
	"get_Count", NULL, &t4560_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4560_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m26749_MI = 
{
	"get_IsReadOnly", NULL, &t4560_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t348_0_0_0;
static ParameterInfo t4560_m26750_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t348_0_0_0},
};
extern TypeInfo t4560_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t310 (MethodInfo* method, void* obj, void** args);
MethodInfo m26750_MI = 
{
	"Add", NULL, &t4560_TI, &t25_0_0_0, RuntimeInvoker_t25_t310, t4560_m26750_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4560_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m26751_MI = 
{
	"Clear", NULL, &t4560_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t348_0_0_0;
static ParameterInfo t4560_m26752_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t348_0_0_0},
};
extern TypeInfo t4560_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t310 (MethodInfo* method, void* obj, void** args);
MethodInfo m26752_MI = 
{
	"Contains", NULL, &t4560_TI, &t26_0_0_0, RuntimeInvoker_t26_t310, t4560_m26752_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t769_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t4560_m26753_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t769_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4560_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26753_MI = 
{
	"CopyTo", NULL, &t4560_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t4560_m26753_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t348_0_0_0;
static ParameterInfo t4560_m26754_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t348_0_0_0},
};
extern TypeInfo t4560_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t310 (MethodInfo* method, void* obj, void** args);
MethodInfo m26754_MI = 
{
	"Remove", NULL, &t4560_TI, &t26_0_0_0, RuntimeInvoker_t26_t310, t4560_m26754_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4560_MIs[] =
{
	&m26748_MI,
	&m26749_MI,
	&m26750_MI,
	&m26751_MI,
	&m26752_MI,
	&m26753_MI,
	&m26754_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4562_TI;
static TypeInfo* t4560_ITIs[] = 
{
	&t600_TI,
	&t4562_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4560_0_0_0;
extern Il2CppType t4560_1_0_0;
struct t4560;
extern TypeInfo t4560_TI;
extern Il2CppGenericClass t4560_GC;
TypeInfo t4560_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4560_MIs, t4560_PIs, NULL, NULL, NULL, NULL, NULL, &t4560_TI, t4560_ITIs, NULL, &EmptyCustomAttributesCache, &t4560_TI, &t4560_0_0_0, &t4560_1_0_0, NULL, &t4560_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4562_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Byte>
extern TypeInfo t4562_TI;
extern Il2CppType t3555_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26755_MI = 
{
	"GetEnumerator", NULL, &t4562_TI, &t3555_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4562_MIs[] =
{
	&m26755_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t4562_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4562_0_0_0;
extern Il2CppType t4562_1_0_0;
struct t4562;
extern TypeInfo t4562_TI;
extern Il2CppGenericClass t4562_GC;
TypeInfo t4562_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4562_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4562_TI, t4562_ITIs, NULL, &EmptyCustomAttributesCache, &t4562_TI, &t4562_0_0_0, &t4562_1_0_0, NULL, &t4562_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4561_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Byte>
extern MethodInfo m26756_MI;
extern MethodInfo m26757_MI;
static PropertyInfo t4561____Item_PropertyInfo = 
{
	&t4561_TI, "Item", &m26756_MI, &m26757_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4561_PIs[] =
{
	&t4561____Item_PropertyInfo,
	NULL
};
extern Il2CppType t348_0_0_0;
static ParameterInfo t4561_m26758_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t348_0_0_0},
};
extern TypeInfo t4561_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t310 (MethodInfo* method, void* obj, void** args);
MethodInfo m26758_MI = 
{
	"IndexOf", NULL, &t4561_TI, &t35_0_0_0, RuntimeInvoker_t35_t310, t4561_m26758_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t348_0_0_0;
static ParameterInfo t4561_m26759_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t348_0_0_0},
};
extern TypeInfo t4561_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t310 (MethodInfo* method, void* obj, void** args);
MethodInfo m26759_MI = 
{
	"Insert", NULL, &t4561_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t310, t4561_m26759_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4561_m26760_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4561_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26760_MI = 
{
	"RemoveAt", NULL, &t4561_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t4561_m26760_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4561_m26756_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4561_TI;
extern Il2CppType t348_0_0_0;
extern void* RuntimeInvoker_t348_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26756_MI = 
{
	"get_Item", NULL, &t4561_TI, &t348_0_0_0, RuntimeInvoker_t348_t35, t4561_m26756_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t348_0_0_0;
static ParameterInfo t4561_m26757_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t348_0_0_0},
};
extern TypeInfo t4561_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t310 (MethodInfo* method, void* obj, void** args);
MethodInfo m26757_MI = 
{
	"set_Item", NULL, &t4561_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t310, t4561_m26757_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4561_MIs[] =
{
	&m26758_MI,
	&m26759_MI,
	&m26760_MI,
	&m26756_MI,
	&m26757_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4560_TI;
extern TypeInfo t4562_TI;
static TypeInfo* t4561_ITIs[] = 
{
	&t600_TI,
	&t4560_TI,
	&t4562_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4561_0_0_0;
extern Il2CppType t4561_1_0_0;
struct t4561;
extern TypeInfo t4561_TI;
extern Il2CppGenericClass t4561_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t4561_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4561_MIs, t4561_PIs, NULL, NULL, NULL, NULL, NULL, &t4561_TI, t4561_ITIs, NULL, &t1409__CustomAttributeCache, &t4561_TI, &t4561_0_0_0, &t4561_1_0_0, NULL, &t4561_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4563_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IComparable`1<System.Byte>>
extern MethodInfo m26761_MI;
static PropertyInfo t4563____Count_PropertyInfo = 
{
	&t4563_TI, "Count", &m26761_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26762_MI;
static PropertyInfo t4563____IsReadOnly_PropertyInfo = 
{
	&t4563_TI, "IsReadOnly", &m26762_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4563_PIs[] =
{
	&t4563____Count_PropertyInfo,
	&t4563____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4563_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26761_MI = 
{
	"get_Count", NULL, &t4563_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4563_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m26762_MI = 
{
	"get_IsReadOnly", NULL, &t4563_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1352_0_0_0;
static ParameterInfo t4563_m26763_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1352_0_0_0},
};
extern TypeInfo t4563_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26763_MI = 
{
	"Add", NULL, &t4563_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t4563_m26763_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4563_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m26764_MI = 
{
	"Clear", NULL, &t4563_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1352_0_0_0;
static ParameterInfo t4563_m26765_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1352_0_0_0},
};
extern TypeInfo t4563_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26765_MI = 
{
	"Contains", NULL, &t4563_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t4563_m26765_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2926_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t4563_m26766_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2926_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4563_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26766_MI = 
{
	"CopyTo", NULL, &t4563_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t4563_m26766_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1352_0_0_0;
static ParameterInfo t4563_m26767_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1352_0_0_0},
};
extern TypeInfo t4563_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26767_MI = 
{
	"Remove", NULL, &t4563_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t4563_m26767_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4563_MIs[] =
{
	&m26761_MI,
	&m26762_MI,
	&m26763_MI,
	&m26764_MI,
	&m26765_MI,
	&m26766_MI,
	&m26767_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4565_TI;
static TypeInfo* t4563_ITIs[] = 
{
	&t600_TI,
	&t4565_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4563_0_0_0;
extern Il2CppType t4563_1_0_0;
struct t4563;
extern TypeInfo t4563_TI;
extern Il2CppGenericClass t4563_GC;
TypeInfo t4563_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4563_MIs, t4563_PIs, NULL, NULL, NULL, NULL, NULL, &t4563_TI, t4563_ITIs, NULL, &EmptyCustomAttributesCache, &t4563_TI, &t4563_0_0_0, &t4563_1_0_0, NULL, &t4563_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4565_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.Byte>>
extern TypeInfo t4565_TI;
extern Il2CppType t3556_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26768_MI = 
{
	"GetEnumerator", NULL, &t4565_TI, &t3556_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4565_MIs[] =
{
	&m26768_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t4565_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4565_0_0_0;
extern Il2CppType t4565_1_0_0;
struct t4565;
extern TypeInfo t4565_TI;
extern Il2CppGenericClass t4565_GC;
TypeInfo t4565_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4565_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4565_TI, t4565_ITIs, NULL, &EmptyCustomAttributesCache, &t4565_TI, &t4565_0_0_0, &t4565_1_0_0, NULL, &t4565_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3556_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.Byte>>
extern MethodInfo m26769_MI;
static PropertyInfo t3556____Current_PropertyInfo = 
{
	&t3556_TI, "Current", &m26769_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3556_PIs[] =
{
	&t3556____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3556_TI;
extern Il2CppType t1352_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26769_MI = 
{
	"get_Current", NULL, &t3556_TI, &t1352_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3556_MIs[] =
{
	&m26769_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t3556_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3556_0_0_0;
extern Il2CppType t3556_1_0_0;
struct t3556;
extern TypeInfo t3556_TI;
extern Il2CppGenericClass t3556_GC;
TypeInfo t3556_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3556_MIs, t3556_PIs, NULL, NULL, NULL, NULL, NULL, &t3556_TI, t3556_ITIs, NULL, &EmptyCustomAttributesCache, &t3556_TI, &t3556_0_0_0, &t3556_1_0_0, NULL, &t3556_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1352_TI;



// Metadata Definition System.IComparable`1<System.Byte>
extern Il2CppType t348_0_0_0;
static ParameterInfo t1352_m26770_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t348_0_0_0},
};
extern TypeInfo t1352_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t310 (MethodInfo* method, void* obj, void** args);
MethodInfo m26770_MI = 
{
	"CompareTo", NULL, &t1352_TI, &t35_0_0_0, RuntimeInvoker_t35_t310, t1352_m26770_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1352_MIs[] =
{
	&m26770_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1352_0_0_0;
extern Il2CppType t1352_1_0_0;
struct t1352;
extern TypeInfo t1352_TI;
extern Il2CppGenericClass t1352_GC;
TypeInfo t1352_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t1352_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1352_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1352_TI, &t1352_0_0_0, &t1352_1_0_0, NULL, &t1352_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t2660.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2660_TI;
#include "t2660MD.h"

extern TypeInfo t2660_TI;
extern TypeInfo t1352_TI;
extern TypeInfo t1278_TI;
extern MethodInfo m15191_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m20254_MI;
struct t24;
#define m20254(__this, p0, method) (t14*)m16357_gshared((t24 *)__this, (int32_t)p0, method)
extern MethodInfo m20254_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.IComparable`1<System.Byte>>
extern Il2CppType t24_0_0_1;
FieldInfo t2660_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t2660_TI, offsetof(t2660, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t2660_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t2660_TI, offsetof(t2660, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t2660_FIs[] =
{
	&t2660_f0_FieldInfo,
	&t2660_f1_FieldInfo,
	NULL
};
extern MethodInfo m15188_MI;
static PropertyInfo t2660____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2660_TI, "System.Collections.IEnumerator.Current", &m15188_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15191_MI;
static PropertyInfo t2660____Current_PropertyInfo = 
{
	&t2660_TI, "Current", &m15191_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2660_PIs[] =
{
	&t2660____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2660____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t2660_m15187_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t2660_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m15187_MI = 
{
	".ctor", (methodPointerType)&m7877_gshared, &t2660_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2660_m15187_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2660_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m15188_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7879_gshared, &t2660_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2660_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m15189_MI = 
{
	"Dispose", (methodPointerType)&m7881_gshared, &t2660_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2660_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m15190_MI = 
{
	"MoveNext", (methodPointerType)&m7883_gshared, &t2660_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2660_TI;
extern Il2CppType t1352_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m15191_MI = 
{
	"get_Current", (methodPointerType)&m7885_gshared, &t2660_TI, &t1352_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2660_MIs[] =
{
	&m15187_MI,
	&m15188_MI,
	&m15189_MI,
	&m15190_MI,
	&m15191_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m15188_MI;
extern MethodInfo m15190_MI;
extern MethodInfo m15189_MI;
extern MethodInfo m15191_MI;
static MethodInfo* t2660_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m15188_MI,
	&m15190_MI,
	&m15189_MI,
	&m15191_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3556_TI;
static TypeInfo* t2660_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t3556_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3556_TI;
static Il2CppInterfaceOffsetPair t2660_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t3556_TI, 7},
};
extern MethodInfo m15191_MI;
extern TypeInfo t1352_TI;
extern MethodInfo m20254_MI;
static void* t2660_RGCTXData[3] = 
{
	&m15191_MI,
	&t1352_TI,
	&m20254_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2660_0_0_0;
extern Il2CppType t2660_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t2660_TI;
extern Il2CppGenericClass t2660_GC;
extern TypeInfo t24_TI;
TypeInfo t2660_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2660_MIs, t2660_PIs, t2660_FIs, NULL, &t122_TI, NULL, &t24_TI, &t2660_TI, t2660_ITIs, t2660_VT, &EmptyCustomAttributesCache, &t2660_TI, &t2660_0_0_0, &t2660_1_0_0, t2660_IOs, &t2660_GC, NULL, NULL, NULL, t2660_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2660)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4564_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IComparable`1<System.Byte>>
extern MethodInfo m26771_MI;
extern MethodInfo m26772_MI;
static PropertyInfo t4564____Item_PropertyInfo = 
{
	&t4564_TI, "Item", &m26771_MI, &m26772_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4564_PIs[] =
{
	&t4564____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1352_0_0_0;
static ParameterInfo t4564_m26773_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1352_0_0_0},
};
extern TypeInfo t4564_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26773_MI = 
{
	"IndexOf", NULL, &t4564_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t4564_m26773_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1352_0_0_0;
static ParameterInfo t4564_m26774_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1352_0_0_0},
};
extern TypeInfo t4564_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26774_MI = 
{
	"Insert", NULL, &t4564_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t4564_m26774_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4564_m26775_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4564_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26775_MI = 
{
	"RemoveAt", NULL, &t4564_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t4564_m26775_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4564_m26771_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4564_TI;
extern Il2CppType t1352_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26771_MI = 
{
	"get_Item", NULL, &t4564_TI, &t1352_0_0_0, RuntimeInvoker_t14_t35, t4564_m26771_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1352_0_0_0;
static ParameterInfo t4564_m26772_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1352_0_0_0},
};
extern TypeInfo t4564_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26772_MI = 
{
	"set_Item", NULL, &t4564_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t4564_m26772_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4564_MIs[] =
{
	&m26773_MI,
	&m26774_MI,
	&m26775_MI,
	&m26771_MI,
	&m26772_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4563_TI;
extern TypeInfo t4565_TI;
static TypeInfo* t4564_ITIs[] = 
{
	&t600_TI,
	&t4563_TI,
	&t4565_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4564_0_0_0;
extern Il2CppType t4564_1_0_0;
struct t4564;
extern TypeInfo t4564_TI;
extern Il2CppGenericClass t4564_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t4564_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4564_MIs, t4564_PIs, NULL, NULL, NULL, NULL, NULL, &t4564_TI, t4564_ITIs, NULL, &t1409__CustomAttributeCache, &t4564_TI, &t4564_0_0_0, &t4564_1_0_0, NULL, &t4564_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4566_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Byte>>
extern MethodInfo m26776_MI;
static PropertyInfo t4566____Count_PropertyInfo = 
{
	&t4566_TI, "Count", &m26776_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26777_MI;
static PropertyInfo t4566____IsReadOnly_PropertyInfo = 
{
	&t4566_TI, "IsReadOnly", &m26777_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4566_PIs[] =
{
	&t4566____Count_PropertyInfo,
	&t4566____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4566_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26776_MI = 
{
	"get_Count", NULL, &t4566_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4566_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m26777_MI = 
{
	"get_IsReadOnly", NULL, &t4566_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1353_0_0_0;
static ParameterInfo t4566_m26778_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1353_0_0_0},
};
extern TypeInfo t4566_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26778_MI = 
{
	"Add", NULL, &t4566_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t4566_m26778_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4566_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m26779_MI = 
{
	"Clear", NULL, &t4566_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1353_0_0_0;
static ParameterInfo t4566_m26780_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1353_0_0_0},
};
extern TypeInfo t4566_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26780_MI = 
{
	"Contains", NULL, &t4566_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t4566_m26780_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2927_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t4566_m26781_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2927_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4566_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26781_MI = 
{
	"CopyTo", NULL, &t4566_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t4566_m26781_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1353_0_0_0;
static ParameterInfo t4566_m26782_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1353_0_0_0},
};
extern TypeInfo t4566_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26782_MI = 
{
	"Remove", NULL, &t4566_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t4566_m26782_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4566_MIs[] =
{
	&m26776_MI,
	&m26777_MI,
	&m26778_MI,
	&m26779_MI,
	&m26780_MI,
	&m26781_MI,
	&m26782_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4568_TI;
static TypeInfo* t4566_ITIs[] = 
{
	&t600_TI,
	&t4568_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4566_0_0_0;
extern Il2CppType t4566_1_0_0;
struct t4566;
extern TypeInfo t4566_TI;
extern Il2CppGenericClass t4566_GC;
TypeInfo t4566_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4566_MIs, t4566_PIs, NULL, NULL, NULL, NULL, NULL, &t4566_TI, t4566_ITIs, NULL, &EmptyCustomAttributesCache, &t4566_TI, &t4566_0_0_0, &t4566_1_0_0, NULL, &t4566_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4568_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.Byte>>
extern TypeInfo t4568_TI;
extern Il2CppType t3557_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26783_MI = 
{
	"GetEnumerator", NULL, &t4568_TI, &t3557_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4568_MIs[] =
{
	&m26783_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t4568_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4568_0_0_0;
extern Il2CppType t4568_1_0_0;
struct t4568;
extern TypeInfo t4568_TI;
extern Il2CppGenericClass t4568_GC;
TypeInfo t4568_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4568_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4568_TI, t4568_ITIs, NULL, &EmptyCustomAttributesCache, &t4568_TI, &t4568_0_0_0, &t4568_1_0_0, NULL, &t4568_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3557_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.Byte>>
extern MethodInfo m26784_MI;
static PropertyInfo t3557____Current_PropertyInfo = 
{
	&t3557_TI, "Current", &m26784_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3557_PIs[] =
{
	&t3557____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3557_TI;
extern Il2CppType t1353_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26784_MI = 
{
	"get_Current", NULL, &t3557_TI, &t1353_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3557_MIs[] =
{
	&m26784_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t3557_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3557_0_0_0;
extern Il2CppType t3557_1_0_0;
struct t3557;
extern TypeInfo t3557_TI;
extern Il2CppGenericClass t3557_GC;
TypeInfo t3557_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3557_MIs, t3557_PIs, NULL, NULL, NULL, NULL, NULL, &t3557_TI, t3557_ITIs, NULL, &EmptyCustomAttributesCache, &t3557_TI, &t3557_0_0_0, &t3557_1_0_0, NULL, &t3557_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1353_TI;



// Metadata Definition System.IEquatable`1<System.Byte>
extern Il2CppType t348_0_0_0;
static ParameterInfo t1353_m26785_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t348_0_0_0},
};
extern TypeInfo t1353_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t310 (MethodInfo* method, void* obj, void** args);
MethodInfo m26785_MI = 
{
	"Equals", NULL, &t1353_TI, &t26_0_0_0, RuntimeInvoker_t26_t310, t1353_m26785_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1353_MIs[] =
{
	&m26785_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1353_0_0_0;
extern Il2CppType t1353_1_0_0;
struct t1353;
extern TypeInfo t1353_TI;
extern Il2CppGenericClass t1353_GC;
TypeInfo t1353_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t1353_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1353_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1353_TI, &t1353_0_0_0, &t1353_1_0_0, NULL, &t1353_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t2661.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2661_TI;
#include "t2661MD.h"

extern TypeInfo t2661_TI;
extern TypeInfo t1353_TI;
extern TypeInfo t1278_TI;
extern MethodInfo m15196_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m20265_MI;
struct t24;
#define m20265(__this, p0, method) (t14*)m16357_gshared((t24 *)__this, (int32_t)p0, method)
extern MethodInfo m20265_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.IEquatable`1<System.Byte>>
extern Il2CppType t24_0_0_1;
FieldInfo t2661_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t2661_TI, offsetof(t2661, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t2661_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t2661_TI, offsetof(t2661, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t2661_FIs[] =
{
	&t2661_f0_FieldInfo,
	&t2661_f1_FieldInfo,
	NULL
};
extern MethodInfo m15193_MI;
static PropertyInfo t2661____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2661_TI, "System.Collections.IEnumerator.Current", &m15193_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15196_MI;
static PropertyInfo t2661____Current_PropertyInfo = 
{
	&t2661_TI, "Current", &m15196_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2661_PIs[] =
{
	&t2661____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2661____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t2661_m15192_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t2661_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m15192_MI = 
{
	".ctor", (methodPointerType)&m7877_gshared, &t2661_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2661_m15192_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2661_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m15193_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7879_gshared, &t2661_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2661_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m15194_MI = 
{
	"Dispose", (methodPointerType)&m7881_gshared, &t2661_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2661_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m15195_MI = 
{
	"MoveNext", (methodPointerType)&m7883_gshared, &t2661_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2661_TI;
extern Il2CppType t1353_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m15196_MI = 
{
	"get_Current", (methodPointerType)&m7885_gshared, &t2661_TI, &t1353_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2661_MIs[] =
{
	&m15192_MI,
	&m15193_MI,
	&m15194_MI,
	&m15195_MI,
	&m15196_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m15193_MI;
extern MethodInfo m15195_MI;
extern MethodInfo m15194_MI;
extern MethodInfo m15196_MI;
static MethodInfo* t2661_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m15193_MI,
	&m15195_MI,
	&m15194_MI,
	&m15196_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3557_TI;
static TypeInfo* t2661_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t3557_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3557_TI;
static Il2CppInterfaceOffsetPair t2661_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t3557_TI, 7},
};
extern MethodInfo m15196_MI;
extern TypeInfo t1353_TI;
extern MethodInfo m20265_MI;
static void* t2661_RGCTXData[3] = 
{
	&m15196_MI,
	&t1353_TI,
	&m20265_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2661_0_0_0;
extern Il2CppType t2661_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t2661_TI;
extern Il2CppGenericClass t2661_GC;
extern TypeInfo t24_TI;
TypeInfo t2661_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2661_MIs, t2661_PIs, t2661_FIs, NULL, &t122_TI, NULL, &t24_TI, &t2661_TI, t2661_ITIs, t2661_VT, &EmptyCustomAttributesCache, &t2661_TI, &t2661_0_0_0, &t2661_1_0_0, t2661_IOs, &t2661_GC, NULL, NULL, NULL, t2661_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2661)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4567_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IEquatable`1<System.Byte>>
extern MethodInfo m26786_MI;
extern MethodInfo m26787_MI;
static PropertyInfo t4567____Item_PropertyInfo = 
{
	&t4567_TI, "Item", &m26786_MI, &m26787_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4567_PIs[] =
{
	&t4567____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1353_0_0_0;
static ParameterInfo t4567_m26788_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1353_0_0_0},
};
extern TypeInfo t4567_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26788_MI = 
{
	"IndexOf", NULL, &t4567_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t4567_m26788_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1353_0_0_0;
static ParameterInfo t4567_m26789_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1353_0_0_0},
};
extern TypeInfo t4567_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26789_MI = 
{
	"Insert", NULL, &t4567_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t4567_m26789_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4567_m26790_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4567_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26790_MI = 
{
	"RemoveAt", NULL, &t4567_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t4567_m26790_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4567_m26786_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4567_TI;
extern Il2CppType t1353_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26786_MI = 
{
	"get_Item", NULL, &t4567_TI, &t1353_0_0_0, RuntimeInvoker_t14_t35, t4567_m26786_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1353_0_0_0;
static ParameterInfo t4567_m26787_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1353_0_0_0},
};
extern TypeInfo t4567_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26787_MI = 
{
	"set_Item", NULL, &t4567_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t4567_m26787_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4567_MIs[] =
{
	&m26788_MI,
	&m26789_MI,
	&m26790_MI,
	&m26786_MI,
	&m26787_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4566_TI;
extern TypeInfo t4568_TI;
static TypeInfo* t4567_ITIs[] = 
{
	&t600_TI,
	&t4566_TI,
	&t4568_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4567_0_0_0;
extern Il2CppType t4567_1_0_0;
struct t4567;
extern TypeInfo t4567_TI;
extern Il2CppGenericClass t4567_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t4567_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4567_MIs, t4567_PIs, NULL, NULL, NULL, NULL, NULL, &t4567_TI, t4567_ITIs, NULL, &t1409__CustomAttributeCache, &t4567_TI, &t4567_0_0_0, &t4567_1_0_0, NULL, &t4567_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3558_TI;

#include "t310.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.SByte>
extern MethodInfo m26791_MI;
static PropertyInfo t3558____Current_PropertyInfo = 
{
	&t3558_TI, "Current", &m26791_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3558_PIs[] =
{
	&t3558____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3558_TI;
extern Il2CppType t310_0_0_0;
extern void* RuntimeInvoker_t310 (MethodInfo* method, void* obj, void** args);
MethodInfo m26791_MI = 
{
	"get_Current", NULL, &t3558_TI, &t310_0_0_0, RuntimeInvoker_t310, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3558_MIs[] =
{
	&m26791_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t3558_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3558_0_0_0;
extern Il2CppType t3558_1_0_0;
struct t3558;
extern TypeInfo t3558_TI;
extern Il2CppGenericClass t3558_GC;
TypeInfo t3558_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3558_MIs, t3558_PIs, NULL, NULL, NULL, NULL, NULL, &t3558_TI, t3558_ITIs, NULL, &EmptyCustomAttributesCache, &t3558_TI, &t3558_0_0_0, &t3558_1_0_0, NULL, &t3558_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2662.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2662_TI;
#include "t2662MD.h"

extern TypeInfo t2662_TI;
extern TypeInfo t310_TI;
extern TypeInfo t1278_TI;
extern MethodInfo m15201_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m20276_MI;
struct t24;
 int8_t m20276 (t24 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20276_MI;


extern MethodInfo m15197_MI;
 void m15197 (t2662 * __this, t24 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15198_MI;
 t14 * m15198 (t2662 * __this, MethodInfo* method){
	{
		int8_t L_0 = m15201(__this, &m15201_MI);
		int8_t L_1 = L_0;
		t14 * L_2 = Box(InitializedTypeInfo(&t310_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m15199_MI;
 void m15199 (t2662 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15200_MI;
 bool m15200 (t2662 * __this, MethodInfo* method){
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
extern MethodInfo m15201_MI;
 int8_t m15201 (t2662 * __this, MethodInfo* method){
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
		int8_t L_8 = m20276(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m20276_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.SByte>
extern Il2CppType t24_0_0_1;
FieldInfo t2662_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t2662_TI, offsetof(t2662, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t2662_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t2662_TI, offsetof(t2662, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t2662_FIs[] =
{
	&t2662_f0_FieldInfo,
	&t2662_f1_FieldInfo,
	NULL
};
extern MethodInfo m15198_MI;
static PropertyInfo t2662____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2662_TI, "System.Collections.IEnumerator.Current", &m15198_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15201_MI;
static PropertyInfo t2662____Current_PropertyInfo = 
{
	&t2662_TI, "Current", &m15201_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2662_PIs[] =
{
	&t2662____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2662____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t2662_m15197_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t2662_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m15197_MI = 
{
	".ctor", (methodPointerType)&m15197, &t2662_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2662_m15197_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2662_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m15198_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m15198, &t2662_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2662_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m15199_MI = 
{
	"Dispose", (methodPointerType)&m15199, &t2662_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2662_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m15200_MI = 
{
	"MoveNext", (methodPointerType)&m15200, &t2662_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2662_TI;
extern Il2CppType t310_0_0_0;
extern void* RuntimeInvoker_t310 (MethodInfo* method, void* obj, void** args);
MethodInfo m15201_MI = 
{
	"get_Current", (methodPointerType)&m15201, &t2662_TI, &t310_0_0_0, RuntimeInvoker_t310, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2662_MIs[] =
{
	&m15197_MI,
	&m15198_MI,
	&m15199_MI,
	&m15200_MI,
	&m15201_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m15198_MI;
extern MethodInfo m15200_MI;
extern MethodInfo m15199_MI;
extern MethodInfo m15201_MI;
static MethodInfo* t2662_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m15198_MI,
	&m15200_MI,
	&m15199_MI,
	&m15201_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3558_TI;
static TypeInfo* t2662_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t3558_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3558_TI;
static Il2CppInterfaceOffsetPair t2662_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t3558_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2662_0_0_0;
extern Il2CppType t2662_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t2662_TI;
extern Il2CppGenericClass t2662_GC;
extern TypeInfo t24_TI;
TypeInfo t2662_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2662_MIs, t2662_PIs, t2662_FIs, NULL, &t122_TI, NULL, &t24_TI, &t2662_TI, t2662_ITIs, t2662_VT, &EmptyCustomAttributesCache, &t2662_TI, &t2662_0_0_0, &t2662_1_0_0, t2662_IOs, &t2662_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2662)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4569_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.SByte>
extern MethodInfo m26792_MI;
static PropertyInfo t4569____Count_PropertyInfo = 
{
	&t4569_TI, "Count", &m26792_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26793_MI;
static PropertyInfo t4569____IsReadOnly_PropertyInfo = 
{
	&t4569_TI, "IsReadOnly", &m26793_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4569_PIs[] =
{
	&t4569____Count_PropertyInfo,
	&t4569____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4569_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26792_MI = 
{
	"get_Count", NULL, &t4569_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4569_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m26793_MI = 
{
	"get_IsReadOnly", NULL, &t4569_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t310_0_0_0;
static ParameterInfo t4569_m26794_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t310_0_0_0},
};
extern TypeInfo t4569_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t310 (MethodInfo* method, void* obj, void** args);
MethodInfo m26794_MI = 
{
	"Add", NULL, &t4569_TI, &t25_0_0_0, RuntimeInvoker_t25_t310, t4569_m26794_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4569_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m26795_MI = 
{
	"Clear", NULL, &t4569_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t310_0_0_0;
static ParameterInfo t4569_m26796_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t310_0_0_0},
};
extern TypeInfo t4569_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t310 (MethodInfo* method, void* obj, void** args);
MethodInfo m26796_MI = 
{
	"Contains", NULL, &t4569_TI, &t26_0_0_0, RuntimeInvoker_t26_t310, t4569_m26796_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1212_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t4569_m26797_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1212_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4569_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26797_MI = 
{
	"CopyTo", NULL, &t4569_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t4569_m26797_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t310_0_0_0;
static ParameterInfo t4569_m26798_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t310_0_0_0},
};
extern TypeInfo t4569_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t310 (MethodInfo* method, void* obj, void** args);
MethodInfo m26798_MI = 
{
	"Remove", NULL, &t4569_TI, &t26_0_0_0, RuntimeInvoker_t26_t310, t4569_m26798_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4569_MIs[] =
{
	&m26792_MI,
	&m26793_MI,
	&m26794_MI,
	&m26795_MI,
	&m26796_MI,
	&m26797_MI,
	&m26798_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4571_TI;
static TypeInfo* t4569_ITIs[] = 
{
	&t600_TI,
	&t4571_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4569_0_0_0;
extern Il2CppType t4569_1_0_0;
struct t4569;
extern TypeInfo t4569_TI;
extern Il2CppGenericClass t4569_GC;
TypeInfo t4569_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4569_MIs, t4569_PIs, NULL, NULL, NULL, NULL, NULL, &t4569_TI, t4569_ITIs, NULL, &EmptyCustomAttributesCache, &t4569_TI, &t4569_0_0_0, &t4569_1_0_0, NULL, &t4569_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4571_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.SByte>
extern TypeInfo t4571_TI;
extern Il2CppType t3558_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26799_MI = 
{
	"GetEnumerator", NULL, &t4571_TI, &t3558_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4571_MIs[] =
{
	&m26799_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t4571_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4571_0_0_0;
extern Il2CppType t4571_1_0_0;
struct t4571;
extern TypeInfo t4571_TI;
extern Il2CppGenericClass t4571_GC;
TypeInfo t4571_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4571_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4571_TI, t4571_ITIs, NULL, &EmptyCustomAttributesCache, &t4571_TI, &t4571_0_0_0, &t4571_1_0_0, NULL, &t4571_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4570_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.SByte>
extern MethodInfo m26800_MI;
extern MethodInfo m26801_MI;
static PropertyInfo t4570____Item_PropertyInfo = 
{
	&t4570_TI, "Item", &m26800_MI, &m26801_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4570_PIs[] =
{
	&t4570____Item_PropertyInfo,
	NULL
};
extern Il2CppType t310_0_0_0;
static ParameterInfo t4570_m26802_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t310_0_0_0},
};
extern TypeInfo t4570_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t310 (MethodInfo* method, void* obj, void** args);
MethodInfo m26802_MI = 
{
	"IndexOf", NULL, &t4570_TI, &t35_0_0_0, RuntimeInvoker_t35_t310, t4570_m26802_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t310_0_0_0;
static ParameterInfo t4570_m26803_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t310_0_0_0},
};
extern TypeInfo t4570_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t310 (MethodInfo* method, void* obj, void** args);
MethodInfo m26803_MI = 
{
	"Insert", NULL, &t4570_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t310, t4570_m26803_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4570_m26804_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4570_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26804_MI = 
{
	"RemoveAt", NULL, &t4570_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t4570_m26804_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4570_m26800_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4570_TI;
extern Il2CppType t310_0_0_0;
extern void* RuntimeInvoker_t310_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26800_MI = 
{
	"get_Item", NULL, &t4570_TI, &t310_0_0_0, RuntimeInvoker_t310_t35, t4570_m26800_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t310_0_0_0;
static ParameterInfo t4570_m26801_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t310_0_0_0},
};
extern TypeInfo t4570_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t310 (MethodInfo* method, void* obj, void** args);
MethodInfo m26801_MI = 
{
	"set_Item", NULL, &t4570_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t310, t4570_m26801_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4570_MIs[] =
{
	&m26802_MI,
	&m26803_MI,
	&m26804_MI,
	&m26800_MI,
	&m26801_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4569_TI;
extern TypeInfo t4571_TI;
static TypeInfo* t4570_ITIs[] = 
{
	&t600_TI,
	&t4569_TI,
	&t4571_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4570_0_0_0;
extern Il2CppType t4570_1_0_0;
struct t4570;
extern TypeInfo t4570_TI;
extern Il2CppGenericClass t4570_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t4570_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4570_MIs, t4570_PIs, NULL, NULL, NULL, NULL, NULL, &t4570_TI, t4570_ITIs, NULL, &t1409__CustomAttributeCache, &t4570_TI, &t4570_0_0_0, &t4570_1_0_0, NULL, &t4570_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4572_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IComparable`1<System.SByte>>
extern MethodInfo m26805_MI;
static PropertyInfo t4572____Count_PropertyInfo = 
{
	&t4572_TI, "Count", &m26805_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26806_MI;
static PropertyInfo t4572____IsReadOnly_PropertyInfo = 
{
	&t4572_TI, "IsReadOnly", &m26806_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4572_PIs[] =
{
	&t4572____Count_PropertyInfo,
	&t4572____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4572_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26805_MI = 
{
	"get_Count", NULL, &t4572_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4572_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m26806_MI = 
{
	"get_IsReadOnly", NULL, &t4572_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1354_0_0_0;
static ParameterInfo t4572_m26807_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1354_0_0_0},
};
extern TypeInfo t4572_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26807_MI = 
{
	"Add", NULL, &t4572_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t4572_m26807_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4572_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m26808_MI = 
{
	"Clear", NULL, &t4572_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1354_0_0_0;
static ParameterInfo t4572_m26809_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1354_0_0_0},
};
extern TypeInfo t4572_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26809_MI = 
{
	"Contains", NULL, &t4572_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t4572_m26809_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2928_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t4572_m26810_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2928_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4572_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26810_MI = 
{
	"CopyTo", NULL, &t4572_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t4572_m26810_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1354_0_0_0;
static ParameterInfo t4572_m26811_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1354_0_0_0},
};
extern TypeInfo t4572_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26811_MI = 
{
	"Remove", NULL, &t4572_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t4572_m26811_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4572_MIs[] =
{
	&m26805_MI,
	&m26806_MI,
	&m26807_MI,
	&m26808_MI,
	&m26809_MI,
	&m26810_MI,
	&m26811_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4574_TI;
static TypeInfo* t4572_ITIs[] = 
{
	&t600_TI,
	&t4574_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4572_0_0_0;
extern Il2CppType t4572_1_0_0;
struct t4572;
extern TypeInfo t4572_TI;
extern Il2CppGenericClass t4572_GC;
TypeInfo t4572_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4572_MIs, t4572_PIs, NULL, NULL, NULL, NULL, NULL, &t4572_TI, t4572_ITIs, NULL, &EmptyCustomAttributesCache, &t4572_TI, &t4572_0_0_0, &t4572_1_0_0, NULL, &t4572_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4574_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.SByte>>
extern TypeInfo t4574_TI;
extern Il2CppType t3559_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26812_MI = 
{
	"GetEnumerator", NULL, &t4574_TI, &t3559_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4574_MIs[] =
{
	&m26812_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t4574_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4574_0_0_0;
extern Il2CppType t4574_1_0_0;
struct t4574;
extern TypeInfo t4574_TI;
extern Il2CppGenericClass t4574_GC;
TypeInfo t4574_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4574_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4574_TI, t4574_ITIs, NULL, &EmptyCustomAttributesCache, &t4574_TI, &t4574_0_0_0, &t4574_1_0_0, NULL, &t4574_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3559_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.SByte>>
extern MethodInfo m26813_MI;
static PropertyInfo t3559____Current_PropertyInfo = 
{
	&t3559_TI, "Current", &m26813_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3559_PIs[] =
{
	&t3559____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3559_TI;
extern Il2CppType t1354_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26813_MI = 
{
	"get_Current", NULL, &t3559_TI, &t1354_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3559_MIs[] =
{
	&m26813_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t3559_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3559_0_0_0;
extern Il2CppType t3559_1_0_0;
struct t3559;
extern TypeInfo t3559_TI;
extern Il2CppGenericClass t3559_GC;
TypeInfo t3559_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3559_MIs, t3559_PIs, NULL, NULL, NULL, NULL, NULL, &t3559_TI, t3559_ITIs, NULL, &EmptyCustomAttributesCache, &t3559_TI, &t3559_0_0_0, &t3559_1_0_0, NULL, &t3559_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1354_TI;



// Metadata Definition System.IComparable`1<System.SByte>
extern Il2CppType t310_0_0_0;
static ParameterInfo t1354_m26814_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t310_0_0_0},
};
extern TypeInfo t1354_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t310 (MethodInfo* method, void* obj, void** args);
MethodInfo m26814_MI = 
{
	"CompareTo", NULL, &t1354_TI, &t35_0_0_0, RuntimeInvoker_t35_t310, t1354_m26814_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1354_MIs[] =
{
	&m26814_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1354_0_0_0;
extern Il2CppType t1354_1_0_0;
struct t1354;
extern TypeInfo t1354_TI;
extern Il2CppGenericClass t1354_GC;
TypeInfo t1354_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t1354_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1354_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1354_TI, &t1354_0_0_0, &t1354_1_0_0, NULL, &t1354_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t2663.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2663_TI;
#include "t2663MD.h"

extern TypeInfo t2663_TI;
extern TypeInfo t1354_TI;
extern TypeInfo t1278_TI;
extern MethodInfo m15206_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m20287_MI;
struct t24;
#define m20287(__this, p0, method) (t14*)m16357_gshared((t24 *)__this, (int32_t)p0, method)
extern MethodInfo m20287_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.IComparable`1<System.SByte>>
extern Il2CppType t24_0_0_1;
FieldInfo t2663_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t2663_TI, offsetof(t2663, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t2663_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t2663_TI, offsetof(t2663, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t2663_FIs[] =
{
	&t2663_f0_FieldInfo,
	&t2663_f1_FieldInfo,
	NULL
};
extern MethodInfo m15203_MI;
static PropertyInfo t2663____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2663_TI, "System.Collections.IEnumerator.Current", &m15203_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15206_MI;
static PropertyInfo t2663____Current_PropertyInfo = 
{
	&t2663_TI, "Current", &m15206_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2663_PIs[] =
{
	&t2663____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2663____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t2663_m15202_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t2663_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m15202_MI = 
{
	".ctor", (methodPointerType)&m7877_gshared, &t2663_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2663_m15202_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2663_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m15203_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7879_gshared, &t2663_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2663_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m15204_MI = 
{
	"Dispose", (methodPointerType)&m7881_gshared, &t2663_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2663_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m15205_MI = 
{
	"MoveNext", (methodPointerType)&m7883_gshared, &t2663_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2663_TI;
extern Il2CppType t1354_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m15206_MI = 
{
	"get_Current", (methodPointerType)&m7885_gshared, &t2663_TI, &t1354_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2663_MIs[] =
{
	&m15202_MI,
	&m15203_MI,
	&m15204_MI,
	&m15205_MI,
	&m15206_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m15203_MI;
extern MethodInfo m15205_MI;
extern MethodInfo m15204_MI;
extern MethodInfo m15206_MI;
static MethodInfo* t2663_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m15203_MI,
	&m15205_MI,
	&m15204_MI,
	&m15206_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3559_TI;
static TypeInfo* t2663_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t3559_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3559_TI;
static Il2CppInterfaceOffsetPair t2663_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t3559_TI, 7},
};
extern MethodInfo m15206_MI;
extern TypeInfo t1354_TI;
extern MethodInfo m20287_MI;
static void* t2663_RGCTXData[3] = 
{
	&m15206_MI,
	&t1354_TI,
	&m20287_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2663_0_0_0;
extern Il2CppType t2663_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t2663_TI;
extern Il2CppGenericClass t2663_GC;
extern TypeInfo t24_TI;
TypeInfo t2663_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2663_MIs, t2663_PIs, t2663_FIs, NULL, &t122_TI, NULL, &t24_TI, &t2663_TI, t2663_ITIs, t2663_VT, &EmptyCustomAttributesCache, &t2663_TI, &t2663_0_0_0, &t2663_1_0_0, t2663_IOs, &t2663_GC, NULL, NULL, NULL, t2663_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2663)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4573_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IComparable`1<System.SByte>>
extern MethodInfo m26815_MI;
extern MethodInfo m26816_MI;
static PropertyInfo t4573____Item_PropertyInfo = 
{
	&t4573_TI, "Item", &m26815_MI, &m26816_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4573_PIs[] =
{
	&t4573____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1354_0_0_0;
static ParameterInfo t4573_m26817_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1354_0_0_0},
};
extern TypeInfo t4573_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26817_MI = 
{
	"IndexOf", NULL, &t4573_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t4573_m26817_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1354_0_0_0;
static ParameterInfo t4573_m26818_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1354_0_0_0},
};
extern TypeInfo t4573_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26818_MI = 
{
	"Insert", NULL, &t4573_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t4573_m26818_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4573_m26819_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4573_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26819_MI = 
{
	"RemoveAt", NULL, &t4573_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t4573_m26819_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4573_m26815_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4573_TI;
extern Il2CppType t1354_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26815_MI = 
{
	"get_Item", NULL, &t4573_TI, &t1354_0_0_0, RuntimeInvoker_t14_t35, t4573_m26815_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1354_0_0_0;
static ParameterInfo t4573_m26816_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1354_0_0_0},
};
extern TypeInfo t4573_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26816_MI = 
{
	"set_Item", NULL, &t4573_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t4573_m26816_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4573_MIs[] =
{
	&m26817_MI,
	&m26818_MI,
	&m26819_MI,
	&m26815_MI,
	&m26816_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4572_TI;
extern TypeInfo t4574_TI;
static TypeInfo* t4573_ITIs[] = 
{
	&t600_TI,
	&t4572_TI,
	&t4574_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4573_0_0_0;
extern Il2CppType t4573_1_0_0;
struct t4573;
extern TypeInfo t4573_TI;
extern Il2CppGenericClass t4573_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t4573_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4573_MIs, t4573_PIs, NULL, NULL, NULL, NULL, NULL, &t4573_TI, t4573_ITIs, NULL, &t1409__CustomAttributeCache, &t4573_TI, &t4573_0_0_0, &t4573_1_0_0, NULL, &t4573_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4575_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IEquatable`1<System.SByte>>
extern MethodInfo m26820_MI;
static PropertyInfo t4575____Count_PropertyInfo = 
{
	&t4575_TI, "Count", &m26820_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26821_MI;
static PropertyInfo t4575____IsReadOnly_PropertyInfo = 
{
	&t4575_TI, "IsReadOnly", &m26821_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4575_PIs[] =
{
	&t4575____Count_PropertyInfo,
	&t4575____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4575_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26820_MI = 
{
	"get_Count", NULL, &t4575_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4575_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m26821_MI = 
{
	"get_IsReadOnly", NULL, &t4575_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1355_0_0_0;
static ParameterInfo t4575_m26822_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1355_0_0_0},
};
extern TypeInfo t4575_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26822_MI = 
{
	"Add", NULL, &t4575_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t4575_m26822_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4575_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m26823_MI = 
{
	"Clear", NULL, &t4575_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1355_0_0_0;
static ParameterInfo t4575_m26824_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1355_0_0_0},
};
extern TypeInfo t4575_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26824_MI = 
{
	"Contains", NULL, &t4575_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t4575_m26824_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2929_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t4575_m26825_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2929_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4575_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26825_MI = 
{
	"CopyTo", NULL, &t4575_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t4575_m26825_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1355_0_0_0;
static ParameterInfo t4575_m26826_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1355_0_0_0},
};
extern TypeInfo t4575_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26826_MI = 
{
	"Remove", NULL, &t4575_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t4575_m26826_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4575_MIs[] =
{
	&m26820_MI,
	&m26821_MI,
	&m26822_MI,
	&m26823_MI,
	&m26824_MI,
	&m26825_MI,
	&m26826_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4577_TI;
static TypeInfo* t4575_ITIs[] = 
{
	&t600_TI,
	&t4577_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4575_0_0_0;
extern Il2CppType t4575_1_0_0;
struct t4575;
extern TypeInfo t4575_TI;
extern Il2CppGenericClass t4575_GC;
TypeInfo t4575_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4575_MIs, t4575_PIs, NULL, NULL, NULL, NULL, NULL, &t4575_TI, t4575_ITIs, NULL, &EmptyCustomAttributesCache, &t4575_TI, &t4575_0_0_0, &t4575_1_0_0, NULL, &t4575_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4577_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.SByte>>
extern TypeInfo t4577_TI;
extern Il2CppType t3560_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26827_MI = 
{
	"GetEnumerator", NULL, &t4577_TI, &t3560_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4577_MIs[] =
{
	&m26827_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t4577_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4577_0_0_0;
extern Il2CppType t4577_1_0_0;
struct t4577;
extern TypeInfo t4577_TI;
extern Il2CppGenericClass t4577_GC;
TypeInfo t4577_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4577_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4577_TI, t4577_ITIs, NULL, &EmptyCustomAttributesCache, &t4577_TI, &t4577_0_0_0, &t4577_1_0_0, NULL, &t4577_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3560_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.SByte>>
extern MethodInfo m26828_MI;
static PropertyInfo t3560____Current_PropertyInfo = 
{
	&t3560_TI, "Current", &m26828_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3560_PIs[] =
{
	&t3560____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3560_TI;
extern Il2CppType t1355_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26828_MI = 
{
	"get_Current", NULL, &t3560_TI, &t1355_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3560_MIs[] =
{
	&m26828_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t3560_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3560_0_0_0;
extern Il2CppType t3560_1_0_0;
struct t3560;
extern TypeInfo t3560_TI;
extern Il2CppGenericClass t3560_GC;
TypeInfo t3560_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3560_MIs, t3560_PIs, NULL, NULL, NULL, NULL, NULL, &t3560_TI, t3560_ITIs, NULL, &EmptyCustomAttributesCache, &t3560_TI, &t3560_0_0_0, &t3560_1_0_0, NULL, &t3560_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1355_TI;



// Metadata Definition System.IEquatable`1<System.SByte>
extern Il2CppType t310_0_0_0;
static ParameterInfo t1355_m26829_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t310_0_0_0},
};
extern TypeInfo t1355_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t310 (MethodInfo* method, void* obj, void** args);
MethodInfo m26829_MI = 
{
	"Equals", NULL, &t1355_TI, &t26_0_0_0, RuntimeInvoker_t26_t310, t1355_m26829_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1355_MIs[] =
{
	&m26829_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1355_0_0_0;
extern Il2CppType t1355_1_0_0;
struct t1355;
extern TypeInfo t1355_TI;
extern Il2CppGenericClass t1355_GC;
TypeInfo t1355_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t1355_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1355_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1355_TI, &t1355_0_0_0, &t1355_1_0_0, NULL, &t1355_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t2664.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2664_TI;
#include "t2664MD.h"

extern TypeInfo t2664_TI;
extern TypeInfo t1355_TI;
extern TypeInfo t1278_TI;
extern MethodInfo m15211_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m20298_MI;
struct t24;
#define m20298(__this, p0, method) (t14*)m16357_gshared((t24 *)__this, (int32_t)p0, method)
extern MethodInfo m20298_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.IEquatable`1<System.SByte>>
extern Il2CppType t24_0_0_1;
FieldInfo t2664_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t2664_TI, offsetof(t2664, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t2664_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t2664_TI, offsetof(t2664, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t2664_FIs[] =
{
	&t2664_f0_FieldInfo,
	&t2664_f1_FieldInfo,
	NULL
};
extern MethodInfo m15208_MI;
static PropertyInfo t2664____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2664_TI, "System.Collections.IEnumerator.Current", &m15208_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15211_MI;
static PropertyInfo t2664____Current_PropertyInfo = 
{
	&t2664_TI, "Current", &m15211_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2664_PIs[] =
{
	&t2664____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2664____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t2664_m15207_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t2664_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m15207_MI = 
{
	".ctor", (methodPointerType)&m7877_gshared, &t2664_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2664_m15207_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2664_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m15208_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7879_gshared, &t2664_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2664_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m15209_MI = 
{
	"Dispose", (methodPointerType)&m7881_gshared, &t2664_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2664_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m15210_MI = 
{
	"MoveNext", (methodPointerType)&m7883_gshared, &t2664_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2664_TI;
extern Il2CppType t1355_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m15211_MI = 
{
	"get_Current", (methodPointerType)&m7885_gshared, &t2664_TI, &t1355_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2664_MIs[] =
{
	&m15207_MI,
	&m15208_MI,
	&m15209_MI,
	&m15210_MI,
	&m15211_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m15208_MI;
extern MethodInfo m15210_MI;
extern MethodInfo m15209_MI;
extern MethodInfo m15211_MI;
static MethodInfo* t2664_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m15208_MI,
	&m15210_MI,
	&m15209_MI,
	&m15211_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3560_TI;
static TypeInfo* t2664_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t3560_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3560_TI;
static Il2CppInterfaceOffsetPair t2664_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t3560_TI, 7},
};
extern MethodInfo m15211_MI;
extern TypeInfo t1355_TI;
extern MethodInfo m20298_MI;
static void* t2664_RGCTXData[3] = 
{
	&m15211_MI,
	&t1355_TI,
	&m20298_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2664_0_0_0;
extern Il2CppType t2664_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t2664_TI;
extern Il2CppGenericClass t2664_GC;
extern TypeInfo t24_TI;
TypeInfo t2664_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2664_MIs, t2664_PIs, t2664_FIs, NULL, &t122_TI, NULL, &t24_TI, &t2664_TI, t2664_ITIs, t2664_VT, &EmptyCustomAttributesCache, &t2664_TI, &t2664_0_0_0, &t2664_1_0_0, t2664_IOs, &t2664_GC, NULL, NULL, NULL, t2664_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2664)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4576_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IEquatable`1<System.SByte>>
extern MethodInfo m26830_MI;
extern MethodInfo m26831_MI;
static PropertyInfo t4576____Item_PropertyInfo = 
{
	&t4576_TI, "Item", &m26830_MI, &m26831_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4576_PIs[] =
{
	&t4576____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1355_0_0_0;
static ParameterInfo t4576_m26832_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1355_0_0_0},
};
extern TypeInfo t4576_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26832_MI = 
{
	"IndexOf", NULL, &t4576_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t4576_m26832_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1355_0_0_0;
static ParameterInfo t4576_m26833_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1355_0_0_0},
};
extern TypeInfo t4576_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26833_MI = 
{
	"Insert", NULL, &t4576_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t4576_m26833_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4576_m26834_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4576_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26834_MI = 
{
	"RemoveAt", NULL, &t4576_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t4576_m26834_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4576_m26830_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4576_TI;
extern Il2CppType t1355_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26830_MI = 
{
	"get_Item", NULL, &t4576_TI, &t1355_0_0_0, RuntimeInvoker_t14_t35, t4576_m26830_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1355_0_0_0;
static ParameterInfo t4576_m26831_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1355_0_0_0},
};
extern TypeInfo t4576_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26831_MI = 
{
	"set_Item", NULL, &t4576_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t4576_m26831_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4576_MIs[] =
{
	&m26832_MI,
	&m26833_MI,
	&m26834_MI,
	&m26830_MI,
	&m26831_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4575_TI;
extern TypeInfo t4577_TI;
static TypeInfo* t4576_ITIs[] = 
{
	&t600_TI,
	&t4575_TI,
	&t4577_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4576_0_0_0;
extern Il2CppType t4576_1_0_0;
struct t4576;
extern TypeInfo t4576_TI;
extern Il2CppGenericClass t4576_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t4576_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4576_MIs, t4576_PIs, NULL, NULL, NULL, NULL, NULL, &t4576_TI, t4576_ITIs, NULL, &t1409__CustomAttributeCache, &t4576_TI, &t4576_0_0_0, &t4576_1_0_0, NULL, &t4576_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3561_TI;

#include "t373.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Int16>
extern MethodInfo m26835_MI;
static PropertyInfo t3561____Current_PropertyInfo = 
{
	&t3561_TI, "Current", &m26835_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3561_PIs[] =
{
	&t3561____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3561_TI;
extern Il2CppType t373_0_0_0;
extern void* RuntimeInvoker_t373 (MethodInfo* method, void* obj, void** args);
MethodInfo m26835_MI = 
{
	"get_Current", NULL, &t3561_TI, &t373_0_0_0, RuntimeInvoker_t373, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3561_MIs[] =
{
	&m26835_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t3561_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3561_0_0_0;
extern Il2CppType t3561_1_0_0;
struct t3561;
extern TypeInfo t3561_TI;
extern Il2CppGenericClass t3561_GC;
TypeInfo t3561_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3561_MIs, t3561_PIs, NULL, NULL, NULL, NULL, NULL, &t3561_TI, t3561_ITIs, NULL, &EmptyCustomAttributesCache, &t3561_TI, &t3561_0_0_0, &t3561_1_0_0, NULL, &t3561_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2665.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2665_TI;
#include "t2665MD.h"

extern TypeInfo t2665_TI;
extern TypeInfo t373_TI;
extern TypeInfo t1278_TI;
extern MethodInfo m15216_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m20309_MI;
struct t24;
 int16_t m20309 (t24 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20309_MI;


extern MethodInfo m15212_MI;
 void m15212 (t2665 * __this, t24 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15213_MI;
 t14 * m15213 (t2665 * __this, MethodInfo* method){
	{
		int16_t L_0 = m15216(__this, &m15216_MI);
		int16_t L_1 = L_0;
		t14 * L_2 = Box(InitializedTypeInfo(&t373_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m15214_MI;
 void m15214 (t2665 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15215_MI;
 bool m15215 (t2665 * __this, MethodInfo* method){
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
extern MethodInfo m15216_MI;
 int16_t m15216 (t2665 * __this, MethodInfo* method){
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
		int16_t L_8 = m20309(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m20309_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Int16>
extern Il2CppType t24_0_0_1;
FieldInfo t2665_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t2665_TI, offsetof(t2665, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t2665_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t2665_TI, offsetof(t2665, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t2665_FIs[] =
{
	&t2665_f0_FieldInfo,
	&t2665_f1_FieldInfo,
	NULL
};
extern MethodInfo m15213_MI;
static PropertyInfo t2665____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2665_TI, "System.Collections.IEnumerator.Current", &m15213_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15216_MI;
static PropertyInfo t2665____Current_PropertyInfo = 
{
	&t2665_TI, "Current", &m15216_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2665_PIs[] =
{
	&t2665____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2665____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t2665_m15212_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t2665_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m15212_MI = 
{
	".ctor", (methodPointerType)&m15212, &t2665_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2665_m15212_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2665_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m15213_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m15213, &t2665_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2665_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m15214_MI = 
{
	"Dispose", (methodPointerType)&m15214, &t2665_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2665_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m15215_MI = 
{
	"MoveNext", (methodPointerType)&m15215, &t2665_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2665_TI;
extern Il2CppType t373_0_0_0;
extern void* RuntimeInvoker_t373 (MethodInfo* method, void* obj, void** args);
MethodInfo m15216_MI = 
{
	"get_Current", (methodPointerType)&m15216, &t2665_TI, &t373_0_0_0, RuntimeInvoker_t373, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2665_MIs[] =
{
	&m15212_MI,
	&m15213_MI,
	&m15214_MI,
	&m15215_MI,
	&m15216_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m15213_MI;
extern MethodInfo m15215_MI;
extern MethodInfo m15214_MI;
extern MethodInfo m15216_MI;
static MethodInfo* t2665_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m15213_MI,
	&m15215_MI,
	&m15214_MI,
	&m15216_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3561_TI;
static TypeInfo* t2665_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t3561_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3561_TI;
static Il2CppInterfaceOffsetPair t2665_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t3561_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2665_0_0_0;
extern Il2CppType t2665_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t2665_TI;
extern Il2CppGenericClass t2665_GC;
extern TypeInfo t24_TI;
TypeInfo t2665_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2665_MIs, t2665_PIs, t2665_FIs, NULL, &t122_TI, NULL, &t24_TI, &t2665_TI, t2665_ITIs, t2665_VT, &EmptyCustomAttributesCache, &t2665_TI, &t2665_0_0_0, &t2665_1_0_0, t2665_IOs, &t2665_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2665)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4578_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Int16>
extern MethodInfo m26836_MI;
static PropertyInfo t4578____Count_PropertyInfo = 
{
	&t4578_TI, "Count", &m26836_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26837_MI;
static PropertyInfo t4578____IsReadOnly_PropertyInfo = 
{
	&t4578_TI, "IsReadOnly", &m26837_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4578_PIs[] =
{
	&t4578____Count_PropertyInfo,
	&t4578____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4578_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26836_MI = 
{
	"get_Count", NULL, &t4578_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4578_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m26837_MI = 
{
	"get_IsReadOnly", NULL, &t4578_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t373_0_0_0;
static ParameterInfo t4578_m26838_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t373_0_0_0},
};
extern TypeInfo t4578_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t373 (MethodInfo* method, void* obj, void** args);
MethodInfo m26838_MI = 
{
	"Add", NULL, &t4578_TI, &t25_0_0_0, RuntimeInvoker_t25_t373, t4578_m26838_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4578_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m26839_MI = 
{
	"Clear", NULL, &t4578_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t373_0_0_0;
static ParameterInfo t4578_m26840_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t373_0_0_0},
};
extern TypeInfo t4578_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t373 (MethodInfo* method, void* obj, void** args);
MethodInfo m26840_MI = 
{
	"Contains", NULL, &t4578_TI, &t26_0_0_0, RuntimeInvoker_t26_t373, t4578_m26840_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1391_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t4578_m26841_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1391_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4578_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26841_MI = 
{
	"CopyTo", NULL, &t4578_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t4578_m26841_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t373_0_0_0;
static ParameterInfo t4578_m26842_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t373_0_0_0},
};
extern TypeInfo t4578_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t373 (MethodInfo* method, void* obj, void** args);
MethodInfo m26842_MI = 
{
	"Remove", NULL, &t4578_TI, &t26_0_0_0, RuntimeInvoker_t26_t373, t4578_m26842_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4578_MIs[] =
{
	&m26836_MI,
	&m26837_MI,
	&m26838_MI,
	&m26839_MI,
	&m26840_MI,
	&m26841_MI,
	&m26842_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4580_TI;
static TypeInfo* t4578_ITIs[] = 
{
	&t600_TI,
	&t4580_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4578_0_0_0;
extern Il2CppType t4578_1_0_0;
struct t4578;
extern TypeInfo t4578_TI;
extern Il2CppGenericClass t4578_GC;
TypeInfo t4578_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4578_MIs, t4578_PIs, NULL, NULL, NULL, NULL, NULL, &t4578_TI, t4578_ITIs, NULL, &EmptyCustomAttributesCache, &t4578_TI, &t4578_0_0_0, &t4578_1_0_0, NULL, &t4578_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4580_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Int16>
extern TypeInfo t4580_TI;
extern Il2CppType t3561_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26843_MI = 
{
	"GetEnumerator", NULL, &t4580_TI, &t3561_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4580_MIs[] =
{
	&m26843_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t4580_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4580_0_0_0;
extern Il2CppType t4580_1_0_0;
struct t4580;
extern TypeInfo t4580_TI;
extern Il2CppGenericClass t4580_GC;
TypeInfo t4580_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4580_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4580_TI, t4580_ITIs, NULL, &EmptyCustomAttributesCache, &t4580_TI, &t4580_0_0_0, &t4580_1_0_0, NULL, &t4580_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4579_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Int16>
extern MethodInfo m26844_MI;
extern MethodInfo m26845_MI;
static PropertyInfo t4579____Item_PropertyInfo = 
{
	&t4579_TI, "Item", &m26844_MI, &m26845_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4579_PIs[] =
{
	&t4579____Item_PropertyInfo,
	NULL
};
extern Il2CppType t373_0_0_0;
static ParameterInfo t4579_m26846_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t373_0_0_0},
};
extern TypeInfo t4579_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t373 (MethodInfo* method, void* obj, void** args);
MethodInfo m26846_MI = 
{
	"IndexOf", NULL, &t4579_TI, &t35_0_0_0, RuntimeInvoker_t35_t373, t4579_m26846_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t373_0_0_0;
static ParameterInfo t4579_m26847_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t373_0_0_0},
};
extern TypeInfo t4579_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t373 (MethodInfo* method, void* obj, void** args);
MethodInfo m26847_MI = 
{
	"Insert", NULL, &t4579_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t373, t4579_m26847_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4579_m26848_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4579_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26848_MI = 
{
	"RemoveAt", NULL, &t4579_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t4579_m26848_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4579_m26844_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4579_TI;
extern Il2CppType t373_0_0_0;
extern void* RuntimeInvoker_t373_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26844_MI = 
{
	"get_Item", NULL, &t4579_TI, &t373_0_0_0, RuntimeInvoker_t373_t35, t4579_m26844_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t373_0_0_0;
static ParameterInfo t4579_m26845_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t373_0_0_0},
};
extern TypeInfo t4579_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t373 (MethodInfo* method, void* obj, void** args);
MethodInfo m26845_MI = 
{
	"set_Item", NULL, &t4579_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t373, t4579_m26845_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4579_MIs[] =
{
	&m26846_MI,
	&m26847_MI,
	&m26848_MI,
	&m26844_MI,
	&m26845_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4578_TI;
extern TypeInfo t4580_TI;
static TypeInfo* t4579_ITIs[] = 
{
	&t600_TI,
	&t4578_TI,
	&t4580_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4579_0_0_0;
extern Il2CppType t4579_1_0_0;
struct t4579;
extern TypeInfo t4579_TI;
extern Il2CppGenericClass t4579_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t4579_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4579_MIs, t4579_PIs, NULL, NULL, NULL, NULL, NULL, &t4579_TI, t4579_ITIs, NULL, &t1409__CustomAttributeCache, &t4579_TI, &t4579_0_0_0, &t4579_1_0_0, NULL, &t4579_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4581_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int16>>
extern MethodInfo m26849_MI;
static PropertyInfo t4581____Count_PropertyInfo = 
{
	&t4581_TI, "Count", &m26849_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26850_MI;
static PropertyInfo t4581____IsReadOnly_PropertyInfo = 
{
	&t4581_TI, "IsReadOnly", &m26850_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4581_PIs[] =
{
	&t4581____Count_PropertyInfo,
	&t4581____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4581_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26849_MI = 
{
	"get_Count", NULL, &t4581_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4581_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m26850_MI = 
{
	"get_IsReadOnly", NULL, &t4581_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1356_0_0_0;
static ParameterInfo t4581_m26851_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1356_0_0_0},
};
extern TypeInfo t4581_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26851_MI = 
{
	"Add", NULL, &t4581_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t4581_m26851_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4581_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m26852_MI = 
{
	"Clear", NULL, &t4581_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1356_0_0_0;
static ParameterInfo t4581_m26853_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1356_0_0_0},
};
extern TypeInfo t4581_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26853_MI = 
{
	"Contains", NULL, &t4581_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t4581_m26853_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2930_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t4581_m26854_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2930_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4581_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26854_MI = 
{
	"CopyTo", NULL, &t4581_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t4581_m26854_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1356_0_0_0;
static ParameterInfo t4581_m26855_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1356_0_0_0},
};
extern TypeInfo t4581_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26855_MI = 
{
	"Remove", NULL, &t4581_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t4581_m26855_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4581_MIs[] =
{
	&m26849_MI,
	&m26850_MI,
	&m26851_MI,
	&m26852_MI,
	&m26853_MI,
	&m26854_MI,
	&m26855_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4583_TI;
static TypeInfo* t4581_ITIs[] = 
{
	&t600_TI,
	&t4583_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4581_0_0_0;
extern Il2CppType t4581_1_0_0;
struct t4581;
extern TypeInfo t4581_TI;
extern Il2CppGenericClass t4581_GC;
TypeInfo t4581_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4581_MIs, t4581_PIs, NULL, NULL, NULL, NULL, NULL, &t4581_TI, t4581_ITIs, NULL, &EmptyCustomAttributesCache, &t4581_TI, &t4581_0_0_0, &t4581_1_0_0, NULL, &t4581_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4583_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.Int16>>
extern TypeInfo t4583_TI;
extern Il2CppType t3562_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26856_MI = 
{
	"GetEnumerator", NULL, &t4583_TI, &t3562_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4583_MIs[] =
{
	&m26856_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t4583_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4583_0_0_0;
extern Il2CppType t4583_1_0_0;
struct t4583;
extern TypeInfo t4583_TI;
extern Il2CppGenericClass t4583_GC;
TypeInfo t4583_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4583_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4583_TI, t4583_ITIs, NULL, &EmptyCustomAttributesCache, &t4583_TI, &t4583_0_0_0, &t4583_1_0_0, NULL, &t4583_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3562_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.Int16>>
extern MethodInfo m26857_MI;
static PropertyInfo t3562____Current_PropertyInfo = 
{
	&t3562_TI, "Current", &m26857_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3562_PIs[] =
{
	&t3562____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3562_TI;
extern Il2CppType t1356_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26857_MI = 
{
	"get_Current", NULL, &t3562_TI, &t1356_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3562_MIs[] =
{
	&m26857_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t3562_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3562_0_0_0;
extern Il2CppType t3562_1_0_0;
struct t3562;
extern TypeInfo t3562_TI;
extern Il2CppGenericClass t3562_GC;
TypeInfo t3562_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3562_MIs, t3562_PIs, NULL, NULL, NULL, NULL, NULL, &t3562_TI, t3562_ITIs, NULL, &EmptyCustomAttributesCache, &t3562_TI, &t3562_0_0_0, &t3562_1_0_0, NULL, &t3562_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1356_TI;



// Metadata Definition System.IComparable`1<System.Int16>
extern Il2CppType t373_0_0_0;
static ParameterInfo t1356_m26858_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t373_0_0_0},
};
extern TypeInfo t1356_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t373 (MethodInfo* method, void* obj, void** args);
MethodInfo m26858_MI = 
{
	"CompareTo", NULL, &t1356_TI, &t35_0_0_0, RuntimeInvoker_t35_t373, t1356_m26858_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1356_MIs[] =
{
	&m26858_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1356_0_0_0;
extern Il2CppType t1356_1_0_0;
struct t1356;
extern TypeInfo t1356_TI;
extern Il2CppGenericClass t1356_GC;
TypeInfo t1356_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t1356_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1356_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1356_TI, &t1356_0_0_0, &t1356_1_0_0, NULL, &t1356_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t2666.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2666_TI;
#include "t2666MD.h"

extern TypeInfo t2666_TI;
extern TypeInfo t1356_TI;
extern TypeInfo t1278_TI;
extern MethodInfo m15221_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m20320_MI;
struct t24;
#define m20320(__this, p0, method) (t14*)m16357_gshared((t24 *)__this, (int32_t)p0, method)
extern MethodInfo m20320_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.IComparable`1<System.Int16>>
extern Il2CppType t24_0_0_1;
FieldInfo t2666_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t2666_TI, offsetof(t2666, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t2666_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t2666_TI, offsetof(t2666, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t2666_FIs[] =
{
	&t2666_f0_FieldInfo,
	&t2666_f1_FieldInfo,
	NULL
};
extern MethodInfo m15218_MI;
static PropertyInfo t2666____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2666_TI, "System.Collections.IEnumerator.Current", &m15218_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15221_MI;
static PropertyInfo t2666____Current_PropertyInfo = 
{
	&t2666_TI, "Current", &m15221_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2666_PIs[] =
{
	&t2666____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2666____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t2666_m15217_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t2666_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m15217_MI = 
{
	".ctor", (methodPointerType)&m7877_gshared, &t2666_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2666_m15217_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2666_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m15218_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7879_gshared, &t2666_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2666_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m15219_MI = 
{
	"Dispose", (methodPointerType)&m7881_gshared, &t2666_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2666_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m15220_MI = 
{
	"MoveNext", (methodPointerType)&m7883_gshared, &t2666_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2666_TI;
extern Il2CppType t1356_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m15221_MI = 
{
	"get_Current", (methodPointerType)&m7885_gshared, &t2666_TI, &t1356_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2666_MIs[] =
{
	&m15217_MI,
	&m15218_MI,
	&m15219_MI,
	&m15220_MI,
	&m15221_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m15218_MI;
extern MethodInfo m15220_MI;
extern MethodInfo m15219_MI;
extern MethodInfo m15221_MI;
static MethodInfo* t2666_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m15218_MI,
	&m15220_MI,
	&m15219_MI,
	&m15221_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3562_TI;
static TypeInfo* t2666_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t3562_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3562_TI;
static Il2CppInterfaceOffsetPair t2666_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t3562_TI, 7},
};
extern MethodInfo m15221_MI;
extern TypeInfo t1356_TI;
extern MethodInfo m20320_MI;
static void* t2666_RGCTXData[3] = 
{
	&m15221_MI,
	&t1356_TI,
	&m20320_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2666_0_0_0;
extern Il2CppType t2666_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t2666_TI;
extern Il2CppGenericClass t2666_GC;
extern TypeInfo t24_TI;
TypeInfo t2666_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2666_MIs, t2666_PIs, t2666_FIs, NULL, &t122_TI, NULL, &t24_TI, &t2666_TI, t2666_ITIs, t2666_VT, &EmptyCustomAttributesCache, &t2666_TI, &t2666_0_0_0, &t2666_1_0_0, t2666_IOs, &t2666_GC, NULL, NULL, NULL, t2666_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2666)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4582_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IComparable`1<System.Int16>>
extern MethodInfo m26859_MI;
extern MethodInfo m26860_MI;
static PropertyInfo t4582____Item_PropertyInfo = 
{
	&t4582_TI, "Item", &m26859_MI, &m26860_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4582_PIs[] =
{
	&t4582____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1356_0_0_0;
static ParameterInfo t4582_m26861_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1356_0_0_0},
};
extern TypeInfo t4582_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26861_MI = 
{
	"IndexOf", NULL, &t4582_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t4582_m26861_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1356_0_0_0;
static ParameterInfo t4582_m26862_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1356_0_0_0},
};
extern TypeInfo t4582_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26862_MI = 
{
	"Insert", NULL, &t4582_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t4582_m26862_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4582_m26863_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4582_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26863_MI = 
{
	"RemoveAt", NULL, &t4582_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t4582_m26863_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4582_m26859_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4582_TI;
extern Il2CppType t1356_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26859_MI = 
{
	"get_Item", NULL, &t4582_TI, &t1356_0_0_0, RuntimeInvoker_t14_t35, t4582_m26859_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1356_0_0_0;
static ParameterInfo t4582_m26860_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1356_0_0_0},
};
extern TypeInfo t4582_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26860_MI = 
{
	"set_Item", NULL, &t4582_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t4582_m26860_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4582_MIs[] =
{
	&m26861_MI,
	&m26862_MI,
	&m26863_MI,
	&m26859_MI,
	&m26860_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4581_TI;
extern TypeInfo t4583_TI;
static TypeInfo* t4582_ITIs[] = 
{
	&t600_TI,
	&t4581_TI,
	&t4583_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4582_0_0_0;
extern Il2CppType t4582_1_0_0;
struct t4582;
extern TypeInfo t4582_TI;
extern Il2CppGenericClass t4582_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t4582_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4582_MIs, t4582_PIs, NULL, NULL, NULL, NULL, NULL, &t4582_TI, t4582_ITIs, NULL, &t1409__CustomAttributeCache, &t4582_TI, &t4582_0_0_0, &t4582_1_0_0, NULL, &t4582_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4584_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int16>>
extern MethodInfo m26864_MI;
static PropertyInfo t4584____Count_PropertyInfo = 
{
	&t4584_TI, "Count", &m26864_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26865_MI;
static PropertyInfo t4584____IsReadOnly_PropertyInfo = 
{
	&t4584_TI, "IsReadOnly", &m26865_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4584_PIs[] =
{
	&t4584____Count_PropertyInfo,
	&t4584____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4584_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26864_MI = 
{
	"get_Count", NULL, &t4584_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4584_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m26865_MI = 
{
	"get_IsReadOnly", NULL, &t4584_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1357_0_0_0;
static ParameterInfo t4584_m26866_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1357_0_0_0},
};
extern TypeInfo t4584_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26866_MI = 
{
	"Add", NULL, &t4584_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t4584_m26866_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4584_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m26867_MI = 
{
	"Clear", NULL, &t4584_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1357_0_0_0;
static ParameterInfo t4584_m26868_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1357_0_0_0},
};
extern TypeInfo t4584_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26868_MI = 
{
	"Contains", NULL, &t4584_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t4584_m26868_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2931_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t4584_m26869_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2931_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4584_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26869_MI = 
{
	"CopyTo", NULL, &t4584_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t4584_m26869_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1357_0_0_0;
static ParameterInfo t4584_m26870_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1357_0_0_0},
};
extern TypeInfo t4584_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26870_MI = 
{
	"Remove", NULL, &t4584_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t4584_m26870_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4584_MIs[] =
{
	&m26864_MI,
	&m26865_MI,
	&m26866_MI,
	&m26867_MI,
	&m26868_MI,
	&m26869_MI,
	&m26870_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4586_TI;
static TypeInfo* t4584_ITIs[] = 
{
	&t600_TI,
	&t4586_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4584_0_0_0;
extern Il2CppType t4584_1_0_0;
struct t4584;
extern TypeInfo t4584_TI;
extern Il2CppGenericClass t4584_GC;
TypeInfo t4584_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4584_MIs, t4584_PIs, NULL, NULL, NULL, NULL, NULL, &t4584_TI, t4584_ITIs, NULL, &EmptyCustomAttributesCache, &t4584_TI, &t4584_0_0_0, &t4584_1_0_0, NULL, &t4584_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4586_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.Int16>>
extern TypeInfo t4586_TI;
extern Il2CppType t3563_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26871_MI = 
{
	"GetEnumerator", NULL, &t4586_TI, &t3563_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4586_MIs[] =
{
	&m26871_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t4586_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4586_0_0_0;
extern Il2CppType t4586_1_0_0;
struct t4586;
extern TypeInfo t4586_TI;
extern Il2CppGenericClass t4586_GC;
TypeInfo t4586_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4586_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4586_TI, t4586_ITIs, NULL, &EmptyCustomAttributesCache, &t4586_TI, &t4586_0_0_0, &t4586_1_0_0, NULL, &t4586_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3563_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.Int16>>
extern MethodInfo m26872_MI;
static PropertyInfo t3563____Current_PropertyInfo = 
{
	&t3563_TI, "Current", &m26872_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3563_PIs[] =
{
	&t3563____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3563_TI;
extern Il2CppType t1357_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26872_MI = 
{
	"get_Current", NULL, &t3563_TI, &t1357_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3563_MIs[] =
{
	&m26872_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t3563_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3563_0_0_0;
extern Il2CppType t3563_1_0_0;
struct t3563;
extern TypeInfo t3563_TI;
extern Il2CppGenericClass t3563_GC;
TypeInfo t3563_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3563_MIs, t3563_PIs, NULL, NULL, NULL, NULL, NULL, &t3563_TI, t3563_ITIs, NULL, &EmptyCustomAttributesCache, &t3563_TI, &t3563_0_0_0, &t3563_1_0_0, NULL, &t3563_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1357_TI;



// Metadata Definition System.IEquatable`1<System.Int16>
extern Il2CppType t373_0_0_0;
static ParameterInfo t1357_m26873_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t373_0_0_0},
};
extern TypeInfo t1357_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t373 (MethodInfo* method, void* obj, void** args);
MethodInfo m26873_MI = 
{
	"Equals", NULL, &t1357_TI, &t26_0_0_0, RuntimeInvoker_t26_t373, t1357_m26873_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1357_MIs[] =
{
	&m26873_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1357_0_0_0;
extern Il2CppType t1357_1_0_0;
struct t1357;
extern TypeInfo t1357_TI;
extern Il2CppGenericClass t1357_GC;
TypeInfo t1357_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t1357_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1357_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1357_TI, &t1357_0_0_0, &t1357_1_0_0, NULL, &t1357_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t2667.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2667_TI;
#include "t2667MD.h"

extern TypeInfo t2667_TI;
extern TypeInfo t1357_TI;
extern TypeInfo t1278_TI;
extern MethodInfo m15226_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m20331_MI;
struct t24;
#define m20331(__this, p0, method) (t14*)m16357_gshared((t24 *)__this, (int32_t)p0, method)
extern MethodInfo m20331_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int16>>
extern Il2CppType t24_0_0_1;
FieldInfo t2667_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t2667_TI, offsetof(t2667, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t2667_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t2667_TI, offsetof(t2667, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t2667_FIs[] =
{
	&t2667_f0_FieldInfo,
	&t2667_f1_FieldInfo,
	NULL
};
extern MethodInfo m15223_MI;
static PropertyInfo t2667____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2667_TI, "System.Collections.IEnumerator.Current", &m15223_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15226_MI;
static PropertyInfo t2667____Current_PropertyInfo = 
{
	&t2667_TI, "Current", &m15226_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2667_PIs[] =
{
	&t2667____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2667____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t2667_m15222_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t2667_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m15222_MI = 
{
	".ctor", (methodPointerType)&m7877_gshared, &t2667_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2667_m15222_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2667_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m15223_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7879_gshared, &t2667_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2667_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m15224_MI = 
{
	"Dispose", (methodPointerType)&m7881_gshared, &t2667_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2667_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m15225_MI = 
{
	"MoveNext", (methodPointerType)&m7883_gshared, &t2667_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2667_TI;
extern Il2CppType t1357_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m15226_MI = 
{
	"get_Current", (methodPointerType)&m7885_gshared, &t2667_TI, &t1357_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2667_MIs[] =
{
	&m15222_MI,
	&m15223_MI,
	&m15224_MI,
	&m15225_MI,
	&m15226_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m15223_MI;
extern MethodInfo m15225_MI;
extern MethodInfo m15224_MI;
extern MethodInfo m15226_MI;
static MethodInfo* t2667_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m15223_MI,
	&m15225_MI,
	&m15224_MI,
	&m15226_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3563_TI;
static TypeInfo* t2667_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t3563_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3563_TI;
static Il2CppInterfaceOffsetPair t2667_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t3563_TI, 7},
};
extern MethodInfo m15226_MI;
extern TypeInfo t1357_TI;
extern MethodInfo m20331_MI;
static void* t2667_RGCTXData[3] = 
{
	&m15226_MI,
	&t1357_TI,
	&m20331_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2667_0_0_0;
extern Il2CppType t2667_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t2667_TI;
extern Il2CppGenericClass t2667_GC;
extern TypeInfo t24_TI;
TypeInfo t2667_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2667_MIs, t2667_PIs, t2667_FIs, NULL, &t122_TI, NULL, &t24_TI, &t2667_TI, t2667_ITIs, t2667_VT, &EmptyCustomAttributesCache, &t2667_TI, &t2667_0_0_0, &t2667_1_0_0, t2667_IOs, &t2667_GC, NULL, NULL, NULL, t2667_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2667)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4585_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IEquatable`1<System.Int16>>
extern MethodInfo m26874_MI;
extern MethodInfo m26875_MI;
static PropertyInfo t4585____Item_PropertyInfo = 
{
	&t4585_TI, "Item", &m26874_MI, &m26875_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4585_PIs[] =
{
	&t4585____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1357_0_0_0;
static ParameterInfo t4585_m26876_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1357_0_0_0},
};
extern TypeInfo t4585_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26876_MI = 
{
	"IndexOf", NULL, &t4585_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t4585_m26876_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1357_0_0_0;
static ParameterInfo t4585_m26877_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1357_0_0_0},
};
extern TypeInfo t4585_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26877_MI = 
{
	"Insert", NULL, &t4585_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t4585_m26877_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4585_m26878_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4585_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26878_MI = 
{
	"RemoveAt", NULL, &t4585_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t4585_m26878_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4585_m26874_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4585_TI;
extern Il2CppType t1357_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26874_MI = 
{
	"get_Item", NULL, &t4585_TI, &t1357_0_0_0, RuntimeInvoker_t14_t35, t4585_m26874_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1357_0_0_0;
static ParameterInfo t4585_m26875_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1357_0_0_0},
};
extern TypeInfo t4585_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26875_MI = 
{
	"set_Item", NULL, &t4585_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t4585_m26875_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4585_MIs[] =
{
	&m26876_MI,
	&m26877_MI,
	&m26878_MI,
	&m26874_MI,
	&m26875_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4584_TI;
extern TypeInfo t4586_TI;
static TypeInfo* t4585_ITIs[] = 
{
	&t600_TI,
	&t4584_TI,
	&t4586_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4585_0_0_0;
extern Il2CppType t4585_1_0_0;
struct t4585;
extern TypeInfo t4585_TI;
extern Il2CppGenericClass t4585_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t4585_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4585_MIs, t4585_PIs, NULL, NULL, NULL, NULL, NULL, &t4585_TI, t4585_ITIs, NULL, &t1409__CustomAttributeCache, &t4585_TI, &t4585_0_0_0, &t4585_1_0_0, NULL, &t4585_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3564_TI;

#include "t613.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.UInt16>
extern MethodInfo m26879_MI;
static PropertyInfo t3564____Current_PropertyInfo = 
{
	&t3564_TI, "Current", &m26879_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3564_PIs[] =
{
	&t3564____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3564_TI;
extern Il2CppType t613_0_0_0;
extern void* RuntimeInvoker_t613 (MethodInfo* method, void* obj, void** args);
MethodInfo m26879_MI = 
{
	"get_Current", NULL, &t3564_TI, &t613_0_0_0, RuntimeInvoker_t613, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3564_MIs[] =
{
	&m26879_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t3564_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3564_0_0_0;
extern Il2CppType t3564_1_0_0;
struct t3564;
extern TypeInfo t3564_TI;
extern Il2CppGenericClass t3564_GC;
TypeInfo t3564_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3564_MIs, t3564_PIs, NULL, NULL, NULL, NULL, NULL, &t3564_TI, t3564_ITIs, NULL, &EmptyCustomAttributesCache, &t3564_TI, &t3564_0_0_0, &t3564_1_0_0, NULL, &t3564_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2668.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2668_TI;
#include "t2668MD.h"

extern TypeInfo t2668_TI;
extern TypeInfo t613_TI;
extern TypeInfo t1278_TI;
extern MethodInfo m15231_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m20342_MI;
struct t24;
 uint16_t m20342 (t24 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20342_MI;


extern MethodInfo m15227_MI;
 void m15227 (t2668 * __this, t24 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15228_MI;
 t14 * m15228 (t2668 * __this, MethodInfo* method){
	{
		uint16_t L_0 = m15231(__this, &m15231_MI);
		uint16_t L_1 = L_0;
		t14 * L_2 = Box(InitializedTypeInfo(&t613_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m15229_MI;
 void m15229 (t2668 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15230_MI;
 bool m15230 (t2668 * __this, MethodInfo* method){
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
extern MethodInfo m15231_MI;
 uint16_t m15231 (t2668 * __this, MethodInfo* method){
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
		uint16_t L_8 = m20342(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m20342_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.UInt16>
extern Il2CppType t24_0_0_1;
FieldInfo t2668_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t2668_TI, offsetof(t2668, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t2668_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t2668_TI, offsetof(t2668, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t2668_FIs[] =
{
	&t2668_f0_FieldInfo,
	&t2668_f1_FieldInfo,
	NULL
};
extern MethodInfo m15228_MI;
static PropertyInfo t2668____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2668_TI, "System.Collections.IEnumerator.Current", &m15228_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15231_MI;
static PropertyInfo t2668____Current_PropertyInfo = 
{
	&t2668_TI, "Current", &m15231_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2668_PIs[] =
{
	&t2668____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2668____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t2668_m15227_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t2668_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m15227_MI = 
{
	".ctor", (methodPointerType)&m15227, &t2668_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2668_m15227_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2668_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m15228_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m15228, &t2668_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2668_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m15229_MI = 
{
	"Dispose", (methodPointerType)&m15229, &t2668_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2668_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m15230_MI = 
{
	"MoveNext", (methodPointerType)&m15230, &t2668_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2668_TI;
extern Il2CppType t613_0_0_0;
extern void* RuntimeInvoker_t613 (MethodInfo* method, void* obj, void** args);
MethodInfo m15231_MI = 
{
	"get_Current", (methodPointerType)&m15231, &t2668_TI, &t613_0_0_0, RuntimeInvoker_t613, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2668_MIs[] =
{
	&m15227_MI,
	&m15228_MI,
	&m15229_MI,
	&m15230_MI,
	&m15231_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m15228_MI;
extern MethodInfo m15230_MI;
extern MethodInfo m15229_MI;
extern MethodInfo m15231_MI;
static MethodInfo* t2668_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m15228_MI,
	&m15230_MI,
	&m15229_MI,
	&m15231_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3564_TI;
static TypeInfo* t2668_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t3564_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3564_TI;
static Il2CppInterfaceOffsetPair t2668_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t3564_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2668_0_0_0;
extern Il2CppType t2668_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t2668_TI;
extern Il2CppGenericClass t2668_GC;
extern TypeInfo t24_TI;
TypeInfo t2668_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2668_MIs, t2668_PIs, t2668_FIs, NULL, &t122_TI, NULL, &t24_TI, &t2668_TI, t2668_ITIs, t2668_VT, &EmptyCustomAttributesCache, &t2668_TI, &t2668_0_0_0, &t2668_1_0_0, t2668_IOs, &t2668_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2668)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4587_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.UInt16>
extern MethodInfo m26880_MI;
static PropertyInfo t4587____Count_PropertyInfo = 
{
	&t4587_TI, "Count", &m26880_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26881_MI;
static PropertyInfo t4587____IsReadOnly_PropertyInfo = 
{
	&t4587_TI, "IsReadOnly", &m26881_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4587_PIs[] =
{
	&t4587____Count_PropertyInfo,
	&t4587____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4587_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26880_MI = 
{
	"get_Count", NULL, &t4587_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4587_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m26881_MI = 
{
	"get_IsReadOnly", NULL, &t4587_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t613_0_0_0;
static ParameterInfo t4587_m26882_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t613_0_0_0},
};
extern TypeInfo t4587_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t373 (MethodInfo* method, void* obj, void** args);
MethodInfo m26882_MI = 
{
	"Add", NULL, &t4587_TI, &t25_0_0_0, RuntimeInvoker_t25_t373, t4587_m26882_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4587_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m26883_MI = 
{
	"Clear", NULL, &t4587_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t613_0_0_0;
static ParameterInfo t4587_m26884_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t613_0_0_0},
};
extern TypeInfo t4587_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t373 (MethodInfo* method, void* obj, void** args);
MethodInfo m26884_MI = 
{
	"Contains", NULL, &t4587_TI, &t26_0_0_0, RuntimeInvoker_t26_t373, t4587_m26884_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1152_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t4587_m26885_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1152_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4587_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26885_MI = 
{
	"CopyTo", NULL, &t4587_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t4587_m26885_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t613_0_0_0;
static ParameterInfo t4587_m26886_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t613_0_0_0},
};
extern TypeInfo t4587_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t373 (MethodInfo* method, void* obj, void** args);
MethodInfo m26886_MI = 
{
	"Remove", NULL, &t4587_TI, &t26_0_0_0, RuntimeInvoker_t26_t373, t4587_m26886_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4587_MIs[] =
{
	&m26880_MI,
	&m26881_MI,
	&m26882_MI,
	&m26883_MI,
	&m26884_MI,
	&m26885_MI,
	&m26886_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4589_TI;
static TypeInfo* t4587_ITIs[] = 
{
	&t600_TI,
	&t4589_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4587_0_0_0;
extern Il2CppType t4587_1_0_0;
struct t4587;
extern TypeInfo t4587_TI;
extern Il2CppGenericClass t4587_GC;
TypeInfo t4587_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4587_MIs, t4587_PIs, NULL, NULL, NULL, NULL, NULL, &t4587_TI, t4587_ITIs, NULL, &EmptyCustomAttributesCache, &t4587_TI, &t4587_0_0_0, &t4587_1_0_0, NULL, &t4587_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4589_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.UInt16>
extern TypeInfo t4589_TI;
extern Il2CppType t3564_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26887_MI = 
{
	"GetEnumerator", NULL, &t4589_TI, &t3564_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4589_MIs[] =
{
	&m26887_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t4589_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4589_0_0_0;
extern Il2CppType t4589_1_0_0;
struct t4589;
extern TypeInfo t4589_TI;
extern Il2CppGenericClass t4589_GC;
TypeInfo t4589_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4589_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4589_TI, t4589_ITIs, NULL, &EmptyCustomAttributesCache, &t4589_TI, &t4589_0_0_0, &t4589_1_0_0, NULL, &t4589_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4588_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.UInt16>
extern MethodInfo m26888_MI;
extern MethodInfo m26889_MI;
static PropertyInfo t4588____Item_PropertyInfo = 
{
	&t4588_TI, "Item", &m26888_MI, &m26889_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4588_PIs[] =
{
	&t4588____Item_PropertyInfo,
	NULL
};
extern Il2CppType t613_0_0_0;
static ParameterInfo t4588_m26890_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t613_0_0_0},
};
extern TypeInfo t4588_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t373 (MethodInfo* method, void* obj, void** args);
MethodInfo m26890_MI = 
{
	"IndexOf", NULL, &t4588_TI, &t35_0_0_0, RuntimeInvoker_t35_t373, t4588_m26890_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t613_0_0_0;
static ParameterInfo t4588_m26891_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t613_0_0_0},
};
extern TypeInfo t4588_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t373 (MethodInfo* method, void* obj, void** args);
MethodInfo m26891_MI = 
{
	"Insert", NULL, &t4588_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t373, t4588_m26891_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4588_m26892_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4588_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26892_MI = 
{
	"RemoveAt", NULL, &t4588_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t4588_m26892_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4588_m26888_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4588_TI;
extern Il2CppType t613_0_0_0;
extern void* RuntimeInvoker_t613_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26888_MI = 
{
	"get_Item", NULL, &t4588_TI, &t613_0_0_0, RuntimeInvoker_t613_t35, t4588_m26888_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t613_0_0_0;
static ParameterInfo t4588_m26889_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t613_0_0_0},
};
extern TypeInfo t4588_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t373 (MethodInfo* method, void* obj, void** args);
MethodInfo m26889_MI = 
{
	"set_Item", NULL, &t4588_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t373, t4588_m26889_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4588_MIs[] =
{
	&m26890_MI,
	&m26891_MI,
	&m26892_MI,
	&m26888_MI,
	&m26889_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4587_TI;
extern TypeInfo t4589_TI;
static TypeInfo* t4588_ITIs[] = 
{
	&t600_TI,
	&t4587_TI,
	&t4589_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4588_0_0_0;
extern Il2CppType t4588_1_0_0;
struct t4588;
extern TypeInfo t4588_TI;
extern Il2CppGenericClass t4588_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t4588_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4588_MIs, t4588_PIs, NULL, NULL, NULL, NULL, NULL, &t4588_TI, t4588_ITIs, NULL, &t1409__CustomAttributeCache, &t4588_TI, &t4588_0_0_0, &t4588_1_0_0, NULL, &t4588_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4590_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt16>>
extern MethodInfo m26893_MI;
static PropertyInfo t4590____Count_PropertyInfo = 
{
	&t4590_TI, "Count", &m26893_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26894_MI;
static PropertyInfo t4590____IsReadOnly_PropertyInfo = 
{
	&t4590_TI, "IsReadOnly", &m26894_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4590_PIs[] =
{
	&t4590____Count_PropertyInfo,
	&t4590____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4590_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26893_MI = 
{
	"get_Count", NULL, &t4590_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4590_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m26894_MI = 
{
	"get_IsReadOnly", NULL, &t4590_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1358_0_0_0;
static ParameterInfo t4590_m26895_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1358_0_0_0},
};
extern TypeInfo t4590_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26895_MI = 
{
	"Add", NULL, &t4590_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t4590_m26895_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4590_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m26896_MI = 
{
	"Clear", NULL, &t4590_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1358_0_0_0;
static ParameterInfo t4590_m26897_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1358_0_0_0},
};
extern TypeInfo t4590_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26897_MI = 
{
	"Contains", NULL, &t4590_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t4590_m26897_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2932_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t4590_m26898_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2932_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4590_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26898_MI = 
{
	"CopyTo", NULL, &t4590_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t4590_m26898_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1358_0_0_0;
static ParameterInfo t4590_m26899_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1358_0_0_0},
};
extern TypeInfo t4590_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26899_MI = 
{
	"Remove", NULL, &t4590_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t4590_m26899_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4590_MIs[] =
{
	&m26893_MI,
	&m26894_MI,
	&m26895_MI,
	&m26896_MI,
	&m26897_MI,
	&m26898_MI,
	&m26899_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4592_TI;
static TypeInfo* t4590_ITIs[] = 
{
	&t600_TI,
	&t4592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4590_0_0_0;
extern Il2CppType t4590_1_0_0;
struct t4590;
extern TypeInfo t4590_TI;
extern Il2CppGenericClass t4590_GC;
TypeInfo t4590_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4590_MIs, t4590_PIs, NULL, NULL, NULL, NULL, NULL, &t4590_TI, t4590_ITIs, NULL, &EmptyCustomAttributesCache, &t4590_TI, &t4590_0_0_0, &t4590_1_0_0, NULL, &t4590_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4592_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.UInt16>>
extern TypeInfo t4592_TI;
extern Il2CppType t3565_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26900_MI = 
{
	"GetEnumerator", NULL, &t4592_TI, &t3565_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4592_MIs[] =
{
	&m26900_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t4592_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4592_0_0_0;
extern Il2CppType t4592_1_0_0;
struct t4592;
extern TypeInfo t4592_TI;
extern Il2CppGenericClass t4592_GC;
TypeInfo t4592_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4592_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4592_TI, t4592_ITIs, NULL, &EmptyCustomAttributesCache, &t4592_TI, &t4592_0_0_0, &t4592_1_0_0, NULL, &t4592_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3565_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.UInt16>>
extern MethodInfo m26901_MI;
static PropertyInfo t3565____Current_PropertyInfo = 
{
	&t3565_TI, "Current", &m26901_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3565_PIs[] =
{
	&t3565____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3565_TI;
extern Il2CppType t1358_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26901_MI = 
{
	"get_Current", NULL, &t3565_TI, &t1358_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3565_MIs[] =
{
	&m26901_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t3565_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3565_0_0_0;
extern Il2CppType t3565_1_0_0;
struct t3565;
extern TypeInfo t3565_TI;
extern Il2CppGenericClass t3565_GC;
TypeInfo t3565_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3565_MIs, t3565_PIs, NULL, NULL, NULL, NULL, NULL, &t3565_TI, t3565_ITIs, NULL, &EmptyCustomAttributesCache, &t3565_TI, &t3565_0_0_0, &t3565_1_0_0, NULL, &t3565_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1358_TI;



// Metadata Definition System.IComparable`1<System.UInt16>
extern Il2CppType t613_0_0_0;
static ParameterInfo t1358_m26902_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t613_0_0_0},
};
extern TypeInfo t1358_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t373 (MethodInfo* method, void* obj, void** args);
MethodInfo m26902_MI = 
{
	"CompareTo", NULL, &t1358_TI, &t35_0_0_0, RuntimeInvoker_t35_t373, t1358_m26902_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1358_MIs[] =
{
	&m26902_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1358_0_0_0;
extern Il2CppType t1358_1_0_0;
struct t1358;
extern TypeInfo t1358_TI;
extern Il2CppGenericClass t1358_GC;
TypeInfo t1358_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t1358_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1358_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1358_TI, &t1358_0_0_0, &t1358_1_0_0, NULL, &t1358_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t2669.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2669_TI;
#include "t2669MD.h"

extern TypeInfo t2669_TI;
extern TypeInfo t1358_TI;
extern TypeInfo t1278_TI;
extern MethodInfo m15236_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m20353_MI;
struct t24;
#define m20353(__this, p0, method) (t14*)m16357_gshared((t24 *)__this, (int32_t)p0, method)
extern MethodInfo m20353_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt16>>
extern Il2CppType t24_0_0_1;
FieldInfo t2669_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t2669_TI, offsetof(t2669, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t2669_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t2669_TI, offsetof(t2669, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t2669_FIs[] =
{
	&t2669_f0_FieldInfo,
	&t2669_f1_FieldInfo,
	NULL
};
extern MethodInfo m15233_MI;
static PropertyInfo t2669____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2669_TI, "System.Collections.IEnumerator.Current", &m15233_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15236_MI;
static PropertyInfo t2669____Current_PropertyInfo = 
{
	&t2669_TI, "Current", &m15236_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2669_PIs[] =
{
	&t2669____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2669____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t2669_m15232_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t2669_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m15232_MI = 
{
	".ctor", (methodPointerType)&m7877_gshared, &t2669_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2669_m15232_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2669_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m15233_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7879_gshared, &t2669_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2669_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m15234_MI = 
{
	"Dispose", (methodPointerType)&m7881_gshared, &t2669_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2669_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m15235_MI = 
{
	"MoveNext", (methodPointerType)&m7883_gshared, &t2669_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2669_TI;
extern Il2CppType t1358_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m15236_MI = 
{
	"get_Current", (methodPointerType)&m7885_gshared, &t2669_TI, &t1358_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2669_MIs[] =
{
	&m15232_MI,
	&m15233_MI,
	&m15234_MI,
	&m15235_MI,
	&m15236_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m15233_MI;
extern MethodInfo m15235_MI;
extern MethodInfo m15234_MI;
extern MethodInfo m15236_MI;
static MethodInfo* t2669_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m15233_MI,
	&m15235_MI,
	&m15234_MI,
	&m15236_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3565_TI;
static TypeInfo* t2669_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t3565_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3565_TI;
static Il2CppInterfaceOffsetPair t2669_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t3565_TI, 7},
};
extern MethodInfo m15236_MI;
extern TypeInfo t1358_TI;
extern MethodInfo m20353_MI;
static void* t2669_RGCTXData[3] = 
{
	&m15236_MI,
	&t1358_TI,
	&m20353_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2669_0_0_0;
extern Il2CppType t2669_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t2669_TI;
extern Il2CppGenericClass t2669_GC;
extern TypeInfo t24_TI;
TypeInfo t2669_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2669_MIs, t2669_PIs, t2669_FIs, NULL, &t122_TI, NULL, &t24_TI, &t2669_TI, t2669_ITIs, t2669_VT, &EmptyCustomAttributesCache, &t2669_TI, &t2669_0_0_0, &t2669_1_0_0, t2669_IOs, &t2669_GC, NULL, NULL, NULL, t2669_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2669)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4591_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IComparable`1<System.UInt16>>
extern MethodInfo m26903_MI;
extern MethodInfo m26904_MI;
static PropertyInfo t4591____Item_PropertyInfo = 
{
	&t4591_TI, "Item", &m26903_MI, &m26904_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4591_PIs[] =
{
	&t4591____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1358_0_0_0;
static ParameterInfo t4591_m26905_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1358_0_0_0},
};
extern TypeInfo t4591_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26905_MI = 
{
	"IndexOf", NULL, &t4591_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t4591_m26905_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1358_0_0_0;
static ParameterInfo t4591_m26906_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1358_0_0_0},
};
extern TypeInfo t4591_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26906_MI = 
{
	"Insert", NULL, &t4591_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t4591_m26906_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4591_m26907_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4591_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26907_MI = 
{
	"RemoveAt", NULL, &t4591_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t4591_m26907_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4591_m26903_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4591_TI;
extern Il2CppType t1358_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26903_MI = 
{
	"get_Item", NULL, &t4591_TI, &t1358_0_0_0, RuntimeInvoker_t14_t35, t4591_m26903_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1358_0_0_0;
static ParameterInfo t4591_m26904_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1358_0_0_0},
};
extern TypeInfo t4591_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m26904_MI = 
{
	"set_Item", NULL, &t4591_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t4591_m26904_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4591_MIs[] =
{
	&m26905_MI,
	&m26906_MI,
	&m26907_MI,
	&m26903_MI,
	&m26904_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4590_TI;
extern TypeInfo t4592_TI;
static TypeInfo* t4591_ITIs[] = 
{
	&t600_TI,
	&t4590_TI,
	&t4592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4591_0_0_0;
extern Il2CppType t4591_1_0_0;
struct t4591;
extern TypeInfo t4591_TI;
extern Il2CppGenericClass t4591_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t4591_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4591_MIs, t4591_PIs, NULL, NULL, NULL, NULL, NULL, &t4591_TI, t4591_ITIs, NULL, &t1409__CustomAttributeCache, &t4591_TI, &t4591_0_0_0, &t4591_1_0_0, NULL, &t4591_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
