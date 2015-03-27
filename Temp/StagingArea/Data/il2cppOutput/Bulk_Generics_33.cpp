#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t1562.h"
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
extern TypeInfo t1562_TI;
#include "t1562MD.h"

#include "t25.h"
#include "t35.h"
#include "t1254.h"
#include "t14.h"
#include "t26.h"
extern TypeInfo t1254_TI;
extern TypeInfo t14_TI;
extern TypeInfo t35_TI;
extern TypeInfo t1564_TI;
extern TypeInfo t26_TI;
#include "t2862MD.h"
#include "t14MD.h"
extern MethodInfo m16270_MI;
extern MethodInfo m71_MI;
extern MethodInfo m29349_MI;

#include "t24.h"

extern MethodInfo m7848_MI;
 void m7848 (t1562 * __this, MethodInfo* method){
	{
		m16270(__this, &m16270_MI);
		return;
	}
}
extern MethodInfo m16268_MI;
 int32_t m16268 (t1562 * __this, t1254  p0, MethodInfo* method){
	{
		t1254  L_0 = p0;
		t14 * L_1 = Box(InitializedTypeInfo(&t1254_TI), &L_0);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m71_MI, Box(InitializedTypeInfo(&t1254_TI), &(*(&p0))));
		return L_2;
	}
}
extern MethodInfo m16269_MI;
 bool m16269 (t1562 * __this, t1254  p0, t1254  p1, MethodInfo* method){
	{
		t1254  L_0 = p0;
		t14 * L_1 = Box(InitializedTypeInfo(&t1254_TI), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		t1254  L_2 = p1;
		t14 * L_3 = Box(InitializedTypeInfo(&t1254_TI), &L_2);
		return ((((t14 *)L_3) == ((t14 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, t1254  >::Invoke(&m29349_MI, Box(InitializedTypeInfo(&t1254_TI), &(*(&p0))), p1);
		return L_4;
	}
}
// Metadata Definition System.Collections.Generic.GenericEqualityComparer`1<System.DateTimeOffset>
extern TypeInfo t1562_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m7848_MI = 
{
	".ctor", (methodPointerType)&m7848, &t1562_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1254_0_0_0;
static ParameterInfo t1562_m16268_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t1254_0_0_0},
};
extern TypeInfo t1562_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t1254 (MethodInfo* method, void* obj, void** args);
MethodInfo m16268_MI = 
{
	"GetHashCode", (methodPointerType)&m16268, &t1562_TI, &t35_0_0_0, RuntimeInvoker_t35_t1254, t1562_m16268_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1254_0_0_0;
extern Il2CppType t1254_0_0_0;
static ParameterInfo t1562_m16269_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1254_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1254_0_0_0},
};
extern TypeInfo t1562_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t1254_t1254 (MethodInfo* method, void* obj, void** args);
MethodInfo m16269_MI = 
{
	"Equals", (methodPointerType)&m16269, &t1562_TI, &t26_0_0_0, RuntimeInvoker_t26_t1254_t1254, t1562_m16269_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1562_MIs[] =
{
	&m7848_MI,
	&m16268_MI,
	&m16269_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m16269_MI;
extern MethodInfo m16268_MI;
extern MethodInfo m16273_MI;
extern MethodInfo m16272_MI;
extern MethodInfo m16268_MI;
extern MethodInfo m16269_MI;
static MethodInfo* t1562_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m16269_MI,
	&m16268_MI,
	&m16273_MI,
	&m16272_MI,
	&m16268_MI,
	&m16269_MI,
};
extern TypeInfo t5216_TI;
extern TypeInfo t868_TI;
static Il2CppInterfaceOffsetPair t1562_IOs[] = 
{
	{ &t5216_TI, 4},
	{ &t868_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1562_0_0_0;
extern Il2CppType t1562_1_0_0;
extern TypeInfo t2862_TI;
struct t1562;
extern TypeInfo t1562_TI;
extern Il2CppGenericClass t1562_GC;
TypeInfo t1562_TI = 
{
	&g_mscorlib_dll_Image, NULL, "GenericEqualityComparer`1", "System.Collections.Generic", t1562_MIs, NULL, NULL, NULL, &t2862_TI, NULL, NULL, &t1562_TI, NULL, t1562_VT, &EmptyCustomAttributesCache, &t1562_TI, &t1562_0_0_0, &t1562_1_0_0, t1562_IOs, &t1562_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1562), 0, -1, 0, 0, -1, 1057024, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#include "t2862.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2862_TI;

#include "t31.h"
#include "t32.h"
#include "t845.h"
#include "mscorlib_ArrayTypes.h"
#include "t2863.h"
extern TypeInfo t2862_TI;
extern TypeInfo t1564_TI;
extern TypeInfo t31_TI;
extern TypeInfo t1254_TI;
extern TypeInfo t26_TI;
extern TypeInfo t845_TI;
extern TypeInfo t534_TI;
extern TypeInfo t2863_TI;
extern TypeInfo t35_TI;
#include "t31MD.h"
#include "t1231MD.h"
#include "t2863MD.h"
extern Il2CppType t1564_0_0_0;
extern Il2CppType t1254_0_0_0;
extern Il2CppType t845_0_0_0;
extern MethodInfo m73_MI;
extern MethodInfo m1571_MI;
extern MethodInfo m3005_MI;
extern MethodInfo m3003_MI;
extern MethodInfo m6460_MI;
extern MethodInfo m16275_MI;
extern MethodInfo m29352_MI;
extern MethodInfo m29353_MI;


extern MethodInfo m16270_MI;
 void m16270 (t2862 * __this, MethodInfo* method){
	{
		m73(__this, &m73_MI);
		return;
	}
}
extern MethodInfo m16271_MI;
 void m16271 (t14 * __this, MethodInfo* method){
	t2863 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (t2863 *)il2cpp_codegen_object_new(InitializedTypeInfo(&t2863_TI));
	m16275(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &m16275_MI);
	((t2862_SFs*)InitializedTypeInfo(&t2862_TI)->static_fields)->f0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
extern MethodInfo m16272_MI;
 int32_t m16272 (t2862 * __this, t14 * p0, MethodInfo* method){
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker1< int32_t, t1254  >::Invoke(&m29352_MI, __this, ((*(t1254 *)((t1254 *)UnBox (p0, InitializedTypeInfo(&t1254_TI))))));
		return L_0;
	}
}
extern MethodInfo m16273_MI;
 bool m16273 (t2862 * __this, t14 * p0, t14 * p1, MethodInfo* method){
	{
		bool L_0 = (bool)VirtFuncInvoker2< bool, t1254 , t1254  >::Invoke(&m29353_MI, __this, ((*(t1254 *)((t1254 *)UnBox (p0, InitializedTypeInfo(&t1254_TI))))), ((*(t1254 *)((t1254 *)UnBox (p1, InitializedTypeInfo(&t1254_TI))))));
		return L_0;
	}
}
extern MethodInfo m16274_MI;
 t2862 * m16274 (t14 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2862_TI));
		return (((t2862_SFs*)InitializedTypeInfo(&t2862_TI)->static_fields)->f0);
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>
extern Il2CppType t2862_0_0_49;
FieldInfo t2862_f0_FieldInfo = 
{
	"_default", &t2862_0_0_49, &t2862_TI, offsetof(t2862_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2862_FIs[] =
{
	&t2862_f0_FieldInfo,
	NULL
};
extern MethodInfo m16274_MI;
static PropertyInfo t2862____Default_PropertyInfo = 
{
	&t2862_TI, "Default", &m16274_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2862_PIs[] =
{
	&t2862____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2862_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16270_MI = 
{
	".ctor", (methodPointerType)&m16270, &t2862_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2862_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16271_MI = 
{
	".cctor", (methodPointerType)&m16271, &t2862_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2862_m16272_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2862_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m16272_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m16272, &t2862_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t2862_m16272_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t2862_m16273_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2862_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m16273_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m16273, &t2862_TI, &t26_0_0_0, RuntimeInvoker_t26_t14_t14, t2862_m16273_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1254_0_0_0;
static ParameterInfo t2862_m29352_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t1254_0_0_0},
};
extern TypeInfo t2862_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t1254 (MethodInfo* method, void* obj, void** args);
MethodInfo m29352_MI = 
{
	"GetHashCode", NULL, &t2862_TI, &t35_0_0_0, RuntimeInvoker_t35_t1254, t2862_m29352_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1254_0_0_0;
extern Il2CppType t1254_0_0_0;
static ParameterInfo t2862_m29353_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1254_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1254_0_0_0},
};
extern TypeInfo t2862_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t1254_t1254 (MethodInfo* method, void* obj, void** args);
MethodInfo m29353_MI = 
{
	"Equals", NULL, &t2862_TI, &t26_0_0_0, RuntimeInvoker_t26_t1254_t1254, t2862_m29353_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2862_TI;
extern Il2CppType t2862_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m16274_MI = 
{
	"get_Default", (methodPointerType)&m16274, &t2862_TI, &t2862_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2862_MIs[] =
{
	&m16270_MI,
	&m16271_MI,
	&m16272_MI,
	&m16273_MI,
	&m29352_MI,
	&m29353_MI,
	&m16274_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m29353_MI;
extern MethodInfo m29352_MI;
extern MethodInfo m16273_MI;
extern MethodInfo m16272_MI;
static MethodInfo* t2862_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m29353_MI,
	&m29352_MI,
	&m16273_MI,
	&m16272_MI,
	NULL,
	NULL,
};
extern TypeInfo t5216_TI;
extern TypeInfo t868_TI;
static TypeInfo* t2862_ITIs[] = 
{
	&t5216_TI,
	&t868_TI,
};
extern TypeInfo t5216_TI;
extern TypeInfo t868_TI;
static Il2CppInterfaceOffsetPair t2862_IOs[] = 
{
	{ &t5216_TI, 4},
	{ &t868_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2862_0_0_0;
extern Il2CppType t2862_1_0_0;
extern TypeInfo t14_TI;
struct t2862;
extern TypeInfo t2862_TI;
extern Il2CppGenericClass t2862_GC;
TypeInfo t2862_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t2862_MIs, t2862_PIs, t2862_FIs, NULL, &t14_TI, NULL, NULL, &t2862_TI, t2862_ITIs, t2862_VT, &EmptyCustomAttributesCache, &t2862_TI, &t2862_0_0_0, &t2862_1_0_0, t2862_IOs, &t2862_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2862), 0, -1, sizeof(t2862_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5216_TI;



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<System.DateTimeOffset>
extern Il2CppType t1254_0_0_0;
extern Il2CppType t1254_0_0_0;
static ParameterInfo t5216_m29354_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1254_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1254_0_0_0},
};
extern TypeInfo t5216_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t1254_t1254 (MethodInfo* method, void* obj, void** args);
MethodInfo m29354_MI = 
{
	"Equals", NULL, &t5216_TI, &t26_0_0_0, RuntimeInvoker_t26_t1254_t1254, t5216_m29354_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1254_0_0_0;
static ParameterInfo t5216_m29355_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t1254_0_0_0},
};
extern TypeInfo t5216_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t1254 (MethodInfo* method, void* obj, void** args);
MethodInfo m29355_MI = 
{
	"GetHashCode", NULL, &t5216_TI, &t35_0_0_0, RuntimeInvoker_t35_t1254, t5216_m29355_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5216_MIs[] =
{
	&m29354_MI,
	&m29355_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5216_0_0_0;
extern Il2CppType t5216_1_0_0;
struct t5216;
extern TypeInfo t5216_TI;
extern Il2CppGenericClass t5216_GC;
TypeInfo t5216_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t5216_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5216_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5216_TI, &t5216_0_0_0, &t5216_1_0_0, NULL, &t5216_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2863_TI;

extern TypeInfo t1254_TI;
extern TypeInfo t14_TI;
extern TypeInfo t35_TI;
extern TypeInfo t26_TI;
extern MethodInfo m16270_MI;
extern MethodInfo m71_MI;
extern MethodInfo m70_MI;


extern MethodInfo m16275_MI;
 void m16275 (t2863 * __this, MethodInfo* method){
	{
		m16270(__this, &m16270_MI);
		return;
	}
}
extern MethodInfo m16276_MI;
 int32_t m16276 (t2863 * __this, t1254  p0, MethodInfo* method){
	{
		t1254  L_0 = p0;
		t14 * L_1 = Box(InitializedTypeInfo(&t1254_TI), &L_0);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m71_MI, Box(InitializedTypeInfo(&t1254_TI), &(*(&p0))));
		return L_2;
	}
}
extern MethodInfo m16277_MI;
 bool m16277 (t2863 * __this, t1254  p0, t1254  p1, MethodInfo* method){
	{
		t1254  L_0 = p0;
		t14 * L_1 = Box(InitializedTypeInfo(&t1254_TI), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		t1254  L_2 = p1;
		t14 * L_3 = Box(InitializedTypeInfo(&t1254_TI), &L_2);
		return ((((t14 *)L_3) == ((t14 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		t1254  L_4 = p1;
		t14 * L_5 = Box(InitializedTypeInfo(&t1254_TI), &L_4);
		bool L_6 = (bool)VirtFuncInvoker1< bool, t14 * >::Invoke(&m70_MI, Box(InitializedTypeInfo(&t1254_TI), &(*(&p0))), L_5);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>
extern TypeInfo t2863_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16275_MI = 
{
	".ctor", (methodPointerType)&m16275, &t2863_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1254_0_0_0;
static ParameterInfo t2863_m16276_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t1254_0_0_0},
};
extern TypeInfo t2863_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t1254 (MethodInfo* method, void* obj, void** args);
MethodInfo m16276_MI = 
{
	"GetHashCode", (methodPointerType)&m16276, &t2863_TI, &t35_0_0_0, RuntimeInvoker_t35_t1254, t2863_m16276_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1254_0_0_0;
extern Il2CppType t1254_0_0_0;
static ParameterInfo t2863_m16277_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1254_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1254_0_0_0},
};
extern TypeInfo t2863_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t1254_t1254 (MethodInfo* method, void* obj, void** args);
MethodInfo m16277_MI = 
{
	"Equals", (methodPointerType)&m16277, &t2863_TI, &t26_0_0_0, RuntimeInvoker_t26_t1254_t1254, t2863_m16277_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2863_MIs[] =
{
	&m16275_MI,
	&m16276_MI,
	&m16277_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m16277_MI;
extern MethodInfo m16276_MI;
extern MethodInfo m16273_MI;
extern MethodInfo m16272_MI;
extern MethodInfo m16276_MI;
extern MethodInfo m16277_MI;
static MethodInfo* t2863_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m16277_MI,
	&m16276_MI,
	&m16273_MI,
	&m16272_MI,
	&m16276_MI,
	&m16277_MI,
};
extern TypeInfo t5216_TI;
extern TypeInfo t868_TI;
static Il2CppInterfaceOffsetPair t2863_IOs[] = 
{
	{ &t5216_TI, 4},
	{ &t868_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2863_0_0_0;
extern Il2CppType t2863_1_0_0;
extern TypeInfo t2862_TI;
struct t2863;
extern TypeInfo t2863_TI;
extern Il2CppGenericClass t2863_GC;
extern TypeInfo t844_TI;
TypeInfo t2863_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2863_MIs, NULL, NULL, NULL, &t2862_TI, NULL, &t844_TI, &t2863_TI, NULL, t2863_VT, &EmptyCustomAttributesCache, &t2863_TI, &t2863_0_0_0, &t2863_1_0_0, t2863_IOs, &t2863_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2863), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#include "t1256.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1256_TI;
#include "t1256MD.h"

#include "t887.h"
#include "t33.h"
#include "t1278.h"
#include "t122.h"
extern TypeInfo t1256_TI;
extern TypeInfo t1278_TI;
extern TypeInfo t887_TI;
extern TypeInfo t122_TI;
extern TypeInfo t26_TI;
extern TypeInfo t14_TI;
extern TypeInfo t35_TI;
extern TypeInfo t33_TI;
#include "t1278MD.h"
#include "t122MD.h"
#include "t33MD.h"
extern MethodInfo m6925_MI;
extern MethodInfo m16279_MI;
extern MethodInfo m1415_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;


extern MethodInfo m7849_MI;
 void m7849 (t1256 * __this, t887  p0, MethodInfo* method){
	{
		__this->f1 = 1;
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m7850_MI;
 bool m7850 (t1256 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m7851_MI;
 t887  m7851 (t1256 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f1);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1278 * L_1 = (t1278 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1278_TI));
		m6925(L_1, (t33*) &_stringLiteral412, &m6925_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		t887  L_2 = (__this->f0);
		return L_2;
	}
}
extern MethodInfo m16278_MI;
 bool m16278 (t1256 * __this, t14 * p0, MethodInfo* method){
	{
		if (p0)
		{
			goto IL_000d;
		}
	}
	{
		bool L_0 = (__this->f1);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}

IL_000d:
	{
		if (((t14 *)IsInst(p0, InitializedTypeInfo(&t1256_TI))))
		{
			goto IL_0017;
		}
	}
	{
		return 0;
	}

IL_0017:
	{
		void* L_1 = alloca(sizeof(t1256 ));
		UnBoxNullable(p0, InitializedTypeInfo(&t1256_TI), L_1);
		bool L_2 = m16279(__this, ((*(t1256 *)((t1256 *)L_1))), &m16279_MI);
		return L_2;
	}
}
extern MethodInfo m16279_MI;
 bool m16279 (t1256 * __this, t1256  p0, MethodInfo* method){
	{
		bool L_0 = ((&p0)->f1);
		bool L_1 = (__this->f1);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		bool L_2 = (__this->f1);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		return 1;
	}

IL_001b:
	{
		t887 * L_3 = &((&p0)->f0);
		t887  L_4 = (__this->f0);
		t887  L_5 = L_4;
		t14 * L_6 = Box(InitializedTypeInfo(&t887_TI), &L_5);
		bool L_7 = (bool)VirtFuncInvoker1< bool, t14 * >::Invoke(&m1415_MI, Box(InitializedTypeInfo(&t887_TI), &(*L_3)), L_6);
		return L_7;
	}
}
extern MethodInfo m16280_MI;
 int32_t m16280 (t1256 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f1);
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
		t887 * L_1 = &(__this->f0);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m1416_MI, Box(InitializedTypeInfo(&t887_TI), &(*L_1)));
		return L_2;
	}
}
extern MethodInfo m16281_MI;
 t33* m16281 (t1256 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f1);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		t887 * L_1 = &(__this->f0);
		t33* L_2 = (t33*)VirtFuncInvoker0< t33* >::Invoke(&m1516_MI, Box(InitializedTypeInfo(&t887_TI), &(*L_1)));
		return L_2;
	}

IL_001a:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t33_TI));
		return (((t33_SFs*)(&t33_TI)->static_fields)->f2);
	}
}
// Metadata Definition System.Nullable`1<System.TimeSpan>
extern Il2CppType t887_0_0_3;
FieldInfo t1256_f0_FieldInfo = 
{
	"value", &t887_0_0_3, &t1256_TI, offsetof(t1256, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t26_0_0_3;
FieldInfo t1256_f1_FieldInfo = 
{
	"has_value", &t26_0_0_3, &t1256_TI, offsetof(t1256, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t1256_FIs[] =
{
	&t1256_f0_FieldInfo,
	&t1256_f1_FieldInfo,
	NULL
};
extern MethodInfo m7850_MI;
static PropertyInfo t1256____HasValue_PropertyInfo = 
{
	&t1256_TI, "HasValue", &m7850_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m7851_MI;
static PropertyInfo t1256____Value_PropertyInfo = 
{
	&t1256_TI, "Value", &m7851_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1256_PIs[] =
{
	&t1256____HasValue_PropertyInfo,
	&t1256____Value_PropertyInfo,
	NULL
};
extern Il2CppType t887_0_0_0;
static ParameterInfo t1256_m7849_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t887_0_0_0},
};
extern TypeInfo t1256_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t887 (MethodInfo* method, void* obj, void** args);
MethodInfo m7849_MI = 
{
	".ctor", (methodPointerType)&m7849, &t1256_TI, &t25_0_0_0, RuntimeInvoker_t25_t887, t1256_m7849_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1256_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m7850_MI = 
{
	"get_HasValue", (methodPointerType)&m7850, &t1256_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1256_TI;
extern Il2CppType t887_0_0_0;
extern void* RuntimeInvoker_t887 (MethodInfo* method, void* obj, void** args);
MethodInfo m7851_MI = 
{
	"get_Value", (methodPointerType)&m7851, &t1256_TI, &t887_0_0_0, RuntimeInvoker_t887, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1256_m16278_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1256_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m16278_MI = 
{
	"Equals", (methodPointerType)&m16278, &t1256_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1256_m16278_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1256_0_0_0;
static ParameterInfo t1256_m16279_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t1256_0_0_0},
};
extern TypeInfo t1256_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t1256 (MethodInfo* method, void* obj, void** args);
MethodInfo m16279_MI = 
{
	"Equals", (methodPointerType)&m16279, &t1256_TI, &t26_0_0_0, RuntimeInvoker_t26_t1256, t1256_m16279_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1256_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m16280_MI = 
{
	"GetHashCode", (methodPointerType)&m16280, &t1256_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1256_TI;
extern Il2CppType t33_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m16281_MI = 
{
	"ToString", (methodPointerType)&m16281, &t1256_TI, &t33_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1256_MIs[] =
{
	&m7849_MI,
	&m7850_MI,
	&m7851_MI,
	&m16278_MI,
	&m16279_MI,
	&m16280_MI,
	&m16281_MI,
	NULL
};
extern MethodInfo m16278_MI;
extern MethodInfo m50_MI;
extern MethodInfo m16280_MI;
extern MethodInfo m16281_MI;
static MethodInfo* t1256_VT[] =
{
	&m16278_MI,
	&m50_MI,
	&m16280_MI,
	&m16281_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1256_0_0_0;
extern Il2CppType t1256_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t1256_TI;
extern Il2CppGenericClass t1256_GC;
TypeInfo t1256_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Nullable`1", "System", t1256_MIs, t1256_PIs, t1256_FIs, NULL, &t122_TI, NULL, NULL, &t1256_TI, NULL, t1256_VT, &EmptyCustomAttributesCache, &t1256_TI, &t1256_0_0_0, &t1256_1_0_0, NULL, &t1256_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1256)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057033, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 2, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3740_TI;

#include "t878.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.DayOfWeek>
extern MethodInfo m29356_MI;
static PropertyInfo t3740____Current_PropertyInfo = 
{
	&t3740_TI, "Current", &m29356_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3740_PIs[] =
{
	&t3740____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3740_TI;
extern Il2CppType t878_0_0_0;
extern void* RuntimeInvoker_t878 (MethodInfo* method, void* obj, void** args);
MethodInfo m29356_MI = 
{
	"get_Current", NULL, &t3740_TI, &t878_0_0_0, RuntimeInvoker_t878, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3740_MIs[] =
{
	&m29356_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t3740_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3740_0_0_0;
extern Il2CppType t3740_1_0_0;
struct t3740;
extern TypeInfo t3740_TI;
extern Il2CppGenericClass t3740_GC;
TypeInfo t3740_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3740_MIs, t3740_PIs, NULL, NULL, NULL, NULL, NULL, &t3740_TI, t3740_ITIs, NULL, &EmptyCustomAttributesCache, &t3740_TI, &t3740_0_0_0, &t3740_1_0_0, NULL, &t3740_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2864.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2864_TI;
#include "t2864MD.h"

extern TypeInfo t2864_TI;
extern TypeInfo t878_TI;
extern TypeInfo t1278_TI;
#include "t24MD.h"
extern MethodInfo m16286_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m22282_MI;
struct t24;
#include "t1242.h"
 int32_t m22282 (t24 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22282_MI;


extern MethodInfo m16282_MI;
 void m16282 (t2864 * __this, t24 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16283_MI;
 t14 * m16283 (t2864 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16286(__this, &m16286_MI);
		int32_t L_1 = L_0;
		t14 * L_2 = Box(InitializedTypeInfo(&t878_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16284_MI;
 void m16284 (t2864 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16285_MI;
 bool m16285 (t2864 * __this, MethodInfo* method){
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
extern MethodInfo m16286_MI;
 int32_t m16286 (t2864 * __this, MethodInfo* method){
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
		int32_t L_8 = m22282(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22282_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.DayOfWeek>
extern Il2CppType t24_0_0_1;
FieldInfo t2864_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t2864_TI, offsetof(t2864, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t2864_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t2864_TI, offsetof(t2864, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t2864_FIs[] =
{
	&t2864_f0_FieldInfo,
	&t2864_f1_FieldInfo,
	NULL
};
extern MethodInfo m16283_MI;
static PropertyInfo t2864____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2864_TI, "System.Collections.IEnumerator.Current", &m16283_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16286_MI;
static PropertyInfo t2864____Current_PropertyInfo = 
{
	&t2864_TI, "Current", &m16286_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2864_PIs[] =
{
	&t2864____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2864____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t2864_m16282_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t2864_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m16282_MI = 
{
	".ctor", (methodPointerType)&m16282, &t2864_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2864_m16282_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2864_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m16283_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16283, &t2864_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2864_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16284_MI = 
{
	"Dispose", (methodPointerType)&m16284, &t2864_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2864_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m16285_MI = 
{
	"MoveNext", (methodPointerType)&m16285, &t2864_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2864_TI;
extern Il2CppType t878_0_0_0;
extern void* RuntimeInvoker_t878 (MethodInfo* method, void* obj, void** args);
MethodInfo m16286_MI = 
{
	"get_Current", (methodPointerType)&m16286, &t2864_TI, &t878_0_0_0, RuntimeInvoker_t878, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2864_MIs[] =
{
	&m16282_MI,
	&m16283_MI,
	&m16284_MI,
	&m16285_MI,
	&m16286_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m16283_MI;
extern MethodInfo m16285_MI;
extern MethodInfo m16284_MI;
extern MethodInfo m16286_MI;
static MethodInfo* t2864_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m16283_MI,
	&m16285_MI,
	&m16284_MI,
	&m16286_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3740_TI;
static TypeInfo* t2864_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t3740_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3740_TI;
static Il2CppInterfaceOffsetPair t2864_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t3740_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2864_0_0_0;
extern Il2CppType t2864_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t2864_TI;
extern Il2CppGenericClass t2864_GC;
extern TypeInfo t24_TI;
TypeInfo t2864_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2864_MIs, t2864_PIs, t2864_FIs, NULL, &t122_TI, NULL, &t24_TI, &t2864_TI, t2864_ITIs, t2864_VT, &EmptyCustomAttributesCache, &t2864_TI, &t2864_0_0_0, &t2864_1_0_0, t2864_IOs, &t2864_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2864)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5109_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.DayOfWeek>
extern MethodInfo m29357_MI;
static PropertyInfo t5109____Count_PropertyInfo = 
{
	&t5109_TI, "Count", &m29357_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29358_MI;
static PropertyInfo t5109____IsReadOnly_PropertyInfo = 
{
	&t5109_TI, "IsReadOnly", &m29358_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5109_PIs[] =
{
	&t5109____Count_PropertyInfo,
	&t5109____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5109_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29357_MI = 
{
	"get_Count", NULL, &t5109_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5109_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m29358_MI = 
{
	"get_IsReadOnly", NULL, &t5109_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t878_0_0_0;
static ParameterInfo t5109_m29359_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t878_0_0_0},
};
extern TypeInfo t5109_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29359_MI = 
{
	"Add", NULL, &t5109_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t5109_m29359_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5109_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m29360_MI = 
{
	"Clear", NULL, &t5109_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t878_0_0_0;
static ParameterInfo t5109_m29361_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t878_0_0_0},
};
extern TypeInfo t5109_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29361_MI = 
{
	"Contains", NULL, &t5109_TI, &t26_0_0_0, RuntimeInvoker_t26_t35, t5109_m29361_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3077_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t5109_m29362_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3077_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t5109_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29362_MI = 
{
	"CopyTo", NULL, &t5109_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t5109_m29362_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t878_0_0_0;
static ParameterInfo t5109_m29363_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t878_0_0_0},
};
extern TypeInfo t5109_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29363_MI = 
{
	"Remove", NULL, &t5109_TI, &t26_0_0_0, RuntimeInvoker_t26_t35, t5109_m29363_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5109_MIs[] =
{
	&m29357_MI,
	&m29358_MI,
	&m29359_MI,
	&m29360_MI,
	&m29361_MI,
	&m29362_MI,
	&m29363_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t5111_TI;
static TypeInfo* t5109_ITIs[] = 
{
	&t600_TI,
	&t5111_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5109_0_0_0;
extern Il2CppType t5109_1_0_0;
struct t5109;
extern TypeInfo t5109_TI;
extern Il2CppGenericClass t5109_GC;
TypeInfo t5109_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5109_MIs, t5109_PIs, NULL, NULL, NULL, NULL, NULL, &t5109_TI, t5109_ITIs, NULL, &EmptyCustomAttributesCache, &t5109_TI, &t5109_0_0_0, &t5109_1_0_0, NULL, &t5109_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5111_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.DayOfWeek>
extern TypeInfo t5111_TI;
extern Il2CppType t3740_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m29364_MI = 
{
	"GetEnumerator", NULL, &t5111_TI, &t3740_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5111_MIs[] =
{
	&m29364_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t5111_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5111_0_0_0;
extern Il2CppType t5111_1_0_0;
struct t5111;
extern TypeInfo t5111_TI;
extern Il2CppGenericClass t5111_GC;
TypeInfo t5111_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5111_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5111_TI, t5111_ITIs, NULL, &EmptyCustomAttributesCache, &t5111_TI, &t5111_0_0_0, &t5111_1_0_0, NULL, &t5111_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5110_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.DayOfWeek>
extern MethodInfo m29365_MI;
extern MethodInfo m29366_MI;
static PropertyInfo t5110____Item_PropertyInfo = 
{
	&t5110_TI, "Item", &m29365_MI, &m29366_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5110_PIs[] =
{
	&t5110____Item_PropertyInfo,
	NULL
};
extern Il2CppType t878_0_0_0;
static ParameterInfo t5110_m29367_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t878_0_0_0},
};
extern TypeInfo t5110_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29367_MI = 
{
	"IndexOf", NULL, &t5110_TI, &t35_0_0_0, RuntimeInvoker_t35_t35, t5110_m29367_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t878_0_0_0;
static ParameterInfo t5110_m29368_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t878_0_0_0},
};
extern TypeInfo t5110_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29368_MI = 
{
	"Insert", NULL, &t5110_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t35, t5110_m29368_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t5110_m29369_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t5110_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29369_MI = 
{
	"RemoveAt", NULL, &t5110_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t5110_m29369_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t5110_m29365_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t5110_TI;
extern Il2CppType t878_0_0_0;
extern void* RuntimeInvoker_t878_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29365_MI = 
{
	"get_Item", NULL, &t5110_TI, &t878_0_0_0, RuntimeInvoker_t878_t35, t5110_m29365_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t878_0_0_0;
static ParameterInfo t5110_m29366_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t878_0_0_0},
};
extern TypeInfo t5110_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29366_MI = 
{
	"set_Item", NULL, &t5110_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t35, t5110_m29366_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5110_MIs[] =
{
	&m29367_MI,
	&m29368_MI,
	&m29369_MI,
	&m29365_MI,
	&m29366_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t5109_TI;
extern TypeInfo t5111_TI;
static TypeInfo* t5110_ITIs[] = 
{
	&t600_TI,
	&t5109_TI,
	&t5111_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5110_0_0_0;
extern Il2CppType t5110_1_0_0;
struct t5110;
extern TypeInfo t5110_TI;
extern Il2CppGenericClass t5110_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t5110_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5110_MIs, t5110_PIs, NULL, NULL, NULL, NULL, NULL, &t5110_TI, t5110_ITIs, NULL, &t1409__CustomAttributeCache, &t5110_TI, &t5110_0_0_0, &t5110_1_0_0, NULL, &t5110_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1565_TI;

#include "t310.h"


// Metadata Definition System.Collections.Generic.IComparer`1<System.SByte>
extern Il2CppType t310_0_0_0;
extern Il2CppType t310_0_0_0;
static ParameterInfo t1565_m29370_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t310_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t310_0_0_0},
};
extern TypeInfo t1565_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t310_t310 (MethodInfo* method, void* obj, void** args);
MethodInfo m29370_MI = 
{
	"Compare", NULL, &t1565_TI, &t35_0_0_0, RuntimeInvoker_t35_t310_t310, t1565_m29370_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1565_MIs[] =
{
	&m29370_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1565_0_0_0;
extern Il2CppType t1565_1_0_0;
struct t1565;
extern TypeInfo t1565_TI;
extern Il2CppGenericClass t1565_GC;
TypeInfo t1565_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t1565_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1565_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1565_TI, &t1565_0_0_0, &t1565_1_0_0, NULL, &t1565_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1566_TI;

#include "t373.h"


// Metadata Definition System.Collections.Generic.IComparer`1<System.Int16>
extern Il2CppType t373_0_0_0;
extern Il2CppType t373_0_0_0;
static ParameterInfo t1566_m29371_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t373_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t373_0_0_0},
};
extern TypeInfo t1566_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t373_t373 (MethodInfo* method, void* obj, void** args);
MethodInfo m29371_MI = 
{
	"Compare", NULL, &t1566_TI, &t35_0_0_0, RuntimeInvoker_t35_t373_t373, t1566_m29371_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1566_MIs[] =
{
	&m29371_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1566_0_0_0;
extern Il2CppType t1566_1_0_0;
struct t1566;
extern TypeInfo t1566_TI;
extern Il2CppGenericClass t1566_GC;
TypeInfo t1566_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t1566_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1566_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1566_TI, &t1566_0_0_0, &t1566_1_0_0, NULL, &t1566_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1567_TI;



// Metadata Definition System.Collections.Generic.IComparer`1<System.Int32>
extern Il2CppType t35_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t1567_m29372_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1567_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t35_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29372_MI = 
{
	"Compare", NULL, &t1567_TI, &t35_0_0_0, RuntimeInvoker_t35_t35_t35, t1567_m29372_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1567_MIs[] =
{
	&m29372_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1567_0_0_0;
extern Il2CppType t1567_1_0_0;
struct t1567;
extern TypeInfo t1567_TI;
extern Il2CppGenericClass t1567_GC;
TypeInfo t1567_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t1567_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1567_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1567_TI, &t1567_0_0_0, &t1567_1_0_0, NULL, &t1567_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1568_TI;

#include "t710.h"


// Metadata Definition System.Collections.Generic.IComparer`1<System.Int64>
extern Il2CppType t710_0_0_0;
extern Il2CppType t710_0_0_0;
static ParameterInfo t1568_m29373_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t710_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t710_0_0_0},
};
extern TypeInfo t1568_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t710_t710 (MethodInfo* method, void* obj, void** args);
MethodInfo m29373_MI = 
{
	"Compare", NULL, &t1568_TI, &t35_0_0_0, RuntimeInvoker_t35_t710_t710, t1568_m29373_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1568_MIs[] =
{
	&m29373_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1568_0_0_0;
extern Il2CppType t1568_1_0_0;
struct t1568;
extern TypeInfo t1568_TI;
extern Il2CppGenericClass t1568_GC;
TypeInfo t1568_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t1568_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1568_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1568_TI, &t1568_0_0_0, &t1568_1_0_0, NULL, &t1568_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3741_TI;

#include "t1268.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Environment/SpecialFolder>
extern MethodInfo m29374_MI;
static PropertyInfo t3741____Current_PropertyInfo = 
{
	&t3741_TI, "Current", &m29374_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3741_PIs[] =
{
	&t3741____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3741_TI;
extern Il2CppType t1268_0_0_0;
extern void* RuntimeInvoker_t1268 (MethodInfo* method, void* obj, void** args);
MethodInfo m29374_MI = 
{
	"get_Current", NULL, &t3741_TI, &t1268_0_0_0, RuntimeInvoker_t1268, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3741_MIs[] =
{
	&m29374_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t3741_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3741_0_0_0;
extern Il2CppType t3741_1_0_0;
struct t3741;
extern TypeInfo t3741_TI;
extern Il2CppGenericClass t3741_GC;
TypeInfo t3741_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3741_MIs, t3741_PIs, NULL, NULL, NULL, NULL, NULL, &t3741_TI, t3741_ITIs, NULL, &EmptyCustomAttributesCache, &t3741_TI, &t3741_0_0_0, &t3741_1_0_0, NULL, &t3741_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2865.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2865_TI;
#include "t2865MD.h"

extern TypeInfo t2865_TI;
extern TypeInfo t1268_TI;
extern TypeInfo t1278_TI;
extern MethodInfo m16291_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m22293_MI;
struct t24;
 int32_t m22293 (t24 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22293_MI;


extern MethodInfo m16287_MI;
 void m16287 (t2865 * __this, t24 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16288_MI;
 t14 * m16288 (t2865 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16291(__this, &m16291_MI);
		int32_t L_1 = L_0;
		t14 * L_2 = Box(InitializedTypeInfo(&t1268_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16289_MI;
 void m16289 (t2865 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16290_MI;
 bool m16290 (t2865 * __this, MethodInfo* method){
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
extern MethodInfo m16291_MI;
 int32_t m16291 (t2865 * __this, MethodInfo* method){
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
		int32_t L_8 = m22293(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22293_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>
extern Il2CppType t24_0_0_1;
FieldInfo t2865_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t2865_TI, offsetof(t2865, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t2865_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t2865_TI, offsetof(t2865, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t2865_FIs[] =
{
	&t2865_f0_FieldInfo,
	&t2865_f1_FieldInfo,
	NULL
};
extern MethodInfo m16288_MI;
static PropertyInfo t2865____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2865_TI, "System.Collections.IEnumerator.Current", &m16288_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16291_MI;
static PropertyInfo t2865____Current_PropertyInfo = 
{
	&t2865_TI, "Current", &m16291_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2865_PIs[] =
{
	&t2865____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2865____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t2865_m16287_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t2865_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m16287_MI = 
{
	".ctor", (methodPointerType)&m16287, &t2865_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2865_m16287_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2865_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m16288_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16288, &t2865_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2865_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16289_MI = 
{
	"Dispose", (methodPointerType)&m16289, &t2865_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2865_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m16290_MI = 
{
	"MoveNext", (methodPointerType)&m16290, &t2865_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2865_TI;
extern Il2CppType t1268_0_0_0;
extern void* RuntimeInvoker_t1268 (MethodInfo* method, void* obj, void** args);
MethodInfo m16291_MI = 
{
	"get_Current", (methodPointerType)&m16291, &t2865_TI, &t1268_0_0_0, RuntimeInvoker_t1268, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2865_MIs[] =
{
	&m16287_MI,
	&m16288_MI,
	&m16289_MI,
	&m16290_MI,
	&m16291_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m16288_MI;
extern MethodInfo m16290_MI;
extern MethodInfo m16289_MI;
extern MethodInfo m16291_MI;
static MethodInfo* t2865_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m16288_MI,
	&m16290_MI,
	&m16289_MI,
	&m16291_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3741_TI;
static TypeInfo* t2865_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t3741_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3741_TI;
static Il2CppInterfaceOffsetPair t2865_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t3741_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2865_0_0_0;
extern Il2CppType t2865_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t2865_TI;
extern Il2CppGenericClass t2865_GC;
extern TypeInfo t24_TI;
TypeInfo t2865_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2865_MIs, t2865_PIs, t2865_FIs, NULL, &t122_TI, NULL, &t24_TI, &t2865_TI, t2865_ITIs, t2865_VT, &EmptyCustomAttributesCache, &t2865_TI, &t2865_0_0_0, &t2865_1_0_0, t2865_IOs, &t2865_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2865)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5112_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>
extern MethodInfo m29375_MI;
static PropertyInfo t5112____Count_PropertyInfo = 
{
	&t5112_TI, "Count", &m29375_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29376_MI;
static PropertyInfo t5112____IsReadOnly_PropertyInfo = 
{
	&t5112_TI, "IsReadOnly", &m29376_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5112_PIs[] =
{
	&t5112____Count_PropertyInfo,
	&t5112____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5112_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29375_MI = 
{
	"get_Count", NULL, &t5112_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5112_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m29376_MI = 
{
	"get_IsReadOnly", NULL, &t5112_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1268_0_0_0;
static ParameterInfo t5112_m29377_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1268_0_0_0},
};
extern TypeInfo t5112_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29377_MI = 
{
	"Add", NULL, &t5112_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t5112_m29377_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5112_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m29378_MI = 
{
	"Clear", NULL, &t5112_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1268_0_0_0;
static ParameterInfo t5112_m29379_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1268_0_0_0},
};
extern TypeInfo t5112_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29379_MI = 
{
	"Contains", NULL, &t5112_TI, &t26_0_0_0, RuntimeInvoker_t26_t35, t5112_m29379_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3078_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t5112_m29380_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3078_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t5112_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29380_MI = 
{
	"CopyTo", NULL, &t5112_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t5112_m29380_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1268_0_0_0;
static ParameterInfo t5112_m29381_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1268_0_0_0},
};
extern TypeInfo t5112_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29381_MI = 
{
	"Remove", NULL, &t5112_TI, &t26_0_0_0, RuntimeInvoker_t26_t35, t5112_m29381_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5112_MIs[] =
{
	&m29375_MI,
	&m29376_MI,
	&m29377_MI,
	&m29378_MI,
	&m29379_MI,
	&m29380_MI,
	&m29381_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t5114_TI;
static TypeInfo* t5112_ITIs[] = 
{
	&t600_TI,
	&t5114_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5112_0_0_0;
extern Il2CppType t5112_1_0_0;
struct t5112;
extern TypeInfo t5112_TI;
extern Il2CppGenericClass t5112_GC;
TypeInfo t5112_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5112_MIs, t5112_PIs, NULL, NULL, NULL, NULL, NULL, &t5112_TI, t5112_ITIs, NULL, &EmptyCustomAttributesCache, &t5112_TI, &t5112_0_0_0, &t5112_1_0_0, NULL, &t5112_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5114_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Environment/SpecialFolder>
extern TypeInfo t5114_TI;
extern Il2CppType t3741_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m29382_MI = 
{
	"GetEnumerator", NULL, &t5114_TI, &t3741_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5114_MIs[] =
{
	&m29382_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t5114_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5114_0_0_0;
extern Il2CppType t5114_1_0_0;
struct t5114;
extern TypeInfo t5114_TI;
extern Il2CppGenericClass t5114_GC;
TypeInfo t5114_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5114_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5114_TI, t5114_ITIs, NULL, &EmptyCustomAttributesCache, &t5114_TI, &t5114_0_0_0, &t5114_1_0_0, NULL, &t5114_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5113_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Environment/SpecialFolder>
extern MethodInfo m29383_MI;
extern MethodInfo m29384_MI;
static PropertyInfo t5113____Item_PropertyInfo = 
{
	&t5113_TI, "Item", &m29383_MI, &m29384_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5113_PIs[] =
{
	&t5113____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1268_0_0_0;
static ParameterInfo t5113_m29385_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1268_0_0_0},
};
extern TypeInfo t5113_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29385_MI = 
{
	"IndexOf", NULL, &t5113_TI, &t35_0_0_0, RuntimeInvoker_t35_t35, t5113_m29385_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1268_0_0_0;
static ParameterInfo t5113_m29386_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1268_0_0_0},
};
extern TypeInfo t5113_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29386_MI = 
{
	"Insert", NULL, &t5113_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t35, t5113_m29386_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t5113_m29387_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t5113_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29387_MI = 
{
	"RemoveAt", NULL, &t5113_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t5113_m29387_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t5113_m29383_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t5113_TI;
extern Il2CppType t1268_0_0_0;
extern void* RuntimeInvoker_t1268_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29383_MI = 
{
	"get_Item", NULL, &t5113_TI, &t1268_0_0_0, RuntimeInvoker_t1268_t35, t5113_m29383_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1268_0_0_0;
static ParameterInfo t5113_m29384_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1268_0_0_0},
};
extern TypeInfo t5113_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29384_MI = 
{
	"set_Item", NULL, &t5113_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t35, t5113_m29384_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5113_MIs[] =
{
	&m29385_MI,
	&m29386_MI,
	&m29387_MI,
	&m29383_MI,
	&m29384_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t5112_TI;
extern TypeInfo t5114_TI;
static TypeInfo* t5113_ITIs[] = 
{
	&t600_TI,
	&t5112_TI,
	&t5114_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5113_0_0_0;
extern Il2CppType t5113_1_0_0;
struct t5113;
extern TypeInfo t5113_TI;
extern Il2CppGenericClass t5113_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t5113_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5113_MIs, t5113_PIs, NULL, NULL, NULL, NULL, NULL, &t5113_TI, t5113_ITIs, NULL, &t1409__CustomAttributeCache, &t5113_TI, &t5113_0_0_0, &t5113_1_0_0, NULL, &t5113_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1572_TI;

#include "t1276.h"


// Metadata Definition System.IComparable`1<System.Guid>
extern Il2CppType t1276_0_0_0;
static ParameterInfo t1572_m29388_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t1276_0_0_0},
};
extern TypeInfo t1572_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t1276 (MethodInfo* method, void* obj, void** args);
MethodInfo m29388_MI = 
{
	"CompareTo", NULL, &t1572_TI, &t35_0_0_0, RuntimeInvoker_t35_t1276, t1572_m29388_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1572_MIs[] =
{
	&m29388_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1572_0_0_0;
extern Il2CppType t1572_1_0_0;
struct t1572;
extern TypeInfo t1572_TI;
extern Il2CppGenericClass t1572_GC;
TypeInfo t1572_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t1572_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1572_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1572_TI, &t1572_0_0_0, &t1572_1_0_0, NULL, &t1572_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1573_TI;



// Metadata Definition System.IEquatable`1<System.Guid>
extern Il2CppType t1276_0_0_0;
static ParameterInfo t1573_m29389_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t1276_0_0_0},
};
extern TypeInfo t1573_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t1276 (MethodInfo* method, void* obj, void** args);
MethodInfo m29389_MI = 
{
	"Equals", NULL, &t1573_TI, &t26_0_0_0, RuntimeInvoker_t26_t1276, t1573_m29389_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1573_MIs[] =
{
	&m29389_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1573_0_0_0;
extern Il2CppType t1573_1_0_0;
struct t1573;
extern TypeInfo t1573_TI;
extern Il2CppGenericClass t1573_GC;
TypeInfo t1573_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t1573_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1573_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1573_TI, &t1573_0_0_0, &t1573_1_0_0, NULL, &t1573_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t1570.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1570_TI;
#include "t1570MD.h"

extern TypeInfo t1276_TI;
extern TypeInfo t1572_TI;
extern TypeInfo t35_TI;
#include "t2866MD.h"
extern MethodInfo m16293_MI;
extern MethodInfo m29388_MI;


extern MethodInfo m7852_MI;
 void m7852 (t1570 * __this, MethodInfo* method){
	{
		m16293(__this, &m16293_MI);
		return;
	}
}
extern MethodInfo m16292_MI;
 int32_t m16292 (t1570 * __this, t1276  p0, t1276  p1, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		t1276  L_0 = p0;
		t14 * L_1 = Box(InitializedTypeInfo(&t1276_TI), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		t1276  L_2 = p1;
		t14 * L_3 = Box(InitializedTypeInfo(&t1276_TI), &L_2);
		if (L_3)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		t1276  L_4 = p1;
		t14 * L_5 = Box(InitializedTypeInfo(&t1276_TI), &L_4);
		if (L_5)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, t1276  >::Invoke(&m29388_MI, Box(InitializedTypeInfo(&t1276_TI), &(*(&p0))), p1);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.GenericComparer`1<System.Guid>
extern TypeInfo t1570_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m7852_MI = 
{
	".ctor", (methodPointerType)&m7852, &t1570_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1276_0_0_0;
extern Il2CppType t1276_0_0_0;
static ParameterInfo t1570_m16292_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1276_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1276_0_0_0},
};
extern TypeInfo t1570_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t1276_t1276 (MethodInfo* method, void* obj, void** args);
MethodInfo m16292_MI = 
{
	"Compare", (methodPointerType)&m16292, &t1570_TI, &t35_0_0_0, RuntimeInvoker_t35_t1276_t1276, t1570_m16292_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1570_MIs[] =
{
	&m7852_MI,
	&m16292_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m16292_MI;
extern MethodInfo m16295_MI;
extern MethodInfo m16292_MI;
static MethodInfo* t1570_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m16292_MI,
	&m16295_MI,
	&m16292_MI,
};
extern TypeInfo t5217_TI;
extern TypeInfo t726_TI;
static Il2CppInterfaceOffsetPair t1570_IOs[] = 
{
	{ &t5217_TI, 4},
	{ &t726_TI, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1570_0_0_0;
extern Il2CppType t1570_1_0_0;
extern TypeInfo t2866_TI;
struct t1570;
extern TypeInfo t1570_TI;
extern Il2CppGenericClass t1570_GC;
TypeInfo t1570_TI = 
{
	&g_mscorlib_dll_Image, NULL, "GenericComparer`1", "System.Collections.Generic", t1570_MIs, NULL, NULL, NULL, &t2866_TI, NULL, NULL, &t1570_TI, NULL, t1570_VT, &EmptyCustomAttributesCache, &t1570_TI, &t1570_0_0_0, &t1570_1_0_0, t1570_IOs, &t1570_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1570), 0, -1, 0, 0, -1, 1057024, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#include "t2866.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2866_TI;

#include "t833.h"
#include "t2867.h"
#include "t319.h"
extern TypeInfo t2866_TI;
extern TypeInfo t1572_TI;
extern TypeInfo t31_TI;
extern TypeInfo t1276_TI;
extern TypeInfo t26_TI;
extern TypeInfo t833_TI;
extern TypeInfo t534_TI;
extern TypeInfo t2867_TI;
extern TypeInfo t35_TI;
extern TypeInfo t319_TI;
#include "t2867MD.h"
#include "t319MD.h"
extern Il2CppType t1572_0_0_0;
extern Il2CppType t1276_0_0_0;
extern Il2CppType t833_0_0_0;
extern MethodInfo m73_MI;
extern MethodInfo m1571_MI;
extern MethodInfo m3005_MI;
extern MethodInfo m3003_MI;
extern MethodInfo m6460_MI;
extern MethodInfo m16297_MI;
extern MethodInfo m29390_MI;
extern MethodInfo m6482_MI;


extern MethodInfo m16293_MI;
 void m16293 (t2866 * __this, MethodInfo* method){
	{
		m73(__this, &m73_MI);
		return;
	}
}
extern MethodInfo m16294_MI;
 void m16294 (t14 * __this, MethodInfo* method){
	t2867 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (t2867 *)il2cpp_codegen_object_new(InitializedTypeInfo(&t2867_TI));
	m16297(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &m16297_MI);
	((t2866_SFs*)InitializedTypeInfo(&t2866_TI)->static_fields)->f0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
extern MethodInfo m16295_MI;
 int32_t m16295 (t2866 * __this, t14 * p0, t14 * p1, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		if (p0)
		{
			goto IL_000b;
		}
	}
	{
		if (p1)
		{
			goto IL_0009;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_000a;
	}

IL_0009:
	{
		G_B4_0 = (-1);
	}

IL_000a:
	{
		return G_B4_0;
	}

IL_000b:
	{
		if (p1)
		{
			goto IL_0010;
		}
	}
	{
		return 1;
	}

IL_0010:
	{
		if (!((t14 *)IsInst(p0, InitializedTypeInfo(&t1276_TI))))
		{
			goto IL_0033;
		}
	}
	{
		if (!((t14 *)IsInst(p1, InitializedTypeInfo(&t1276_TI))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker2< int32_t, t1276 , t1276  >::Invoke(&m29390_MI, __this, ((*(t1276 *)((t1276 *)UnBox (p0, InitializedTypeInfo(&t1276_TI))))), ((*(t1276 *)((t1276 *)UnBox (p1, InitializedTypeInfo(&t1276_TI))))));
		return L_0;
	}

IL_0033:
	{
		t319 * L_1 = (t319 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t319_TI));
		m6482(L_1, &m6482_MI);
		il2cpp_codegen_raise_exception (L_1);
	}
}
extern MethodInfo m16296_MI;
 t2866 * m16296 (t14 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2866_TI));
		return (((t2866_SFs*)InitializedTypeInfo(&t2866_TI)->static_fields)->f0);
	}
}
// Metadata Definition System.Collections.Generic.Comparer`1<System.Guid>
extern Il2CppType t2866_0_0_49;
FieldInfo t2866_f0_FieldInfo = 
{
	"_default", &t2866_0_0_49, &t2866_TI, offsetof(t2866_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2866_FIs[] =
{
	&t2866_f0_FieldInfo,
	NULL
};
extern MethodInfo m16296_MI;
static PropertyInfo t2866____Default_PropertyInfo = 
{
	&t2866_TI, "Default", &m16296_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2866_PIs[] =
{
	&t2866____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2866_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16293_MI = 
{
	".ctor", (methodPointerType)&m16293, &t2866_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2866_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16294_MI = 
{
	".cctor", (methodPointerType)&m16294, &t2866_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t2866_m16295_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2866_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m16295_MI = 
{
	"System.Collections.IComparer.Compare", (methodPointerType)&m16295, &t2866_TI, &t35_0_0_0, RuntimeInvoker_t35_t14_t14, t2866_m16295_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1276_0_0_0;
extern Il2CppType t1276_0_0_0;
static ParameterInfo t2866_m29390_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1276_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1276_0_0_0},
};
extern TypeInfo t2866_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t1276_t1276 (MethodInfo* method, void* obj, void** args);
MethodInfo m29390_MI = 
{
	"Compare", NULL, &t2866_TI, &t35_0_0_0, RuntimeInvoker_t35_t1276_t1276, t2866_m29390_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2866_TI;
extern Il2CppType t2866_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m16296_MI = 
{
	"get_Default", (methodPointerType)&m16296, &t2866_TI, &t2866_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2866_MIs[] =
{
	&m16293_MI,
	&m16294_MI,
	&m16295_MI,
	&m29390_MI,
	&m16296_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m29390_MI;
extern MethodInfo m16295_MI;
static MethodInfo* t2866_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m29390_MI,
	&m16295_MI,
	NULL,
};
extern TypeInfo t5217_TI;
extern TypeInfo t726_TI;
static TypeInfo* t2866_ITIs[] = 
{
	&t5217_TI,
	&t726_TI,
};
extern TypeInfo t5217_TI;
extern TypeInfo t726_TI;
static Il2CppInterfaceOffsetPair t2866_IOs[] = 
{
	{ &t5217_TI, 4},
	{ &t726_TI, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2866_0_0_0;
extern Il2CppType t2866_1_0_0;
extern TypeInfo t14_TI;
struct t2866;
extern TypeInfo t2866_TI;
extern Il2CppGenericClass t2866_GC;
TypeInfo t2866_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparer`1", "System.Collections.Generic", t2866_MIs, t2866_PIs, t2866_FIs, NULL, &t14_TI, NULL, NULL, &t2866_TI, t2866_ITIs, t2866_VT, &EmptyCustomAttributesCache, &t2866_TI, &t2866_0_0_0, &t2866_1_0_0, t2866_IOs, &t2866_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2866), 0, -1, sizeof(t2866_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 5, 1, 1, 0, 0, 7, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5217_TI;



// Metadata Definition System.Collections.Generic.IComparer`1<System.Guid>
extern Il2CppType t1276_0_0_0;
extern Il2CppType t1276_0_0_0;
static ParameterInfo t5217_m29391_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1276_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1276_0_0_0},
};
extern TypeInfo t5217_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t1276_t1276 (MethodInfo* method, void* obj, void** args);
MethodInfo m29391_MI = 
{
	"Compare", NULL, &t5217_TI, &t35_0_0_0, RuntimeInvoker_t35_t1276_t1276, t5217_m29391_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5217_MIs[] =
{
	&m29391_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5217_0_0_0;
extern Il2CppType t5217_1_0_0;
struct t5217;
extern TypeInfo t5217_TI;
extern Il2CppGenericClass t5217_GC;
TypeInfo t5217_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t5217_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5217_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5217_TI, &t5217_0_0_0, &t5217_1_0_0, NULL, &t5217_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2867_TI;

extern TypeInfo t1276_TI;
extern TypeInfo t1572_TI;
extern TypeInfo t35_TI;
extern TypeInfo t43_TI;
extern TypeInfo t14_TI;
extern TypeInfo t319_TI;
extern MethodInfo m16293_MI;
extern MethodInfo m29388_MI;
extern MethodInfo m7322_MI;
extern MethodInfo m1959_MI;


extern MethodInfo m16297_MI;
 void m16297 (t2867 * __this, MethodInfo* method){
	{
		m16293(__this, &m16293_MI);
		return;
	}
}
extern MethodInfo m16298_MI;
 int32_t m16298 (t2867 * __this, t1276  p0, t1276  p1, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		t1276  L_0 = p0;
		t14 * L_1 = Box(InitializedTypeInfo(&t1276_TI), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		t1276  L_2 = p1;
		t14 * L_3 = Box(InitializedTypeInfo(&t1276_TI), &L_2);
		if (L_3)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		t1276  L_4 = p1;
		t14 * L_5 = Box(InitializedTypeInfo(&t1276_TI), &L_4);
		if (L_5)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		t1276  L_6 = p0;
		t14 * L_7 = Box(InitializedTypeInfo(&t1276_TI), &L_6);
		if (!((t14*)IsInst(L_7, InitializedTypeInfo(&t1572_TI))))
		{
			goto IL_003e;
		}
	}
	{
		t1276  L_8 = p0;
		t14 * L_9 = Box(InitializedTypeInfo(&t1276_TI), &L_8);
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, t1276  >::Invoke(&m29388_MI, ((t14*)Castclass(L_9, InitializedTypeInfo(&t1572_TI))), p1);
		return L_10;
	}

IL_003e:
	{
		t1276  L_11 = p0;
		t14 * L_12 = Box(InitializedTypeInfo(&t1276_TI), &L_11);
		if (!((t14 *)IsInst(L_12, InitializedTypeInfo(&t43_TI))))
		{
			goto IL_0062;
		}
	}
	{
		t1276  L_13 = p0;
		t14 * L_14 = Box(InitializedTypeInfo(&t1276_TI), &L_13);
		t1276  L_15 = p1;
		t14 * L_16 = Box(InitializedTypeInfo(&t1276_TI), &L_15);
		int32_t L_17 = (int32_t)InterfaceFuncInvoker1< int32_t, t14 * >::Invoke(&m7322_MI, ((t14 *)Castclass(L_14, InitializedTypeInfo(&t43_TI))), L_16);
		return L_17;
	}

IL_0062:
	{
		t319 * L_18 = (t319 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t319_TI));
		m1959(L_18, (t33*) &_stringLiteral535, &m1959_MI);
		il2cpp_codegen_raise_exception (L_18);
	}
}
// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>
extern TypeInfo t2867_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16297_MI = 
{
	".ctor", (methodPointerType)&m16297, &t2867_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1276_0_0_0;
extern Il2CppType t1276_0_0_0;
static ParameterInfo t2867_m16298_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1276_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1276_0_0_0},
};
extern TypeInfo t2867_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t1276_t1276 (MethodInfo* method, void* obj, void** args);
MethodInfo m16298_MI = 
{
	"Compare", (methodPointerType)&m16298, &t2867_TI, &t35_0_0_0, RuntimeInvoker_t35_t1276_t1276, t2867_m16298_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2867_MIs[] =
{
	&m16297_MI,
	&m16298_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m16298_MI;
extern MethodInfo m16295_MI;
extern MethodInfo m16298_MI;
static MethodInfo* t2867_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m16298_MI,
	&m16295_MI,
	&m16298_MI,
};
extern TypeInfo t5217_TI;
extern TypeInfo t726_TI;
static Il2CppInterfaceOffsetPair t2867_IOs[] = 
{
	{ &t5217_TI, 4},
	{ &t726_TI, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2867_0_0_0;
extern Il2CppType t2867_1_0_0;
extern TypeInfo t2866_TI;
struct t2867;
extern TypeInfo t2867_TI;
extern Il2CppGenericClass t2867_GC;
extern TypeInfo t832_TI;
TypeInfo t2867_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2867_MIs, NULL, NULL, NULL, &t2866_TI, NULL, &t832_TI, &t2867_TI, NULL, t2867_VT, &EmptyCustomAttributesCache, &t2867_TI, &t2867_0_0_0, &t2867_1_0_0, t2867_IOs, &t2867_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2867), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#include "t1571.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1571_TI;
#include "t1571MD.h"

extern TypeInfo t1276_TI;
extern TypeInfo t14_TI;
extern TypeInfo t35_TI;
extern TypeInfo t1573_TI;
extern TypeInfo t26_TI;
#include "t2868MD.h"
extern MethodInfo m16301_MI;
extern MethodInfo m71_MI;
extern MethodInfo m29389_MI;


extern MethodInfo m7853_MI;
 void m7853 (t1571 * __this, MethodInfo* method){
	{
		m16301(__this, &m16301_MI);
		return;
	}
}
extern MethodInfo m16299_MI;
 int32_t m16299 (t1571 * __this, t1276  p0, MethodInfo* method){
	{
		t1276  L_0 = p0;
		t14 * L_1 = Box(InitializedTypeInfo(&t1276_TI), &L_0);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m71_MI, Box(InitializedTypeInfo(&t1276_TI), &(*(&p0))));
		return L_2;
	}
}
extern MethodInfo m16300_MI;
 bool m16300 (t1571 * __this, t1276  p0, t1276  p1, MethodInfo* method){
	{
		t1276  L_0 = p0;
		t14 * L_1 = Box(InitializedTypeInfo(&t1276_TI), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		t1276  L_2 = p1;
		t14 * L_3 = Box(InitializedTypeInfo(&t1276_TI), &L_2);
		return ((((t14 *)L_3) == ((t14 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, t1276  >::Invoke(&m29389_MI, Box(InitializedTypeInfo(&t1276_TI), &(*(&p0))), p1);
		return L_4;
	}
}
// Metadata Definition System.Collections.Generic.GenericEqualityComparer`1<System.Guid>
extern TypeInfo t1571_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m7853_MI = 
{
	".ctor", (methodPointerType)&m7853, &t1571_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1276_0_0_0;
static ParameterInfo t1571_m16299_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t1276_0_0_0},
};
extern TypeInfo t1571_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t1276 (MethodInfo* method, void* obj, void** args);
MethodInfo m16299_MI = 
{
	"GetHashCode", (methodPointerType)&m16299, &t1571_TI, &t35_0_0_0, RuntimeInvoker_t35_t1276, t1571_m16299_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1276_0_0_0;
extern Il2CppType t1276_0_0_0;
static ParameterInfo t1571_m16300_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1276_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1276_0_0_0},
};
extern TypeInfo t1571_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t1276_t1276 (MethodInfo* method, void* obj, void** args);
MethodInfo m16300_MI = 
{
	"Equals", (methodPointerType)&m16300, &t1571_TI, &t26_0_0_0, RuntimeInvoker_t26_t1276_t1276, t1571_m16300_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1571_MIs[] =
{
	&m7853_MI,
	&m16299_MI,
	&m16300_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m16300_MI;
extern MethodInfo m16299_MI;
extern MethodInfo m16304_MI;
extern MethodInfo m16303_MI;
extern MethodInfo m16299_MI;
extern MethodInfo m16300_MI;
static MethodInfo* t1571_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m16300_MI,
	&m16299_MI,
	&m16304_MI,
	&m16303_MI,
	&m16299_MI,
	&m16300_MI,
};
extern TypeInfo t5218_TI;
extern TypeInfo t868_TI;
static Il2CppInterfaceOffsetPair t1571_IOs[] = 
{
	{ &t5218_TI, 4},
	{ &t868_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1571_0_0_0;
extern Il2CppType t1571_1_0_0;
extern TypeInfo t2868_TI;
struct t1571;
extern TypeInfo t1571_TI;
extern Il2CppGenericClass t1571_GC;
TypeInfo t1571_TI = 
{
	&g_mscorlib_dll_Image, NULL, "GenericEqualityComparer`1", "System.Collections.Generic", t1571_MIs, NULL, NULL, NULL, &t2868_TI, NULL, NULL, &t1571_TI, NULL, t1571_VT, &EmptyCustomAttributesCache, &t1571_TI, &t1571_0_0_0, &t1571_1_0_0, t1571_IOs, &t1571_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1571), 0, -1, 0, 0, -1, 1057024, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#include "t2868.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2868_TI;

#include "t2869.h"
extern TypeInfo t2868_TI;
extern TypeInfo t1573_TI;
extern TypeInfo t31_TI;
extern TypeInfo t1276_TI;
extern TypeInfo t26_TI;
extern TypeInfo t845_TI;
extern TypeInfo t534_TI;
extern TypeInfo t2869_TI;
extern TypeInfo t35_TI;
#include "t2869MD.h"
extern Il2CppType t1573_0_0_0;
extern Il2CppType t1276_0_0_0;
extern Il2CppType t845_0_0_0;
extern MethodInfo m73_MI;
extern MethodInfo m1571_MI;
extern MethodInfo m3005_MI;
extern MethodInfo m3003_MI;
extern MethodInfo m6460_MI;
extern MethodInfo m16306_MI;
extern MethodInfo m29392_MI;
extern MethodInfo m29393_MI;


extern MethodInfo m16301_MI;
 void m16301 (t2868 * __this, MethodInfo* method){
	{
		m73(__this, &m73_MI);
		return;
	}
}
extern MethodInfo m16302_MI;
 void m16302 (t14 * __this, MethodInfo* method){
	t2869 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (t2869 *)il2cpp_codegen_object_new(InitializedTypeInfo(&t2869_TI));
	m16306(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &m16306_MI);
	((t2868_SFs*)InitializedTypeInfo(&t2868_TI)->static_fields)->f0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
extern MethodInfo m16303_MI;
 int32_t m16303 (t2868 * __this, t14 * p0, MethodInfo* method){
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker1< int32_t, t1276  >::Invoke(&m29392_MI, __this, ((*(t1276 *)((t1276 *)UnBox (p0, InitializedTypeInfo(&t1276_TI))))));
		return L_0;
	}
}
extern MethodInfo m16304_MI;
 bool m16304 (t2868 * __this, t14 * p0, t14 * p1, MethodInfo* method){
	{
		bool L_0 = (bool)VirtFuncInvoker2< bool, t1276 , t1276  >::Invoke(&m29393_MI, __this, ((*(t1276 *)((t1276 *)UnBox (p0, InitializedTypeInfo(&t1276_TI))))), ((*(t1276 *)((t1276 *)UnBox (p1, InitializedTypeInfo(&t1276_TI))))));
		return L_0;
	}
}
extern MethodInfo m16305_MI;
 t2868 * m16305 (t14 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2868_TI));
		return (((t2868_SFs*)InitializedTypeInfo(&t2868_TI)->static_fields)->f0);
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1<System.Guid>
extern Il2CppType t2868_0_0_49;
FieldInfo t2868_f0_FieldInfo = 
{
	"_default", &t2868_0_0_49, &t2868_TI, offsetof(t2868_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2868_FIs[] =
{
	&t2868_f0_FieldInfo,
	NULL
};
extern MethodInfo m16305_MI;
static PropertyInfo t2868____Default_PropertyInfo = 
{
	&t2868_TI, "Default", &m16305_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2868_PIs[] =
{
	&t2868____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2868_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16301_MI = 
{
	".ctor", (methodPointerType)&m16301, &t2868_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2868_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16302_MI = 
{
	".cctor", (methodPointerType)&m16302, &t2868_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2868_m16303_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2868_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m16303_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m16303, &t2868_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t2868_m16303_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t2868_m16304_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2868_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m16304_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m16304, &t2868_TI, &t26_0_0_0, RuntimeInvoker_t26_t14_t14, t2868_m16304_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1276_0_0_0;
static ParameterInfo t2868_m29392_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t1276_0_0_0},
};
extern TypeInfo t2868_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t1276 (MethodInfo* method, void* obj, void** args);
MethodInfo m29392_MI = 
{
	"GetHashCode", NULL, &t2868_TI, &t35_0_0_0, RuntimeInvoker_t35_t1276, t2868_m29392_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1276_0_0_0;
extern Il2CppType t1276_0_0_0;
static ParameterInfo t2868_m29393_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1276_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1276_0_0_0},
};
extern TypeInfo t2868_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t1276_t1276 (MethodInfo* method, void* obj, void** args);
MethodInfo m29393_MI = 
{
	"Equals", NULL, &t2868_TI, &t26_0_0_0, RuntimeInvoker_t26_t1276_t1276, t2868_m29393_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2868_TI;
extern Il2CppType t2868_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m16305_MI = 
{
	"get_Default", (methodPointerType)&m16305, &t2868_TI, &t2868_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2868_MIs[] =
{
	&m16301_MI,
	&m16302_MI,
	&m16303_MI,
	&m16304_MI,
	&m29392_MI,
	&m29393_MI,
	&m16305_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m29393_MI;
extern MethodInfo m29392_MI;
extern MethodInfo m16304_MI;
extern MethodInfo m16303_MI;
static MethodInfo* t2868_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m29393_MI,
	&m29392_MI,
	&m16304_MI,
	&m16303_MI,
	NULL,
	NULL,
};
extern TypeInfo t5218_TI;
extern TypeInfo t868_TI;
static TypeInfo* t2868_ITIs[] = 
{
	&t5218_TI,
	&t868_TI,
};
extern TypeInfo t5218_TI;
extern TypeInfo t868_TI;
static Il2CppInterfaceOffsetPair t2868_IOs[] = 
{
	{ &t5218_TI, 4},
	{ &t868_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2868_0_0_0;
extern Il2CppType t2868_1_0_0;
extern TypeInfo t14_TI;
struct t2868;
extern TypeInfo t2868_TI;
extern Il2CppGenericClass t2868_GC;
TypeInfo t2868_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t2868_MIs, t2868_PIs, t2868_FIs, NULL, &t14_TI, NULL, NULL, &t2868_TI, t2868_ITIs, t2868_VT, &EmptyCustomAttributesCache, &t2868_TI, &t2868_0_0_0, &t2868_1_0_0, t2868_IOs, &t2868_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2868), 0, -1, sizeof(t2868_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5218_TI;



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<System.Guid>
extern Il2CppType t1276_0_0_0;
extern Il2CppType t1276_0_0_0;
static ParameterInfo t5218_m29394_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1276_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1276_0_0_0},
};
extern TypeInfo t5218_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t1276_t1276 (MethodInfo* method, void* obj, void** args);
MethodInfo m29394_MI = 
{
	"Equals", NULL, &t5218_TI, &t26_0_0_0, RuntimeInvoker_t26_t1276_t1276, t5218_m29394_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1276_0_0_0;
static ParameterInfo t5218_m29395_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t1276_0_0_0},
};
extern TypeInfo t5218_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t1276 (MethodInfo* method, void* obj, void** args);
MethodInfo m29395_MI = 
{
	"GetHashCode", NULL, &t5218_TI, &t35_0_0_0, RuntimeInvoker_t35_t1276, t5218_m29395_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5218_MIs[] =
{
	&m29394_MI,
	&m29395_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5218_0_0_0;
extern Il2CppType t5218_1_0_0;
struct t5218;
extern TypeInfo t5218_TI;
extern Il2CppGenericClass t5218_GC;
TypeInfo t5218_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t5218_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5218_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5218_TI, &t5218_0_0_0, &t5218_1_0_0, NULL, &t5218_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2869_TI;

extern TypeInfo t1276_TI;
extern TypeInfo t14_TI;
extern TypeInfo t35_TI;
extern TypeInfo t26_TI;
extern MethodInfo m16301_MI;
extern MethodInfo m71_MI;
extern MethodInfo m70_MI;


extern MethodInfo m16306_MI;
 void m16306 (t2869 * __this, MethodInfo* method){
	{
		m16301(__this, &m16301_MI);
		return;
	}
}
extern MethodInfo m16307_MI;
 int32_t m16307 (t2869 * __this, t1276  p0, MethodInfo* method){
	{
		t1276  L_0 = p0;
		t14 * L_1 = Box(InitializedTypeInfo(&t1276_TI), &L_0);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m71_MI, Box(InitializedTypeInfo(&t1276_TI), &(*(&p0))));
		return L_2;
	}
}
extern MethodInfo m16308_MI;
 bool m16308 (t2869 * __this, t1276  p0, t1276  p1, MethodInfo* method){
	{
		t1276  L_0 = p0;
		t14 * L_1 = Box(InitializedTypeInfo(&t1276_TI), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		t1276  L_2 = p1;
		t14 * L_3 = Box(InitializedTypeInfo(&t1276_TI), &L_2);
		return ((((t14 *)L_3) == ((t14 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		t1276  L_4 = p1;
		t14 * L_5 = Box(InitializedTypeInfo(&t1276_TI), &L_4);
		bool L_6 = (bool)VirtFuncInvoker1< bool, t14 * >::Invoke(&m70_MI, Box(InitializedTypeInfo(&t1276_TI), &(*(&p0))), L_5);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
extern TypeInfo t2869_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16306_MI = 
{
	".ctor", (methodPointerType)&m16306, &t2869_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1276_0_0_0;
static ParameterInfo t2869_m16307_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t1276_0_0_0},
};
extern TypeInfo t2869_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t1276 (MethodInfo* method, void* obj, void** args);
MethodInfo m16307_MI = 
{
	"GetHashCode", (methodPointerType)&m16307, &t2869_TI, &t35_0_0_0, RuntimeInvoker_t35_t1276, t2869_m16307_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1276_0_0_0;
extern Il2CppType t1276_0_0_0;
static ParameterInfo t2869_m16308_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1276_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1276_0_0_0},
};
extern TypeInfo t2869_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t1276_t1276 (MethodInfo* method, void* obj, void** args);
MethodInfo m16308_MI = 
{
	"Equals", (methodPointerType)&m16308, &t2869_TI, &t26_0_0_0, RuntimeInvoker_t26_t1276_t1276, t2869_m16308_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2869_MIs[] =
{
	&m16306_MI,
	&m16307_MI,
	&m16308_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m16308_MI;
extern MethodInfo m16307_MI;
extern MethodInfo m16304_MI;
extern MethodInfo m16303_MI;
extern MethodInfo m16307_MI;
extern MethodInfo m16308_MI;
static MethodInfo* t2869_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m16308_MI,
	&m16307_MI,
	&m16304_MI,
	&m16303_MI,
	&m16307_MI,
	&m16308_MI,
};
extern TypeInfo t5218_TI;
extern TypeInfo t868_TI;
static Il2CppInterfaceOffsetPair t2869_IOs[] = 
{
	{ &t5218_TI, 4},
	{ &t868_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2869_0_0_0;
extern Il2CppType t2869_1_0_0;
extern TypeInfo t2868_TI;
struct t2869;
extern TypeInfo t2869_TI;
extern Il2CppGenericClass t2869_GC;
extern TypeInfo t844_TI;
TypeInfo t2869_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2869_MIs, NULL, NULL, NULL, &t2868_TI, NULL, &t844_TI, &t2869_TI, NULL, t2869_VT, &EmptyCustomAttributesCache, &t2869_TI, &t2869_0_0_0, &t2869_1_0_0, t2869_IOs, &t2869_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2869), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3742_TI;

#include "t1241.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.LoaderOptimization>
extern MethodInfo m29396_MI;
static PropertyInfo t3742____Current_PropertyInfo = 
{
	&t3742_TI, "Current", &m29396_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3742_PIs[] =
{
	&t3742____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3742_TI;
extern Il2CppType t1241_0_0_0;
extern void* RuntimeInvoker_t1241 (MethodInfo* method, void* obj, void** args);
MethodInfo m29396_MI = 
{
	"get_Current", NULL, &t3742_TI, &t1241_0_0_0, RuntimeInvoker_t1241, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3742_MIs[] =
{
	&m29396_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t3742_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3742_0_0_0;
extern Il2CppType t3742_1_0_0;
struct t3742;
extern TypeInfo t3742_TI;
extern Il2CppGenericClass t3742_GC;
TypeInfo t3742_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3742_MIs, t3742_PIs, NULL, NULL, NULL, NULL, NULL, &t3742_TI, t3742_ITIs, NULL, &EmptyCustomAttributesCache, &t3742_TI, &t3742_0_0_0, &t3742_1_0_0, NULL, &t3742_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2870.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2870_TI;
#include "t2870MD.h"

extern TypeInfo t2870_TI;
extern TypeInfo t1241_TI;
extern TypeInfo t1278_TI;
extern MethodInfo m16313_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m22304_MI;
struct t24;
 int32_t m22304 (t24 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22304_MI;


extern MethodInfo m16309_MI;
 void m16309 (t2870 * __this, t24 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16310_MI;
 t14 * m16310 (t2870 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16313(__this, &m16313_MI);
		int32_t L_1 = L_0;
		t14 * L_2 = Box(InitializedTypeInfo(&t1241_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16311_MI;
 void m16311 (t2870 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16312_MI;
 bool m16312 (t2870 * __this, MethodInfo* method){
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
extern MethodInfo m16313_MI;
 int32_t m16313 (t2870 * __this, MethodInfo* method){
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
		int32_t L_8 = m22304(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22304_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.LoaderOptimization>
extern Il2CppType t24_0_0_1;
FieldInfo t2870_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t2870_TI, offsetof(t2870, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t2870_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t2870_TI, offsetof(t2870, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t2870_FIs[] =
{
	&t2870_f0_FieldInfo,
	&t2870_f1_FieldInfo,
	NULL
};
extern MethodInfo m16310_MI;
static PropertyInfo t2870____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2870_TI, "System.Collections.IEnumerator.Current", &m16310_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16313_MI;
static PropertyInfo t2870____Current_PropertyInfo = 
{
	&t2870_TI, "Current", &m16313_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2870_PIs[] =
{
	&t2870____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2870____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t2870_m16309_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t2870_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m16309_MI = 
{
	".ctor", (methodPointerType)&m16309, &t2870_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2870_m16309_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2870_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m16310_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16310, &t2870_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2870_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16311_MI = 
{
	"Dispose", (methodPointerType)&m16311, &t2870_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2870_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m16312_MI = 
{
	"MoveNext", (methodPointerType)&m16312, &t2870_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2870_TI;
extern Il2CppType t1241_0_0_0;
extern void* RuntimeInvoker_t1241 (MethodInfo* method, void* obj, void** args);
MethodInfo m16313_MI = 
{
	"get_Current", (methodPointerType)&m16313, &t2870_TI, &t1241_0_0_0, RuntimeInvoker_t1241, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2870_MIs[] =
{
	&m16309_MI,
	&m16310_MI,
	&m16311_MI,
	&m16312_MI,
	&m16313_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m16310_MI;
extern MethodInfo m16312_MI;
extern MethodInfo m16311_MI;
extern MethodInfo m16313_MI;
static MethodInfo* t2870_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m16310_MI,
	&m16312_MI,
	&m16311_MI,
	&m16313_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3742_TI;
static TypeInfo* t2870_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t3742_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3742_TI;
static Il2CppInterfaceOffsetPair t2870_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t3742_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2870_0_0_0;
extern Il2CppType t2870_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t2870_TI;
extern Il2CppGenericClass t2870_GC;
extern TypeInfo t24_TI;
TypeInfo t2870_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2870_MIs, t2870_PIs, t2870_FIs, NULL, &t122_TI, NULL, &t24_TI, &t2870_TI, t2870_ITIs, t2870_VT, &EmptyCustomAttributesCache, &t2870_TI, &t2870_0_0_0, &t2870_1_0_0, t2870_IOs, &t2870_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2870)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5115_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.LoaderOptimization>
extern MethodInfo m29397_MI;
static PropertyInfo t5115____Count_PropertyInfo = 
{
	&t5115_TI, "Count", &m29397_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29398_MI;
static PropertyInfo t5115____IsReadOnly_PropertyInfo = 
{
	&t5115_TI, "IsReadOnly", &m29398_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5115_PIs[] =
{
	&t5115____Count_PropertyInfo,
	&t5115____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5115_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29397_MI = 
{
	"get_Count", NULL, &t5115_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5115_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m29398_MI = 
{
	"get_IsReadOnly", NULL, &t5115_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1241_0_0_0;
static ParameterInfo t5115_m29399_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1241_0_0_0},
};
extern TypeInfo t5115_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29399_MI = 
{
	"Add", NULL, &t5115_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t5115_m29399_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5115_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m29400_MI = 
{
	"Clear", NULL, &t5115_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1241_0_0_0;
static ParameterInfo t5115_m29401_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1241_0_0_0},
};
extern TypeInfo t5115_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29401_MI = 
{
	"Contains", NULL, &t5115_TI, &t26_0_0_0, RuntimeInvoker_t26_t35, t5115_m29401_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3079_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t5115_m29402_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3079_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t5115_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29402_MI = 
{
	"CopyTo", NULL, &t5115_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t5115_m29402_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1241_0_0_0;
static ParameterInfo t5115_m29403_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1241_0_0_0},
};
extern TypeInfo t5115_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29403_MI = 
{
	"Remove", NULL, &t5115_TI, &t26_0_0_0, RuntimeInvoker_t26_t35, t5115_m29403_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5115_MIs[] =
{
	&m29397_MI,
	&m29398_MI,
	&m29399_MI,
	&m29400_MI,
	&m29401_MI,
	&m29402_MI,
	&m29403_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t5117_TI;
static TypeInfo* t5115_ITIs[] = 
{
	&t600_TI,
	&t5117_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5115_0_0_0;
extern Il2CppType t5115_1_0_0;
struct t5115;
extern TypeInfo t5115_TI;
extern Il2CppGenericClass t5115_GC;
TypeInfo t5115_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5115_MIs, t5115_PIs, NULL, NULL, NULL, NULL, NULL, &t5115_TI, t5115_ITIs, NULL, &EmptyCustomAttributesCache, &t5115_TI, &t5115_0_0_0, &t5115_1_0_0, NULL, &t5115_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5117_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.LoaderOptimization>
extern TypeInfo t5117_TI;
extern Il2CppType t3742_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m29404_MI = 
{
	"GetEnumerator", NULL, &t5117_TI, &t3742_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5117_MIs[] =
{
	&m29404_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t5117_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5117_0_0_0;
extern Il2CppType t5117_1_0_0;
struct t5117;
extern TypeInfo t5117_TI;
extern Il2CppGenericClass t5117_GC;
TypeInfo t5117_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5117_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5117_TI, t5117_ITIs, NULL, &EmptyCustomAttributesCache, &t5117_TI, &t5117_0_0_0, &t5117_1_0_0, NULL, &t5117_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5116_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.LoaderOptimization>
extern MethodInfo m29405_MI;
extern MethodInfo m29406_MI;
static PropertyInfo t5116____Item_PropertyInfo = 
{
	&t5116_TI, "Item", &m29405_MI, &m29406_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5116_PIs[] =
{
	&t5116____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1241_0_0_0;
static ParameterInfo t5116_m29407_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1241_0_0_0},
};
extern TypeInfo t5116_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29407_MI = 
{
	"IndexOf", NULL, &t5116_TI, &t35_0_0_0, RuntimeInvoker_t35_t35, t5116_m29407_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1241_0_0_0;
static ParameterInfo t5116_m29408_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1241_0_0_0},
};
extern TypeInfo t5116_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29408_MI = 
{
	"Insert", NULL, &t5116_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t35, t5116_m29408_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t5116_m29409_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t5116_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29409_MI = 
{
	"RemoveAt", NULL, &t5116_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t5116_m29409_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t5116_m29405_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t5116_TI;
extern Il2CppType t1241_0_0_0;
extern void* RuntimeInvoker_t1241_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29405_MI = 
{
	"get_Item", NULL, &t5116_TI, &t1241_0_0_0, RuntimeInvoker_t1241_t35, t5116_m29405_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1241_0_0_0;
static ParameterInfo t5116_m29406_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1241_0_0_0},
};
extern TypeInfo t5116_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29406_MI = 
{
	"set_Item", NULL, &t5116_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t35, t5116_m29406_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5116_MIs[] =
{
	&m29407_MI,
	&m29408_MI,
	&m29409_MI,
	&m29405_MI,
	&m29406_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t5115_TI;
extern TypeInfo t5117_TI;
static TypeInfo* t5116_ITIs[] = 
{
	&t600_TI,
	&t5115_TI,
	&t5117_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5116_0_0_0;
extern Il2CppType t5116_1_0_0;
struct t5116;
extern TypeInfo t5116_TI;
extern Il2CppGenericClass t5116_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t5116_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5116_MIs, t5116_PIs, NULL, NULL, NULL, NULL, NULL, &t5116_TI, t5116_ITIs, NULL, &t1409__CustomAttributeCache, &t5116_TI, &t5116_0_0_0, &t5116_1_0_0, NULL, &t5116_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3743_TI;

#include "t1291.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.NonSerializedAttribute>
extern MethodInfo m29410_MI;
static PropertyInfo t3743____Current_PropertyInfo = 
{
	&t3743_TI, "Current", &m29410_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3743_PIs[] =
{
	&t3743____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3743_TI;
extern Il2CppType t1291_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m29410_MI = 
{
	"get_Current", NULL, &t3743_TI, &t1291_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3743_MIs[] =
{
	&m29410_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t3743_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3743_0_0_0;
extern Il2CppType t3743_1_0_0;
struct t3743;
extern TypeInfo t3743_TI;
extern Il2CppGenericClass t3743_GC;
TypeInfo t3743_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3743_MIs, t3743_PIs, NULL, NULL, NULL, NULL, NULL, &t3743_TI, t3743_ITIs, NULL, &EmptyCustomAttributesCache, &t3743_TI, &t3743_0_0_0, &t3743_1_0_0, NULL, &t3743_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2871.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2871_TI;
#include "t2871MD.h"

extern TypeInfo t2871_TI;
extern TypeInfo t1291_TI;
extern TypeInfo t1278_TI;
extern MethodInfo m16318_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m22315_MI;
struct t24;
struct t24;
 t14 * m16357_gshared (t24 * __this, int32_t p0, MethodInfo* method);
#define m16357(__this, p0, method) (t14 *)m16357_gshared((t24 *)__this, (int32_t)p0, method)
#define m22315(__this, p0, method) (t1291 *)m16357_gshared((t24 *)__this, (int32_t)p0, method)
extern MethodInfo m22315_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.NonSerializedAttribute>
extern Il2CppType t24_0_0_1;
FieldInfo t2871_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t2871_TI, offsetof(t2871, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t2871_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t2871_TI, offsetof(t2871, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t2871_FIs[] =
{
	&t2871_f0_FieldInfo,
	&t2871_f1_FieldInfo,
	NULL
};
extern MethodInfo m16315_MI;
static PropertyInfo t2871____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2871_TI, "System.Collections.IEnumerator.Current", &m16315_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16318_MI;
static PropertyInfo t2871____Current_PropertyInfo = 
{
	&t2871_TI, "Current", &m16318_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2871_PIs[] =
{
	&t2871____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2871____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t2871_m16314_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t2871_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m16314_MI = 
{
	".ctor", (methodPointerType)&m7877_gshared, &t2871_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2871_m16314_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2871_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m16315_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7879_gshared, &t2871_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2871_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16316_MI = 
{
	"Dispose", (methodPointerType)&m7881_gshared, &t2871_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2871_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m16317_MI = 
{
	"MoveNext", (methodPointerType)&m7883_gshared, &t2871_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2871_TI;
extern Il2CppType t1291_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m16318_MI = 
{
	"get_Current", (methodPointerType)&m7885_gshared, &t2871_TI, &t1291_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2871_MIs[] =
{
	&m16314_MI,
	&m16315_MI,
	&m16316_MI,
	&m16317_MI,
	&m16318_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m16315_MI;
extern MethodInfo m16317_MI;
extern MethodInfo m16316_MI;
extern MethodInfo m16318_MI;
static MethodInfo* t2871_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m16315_MI,
	&m16317_MI,
	&m16316_MI,
	&m16318_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3743_TI;
static TypeInfo* t2871_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t3743_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3743_TI;
static Il2CppInterfaceOffsetPair t2871_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t3743_TI, 7},
};
extern MethodInfo m16318_MI;
extern TypeInfo t1291_TI;
extern MethodInfo m22315_MI;
static void* t2871_RGCTXData[3] = 
{
	&m16318_MI,
	&t1291_TI,
	&m22315_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2871_0_0_0;
extern Il2CppType t2871_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t2871_TI;
extern Il2CppGenericClass t2871_GC;
extern TypeInfo t24_TI;
TypeInfo t2871_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2871_MIs, t2871_PIs, t2871_FIs, NULL, &t122_TI, NULL, &t24_TI, &t2871_TI, t2871_ITIs, t2871_VT, &EmptyCustomAttributesCache, &t2871_TI, &t2871_0_0_0, &t2871_1_0_0, t2871_IOs, &t2871_GC, NULL, NULL, NULL, t2871_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2871)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5118_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>
extern MethodInfo m29411_MI;
static PropertyInfo t5118____Count_PropertyInfo = 
{
	&t5118_TI, "Count", &m29411_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29412_MI;
static PropertyInfo t5118____IsReadOnly_PropertyInfo = 
{
	&t5118_TI, "IsReadOnly", &m29412_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5118_PIs[] =
{
	&t5118____Count_PropertyInfo,
	&t5118____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5118_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29411_MI = 
{
	"get_Count", NULL, &t5118_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5118_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m29412_MI = 
{
	"get_IsReadOnly", NULL, &t5118_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1291_0_0_0;
static ParameterInfo t5118_m29413_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1291_0_0_0},
};
extern TypeInfo t5118_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m29413_MI = 
{
	"Add", NULL, &t5118_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t5118_m29413_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5118_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m29414_MI = 
{
	"Clear", NULL, &t5118_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1291_0_0_0;
static ParameterInfo t5118_m29415_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1291_0_0_0},
};
extern TypeInfo t5118_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m29415_MI = 
{
	"Contains", NULL, &t5118_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t5118_m29415_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3080_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t5118_m29416_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3080_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t5118_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29416_MI = 
{
	"CopyTo", NULL, &t5118_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t5118_m29416_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1291_0_0_0;
static ParameterInfo t5118_m29417_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1291_0_0_0},
};
extern TypeInfo t5118_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m29417_MI = 
{
	"Remove", NULL, &t5118_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t5118_m29417_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5118_MIs[] =
{
	&m29411_MI,
	&m29412_MI,
	&m29413_MI,
	&m29414_MI,
	&m29415_MI,
	&m29416_MI,
	&m29417_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t5120_TI;
static TypeInfo* t5118_ITIs[] = 
{
	&t600_TI,
	&t5120_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5118_0_0_0;
extern Il2CppType t5118_1_0_0;
struct t5118;
extern TypeInfo t5118_TI;
extern Il2CppGenericClass t5118_GC;
TypeInfo t5118_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5118_MIs, t5118_PIs, NULL, NULL, NULL, NULL, NULL, &t5118_TI, t5118_ITIs, NULL, &EmptyCustomAttributesCache, &t5118_TI, &t5118_0_0_0, &t5118_1_0_0, NULL, &t5118_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5120_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.NonSerializedAttribute>
extern TypeInfo t5120_TI;
extern Il2CppType t3743_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m29418_MI = 
{
	"GetEnumerator", NULL, &t5120_TI, &t3743_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5120_MIs[] =
{
	&m29418_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t5120_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5120_0_0_0;
extern Il2CppType t5120_1_0_0;
struct t5120;
extern TypeInfo t5120_TI;
extern Il2CppGenericClass t5120_GC;
TypeInfo t5120_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5120_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5120_TI, t5120_ITIs, NULL, &EmptyCustomAttributesCache, &t5120_TI, &t5120_0_0_0, &t5120_1_0_0, NULL, &t5120_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5119_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.NonSerializedAttribute>
extern MethodInfo m29419_MI;
extern MethodInfo m29420_MI;
static PropertyInfo t5119____Item_PropertyInfo = 
{
	&t5119_TI, "Item", &m29419_MI, &m29420_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5119_PIs[] =
{
	&t5119____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1291_0_0_0;
static ParameterInfo t5119_m29421_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1291_0_0_0},
};
extern TypeInfo t5119_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m29421_MI = 
{
	"IndexOf", NULL, &t5119_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t5119_m29421_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1291_0_0_0;
static ParameterInfo t5119_m29422_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1291_0_0_0},
};
extern TypeInfo t5119_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m29422_MI = 
{
	"Insert", NULL, &t5119_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t5119_m29422_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t5119_m29423_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t5119_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29423_MI = 
{
	"RemoveAt", NULL, &t5119_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t5119_m29423_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t5119_m29419_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t5119_TI;
extern Il2CppType t1291_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29419_MI = 
{
	"get_Item", NULL, &t5119_TI, &t1291_0_0_0, RuntimeInvoker_t14_t35, t5119_m29419_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1291_0_0_0;
static ParameterInfo t5119_m29420_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1291_0_0_0},
};
extern TypeInfo t5119_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m29420_MI = 
{
	"set_Item", NULL, &t5119_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t5119_m29420_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5119_MIs[] =
{
	&m29421_MI,
	&m29422_MI,
	&m29423_MI,
	&m29419_MI,
	&m29420_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t5118_TI;
extern TypeInfo t5120_TI;
static TypeInfo* t5119_ITIs[] = 
{
	&t600_TI,
	&t5118_TI,
	&t5120_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5119_0_0_0;
extern Il2CppType t5119_1_0_0;
struct t5119;
extern TypeInfo t5119_TI;
extern Il2CppGenericClass t5119_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t5119_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5119_MIs, t5119_PIs, NULL, NULL, NULL, NULL, NULL, &t5119_TI, t5119_ITIs, NULL, &t1409__CustomAttributeCache, &t5119_TI, &t5119_0_0_0, &t5119_1_0_0, NULL, &t5119_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3744_TI;

#include "t1271.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.PlatformID>
extern MethodInfo m29424_MI;
static PropertyInfo t3744____Current_PropertyInfo = 
{
	&t3744_TI, "Current", &m29424_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3744_PIs[] =
{
	&t3744____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3744_TI;
extern Il2CppType t1271_0_0_0;
extern void* RuntimeInvoker_t1271 (MethodInfo* method, void* obj, void** args);
MethodInfo m29424_MI = 
{
	"get_Current", NULL, &t3744_TI, &t1271_0_0_0, RuntimeInvoker_t1271, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3744_MIs[] =
{
	&m29424_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t3744_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3744_0_0_0;
extern Il2CppType t3744_1_0_0;
struct t3744;
extern TypeInfo t3744_TI;
extern Il2CppGenericClass t3744_GC;
TypeInfo t3744_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3744_MIs, t3744_PIs, NULL, NULL, NULL, NULL, NULL, &t3744_TI, t3744_ITIs, NULL, &EmptyCustomAttributesCache, &t3744_TI, &t3744_0_0_0, &t3744_1_0_0, NULL, &t3744_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2872.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2872_TI;
#include "t2872MD.h"

extern TypeInfo t2872_TI;
extern TypeInfo t1271_TI;
extern TypeInfo t1278_TI;
extern MethodInfo m16323_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m22326_MI;
struct t24;
 int32_t m22326 (t24 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22326_MI;


extern MethodInfo m16319_MI;
 void m16319 (t2872 * __this, t24 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16320_MI;
 t14 * m16320 (t2872 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16323(__this, &m16323_MI);
		int32_t L_1 = L_0;
		t14 * L_2 = Box(InitializedTypeInfo(&t1271_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16321_MI;
 void m16321 (t2872 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16322_MI;
 bool m16322 (t2872 * __this, MethodInfo* method){
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
extern MethodInfo m16323_MI;
 int32_t m16323 (t2872 * __this, MethodInfo* method){
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
		int32_t L_8 = m22326(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22326_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.PlatformID>
extern Il2CppType t24_0_0_1;
FieldInfo t2872_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t2872_TI, offsetof(t2872, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t2872_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t2872_TI, offsetof(t2872, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t2872_FIs[] =
{
	&t2872_f0_FieldInfo,
	&t2872_f1_FieldInfo,
	NULL
};
extern MethodInfo m16320_MI;
static PropertyInfo t2872____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2872_TI, "System.Collections.IEnumerator.Current", &m16320_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16323_MI;
static PropertyInfo t2872____Current_PropertyInfo = 
{
	&t2872_TI, "Current", &m16323_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2872_PIs[] =
{
	&t2872____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2872____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t2872_m16319_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t2872_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m16319_MI = 
{
	".ctor", (methodPointerType)&m16319, &t2872_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2872_m16319_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2872_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m16320_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16320, &t2872_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2872_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16321_MI = 
{
	"Dispose", (methodPointerType)&m16321, &t2872_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2872_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m16322_MI = 
{
	"MoveNext", (methodPointerType)&m16322, &t2872_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2872_TI;
extern Il2CppType t1271_0_0_0;
extern void* RuntimeInvoker_t1271 (MethodInfo* method, void* obj, void** args);
MethodInfo m16323_MI = 
{
	"get_Current", (methodPointerType)&m16323, &t2872_TI, &t1271_0_0_0, RuntimeInvoker_t1271, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2872_MIs[] =
{
	&m16319_MI,
	&m16320_MI,
	&m16321_MI,
	&m16322_MI,
	&m16323_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m16320_MI;
extern MethodInfo m16322_MI;
extern MethodInfo m16321_MI;
extern MethodInfo m16323_MI;
static MethodInfo* t2872_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m16320_MI,
	&m16322_MI,
	&m16321_MI,
	&m16323_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3744_TI;
static TypeInfo* t2872_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t3744_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3744_TI;
static Il2CppInterfaceOffsetPair t2872_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t3744_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2872_0_0_0;
extern Il2CppType t2872_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t2872_TI;
extern Il2CppGenericClass t2872_GC;
extern TypeInfo t24_TI;
TypeInfo t2872_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2872_MIs, t2872_PIs, t2872_FIs, NULL, &t122_TI, NULL, &t24_TI, &t2872_TI, t2872_ITIs, t2872_VT, &EmptyCustomAttributesCache, &t2872_TI, &t2872_0_0_0, &t2872_1_0_0, t2872_IOs, &t2872_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2872)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5121_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.PlatformID>
extern MethodInfo m29425_MI;
static PropertyInfo t5121____Count_PropertyInfo = 
{
	&t5121_TI, "Count", &m29425_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29426_MI;
static PropertyInfo t5121____IsReadOnly_PropertyInfo = 
{
	&t5121_TI, "IsReadOnly", &m29426_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5121_PIs[] =
{
	&t5121____Count_PropertyInfo,
	&t5121____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5121_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29425_MI = 
{
	"get_Count", NULL, &t5121_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5121_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m29426_MI = 
{
	"get_IsReadOnly", NULL, &t5121_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1271_0_0_0;
static ParameterInfo t5121_m29427_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1271_0_0_0},
};
extern TypeInfo t5121_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29427_MI = 
{
	"Add", NULL, &t5121_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t5121_m29427_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5121_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m29428_MI = 
{
	"Clear", NULL, &t5121_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1271_0_0_0;
static ParameterInfo t5121_m29429_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1271_0_0_0},
};
extern TypeInfo t5121_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29429_MI = 
{
	"Contains", NULL, &t5121_TI, &t26_0_0_0, RuntimeInvoker_t26_t35, t5121_m29429_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3081_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t5121_m29430_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3081_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t5121_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29430_MI = 
{
	"CopyTo", NULL, &t5121_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t5121_m29430_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1271_0_0_0;
static ParameterInfo t5121_m29431_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1271_0_0_0},
};
extern TypeInfo t5121_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29431_MI = 
{
	"Remove", NULL, &t5121_TI, &t26_0_0_0, RuntimeInvoker_t26_t35, t5121_m29431_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5121_MIs[] =
{
	&m29425_MI,
	&m29426_MI,
	&m29427_MI,
	&m29428_MI,
	&m29429_MI,
	&m29430_MI,
	&m29431_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t5123_TI;
static TypeInfo* t5121_ITIs[] = 
{
	&t600_TI,
	&t5123_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5121_0_0_0;
extern Il2CppType t5121_1_0_0;
struct t5121;
extern TypeInfo t5121_TI;
extern Il2CppGenericClass t5121_GC;
TypeInfo t5121_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5121_MIs, t5121_PIs, NULL, NULL, NULL, NULL, NULL, &t5121_TI, t5121_ITIs, NULL, &EmptyCustomAttributesCache, &t5121_TI, &t5121_0_0_0, &t5121_1_0_0, NULL, &t5121_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5123_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.PlatformID>
extern TypeInfo t5123_TI;
extern Il2CppType t3744_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m29432_MI = 
{
	"GetEnumerator", NULL, &t5123_TI, &t3744_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5123_MIs[] =
{
	&m29432_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t5123_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5123_0_0_0;
extern Il2CppType t5123_1_0_0;
struct t5123;
extern TypeInfo t5123_TI;
extern Il2CppGenericClass t5123_GC;
TypeInfo t5123_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5123_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5123_TI, t5123_ITIs, NULL, &EmptyCustomAttributesCache, &t5123_TI, &t5123_0_0_0, &t5123_1_0_0, NULL, &t5123_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5122_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.PlatformID>
extern MethodInfo m29433_MI;
extern MethodInfo m29434_MI;
static PropertyInfo t5122____Item_PropertyInfo = 
{
	&t5122_TI, "Item", &m29433_MI, &m29434_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5122_PIs[] =
{
	&t5122____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1271_0_0_0;
static ParameterInfo t5122_m29435_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1271_0_0_0},
};
extern TypeInfo t5122_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29435_MI = 
{
	"IndexOf", NULL, &t5122_TI, &t35_0_0_0, RuntimeInvoker_t35_t35, t5122_m29435_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1271_0_0_0;
static ParameterInfo t5122_m29436_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1271_0_0_0},
};
extern TypeInfo t5122_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29436_MI = 
{
	"Insert", NULL, &t5122_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t35, t5122_m29436_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t5122_m29437_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t5122_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29437_MI = 
{
	"RemoveAt", NULL, &t5122_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t5122_m29437_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t5122_m29433_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t5122_TI;
extern Il2CppType t1271_0_0_0;
extern void* RuntimeInvoker_t1271_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29433_MI = 
{
	"get_Item", NULL, &t5122_TI, &t1271_0_0_0, RuntimeInvoker_t1271_t35, t5122_m29433_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1271_0_0_0;
static ParameterInfo t5122_m29434_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1271_0_0_0},
};
extern TypeInfo t5122_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29434_MI = 
{
	"set_Item", NULL, &t5122_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t35, t5122_m29434_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5122_MIs[] =
{
	&m29435_MI,
	&m29436_MI,
	&m29437_MI,
	&m29433_MI,
	&m29434_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t5121_TI;
extern TypeInfo t5123_TI;
static TypeInfo* t5122_ITIs[] = 
{
	&t600_TI,
	&t5121_TI,
	&t5123_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5122_0_0_0;
extern Il2CppType t5122_1_0_0;
struct t5122;
extern TypeInfo t5122_TI;
extern Il2CppGenericClass t5122_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t5122_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5122_MIs, t5122_PIs, NULL, NULL, NULL, NULL, NULL, &t5122_TI, t5122_ITIs, NULL, &t1409__CustomAttributeCache, &t5122_TI, &t5122_0_0_0, &t5122_1_0_0, NULL, &t5122_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1580_TI;



// Metadata Definition System.Collections.Generic.IComparer`1<System.String>
extern Il2CppType t33_0_0_0;
extern Il2CppType t33_0_0_0;
static ParameterInfo t1580_m29438_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t33_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t33_0_0_0},
};
extern TypeInfo t1580_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m29438_MI = 
{
	"Compare", NULL, &t1580_TI, &t35_0_0_0, RuntimeInvoker_t35_t14_t14, t1580_m29438_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1580_MIs[] =
{
	&m29438_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1580_0_0_0;
extern Il2CppType t1580_1_0_0;
struct t1580;
extern TypeInfo t1580_TI;
extern Il2CppGenericClass t1580_GC;
TypeInfo t1580_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t1580_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1580_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1580_TI, &t1580_0_0_0, &t1580_1_0_0, NULL, &t1580_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3745_TI;

#include "t1302.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.ThreadStaticAttribute>
extern MethodInfo m29439_MI;
static PropertyInfo t3745____Current_PropertyInfo = 
{
	&t3745_TI, "Current", &m29439_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3745_PIs[] =
{
	&t3745____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3745_TI;
extern Il2CppType t1302_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m29439_MI = 
{
	"get_Current", NULL, &t3745_TI, &t1302_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3745_MIs[] =
{
	&m29439_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t3745_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3745_0_0_0;
extern Il2CppType t3745_1_0_0;
struct t3745;
extern TypeInfo t3745_TI;
extern Il2CppGenericClass t3745_GC;
TypeInfo t3745_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3745_MIs, t3745_PIs, NULL, NULL, NULL, NULL, NULL, &t3745_TI, t3745_ITIs, NULL, &EmptyCustomAttributesCache, &t3745_TI, &t3745_0_0_0, &t3745_1_0_0, NULL, &t3745_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2873.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2873_TI;
#include "t2873MD.h"

extern TypeInfo t2873_TI;
extern TypeInfo t1302_TI;
extern TypeInfo t1278_TI;
extern MethodInfo m16328_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m22337_MI;
struct t24;
#define m22337(__this, p0, method) (t1302 *)m16357_gshared((t24 *)__this, (int32_t)p0, method)
extern MethodInfo m22337_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.ThreadStaticAttribute>
extern Il2CppType t24_0_0_1;
FieldInfo t2873_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t2873_TI, offsetof(t2873, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t2873_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t2873_TI, offsetof(t2873, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t2873_FIs[] =
{
	&t2873_f0_FieldInfo,
	&t2873_f1_FieldInfo,
	NULL
};
extern MethodInfo m16325_MI;
static PropertyInfo t2873____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2873_TI, "System.Collections.IEnumerator.Current", &m16325_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16328_MI;
static PropertyInfo t2873____Current_PropertyInfo = 
{
	&t2873_TI, "Current", &m16328_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2873_PIs[] =
{
	&t2873____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2873____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t2873_m16324_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t2873_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m16324_MI = 
{
	".ctor", (methodPointerType)&m7877_gshared, &t2873_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2873_m16324_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2873_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m16325_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7879_gshared, &t2873_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2873_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16326_MI = 
{
	"Dispose", (methodPointerType)&m7881_gshared, &t2873_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2873_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m16327_MI = 
{
	"MoveNext", (methodPointerType)&m7883_gshared, &t2873_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2873_TI;
extern Il2CppType t1302_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m16328_MI = 
{
	"get_Current", (methodPointerType)&m7885_gshared, &t2873_TI, &t1302_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2873_MIs[] =
{
	&m16324_MI,
	&m16325_MI,
	&m16326_MI,
	&m16327_MI,
	&m16328_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m16325_MI;
extern MethodInfo m16327_MI;
extern MethodInfo m16326_MI;
extern MethodInfo m16328_MI;
static MethodInfo* t2873_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m16325_MI,
	&m16327_MI,
	&m16326_MI,
	&m16328_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3745_TI;
static TypeInfo* t2873_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t3745_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3745_TI;
static Il2CppInterfaceOffsetPair t2873_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t3745_TI, 7},
};
extern MethodInfo m16328_MI;
extern TypeInfo t1302_TI;
extern MethodInfo m22337_MI;
static void* t2873_RGCTXData[3] = 
{
	&m16328_MI,
	&t1302_TI,
	&m22337_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2873_0_0_0;
extern Il2CppType t2873_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t2873_TI;
extern Il2CppGenericClass t2873_GC;
extern TypeInfo t24_TI;
TypeInfo t2873_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2873_MIs, t2873_PIs, t2873_FIs, NULL, &t122_TI, NULL, &t24_TI, &t2873_TI, t2873_ITIs, t2873_VT, &EmptyCustomAttributesCache, &t2873_TI, &t2873_0_0_0, &t2873_1_0_0, t2873_IOs, &t2873_GC, NULL, NULL, NULL, t2873_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2873)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5124_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.ThreadStaticAttribute>
extern MethodInfo m29440_MI;
static PropertyInfo t5124____Count_PropertyInfo = 
{
	&t5124_TI, "Count", &m29440_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29441_MI;
static PropertyInfo t5124____IsReadOnly_PropertyInfo = 
{
	&t5124_TI, "IsReadOnly", &m29441_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5124_PIs[] =
{
	&t5124____Count_PropertyInfo,
	&t5124____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5124_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29440_MI = 
{
	"get_Count", NULL, &t5124_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5124_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m29441_MI = 
{
	"get_IsReadOnly", NULL, &t5124_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1302_0_0_0;
static ParameterInfo t5124_m29442_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1302_0_0_0},
};
extern TypeInfo t5124_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m29442_MI = 
{
	"Add", NULL, &t5124_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t5124_m29442_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5124_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m29443_MI = 
{
	"Clear", NULL, &t5124_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1302_0_0_0;
static ParameterInfo t5124_m29444_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1302_0_0_0},
};
extern TypeInfo t5124_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m29444_MI = 
{
	"Contains", NULL, &t5124_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t5124_m29444_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3082_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t5124_m29445_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3082_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t5124_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29445_MI = 
{
	"CopyTo", NULL, &t5124_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t5124_m29445_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1302_0_0_0;
static ParameterInfo t5124_m29446_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1302_0_0_0},
};
extern TypeInfo t5124_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m29446_MI = 
{
	"Remove", NULL, &t5124_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t5124_m29446_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5124_MIs[] =
{
	&m29440_MI,
	&m29441_MI,
	&m29442_MI,
	&m29443_MI,
	&m29444_MI,
	&m29445_MI,
	&m29446_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t5126_TI;
static TypeInfo* t5124_ITIs[] = 
{
	&t600_TI,
	&t5126_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5124_0_0_0;
extern Il2CppType t5124_1_0_0;
struct t5124;
extern TypeInfo t5124_TI;
extern Il2CppGenericClass t5124_GC;
TypeInfo t5124_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5124_MIs, t5124_PIs, NULL, NULL, NULL, NULL, NULL, &t5124_TI, t5124_ITIs, NULL, &EmptyCustomAttributesCache, &t5124_TI, &t5124_0_0_0, &t5124_1_0_0, NULL, &t5124_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5126_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.ThreadStaticAttribute>
extern TypeInfo t5126_TI;
extern Il2CppType t3745_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m29447_MI = 
{
	"GetEnumerator", NULL, &t5126_TI, &t3745_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5126_MIs[] =
{
	&m29447_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t5126_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5126_0_0_0;
extern Il2CppType t5126_1_0_0;
struct t5126;
extern TypeInfo t5126_TI;
extern Il2CppGenericClass t5126_GC;
TypeInfo t5126_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5126_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5126_TI, t5126_ITIs, NULL, &EmptyCustomAttributesCache, &t5126_TI, &t5126_0_0_0, &t5126_1_0_0, NULL, &t5126_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5125_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.ThreadStaticAttribute>
extern MethodInfo m29448_MI;
extern MethodInfo m29449_MI;
static PropertyInfo t5125____Item_PropertyInfo = 
{
	&t5125_TI, "Item", &m29448_MI, &m29449_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5125_PIs[] =
{
	&t5125____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1302_0_0_0;
static ParameterInfo t5125_m29450_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1302_0_0_0},
};
extern TypeInfo t5125_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m29450_MI = 
{
	"IndexOf", NULL, &t5125_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t5125_m29450_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1302_0_0_0;
static ParameterInfo t5125_m29451_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1302_0_0_0},
};
extern TypeInfo t5125_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m29451_MI = 
{
	"Insert", NULL, &t5125_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t5125_m29451_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t5125_m29452_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t5125_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29452_MI = 
{
	"RemoveAt", NULL, &t5125_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t5125_m29452_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t5125_m29448_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t5125_TI;
extern Il2CppType t1302_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29448_MI = 
{
	"get_Item", NULL, &t5125_TI, &t1302_0_0_0, RuntimeInvoker_t14_t35, t5125_m29448_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1302_0_0_0;
static ParameterInfo t5125_m29449_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1302_0_0_0},
};
extern TypeInfo t5125_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m29449_MI = 
{
	"set_Item", NULL, &t5125_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t5125_m29449_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5125_MIs[] =
{
	&m29450_MI,
	&m29451_MI,
	&m29452_MI,
	&m29448_MI,
	&m29449_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t5124_TI;
extern TypeInfo t5126_TI;
static TypeInfo* t5125_ITIs[] = 
{
	&t600_TI,
	&t5124_TI,
	&t5126_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5125_0_0_0;
extern Il2CppType t5125_1_0_0;
struct t5125;
extern TypeInfo t5125_TI;
extern Il2CppGenericClass t5125_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t5125_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5125_MIs, t5125_PIs, NULL, NULL, NULL, NULL, NULL, &t5125_TI, t5125_ITIs, NULL, &t1409__CustomAttributeCache, &t5125_TI, &t5125_0_0_0, &t5125_1_0_0, NULL, &t5125_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t1582.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1582_TI;
#include "t1582MD.h"

extern TypeInfo t887_TI;
extern TypeInfo t1584_TI;
extern TypeInfo t35_TI;
#include "t2874MD.h"
extern MethodInfo m16330_MI;
extern MethodInfo m28980_MI;


extern MethodInfo m7857_MI;
 void m7857 (t1582 * __this, MethodInfo* method){
	{
		m16330(__this, &m16330_MI);
		return;
	}
}
extern MethodInfo m16329_MI;
 int32_t m16329 (t1582 * __this, t887  p0, t887  p1, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		t887  L_0 = p0;
		t14 * L_1 = Box(InitializedTypeInfo(&t887_TI), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		t887  L_2 = p1;
		t14 * L_3 = Box(InitializedTypeInfo(&t887_TI), &L_2);
		if (L_3)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		t887  L_4 = p1;
		t14 * L_5 = Box(InitializedTypeInfo(&t887_TI), &L_4);
		if (L_5)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, t887  >::Invoke(&m28980_MI, Box(InitializedTypeInfo(&t887_TI), &(*(&p0))), p1);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.GenericComparer`1<System.TimeSpan>
extern TypeInfo t1582_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m7857_MI = 
{
	".ctor", (methodPointerType)&m7857, &t1582_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t887_0_0_0;
extern Il2CppType t887_0_0_0;
static ParameterInfo t1582_m16329_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t887_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t887_0_0_0},
};
extern TypeInfo t1582_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t887_t887 (MethodInfo* method, void* obj, void** args);
MethodInfo m16329_MI = 
{
	"Compare", (methodPointerType)&m16329, &t1582_TI, &t35_0_0_0, RuntimeInvoker_t35_t887_t887, t1582_m16329_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1582_MIs[] =
{
	&m7857_MI,
	&m16329_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m16329_MI;
extern MethodInfo m16332_MI;
extern MethodInfo m16329_MI;
static MethodInfo* t1582_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m16329_MI,
	&m16332_MI,
	&m16329_MI,
};
extern TypeInfo t5219_TI;
extern TypeInfo t726_TI;
static Il2CppInterfaceOffsetPair t1582_IOs[] = 
{
	{ &t5219_TI, 4},
	{ &t726_TI, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1582_0_0_0;
extern Il2CppType t1582_1_0_0;
extern TypeInfo t2874_TI;
struct t1582;
extern TypeInfo t1582_TI;
extern Il2CppGenericClass t1582_GC;
TypeInfo t1582_TI = 
{
	&g_mscorlib_dll_Image, NULL, "GenericComparer`1", "System.Collections.Generic", t1582_MIs, NULL, NULL, NULL, &t2874_TI, NULL, NULL, &t1582_TI, NULL, t1582_VT, &EmptyCustomAttributesCache, &t1582_TI, &t1582_0_0_0, &t1582_1_0_0, t1582_IOs, &t1582_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1582), 0, -1, 0, 0, -1, 1057024, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#include "t2874.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2874_TI;

#include "t2875.h"
extern TypeInfo t2874_TI;
extern TypeInfo t1584_TI;
extern TypeInfo t31_TI;
extern TypeInfo t887_TI;
extern TypeInfo t26_TI;
extern TypeInfo t833_TI;
extern TypeInfo t534_TI;
extern TypeInfo t2875_TI;
extern TypeInfo t35_TI;
extern TypeInfo t319_TI;
#include "t2875MD.h"
extern Il2CppType t1584_0_0_0;
extern Il2CppType t887_0_0_0;
extern Il2CppType t833_0_0_0;
extern MethodInfo m73_MI;
extern MethodInfo m1571_MI;
extern MethodInfo m3005_MI;
extern MethodInfo m3003_MI;
extern MethodInfo m6460_MI;
extern MethodInfo m16334_MI;
extern MethodInfo m29453_MI;
extern MethodInfo m6482_MI;


extern MethodInfo m16330_MI;
 void m16330 (t2874 * __this, MethodInfo* method){
	{
		m73(__this, &m73_MI);
		return;
	}
}
extern MethodInfo m16331_MI;
 void m16331 (t14 * __this, MethodInfo* method){
	t2875 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (t2875 *)il2cpp_codegen_object_new(InitializedTypeInfo(&t2875_TI));
	m16334(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &m16334_MI);
	((t2874_SFs*)InitializedTypeInfo(&t2874_TI)->static_fields)->f0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
extern MethodInfo m16332_MI;
 int32_t m16332 (t2874 * __this, t14 * p0, t14 * p1, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		if (p0)
		{
			goto IL_000b;
		}
	}
	{
		if (p1)
		{
			goto IL_0009;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_000a;
	}

IL_0009:
	{
		G_B4_0 = (-1);
	}

IL_000a:
	{
		return G_B4_0;
	}

IL_000b:
	{
		if (p1)
		{
			goto IL_0010;
		}
	}
	{
		return 1;
	}

IL_0010:
	{
		if (!((t14 *)IsInst(p0, InitializedTypeInfo(&t887_TI))))
		{
			goto IL_0033;
		}
	}
	{
		if (!((t14 *)IsInst(p1, InitializedTypeInfo(&t887_TI))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker2< int32_t, t887 , t887  >::Invoke(&m29453_MI, __this, ((*(t887 *)((t887 *)UnBox (p0, InitializedTypeInfo(&t887_TI))))), ((*(t887 *)((t887 *)UnBox (p1, InitializedTypeInfo(&t887_TI))))));
		return L_0;
	}

IL_0033:
	{
		t319 * L_1 = (t319 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t319_TI));
		m6482(L_1, &m6482_MI);
		il2cpp_codegen_raise_exception (L_1);
	}
}
extern MethodInfo m16333_MI;
 t2874 * m16333 (t14 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2874_TI));
		return (((t2874_SFs*)InitializedTypeInfo(&t2874_TI)->static_fields)->f0);
	}
}
// Metadata Definition System.Collections.Generic.Comparer`1<System.TimeSpan>
extern Il2CppType t2874_0_0_49;
FieldInfo t2874_f0_FieldInfo = 
{
	"_default", &t2874_0_0_49, &t2874_TI, offsetof(t2874_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2874_FIs[] =
{
	&t2874_f0_FieldInfo,
	NULL
};
extern MethodInfo m16333_MI;
static PropertyInfo t2874____Default_PropertyInfo = 
{
	&t2874_TI, "Default", &m16333_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2874_PIs[] =
{
	&t2874____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2874_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16330_MI = 
{
	".ctor", (methodPointerType)&m16330, &t2874_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2874_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16331_MI = 
{
	".cctor", (methodPointerType)&m16331, &t2874_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t2874_m16332_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2874_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m16332_MI = 
{
	"System.Collections.IComparer.Compare", (methodPointerType)&m16332, &t2874_TI, &t35_0_0_0, RuntimeInvoker_t35_t14_t14, t2874_m16332_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t887_0_0_0;
extern Il2CppType t887_0_0_0;
static ParameterInfo t2874_m29453_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t887_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t887_0_0_0},
};
extern TypeInfo t2874_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t887_t887 (MethodInfo* method, void* obj, void** args);
MethodInfo m29453_MI = 
{
	"Compare", NULL, &t2874_TI, &t35_0_0_0, RuntimeInvoker_t35_t887_t887, t2874_m29453_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2874_TI;
extern Il2CppType t2874_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m16333_MI = 
{
	"get_Default", (methodPointerType)&m16333, &t2874_TI, &t2874_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2874_MIs[] =
{
	&m16330_MI,
	&m16331_MI,
	&m16332_MI,
	&m29453_MI,
	&m16333_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m29453_MI;
extern MethodInfo m16332_MI;
static MethodInfo* t2874_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m29453_MI,
	&m16332_MI,
	NULL,
};
extern TypeInfo t5219_TI;
extern TypeInfo t726_TI;
static TypeInfo* t2874_ITIs[] = 
{
	&t5219_TI,
	&t726_TI,
};
extern TypeInfo t5219_TI;
extern TypeInfo t726_TI;
static Il2CppInterfaceOffsetPair t2874_IOs[] = 
{
	{ &t5219_TI, 4},
	{ &t726_TI, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2874_0_0_0;
extern Il2CppType t2874_1_0_0;
extern TypeInfo t14_TI;
struct t2874;
extern TypeInfo t2874_TI;
extern Il2CppGenericClass t2874_GC;
TypeInfo t2874_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparer`1", "System.Collections.Generic", t2874_MIs, t2874_PIs, t2874_FIs, NULL, &t14_TI, NULL, NULL, &t2874_TI, t2874_ITIs, t2874_VT, &EmptyCustomAttributesCache, &t2874_TI, &t2874_0_0_0, &t2874_1_0_0, t2874_IOs, &t2874_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2874), 0, -1, sizeof(t2874_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 5, 1, 1, 0, 0, 7, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5219_TI;



// Metadata Definition System.Collections.Generic.IComparer`1<System.TimeSpan>
extern Il2CppType t887_0_0_0;
extern Il2CppType t887_0_0_0;
static ParameterInfo t5219_m29454_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t887_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t887_0_0_0},
};
extern TypeInfo t5219_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t887_t887 (MethodInfo* method, void* obj, void** args);
MethodInfo m29454_MI = 
{
	"Compare", NULL, &t5219_TI, &t35_0_0_0, RuntimeInvoker_t35_t887_t887, t5219_m29454_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5219_MIs[] =
{
	&m29454_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5219_0_0_0;
extern Il2CppType t5219_1_0_0;
struct t5219;
extern TypeInfo t5219_TI;
extern Il2CppGenericClass t5219_GC;
TypeInfo t5219_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t5219_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5219_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5219_TI, &t5219_0_0_0, &t5219_1_0_0, NULL, &t5219_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2875_TI;

extern TypeInfo t887_TI;
extern TypeInfo t1584_TI;
extern TypeInfo t35_TI;
extern TypeInfo t43_TI;
extern TypeInfo t14_TI;
extern TypeInfo t319_TI;
extern MethodInfo m16330_MI;
extern MethodInfo m28980_MI;
extern MethodInfo m7322_MI;
extern MethodInfo m1959_MI;


extern MethodInfo m16334_MI;
 void m16334 (t2875 * __this, MethodInfo* method){
	{
		m16330(__this, &m16330_MI);
		return;
	}
}
extern MethodInfo m16335_MI;
 int32_t m16335 (t2875 * __this, t887  p0, t887  p1, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		t887  L_0 = p0;
		t14 * L_1 = Box(InitializedTypeInfo(&t887_TI), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		t887  L_2 = p1;
		t14 * L_3 = Box(InitializedTypeInfo(&t887_TI), &L_2);
		if (L_3)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		t887  L_4 = p1;
		t14 * L_5 = Box(InitializedTypeInfo(&t887_TI), &L_4);
		if (L_5)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		t887  L_6 = p0;
		t14 * L_7 = Box(InitializedTypeInfo(&t887_TI), &L_6);
		if (!((t14*)IsInst(L_7, InitializedTypeInfo(&t1584_TI))))
		{
			goto IL_003e;
		}
	}
	{
		t887  L_8 = p0;
		t14 * L_9 = Box(InitializedTypeInfo(&t887_TI), &L_8);
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, t887  >::Invoke(&m28980_MI, ((t14*)Castclass(L_9, InitializedTypeInfo(&t1584_TI))), p1);
		return L_10;
	}

IL_003e:
	{
		t887  L_11 = p0;
		t14 * L_12 = Box(InitializedTypeInfo(&t887_TI), &L_11);
		if (!((t14 *)IsInst(L_12, InitializedTypeInfo(&t43_TI))))
		{
			goto IL_0062;
		}
	}
	{
		t887  L_13 = p0;
		t14 * L_14 = Box(InitializedTypeInfo(&t887_TI), &L_13);
		t887  L_15 = p1;
		t14 * L_16 = Box(InitializedTypeInfo(&t887_TI), &L_15);
		int32_t L_17 = (int32_t)InterfaceFuncInvoker1< int32_t, t14 * >::Invoke(&m7322_MI, ((t14 *)Castclass(L_14, InitializedTypeInfo(&t43_TI))), L_16);
		return L_17;
	}

IL_0062:
	{
		t319 * L_18 = (t319 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t319_TI));
		m1959(L_18, (t33*) &_stringLiteral535, &m1959_MI);
		il2cpp_codegen_raise_exception (L_18);
	}
}
// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>
extern TypeInfo t2875_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16334_MI = 
{
	".ctor", (methodPointerType)&m16334, &t2875_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t887_0_0_0;
extern Il2CppType t887_0_0_0;
static ParameterInfo t2875_m16335_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t887_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t887_0_0_0},
};
extern TypeInfo t2875_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t887_t887 (MethodInfo* method, void* obj, void** args);
MethodInfo m16335_MI = 
{
	"Compare", (methodPointerType)&m16335, &t2875_TI, &t35_0_0_0, RuntimeInvoker_t35_t887_t887, t2875_m16335_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2875_MIs[] =
{
	&m16334_MI,
	&m16335_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m16335_MI;
extern MethodInfo m16332_MI;
extern MethodInfo m16335_MI;
static MethodInfo* t2875_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m16335_MI,
	&m16332_MI,
	&m16335_MI,
};
extern TypeInfo t5219_TI;
extern TypeInfo t726_TI;
static Il2CppInterfaceOffsetPair t2875_IOs[] = 
{
	{ &t5219_TI, 4},
	{ &t726_TI, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2875_0_0_0;
extern Il2CppType t2875_1_0_0;
extern TypeInfo t2874_TI;
struct t2875;
extern TypeInfo t2875_TI;
extern Il2CppGenericClass t2875_GC;
extern TypeInfo t832_TI;
TypeInfo t2875_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2875_MIs, NULL, NULL, NULL, &t2874_TI, NULL, &t832_TI, &t2875_TI, NULL, t2875_VT, &EmptyCustomAttributesCache, &t2875_TI, &t2875_0_0_0, &t2875_1_0_0, t2875_IOs, &t2875_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2875), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#include "t1583.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1583_TI;
#include "t1583MD.h"

extern TypeInfo t887_TI;
extern TypeInfo t14_TI;
extern TypeInfo t35_TI;
extern TypeInfo t1585_TI;
extern TypeInfo t26_TI;
#include "t2876MD.h"
extern MethodInfo m16338_MI;
extern MethodInfo m71_MI;
extern MethodInfo m28995_MI;


extern MethodInfo m7858_MI;
 void m7858 (t1583 * __this, MethodInfo* method){
	{
		m16338(__this, &m16338_MI);
		return;
	}
}
extern MethodInfo m16336_MI;
 int32_t m16336 (t1583 * __this, t887  p0, MethodInfo* method){
	{
		t887  L_0 = p0;
		t14 * L_1 = Box(InitializedTypeInfo(&t887_TI), &L_0);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m71_MI, Box(InitializedTypeInfo(&t887_TI), &(*(&p0))));
		return L_2;
	}
}
extern MethodInfo m16337_MI;
 bool m16337 (t1583 * __this, t887  p0, t887  p1, MethodInfo* method){
	{
		t887  L_0 = p0;
		t14 * L_1 = Box(InitializedTypeInfo(&t887_TI), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		t887  L_2 = p1;
		t14 * L_3 = Box(InitializedTypeInfo(&t887_TI), &L_2);
		return ((((t14 *)L_3) == ((t14 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, t887  >::Invoke(&m28995_MI, Box(InitializedTypeInfo(&t887_TI), &(*(&p0))), p1);
		return L_4;
	}
}
// Metadata Definition System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>
extern TypeInfo t1583_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m7858_MI = 
{
	".ctor", (methodPointerType)&m7858, &t1583_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t887_0_0_0;
static ParameterInfo t1583_m16336_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t887_0_0_0},
};
extern TypeInfo t1583_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t887 (MethodInfo* method, void* obj, void** args);
MethodInfo m16336_MI = 
{
	"GetHashCode", (methodPointerType)&m16336, &t1583_TI, &t35_0_0_0, RuntimeInvoker_t35_t887, t1583_m16336_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t887_0_0_0;
extern Il2CppType t887_0_0_0;
static ParameterInfo t1583_m16337_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t887_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t887_0_0_0},
};
extern TypeInfo t1583_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t887_t887 (MethodInfo* method, void* obj, void** args);
MethodInfo m16337_MI = 
{
	"Equals", (methodPointerType)&m16337, &t1583_TI, &t26_0_0_0, RuntimeInvoker_t26_t887_t887, t1583_m16337_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1583_MIs[] =
{
	&m7858_MI,
	&m16336_MI,
	&m16337_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m16337_MI;
extern MethodInfo m16336_MI;
extern MethodInfo m16341_MI;
extern MethodInfo m16340_MI;
extern MethodInfo m16336_MI;
extern MethodInfo m16337_MI;
static MethodInfo* t1583_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m16337_MI,
	&m16336_MI,
	&m16341_MI,
	&m16340_MI,
	&m16336_MI,
	&m16337_MI,
};
extern TypeInfo t5220_TI;
extern TypeInfo t868_TI;
static Il2CppInterfaceOffsetPair t1583_IOs[] = 
{
	{ &t5220_TI, 4},
	{ &t868_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1583_0_0_0;
extern Il2CppType t1583_1_0_0;
extern TypeInfo t2876_TI;
struct t1583;
extern TypeInfo t1583_TI;
extern Il2CppGenericClass t1583_GC;
TypeInfo t1583_TI = 
{
	&g_mscorlib_dll_Image, NULL, "GenericEqualityComparer`1", "System.Collections.Generic", t1583_MIs, NULL, NULL, NULL, &t2876_TI, NULL, NULL, &t1583_TI, NULL, t1583_VT, &EmptyCustomAttributesCache, &t1583_TI, &t1583_0_0_0, &t1583_1_0_0, t1583_IOs, &t1583_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1583), 0, -1, 0, 0, -1, 1057024, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#include "t2876.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2876_TI;

#include "t2877.h"
extern TypeInfo t2876_TI;
extern TypeInfo t1585_TI;
extern TypeInfo t31_TI;
extern TypeInfo t887_TI;
extern TypeInfo t26_TI;
extern TypeInfo t845_TI;
extern TypeInfo t534_TI;
extern TypeInfo t2877_TI;
extern TypeInfo t35_TI;
#include "t2877MD.h"
extern Il2CppType t1585_0_0_0;
extern Il2CppType t887_0_0_0;
extern Il2CppType t845_0_0_0;
extern MethodInfo m73_MI;
extern MethodInfo m1571_MI;
extern MethodInfo m3005_MI;
extern MethodInfo m3003_MI;
extern MethodInfo m6460_MI;
extern MethodInfo m16343_MI;
extern MethodInfo m29455_MI;
extern MethodInfo m29456_MI;


extern MethodInfo m16338_MI;
 void m16338 (t2876 * __this, MethodInfo* method){
	{
		m73(__this, &m73_MI);
		return;
	}
}
extern MethodInfo m16339_MI;
 void m16339 (t14 * __this, MethodInfo* method){
	t2877 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (t2877 *)il2cpp_codegen_object_new(InitializedTypeInfo(&t2877_TI));
	m16343(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &m16343_MI);
	((t2876_SFs*)InitializedTypeInfo(&t2876_TI)->static_fields)->f0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
extern MethodInfo m16340_MI;
 int32_t m16340 (t2876 * __this, t14 * p0, MethodInfo* method){
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker1< int32_t, t887  >::Invoke(&m29455_MI, __this, ((*(t887 *)((t887 *)UnBox (p0, InitializedTypeInfo(&t887_TI))))));
		return L_0;
	}
}
extern MethodInfo m16341_MI;
 bool m16341 (t2876 * __this, t14 * p0, t14 * p1, MethodInfo* method){
	{
		bool L_0 = (bool)VirtFuncInvoker2< bool, t887 , t887  >::Invoke(&m29456_MI, __this, ((*(t887 *)((t887 *)UnBox (p0, InitializedTypeInfo(&t887_TI))))), ((*(t887 *)((t887 *)UnBox (p1, InitializedTypeInfo(&t887_TI))))));
		return L_0;
	}
}
extern MethodInfo m16342_MI;
 t2876 * m16342 (t14 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2876_TI));
		return (((t2876_SFs*)InitializedTypeInfo(&t2876_TI)->static_fields)->f0);
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1<System.TimeSpan>
extern Il2CppType t2876_0_0_49;
FieldInfo t2876_f0_FieldInfo = 
{
	"_default", &t2876_0_0_49, &t2876_TI, offsetof(t2876_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2876_FIs[] =
{
	&t2876_f0_FieldInfo,
	NULL
};
extern MethodInfo m16342_MI;
static PropertyInfo t2876____Default_PropertyInfo = 
{
	&t2876_TI, "Default", &m16342_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2876_PIs[] =
{
	&t2876____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2876_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16338_MI = 
{
	".ctor", (methodPointerType)&m16338, &t2876_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2876_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16339_MI = 
{
	".cctor", (methodPointerType)&m16339, &t2876_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2876_m16340_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2876_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m16340_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m16340, &t2876_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t2876_m16340_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t2876_m16341_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2876_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m16341_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m16341, &t2876_TI, &t26_0_0_0, RuntimeInvoker_t26_t14_t14, t2876_m16341_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t887_0_0_0;
static ParameterInfo t2876_m29455_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t887_0_0_0},
};
extern TypeInfo t2876_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t887 (MethodInfo* method, void* obj, void** args);
MethodInfo m29455_MI = 
{
	"GetHashCode", NULL, &t2876_TI, &t35_0_0_0, RuntimeInvoker_t35_t887, t2876_m29455_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t887_0_0_0;
extern Il2CppType t887_0_0_0;
static ParameterInfo t2876_m29456_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t887_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t887_0_0_0},
};
extern TypeInfo t2876_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t887_t887 (MethodInfo* method, void* obj, void** args);
MethodInfo m29456_MI = 
{
	"Equals", NULL, &t2876_TI, &t26_0_0_0, RuntimeInvoker_t26_t887_t887, t2876_m29456_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2876_TI;
extern Il2CppType t2876_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m16342_MI = 
{
	"get_Default", (methodPointerType)&m16342, &t2876_TI, &t2876_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2876_MIs[] =
{
	&m16338_MI,
	&m16339_MI,
	&m16340_MI,
	&m16341_MI,
	&m29455_MI,
	&m29456_MI,
	&m16342_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m29456_MI;
extern MethodInfo m29455_MI;
extern MethodInfo m16341_MI;
extern MethodInfo m16340_MI;
static MethodInfo* t2876_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m29456_MI,
	&m29455_MI,
	&m16341_MI,
	&m16340_MI,
	NULL,
	NULL,
};
extern TypeInfo t5220_TI;
extern TypeInfo t868_TI;
static TypeInfo* t2876_ITIs[] = 
{
	&t5220_TI,
	&t868_TI,
};
extern TypeInfo t5220_TI;
extern TypeInfo t868_TI;
static Il2CppInterfaceOffsetPair t2876_IOs[] = 
{
	{ &t5220_TI, 4},
	{ &t868_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2876_0_0_0;
extern Il2CppType t2876_1_0_0;
extern TypeInfo t14_TI;
struct t2876;
extern TypeInfo t2876_TI;
extern Il2CppGenericClass t2876_GC;
TypeInfo t2876_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t2876_MIs, t2876_PIs, t2876_FIs, NULL, &t14_TI, NULL, NULL, &t2876_TI, t2876_ITIs, t2876_VT, &EmptyCustomAttributesCache, &t2876_TI, &t2876_0_0_0, &t2876_1_0_0, t2876_IOs, &t2876_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2876), 0, -1, sizeof(t2876_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5220_TI;



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<System.TimeSpan>
extern Il2CppType t887_0_0_0;
extern Il2CppType t887_0_0_0;
static ParameterInfo t5220_m29457_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t887_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t887_0_0_0},
};
extern TypeInfo t5220_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t887_t887 (MethodInfo* method, void* obj, void** args);
MethodInfo m29457_MI = 
{
	"Equals", NULL, &t5220_TI, &t26_0_0_0, RuntimeInvoker_t26_t887_t887, t5220_m29457_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t887_0_0_0;
static ParameterInfo t5220_m29458_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t887_0_0_0},
};
extern TypeInfo t5220_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t887 (MethodInfo* method, void* obj, void** args);
MethodInfo m29458_MI = 
{
	"GetHashCode", NULL, &t5220_TI, &t35_0_0_0, RuntimeInvoker_t35_t887, t5220_m29458_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5220_MIs[] =
{
	&m29457_MI,
	&m29458_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5220_0_0_0;
extern Il2CppType t5220_1_0_0;
struct t5220;
extern TypeInfo t5220_TI;
extern Il2CppGenericClass t5220_GC;
TypeInfo t5220_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t5220_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5220_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5220_TI, &t5220_0_0_0, &t5220_1_0_0, NULL, &t5220_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2877_TI;

extern TypeInfo t887_TI;
extern TypeInfo t14_TI;
extern TypeInfo t35_TI;
extern TypeInfo t26_TI;
extern MethodInfo m16338_MI;
extern MethodInfo m71_MI;
extern MethodInfo m70_MI;


extern MethodInfo m16343_MI;
 void m16343 (t2877 * __this, MethodInfo* method){
	{
		m16338(__this, &m16338_MI);
		return;
	}
}
extern MethodInfo m16344_MI;
 int32_t m16344 (t2877 * __this, t887  p0, MethodInfo* method){
	{
		t887  L_0 = p0;
		t14 * L_1 = Box(InitializedTypeInfo(&t887_TI), &L_0);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m71_MI, Box(InitializedTypeInfo(&t887_TI), &(*(&p0))));
		return L_2;
	}
}
extern MethodInfo m16345_MI;
 bool m16345 (t2877 * __this, t887  p0, t887  p1, MethodInfo* method){
	{
		t887  L_0 = p0;
		t14 * L_1 = Box(InitializedTypeInfo(&t887_TI), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		t887  L_2 = p1;
		t14 * L_3 = Box(InitializedTypeInfo(&t887_TI), &L_2);
		return ((((t14 *)L_3) == ((t14 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		t887  L_4 = p1;
		t14 * L_5 = Box(InitializedTypeInfo(&t887_TI), &L_4);
		bool L_6 = (bool)VirtFuncInvoker1< bool, t14 * >::Invoke(&m70_MI, Box(InitializedTypeInfo(&t887_TI), &(*(&p0))), L_5);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
extern TypeInfo t2877_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16343_MI = 
{
	".ctor", (methodPointerType)&m16343, &t2877_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t887_0_0_0;
static ParameterInfo t2877_m16344_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t887_0_0_0},
};
extern TypeInfo t2877_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t887 (MethodInfo* method, void* obj, void** args);
MethodInfo m16344_MI = 
{
	"GetHashCode", (methodPointerType)&m16344, &t2877_TI, &t35_0_0_0, RuntimeInvoker_t35_t887, t2877_m16344_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t887_0_0_0;
extern Il2CppType t887_0_0_0;
static ParameterInfo t2877_m16345_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t887_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t887_0_0_0},
};
extern TypeInfo t2877_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t887_t887 (MethodInfo* method, void* obj, void** args);
MethodInfo m16345_MI = 
{
	"Equals", (methodPointerType)&m16345, &t2877_TI, &t26_0_0_0, RuntimeInvoker_t26_t887_t887, t2877_m16345_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2877_MIs[] =
{
	&m16343_MI,
	&m16344_MI,
	&m16345_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m16345_MI;
extern MethodInfo m16344_MI;
extern MethodInfo m16341_MI;
extern MethodInfo m16340_MI;
extern MethodInfo m16344_MI;
extern MethodInfo m16345_MI;
static MethodInfo* t2877_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m16345_MI,
	&m16344_MI,
	&m16341_MI,
	&m16340_MI,
	&m16344_MI,
	&m16345_MI,
};
extern TypeInfo t5220_TI;
extern TypeInfo t868_TI;
static Il2CppInterfaceOffsetPair t2877_IOs[] = 
{
	{ &t5220_TI, 4},
	{ &t868_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2877_0_0_0;
extern Il2CppType t2877_1_0_0;
extern TypeInfo t2876_TI;
struct t2877;
extern TypeInfo t2877_TI;
extern Il2CppGenericClass t2877_GC;
extern TypeInfo t844_TI;
TypeInfo t2877_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2877_MIs, NULL, NULL, NULL, &t2876_TI, NULL, &t844_TI, &t2877_TI, NULL, t2877_VT, &EmptyCustomAttributesCache, &t2877_TI, &t2877_0_0_0, &t2877_1_0_0, t2877_IOs, &t2877_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2877), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3746_TI;

#include "t707.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.TypeCode>
extern MethodInfo m29459_MI;
static PropertyInfo t3746____Current_PropertyInfo = 
{
	&t3746_TI, "Current", &m29459_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3746_PIs[] =
{
	&t3746____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3746_TI;
extern Il2CppType t707_0_0_0;
extern void* RuntimeInvoker_t707 (MethodInfo* method, void* obj, void** args);
MethodInfo m29459_MI = 
{
	"get_Current", NULL, &t3746_TI, &t707_0_0_0, RuntimeInvoker_t707, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3746_MIs[] =
{
	&m29459_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t3746_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3746_0_0_0;
extern Il2CppType t3746_1_0_0;
struct t3746;
extern TypeInfo t3746_TI;
extern Il2CppGenericClass t3746_GC;
TypeInfo t3746_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3746_MIs, t3746_PIs, NULL, NULL, NULL, NULL, NULL, &t3746_TI, t3746_ITIs, NULL, &EmptyCustomAttributesCache, &t3746_TI, &t3746_0_0_0, &t3746_1_0_0, NULL, &t3746_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2878.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2878_TI;
#include "t2878MD.h"

extern TypeInfo t2878_TI;
extern TypeInfo t707_TI;
extern TypeInfo t1278_TI;
extern MethodInfo m16350_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m22348_MI;
struct t24;
 int32_t m22348 (t24 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22348_MI;


extern MethodInfo m16346_MI;
 void m16346 (t2878 * __this, t24 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16347_MI;
 t14 * m16347 (t2878 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16350(__this, &m16350_MI);
		int32_t L_1 = L_0;
		t14 * L_2 = Box(InitializedTypeInfo(&t707_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16348_MI;
 void m16348 (t2878 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16349_MI;
 bool m16349 (t2878 * __this, MethodInfo* method){
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
extern MethodInfo m16350_MI;
 int32_t m16350 (t2878 * __this, MethodInfo* method){
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
		int32_t L_8 = m22348(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22348_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.TypeCode>
extern Il2CppType t24_0_0_1;
FieldInfo t2878_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t2878_TI, offsetof(t2878, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t2878_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t2878_TI, offsetof(t2878, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t2878_FIs[] =
{
	&t2878_f0_FieldInfo,
	&t2878_f1_FieldInfo,
	NULL
};
extern MethodInfo m16347_MI;
static PropertyInfo t2878____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2878_TI, "System.Collections.IEnumerator.Current", &m16347_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16350_MI;
static PropertyInfo t2878____Current_PropertyInfo = 
{
	&t2878_TI, "Current", &m16350_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2878_PIs[] =
{
	&t2878____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2878____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t2878_m16346_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t2878_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m16346_MI = 
{
	".ctor", (methodPointerType)&m16346, &t2878_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2878_m16346_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2878_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m16347_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16347, &t2878_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2878_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16348_MI = 
{
	"Dispose", (methodPointerType)&m16348, &t2878_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2878_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m16349_MI = 
{
	"MoveNext", (methodPointerType)&m16349, &t2878_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2878_TI;
extern Il2CppType t707_0_0_0;
extern void* RuntimeInvoker_t707 (MethodInfo* method, void* obj, void** args);
MethodInfo m16350_MI = 
{
	"get_Current", (methodPointerType)&m16350, &t2878_TI, &t707_0_0_0, RuntimeInvoker_t707, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2878_MIs[] =
{
	&m16346_MI,
	&m16347_MI,
	&m16348_MI,
	&m16349_MI,
	&m16350_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m16347_MI;
extern MethodInfo m16349_MI;
extern MethodInfo m16348_MI;
extern MethodInfo m16350_MI;
static MethodInfo* t2878_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m16347_MI,
	&m16349_MI,
	&m16348_MI,
	&m16350_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3746_TI;
static TypeInfo* t2878_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t3746_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3746_TI;
static Il2CppInterfaceOffsetPair t2878_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t3746_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2878_0_0_0;
extern Il2CppType t2878_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t2878_TI;
extern Il2CppGenericClass t2878_GC;
extern TypeInfo t24_TI;
TypeInfo t2878_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2878_MIs, t2878_PIs, t2878_FIs, NULL, &t122_TI, NULL, &t24_TI, &t2878_TI, t2878_ITIs, t2878_VT, &EmptyCustomAttributesCache, &t2878_TI, &t2878_0_0_0, &t2878_1_0_0, t2878_IOs, &t2878_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2878)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5127_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.TypeCode>
extern MethodInfo m29460_MI;
static PropertyInfo t5127____Count_PropertyInfo = 
{
	&t5127_TI, "Count", &m29460_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29461_MI;
static PropertyInfo t5127____IsReadOnly_PropertyInfo = 
{
	&t5127_TI, "IsReadOnly", &m29461_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5127_PIs[] =
{
	&t5127____Count_PropertyInfo,
	&t5127____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5127_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29460_MI = 
{
	"get_Count", NULL, &t5127_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5127_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m29461_MI = 
{
	"get_IsReadOnly", NULL, &t5127_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t707_0_0_0;
static ParameterInfo t5127_m29462_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t707_0_0_0},
};
extern TypeInfo t5127_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29462_MI = 
{
	"Add", NULL, &t5127_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t5127_m29462_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5127_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m29463_MI = 
{
	"Clear", NULL, &t5127_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t707_0_0_0;
static ParameterInfo t5127_m29464_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t707_0_0_0},
};
extern TypeInfo t5127_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29464_MI = 
{
	"Contains", NULL, &t5127_TI, &t26_0_0_0, RuntimeInvoker_t26_t35, t5127_m29464_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3083_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t5127_m29465_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3083_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t5127_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29465_MI = 
{
	"CopyTo", NULL, &t5127_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t5127_m29465_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t707_0_0_0;
static ParameterInfo t5127_m29466_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t707_0_0_0},
};
extern TypeInfo t5127_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29466_MI = 
{
	"Remove", NULL, &t5127_TI, &t26_0_0_0, RuntimeInvoker_t26_t35, t5127_m29466_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5127_MIs[] =
{
	&m29460_MI,
	&m29461_MI,
	&m29462_MI,
	&m29463_MI,
	&m29464_MI,
	&m29465_MI,
	&m29466_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t5129_TI;
static TypeInfo* t5127_ITIs[] = 
{
	&t600_TI,
	&t5129_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5127_0_0_0;
extern Il2CppType t5127_1_0_0;
struct t5127;
extern TypeInfo t5127_TI;
extern Il2CppGenericClass t5127_GC;
TypeInfo t5127_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5127_MIs, t5127_PIs, NULL, NULL, NULL, NULL, NULL, &t5127_TI, t5127_ITIs, NULL, &EmptyCustomAttributesCache, &t5127_TI, &t5127_0_0_0, &t5127_1_0_0, NULL, &t5127_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5129_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.TypeCode>
extern TypeInfo t5129_TI;
extern Il2CppType t3746_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m29467_MI = 
{
	"GetEnumerator", NULL, &t5129_TI, &t3746_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5129_MIs[] =
{
	&m29467_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t5129_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5129_0_0_0;
extern Il2CppType t5129_1_0_0;
struct t5129;
extern TypeInfo t5129_TI;
extern Il2CppGenericClass t5129_GC;
TypeInfo t5129_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5129_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5129_TI, t5129_ITIs, NULL, &EmptyCustomAttributesCache, &t5129_TI, &t5129_0_0_0, &t5129_1_0_0, NULL, &t5129_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5128_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.TypeCode>
extern MethodInfo m29468_MI;
extern MethodInfo m29469_MI;
static PropertyInfo t5128____Item_PropertyInfo = 
{
	&t5128_TI, "Item", &m29468_MI, &m29469_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5128_PIs[] =
{
	&t5128____Item_PropertyInfo,
	NULL
};
extern Il2CppType t707_0_0_0;
static ParameterInfo t5128_m29470_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t707_0_0_0},
};
extern TypeInfo t5128_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29470_MI = 
{
	"IndexOf", NULL, &t5128_TI, &t35_0_0_0, RuntimeInvoker_t35_t35, t5128_m29470_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t707_0_0_0;
static ParameterInfo t5128_m29471_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t707_0_0_0},
};
extern TypeInfo t5128_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29471_MI = 
{
	"Insert", NULL, &t5128_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t35, t5128_m29471_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t5128_m29472_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t5128_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29472_MI = 
{
	"RemoveAt", NULL, &t5128_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t5128_m29472_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t5128_m29468_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t5128_TI;
extern Il2CppType t707_0_0_0;
extern void* RuntimeInvoker_t707_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29468_MI = 
{
	"get_Item", NULL, &t5128_TI, &t707_0_0_0, RuntimeInvoker_t707_t35, t5128_m29468_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t707_0_0_0;
static ParameterInfo t5128_m29469_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t707_0_0_0},
};
extern TypeInfo t5128_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29469_MI = 
{
	"set_Item", NULL, &t5128_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t35, t5128_m29469_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5128_MIs[] =
{
	&m29470_MI,
	&m29471_MI,
	&m29472_MI,
	&m29468_MI,
	&m29469_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t5127_TI;
extern TypeInfo t5129_TI;
static TypeInfo* t5128_ITIs[] = 
{
	&t600_TI,
	&t5127_TI,
	&t5129_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5128_0_0_0;
extern Il2CppType t5128_1_0_0;
struct t5128;
extern TypeInfo t5128_TI;
extern Il2CppGenericClass t5128_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t5128_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5128_MIs, t5128_PIs, NULL, NULL, NULL, NULL, NULL, &t5128_TI, t5128_ITIs, NULL, &t1409__CustomAttributeCache, &t5128_TI, &t5128_0_0_0, &t5128_1_0_0, NULL, &t5128_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3747_TI;

#include "t1308.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.UnitySerializationHolder/UnityType>
extern MethodInfo m29473_MI;
static PropertyInfo t3747____Current_PropertyInfo = 
{
	&t3747_TI, "Current", &m29473_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3747_PIs[] =
{
	&t3747____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3747_TI;
extern Il2CppType t1308_0_0_0;
extern void* RuntimeInvoker_t1308 (MethodInfo* method, void* obj, void** args);
MethodInfo m29473_MI = 
{
	"get_Current", NULL, &t3747_TI, &t1308_0_0_0, RuntimeInvoker_t1308, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3747_MIs[] =
{
	&m29473_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t3747_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3747_0_0_0;
extern Il2CppType t3747_1_0_0;
struct t3747;
extern TypeInfo t3747_TI;
extern Il2CppGenericClass t3747_GC;
TypeInfo t3747_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3747_MIs, t3747_PIs, NULL, NULL, NULL, NULL, NULL, &t3747_TI, t3747_ITIs, NULL, &EmptyCustomAttributesCache, &t3747_TI, &t3747_0_0_0, &t3747_1_0_0, NULL, &t3747_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2879.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2879_TI;
#include "t2879MD.h"

extern TypeInfo t2879_TI;
extern TypeInfo t1308_TI;
extern TypeInfo t1278_TI;
extern MethodInfo m16355_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m22359_MI;
struct t24;
 uint8_t m22359 (t24 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22359_MI;


extern MethodInfo m16351_MI;
 void m16351 (t2879 * __this, t24 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16352_MI;
 t14 * m16352 (t2879 * __this, MethodInfo* method){
	{
		uint8_t L_0 = m16355(__this, &m16355_MI);
		uint8_t L_1 = L_0;
		t14 * L_2 = Box(InitializedTypeInfo(&t1308_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16353_MI;
 void m16353 (t2879 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16354_MI;
 bool m16354 (t2879 * __this, MethodInfo* method){
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
extern MethodInfo m16355_MI;
 uint8_t m16355 (t2879 * __this, MethodInfo* method){
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
		uint8_t L_8 = m22359(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22359_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.UnitySerializationHolder/UnityType>
extern Il2CppType t24_0_0_1;
FieldInfo t2879_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t2879_TI, offsetof(t2879, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t2879_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t2879_TI, offsetof(t2879, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t2879_FIs[] =
{
	&t2879_f0_FieldInfo,
	&t2879_f1_FieldInfo,
	NULL
};
extern MethodInfo m16352_MI;
static PropertyInfo t2879____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2879_TI, "System.Collections.IEnumerator.Current", &m16352_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16355_MI;
static PropertyInfo t2879____Current_PropertyInfo = 
{
	&t2879_TI, "Current", &m16355_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2879_PIs[] =
{
	&t2879____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2879____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t2879_m16351_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t2879_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m16351_MI = 
{
	".ctor", (methodPointerType)&m16351, &t2879_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t2879_m16351_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2879_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m16352_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16352, &t2879_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2879_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16353_MI = 
{
	"Dispose", (methodPointerType)&m16353, &t2879_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2879_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m16354_MI = 
{
	"MoveNext", (methodPointerType)&m16354, &t2879_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2879_TI;
extern Il2CppType t1308_0_0_0;
extern void* RuntimeInvoker_t1308 (MethodInfo* method, void* obj, void** args);
MethodInfo m16355_MI = 
{
	"get_Current", (methodPointerType)&m16355, &t2879_TI, &t1308_0_0_0, RuntimeInvoker_t1308, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2879_MIs[] =
{
	&m16351_MI,
	&m16352_MI,
	&m16353_MI,
	&m16354_MI,
	&m16355_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m16352_MI;
extern MethodInfo m16354_MI;
extern MethodInfo m16353_MI;
extern MethodInfo m16355_MI;
static MethodInfo* t2879_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m16352_MI,
	&m16354_MI,
	&m16353_MI,
	&m16355_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3747_TI;
static TypeInfo* t2879_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t3747_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3747_TI;
static Il2CppInterfaceOffsetPair t2879_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t3747_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2879_0_0_0;
extern Il2CppType t2879_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t2879_TI;
extern Il2CppGenericClass t2879_GC;
extern TypeInfo t24_TI;
TypeInfo t2879_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2879_MIs, t2879_PIs, t2879_FIs, NULL, &t122_TI, NULL, &t24_TI, &t2879_TI, t2879_ITIs, t2879_VT, &EmptyCustomAttributesCache, &t2879_TI, &t2879_0_0_0, &t2879_1_0_0, t2879_IOs, &t2879_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2879)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5130_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.UnitySerializationHolder/UnityType>
extern MethodInfo m29474_MI;
static PropertyInfo t5130____Count_PropertyInfo = 
{
	&t5130_TI, "Count", &m29474_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29475_MI;
static PropertyInfo t5130____IsReadOnly_PropertyInfo = 
{
	&t5130_TI, "IsReadOnly", &m29475_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5130_PIs[] =
{
	&t5130____Count_PropertyInfo,
	&t5130____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5130_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29474_MI = 
{
	"get_Count", NULL, &t5130_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5130_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m29475_MI = 
{
	"get_IsReadOnly", NULL, &t5130_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1308_0_0_0;
static ParameterInfo t5130_m29476_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1308_0_0_0},
};
extern TypeInfo t5130_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t348 (MethodInfo* method, void* obj, void** args);
MethodInfo m29476_MI = 
{
	"Add", NULL, &t5130_TI, &t25_0_0_0, RuntimeInvoker_t25_t348, t5130_m29476_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5130_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m29477_MI = 
{
	"Clear", NULL, &t5130_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1308_0_0_0;
static ParameterInfo t5130_m29478_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1308_0_0_0},
};
extern TypeInfo t5130_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t348 (MethodInfo* method, void* obj, void** args);
MethodInfo m29478_MI = 
{
	"Contains", NULL, &t5130_TI, &t26_0_0_0, RuntimeInvoker_t26_t348, t5130_m29478_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3084_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t5130_m29479_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3084_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t5130_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29479_MI = 
{
	"CopyTo", NULL, &t5130_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t5130_m29479_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1308_0_0_0;
static ParameterInfo t5130_m29480_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1308_0_0_0},
};
extern TypeInfo t5130_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t348 (MethodInfo* method, void* obj, void** args);
MethodInfo m29480_MI = 
{
	"Remove", NULL, &t5130_TI, &t26_0_0_0, RuntimeInvoker_t26_t348, t5130_m29480_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5130_MIs[] =
{
	&m29474_MI,
	&m29475_MI,
	&m29476_MI,
	&m29477_MI,
	&m29478_MI,
	&m29479_MI,
	&m29480_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t5132_TI;
static TypeInfo* t5130_ITIs[] = 
{
	&t600_TI,
	&t5132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5130_0_0_0;
extern Il2CppType t5130_1_0_0;
struct t5130;
extern TypeInfo t5130_TI;
extern Il2CppGenericClass t5130_GC;
TypeInfo t5130_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5130_MIs, t5130_PIs, NULL, NULL, NULL, NULL, NULL, &t5130_TI, t5130_ITIs, NULL, &EmptyCustomAttributesCache, &t5130_TI, &t5130_0_0_0, &t5130_1_0_0, NULL, &t5130_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5132_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.UnitySerializationHolder/UnityType>
extern TypeInfo t5132_TI;
extern Il2CppType t3747_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m29481_MI = 
{
	"GetEnumerator", NULL, &t5132_TI, &t3747_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5132_MIs[] =
{
	&m29481_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t5132_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5132_0_0_0;
extern Il2CppType t5132_1_0_0;
struct t5132;
extern TypeInfo t5132_TI;
extern Il2CppGenericClass t5132_GC;
TypeInfo t5132_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5132_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5132_TI, t5132_ITIs, NULL, &EmptyCustomAttributesCache, &t5132_TI, &t5132_0_0_0, &t5132_1_0_0, NULL, &t5132_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5131_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.UnitySerializationHolder/UnityType>
extern MethodInfo m29482_MI;
extern MethodInfo m29483_MI;
static PropertyInfo t5131____Item_PropertyInfo = 
{
	&t5131_TI, "Item", &m29482_MI, &m29483_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5131_PIs[] =
{
	&t5131____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1308_0_0_0;
static ParameterInfo t5131_m29484_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1308_0_0_0},
};
extern TypeInfo t5131_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t348 (MethodInfo* method, void* obj, void** args);
MethodInfo m29484_MI = 
{
	"IndexOf", NULL, &t5131_TI, &t35_0_0_0, RuntimeInvoker_t35_t348, t5131_m29484_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1308_0_0_0;
static ParameterInfo t5131_m29485_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1308_0_0_0},
};
extern TypeInfo t5131_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t348 (MethodInfo* method, void* obj, void** args);
MethodInfo m29485_MI = 
{
	"Insert", NULL, &t5131_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t348, t5131_m29485_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t5131_m29486_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t5131_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29486_MI = 
{
	"RemoveAt", NULL, &t5131_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t5131_m29486_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t5131_m29482_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t5131_TI;
extern Il2CppType t1308_0_0_0;
extern void* RuntimeInvoker_t1308_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m29482_MI = 
{
	"get_Item", NULL, &t5131_TI, &t1308_0_0_0, RuntimeInvoker_t1308_t35, t5131_m29482_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1308_0_0_0;
static ParameterInfo t5131_m29483_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1308_0_0_0},
};
extern TypeInfo t5131_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t348 (MethodInfo* method, void* obj, void** args);
MethodInfo m29483_MI = 
{
	"set_Item", NULL, &t5131_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t348, t5131_m29483_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5131_MIs[] =
{
	&m29484_MI,
	&m29485_MI,
	&m29486_MI,
	&m29482_MI,
	&m29483_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t5130_TI;
extern TypeInfo t5132_TI;
static TypeInfo* t5131_ITIs[] = 
{
	&t600_TI,
	&t5130_TI,
	&t5132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5131_0_0_0;
extern Il2CppType t5131_1_0_0;
struct t5131;
extern TypeInfo t5131_TI;
extern Il2CppGenericClass t5131_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t5131_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5131_MIs, t5131_PIs, NULL, NULL, NULL, NULL, NULL, &t5131_TI, t5131_ITIs, NULL, &t1409__CustomAttributeCache, &t5131_TI, &t5131_0_0_0, &t5131_1_0_0, NULL, &t5131_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1588_TI;

#include "t957.h"


// Metadata Definition System.IComparable`1<System.Version>
extern Il2CppType t957_0_0_0;
static ParameterInfo t1588_m29487_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t957_0_0_0},
};
extern TypeInfo t1588_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m29487_MI = 
{
	"CompareTo", NULL, &t1588_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t1588_m29487_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1588_MIs[] =
{
	&m29487_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1588_0_0_0;
extern Il2CppType t1588_1_0_0;
struct t1588;
extern TypeInfo t1588_TI;
extern Il2CppGenericClass t1588_GC;
TypeInfo t1588_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t1588_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1588_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1588_TI, &t1588_0_0_0, &t1588_1_0_0, NULL, &t1588_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1589_TI;



// Metadata Definition System.IEquatable`1<System.Version>
extern Il2CppType t957_0_0_0;
static ParameterInfo t1589_m29488_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t957_0_0_0},
};
extern TypeInfo t1589_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m29488_MI = 
{
	"Equals", NULL, &t1589_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1589_m29488_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1589_MIs[] =
{
	&m29488_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1589_0_0_0;
extern Il2CppType t1589_1_0_0;
struct t1589;
extern TypeInfo t1589_TI;
extern Il2CppGenericClass t1589_GC;
TypeInfo t1589_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t1589_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1589_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1589_TI, &t1589_0_0_0, &t1589_1_0_0, NULL, &t1589_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
