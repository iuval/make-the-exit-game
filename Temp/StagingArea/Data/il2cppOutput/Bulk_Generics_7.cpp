#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t1888.h"
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
extern TypeInfo t1888_TI;
#include "t1888MD.h"

#include "t35.h"
#include "t308.h"
#include "t26.h"
#include "t14.h"
#include "t25.h"
#include "t1889.h"
#include "t1292.h"
#include "mscorlib_ArrayTypes.h"
#include "t33.h"
#include "t345.h"
#include "t1653.h"
#include "t1654.h"
extern TypeInfo t1888_TI;
extern TypeInfo t308_TI;
extern TypeInfo t35_TI;
extern TypeInfo t14_TI;
extern TypeInfo t1889_TI;
extern TypeInfo t26_TI;
extern TypeInfo t25_TI;
extern TypeInfo t346_TI;
extern TypeInfo t1292_TI;
extern TypeInfo t40_TI;
extern TypeInfo t345_TI;
extern TypeInfo t1653_TI;
#include "t308MD.h"
#include "t1889MD.h"
#include "t14MD.h"
#include "t1292MD.h"
#include "t345MD.h"
#include "t1653MD.h"
extern MethodInfo m8175_MI;
extern MethodInfo m8176_MI;
extern MethodInfo m10056_MI;
extern MethodInfo m8178_MI;
extern MethodInfo m10050_MI;
extern MethodInfo m8086_MI;
extern MethodInfo m10025_MI;
extern MethodInfo m73_MI;
extern MethodInfo m10005_MI;
extern MethodInfo m10052_MI;
extern MethodInfo m8122_MI;
extern MethodInfo m10057_MI;
extern MethodInfo m10019_MI;
extern MethodInfo m7024_MI;
extern MethodInfo m8134_MI;
extern MethodInfo m10051_MI;
extern MethodInfo m8138_MI;
extern MethodInfo m7027_MI;
extern MethodInfo m8160_MI;
extern MethodInfo m10042_MI;
extern MethodInfo m8291_MI;
extern MethodInfo m10003_MI;
extern MethodInfo m8166_MI;

#include "t24.h"

extern MethodInfo m9999_MI;
 void m9999_gshared (t1888 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t308_TI));
		t308 * L_0 = (t308 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 0));
		(( void (*) (t308 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1));
		__this->f0 = L_0;
		t1889 * L_1 = (t1889 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 2));
		(( void (*) (t1889 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 3)->method)(L_1, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 3));
		__this->f1 = L_1;
		m73(__this, &m73_MI);
		return;
	}
}
extern MethodInfo m10001_MI;
 t14 * m10001_gshared (t1888 * __this, MethodInfo* method)
{
	{
		t14* L_0 = (t14*)VirtFuncInvoker0< t14* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4), __this);
		return L_0;
	}
}
extern MethodInfo m10002_MI;
 void m10002_gshared (t1888 * __this, t14 * p0, MethodInfo* method)
{
	{
		t1889 * L_0 = (__this->f1);
		bool L_1 = (bool)VirtFuncInvoker1< bool, t14 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 5), L_0, p0);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		t308 * L_2 = (__this->f0);
		VirtActionInvoker1< t14 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6), L_2, p0);
		t1889 * L_3 = (__this->f1);
		t308 * L_4 = (__this->f0);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 7), L_4);
		VirtActionInvoker2< t14 *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8), L_3, p0, ((int32_t)(L_5-1)));
		return;
	}
}
extern MethodInfo m10003_MI;
 bool m10003_gshared (t1888 * __this, t14 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (-1);
		t1889 * L_0 = (__this->f1);
		bool L_1 = (bool)VirtFuncInvoker2< bool, t14 *, int32_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 9), L_0, p0, (&V_0));
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		return 0;
	}

IL_0017:
	{
		VirtActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 10), __this, V_0);
		return 1;
	}
}
extern MethodInfo m10005_MI;
 t14* m10005_gshared (t1888 * __this, MethodInfo* method)
{
	{
		t1292 * L_0 = (t1292 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1292_TI));
		m7024(L_0, &m7024_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m10006_MI;
 void m10006_gshared (t1888 * __this, MethodInfo* method)
{
	{
		t308 * L_0 = (__this->f0);
		VirtActionInvoker0::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 11), L_0);
		t1889 * L_1 = (__this->f1);
		VirtActionInvoker0::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 12), L_1);
		return;
	}
}
extern MethodInfo m10008_MI;
 bool m10008_gshared (t1888 * __this, t14 * p0, MethodInfo* method)
{
	{
		t1889 * L_0 = (__this->f1);
		bool L_1 = (bool)VirtFuncInvoker1< bool, t14 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 5), L_0, p0);
		return L_1;
	}
}
extern MethodInfo m10010_MI;
 void m10010_gshared (t1888 * __this, t40* p0, int32_t p1, MethodInfo* method)
{
	{
		t308 * L_0 = (__this->f0);
		VirtActionInvoker2< t40*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 13), L_0, p0, p1);
		return;
	}
}
extern MethodInfo m10011_MI;
 int32_t m10011_gshared (t1888 * __this, MethodInfo* method)
{
	{
		t308 * L_0 = (__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 7), L_0);
		return L_1;
	}
}
extern MethodInfo m10013_MI;
 bool m10013_gshared (t1888 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m10015_MI;
 int32_t m10015_gshared (t1888 * __this, t14 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (-1);
		t1889 * L_0 = (__this->f1);
		VirtFuncInvoker2< bool, t14 *, int32_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 9), L_0, p0, (&V_0));
		return V_0;
	}
}
extern MethodInfo m10017_MI;
 void m10017_gshared (t1888 * __this, int32_t p0, t14 * p1, MethodInfo* method)
{
	{
		t345 * L_0 = (t345 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t345_TI));
		m7027(L_0, (t33*) &_stringLiteral65, &m7027_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m10019_MI;
 void m10019_gshared (t1888 * __this, int32_t p0, MethodInfo* method)
{
	t14 * V_0 = {0};
	int32_t V_1 = 0;
	t14 * V_2 = {0};
	{
		t308 * L_0 = (__this->f0);
		t14 * L_1 = (t14 *)VirtFuncInvoker1< t14 *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 14), L_0, p0);
		V_0 = L_1;
		t1889 * L_2 = (__this->f1);
		VirtFuncInvoker1< bool, t14 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 15), L_2, V_0);
		t308 * L_3 = (__this->f0);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 7), L_3);
		if ((((uint32_t)p0) != ((uint32_t)((int32_t)(L_4-1)))))
		{
			goto IL_003e;
		}
	}
	{
		t308 * L_5 = (__this->f0);
		VirtActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 16), L_5, p0);
		goto IL_007f;
	}

IL_003e:
	{
		t308 * L_6 = (__this->f0);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 7), L_6);
		V_1 = ((int32_t)(L_7-1));
		t308 * L_8 = (__this->f0);
		t14 * L_9 = (t14 *)VirtFuncInvoker1< t14 *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 14), L_8, V_1);
		V_2 = L_9;
		t308 * L_10 = (__this->f0);
		VirtActionInvoker2< int32_t, t14 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 17), L_10, p0, V_2);
		t1889 * L_11 = (__this->f1);
		VirtActionInvoker2< t14 *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 18), L_11, V_2, p0);
		t308 * L_12 = (__this->f0);
		VirtActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 16), L_12, V_1);
	}

IL_007f:
	{
		return;
	}
}
extern MethodInfo m10020_MI;
 t14 * m10020_gshared (t1888 * __this, int32_t p0, MethodInfo* method)
{
	{
		t308 * L_0 = (__this->f0);
		t14 * L_1 = (t14 *)VirtFuncInvoker1< t14 *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 14), L_0, p0);
		return L_1;
	}
}
extern MethodInfo m10022_MI;
 void m10022_gshared (t1888 * __this, int32_t p0, t14 * p1, MethodInfo* method)
{
	t14 * V_0 = {0};
	{
		t308 * L_0 = (__this->f0);
		t14 * L_1 = (t14 *)VirtFuncInvoker1< t14 *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 14), L_0, p0);
		V_0 = L_1;
		t1889 * L_2 = (__this->f1);
		VirtFuncInvoker1< bool, t14 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 15), L_2, V_0);
		t308 * L_3 = (__this->f0);
		VirtActionInvoker2< int32_t, t14 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 17), L_3, p0, p1);
		t1889 * L_4 = (__this->f1);
		VirtActionInvoker2< t14 *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8), L_4, V_0, p0);
		return;
	}
}
extern MethodInfo m10023_MI;
 void m10023_gshared (t1888 * __this, t1653 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	t14 * V_1 = {0};
	{
		V_0 = 0;
		goto IL_0031;
	}

IL_0007:
	{
		t308 * L_0 = (__this->f0);
		t14 * L_1 = (t14 *)VirtFuncInvoker1< t14 *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 14), L_0, V_0);
		V_1 = L_1;
		bool L_2 = (bool)VirtFuncInvoker1< bool, t14 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 19), p0, V_1);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		VirtFuncInvoker1< bool, t14 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 20), __this, V_1);
		goto IL_0031;
	}

IL_002d:
	{
		V_0 = ((int32_t)(V_0+1));
	}

IL_0031:
	{
		t308 * L_3 = (__this->f0);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 7), L_3);
		if ((((int32_t)V_0) < ((int32_t)L_4)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
extern MethodInfo m10024_MI;
 void m10024_gshared (t1888 * __this, t1654 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	t14 * V_1 = {0};
	{
		t308 * L_0 = (__this->f0);
		(( void (*) (t308 * __this, t1654 * p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 21)->method)(L_0, p0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 21));
		V_0 = 0;
		goto IL_0031;
	}

IL_0013:
	{
		t308 * L_1 = (__this->f0);
		t14 * L_2 = (t14 *)VirtFuncInvoker1< t14 *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 14), L_1, V_0);
		V_1 = L_2;
		t1889 * L_3 = (__this->f1);
		VirtActionInvoker2< t14 *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 18), L_3, V_1, V_0);
		V_0 = ((int32_t)(V_0+1));
	}

IL_0031:
	{
		t308 * L_4 = (__this->f0);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 7), L_4);
		if ((((int32_t)V_0) < ((int32_t)L_5)))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}
}
// Metadata Definition UnityEngine.UI.Collections.IndexedSet`1<System.Object>
extern Il2CppType t308_0_0_33;
FieldInfo t1888_f0_FieldInfo = 
{
	"m_List", &t308_0_0_33, &t1888_TI, offsetof(t1888, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1889_0_0_1;
FieldInfo t1888_f1_FieldInfo = 
{
	"m_Dictionary", &t1889_0_0_1, &t1888_TI, offsetof(t1888, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1888_FIs[] =
{
	&t1888_f0_FieldInfo,
	&t1888_f1_FieldInfo,
	NULL
};
extern MethodInfo m10011_MI;
static PropertyInfo t1888____Count_PropertyInfo = 
{
	&t1888_TI, "Count", &m10011_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10013_MI;
static PropertyInfo t1888____IsReadOnly_PropertyInfo = 
{
	&t1888_TI, "IsReadOnly", &m10013_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10020_MI;
extern MethodInfo m10022_MI;
static PropertyInfo t1888____Item_PropertyInfo = 
{
	&t1888_TI, "Item", &m10020_MI, &m10022_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1888_PIs[] =
{
	&t1888____Count_PropertyInfo,
	&t1888____IsReadOnly_PropertyInfo,
	&t1888____Item_PropertyInfo,
	NULL
};
extern TypeInfo t1888_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m9999_MI = 
{
	".ctor", (methodPointerType)&m9999_gshared, &t1888_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1888_TI;
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10001_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m10001_gshared, &t1888_TI, &t36_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 481, 0, 17, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1888_m10002_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1888_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10002_MI = 
{
	"Add", (methodPointerType)&m10002_gshared, &t1888_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1888_m10002_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1888_m10003_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1888_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10003_MI = 
{
	"Remove", (methodPointerType)&m10003_gshared, &t1888_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1888_m10003_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1888_TI;
extern Il2CppType t346_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10005_MI = 
{
	"GetEnumerator", (methodPointerType)&m10005_gshared, &t1888_TI, &t346_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 486, 0, 16, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1888_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10006_MI = 
{
	"Clear", (methodPointerType)&m10006_gshared, &t1888_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 12, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1888_m10008_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1888_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10008_MI = 
{
	"Contains", (methodPointerType)&m10008_gshared, &t1888_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1888_m10008_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t40_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t1888_m10010_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t40_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1888_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10010_MI = 
{
	"CopyTo", (methodPointerType)&m10010_gshared, &t1888_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t1888_m10010_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 14, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1888_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10011_MI = 
{
	"get_Count", (methodPointerType)&m10011_gshared, &t1888_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 2534, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1888_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10013_MI = 
{
	"get_IsReadOnly", (methodPointerType)&m10013_gshared, &t1888_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2534, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1888_m10015_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1888_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10015_MI = 
{
	"IndexOf", (methodPointerType)&m10015_gshared, &t1888_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t1888_m10015_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t1888_m10017_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1888_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10017_MI = 
{
	"Insert", (methodPointerType)&m10017_gshared, &t1888_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t1888_m10017_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1888_m10019_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1888_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10019_MI = 
{
	"RemoveAt", (methodPointerType)&m10019_gshared, &t1888_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t1888_m10019_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1888_m10020_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1888_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10020_MI = 
{
	"get_Item", (methodPointerType)&m10020_gshared, &t1888_TI, &t14_0_0_0, RuntimeInvoker_t14_t35, t1888_m10020_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t1888_m10022_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1888_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10022_MI = 
{
	"set_Item", (methodPointerType)&m10022_gshared, &t1888_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t1888_m10022_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1653_0_0_0;
static ParameterInfo t1888_m10023_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t1653_0_0_0},
};
extern TypeInfo t1888_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10023_MI = 
{
	"RemoveAll", (methodPointerType)&m10023_gshared, &t1888_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1888_m10023_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1654_0_0_0;
static ParameterInfo t1888_m10024_ParameterInfos[] = 
{
	{"sortLayoutFunction", 0, 134217728, &EmptyCustomAttributesCache, &t1654_0_0_0},
};
extern TypeInfo t1888_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10024_MI = 
{
	"Sort", (methodPointerType)&m10024_gshared, &t1888_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1888_m10024_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1888_MIs[] =
{
	&m9999_MI,
	&m10001_MI,
	&m10002_MI,
	&m10003_MI,
	&m10005_MI,
	&m10006_MI,
	&m10008_MI,
	&m10010_MI,
	&m10011_MI,
	&m10013_MI,
	&m10015_MI,
	&m10017_MI,
	&m10019_MI,
	&m10020_MI,
	&m10022_MI,
	&m10023_MI,
	&m10024_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m10015_MI;
extern MethodInfo m10017_MI;
extern MethodInfo m10019_MI;
extern MethodInfo m10020_MI;
extern MethodInfo m10022_MI;
extern MethodInfo m10011_MI;
extern MethodInfo m10013_MI;
extern MethodInfo m10002_MI;
extern MethodInfo m10006_MI;
extern MethodInfo m10008_MI;
extern MethodInfo m10010_MI;
extern MethodInfo m10003_MI;
extern MethodInfo m10005_MI;
extern MethodInfo m10001_MI;
static MethodInfo* t1888_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m10015_MI,
	&m10017_MI,
	&m10019_MI,
	&m10020_MI,
	&m10022_MI,
	&m10011_MI,
	&m10013_MI,
	&m10002_MI,
	&m10006_MI,
	&m10008_MI,
	&m10010_MI,
	&m10003_MI,
	&m10005_MI,
	&m10001_MI,
};
extern TypeInfo t1659_TI;
extern TypeInfo t1655_TI;
extern TypeInfo t1656_TI;
extern TypeInfo t600_TI;
static TypeInfo* t1888_ITIs[] = 
{
	&t1659_TI,
	&t1655_TI,
	&t1656_TI,
	&t600_TI,
};
extern TypeInfo t1659_TI;
extern TypeInfo t1655_TI;
extern TypeInfo t1656_TI;
extern TypeInfo t600_TI;
static Il2CppInterfaceOffsetPair t1888_IOs[] = 
{
	{ &t1659_TI, 4},
	{ &t1655_TI, 9},
	{ &t1656_TI, 16},
	{ &t600_TI, 17},
};
extern TypeInfo t308_TI;
extern MethodInfo m8086_MI;
extern TypeInfo t1889_TI;
extern MethodInfo m10025_MI;
extern MethodInfo m10005_MI;
extern MethodInfo m10052_MI;
extern MethodInfo m8122_MI;
extern MethodInfo m8175_MI;
extern MethodInfo m10050_MI;
extern MethodInfo m10057_MI;
extern MethodInfo m10019_MI;
extern MethodInfo m8134_MI;
extern MethodInfo m10051_MI;
extern MethodInfo m8138_MI;
extern MethodInfo m8176_MI;
extern MethodInfo m10056_MI;
extern MethodInfo m8160_MI;
extern MethodInfo m8178_MI;
extern MethodInfo m10042_MI;
extern MethodInfo m8291_MI;
extern MethodInfo m10003_MI;
extern MethodInfo m8166_MI;
static void* t1888_RGCTXData[22] = 
{
	&t308_TI,
	&m8086_MI,
	&t1889_TI,
	&m10025_MI,
	&m10005_MI,
	&m10052_MI,
	&m8122_MI,
	&m8175_MI,
	&m10050_MI,
	&m10057_MI,
	&m10019_MI,
	&m8134_MI,
	&m10051_MI,
	&m8138_MI,
	&m8176_MI,
	&m10056_MI,
	&m8160_MI,
	&m8178_MI,
	&m10042_MI,
	&m8291_MI,
	&m10003_MI,
	&m8166_MI,
};
extern Il2CppImage g_UnityEngine_UI_dll_Image;
extern Il2CppType t1888_0_0_0;
extern Il2CppType t1888_1_0_0;
extern TypeInfo t14_TI;
struct t1888;
extern TypeInfo t1888_TI;
extern Il2CppGenericClass t1888_GC;
extern CustomAttributesCache t291__CustomAttributeCache;
TypeInfo t1888_TI = 
{
	&g_UnityEngine_UI_dll_Image, NULL, "IndexedSet`1", "UnityEngine.UI.Collections", t1888_MIs, t1888_PIs, t1888_FIs, NULL, &t14_TI, NULL, NULL, &t1888_TI, t1888_ITIs, t1888_VT, &t291__CustomAttributeCache, &t1888_TI, &t1888_0_0_0, &t1888_1_0_0, t1888_IOs, &t1888_GC, NULL, NULL, NULL, t1888_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1888), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 17, 3, 2, 0, 0, 18, 4, 4};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1889_TI;

#include "t338.h"
#include "t834.h"
#include "t1892.h"
#include "t715.h"
#include "t716.h"
#include "t1894.h"
#include "t836.h"
#include "t1891.h"
#include "t77.h"
#include "t1901.h"
#include "t1896.h"
#include "t1902.h"
#include "t1242.h"
#include "t1494.h"
#include "t319.h"
#include "t1835.h"
#include "t31.h"
#include "t32.h"
extern TypeInfo t1889_TI;
extern TypeInfo t25_TI;
extern TypeInfo t14_TI;
extern TypeInfo t35_TI;
extern TypeInfo t338_TI;
extern TypeInfo t1890_TI;
extern TypeInfo t834_TI;
extern TypeInfo t26_TI;
extern TypeInfo t1892_TI;
extern TypeInfo t1893_TI;
extern TypeInfo t1894_TI;
extern TypeInfo t2907_TI;
extern TypeInfo t836_TI;
extern TypeInfo t1891_TI;
extern TypeInfo t1901_TI;
extern TypeInfo t1896_TI;
extern TypeInfo t1902_TI;
extern TypeInfo t1242_TI;
extern TypeInfo t1494_TI;
extern TypeInfo t51_TI;
extern TypeInfo t1459_TI;
extern TypeInfo t40_TI;
extern TypeInfo t319_TI;
extern TypeInfo t863_TI;
extern TypeInfo t1835_TI;
extern TypeInfo t1818_TI;
extern TypeInfo t31_TI;
extern TypeInfo t33_TI;
#include "t338MD.h"
#include "t1892MD.h"
#include "t1894MD.h"
#include "t1891MD.h"
#include "t1901MD.h"
#include "t1896MD.h"
#include "t1902MD.h"
#include "t1242MD.h"
#include "t1494MD.h"
#include "t24MD.h"
#include "t319MD.h"
#include "t863MD.h"
#include "t1835MD.h"
#include "t715MD.h"
#include "t31MD.h"
#include "t33MD.h"
#include "t836MD.h"
extern Il2CppType t1890_0_0_0;
extern Il2CppType t1893_0_0_0;
extern Il2CppType t14_0_0_0;
extern Il2CppType t35_0_0_0;
extern MethodInfo m10059_MI;
extern MethodInfo m10060_MI;
extern MethodInfo m10042_MI;
extern MethodInfo m2974_MI;
extern MethodInfo m22741_MI;
extern MethodInfo m22740_MI;
extern MethodInfo m10049_MI;
extern MethodInfo m10075_MI;
extern MethodInfo m73_MI;
extern MethodInfo m10043_MI;
extern MethodInfo m10065_MI;
extern MethodInfo m10067_MI;
extern MethodInfo m10050_MI;
extern MethodInfo m10061_MI;
extern MethodInfo m10048_MI;
extern MethodInfo m10056_MI;
extern MethodInfo m10045_MI;
extern MethodInfo m10063_MI;
extern MethodInfo m10109_MI;
extern MethodInfo m17594_MI;
extern MethodInfo m10046_MI;
extern MethodInfo m10113_MI;
extern MethodInfo m17596_MI;
extern MethodInfo m10094_MI;
extern MethodInfo m10117_MI;
extern MethodInfo m6493_MI;
extern MethodInfo m8256_MI;
extern MethodInfo m10044_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m1959_MI;
extern MethodInfo m10041_MI;
extern MethodInfo m10064_MI;
extern MethodInfo m17597_MI;
extern MethodInfo m4429_MI;
extern MethodInfo m3786_MI;
extern MethodInfo m3782_MI;
extern MethodInfo m9713_MI;
extern MethodInfo m23407_MI;
extern MethodInfo m5759_MI;
extern MethodInfo m5765_MI;
extern MethodInfo m5768_MI;
extern MethodInfo m1571_MI;
extern MethodInfo m5755_MI;
extern MethodInfo m3872_MI;
extern MethodInfo m1786_MI;
extern MethodInfo m6483_MI;
extern MethodInfo m3841_MI;
extern MethodInfo m10057_MI;
extern MethodInfo m23542_MI;
extern MethodInfo m4371_MI;
struct t1889;
 void m17594 (t1889 * __this, t2907* p0, int32_t p1, t1891 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17594_MI;
struct t1889;
#include "t39.h"
 void m17596 (t1889 * __this, t24 * p0, int32_t p1, t1901 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17596_MI;
struct t1889;
 void m17597 (t1889 * __this, t1893* p0, int32_t p1, t1901 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17597_MI;


extern MethodInfo m10025_MI;
 void m10025 (t1889 * __this, MethodInfo* method){
	{
		m73(__this, &m73_MI);
		m10043(__this, ((int32_t)10), (t14*)NULL, &m10043_MI);
		return;
	}
}
extern MethodInfo m10026_MI;
 void m10026 (t1889 * __this, t14* p0, MethodInfo* method){
	{
		m73(__this, &m73_MI);
		m10043(__this, ((int32_t)10), p0, &m10043_MI);
		return;
	}
}
extern MethodInfo m10027_MI;
 void m10027 (t1889 * __this, int32_t p0, MethodInfo* method){
	{
		m73(__this, &m73_MI);
		m10043(__this, p0, (t14*)NULL, &m10043_MI);
		return;
	}
}
extern MethodInfo m10028_MI;
 void m10028 (t1889 * __this, t715 * p0, t716  p1, MethodInfo* method){
	{
		m73(__this, &m73_MI);
		__this->f13 = p0;
		return;
	}
}
extern MethodInfo m10029_MI;
 void m10029 (t1889 * __this, t14 * p0, t14 * p1, MethodInfo* method){
	{
		t14 * L_0 = m10059(__this, p0, &m10059_MI);
		int32_t L_1 = m10060(__this, p1, &m10060_MI);
		VirtActionInvoker2< t14 *, int32_t >::Invoke(&m10042_MI, __this, L_0, L_1);
		return;
	}
}
extern MethodInfo m10030_MI;
 bool m10030 (t1889 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m10031_MI;
 t14 * m10031 (t1889 * __this, MethodInfo* method){
	{
		return __this;
	}
}
extern MethodInfo m10032_MI;
 bool m10032 (t1889 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m10033_MI;
 void m10033 (t1889 * __this, t1894  p0, MethodInfo* method){
	{
		t14 * L_0 = m10065((&p0), &m10065_MI);
		int32_t L_1 = m10067((&p0), &m10067_MI);
		VirtActionInvoker2< t14 *, int32_t >::Invoke(&m10050_MI, __this, L_0, L_1);
		return;
	}
}
extern MethodInfo m10034_MI;
 bool m10034 (t1889 * __this, t1894  p0, MethodInfo* method){
	{
		bool L_0 = m10061(__this, p0, &m10061_MI);
		return L_0;
	}
}
extern MethodInfo m10035_MI;
 void m10035 (t1889 * __this, t1893* p0, int32_t p1, MethodInfo* method){
	{
		m10048(__this, p0, p1, &m10048_MI);
		return;
	}
}
extern MethodInfo m10036_MI;
 bool m10036 (t1889 * __this, t1894  p0, MethodInfo* method){
	{
		bool L_0 = m10061(__this, p0, &m10061_MI);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return 0;
	}

IL_000b:
	{
		t14 * L_1 = m10065((&p0), &m10065_MI);
		bool L_2 = (bool)VirtFuncInvoker1< bool, t14 * >::Invoke(&m10056_MI, __this, L_1);
		return L_2;
	}
}
extern MethodInfo m10037_MI;
 void m10037 (t1889 * __this, t24 * p0, int32_t p1, MethodInfo* method){
	t1893* V_0 = {0};
	t2907* V_1 = {0};
	int32_t G_B5_0 = 0;
	t2907* G_B5_1 = {0};
	t1889 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	t2907* G_B4_1 = {0};
	t1889 * G_B4_2 = {0};
	{
		V_0 = ((t1893*)IsInst(p0, InitializedTypeInfo(&t1893_TI)));
		if (!V_0)
		{
			goto IL_0013;
		}
	}
	{
		m10048(__this, V_0, p1, &m10048_MI);
		return;
	}

IL_0013:
	{
		m10045(__this, p0, p1, &m10045_MI);
		V_1 = ((t2907*)IsInst(p0, InitializedTypeInfo(&t2907_TI)));
		if (!V_1)
		{
			goto IL_004b;
		}
	}
	{
		G_B4_0 = p1;
		G_B4_1 = V_1;
		G_B4_2 = ((t1889 *)(__this));
		if ((((t1889_SFs*)InitializedTypeInfo(&t1889_TI)->static_fields)->f15))
		{
			G_B5_0 = p1;
			G_B5_1 = V_1;
			G_B5_2 = ((t1889 *)(__this));
			goto IL_0040;
		}
	}
	{
		t77 L_0 = { &m10063_MI };
		t1891 * L_1 = (t1891 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1891_TI));
		m10109(L_1, NULL, L_0, &m10109_MI);
		((t1889_SFs*)InitializedTypeInfo(&t1889_TI)->static_fields)->f15 = L_1;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((t1889 *)(G_B4_2));
	}

IL_0040:
	{
		m17594(G_B5_2, G_B5_1, G_B5_0, (((t1889_SFs*)InitializedTypeInfo(&t1889_TI)->static_fields)->f15), &m17594_MI);
		return;
	}

IL_004b:
	{
		t77 L_2 = { &m10046_MI };
		t1901 * L_3 = (t1901 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1901_TI));
		m10113(L_3, NULL, L_2, &m10113_MI);
		m17596(__this, p0, p1, L_3, &m17596_MI);
		return;
	}
}
extern MethodInfo m10038_MI;
 t14 * m10038 (t1889 * __this, MethodInfo* method){
	{
		t1896  L_0 = {0};
		m10094(&L_0, __this, &m10094_MI);
		t1896  L_1 = L_0;
		t14 * L_2 = Box(InitializedTypeInfo(&t1896_TI), &L_1);
		return (t14 *)L_2;
	}
}
extern MethodInfo m10039_MI;
 t14* m10039 (t1889 * __this, MethodInfo* method){
	{
		t1896  L_0 = {0};
		m10094(&L_0, __this, &m10094_MI);
		t1896  L_1 = L_0;
		t14 * L_2 = Box(InitializedTypeInfo(&t1896_TI), &L_1);
		return (t14*)L_2;
	}
}
extern MethodInfo m10040_MI;
 t14 * m10040 (t1889 * __this, MethodInfo* method){
	{
		t1902 * L_0 = (t1902 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1902_TI));
		m10117(L_0, __this, &m10117_MI);
		return L_0;
	}
}
extern MethodInfo m10041_MI;
 int32_t m10041 (t1889 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f10);
		return L_0;
	}
}
extern MethodInfo m10042_MI;
 void m10042 (t1889 * __this, t14 * p0, int32_t p1, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		t14 * L_0 = p0;
		if (((t14 *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t338 * L_1 = (t338 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t338_TI));
		m2974(L_1, (t33*) &_stringLiteral536, &m2974_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		t14* L_2 = (__this->f12);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t14 * >::Invoke(&m22741_MI, L_2, p0);
		V_0 = ((int32_t)(L_3|((int32_t)-2147483648)));
		t51* L_4 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t24 *)L_4)->max_length)))));
		t51* L_5 = (__this->f4);
		V_2 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_5, V_1))-1));
		V_3 = (-1);
		if ((((int32_t)V_2) == ((int32_t)(-1))))
		{
			goto IL_0090;
		}
	}

IL_0048:
	{
		t1459* L_6 = (__this->f5);
		int32_t L_7 = (((t834 *)(t834 *)SZArrayLdElema(L_6, V_2))->f0);
		if ((((uint32_t)L_7) != ((uint32_t)V_0)))
		{
			goto IL_0078;
		}
	}
	{
		t14* L_8 = (__this->f12);
		t40* L_9 = (__this->f6);
		bool L_10 = (bool)InterfaceFuncInvoker2< bool, t14 *, t14 * >::Invoke(&m22740_MI, L_8, (*(t14 **)(t14 **)SZArrayLdElema(L_9, V_2)), p0);
		if (!L_10)
		{
			goto IL_0078;
		}
	}
	{
		goto IL_0090;
	}

IL_0078:
	{
		V_3 = V_2;
		t1459* L_11 = (__this->f5);
		int32_t L_12 = (((t834 *)(t834 *)SZArrayLdElema(L_11, V_2))->f1);
		V_2 = L_12;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0048;
		}
	}

IL_0090:
	{
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_13 = (__this->f10);
		int32_t L_14 = ((int32_t)(L_13+1));
		V_4 = L_14;
		__this->f10 = L_14;
		int32_t L_15 = (__this->f11);
		if ((((int32_t)V_4) <= ((int32_t)L_15)))
		{
			goto IL_00c9;
		}
	}
	{
		m10049(__this, &m10049_MI);
		t51* L_16 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t24 *)L_16)->max_length)))));
	}

IL_00c9:
	{
		int32_t L_17 = (__this->f9);
		V_2 = L_17;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_18 = (__this->f8);
		int32_t L_19 = L_18;
		V_4 = L_19;
		__this->f8 = ((int32_t)(L_19+1));
		V_2 = V_4;
		goto IL_0101;
	}

IL_00ea:
	{
		t1459* L_20 = (__this->f5);
		int32_t L_21 = (((t834 *)(t834 *)SZArrayLdElema(L_20, V_2))->f1);
		__this->f9 = L_21;
	}

IL_0101:
	{
		t1459* L_22 = (__this->f5);
		t51* L_23 = (__this->f4);
		((t834 *)(t834 *)SZArrayLdElema(L_22, V_2))->f1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_23, V_1))-1));
		t51* L_24 = (__this->f4);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_24, V_1)) = (int32_t)((int32_t)(V_2+1));
		t1459* L_25 = (__this->f5);
		((t834 *)(t834 *)SZArrayLdElema(L_25, V_2))->f0 = V_0;
		t40* L_26 = (__this->f6);
		*((t14 **)(t14 **)SZArrayLdElema(L_26, V_2)) = (t14 *)p0;
		goto IL_0194;
	}

IL_0148:
	{
		if ((((int32_t)V_3) == ((int32_t)(-1))))
		{
			goto IL_0194;
		}
	}
	{
		t1459* L_27 = (__this->f5);
		t1459* L_28 = (__this->f5);
		int32_t L_29 = (((t834 *)(t834 *)SZArrayLdElema(L_28, V_2))->f1);
		((t834 *)(t834 *)SZArrayLdElema(L_27, V_3))->f1 = L_29;
		t1459* L_30 = (__this->f5);
		t51* L_31 = (__this->f4);
		((t834 *)(t834 *)SZArrayLdElema(L_30, V_2))->f1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_31, V_1))-1));
		t51* L_32 = (__this->f4);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_32, V_1)) = (int32_t)((int32_t)(V_2+1));
	}

IL_0194:
	{
		t51* L_33 = (__this->f7);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_33, V_2)) = (int32_t)p1;
		int32_t L_34 = (__this->f14);
		__this->f14 = ((int32_t)(L_34+1));
		return;
	}
}
extern MethodInfo m10043_MI;
 void m10043 (t1889 * __this, int32_t p0, t14* p1, MethodInfo* method){
	t14* V_0 = {0};
	t1889 * G_B4_0 = {0};
	t1889 * G_B3_0 = {0};
	t14* G_B5_0 = {0};
	t1889 * G_B5_1 = {0};
	{
		if ((((int32_t)p0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		t1242 * L_0 = (t1242 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1242_TI));
		m6493(L_0, (t33*) &_stringLiteral537, &m6493_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000f:
	{
		G_B3_0 = ((t1889 *)(__this));
		if (!p1)
		{
			G_B4_0 = ((t1889 *)(__this));
			goto IL_0018;
		}
	}
	{
		V_0 = p1;
		G_B5_0 = V_0;
		G_B5_1 = ((t1889 *)(G_B3_0));
		goto IL_001d;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1494_TI));
		t1494 * L_1 = m8256(NULL, &m8256_MI);
		G_B5_0 = ((t14*)(L_1));
		G_B5_1 = ((t1889 *)(G_B4_0));
	}

IL_001d:
	{
		G_B5_1->f12 = G_B5_0;
		if (p0)
		{
			goto IL_002b;
		}
	}
	{
		p0 = ((int32_t)10);
	}

IL_002b:
	{
		p0 = ((int32_t)((((int32_t)((float)((((float)p0))/(0.9f)))))+1));
		m10044(__this, p0, &m10044_MI);
		__this->f14 = 0;
		return;
	}
}
extern MethodInfo m10044_MI;
 void m10044 (t1889 * __this, int32_t p0, MethodInfo* method){
	{
		__this->f4 = ((t51*)SZArrayNew(InitializedTypeInfo(&t51_TI), p0));
		__this->f5 = ((t1459*)SZArrayNew(InitializedTypeInfo(&t1459_TI), p0));
		__this->f9 = (-1);
		__this->f6 = ((t40*)SZArrayNew(InitializedTypeInfo(&t40_TI), p0));
		__this->f7 = ((t51*)SZArrayNew(InitializedTypeInfo(&t51_TI), p0));
		__this->f8 = 0;
		t51* L_0 = (__this->f4);
		__this->f11 = (((int32_t)((float)((((float)(((int32_t)(((t24 *)L_0)->max_length)))))*(0.9f)))));
		int32_t L_1 = (__this->f11);
		if (L_1)
		{
			goto IL_006e;
		}
	}
	{
		t51* L_2 = (__this->f4);
		if ((((int32_t)(((int32_t)(((t24 *)L_2)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		__this->f11 = 1;
	}

IL_006e:
	{
		return;
	}
}
extern MethodInfo m10045_MI;
 void m10045 (t1889 * __this, t24 * p0, int32_t p1, MethodInfo* method){
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t338 * L_0 = (t338 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t338_TI));
		m2974(L_0, (t33*) &_stringLiteral326, &m2974_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		t1242 * L_1 = (t1242 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1242_TI));
		m6493(L_1, (t33*) &_stringLiteral323, &m6493_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_001d:
	{
		int32_t L_2 = m3737(p0, &m3737_MI);
		if ((((int32_t)p1) <= ((int32_t)L_2)))
		{
			goto IL_0031;
		}
	}
	{
		t319 * L_3 = (t319 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t319_TI));
		m1959(L_3, (t33*) &_stringLiteral538, &m1959_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0031:
	{
		int32_t L_4 = m3737(p0, &m3737_MI);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m10041_MI, __this);
		if ((((int32_t)((int32_t)(L_4-p1))) >= ((int32_t)L_5)))
		{
			goto IL_004c;
		}
	}
	{
		t319 * L_6 = (t319 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t319_TI));
		m1959(L_6, (t33*) &_stringLiteral539, &m1959_MI);
		il2cpp_codegen_raise_exception (L_6);
	}

IL_004c:
	{
		return;
	}
}
extern MethodInfo m10046_MI;
 t1894  m10046 (t14 * __this, t14 * p0, int32_t p1, MethodInfo* method){
	{
		t1894  L_0 = {0};
		m10064(&L_0, p0, p1, &m10064_MI);
		return L_0;
	}
}
extern MethodInfo m10047_MI;
 int32_t m10047 (t14 * __this, t14 * p0, int32_t p1, MethodInfo* method){
	{
		return p1;
	}
}
extern MethodInfo m10048_MI;
 void m10048 (t1889 * __this, t1893* p0, int32_t p1, MethodInfo* method){
	{
		m10045(__this, (t24 *)(t24 *)p0, p1, &m10045_MI);
		t77 L_0 = { &m10046_MI };
		t1901 * L_1 = (t1901 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1901_TI));
		m10113(L_1, NULL, L_0, &m10113_MI);
		m17597(__this, p0, p1, L_1, &m17597_MI);
		return;
	}
}
extern MethodInfo m10049_MI;
 void m10049 (t1889 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	t51* V_1 = {0};
	t1459* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	t40* V_7 = {0};
	t51* V_8 = {0};
	int32_t V_9 = 0;
	{
		t51* L_0 = (__this->f4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t863_TI));
		int32_t L_1 = m4429(NULL, ((int32_t)(((int32_t)((((int32_t)(((t24 *)L_0)->max_length)))<<1))|1)), &m4429_MI);
		V_0 = L_1;
		V_1 = ((t51*)SZArrayNew(InitializedTypeInfo(&t51_TI), V_0));
		V_2 = ((t1459*)SZArrayNew(InitializedTypeInfo(&t1459_TI), V_0));
		V_3 = 0;
		goto IL_00ab;
	}

IL_0027:
	{
		t51* L_2 = (__this->f4);
		V_4 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_2, V_3))-1));
		goto IL_00a2;
	}

IL_0035:
	{
		t14* L_3 = (__this->f12);
		t40* L_4 = (__this->f6);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, t14 * >::Invoke(&m22741_MI, L_3, (*(t14 **)(t14 **)SZArrayLdElema(L_4, V_4)));
		int32_t L_6 = ((int32_t)(L_5|((int32_t)-2147483648)));
		V_9 = L_6;
		((t834 *)(t834 *)SZArrayLdElema(V_2, V_4))->f0 = L_6;
		V_5 = V_9;
		V_6 = ((int32_t)(((int32_t)(V_5&((int32_t)2147483647)))%V_0));
		((t834 *)(t834 *)SZArrayLdElema(V_2, V_4))->f1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(V_1, V_6))-1));
		*((int32_t*)(int32_t*)SZArrayLdElema(V_1, V_6)) = (int32_t)((int32_t)(V_4+1));
		t1459* L_7 = (__this->f5);
		int32_t L_8 = (((t834 *)(t834 *)SZArrayLdElema(L_7, V_4))->f1);
		V_4 = L_8;
	}

IL_00a2:
	{
		if ((((uint32_t)V_4) != ((uint32_t)(-1))))
		{
			goto IL_0035;
		}
	}
	{
		V_3 = ((int32_t)(V_3+1));
	}

IL_00ab:
	{
		t51* L_9 = (__this->f4);
		if ((((int32_t)V_3) < ((int32_t)(((int32_t)(((t24 *)L_9)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		__this->f4 = V_1;
		__this->f5 = V_2;
		V_7 = ((t40*)SZArrayNew(InitializedTypeInfo(&t40_TI), V_0));
		V_8 = ((t51*)SZArrayNew(InitializedTypeInfo(&t51_TI), V_0));
		t40* L_10 = (__this->f6);
		int32_t L_11 = (__this->f8);
		m3786(NULL, (t24 *)(t24 *)L_10, 0, (t24 *)(t24 *)V_7, 0, L_11, &m3786_MI);
		t51* L_12 = (__this->f7);
		int32_t L_13 = (__this->f8);
		m3786(NULL, (t24 *)(t24 *)L_12, 0, (t24 *)(t24 *)V_8, 0, L_13, &m3786_MI);
		__this->f6 = V_7;
		__this->f7 = V_8;
		__this->f11 = (((int32_t)((float)((((float)V_0))*(0.9f)))));
		return;
	}
}
extern MethodInfo m10050_MI;
 void m10050 (t1889 * __this, t14 * p0, int32_t p1, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		t14 * L_0 = p0;
		if (((t14 *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t338 * L_1 = (t338 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t338_TI));
		m2974(L_1, (t33*) &_stringLiteral536, &m2974_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		t14* L_2 = (__this->f12);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t14 * >::Invoke(&m22741_MI, L_2, p0);
		V_0 = ((int32_t)(L_3|((int32_t)-2147483648)));
		t51* L_4 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t24 *)L_4)->max_length)))));
		t51* L_5 = (__this->f4);
		V_2 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_5, V_1))-1));
		goto IL_008f;
	}

IL_0044:
	{
		t1459* L_6 = (__this->f5);
		int32_t L_7 = (((t834 *)(t834 *)SZArrayLdElema(L_6, V_2))->f0);
		if ((((uint32_t)L_7) != ((uint32_t)V_0)))
		{
			goto IL_007d;
		}
	}
	{
		t14* L_8 = (__this->f12);
		t40* L_9 = (__this->f6);
		bool L_10 = (bool)InterfaceFuncInvoker2< bool, t14 *, t14 * >::Invoke(&m22740_MI, L_8, (*(t14 **)(t14 **)SZArrayLdElema(L_9, V_2)), p0);
		if (!L_10)
		{
			goto IL_007d;
		}
	}
	{
		t319 * L_11 = (t319 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t319_TI));
		m1959(L_11, (t33*) &_stringLiteral541, &m1959_MI);
		il2cpp_codegen_raise_exception (L_11);
	}

IL_007d:
	{
		t1459* L_12 = (__this->f5);
		int32_t L_13 = (((t834 *)(t834 *)SZArrayLdElema(L_12, V_2))->f1);
		V_2 = L_13;
	}

IL_008f:
	{
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_14 = (__this->f10);
		int32_t L_15 = ((int32_t)(L_14+1));
		V_3 = L_15;
		__this->f10 = L_15;
		int32_t L_16 = (__this->f11);
		if ((((int32_t)V_3) <= ((int32_t)L_16)))
		{
			goto IL_00c3;
		}
	}
	{
		m10049(__this, &m10049_MI);
		t51* L_17 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t24 *)L_17)->max_length)))));
	}

IL_00c3:
	{
		int32_t L_18 = (__this->f9);
		V_2 = L_18;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_19 = (__this->f8);
		int32_t L_20 = L_19;
		V_3 = L_20;
		__this->f8 = ((int32_t)(L_20+1));
		V_2 = V_3;
		goto IL_00f9;
	}

IL_00e2:
	{
		t1459* L_21 = (__this->f5);
		int32_t L_22 = (((t834 *)(t834 *)SZArrayLdElema(L_21, V_2))->f1);
		__this->f9 = L_22;
	}

IL_00f9:
	{
		t1459* L_23 = (__this->f5);
		((t834 *)(t834 *)SZArrayLdElema(L_23, V_2))->f0 = V_0;
		t1459* L_24 = (__this->f5);
		t51* L_25 = (__this->f4);
		((t834 *)(t834 *)SZArrayLdElema(L_24, V_2))->f1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_25, V_1))-1));
		t51* L_26 = (__this->f4);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_26, V_1)) = (int32_t)((int32_t)(V_2+1));
		t40* L_27 = (__this->f6);
		*((t14 **)(t14 **)SZArrayLdElema(L_27, V_2)) = (t14 *)p0;
		t51* L_28 = (__this->f7);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_28, V_2)) = (int32_t)p1;
		int32_t L_29 = (__this->f14);
		__this->f14 = ((int32_t)(L_29+1));
		return;
	}
}
extern MethodInfo m10051_MI;
 void m10051 (t1889 * __this, MethodInfo* method){
	{
		__this->f10 = 0;
		t51* L_0 = (__this->f4);
		t51* L_1 = (__this->f4);
		m3782(NULL, (t24 *)(t24 *)L_0, 0, (((int32_t)(((t24 *)L_1)->max_length))), &m3782_MI);
		t40* L_2 = (__this->f6);
		t40* L_3 = (__this->f6);
		m3782(NULL, (t24 *)(t24 *)L_2, 0, (((int32_t)(((t24 *)L_3)->max_length))), &m3782_MI);
		t51* L_4 = (__this->f7);
		t51* L_5 = (__this->f7);
		m3782(NULL, (t24 *)(t24 *)L_4, 0, (((int32_t)(((t24 *)L_5)->max_length))), &m3782_MI);
		t1459* L_6 = (__this->f5);
		t1459* L_7 = (__this->f5);
		m3782(NULL, (t24 *)(t24 *)L_6, 0, (((int32_t)(((t24 *)L_7)->max_length))), &m3782_MI);
		__this->f9 = (-1);
		__this->f8 = 0;
		int32_t L_8 = (__this->f14);
		__this->f14 = ((int32_t)(L_8+1));
		return;
	}
}
extern MethodInfo m10052_MI;
 bool m10052 (t1889 * __this, t14 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		t14 * L_0 = p0;
		if (((t14 *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t338 * L_1 = (t338 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t338_TI));
		m2974(L_1, (t33*) &_stringLiteral536, &m2974_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		t14* L_2 = (__this->f12);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t14 * >::Invoke(&m22741_MI, L_2, p0);
		V_0 = ((int32_t)(L_3|((int32_t)-2147483648)));
		t51* L_4 = (__this->f4);
		t51* L_5 = (__this->f4);
		V_1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_4, ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t24 *)L_5)->max_length)))))))-1));
		goto IL_0084;
	}

IL_0042:
	{
		t1459* L_6 = (__this->f5);
		int32_t L_7 = (((t834 *)(t834 *)SZArrayLdElema(L_6, V_1))->f0);
		if ((((uint32_t)L_7) != ((uint32_t)V_0)))
		{
			goto IL_0072;
		}
	}
	{
		t14* L_8 = (__this->f12);
		t40* L_9 = (__this->f6);
		bool L_10 = (bool)InterfaceFuncInvoker2< bool, t14 *, t14 * >::Invoke(&m22740_MI, L_8, (*(t14 **)(t14 **)SZArrayLdElema(L_9, V_1)), p0);
		if (!L_10)
		{
			goto IL_0072;
		}
	}
	{
		return 1;
	}

IL_0072:
	{
		t1459* L_11 = (__this->f5);
		int32_t L_12 = (((t834 *)(t834 *)SZArrayLdElema(L_11, V_1))->f1);
		V_1 = L_12;
	}

IL_0084:
	{
		if ((((uint32_t)V_1) != ((uint32_t)(-1))))
		{
			goto IL_0042;
		}
	}
	{
		return 0;
	}
}
extern MethodInfo m10053_MI;
 bool m10053 (t1889 * __this, int32_t p0, MethodInfo* method){
	t14* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1835_TI));
		t1835 * L_0 = m9713(NULL, &m9713_MI);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0048;
	}

IL_000a:
	{
		t51* L_1 = (__this->f4);
		V_2 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_1, V_1))-1));
		goto IL_0040;
	}

IL_0017:
	{
		t51* L_2 = (__this->f7);
		bool L_3 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(&m23407_MI, V_0, (*(int32_t*)(int32_t*)SZArrayLdElema(L_2, V_2)), p0);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		return 1;
	}

IL_002e:
	{
		t1459* L_4 = (__this->f5);
		int32_t L_5 = (((t834 *)(t834 *)SZArrayLdElema(L_4, V_2))->f1);
		V_2 = L_5;
	}

IL_0040:
	{
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0017;
		}
	}
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0048:
	{
		t51* L_6 = (__this->f4);
		if ((((int32_t)V_1) < ((int32_t)(((int32_t)(((t24 *)L_6)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}
}
extern MethodInfo m10054_MI;
 void m10054 (t1889 * __this, t715 * p0, t716  p1, MethodInfo* method){
	t1893* V_0 = {0};
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t338 * L_0 = (t338 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t338_TI));
		m2974(L_0, (t33*) &_stringLiteral294, &m2974_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		int32_t L_1 = (__this->f14);
		m5759(p0, (t33*) &_stringLiteral542, L_1, &m5759_MI);
		t14* L_2 = (__this->f12);
		m5765(p0, (t33*) &_stringLiteral543, L_2, &m5765_MI);
		V_0 = (t1893*)NULL;
		int32_t L_3 = (__this->f10);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_4 = (__this->f10);
		V_0 = ((t1893*)SZArrayNew(InitializedTypeInfo(&t1893_TI), L_4));
		m10048(__this, V_0, 0, &m10048_MI);
	}

IL_004f:
	{
		t51* L_5 = (__this->f4);
		m5759(p0, (t33*) &_stringLiteral544, (((int32_t)(((t24 *)L_5)->max_length))), &m5759_MI);
		m5765(p0, (t33*) &_stringLiteral545, (t14 *)(t14 *)V_0, &m5765_MI);
		return;
	}
}
extern MethodInfo m10055_MI;
 void m10055 (t1889 * __this, t14 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	t1893* V_1 = {0};
	int32_t V_2 = 0;
	{
		t715 * L_0 = (__this->f13);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		t715 * L_1 = (__this->f13);
		int32_t L_2 = m5768(L_1, (t33*) &_stringLiteral542, &m5768_MI);
		__this->f14 = L_2;
		t715 * L_3 = (__this->f13);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t31_TI));
		t31 * L_4 = m1571(NULL, LoadTypeToken(&t1890_0_0_0), &m1571_MI);
		t14 * L_5 = m5755(L_3, (t33*) &_stringLiteral543, L_4, &m5755_MI);
		__this->f12 = ((t14*)Castclass(L_5, InitializedTypeInfo(&t1890_TI)));
		t715 * L_6 = (__this->f13);
		int32_t L_7 = m5768(L_6, (t33*) &_stringLiteral544, &m5768_MI);
		V_0 = L_7;
		t715 * L_8 = (__this->f13);
		t31 * L_9 = m1571(NULL, LoadTypeToken(&t1893_0_0_0), &m1571_MI);
		t14 * L_10 = m5755(L_8, (t33*) &_stringLiteral545, L_9, &m5755_MI);
		V_1 = ((t1893*)Castclass(L_10, InitializedTypeInfo(&t1893_TI)));
		if ((((int32_t)V_0) >= ((int32_t)((int32_t)10))))
		{
			goto IL_007d;
		}
	}
	{
		V_0 = ((int32_t)10);
	}

IL_007d:
	{
		m10044(__this, V_0, &m10044_MI);
		__this->f10 = 0;
		if (!V_1)
		{
			goto IL_00ba;
		}
	}
	{
		V_2 = 0;
		goto IL_00b4;
	}

IL_0092:
	{
		t14 * L_11 = m10065(((t1894 *)(t1894 *)SZArrayLdElema(V_1, V_2)), &m10065_MI);
		int32_t L_12 = m10067(((t1894 *)(t1894 *)SZArrayLdElema(V_1, V_2)), &m10067_MI);
		VirtActionInvoker2< t14 *, int32_t >::Invoke(&m10050_MI, __this, L_11, L_12);
		V_2 = ((int32_t)(V_2+1));
	}

IL_00b4:
	{
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((t24 *)V_1)->max_length))))))
		{
			goto IL_0092;
		}
	}

IL_00ba:
	{
		int32_t L_13 = (__this->f14);
		__this->f14 = ((int32_t)(L_13+1));
		__this->f13 = (t715 *)NULL;
		return;
	}
}
extern MethodInfo m10056_MI;
 bool m10056 (t1889 * __this, t14 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	t14 * V_4 = {0};
	int32_t V_5 = 0;
	{
		t14 * L_0 = p0;
		if (((t14 *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t338 * L_1 = (t338 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t338_TI));
		m2974(L_1, (t33*) &_stringLiteral536, &m2974_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		t14* L_2 = (__this->f12);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t14 * >::Invoke(&m22741_MI, L_2, p0);
		V_0 = ((int32_t)(L_3|((int32_t)-2147483648)));
		t51* L_4 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t24 *)L_4)->max_length)))));
		t51* L_5 = (__this->f4);
		V_2 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_5, V_1))-1));
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0048;
		}
	}
	{
		return 0;
	}

IL_0048:
	{
		V_3 = (-1);
	}

IL_004a:
	{
		t1459* L_6 = (__this->f5);
		int32_t L_7 = (((t834 *)(t834 *)SZArrayLdElema(L_6, V_2))->f0);
		if ((((uint32_t)L_7) != ((uint32_t)V_0)))
		{
			goto IL_007a;
		}
	}
	{
		t14* L_8 = (__this->f12);
		t40* L_9 = (__this->f6);
		bool L_10 = (bool)InterfaceFuncInvoker2< bool, t14 *, t14 * >::Invoke(&m22740_MI, L_8, (*(t14 **)(t14 **)SZArrayLdElema(L_9, V_2)), p0);
		if (!L_10)
		{
			goto IL_007a;
		}
	}
	{
		goto IL_0092;
	}

IL_007a:
	{
		V_3 = V_2;
		t1459* L_11 = (__this->f5);
		int32_t L_12 = (((t834 *)(t834 *)SZArrayLdElema(L_11, V_2))->f1);
		V_2 = L_12;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_004a;
		}
	}

IL_0092:
	{
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0098;
		}
	}
	{
		return 0;
	}

IL_0098:
	{
		int32_t L_13 = (__this->f10);
		__this->f10 = ((int32_t)(L_13-1));
		if ((((uint32_t)V_3) != ((uint32_t)(-1))))
		{
			goto IL_00c7;
		}
	}
	{
		t51* L_14 = (__this->f4);
		t1459* L_15 = (__this->f5);
		int32_t L_16 = (((t834 *)(t834 *)SZArrayLdElema(L_15, V_2))->f1);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_14, V_1)) = (int32_t)((int32_t)(L_16+1));
		goto IL_00e9;
	}

IL_00c7:
	{
		t1459* L_17 = (__this->f5);
		t1459* L_18 = (__this->f5);
		int32_t L_19 = (((t834 *)(t834 *)SZArrayLdElema(L_18, V_2))->f1);
		((t834 *)(t834 *)SZArrayLdElema(L_17, V_3))->f1 = L_19;
	}

IL_00e9:
	{
		t1459* L_20 = (__this->f5);
		int32_t L_21 = (__this->f9);
		((t834 *)(t834 *)SZArrayLdElema(L_20, V_2))->f1 = L_21;
		__this->f9 = V_2;
		t1459* L_22 = (__this->f5);
		((t834 *)(t834 *)SZArrayLdElema(L_22, V_2))->f0 = 0;
		t40* L_23 = (__this->f6);
		Initobj (&t14_TI, (&V_4));
		*((t14 **)(t14 **)SZArrayLdElema(L_23, V_2)) = (t14 *)V_4;
		t51* L_24 = (__this->f7);
		Initobj (&t35_TI, (&V_5));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_24, V_2)) = (int32_t)V_5;
		int32_t L_25 = (__this->f14);
		__this->f14 = ((int32_t)(L_25+1));
		return 1;
	}
}
extern MethodInfo m10057_MI;
 bool m10057 (t1889 * __this, t14 * p0, int32_t* p1, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		t14 * L_0 = p0;
		if (((t14 *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t338 * L_1 = (t338 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t338_TI));
		m2974(L_1, (t33*) &_stringLiteral536, &m2974_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		t14* L_2 = (__this->f12);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t14 * >::Invoke(&m22741_MI, L_2, p0);
		V_0 = ((int32_t)(L_3|((int32_t)-2147483648)));
		t51* L_4 = (__this->f4);
		t51* L_5 = (__this->f4);
		V_1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_4, ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t24 *)L_5)->max_length)))))))-1));
		goto IL_0096;
	}

IL_0042:
	{
		t1459* L_6 = (__this->f5);
		int32_t L_7 = (((t834 *)(t834 *)SZArrayLdElema(L_6, V_1))->f0);
		if ((((uint32_t)L_7) != ((uint32_t)V_0)))
		{
			goto IL_0084;
		}
	}
	{
		t14* L_8 = (__this->f12);
		t40* L_9 = (__this->f6);
		bool L_10 = (bool)InterfaceFuncInvoker2< bool, t14 *, t14 * >::Invoke(&m22740_MI, L_8, (*(t14 **)(t14 **)SZArrayLdElema(L_9, V_1)), p0);
		if (!L_10)
		{
			goto IL_0084;
		}
	}
	{
		t51* L_11 = (__this->f7);
		*p1 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_11, V_1));
		return 1;
	}

IL_0084:
	{
		t1459* L_12 = (__this->f5);
		int32_t L_13 = (((t834 *)(t834 *)SZArrayLdElema(L_12, V_1))->f1);
		V_1 = L_13;
	}

IL_0096:
	{
		if ((((uint32_t)V_1) != ((uint32_t)(-1))))
		{
			goto IL_0042;
		}
	}
	{
		Initobj (&t35_TI, (&V_2));
		*p1 = V_2;
		return 0;
	}
}
extern MethodInfo m10058_MI;
 t1892 * m10058 (t1889 * __this, MethodInfo* method){
	{
		t1892 * L_0 = (t1892 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1892_TI));
		m10075(L_0, __this, &m10075_MI);
		return L_0;
	}
}
extern MethodInfo m10059_MI;
 t14 * m10059 (t1889 * __this, t14 * p0, MethodInfo* method){
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t338 * L_0 = (t338 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t338_TI));
		m2974(L_0, (t33*) &_stringLiteral536, &m2974_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		if (((t14 *)IsInst(p0, InitializedTypeInfo(&t14_TI))))
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t31_TI));
		t31 * L_1 = m1571(NULL, LoadTypeToken(&t14_0_0_0), &m1571_MI);
		t33* L_2 = (t33*)VirtFuncInvoker0< t33* >::Invoke(&m3872_MI, L_1);
		IL2CPP_RUNTIME_CLASS_INIT((&t33_TI));
		t33* L_3 = m1786(NULL, (t33*) &_stringLiteral546, L_2, &m1786_MI);
		t319 * L_4 = (t319 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t319_TI));
		m6483(L_4, L_3, (t33*) &_stringLiteral536, &m6483_MI);
		il2cpp_codegen_raise_exception (L_4);
	}

IL_003a:
	{
		return ((t14 *)Castclass(p0, InitializedTypeInfo(&t14_TI)));
	}
}
extern MethodInfo m10060_MI;
 int32_t m10060 (t1889 * __this, t14 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		if (p0)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t31_TI));
		t31 * L_0 = m1571(NULL, LoadTypeToken(&t35_0_0_0), &m1571_MI);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m3841_MI, L_0);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		Initobj (&t35_TI, (&V_0));
		return V_0;
	}

IL_001e:
	{
		if (((t14 *)IsInst(p0, InitializedTypeInfo(&t35_TI))))
		{
			goto IL_004a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t31_TI));
		t31 * L_2 = m1571(NULL, LoadTypeToken(&t35_0_0_0), &m1571_MI);
		t33* L_3 = (t33*)VirtFuncInvoker0< t33* >::Invoke(&m3872_MI, L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&t33_TI));
		t33* L_4 = m1786(NULL, (t33*) &_stringLiteral546, L_3, &m1786_MI);
		t319 * L_5 = (t319 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t319_TI));
		m6483(L_5, L_4, (t33*) &_stringLiteral242, &m6483_MI);
		il2cpp_codegen_raise_exception (L_5);
	}

IL_004a:
	{
		return ((*(int32_t*)((int32_t*)UnBox (p0, InitializedTypeInfo(&t35_TI)))));
	}
}
extern MethodInfo m10061_MI;
 bool m10061 (t1889 * __this, t1894  p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		t14 * L_0 = m10065((&p0), &m10065_MI);
		bool L_1 = (bool)VirtFuncInvoker2< bool, t14 *, int32_t* >::Invoke(&m10057_MI, __this, L_0, (&V_0));
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1835_TI));
		t1835 * L_2 = m9713(NULL, &m9713_MI);
		int32_t L_3 = m10067((&p0), &m10067_MI);
		bool L_4 = (bool)VirtFuncInvoker2< bool, int32_t, int32_t >::Invoke(&m23542_MI, L_2, L_3, V_0);
		return L_4;
	}
}
extern MethodInfo m10062_MI;
 t1896  m10062 (t1889 * __this, MethodInfo* method){
	{
		t1896  L_0 = {0};
		m10094(&L_0, __this, &m10094_MI);
		return L_0;
	}
}
extern MethodInfo m10063_MI;
 t836  m10063 (t14 * __this, t14 * p0, int32_t p1, MethodInfo* method){
	{
		t14 * L_0 = p0;
		int32_t L_1 = p1;
		t14 * L_2 = Box(InitializedTypeInfo(&t35_TI), &L_1);
		t836  L_3 = {0};
		m4371(&L_3, ((t14 *)L_0), L_2, &m4371_MI);
		return L_3;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
extern Il2CppType t35_0_0_32849;
FieldInfo t1889_f0_FieldInfo = 
{
	"INITIAL_SIZE", &t35_0_0_32849, &t1889_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t28_0_0_32849;
FieldInfo t1889_f1_FieldInfo = 
{
	"DEFAULT_LOAD_FACTOR", &t28_0_0_32849, &t1889_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_32849;
FieldInfo t1889_f2_FieldInfo = 
{
	"NO_SLOT", &t35_0_0_32849, &t1889_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_32849;
FieldInfo t1889_f3_FieldInfo = 
{
	"HASH_FLAG", &t35_0_0_32849, &t1889_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t51_0_0_1;
FieldInfo t1889_f4_FieldInfo = 
{
	"table", &t51_0_0_1, &t1889_TI, offsetof(t1889, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1459_0_0_1;
FieldInfo t1889_f5_FieldInfo = 
{
	"linkSlots", &t1459_0_0_1, &t1889_TI, offsetof(t1889, f5), &EmptyCustomAttributesCache};
extern Il2CppType t40_0_0_1;
FieldInfo t1889_f6_FieldInfo = 
{
	"keySlots", &t40_0_0_1, &t1889_TI, offsetof(t1889, f6), &EmptyCustomAttributesCache};
extern Il2CppType t51_0_0_1;
FieldInfo t1889_f7_FieldInfo = 
{
	"valueSlots", &t51_0_0_1, &t1889_TI, offsetof(t1889, f7), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t1889_f8_FieldInfo = 
{
	"touchedSlots", &t35_0_0_1, &t1889_TI, offsetof(t1889, f8), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t1889_f9_FieldInfo = 
{
	"emptySlot", &t35_0_0_1, &t1889_TI, offsetof(t1889, f9), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t1889_f10_FieldInfo = 
{
	"count", &t35_0_0_1, &t1889_TI, offsetof(t1889, f10), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t1889_f11_FieldInfo = 
{
	"threshold", &t35_0_0_1, &t1889_TI, offsetof(t1889, f11), &EmptyCustomAttributesCache};
extern Il2CppType t1890_0_0_1;
FieldInfo t1889_f12_FieldInfo = 
{
	"hcp", &t1890_0_0_1, &t1889_TI, offsetof(t1889, f12), &EmptyCustomAttributesCache};
extern Il2CppType t715_0_0_1;
FieldInfo t1889_f13_FieldInfo = 
{
	"serialization_info", &t715_0_0_1, &t1889_TI, offsetof(t1889, f13), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t1889_f14_FieldInfo = 
{
	"generation", &t35_0_0_1, &t1889_TI, offsetof(t1889, f14), &EmptyCustomAttributesCache};
extern Il2CppType t1891_0_0_17;
extern CustomAttributesCache t841__CustomAttributeCache_U3CU3Ef__am$cacheB;
FieldInfo t1889_f15_FieldInfo = 
{
	"<>f__am$cacheB", &t1891_0_0_17, &t1889_TI, offsetof(t1889_SFs, f15), &t841__CustomAttributeCache_U3CU3Ef__am$cacheB};
static FieldInfo* t1889_FIs[] =
{
	&t1889_f0_FieldInfo,
	&t1889_f1_FieldInfo,
	&t1889_f2_FieldInfo,
	&t1889_f3_FieldInfo,
	&t1889_f4_FieldInfo,
	&t1889_f5_FieldInfo,
	&t1889_f6_FieldInfo,
	&t1889_f7_FieldInfo,
	&t1889_f8_FieldInfo,
	&t1889_f9_FieldInfo,
	&t1889_f10_FieldInfo,
	&t1889_f11_FieldInfo,
	&t1889_f12_FieldInfo,
	&t1889_f13_FieldInfo,
	&t1889_f14_FieldInfo,
	&t1889_f15_FieldInfo,
	NULL
};
static const int32_t t1889_f0_DefaultValueData = 10;
extern Il2CppType t35_0_0_0;
static Il2CppFieldDefaultValueEntry t1889_f0_DefaultValue = 
{
	&t1889_f0_FieldInfo, { (char*)&t1889_f0_DefaultValueData, &t35_0_0_0 }};
static const float t1889_f1_DefaultValueData = 0.9f;
extern Il2CppType t28_0_0_0;
static Il2CppFieldDefaultValueEntry t1889_f1_DefaultValue = 
{
	&t1889_f1_FieldInfo, { (char*)&t1889_f1_DefaultValueData, &t28_0_0_0 }};
static const int32_t t1889_f2_DefaultValueData = -1;
extern Il2CppType t35_0_0_0;
static Il2CppFieldDefaultValueEntry t1889_f2_DefaultValue = 
{
	&t1889_f2_FieldInfo, { (char*)&t1889_f2_DefaultValueData, &t35_0_0_0 }};
static const int32_t t1889_f3_DefaultValueData = -2147483648;
extern Il2CppType t35_0_0_0;
static Il2CppFieldDefaultValueEntry t1889_f3_DefaultValue = 
{
	&t1889_f3_FieldInfo, { (char*)&t1889_f3_DefaultValueData, &t35_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1889_FDVs[] = 
{
	&t1889_f0_DefaultValue,
	&t1889_f1_DefaultValue,
	&t1889_f2_DefaultValue,
	&t1889_f3_DefaultValue,
	NULL
};
extern MethodInfo m10029_MI;
static PropertyInfo t1889____System_Collections_IDictionary_Item_PropertyInfo = 
{
	&t1889_TI, "System.Collections.IDictionary.Item", NULL, &m10029_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10030_MI;
static PropertyInfo t1889____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t1889_TI, "System.Collections.ICollection.IsSynchronized", &m10030_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10031_MI;
static PropertyInfo t1889____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t1889_TI, "System.Collections.ICollection.SyncRoot", &m10031_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10032_MI;
static PropertyInfo t1889____System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnly_PropertyInfo = 
{
	&t1889_TI, "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.IsReadOnly", &m10032_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10041_MI;
static PropertyInfo t1889____Count_PropertyInfo = 
{
	&t1889_TI, "Count", &m10041_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10042_MI;
static PropertyInfo t1889____Item_PropertyInfo = 
{
	&t1889_TI, "Item", NULL, &m10042_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10058_MI;
static PropertyInfo t1889____Values_PropertyInfo = 
{
	&t1889_TI, "Values", &m10058_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1889_PIs[] =
{
	&t1889____System_Collections_IDictionary_Item_PropertyInfo,
	&t1889____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t1889____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t1889____System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnly_PropertyInfo,
	&t1889____Count_PropertyInfo,
	&t1889____Item_PropertyInfo,
	&t1889____Values_PropertyInfo,
	NULL
};
extern TypeInfo t1889_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10025_MI = 
{
	".ctor", (methodPointerType)&m10025, &t1889_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1890_0_0_0;
static ParameterInfo t1889_m10026_ParameterInfos[] = 
{
	{"comparer", 0, 134217728, &EmptyCustomAttributesCache, &t1890_0_0_0},
};
extern TypeInfo t1889_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10026_MI = 
{
	".ctor", (methodPointerType)&m10026, &t1889_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1889_m10026_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1889_m10027_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1889_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10027_MI = 
{
	".ctor", (methodPointerType)&m10027, &t1889_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t1889_m10027_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t715_0_0_0;
extern Il2CppType t716_0_0_0;
static ParameterInfo t1889_m10028_ParameterInfos[] = 
{
	{"info", 0, 134217728, &EmptyCustomAttributesCache, &t715_0_0_0},
	{"context", 1, 134217728, &EmptyCustomAttributesCache, &t716_0_0_0},
};
extern TypeInfo t1889_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t716 (MethodInfo* method, void* obj, void** args);
MethodInfo m10028_MI = 
{
	".ctor", (methodPointerType)&m10028, &t1889_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t716, t1889_m10028_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t1889_m10029_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1889_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10029_MI = 
{
	"System.Collections.IDictionary.set_Item", (methodPointerType)&m10029, &t1889_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t14, t1889_m10029_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 19, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1889_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10030_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m10030, &t1889_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1889_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10031_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m10031, &t1889_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1889_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10032_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly", (methodPointerType)&m10032, &t1889_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 11, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1894_0_0_0;
static ParameterInfo t1889_m10033_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t1894_0_0_0},
};
extern TypeInfo t1889_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t1894 (MethodInfo* method, void* obj, void** args);
MethodInfo m10033_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add", (methodPointerType)&m10033, &t1889_TI, &t25_0_0_0, RuntimeInvoker_t25_t1894, t1889_m10033_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1894_0_0_0;
static ParameterInfo t1889_m10034_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t1894_0_0_0},
};
extern TypeInfo t1889_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t1894 (MethodInfo* method, void* obj, void** args);
MethodInfo m10034_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains", (methodPointerType)&m10034, &t1889_TI, &t26_0_0_0, RuntimeInvoker_t26_t1894, t1889_m10034_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 14, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1893_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t1889_m10035_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1893_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1889_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10035_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo", (methodPointerType)&m10035, &t1889_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t1889_m10035_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1894_0_0_0;
static ParameterInfo t1889_m10036_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t1894_0_0_0},
};
extern TypeInfo t1889_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t1894 (MethodInfo* method, void* obj, void** args);
MethodInfo m10036_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove", (methodPointerType)&m10036, &t1889_TI, &t26_0_0_0, RuntimeInvoker_t26_t1894, t1889_m10036_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t24_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t1889_m10037_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1889_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10037_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m10037, &t1889_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t1889_m10037_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1889_TI;
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10038_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m10038, &t1889_TI, &t36_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1889_TI;
extern Il2CppType t1895_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10039_MI = 
{
	"System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator", (methodPointerType)&m10039, &t1889_TI, &t1895_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 481, 0, 17, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1889_TI;
extern Il2CppType t842_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10040_MI = 
{
	"System.Collections.IDictionary.GetEnumerator", (methodPointerType)&m10040, &t1889_TI, &t842_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 481, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1889_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10041_MI = 
{
	"get_Count", (methodPointerType)&m10041, &t1889_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 2534, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t1889_m10042_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1889_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10042_MI = 
{
	"set_Item", (methodPointerType)&m10042, &t1889_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t1889_m10042_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 22, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1890_0_0_0;
static ParameterInfo t1889_m10043_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"hcp", 1, 134217728, &EmptyCustomAttributesCache, &t1890_0_0_0},
};
extern TypeInfo t1889_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10043_MI = 
{
	"Init", (methodPointerType)&m10043, &t1889_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t1889_m10043_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1889_m10044_ParameterInfos[] = 
{
	{"size", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1889_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10044_MI = 
{
	"InitArrays", (methodPointerType)&m10044, &t1889_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t1889_m10044_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t24_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t1889_m10045_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1889_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10045_MI = 
{
	"CopyToCheck", (methodPointerType)&m10045, &t1889_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t1889_m10045_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1889_TI;
extern Il2CppType t25_0_0_0;
extern Il2CppGenericContainer m23719_IGC;
extern TypeInfo m23719_gp_TRet_0_TI;
Il2CppGenericParamFull m23719_gp_TRet_0_TI_GenericParamFull = { { &m23719_IGC, 0}, {NULL, "TRet", 0, 0, NULL} };
extern TypeInfo m23719_gp_TElem_1_TI;
Il2CppGenericParamFull m23719_gp_TElem_1_TI_GenericParamFull = { { &m23719_IGC, 1}, {NULL, "TElem", 0, 0, NULL} };
static Il2CppGenericParamFull* m23719_IGPA[2] = 
{
	&m23719_gp_TRet_0_TI_GenericParamFull,
	&m23719_gp_TElem_1_TI_GenericParamFull,
};
extern MethodInfo m23719_MI;
Il2CppGenericContainer m23719_IGC = { { NULL, NULL }, NULL, &m23719_MI, 2, 1, m23719_IGPA };
MethodInfo m23719_MI = 
{
	"Do_CopyTo", NULL, &t1889_TI, &t25_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, true, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t1889_m10046_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1889_TI;
extern Il2CppType t1894_0_0_0;
extern void* RuntimeInvoker_t1894_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10046_MI = 
{
	"make_pair", (methodPointerType)&m10046, &t1889_TI, &t1894_0_0_0, RuntimeInvoker_t1894_t14_t35, t1889_m10046_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t1889_m10047_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1889_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10047_MI = 
{
	"pick_value", (methodPointerType)&m10047, &t1889_TI, &t35_0_0_0, RuntimeInvoker_t35_t14_t35, t1889_m10047_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1893_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t1889_m10048_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1893_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1889_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10048_MI = 
{
	"CopyTo", (methodPointerType)&m10048, &t1889_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t1889_m10048_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1889_TI;
extern Il2CppType t25_0_0_0;
extern Il2CppGenericContainer m23720_IGC;
extern TypeInfo m23720_gp_TRet_0_TI;
Il2CppGenericParamFull m23720_gp_TRet_0_TI_GenericParamFull = { { &m23720_IGC, 0}, {NULL, "TRet", 0, 0, NULL} };
static Il2CppGenericParamFull* m23720_IGPA[1] = 
{
	&m23720_gp_TRet_0_TI_GenericParamFull,
};
extern MethodInfo m23720_MI;
Il2CppGenericContainer m23720_IGC = { { NULL, NULL }, NULL, &m23720_MI, 1, 1, m23720_IGPA };
MethodInfo m23720_MI = 
{
	"Do_ICollectionCopyTo", NULL, &t1889_TI, &t25_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, true, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1889_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10049_MI = 
{
	"Resize", (methodPointerType)&m10049, &t1889_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t1889_m10050_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1889_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10050_MI = 
{
	"Add", (methodPointerType)&m10050, &t1889_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t1889_m10050_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 23, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1889_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10051_MI = 
{
	"Clear", (methodPointerType)&m10051, &t1889_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 13, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1889_m10052_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1889_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10052_MI = 
{
	"ContainsKey", (methodPointerType)&m10052, &t1889_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1889_m10052_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1889_m10053_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1889_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10053_MI = 
{
	"ContainsValue", (methodPointerType)&m10053, &t1889_TI, &t26_0_0_0, RuntimeInvoker_t26_t35, t1889_m10053_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t715_0_0_0;
extern Il2CppType t716_0_0_0;
static ParameterInfo t1889_m10054_ParameterInfos[] = 
{
	{"info", 0, 134217728, &EmptyCustomAttributesCache, &t715_0_0_0},
	{"context", 1, 134217728, &EmptyCustomAttributesCache, &t716_0_0_0},
};
extern TypeInfo t1889_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t716 (MethodInfo* method, void* obj, void** args);
MethodInfo m10054_MI = 
{
	"GetObjectData", (methodPointerType)&m10054, &t1889_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t716, t1889_m10054_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1889_m10055_ParameterInfos[] = 
{
	{"sender", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1889_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10055_MI = 
{
	"OnDeserialization", (methodPointerType)&m10055, &t1889_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1889_m10055_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1889_m10056_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1889_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10056_MI = 
{
	"Remove", (methodPointerType)&m10056, &t1889_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1889_m10056_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t35_1_0_0;
static ParameterInfo t1889_m10057_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t35_1_0_0},
};
extern TypeInfo t1889_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14_t390 (MethodInfo* method, void* obj, void** args);
MethodInfo m10057_MI = 
{
	"TryGetValue", (methodPointerType)&m10057, &t1889_TI, &t26_0_0_0, RuntimeInvoker_t26_t14_t390, t1889_m10057_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1889_TI;
extern Il2CppType t1892_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10058_MI = 
{
	"get_Values", (methodPointerType)&m10058, &t1889_TI, &t1892_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1889_m10059_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1889_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10059_MI = 
{
	"ToTKey", (methodPointerType)&m10059, &t1889_TI, &t14_0_0_0, RuntimeInvoker_t14_t14, t1889_m10059_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1889_m10060_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1889_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10060_MI = 
{
	"ToTValue", (methodPointerType)&m10060, &t1889_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t1889_m10060_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1894_0_0_0;
static ParameterInfo t1889_m10061_ParameterInfos[] = 
{
	{"pair", 0, 134217728, &EmptyCustomAttributesCache, &t1894_0_0_0},
};
extern TypeInfo t1889_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t1894 (MethodInfo* method, void* obj, void** args);
MethodInfo m10061_MI = 
{
	"ContainsKeyValuePair", (methodPointerType)&m10061, &t1889_TI, &t26_0_0_0, RuntimeInvoker_t26_t1894, t1889_m10061_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1889_TI;
extern Il2CppType t1896_0_0_0;
extern void* RuntimeInvoker_t1896 (MethodInfo* method, void* obj, void** args);
MethodInfo m10062_MI = 
{
	"GetEnumerator", (methodPointerType)&m10062, &t1889_TI, &t1896_0_0_0, RuntimeInvoker_t1896, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t1889_m10063_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1889_TI;
extern Il2CppType t836_0_0_0;
extern void* RuntimeInvoker_t836_t14_t35 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t841__CustomAttributeCache_m7579;
MethodInfo m10063_MI = 
{
	"<CopyTo>m__0", (methodPointerType)&m10063, &t1889_TI, &t836_0_0_0, RuntimeInvoker_t836_t14_t35, t1889_m10063_ParameterInfos, &t841__CustomAttributeCache_m7579, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1889_MIs[] =
{
	&m10025_MI,
	&m10026_MI,
	&m10027_MI,
	&m10028_MI,
	&m10029_MI,
	&m10030_MI,
	&m10031_MI,
	&m10032_MI,
	&m10033_MI,
	&m10034_MI,
	&m10035_MI,
	&m10036_MI,
	&m10037_MI,
	&m10038_MI,
	&m10039_MI,
	&m10040_MI,
	&m10041_MI,
	&m10042_MI,
	&m10043_MI,
	&m10044_MI,
	&m10045_MI,
	&m23719_MI,
	&m10046_MI,
	&m10047_MI,
	&m10048_MI,
	&m23720_MI,
	&m10049_MI,
	&m10050_MI,
	&m10051_MI,
	&m10052_MI,
	&m10053_MI,
	&m10054_MI,
	&m10055_MI,
	&m10056_MI,
	&m10057_MI,
	&m10058_MI,
	&m10059_MI,
	&m10060_MI,
	&m10061_MI,
	&m10062_MI,
	&m10063_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m10038_MI;
extern MethodInfo m10054_MI;
extern MethodInfo m10041_MI;
extern MethodInfo m10030_MI;
extern MethodInfo m10031_MI;
extern MethodInfo m10037_MI;
extern MethodInfo m10041_MI;
extern MethodInfo m10032_MI;
extern MethodInfo m10033_MI;
extern MethodInfo m10051_MI;
extern MethodInfo m10034_MI;
extern MethodInfo m10035_MI;
extern MethodInfo m10036_MI;
extern MethodInfo m10039_MI;
extern MethodInfo m10056_MI;
extern MethodInfo m10029_MI;
extern MethodInfo m10040_MI;
extern MethodInfo m10055_MI;
extern MethodInfo m10042_MI;
extern MethodInfo m10050_MI;
extern MethodInfo m10052_MI;
extern MethodInfo m10054_MI;
extern MethodInfo m10055_MI;
extern MethodInfo m10057_MI;
static MethodInfo* t1889_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m10038_MI,
	&m10054_MI,
	&m10041_MI,
	&m10030_MI,
	&m10031_MI,
	&m10037_MI,
	&m10041_MI,
	&m10032_MI,
	&m10033_MI,
	&m10051_MI,
	&m10034_MI,
	&m10035_MI,
	&m10036_MI,
	&m10039_MI,
	&m10056_MI,
	&m10029_MI,
	&m10040_MI,
	&m10055_MI,
	&m10042_MI,
	&m10050_MI,
	&m10052_MI,
	&m10054_MI,
	&m10055_MI,
	&m10057_MI,
};
extern TypeInfo t600_TI;
extern TypeInfo t375_TI;
extern TypeInfo t651_TI;
extern TypeInfo t3990_TI;
extern TypeInfo t3992_TI;
extern TypeInfo t5153_TI;
extern TypeInfo t739_TI;
extern TypeInfo t1495_TI;
static TypeInfo* t1889_ITIs[] = 
{
	&t600_TI,
	&t375_TI,
	&t651_TI,
	&t3990_TI,
	&t3992_TI,
	&t5153_TI,
	&t739_TI,
	&t1495_TI,
};
extern TypeInfo t600_TI;
extern TypeInfo t375_TI;
extern TypeInfo t651_TI;
extern TypeInfo t3990_TI;
extern TypeInfo t3992_TI;
extern TypeInfo t5153_TI;
extern TypeInfo t739_TI;
extern TypeInfo t1495_TI;
static Il2CppInterfaceOffsetPair t1889_IOs[] = 
{
	{ &t600_TI, 4},
	{ &t375_TI, 5},
	{ &t651_TI, 6},
	{ &t3990_TI, 10},
	{ &t3992_TI, 17},
	{ &t5153_TI, 18},
	{ &t739_TI, 19},
	{ &t1495_TI, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1889_0_0_0;
extern Il2CppType t1889_1_0_0;
extern TypeInfo t14_TI;
struct t1889;
extern TypeInfo t1889_TI;
extern Il2CppGenericClass t1889_GC;
extern CustomAttributesCache t841__CustomAttributeCache;
extern CustomAttributesCache t841__CustomAttributeCache_U3CU3Ef__am$cacheB;
extern CustomAttributesCache t841__CustomAttributeCache_m7579;
TypeInfo t1889_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Dictionary`2", "System.Collections.Generic", t1889_MIs, t1889_PIs, t1889_FIs, NULL, &t14_TI, NULL, NULL, &t1889_TI, t1889_ITIs, t1889_VT, &t841__CustomAttributeCache, &t1889_TI, &t1889_0_0_0, &t1889_1_0_0, t1889_IOs, &t1889_GC, NULL, t1889_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1889), 0, -1, sizeof(t1889_SFs), 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 41, 7, 16, 0, 0, 28, 8, 8};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3990_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
extern MethodInfo m23721_MI;
static PropertyInfo t3990____Count_PropertyInfo = 
{
	&t3990_TI, "Count", &m23721_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m23722_MI;
static PropertyInfo t3990____IsReadOnly_PropertyInfo = 
{
	&t3990_TI, "IsReadOnly", &m23722_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3990_PIs[] =
{
	&t3990____Count_PropertyInfo,
	&t3990____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t3990_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m23721_MI = 
{
	"get_Count", NULL, &t3990_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3990_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m23722_MI = 
{
	"get_IsReadOnly", NULL, &t3990_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1894_0_0_0;
static ParameterInfo t3990_m23723_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1894_0_0_0},
};
extern TypeInfo t3990_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t1894 (MethodInfo* method, void* obj, void** args);
MethodInfo m23723_MI = 
{
	"Add", NULL, &t3990_TI, &t25_0_0_0, RuntimeInvoker_t25_t1894, t3990_m23723_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3990_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m23724_MI = 
{
	"Clear", NULL, &t3990_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1894_0_0_0;
static ParameterInfo t3990_m23725_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1894_0_0_0},
};
extern TypeInfo t3990_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t1894 (MethodInfo* method, void* obj, void** args);
MethodInfo m23725_MI = 
{
	"Contains", NULL, &t3990_TI, &t26_0_0_0, RuntimeInvoker_t26_t1894, t3990_m23725_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1893_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t3990_m23726_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1893_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t3990_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m23726_MI = 
{
	"CopyTo", NULL, &t3990_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t3990_m23726_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1894_0_0_0;
static ParameterInfo t3990_m23727_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1894_0_0_0},
};
extern TypeInfo t3990_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t1894 (MethodInfo* method, void* obj, void** args);
MethodInfo m23727_MI = 
{
	"Remove", NULL, &t3990_TI, &t26_0_0_0, RuntimeInvoker_t26_t1894, t3990_m23727_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3990_MIs[] =
{
	&m23721_MI,
	&m23722_MI,
	&m23723_MI,
	&m23724_MI,
	&m23725_MI,
	&m23726_MI,
	&m23727_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t3992_TI;
static TypeInfo* t3990_ITIs[] = 
{
	&t600_TI,
	&t3992_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3990_0_0_0;
extern Il2CppType t3990_1_0_0;
struct t3990;
extern TypeInfo t3990_TI;
extern Il2CppGenericClass t3990_GC;
TypeInfo t3990_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t3990_MIs, t3990_PIs, NULL, NULL, NULL, NULL, NULL, &t3990_TI, t3990_ITIs, NULL, &EmptyCustomAttributesCache, &t3990_TI, &t3990_0_0_0, &t3990_1_0_0, NULL, &t3990_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3992_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
extern TypeInfo t3992_TI;
extern Il2CppType t1895_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23728_MI = 
{
	"GetEnumerator", NULL, &t3992_TI, &t1895_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3992_MIs[] =
{
	&m23728_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t3992_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3992_0_0_0;
extern Il2CppType t3992_1_0_0;
struct t3992;
extern TypeInfo t3992_TI;
extern Il2CppGenericClass t3992_GC;
TypeInfo t3992_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t3992_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3992_TI, t3992_ITIs, NULL, &EmptyCustomAttributesCache, &t3992_TI, &t3992_0_0_0, &t3992_1_0_0, NULL, &t3992_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1895_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
extern MethodInfo m23729_MI;
static PropertyInfo t1895____Current_PropertyInfo = 
{
	&t1895_TI, "Current", &m23729_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1895_PIs[] =
{
	&t1895____Current_PropertyInfo,
	NULL
};
extern TypeInfo t1895_TI;
extern Il2CppType t1894_0_0_0;
extern void* RuntimeInvoker_t1894 (MethodInfo* method, void* obj, void** args);
MethodInfo m23729_MI = 
{
	"get_Current", NULL, &t1895_TI, &t1894_0_0_0, RuntimeInvoker_t1894, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1895_MIs[] =
{
	&m23729_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t1895_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1895_0_0_0;
extern Il2CppType t1895_1_0_0;
struct t1895;
extern TypeInfo t1895_TI;
extern Il2CppGenericClass t1895_GC;
TypeInfo t1895_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t1895_MIs, t1895_PIs, NULL, NULL, NULL, NULL, NULL, &t1895_TI, t1895_ITIs, NULL, &EmptyCustomAttributesCache, &t1895_TI, &t1895_0_0_0, &t1895_1_0_0, NULL, &t1895_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1894_TI;

extern TypeInfo t1894_TI;
extern TypeInfo t443_TI;
extern TypeInfo t33_TI;
extern TypeInfo t14_TI;
extern TypeInfo t35_TI;
extern MethodInfo m10066_MI;
extern MethodInfo m10068_MI;
extern MethodInfo m10065_MI;
extern MethodInfo m72_MI;
extern MethodInfo m10067_MI;
extern MethodInfo m3448_MI;


extern MethodInfo m10064_MI;
 void m10064 (t1894 * __this, t14 * p0, int32_t p1, MethodInfo* method){
	{
		m10066(__this, p0, &m10066_MI);
		m10068(__this, p1, &m10068_MI);
		return;
	}
}
extern MethodInfo m10065_MI;
 t14 * m10065 (t1894 * __this, MethodInfo* method){
	{
		t14 * L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m10066_MI;
 void m10066 (t1894 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m10067_MI;
 int32_t m10067 (t1894 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m10068_MI;
 void m10068 (t1894 * __this, int32_t p0, MethodInfo* method){
	{
		__this->f1 = p0;
		return;
	}
}
extern MethodInfo m10069_MI;
 t33* m10069 (t1894 * __this, MethodInfo* method){
	t14 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	t443* G_B2_1 = {0};
	t443* G_B2_2 = {0};
	int32_t G_B1_0 = 0;
	t443* G_B1_1 = {0};
	t443* G_B1_2 = {0};
	t33* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	t443* G_B3_2 = {0};
	t443* G_B3_3 = {0};
	int32_t G_B5_0 = 0;
	t443* G_B5_1 = {0};
	t443* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	t443* G_B4_1 = {0};
	t443* G_B4_2 = {0};
	t33* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	t443* G_B6_2 = {0};
	t443* G_B6_3 = {0};
	{
		t443* L_0 = ((t443*)SZArrayNew(InitializedTypeInfo(&t443_TI), 5));
		ArrayElementTypeCheck (L_0, (t33*) &_stringLiteral174);
		*((t33**)(t33**)SZArrayLdElema(L_0, 0)) = (t33*)(t33*) &_stringLiteral174;
		t443* L_1 = L_0;
		t14 * L_2 = m10065(__this, &m10065_MI);
		t14 * L_3 = L_2;
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!((t14 *)L_3))
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0033;
		}
	}
	{
		t14 * L_4 = m10065(__this, &m10065_MI);
		V_0 = L_4;
		t33* L_5 = (t33*)VirtFuncInvoker0< t33* >::Invoke(&m72_MI, (*(&V_0)));
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0038;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t33_TI));
		G_B3_0 = (((t33_SFs*)(&t33_TI)->static_fields)->f2);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0038:
	{
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((t33**)(t33**)SZArrayLdElema(G_B3_2, G_B3_1)) = (t33*)G_B3_0;
		t443* L_6 = G_B3_3;
		ArrayElementTypeCheck (L_6, (t33*) &_stringLiteral183);
		*((t33**)(t33**)SZArrayLdElema(L_6, 2)) = (t33*)(t33*) &_stringLiteral183;
		t443* L_7 = L_6;
		int32_t L_8 = m10067(__this, &m10067_MI);
		int32_t L_9 = L_8;
		t14 * L_10 = Box(InitializedTypeInfo(&t35_TI), &L_9);
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
		if (!L_10)
		{
			G_B5_0 = 3;
			G_B5_1 = L_7;
			G_B5_2 = L_7;
			goto IL_0066;
		}
	}
	{
		int32_t L_11 = m10067(__this, &m10067_MI);
		V_1 = L_11;
		t33* L_12 = (t33*)VirtFuncInvoker0< t33* >::Invoke(&m72_MI, Box(InitializedTypeInfo(&t35_TI), &(*(&V_1))));
		G_B6_0 = L_12;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_006b;
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t33_TI));
		G_B6_0 = (((t33_SFs*)(&t33_TI)->static_fields)->f2);
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_006b:
	{
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		*((t33**)(t33**)SZArrayLdElema(G_B6_2, G_B6_1)) = (t33*)G_B6_0;
		t443* L_13 = G_B6_3;
		ArrayElementTypeCheck (L_13, (t33*) &_stringLiteral175);
		*((t33**)(t33**)SZArrayLdElema(L_13, 4)) = (t33*)(t33*) &_stringLiteral175;
		IL2CPP_RUNTIME_CLASS_INIT((&t33_TI));
		t33* L_14 = m3448(NULL, L_13, &m3448_MI);
		return L_14;
	}
}
// Metadata Definition System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
extern Il2CppType t14_0_0_1;
FieldInfo t1894_f0_FieldInfo = 
{
	"key", &t14_0_0_1, &t1894_TI, offsetof(t1894, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t1894_f1_FieldInfo = 
{
	"value", &t35_0_0_1, &t1894_TI, offsetof(t1894, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t1894_FIs[] =
{
	&t1894_f0_FieldInfo,
	&t1894_f1_FieldInfo,
	NULL
};
extern MethodInfo m10065_MI;
extern MethodInfo m10066_MI;
static PropertyInfo t1894____Key_PropertyInfo = 
{
	&t1894_TI, "Key", &m10065_MI, &m10066_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10067_MI;
extern MethodInfo m10068_MI;
static PropertyInfo t1894____Value_PropertyInfo = 
{
	&t1894_TI, "Value", &m10067_MI, &m10068_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1894_PIs[] =
{
	&t1894____Key_PropertyInfo,
	&t1894____Value_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t1894_m10064_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1894_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10064_MI = 
{
	".ctor", (methodPointerType)&m10064, &t1894_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t1894_m10064_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1894_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10065_MI = 
{
	"get_Key", (methodPointerType)&m10065, &t1894_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1894_m10066_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1894_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10066_MI = 
{
	"set_Key", (methodPointerType)&m10066, &t1894_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1894_m10066_ParameterInfos, &EmptyCustomAttributesCache, 2177, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1894_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10067_MI = 
{
	"get_Value", (methodPointerType)&m10067, &t1894_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1894_m10068_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1894_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10068_MI = 
{
	"set_Value", (methodPointerType)&m10068, &t1894_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t1894_m10068_ParameterInfos, &EmptyCustomAttributesCache, 2177, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1894_TI;
extern Il2CppType t33_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10069_MI = 
{
	"ToString", (methodPointerType)&m10069, &t1894_TI, &t33_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1894_MIs[] =
{
	&m10064_MI,
	&m10065_MI,
	&m10066_MI,
	&m10067_MI,
	&m10068_MI,
	&m10069_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m10069_MI;
static MethodInfo* t1894_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m10069_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1894_0_0_0;
extern Il2CppType t1894_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t1894_TI;
extern Il2CppGenericClass t1894_GC;
extern CustomAttributesCache t846__CustomAttributeCache;
TypeInfo t1894_TI = 
{
	&g_mscorlib_dll_Image, NULL, "KeyValuePair`2", "System.Collections.Generic", t1894_MIs, t1894_PIs, t1894_FIs, NULL, &t122_TI, NULL, NULL, &t1894_TI, NULL, t1894_VT, &t846__CustomAttributeCache, &t1894_TI, &t1894_0_0_0, &t1894_1_0_0, NULL, &t1894_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1894)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057033, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 2, 0, 0, 4, 0, 0};
#include "t1897.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1897_TI;
#include "t1897MD.h"

#include "t1278.h"
extern TypeInfo t1897_TI;
extern TypeInfo t1894_TI;
extern TypeInfo t1278_TI;
#include "t1278MD.h"
extern MethodInfo m10074_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m17581_MI;
struct t24;
 t1894  m17581 (t24 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17581_MI;


extern MethodInfo m10070_MI;
 void m10070 (t1897 * __this, t24 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m10071_MI;
 t14 * m10071 (t1897 * __this, MethodInfo* method){
	{
		t1894  L_0 = m10074(__this, &m10074_MI);
		t1894  L_1 = L_0;
		t14 * L_2 = Box(InitializedTypeInfo(&t1894_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m10072_MI;
 void m10072 (t1897 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m10073_MI;
 bool m10073 (t1897 * __this, MethodInfo* method){
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
extern MethodInfo m10074_MI;
 t1894  m10074 (t1897 * __this, MethodInfo* method){
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
		t1894  L_8 = m17581(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m17581_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
extern Il2CppType t24_0_0_1;
FieldInfo t1897_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t1897_TI, offsetof(t1897, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t1897_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t1897_TI, offsetof(t1897, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t1897_FIs[] =
{
	&t1897_f0_FieldInfo,
	&t1897_f1_FieldInfo,
	NULL
};
extern MethodInfo m10071_MI;
static PropertyInfo t1897____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1897_TI, "System.Collections.IEnumerator.Current", &m10071_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10074_MI;
static PropertyInfo t1897____Current_PropertyInfo = 
{
	&t1897_TI, "Current", &m10074_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1897_PIs[] =
{
	&t1897____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1897____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t1897_m10070_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t1897_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10070_MI = 
{
	".ctor", (methodPointerType)&m10070, &t1897_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1897_m10070_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1897_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10071_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m10071, &t1897_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1897_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10072_MI = 
{
	"Dispose", (methodPointerType)&m10072, &t1897_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1897_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10073_MI = 
{
	"MoveNext", (methodPointerType)&m10073, &t1897_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1897_TI;
extern Il2CppType t1894_0_0_0;
extern void* RuntimeInvoker_t1894 (MethodInfo* method, void* obj, void** args);
MethodInfo m10074_MI = 
{
	"get_Current", (methodPointerType)&m10074, &t1897_TI, &t1894_0_0_0, RuntimeInvoker_t1894, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1897_MIs[] =
{
	&m10070_MI,
	&m10071_MI,
	&m10072_MI,
	&m10073_MI,
	&m10074_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m10071_MI;
extern MethodInfo m10073_MI;
extern MethodInfo m10072_MI;
extern MethodInfo m10074_MI;
static MethodInfo* t1897_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m10071_MI,
	&m10073_MI,
	&m10072_MI,
	&m10074_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t1895_TI;
static TypeInfo* t1897_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t1895_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t1895_TI;
static Il2CppInterfaceOffsetPair t1897_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t1895_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1897_0_0_0;
extern Il2CppType t1897_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t1897_TI;
extern Il2CppGenericClass t1897_GC;
extern TypeInfo t24_TI;
TypeInfo t1897_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1897_MIs, t1897_PIs, t1897_FIs, NULL, &t122_TI, NULL, &t24_TI, &t1897_TI, t1897_ITIs, t1897_VT, &EmptyCustomAttributesCache, &t1897_TI, &t1897_0_0_0, &t1897_1_0_0, t1897_IOs, &t1897_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1897)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3991_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
extern MethodInfo m23730_MI;
extern MethodInfo m23731_MI;
static PropertyInfo t3991____Item_PropertyInfo = 
{
	&t3991_TI, "Item", &m23730_MI, &m23731_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3991_PIs[] =
{
	&t3991____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1894_0_0_0;
static ParameterInfo t3991_m23732_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1894_0_0_0},
};
extern TypeInfo t3991_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t1894 (MethodInfo* method, void* obj, void** args);
MethodInfo m23732_MI = 
{
	"IndexOf", NULL, &t3991_TI, &t35_0_0_0, RuntimeInvoker_t35_t1894, t3991_m23732_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1894_0_0_0;
static ParameterInfo t3991_m23733_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1894_0_0_0},
};
extern TypeInfo t3991_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t1894 (MethodInfo* method, void* obj, void** args);
MethodInfo m23733_MI = 
{
	"Insert", NULL, &t3991_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t1894, t3991_m23733_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t3991_m23734_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t3991_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m23734_MI = 
{
	"RemoveAt", NULL, &t3991_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t3991_m23734_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t3991_m23730_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t3991_TI;
extern Il2CppType t1894_0_0_0;
extern void* RuntimeInvoker_t1894_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m23730_MI = 
{
	"get_Item", NULL, &t3991_TI, &t1894_0_0_0, RuntimeInvoker_t1894_t35, t3991_m23730_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1894_0_0_0;
static ParameterInfo t3991_m23731_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1894_0_0_0},
};
extern TypeInfo t3991_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t1894 (MethodInfo* method, void* obj, void** args);
MethodInfo m23731_MI = 
{
	"set_Item", NULL, &t3991_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t1894, t3991_m23731_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3991_MIs[] =
{
	&m23732_MI,
	&m23733_MI,
	&m23734_MI,
	&m23730_MI,
	&m23731_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t3990_TI;
extern TypeInfo t3992_TI;
static TypeInfo* t3991_ITIs[] = 
{
	&t600_TI,
	&t3990_TI,
	&t3992_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3991_0_0_0;
extern Il2CppType t3991_1_0_0;
struct t3991;
extern TypeInfo t3991_TI;
extern Il2CppGenericClass t3991_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t3991_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t3991_MIs, t3991_PIs, NULL, NULL, NULL, NULL, NULL, &t3991_TI, t3991_ITIs, NULL, &t1409__CustomAttributeCache, &t3991_TI, &t3991_0_0_0, &t3991_1_0_0, NULL, &t3991_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5153_TI;



// Metadata Definition System.Collections.Generic.IDictionary`2<System.Object,System.Int32>
extern Il2CppType t14_0_0_0;
static ParameterInfo t5153_m23735_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t5153_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23735_MI = 
{
	"Remove", NULL, &t5153_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t5153_m23735_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5153_MIs[] =
{
	&m23735_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t3990_TI;
extern TypeInfo t3992_TI;
static TypeInfo* t5153_ITIs[] = 
{
	&t600_TI,
	&t3990_TI,
	&t3992_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5153_0_0_0;
extern Il2CppType t5153_1_0_0;
struct t5153;
extern TypeInfo t5153_TI;
extern Il2CppGenericClass t5153_GC;
extern CustomAttributesCache t1469__CustomAttributeCache;
TypeInfo t5153_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IDictionary`2", "System.Collections.Generic", t5153_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5153_TI, t5153_ITIs, NULL, &t1469__CustomAttributeCache, &t5153_TI, &t5153_0_0_0, &t5153_1_0_0, NULL, &t5153_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1892_TI;

#include "t1899.h"
#include "t1900.h"
extern TypeInfo t1892_TI;
extern TypeInfo t651_TI;
extern TypeInfo t14_TI;
extern TypeInfo t1889_TI;
extern TypeInfo t35_TI;
extern TypeInfo t338_TI;
extern TypeInfo t345_TI;
extern TypeInfo t1899_TI;
extern TypeInfo t51_TI;
extern TypeInfo t25_TI;
extern TypeInfo t1900_TI;
#include "t1900MD.h"
#include "t1899MD.h"
extern MethodInfo m7415_MI;
extern MethodInfo m10041_MI;
extern MethodInfo m73_MI;
extern MethodInfo m2974_MI;
extern MethodInfo m7027_MI;
extern MethodInfo m10053_MI;
extern MethodInfo m10087_MI;
extern MethodInfo m10086_MI;
extern MethodInfo m10045_MI;
extern MethodInfo m10047_MI;
extern MethodInfo m10105_MI;
extern MethodInfo m17592_MI;
extern MethodInfo m17593_MI;
extern MethodInfo m10089_MI;
struct t1889;
 void m17592 (t1889 * __this, t24 * p0, int32_t p1, t1900 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17592_MI;
struct t1889;
 void m17593 (t1889 * __this, t51* p0, int32_t p1, t1900 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17593_MI;


extern MethodInfo m10075_MI;
 void m10075 (t1892 * __this, t1889 * p0, MethodInfo* method){
	{
		m73(__this, &m73_MI);
		if (p0)
		{
			goto IL_0014;
		}
	}
	{
		t338 * L_0 = (t338 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t338_TI));
		m2974(L_0, (t33*) &_stringLiteral549, &m2974_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_0014:
	{
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m10076_MI;
 void m10076 (t1892 * __this, int32_t p0, MethodInfo* method){
	{
		t345 * L_0 = (t345 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t345_TI));
		m7027(L_0, (t33*) &_stringLiteral550, &m7027_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m10077_MI;
 void m10077 (t1892 * __this, MethodInfo* method){
	{
		t345 * L_0 = (t345 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t345_TI));
		m7027(L_0, (t33*) &_stringLiteral550, &m7027_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m10078_MI;
 bool m10078 (t1892 * __this, int32_t p0, MethodInfo* method){
	{
		t1889 * L_0 = (__this->f0);
		bool L_1 = m10053(L_0, p0, &m10053_MI);
		return L_1;
	}
}
extern MethodInfo m10079_MI;
 bool m10079 (t1892 * __this, int32_t p0, MethodInfo* method){
	{
		t345 * L_0 = (t345 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t345_TI));
		m7027(L_0, (t33*) &_stringLiteral550, &m7027_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m10080_MI;
 t14* m10080 (t1892 * __this, MethodInfo* method){
	{
		t1899  L_0 = m10087(__this, &m10087_MI);
		t1899  L_1 = L_0;
		t14 * L_2 = Box(InitializedTypeInfo(&t1899_TI), &L_1);
		return (t14*)L_2;
	}
}
extern MethodInfo m10081_MI;
 void m10081 (t1892 * __this, t24 * p0, int32_t p1, MethodInfo* method){
	t51* V_0 = {0};
	{
		V_0 = ((t51*)IsInst(p0, InitializedTypeInfo(&t51_TI)));
		if (!V_0)
		{
			goto IL_0013;
		}
	}
	{
		VirtActionInvoker2< t51*, int32_t >::Invoke(&m10086_MI, __this, V_0, p1);
		return;
	}

IL_0013:
	{
		t1889 * L_0 = (__this->f0);
		m10045(L_0, p0, p1, &m10045_MI);
		t1889 * L_1 = (__this->f0);
		t77 L_2 = { &m10047_MI };
		t1900 * L_3 = (t1900 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1900_TI));
		m10105(L_3, NULL, L_2, &m10105_MI);
		m17592(L_1, p0, p1, L_3, &m17592_MI);
		return;
	}
}
extern MethodInfo m10082_MI;
 t14 * m10082 (t1892 * __this, MethodInfo* method){
	{
		t1899  L_0 = m10087(__this, &m10087_MI);
		t1899  L_1 = L_0;
		t14 * L_2 = Box(InitializedTypeInfo(&t1899_TI), &L_1);
		return (t14 *)L_2;
	}
}
extern MethodInfo m10083_MI;
 bool m10083 (t1892 * __this, MethodInfo* method){
	{
		return 1;
	}
}
extern MethodInfo m10084_MI;
 bool m10084 (t1892 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m10085_MI;
 t14 * m10085 (t1892 * __this, MethodInfo* method){
	{
		t1889 * L_0 = (__this->f0);
		t14 * L_1 = (t14 *)InterfaceFuncInvoker0< t14 * >::Invoke(&m7415_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m10086_MI;
 void m10086 (t1892 * __this, t51* p0, int32_t p1, MethodInfo* method){
	{
		t1889 * L_0 = (__this->f0);
		m10045(L_0, (t24 *)(t24 *)p0, p1, &m10045_MI);
		t1889 * L_1 = (__this->f0);
		t77 L_2 = { &m10047_MI };
		t1900 * L_3 = (t1900 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1900_TI));
		m10105(L_3, NULL, L_2, &m10105_MI);
		m17593(L_1, p0, p1, L_3, &m17593_MI);
		return;
	}
}
extern MethodInfo m10087_MI;
 t1899  m10087 (t1892 * __this, MethodInfo* method){
	{
		t1889 * L_0 = (__this->f0);
		t1899  L_1 = {0};
		m10089(&L_1, L_0, &m10089_MI);
		return L_1;
	}
}
extern MethodInfo m10088_MI;
 int32_t m10088 (t1892 * __this, MethodInfo* method){
	{
		t1889 * L_0 = (__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m10041_MI, L_0);
		return L_1;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
extern Il2CppType t1889_0_0_1;
FieldInfo t1892_f0_FieldInfo = 
{
	"dictionary", &t1889_0_0_1, &t1892_TI, offsetof(t1892, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1892_FIs[] =
{
	&t1892_f0_FieldInfo,
	NULL
};
extern MethodInfo m10083_MI;
static PropertyInfo t1892____System_Collections_Generic_ICollectionU3CTValueU3E_IsReadOnly_PropertyInfo = 
{
	&t1892_TI, "System.Collections.Generic.ICollection<TValue>.IsReadOnly", &m10083_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10084_MI;
static PropertyInfo t1892____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t1892_TI, "System.Collections.ICollection.IsSynchronized", &m10084_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10085_MI;
static PropertyInfo t1892____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t1892_TI, "System.Collections.ICollection.SyncRoot", &m10085_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10088_MI;
static PropertyInfo t1892____Count_PropertyInfo = 
{
	&t1892_TI, "Count", &m10088_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1892_PIs[] =
{
	&t1892____System_Collections_Generic_ICollectionU3CTValueU3E_IsReadOnly_PropertyInfo,
	&t1892____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t1892____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t1892____Count_PropertyInfo,
	NULL
};
extern Il2CppType t1889_0_0_0;
static ParameterInfo t1892_m10075_ParameterInfos[] = 
{
	{"dictionary", 0, 134217728, &EmptyCustomAttributesCache, &t1889_0_0_0},
};
extern TypeInfo t1892_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10075_MI = 
{
	".ctor", (methodPointerType)&m10075, &t1892_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1892_m10075_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1892_m10076_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1892_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10076_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Add", (methodPointerType)&m10076, &t1892_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t1892_m10076_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1892_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10077_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Clear", (methodPointerType)&m10077, &t1892_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 481, 0, 12, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1892_m10078_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1892_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10078_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Contains", (methodPointerType)&m10078, &t1892_TI, &t26_0_0_0, RuntimeInvoker_t26_t35, t1892_m10078_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1892_m10079_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1892_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10079_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Remove", (methodPointerType)&m10079, &t1892_TI, &t26_0_0_0, RuntimeInvoker_t26_t35, t1892_m10079_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1892_TI;
extern Il2CppType t1898_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10080_MI = 
{
	"System.Collections.Generic.IEnumerable<TValue>.GetEnumerator", (methodPointerType)&m10080, &t1892_TI, &t1898_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 481, 0, 16, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t24_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t1892_m10081_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1892_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10081_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m10081, &t1892_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t1892_m10081_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1892_TI;
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10082_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m10082, &t1892_TI, &t36_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1892_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10083_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.get_IsReadOnly", (methodPointerType)&m10083, &t1892_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1892_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10084_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m10084, &t1892_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1892_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10085_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m10085, &t1892_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t51_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t1892_m10086_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t51_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1892_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10086_MI = 
{
	"CopyTo", (methodPointerType)&m10086, &t1892_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t1892_m10086_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 14, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1892_TI;
extern Il2CppType t1899_0_0_0;
extern void* RuntimeInvoker_t1899 (MethodInfo* method, void* obj, void** args);
MethodInfo m10087_MI = 
{
	"GetEnumerator", (methodPointerType)&m10087, &t1892_TI, &t1899_0_0_0, RuntimeInvoker_t1899, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1892_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10088_MI = 
{
	"get_Count", (methodPointerType)&m10088, &t1892_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 2534, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1892_MIs[] =
{
	&m10075_MI,
	&m10076_MI,
	&m10077_MI,
	&m10078_MI,
	&m10079_MI,
	&m10080_MI,
	&m10081_MI,
	&m10082_MI,
	&m10083_MI,
	&m10084_MI,
	&m10085_MI,
	&m10086_MI,
	&m10087_MI,
	&m10088_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m10082_MI;
extern MethodInfo m10088_MI;
extern MethodInfo m10084_MI;
extern MethodInfo m10085_MI;
extern MethodInfo m10081_MI;
extern MethodInfo m10088_MI;
extern MethodInfo m10083_MI;
extern MethodInfo m10076_MI;
extern MethodInfo m10077_MI;
extern MethodInfo m10078_MI;
extern MethodInfo m10086_MI;
extern MethodInfo m10079_MI;
extern MethodInfo m10080_MI;
static MethodInfo* t1892_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m10082_MI,
	&m10088_MI,
	&m10084_MI,
	&m10085_MI,
	&m10081_MI,
	&m10088_MI,
	&m10083_MI,
	&m10076_MI,
	&m10077_MI,
	&m10078_MI,
	&m10086_MI,
	&m10079_MI,
	&m10080_MI,
};
extern TypeInfo t600_TI;
extern TypeInfo t651_TI;
extern TypeInfo t3808_TI;
extern TypeInfo t3810_TI;
static TypeInfo* t1892_ITIs[] = 
{
	&t600_TI,
	&t651_TI,
	&t3808_TI,
	&t3810_TI,
};
extern TypeInfo t600_TI;
extern TypeInfo t651_TI;
extern TypeInfo t3808_TI;
extern TypeInfo t3810_TI;
static Il2CppInterfaceOffsetPair t1892_IOs[] = 
{
	{ &t600_TI, 4},
	{ &t651_TI, 5},
	{ &t3808_TI, 9},
	{ &t3810_TI, 16},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1892_0_0_0;
extern Il2CppType t1892_1_0_0;
extern TypeInfo t14_TI;
struct t1892;
extern TypeInfo t1892_TI;
extern Il2CppGenericClass t1892_GC;
extern TypeInfo t841_TI;
extern CustomAttributesCache t839__CustomAttributeCache;
TypeInfo t1892_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ValueCollection", "", t1892_MIs, t1892_PIs, t1892_FIs, NULL, &t14_TI, NULL, &t841_TI, &t1892_TI, t1892_ITIs, t1892_VT, &t839__CustomAttributeCache, &t1892_TI, &t1892_0_0_0, &t1892_1_0_0, t1892_IOs, &t1892_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1892), 0, -1, 0, 0, -1, 1057026, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 14, 4, 1, 0, 0, 17, 4, 4};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1899_TI;

extern TypeInfo t1899_TI;
extern TypeInfo t35_TI;
extern TypeInfo t1896_TI;
extern TypeInfo t25_TI;
extern TypeInfo t26_TI;
extern MethodInfo m10101_MI;
extern MethodInfo m10067_MI;
extern MethodInfo m10062_MI;
extern MethodInfo m10104_MI;
extern MethodInfo m10098_MI;


extern MethodInfo m10089_MI;
 void m10089 (t1899 * __this, t1889 * p0, MethodInfo* method){
	{
		t1896  L_0 = m10062(p0, &m10062_MI);
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m10090_MI;
 t14 * m10090 (t1899 * __this, MethodInfo* method){
	{
		t1896 * L_0 = &(__this->f0);
		int32_t L_1 = m10101(L_0, &m10101_MI);
		int32_t L_2 = L_1;
		t14 * L_3 = Box(InitializedTypeInfo(&t35_TI), &L_2);
		return L_3;
	}
}
extern MethodInfo m10091_MI;
 void m10091 (t1899 * __this, MethodInfo* method){
	{
		t1896 * L_0 = &(__this->f0);
		m10104(L_0, &m10104_MI);
		return;
	}
}
extern MethodInfo m10092_MI;
 bool m10092 (t1899 * __this, MethodInfo* method){
	{
		t1896 * L_0 = &(__this->f0);
		bool L_1 = m10098(L_0, &m10098_MI);
		return L_1;
	}
}
extern MethodInfo m10093_MI;
 int32_t m10093 (t1899 * __this, MethodInfo* method){
	{
		t1896 * L_0 = &(__this->f0);
		t1894 * L_1 = &(L_0->f3);
		int32_t L_2 = m10067(L_1, &m10067_MI);
		return L_2;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>
extern Il2CppType t1896_0_0_1;
FieldInfo t1899_f0_FieldInfo = 
{
	"host_enumerator", &t1896_0_0_1, &t1899_TI, offsetof(t1899, f0) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t1899_FIs[] =
{
	&t1899_f0_FieldInfo,
	NULL
};
extern MethodInfo m10090_MI;
static PropertyInfo t1899____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1899_TI, "System.Collections.IEnumerator.Current", &m10090_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10093_MI;
static PropertyInfo t1899____Current_PropertyInfo = 
{
	&t1899_TI, "Current", &m10093_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1899_PIs[] =
{
	&t1899____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1899____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1889_0_0_0;
static ParameterInfo t1899_m10089_ParameterInfos[] = 
{
	{"host", 0, 134217728, &EmptyCustomAttributesCache, &t1889_0_0_0},
};
extern TypeInfo t1899_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10089_MI = 
{
	".ctor", (methodPointerType)&m10089, &t1899_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1899_m10089_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1899_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10090_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m10090, &t1899_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1899_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10091_MI = 
{
	"Dispose", (methodPointerType)&m10091, &t1899_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1899_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10092_MI = 
{
	"MoveNext", (methodPointerType)&m10092, &t1899_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1899_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10093_MI = 
{
	"get_Current", (methodPointerType)&m10093, &t1899_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1899_MIs[] =
{
	&m10089_MI,
	&m10090_MI,
	&m10091_MI,
	&m10092_MI,
	&m10093_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m10090_MI;
extern MethodInfo m10092_MI;
extern MethodInfo m10091_MI;
extern MethodInfo m10093_MI;
static MethodInfo* t1899_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m10090_MI,
	&m10092_MI,
	&m10091_MI,
	&m10093_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t1898_TI;
static TypeInfo* t1899_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t1898_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t1898_TI;
static Il2CppInterfaceOffsetPair t1899_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t1898_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1899_0_0_0;
extern Il2CppType t1899_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t1899_TI;
extern Il2CppGenericClass t1899_GC;
extern TypeInfo t839_TI;
TypeInfo t1899_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t1899_MIs, t1899_PIs, t1899_FIs, NULL, &t122_TI, NULL, &t839_TI, &t1899_TI, t1899_ITIs, t1899_VT, &EmptyCustomAttributesCache, &t1899_TI, &t1899_0_0_0, &t1899_1_0_0, t1899_IOs, &t1899_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1899)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 1, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1896_TI;

#include "t1295.h"
extern TypeInfo t1896_TI;
extern TypeInfo t1894_TI;
extern TypeInfo t14_TI;
extern TypeInfo t35_TI;
extern TypeInfo t836_TI;
extern TypeInfo t1889_TI;
extern TypeInfo t834_TI;
extern TypeInfo t1295_TI;
extern TypeInfo t1278_TI;
#include "t1295MD.h"
extern MethodInfo m10103_MI;
extern MethodInfo m10065_MI;
extern MethodInfo m10067_MI;
extern MethodInfo m4371_MI;
extern MethodInfo m10100_MI;
extern MethodInfo m10102_MI;
extern MethodInfo m10064_MI;
extern MethodInfo m7129_MI;
extern MethodInfo m6925_MI;


extern MethodInfo m10094_MI;
 void m10094 (t1896 * __this, t1889 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		int32_t L_0 = (p0->f14);
		__this->f2 = L_0;
		return;
	}
}
extern MethodInfo m10095_MI;
 t14 * m10095 (t1896 * __this, MethodInfo* method){
	{
		m10103(__this, &m10103_MI);
		t1894  L_0 = (__this->f3);
		t1894  L_1 = L_0;
		t14 * L_2 = Box(InitializedTypeInfo(&t1894_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m10096_MI;
 t836  m10096 (t1896 * __this, MethodInfo* method){
	{
		m10103(__this, &m10103_MI);
		t1894 * L_0 = &(__this->f3);
		t14 * L_1 = m10065(L_0, &m10065_MI);
		t14 * L_2 = L_1;
		t1894 * L_3 = &(__this->f3);
		int32_t L_4 = m10067(L_3, &m10067_MI);
		int32_t L_5 = L_4;
		t14 * L_6 = Box(InitializedTypeInfo(&t35_TI), &L_5);
		t836  L_7 = {0};
		m4371(&L_7, ((t14 *)L_2), L_6, &m4371_MI);
		return L_7;
	}
}
extern MethodInfo m10097_MI;
 t14 * m10097 (t1896 * __this, MethodInfo* method){
	{
		t14 * L_0 = m10100(__this, &m10100_MI);
		t14 * L_1 = L_0;
		return ((t14 *)L_1);
	}
}
extern MethodInfo m10098_MI;
 bool m10098 (t1896 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		m10102(__this, &m10102_MI);
		int32_t L_0 = (__this->f1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		goto IL_0072;
	}

IL_0013:
	{
		int32_t L_1 = (__this->f1);
		int32_t L_2 = L_1;
		V_1 = L_2;
		__this->f1 = ((int32_t)(L_2+1));
		V_0 = V_1;
		t1889 * L_3 = (__this->f0);
		t1459* L_4 = (L_3->f5);
		int32_t L_5 = (((t834 *)(t834 *)SZArrayLdElema(L_4, V_0))->f0);
		if (!((int32_t)(L_5&((int32_t)-2147483648))))
		{
			goto IL_0072;
		}
	}
	{
		t1889 * L_6 = (__this->f0);
		t40* L_7 = (L_6->f6);
		t1889 * L_8 = (__this->f0);
		t51* L_9 = (L_8->f7);
		t1894  L_10 = {0};
		m10064(&L_10, (*(t14 **)(t14 **)SZArrayLdElema(L_7, V_0)), (*(int32_t*)(int32_t*)SZArrayLdElema(L_9, V_0)), &m10064_MI);
		__this->f3 = L_10;
		return 1;
	}

IL_0072:
	{
		int32_t L_11 = (__this->f1);
		t1889 * L_12 = (__this->f0);
		int32_t L_13 = (L_12->f8);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0013;
		}
	}
	{
		__this->f1 = (-1);
		return 0;
	}
}
extern MethodInfo m10099_MI;
 t1894  m10099 (t1896 * __this, MethodInfo* method){
	{
		t1894  L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m10100_MI;
 t14 * m10100 (t1896 * __this, MethodInfo* method){
	{
		m10103(__this, &m10103_MI);
		t1894 * L_0 = &(__this->f3);
		t14 * L_1 = m10065(L_0, &m10065_MI);
		return L_1;
	}
}
extern MethodInfo m10101_MI;
 int32_t m10101 (t1896 * __this, MethodInfo* method){
	{
		m10103(__this, &m10103_MI);
		t1894 * L_0 = &(__this->f3);
		int32_t L_1 = m10067(L_0, &m10067_MI);
		return L_1;
	}
}
extern MethodInfo m10102_MI;
 void m10102 (t1896 * __this, MethodInfo* method){
	{
		t1889 * L_0 = (__this->f0);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		t1295 * L_1 = (t1295 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1295_TI));
		m7129(L_1, (t33*)NULL, &m7129_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_000f:
	{
		t1889 * L_2 = (__this->f0);
		int32_t L_3 = (L_2->f14);
		int32_t L_4 = (__this->f2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_002d;
		}
	}
	{
		t1278 * L_5 = (t1278 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1278_TI));
		m6925(L_5, (t33*) &_stringLiteral547, &m6925_MI);
		il2cpp_codegen_raise_exception (L_5);
	}

IL_002d:
	{
		return;
	}
}
extern MethodInfo m10103_MI;
 void m10103 (t1896 * __this, MethodInfo* method){
	{
		m10102(__this, &m10102_MI);
		int32_t L_0 = (__this->f1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		t1278 * L_1 = (t1278 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1278_TI));
		m6925(L_1, (t33*) &_stringLiteral548, &m6925_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_001a:
	{
		return;
	}
}
extern MethodInfo m10104_MI;
 void m10104 (t1896 * __this, MethodInfo* method){
	{
		__this->f0 = (t1889 *)NULL;
		return;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
extern Il2CppType t1889_0_0_1;
FieldInfo t1896_f0_FieldInfo = 
{
	"dictionary", &t1889_0_0_1, &t1896_TI, offsetof(t1896, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t1896_f1_FieldInfo = 
{
	"next", &t35_0_0_1, &t1896_TI, offsetof(t1896, f1) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t1896_f2_FieldInfo = 
{
	"stamp", &t35_0_0_1, &t1896_TI, offsetof(t1896, f2) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t1894_0_0_3;
FieldInfo t1896_f3_FieldInfo = 
{
	"current", &t1894_0_0_3, &t1896_TI, offsetof(t1896, f3) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t1896_FIs[] =
{
	&t1896_f0_FieldInfo,
	&t1896_f1_FieldInfo,
	&t1896_f2_FieldInfo,
	&t1896_f3_FieldInfo,
	NULL
};
extern MethodInfo m10095_MI;
static PropertyInfo t1896____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1896_TI, "System.Collections.IEnumerator.Current", &m10095_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10096_MI;
static PropertyInfo t1896____System_Collections_IDictionaryEnumerator_Entry_PropertyInfo = 
{
	&t1896_TI, "System.Collections.IDictionaryEnumerator.Entry", &m10096_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10097_MI;
static PropertyInfo t1896____System_Collections_IDictionaryEnumerator_Key_PropertyInfo = 
{
	&t1896_TI, "System.Collections.IDictionaryEnumerator.Key", &m10097_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10099_MI;
static PropertyInfo t1896____Current_PropertyInfo = 
{
	&t1896_TI, "Current", &m10099_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10100_MI;
static PropertyInfo t1896____CurrentKey_PropertyInfo = 
{
	&t1896_TI, "CurrentKey", &m10100_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10101_MI;
static PropertyInfo t1896____CurrentValue_PropertyInfo = 
{
	&t1896_TI, "CurrentValue", &m10101_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1896_PIs[] =
{
	&t1896____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1896____System_Collections_IDictionaryEnumerator_Entry_PropertyInfo,
	&t1896____System_Collections_IDictionaryEnumerator_Key_PropertyInfo,
	&t1896____Current_PropertyInfo,
	&t1896____CurrentKey_PropertyInfo,
	&t1896____CurrentValue_PropertyInfo,
	NULL
};
extern Il2CppType t1889_0_0_0;
static ParameterInfo t1896_m10094_ParameterInfos[] = 
{
	{"dictionary", 0, 134217728, &EmptyCustomAttributesCache, &t1889_0_0_0},
};
extern TypeInfo t1896_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10094_MI = 
{
	".ctor", (methodPointerType)&m10094, &t1896_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1896_m10094_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1896_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10095_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m10095, &t1896_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1896_TI;
extern Il2CppType t836_0_0_0;
extern void* RuntimeInvoker_t836 (MethodInfo* method, void* obj, void** args);
MethodInfo m10096_MI = 
{
	"System.Collections.IDictionaryEnumerator.get_Entry", (methodPointerType)&m10096, &t1896_TI, &t836_0_0_0, RuntimeInvoker_t836, NULL, &EmptyCustomAttributesCache, 2529, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1896_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10097_MI = 
{
	"System.Collections.IDictionaryEnumerator.get_Key", (methodPointerType)&m10097, &t1896_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1896_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10098_MI = 
{
	"MoveNext", (methodPointerType)&m10098, &t1896_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1896_TI;
extern Il2CppType t1894_0_0_0;
extern void* RuntimeInvoker_t1894 (MethodInfo* method, void* obj, void** args);
MethodInfo m10099_MI = 
{
	"get_Current", (methodPointerType)&m10099, &t1896_TI, &t1894_0_0_0, RuntimeInvoker_t1894, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1896_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10100_MI = 
{
	"get_CurrentKey", (methodPointerType)&m10100, &t1896_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1896_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10101_MI = 
{
	"get_CurrentValue", (methodPointerType)&m10101, &t1896_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1896_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10102_MI = 
{
	"VerifyState", (methodPointerType)&m10102, &t1896_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1896_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10103_MI = 
{
	"VerifyCurrent", (methodPointerType)&m10103, &t1896_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1896_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10104_MI = 
{
	"Dispose", (methodPointerType)&m10104, &t1896_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1896_MIs[] =
{
	&m10094_MI,
	&m10095_MI,
	&m10096_MI,
	&m10097_MI,
	&m10098_MI,
	&m10099_MI,
	&m10100_MI,
	&m10101_MI,
	&m10102_MI,
	&m10103_MI,
	&m10104_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m10095_MI;
extern MethodInfo m10098_MI;
extern MethodInfo m10104_MI;
extern MethodInfo m10099_MI;
extern MethodInfo m10096_MI;
extern MethodInfo m10097_MI;
static MethodInfo* t1896_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m10095_MI,
	&m10098_MI,
	&m10104_MI,
	&m10099_MI,
	&m10096_MI,
	&m10097_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t1895_TI;
extern TypeInfo t842_TI;
static TypeInfo* t1896_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t1895_TI,
	&t842_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t1895_TI;
extern TypeInfo t842_TI;
static Il2CppInterfaceOffsetPair t1896_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t1895_TI, 7},
	{ &t842_TI, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1896_0_0_0;
extern Il2CppType t1896_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t1896_TI;
extern Il2CppGenericClass t1896_GC;
extern TypeInfo t841_TI;
TypeInfo t1896_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t1896_MIs, t1896_PIs, t1896_FIs, NULL, &t122_TI, NULL, &t841_TI, &t1896_TI, t1896_ITIs, t1896_VT, &EmptyCustomAttributesCache, &t1896_TI, &t1896_0_0_0, &t1896_1_0_0, t1896_IOs, &t1896_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1896)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 11, 6, 4, 0, 0, 10, 4, 4};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1900_TI;

#include "t76.h"


extern MethodInfo m10105_MI;
 void m10105 (t1900 * __this, t14 * p0, t77 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m10106_MI;
 int32_t m10106 (t1900 * __this, t14 * p0, int32_t p1, MethodInfo* method){
	typedef  int32_t (*FunctionPointerType) (t14 * __this, t14 * p0, int32_t p1, MethodInfo* method);
	if (__this->f9)
		m10106((t1900 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m10107_MI;
 t14 * m10107 (t1900 * __this, t14 * p0, int32_t p1, t76 * p2, t14 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(InitializedTypeInfo(&t35_TI), &p1);
	return (t14 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m10108_MI;
 int32_t m10108 (t1900 * __this, t14 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>
extern Il2CppType t14_0_0_0;
extern Il2CppType t77_0_0_0;
static ParameterInfo t1900_m10105_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t77_0_0_0},
};
extern TypeInfo t1900_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t77 (MethodInfo* method, void* obj, void** args);
MethodInfo m10105_MI = 
{
	".ctor", (methodPointerType)&m10105, &t1900_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t77, t1900_m10105_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t1900_m10106_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1900_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10106_MI = 
{
	"Invoke", (methodPointerType)&m10106, &t1900_TI, &t35_0_0_0, RuntimeInvoker_t35_t14_t35, t1900_m10106_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t35_0_0_0;
extern Il2CppType t76_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t1900_m10107_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t76_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1900_TI;
extern Il2CppType t75_0_0_0;
extern void* RuntimeInvoker_t14_t14_t35_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10107_MI = 
{
	"BeginInvoke", (methodPointerType)&m10107, &t1900_TI, &t75_0_0_0, RuntimeInvoker_t14_t14_t35_t14_t14, t1900_m10107_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t75_0_0_0;
static ParameterInfo t1900_m10108_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t75_0_0_0},
};
extern TypeInfo t1900_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10108_MI = 
{
	"EndInvoke", (methodPointerType)&m10108, &t1900_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t1900_m10108_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1900_MIs[] =
{
	&m10105_MI,
	&m10106_MI,
	&m10107_MI,
	&m10108_MI,
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
extern MethodInfo m10106_MI;
extern MethodInfo m10107_MI;
extern MethodInfo m10108_MI;
static MethodInfo* t1900_VT[] =
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
	&m10106_MI,
	&m10107_MI,
	&m10108_MI,
};
extern TypeInfo t374_TI;
extern TypeInfo t375_TI;
static Il2CppInterfaceOffsetPair t1900_IOs[] = 
{
	{ &t374_TI, 4},
	{ &t375_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1900_0_0_0;
extern Il2CppType t1900_1_0_0;
extern TypeInfo t211_TI;
struct t1900;
extern TypeInfo t1900_TI;
extern Il2CppGenericClass t1900_GC;
extern TypeInfo t841_TI;
TypeInfo t1900_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t1900_MIs, NULL, NULL, NULL, &t211_TI, NULL, &t841_TI, &t1900_TI, NULL, t1900_VT, &EmptyCustomAttributesCache, &t1900_TI, &t1900_0_0_0, &t1900_1_0_0, t1900_IOs, &t1900_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1900), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1891_TI;



extern MethodInfo m10109_MI;
 void m10109 (t1891 * __this, t14 * p0, t77 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m10110_MI;
 t836  m10110 (t1891 * __this, t14 * p0, int32_t p1, MethodInfo* method){
	typedef  t836  (*FunctionPointerType) (t14 * __this, t14 * p0, int32_t p1, MethodInfo* method);
	if (__this->f9)
		m10110((t1891 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m10111_MI;
 t14 * m10111 (t1891 * __this, t14 * p0, int32_t p1, t76 * p2, t14 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(InitializedTypeInfo(&t35_TI), &p1);
	return (t14 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m10112_MI;
 t836  m10112 (t1891 * __this, t14 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t836 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>
extern Il2CppType t14_0_0_0;
extern Il2CppType t77_0_0_0;
static ParameterInfo t1891_m10109_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t77_0_0_0},
};
extern TypeInfo t1891_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t77 (MethodInfo* method, void* obj, void** args);
MethodInfo m10109_MI = 
{
	".ctor", (methodPointerType)&m10109, &t1891_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t77, t1891_m10109_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t1891_m10110_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1891_TI;
extern Il2CppType t836_0_0_0;
extern void* RuntimeInvoker_t836_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10110_MI = 
{
	"Invoke", (methodPointerType)&m10110, &t1891_TI, &t836_0_0_0, RuntimeInvoker_t836_t14_t35, t1891_m10110_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t35_0_0_0;
extern Il2CppType t76_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t1891_m10111_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t76_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1891_TI;
extern Il2CppType t75_0_0_0;
extern void* RuntimeInvoker_t14_t14_t35_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10111_MI = 
{
	"BeginInvoke", (methodPointerType)&m10111, &t1891_TI, &t75_0_0_0, RuntimeInvoker_t14_t14_t35_t14_t14, t1891_m10111_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t75_0_0_0;
static ParameterInfo t1891_m10112_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t75_0_0_0},
};
extern TypeInfo t1891_TI;
extern Il2CppType t836_0_0_0;
extern void* RuntimeInvoker_t836_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10112_MI = 
{
	"EndInvoke", (methodPointerType)&m10112, &t1891_TI, &t836_0_0_0, RuntimeInvoker_t836_t14, t1891_m10112_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1891_MIs[] =
{
	&m10109_MI,
	&m10110_MI,
	&m10111_MI,
	&m10112_MI,
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
extern MethodInfo m10110_MI;
extern MethodInfo m10111_MI;
extern MethodInfo m10112_MI;
static MethodInfo* t1891_VT[] =
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
	&m10110_MI,
	&m10111_MI,
	&m10112_MI,
};
extern TypeInfo t374_TI;
extern TypeInfo t375_TI;
static Il2CppInterfaceOffsetPair t1891_IOs[] = 
{
	{ &t374_TI, 4},
	{ &t375_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1891_0_0_0;
extern Il2CppType t1891_1_0_0;
extern TypeInfo t211_TI;
struct t1891;
extern TypeInfo t1891_TI;
extern Il2CppGenericClass t1891_GC;
extern TypeInfo t841_TI;
TypeInfo t1891_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t1891_MIs, NULL, NULL, NULL, &t211_TI, NULL, &t841_TI, &t1891_TI, NULL, t1891_VT, &EmptyCustomAttributesCache, &t1891_TI, &t1891_0_0_0, &t1891_1_0_0, t1891_IOs, &t1891_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1891), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1901_TI;



extern MethodInfo m10113_MI;
 void m10113 (t1901 * __this, t14 * p0, t77 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m10114_MI;
 t1894  m10114 (t1901 * __this, t14 * p0, int32_t p1, MethodInfo* method){
	typedef  t1894  (*FunctionPointerType) (t14 * __this, t14 * p0, int32_t p1, MethodInfo* method);
	if (__this->f9)
		m10114((t1901 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m10115_MI;
 t14 * m10115 (t1901 * __this, t14 * p0, int32_t p1, t76 * p2, t14 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(InitializedTypeInfo(&t35_TI), &p1);
	return (t14 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m10116_MI;
 t1894  m10116 (t1901 * __this, t14 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t1894 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
extern Il2CppType t14_0_0_0;
extern Il2CppType t77_0_0_0;
static ParameterInfo t1901_m10113_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t77_0_0_0},
};
extern TypeInfo t1901_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t77 (MethodInfo* method, void* obj, void** args);
MethodInfo m10113_MI = 
{
	".ctor", (methodPointerType)&m10113, &t1901_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t77, t1901_m10113_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t1901_m10114_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1901_TI;
extern Il2CppType t1894_0_0_0;
extern void* RuntimeInvoker_t1894_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10114_MI = 
{
	"Invoke", (methodPointerType)&m10114, &t1901_TI, &t1894_0_0_0, RuntimeInvoker_t1894_t14_t35, t1901_m10114_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t35_0_0_0;
extern Il2CppType t76_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t1901_m10115_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t76_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1901_TI;
extern Il2CppType t75_0_0_0;
extern void* RuntimeInvoker_t14_t14_t35_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10115_MI = 
{
	"BeginInvoke", (methodPointerType)&m10115, &t1901_TI, &t75_0_0_0, RuntimeInvoker_t14_t14_t35_t14_t14, t1901_m10115_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t75_0_0_0;
static ParameterInfo t1901_m10116_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t75_0_0_0},
};
extern TypeInfo t1901_TI;
extern Il2CppType t1894_0_0_0;
extern void* RuntimeInvoker_t1894_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10116_MI = 
{
	"EndInvoke", (methodPointerType)&m10116, &t1901_TI, &t1894_0_0_0, RuntimeInvoker_t1894_t14, t1901_m10116_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1901_MIs[] =
{
	&m10113_MI,
	&m10114_MI,
	&m10115_MI,
	&m10116_MI,
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
extern MethodInfo m10114_MI;
extern MethodInfo m10115_MI;
extern MethodInfo m10116_MI;
static MethodInfo* t1901_VT[] =
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
	&m10114_MI,
	&m10115_MI,
	&m10116_MI,
};
extern TypeInfo t374_TI;
extern TypeInfo t375_TI;
static Il2CppInterfaceOffsetPair t1901_IOs[] = 
{
	{ &t374_TI, 4},
	{ &t375_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1901_0_0_0;
extern Il2CppType t1901_1_0_0;
extern TypeInfo t211_TI;
struct t1901;
extern TypeInfo t1901_TI;
extern Il2CppGenericClass t1901_GC;
extern TypeInfo t841_TI;
TypeInfo t1901_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t1901_MIs, NULL, NULL, NULL, &t211_TI, NULL, &t841_TI, &t1901_TI, NULL, t1901_VT, &EmptyCustomAttributesCache, &t1901_TI, &t1901_0_0_0, &t1901_1_0_0, t1901_IOs, &t1901_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1901), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1902_TI;

extern TypeInfo t1902_TI;
extern TypeInfo t1896_TI;
extern TypeInfo t842_TI;
extern TypeInfo t836_TI;
extern TypeInfo t1894_TI;
extern TypeInfo t14_TI;
extern TypeInfo t26_TI;
extern MethodInfo m7725_MI;
extern MethodInfo m10099_MI;
extern MethodInfo m10065_MI;
extern MethodInfo m10119_MI;
extern MethodInfo m73_MI;
extern MethodInfo m10062_MI;
extern MethodInfo m10098_MI;


extern MethodInfo m10117_MI;
 void m10117 (t1902 * __this, t1889 * p0, MethodInfo* method){
	{
		m73(__this, &m73_MI);
		t1896  L_0 = m10062(p0, &m10062_MI);
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m10118_MI;
 bool m10118 (t1902 * __this, MethodInfo* method){
	{
		t1896 * L_0 = &(__this->f0);
		bool L_1 = m10098(L_0, &m10098_MI);
		return L_1;
	}
}
extern MethodInfo m10119_MI;
 t836  m10119 (t1902 * __this, MethodInfo* method){
	{
		t1896  L_0 = (__this->f0);
		t1896  L_1 = L_0;
		t14 * L_2 = Box(InitializedTypeInfo(&t1896_TI), &L_1);
		t836  L_3 = (t836 )InterfaceFuncInvoker0< t836  >::Invoke(&m7725_MI, L_2);
		return L_3;
	}
}
extern MethodInfo m10120_MI;
 t14 * m10120 (t1902 * __this, MethodInfo* method){
	t1894  V_0 = {0};
	{
		t1896 * L_0 = &(__this->f0);
		t1894  L_1 = m10099(L_0, &m10099_MI);
		V_0 = L_1;
		t14 * L_2 = m10065((&V_0), &m10065_MI);
		t14 * L_3 = L_2;
		return ((t14 *)L_3);
	}
}
extern MethodInfo m10121_MI;
 t14 * m10121 (t1902 * __this, MethodInfo* method){
	{
		t836  L_0 = (t836 )VirtFuncInvoker0< t836  >::Invoke(&m10119_MI, __this);
		t836  L_1 = L_0;
		t14 * L_2 = Box(InitializedTypeInfo(&t836_TI), &L_1);
		return L_2;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
extern Il2CppType t1896_0_0_1;
FieldInfo t1902_f0_FieldInfo = 
{
	"host_enumerator", &t1896_0_0_1, &t1902_TI, offsetof(t1902, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1902_FIs[] =
{
	&t1902_f0_FieldInfo,
	NULL
};
extern MethodInfo m10119_MI;
static PropertyInfo t1902____Entry_PropertyInfo = 
{
	&t1902_TI, "Entry", &m10119_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10120_MI;
static PropertyInfo t1902____Key_PropertyInfo = 
{
	&t1902_TI, "Key", &m10120_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10121_MI;
static PropertyInfo t1902____Current_PropertyInfo = 
{
	&t1902_TI, "Current", &m10121_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1902_PIs[] =
{
	&t1902____Entry_PropertyInfo,
	&t1902____Key_PropertyInfo,
	&t1902____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1889_0_0_0;
static ParameterInfo t1902_m10117_ParameterInfos[] = 
{
	{"host", 0, 134217728, &EmptyCustomAttributesCache, &t1889_0_0_0},
};
extern TypeInfo t1902_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10117_MI = 
{
	".ctor", (methodPointerType)&m10117, &t1902_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1902_m10117_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1902_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10118_MI = 
{
	"MoveNext", (methodPointerType)&m10118, &t1902_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1902_TI;
extern Il2CppType t836_0_0_0;
extern void* RuntimeInvoker_t836 (MethodInfo* method, void* obj, void** args);
MethodInfo m10119_MI = 
{
	"get_Entry", (methodPointerType)&m10119, &t1902_TI, &t836_0_0_0, RuntimeInvoker_t836, NULL, &EmptyCustomAttributesCache, 2534, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1902_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10120_MI = 
{
	"get_Key", (methodPointerType)&m10120, &t1902_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1902_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10121_MI = 
{
	"get_Current", (methodPointerType)&m10121, &t1902_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1902_MIs[] =
{
	&m10117_MI,
	&m10118_MI,
	&m10119_MI,
	&m10120_MI,
	&m10121_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m10121_MI;
extern MethodInfo m10118_MI;
extern MethodInfo m10119_MI;
extern MethodInfo m10120_MI;
static MethodInfo* t1902_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m10121_MI,
	&m10118_MI,
	&m10119_MI,
	&m10120_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t842_TI;
static TypeInfo* t1902_ITIs[] = 
{
	&t36_TI,
	&t842_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t842_TI;
static Il2CppInterfaceOffsetPair t1902_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t842_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1902_0_0_0;
extern Il2CppType t1902_1_0_0;
extern TypeInfo t14_TI;
struct t1902;
extern TypeInfo t1902_TI;
extern Il2CppGenericClass t1902_GC;
extern TypeInfo t841_TI;
TypeInfo t1902_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ShimEnumerator", "", t1902_MIs, t1902_PIs, t1902_FIs, NULL, &t14_TI, NULL, &t841_TI, &t1902_TI, t1902_ITIs, t1902_VT, &EmptyCustomAttributesCache, &t1902_TI, &t1902_0_0_0, &t1902_1_0_0, t1902_IOs, &t1902_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1902), 0, -1, 0, 0, -1, 1056771, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 5, 3, 1, 0, 0, 8, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1908_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.ICanvasElement>
extern MethodInfo m23736_MI;
extern MethodInfo m23737_MI;
static PropertyInfo t1908____Item_PropertyInfo = 
{
	&t1908_TI, "Item", &m23736_MI, &m23737_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1908_PIs[] =
{
	&t1908____Item_PropertyInfo,
	NULL
};
extern Il2CppType t157_0_0_0;
static ParameterInfo t1908_m23738_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
};
extern TypeInfo t1908_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23738_MI = 
{
	"IndexOf", NULL, &t1908_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t1908_m23738_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t157_0_0_0;
static ParameterInfo t1908_m23739_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
};
extern TypeInfo t1908_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23739_MI = 
{
	"Insert", NULL, &t1908_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t1908_m23739_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1908_m23740_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1908_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m23740_MI = 
{
	"RemoveAt", NULL, &t1908_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t1908_m23740_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1908_m23736_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1908_TI;
extern Il2CppType t157_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m23736_MI = 
{
	"get_Item", NULL, &t1908_TI, &t157_0_0_0, RuntimeInvoker_t14_t35, t1908_m23736_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t157_0_0_0;
static ParameterInfo t1908_m23737_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
};
extern TypeInfo t1908_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23737_MI = 
{
	"set_Item", NULL, &t1908_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t1908_m23737_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1908_MIs[] =
{
	&m23738_MI,
	&m23739_MI,
	&m23740_MI,
	&m23736_MI,
	&m23737_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t1904_TI;
extern TypeInfo t1905_TI;
static TypeInfo* t1908_ITIs[] = 
{
	&t600_TI,
	&t1904_TI,
	&t1905_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1908_0_0_0;
extern Il2CppType t1908_1_0_0;
struct t1908;
extern TypeInfo t1908_TI;
extern Il2CppGenericClass t1908_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t1908_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t1908_MIs, t1908_PIs, NULL, NULL, NULL, NULL, NULL, &t1908_TI, t1908_ITIs, NULL, &t1409__CustomAttributeCache, &t1908_TI, &t1908_0_0_0, &t1908_1_0_0, NULL, &t1908_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1904_TI;

#include "UnityEngine.UI_ArrayTypes.h"


// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.ICanvasElement>
extern MethodInfo m23741_MI;
static PropertyInfo t1904____Count_PropertyInfo = 
{
	&t1904_TI, "Count", &m23741_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m23742_MI;
static PropertyInfo t1904____IsReadOnly_PropertyInfo = 
{
	&t1904_TI, "IsReadOnly", &m23742_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1904_PIs[] =
{
	&t1904____Count_PropertyInfo,
	&t1904____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t1904_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m23741_MI = 
{
	"get_Count", NULL, &t1904_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1904_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m23742_MI = 
{
	"get_IsReadOnly", NULL, &t1904_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t157_0_0_0;
static ParameterInfo t1904_m23743_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
};
extern TypeInfo t1904_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23743_MI = 
{
	"Add", NULL, &t1904_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1904_m23743_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1904_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m23744_MI = 
{
	"Clear", NULL, &t1904_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t157_0_0_0;
static ParameterInfo t1904_m23745_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
};
extern TypeInfo t1904_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23745_MI = 
{
	"Contains", NULL, &t1904_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1904_m23745_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1887_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t1904_m23746_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1887_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1904_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m23746_MI = 
{
	"CopyTo", NULL, &t1904_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t1904_m23746_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t157_0_0_0;
static ParameterInfo t1904_m23747_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
};
extern TypeInfo t1904_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23747_MI = 
{
	"Remove", NULL, &t1904_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1904_m23747_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1904_MIs[] =
{
	&m23741_MI,
	&m23742_MI,
	&m23743_MI,
	&m23744_MI,
	&m23745_MI,
	&m23746_MI,
	&m23747_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t1905_TI;
static TypeInfo* t1904_ITIs[] = 
{
	&t600_TI,
	&t1905_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1904_0_0_0;
extern Il2CppType t1904_1_0_0;
struct t1904;
extern TypeInfo t1904_TI;
extern Il2CppGenericClass t1904_GC;
TypeInfo t1904_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t1904_MIs, t1904_PIs, NULL, NULL, NULL, NULL, NULL, &t1904_TI, t1904_ITIs, NULL, &EmptyCustomAttributesCache, &t1904_TI, &t1904_0_0_0, &t1904_1_0_0, NULL, &t1904_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1905_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.ICanvasElement>
extern TypeInfo t1905_TI;
extern Il2CppType t1886_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23748_MI = 
{
	"GetEnumerator", NULL, &t1905_TI, &t1886_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1905_MIs[] =
{
	&m23748_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t1905_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1905_0_0_0;
extern Il2CppType t1905_1_0_0;
struct t1905;
extern TypeInfo t1905_TI;
extern Il2CppGenericClass t1905_GC;
TypeInfo t1905_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t1905_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1905_TI, t1905_ITIs, NULL, &EmptyCustomAttributesCache, &t1905_TI, &t1905_0_0_0, &t1905_1_0_0, NULL, &t1905_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1886_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.ICanvasElement>
extern MethodInfo m23749_MI;
static PropertyInfo t1886____Current_PropertyInfo = 
{
	&t1886_TI, "Current", &m23749_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1886_PIs[] =
{
	&t1886____Current_PropertyInfo,
	NULL
};
extern TypeInfo t1886_TI;
extern Il2CppType t157_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23749_MI = 
{
	"get_Current", NULL, &t1886_TI, &t157_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1886_MIs[] =
{
	&m23749_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t1886_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1886_0_0_0;
extern Il2CppType t1886_1_0_0;
struct t1886;
extern TypeInfo t1886_TI;
extern Il2CppGenericClass t1886_GC;
TypeInfo t1886_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t1886_MIs, t1886_PIs, NULL, NULL, NULL, NULL, NULL, &t1886_TI, t1886_ITIs, NULL, &EmptyCustomAttributesCache, &t1886_TI, &t1886_0_0_0, &t1886_1_0_0, NULL, &t1886_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t1903.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1903_TI;
#include "t1903MD.h"

extern TypeInfo t1903_TI;
extern TypeInfo t157_TI;
extern TypeInfo t1278_TI;
extern MethodInfo m10126_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m17599_MI;
struct t24;
struct t24;
 t14 * m16357_gshared (t24 * __this, int32_t p0, MethodInfo* method);
#define m16357(__this, p0, method) (t14 *)m16357_gshared((t24 *)__this, (int32_t)p0, method)
#define m17599(__this, p0, method) (t14 *)m16357_gshared((t24 *)__this, (int32_t)p0, method)
extern MethodInfo m17599_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.ICanvasElement>
extern Il2CppType t24_0_0_1;
FieldInfo t1903_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t1903_TI, offsetof(t1903, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t1903_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t1903_TI, offsetof(t1903, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t1903_FIs[] =
{
	&t1903_f0_FieldInfo,
	&t1903_f1_FieldInfo,
	NULL
};
extern MethodInfo m10123_MI;
static PropertyInfo t1903____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1903_TI, "System.Collections.IEnumerator.Current", &m10123_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10126_MI;
static PropertyInfo t1903____Current_PropertyInfo = 
{
	&t1903_TI, "Current", &m10126_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1903_PIs[] =
{
	&t1903____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1903____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t1903_m10122_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t1903_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10122_MI = 
{
	".ctor", (methodPointerType)&m7877_gshared, &t1903_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1903_m10122_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1903_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10123_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7879_gshared, &t1903_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1903_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10124_MI = 
{
	"Dispose", (methodPointerType)&m7881_gshared, &t1903_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1903_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10125_MI = 
{
	"MoveNext", (methodPointerType)&m7883_gshared, &t1903_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1903_TI;
extern Il2CppType t157_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10126_MI = 
{
	"get_Current", (methodPointerType)&m7885_gshared, &t1903_TI, &t157_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1903_MIs[] =
{
	&m10122_MI,
	&m10123_MI,
	&m10124_MI,
	&m10125_MI,
	&m10126_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m10123_MI;
extern MethodInfo m10125_MI;
extern MethodInfo m10124_MI;
extern MethodInfo m10126_MI;
static MethodInfo* t1903_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m10123_MI,
	&m10125_MI,
	&m10124_MI,
	&m10126_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t1886_TI;
static TypeInfo* t1903_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t1886_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t1886_TI;
static Il2CppInterfaceOffsetPair t1903_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t1886_TI, 7},
};
extern MethodInfo m10126_MI;
extern TypeInfo t157_TI;
extern MethodInfo m17599_MI;
static void* t1903_RGCTXData[3] = 
{
	&m10126_MI,
	&t157_TI,
	&m17599_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1903_0_0_0;
extern Il2CppType t1903_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t1903_TI;
extern Il2CppGenericClass t1903_GC;
extern TypeInfo t24_TI;
TypeInfo t1903_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1903_MIs, t1903_PIs, t1903_FIs, NULL, &t122_TI, NULL, &t24_TI, &t1903_TI, t1903_ITIs, t1903_VT, &EmptyCustomAttributesCache, &t1903_TI, &t1903_0_0_0, &t1903_1_0_0, t1903_IOs, &t1903_GC, NULL, NULL, NULL, t1903_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1903)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#include "t1885.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1885_TI;
#include "t1885MD.h"

#include "t1907.h"
#include "t1906.h"
#include "t156.h"
#include "t1912.h"
#include "t155.h"
extern TypeInfo t1885_TI;
extern TypeInfo t157_TI;
extern TypeInfo t35_TI;
extern TypeInfo t25_TI;
extern TypeInfo t319_TI;
extern TypeInfo t582_TI;
extern TypeInfo t1277_TI;
extern TypeInfo t1242_TI;
extern TypeInfo t1887_TI;
extern TypeInfo t1907_TI;
extern TypeInfo t26_TI;
extern TypeInfo t1904_TI;
extern TypeInfo t1905_TI;
extern TypeInfo t1886_TI;
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t1906_TI;
extern TypeInfo t338_TI;
extern TypeInfo t156_TI;
extern TypeInfo t1912_TI;
#include "t599MD.h"
#include "t1906MD.h"
#include "t156MD.h"
#include "t1907MD.h"
#include "t1912MD.h"
extern MethodInfo m10174_MI;
extern MethodInfo m10175_MI;
extern MethodInfo m1959_MI;
extern MethodInfo m6492_MI;
extern MethodInfo m17610_MI;
extern MethodInfo m6493_MI;
extern MethodInfo m10160_MI;
extern MethodInfo m73_MI;
extern MethodInfo m10157_MI;
extern MethodInfo m3786_MI;
extern MethodInfo m10145_MI;
extern MethodInfo m10152_MI;
extern MethodInfo m10158_MI;
extern MethodInfo m10161_MI;
extern MethodInfo m10163_MI;
extern MethodInfo m10146_MI;
extern MethodInfo m10171_MI;
extern MethodInfo m6930_MI;
extern MethodInfo m10172_MI;
extern MethodInfo m23741_MI;
extern MethodInfo m23746_MI;
extern MethodInfo m23748_MI;
extern MethodInfo m23749_MI;
extern MethodInfo m67_MI;
extern MethodInfo m68_MI;
extern MethodInfo m10162_MI;
extern MethodInfo m10147_MI;
extern MethodInfo m10148_MI;
extern MethodInfo m10182_MI;
extern MethodInfo m3782_MI;
extern MethodInfo m17612_MI;
extern MethodInfo m10155_MI;
extern MethodInfo m10156_MI;
extern MethodInfo m2974_MI;
extern MethodInfo m10256_MI;
extern MethodInfo m10176_MI;
extern MethodInfo m10159_MI;
extern MethodInfo m10165_MI;
extern MethodInfo m3798_MI;
extern MethodInfo m10262_MI;
extern MethodInfo m17614_MI;
extern MethodInfo m17622_MI;
extern MethodInfo m3785_MI;
struct t24;
struct t24;
 void m16651_gshared (t14 * __this, t40** p0, int32_t p1, MethodInfo* method);
#define m16651(__this, p0, p1, method) (void)m16651_gshared((t14 *)__this, (t40**)p0, (int32_t)p1, method)
#define m17610(__this, p0, p1, method) (void)m16651_gshared((t14 *)__this, (t40**)p0, (int32_t)p1, method)
extern MethodInfo m17610_MI;
struct t24;
#include "t1910.h"
struct t24;
 int32_t m7724_gshared (t14 * __this, t40* p0, t14 * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define m7724(__this, p0, p1, p2, p3, method) (int32_t)m7724_gshared((t14 *)__this, (t40*)p0, (t14 *)p1, (int32_t)p2, (int32_t)p3, method)
#define m17612(__this, p0, p1, p2, p3, method) (int32_t)m7724_gshared((t14 *)__this, (t40*)p0, (t14 *)p1, (int32_t)p2, (int32_t)p3, method)
extern MethodInfo m17612_MI;
struct t24;
struct t24;
 void m16720_gshared (t14 * __this, t40* p0, int32_t p1, int32_t p2, t14* p3, MethodInfo* method);
#define m16720(__this, p0, p1, p2, p3, method) (void)m16720_gshared((t14 *)__this, (t40*)p0, (int32_t)p1, (int32_t)p2, (t14*)p3, method)
#define m17614(__this, p0, p1, p2, p3, method) (void)m16720_gshared((t14 *)__this, (t40*)p0, (int32_t)p1, (int32_t)p2, (t14*)p3, method)
extern MethodInfo m17614_MI;
struct t24;
struct t24;
 void m16794_gshared (t14 * __this, t40* p0, int32_t p1, t1654 * p2, MethodInfo* method);
#define m16794(__this, p0, p1, p2, method) (void)m16794_gshared((t14 *)__this, (t40*)p0, (int32_t)p1, (t1654 *)p2, method)
#define m17622(__this, p0, p1, p2, method) (void)m16794_gshared((t14 *)__this, (t40*)p0, (int32_t)p1, (t1654 *)p2, method)
extern MethodInfo m17622_MI;


extern MethodInfo m10157_MI;
 t1907  m10157 (t1885 * __this, MethodInfo* method){
	{
		t1907  L_0 = {0};
		m10176(&L_0, __this, &m10176_MI);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>
extern Il2CppType t35_0_0_32849;
FieldInfo t1885_f0_FieldInfo = 
{
	"DefaultCapacity", &t35_0_0_32849, &t1885_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1887_0_0_1;
FieldInfo t1885_f1_FieldInfo = 
{
	"_items", &t1887_0_0_1, &t1885_TI, offsetof(t1885, f1), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t1885_f2_FieldInfo = 
{
	"_size", &t35_0_0_1, &t1885_TI, offsetof(t1885, f2), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t1885_f3_FieldInfo = 
{
	"_version", &t35_0_0_1, &t1885_TI, offsetof(t1885, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1887_0_0_49;
FieldInfo t1885_f4_FieldInfo = 
{
	"EmptyArray", &t1887_0_0_49, &t1885_TI, offsetof(t1885_SFs, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1885_FIs[] =
{
	&t1885_f0_FieldInfo,
	&t1885_f1_FieldInfo,
	&t1885_f2_FieldInfo,
	&t1885_f3_FieldInfo,
	&t1885_f4_FieldInfo,
	NULL
};
static const int32_t t1885_f0_DefaultValueData = 4;
extern Il2CppType t35_0_0_0;
static Il2CppFieldDefaultValueEntry t1885_f0_DefaultValue = 
{
	&t1885_f0_FieldInfo, { (char*)&t1885_f0_DefaultValueData, &t35_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1885_FDVs[] = 
{
	&t1885_f0_DefaultValue,
	NULL
};
extern MethodInfo m10138_MI;
static PropertyInfo t1885____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t1885_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m10138_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10139_MI;
static PropertyInfo t1885____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t1885_TI, "System.Collections.ICollection.IsSynchronized", &m10139_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10140_MI;
static PropertyInfo t1885____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t1885_TI, "System.Collections.ICollection.SyncRoot", &m10140_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10141_MI;
static PropertyInfo t1885____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t1885_TI, "System.Collections.IList.IsFixedSize", &m10141_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10142_MI;
static PropertyInfo t1885____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t1885_TI, "System.Collections.IList.IsReadOnly", &m10142_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10143_MI;
extern MethodInfo m10144_MI;
static PropertyInfo t1885____System_Collections_IList_Item_PropertyInfo = 
{
	&t1885_TI, "System.Collections.IList.Item", &m10143_MI, &m10144_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10171_MI;
extern MethodInfo m10172_MI;
static PropertyInfo t1885____Capacity_PropertyInfo = 
{
	&t1885_TI, "Capacity", &m10171_MI, &m10172_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10173_MI;
static PropertyInfo t1885____Count_PropertyInfo = 
{
	&t1885_TI, "Count", &m10173_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10174_MI;
extern MethodInfo m10175_MI;
static PropertyInfo t1885____Item_PropertyInfo = 
{
	&t1885_TI, "Item", &m10174_MI, &m10175_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1885_PIs[] =
{
	&t1885____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t1885____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t1885____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t1885____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t1885____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t1885____System_Collections_IList_Item_PropertyInfo,
	&t1885____Capacity_PropertyInfo,
	&t1885____Count_PropertyInfo,
	&t1885____Item_PropertyInfo,
	NULL
};
extern TypeInfo t1885_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10127_MI = 
{
	".ctor", (methodPointerType)&m8086_gshared, &t1885_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1885_m10128_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1885_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10128_MI = 
{
	".ctor", (methodPointerType)&m8088_gshared, &t1885_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t1885_m10128_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1885_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10129_MI = 
{
	".cctor", (methodPointerType)&m8090_gshared, &t1885_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1885_TI;
extern Il2CppType t1886_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10130_MI = 
{
	"System.Collections.Generic.IEnumerable<T>.GetEnumerator", (methodPointerType)&m8092_gshared, &t1885_TI, &t1886_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 481, 0, 27, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t24_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t1885_m10131_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1885_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10131_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m8094_gshared, &t1885_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t1885_m10131_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1885_TI;
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10132_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8096_gshared, &t1885_TI, &t36_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1885_m10133_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1885_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10133_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m8098_gshared, &t1885_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t1885_m10133_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1885_m10134_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1885_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10134_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m8100_gshared, &t1885_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1885_m10134_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1885_m10135_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1885_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10135_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m8102_gshared, &t1885_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t1885_m10135_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t1885_m10136_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1885_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10136_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m8104_gshared, &t1885_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t1885_m10136_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1885_m10137_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1885_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10137_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m8106_gshared, &t1885_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1885_m10137_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1885_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10138_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m8108_gshared, &t1885_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1885_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10139_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m8110_gshared, &t1885_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1885_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10140_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m8112_gshared, &t1885_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1885_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10141_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m8114_gshared, &t1885_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1885_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10142_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m8116_gshared, &t1885_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1885_m10143_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1885_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10143_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m8118_gshared, &t1885_TI, &t14_0_0_0, RuntimeInvoker_t14_t35, t1885_m10143_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t1885_m10144_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1885_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10144_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m8120_gshared, &t1885_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t1885_m10144_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t157_0_0_0;
static ParameterInfo t1885_m10145_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
};
extern TypeInfo t1885_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10145_MI = 
{
	"Add", (methodPointerType)&m8122_gshared, &t1885_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1885_m10145_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1885_m10146_ParameterInfos[] = 
{
	{"newCount", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1885_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10146_MI = 
{
	"GrowIfNeeded", (methodPointerType)&m8124_gshared, &t1885_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t1885_m10146_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1904_0_0_0;
static ParameterInfo t1885_m10147_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t1904_0_0_0},
};
extern TypeInfo t1885_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10147_MI = 
{
	"AddCollection", (methodPointerType)&m8126_gshared, &t1885_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1885_m10147_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1905_0_0_0;
static ParameterInfo t1885_m10148_ParameterInfos[] = 
{
	{"enumerable", 0, 134217728, &EmptyCustomAttributesCache, &t1905_0_0_0},
};
extern TypeInfo t1885_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10148_MI = 
{
	"AddEnumerable", (methodPointerType)&m8128_gshared, &t1885_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1885_m10148_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1905_0_0_0;
static ParameterInfo t1885_m10149_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t1905_0_0_0},
};
extern TypeInfo t1885_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10149_MI = 
{
	"AddRange", (methodPointerType)&m8130_gshared, &t1885_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1885_m10149_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1885_TI;
extern Il2CppType t1906_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10150_MI = 
{
	"AsReadOnly", (methodPointerType)&m8132_gshared, &t1885_TI, &t1906_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1885_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10151_MI = 
{
	"Clear", (methodPointerType)&m8134_gshared, &t1885_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t157_0_0_0;
static ParameterInfo t1885_m10152_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
};
extern TypeInfo t1885_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10152_MI = 
{
	"Contains", (methodPointerType)&m8136_gshared, &t1885_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1885_m10152_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1887_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t1885_m10153_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1887_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1885_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10153_MI = 
{
	"CopyTo", (methodPointerType)&m8138_gshared, &t1885_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t1885_m10153_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t156_0_0_0;
static ParameterInfo t1885_m10154_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t156_0_0_0},
};
extern TypeInfo t1885_TI;
extern Il2CppType t157_0_0_0;
extern void* RuntimeInvoker_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10154_MI = 
{
	"Find", (methodPointerType)&m8140_gshared, &t1885_TI, &t157_0_0_0, RuntimeInvoker_t14_t14, t1885_m10154_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t156_0_0_0;
static ParameterInfo t1885_m10155_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t156_0_0_0},
};
extern TypeInfo t1885_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10155_MI = 
{
	"CheckMatch", (methodPointerType)&m8142_gshared, &t1885_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1885_m10155_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t35_0_0_0;
extern Il2CppType t156_0_0_0;
static ParameterInfo t1885_m10156_ParameterInfos[] = 
{
	{"startIndex", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"count", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"match", 2, 134217728, &EmptyCustomAttributesCache, &t156_0_0_0},
};
extern TypeInfo t1885_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t35_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10156_MI = 
{
	"GetIndex", (methodPointerType)&m8144_gshared, &t1885_TI, &t35_0_0_0, RuntimeInvoker_t35_t35_t35_t14, t1885_m10156_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1885_TI;
extern Il2CppType t1907_0_0_0;
extern void* RuntimeInvoker_t1907 (MethodInfo* method, void* obj, void** args);
MethodInfo m10157_MI = 
{
	"GetEnumerator", (methodPointerType)&m10157, &t1885_TI, &t1907_0_0_0, RuntimeInvoker_t1907, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t157_0_0_0;
static ParameterInfo t1885_m10158_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
};
extern TypeInfo t1885_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10158_MI = 
{
	"IndexOf", (methodPointerType)&m8147_gshared, &t1885_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t1885_m10158_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t1885_m10159_ParameterInfos[] = 
{
	{"start", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"delta", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1885_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10159_MI = 
{
	"Shift", (methodPointerType)&m8149_gshared, &t1885_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t35, t1885_m10159_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1885_m10160_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1885_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10160_MI = 
{
	"CheckIndex", (methodPointerType)&m8151_gshared, &t1885_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t1885_m10160_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t157_0_0_0;
static ParameterInfo t1885_m10161_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
};
extern TypeInfo t1885_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10161_MI = 
{
	"Insert", (methodPointerType)&m8153_gshared, &t1885_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t1885_m10161_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1905_0_0_0;
static ParameterInfo t1885_m10162_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t1905_0_0_0},
};
extern TypeInfo t1885_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10162_MI = 
{
	"CheckCollection", (methodPointerType)&m8155_gshared, &t1885_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1885_m10162_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t157_0_0_0;
static ParameterInfo t1885_m10163_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
};
extern TypeInfo t1885_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10163_MI = 
{
	"Remove", (methodPointerType)&m8157_gshared, &t1885_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1885_m10163_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t156_0_0_0;
static ParameterInfo t1885_m10164_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t156_0_0_0},
};
extern TypeInfo t1885_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10164_MI = 
{
	"RemoveAll", (methodPointerType)&m8159_gshared, &t1885_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t1885_m10164_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1885_m10165_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1885_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10165_MI = 
{
	"RemoveAt", (methodPointerType)&m8160_gshared, &t1885_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t1885_m10165_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1885_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10166_MI = 
{
	"Reverse", (methodPointerType)&m8162_gshared, &t1885_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1885_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10167_MI = 
{
	"Sort", (methodPointerType)&m8164_gshared, &t1885_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t155_0_0_0;
static ParameterInfo t1885_m10168_ParameterInfos[] = 
{
	{"comparison", 0, 134217728, &EmptyCustomAttributesCache, &t155_0_0_0},
};
extern TypeInfo t1885_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10168_MI = 
{
	"Sort", (methodPointerType)&m8166_gshared, &t1885_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1885_m10168_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1885_TI;
extern Il2CppType t1887_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10169_MI = 
{
	"ToArray", (methodPointerType)&m8168_gshared, &t1885_TI, &t1887_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1885_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10170_MI = 
{
	"TrimExcess", (methodPointerType)&m8170_gshared, &t1885_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1885_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10171_MI = 
{
	"get_Capacity", (methodPointerType)&m8172_gshared, &t1885_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1885_m10172_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1885_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10172_MI = 
{
	"set_Capacity", (methodPointerType)&m8174_gshared, &t1885_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t1885_m10172_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1885_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10173_MI = 
{
	"get_Count", (methodPointerType)&m8175_gshared, &t1885_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1885_m10174_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1885_TI;
extern Il2CppType t157_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10174_MI = 
{
	"get_Item", (methodPointerType)&m8176_gshared, &t1885_TI, &t157_0_0_0, RuntimeInvoker_t14_t35, t1885_m10174_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t157_0_0_0;
static ParameterInfo t1885_m10175_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
};
extern TypeInfo t1885_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10175_MI = 
{
	"set_Item", (methodPointerType)&m8178_gshared, &t1885_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t1885_m10175_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 32, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1885_MIs[] =
{
	&m10127_MI,
	&m10128_MI,
	&m10129_MI,
	&m10130_MI,
	&m10131_MI,
	&m10132_MI,
	&m10133_MI,
	&m10134_MI,
	&m10135_MI,
	&m10136_MI,
	&m10137_MI,
	&m10138_MI,
	&m10139_MI,
	&m10140_MI,
	&m10141_MI,
	&m10142_MI,
	&m10143_MI,
	&m10144_MI,
	&m10145_MI,
	&m10146_MI,
	&m10147_MI,
	&m10148_MI,
	&m10149_MI,
	&m10150_MI,
	&m10151_MI,
	&m10152_MI,
	&m10153_MI,
	&m10154_MI,
	&m10155_MI,
	&m10156_MI,
	&m10157_MI,
	&m10158_MI,
	&m10159_MI,
	&m10160_MI,
	&m10161_MI,
	&m10162_MI,
	&m10163_MI,
	&m10164_MI,
	&m10165_MI,
	&m10166_MI,
	&m10167_MI,
	&m10168_MI,
	&m10169_MI,
	&m10170_MI,
	&m10171_MI,
	&m10172_MI,
	&m10173_MI,
	&m10174_MI,
	&m10175_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m10132_MI;
extern MethodInfo m10173_MI;
extern MethodInfo m10139_MI;
extern MethodInfo m10140_MI;
extern MethodInfo m10131_MI;
extern MethodInfo m10141_MI;
extern MethodInfo m10142_MI;
extern MethodInfo m10143_MI;
extern MethodInfo m10144_MI;
extern MethodInfo m10133_MI;
extern MethodInfo m10151_MI;
extern MethodInfo m10134_MI;
extern MethodInfo m10135_MI;
extern MethodInfo m10136_MI;
extern MethodInfo m10137_MI;
extern MethodInfo m10165_MI;
extern MethodInfo m10173_MI;
extern MethodInfo m10138_MI;
extern MethodInfo m10145_MI;
extern MethodInfo m10151_MI;
extern MethodInfo m10152_MI;
extern MethodInfo m10153_MI;
extern MethodInfo m10163_MI;
extern MethodInfo m10130_MI;
extern MethodInfo m10158_MI;
extern MethodInfo m10161_MI;
extern MethodInfo m10165_MI;
extern MethodInfo m10174_MI;
extern MethodInfo m10175_MI;
static MethodInfo* t1885_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m10132_MI,
	&m10173_MI,
	&m10139_MI,
	&m10140_MI,
	&m10131_MI,
	&m10141_MI,
	&m10142_MI,
	&m10143_MI,
	&m10144_MI,
	&m10133_MI,
	&m10151_MI,
	&m10134_MI,
	&m10135_MI,
	&m10136_MI,
	&m10137_MI,
	&m10165_MI,
	&m10173_MI,
	&m10138_MI,
	&m10145_MI,
	&m10151_MI,
	&m10152_MI,
	&m10153_MI,
	&m10163_MI,
	&m10130_MI,
	&m10158_MI,
	&m10161_MI,
	&m10165_MI,
	&m10174_MI,
	&m10175_MI,
};
extern TypeInfo t600_TI;
extern TypeInfo t651_TI;
extern TypeInfo t1023_TI;
extern TypeInfo t1904_TI;
extern TypeInfo t1905_TI;
extern TypeInfo t1908_TI;
static TypeInfo* t1885_ITIs[] = 
{
	&t600_TI,
	&t651_TI,
	&t1023_TI,
	&t1904_TI,
	&t1905_TI,
	&t1908_TI,
};
extern TypeInfo t600_TI;
extern TypeInfo t651_TI;
extern TypeInfo t1023_TI;
extern TypeInfo t1904_TI;
extern TypeInfo t1905_TI;
extern TypeInfo t1908_TI;
static Il2CppInterfaceOffsetPair t1885_IOs[] = 
{
	{ &t600_TI, 4},
	{ &t651_TI, 5},
	{ &t1023_TI, 9},
	{ &t1904_TI, 20},
	{ &t1905_TI, 27},
	{ &t1908_TI, 28},
};
extern TypeInfo t1885_TI;
extern TypeInfo t1887_TI;
extern MethodInfo m10157_MI;
extern TypeInfo t1907_TI;
extern TypeInfo t157_TI;
extern MethodInfo m10145_MI;
extern MethodInfo m10152_MI;
extern MethodInfo m10158_MI;
extern MethodInfo m10160_MI;
extern MethodInfo m10161_MI;
extern MethodInfo m10163_MI;
extern MethodInfo m10174_MI;
extern MethodInfo m10175_MI;
extern MethodInfo m10146_MI;
extern MethodInfo m10171_MI;
extern MethodInfo m10172_MI;
extern MethodInfo m23741_MI;
extern MethodInfo m23746_MI;
extern MethodInfo m23748_MI;
extern MethodInfo m23749_MI;
extern MethodInfo m10162_MI;
extern TypeInfo t1904_TI;
extern MethodInfo m10147_MI;
extern MethodInfo m10148_MI;
extern TypeInfo t1906_TI;
extern MethodInfo m10182_MI;
extern MethodInfo m17612_MI;
extern MethodInfo m10155_MI;
extern MethodInfo m10156_MI;
extern MethodInfo m10256_MI;
extern MethodInfo m10176_MI;
extern MethodInfo m10159_MI;
extern MethodInfo m10165_MI;
extern MethodInfo m10262_MI;
extern MethodInfo m17614_MI;
extern MethodInfo m17622_MI;
extern MethodInfo m17610_MI;
static void* t1885_RGCTXData[37] = 
{
	&t1885_TI,
	&t1887_TI,
	&m10157_MI,
	&t1907_TI,
	&t157_TI,
	&m10145_MI,
	&m10152_MI,
	&m10158_MI,
	&m10160_MI,
	&m10161_MI,
	&m10163_MI,
	&m10174_MI,
	&m10175_MI,
	&m10146_MI,
	&m10171_MI,
	&m10172_MI,
	&m23741_MI,
	&m23746_MI,
	&m23748_MI,
	&m23749_MI,
	&m10162_MI,
	&t1904_TI,
	&m10147_MI,
	&m10148_MI,
	&t1906_TI,
	&m10182_MI,
	&m17612_MI,
	&m10155_MI,
	&m10156_MI,
	&m10256_MI,
	&m10176_MI,
	&m10159_MI,
	&m10165_MI,
	&m10262_MI,
	&m17614_MI,
	&m17622_MI,
	&m17610_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1885_0_0_0;
extern Il2CppType t1885_1_0_0;
extern TypeInfo t14_TI;
struct t1885;
extern TypeInfo t1885_TI;
extern Il2CppGenericClass t1885_GC;
extern CustomAttributesCache t848__CustomAttributeCache;
TypeInfo t1885_TI = 
{
	&g_mscorlib_dll_Image, NULL, "List`1", "System.Collections.Generic", t1885_MIs, t1885_PIs, t1885_FIs, NULL, &t14_TI, NULL, NULL, &t1885_TI, t1885_ITIs, t1885_VT, &t848__CustomAttributeCache, &t1885_TI, &t1885_0_0_0, &t1885_1_0_0, t1885_IOs, &t1885_GC, NULL, t1885_FDVs, NULL, t1885_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1885), 0, -1, sizeof(t1885_SFs), 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 49, 9, 5, 0, 0, 33, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1907_TI;

extern TypeInfo t1907_TI;
extern TypeInfo t1278_TI;
extern TypeInfo t157_TI;
extern TypeInfo t1885_TI;
extern TypeInfo t31_TI;
extern TypeInfo t33_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m10179_MI;
extern MethodInfo m6924_MI;
extern MethodInfo m1450_MI;
extern MethodInfo m3022_MI;
extern MethodInfo m7129_MI;
extern MethodInfo m6925_MI;


// Metadata Definition System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.ICanvasElement>
extern Il2CppType t1885_0_0_1;
FieldInfo t1907_f0_FieldInfo = 
{
	"l", &t1885_0_0_1, &t1907_TI, offsetof(t1907, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t1907_f1_FieldInfo = 
{
	"next", &t35_0_0_1, &t1907_TI, offsetof(t1907, f1) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t1907_f2_FieldInfo = 
{
	"ver", &t35_0_0_1, &t1907_TI, offsetof(t1907, f2) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t157_0_0_1;
FieldInfo t1907_f3_FieldInfo = 
{
	"current", &t157_0_0_1, &t1907_TI, offsetof(t1907, f3) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t1907_FIs[] =
{
	&t1907_f0_FieldInfo,
	&t1907_f1_FieldInfo,
	&t1907_f2_FieldInfo,
	&t1907_f3_FieldInfo,
	NULL
};
extern MethodInfo m10177_MI;
static PropertyInfo t1907____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1907_TI, "System.Collections.IEnumerator.Current", &m10177_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10181_MI;
static PropertyInfo t1907____Current_PropertyInfo = 
{
	&t1907_TI, "Current", &m10181_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1907_PIs[] =
{
	&t1907____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1907____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1885_0_0_0;
static ParameterInfo t1907_m10176_ParameterInfos[] = 
{
	{"l", 0, 134217728, &EmptyCustomAttributesCache, &t1885_0_0_0},
};
extern TypeInfo t1907_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10176_MI = 
{
	".ctor", (methodPointerType)&m8180_gshared, &t1907_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1907_m10176_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1907_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10177_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8181_gshared, &t1907_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1907_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10178_MI = 
{
	"Dispose", (methodPointerType)&m8182_gshared, &t1907_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1907_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10179_MI = 
{
	"VerifyState", (methodPointerType)&m8183_gshared, &t1907_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1907_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10180_MI = 
{
	"MoveNext", (methodPointerType)&m8184_gshared, &t1907_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1907_TI;
extern Il2CppType t157_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10181_MI = 
{
	"get_Current", (methodPointerType)&m8185_gshared, &t1907_TI, &t157_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1907_MIs[] =
{
	&m10176_MI,
	&m10177_MI,
	&m10178_MI,
	&m10179_MI,
	&m10180_MI,
	&m10181_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m10177_MI;
extern MethodInfo m10180_MI;
extern MethodInfo m10178_MI;
extern MethodInfo m10181_MI;
static MethodInfo* t1907_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m10177_MI,
	&m10180_MI,
	&m10178_MI,
	&m10181_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t1886_TI;
static TypeInfo* t1907_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t1886_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t1886_TI;
static Il2CppInterfaceOffsetPair t1907_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t1886_TI, 7},
};
extern MethodInfo m10179_MI;
extern TypeInfo t157_TI;
extern TypeInfo t1907_TI;
static void* t1907_RGCTXData[3] = 
{
	&m10179_MI,
	&t157_TI,
	&t1907_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1907_0_0_0;
extern Il2CppType t1907_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t1907_TI;
extern Il2CppGenericClass t1907_GC;
extern TypeInfo t848_TI;
TypeInfo t1907_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t1907_MIs, t1907_PIs, t1907_FIs, NULL, &t122_TI, NULL, &t848_TI, &t1907_TI, t1907_ITIs, t1907_VT, &EmptyCustomAttributesCache, &t1907_TI, &t1907_0_0_0, &t1907_1_0_0, t1907_IOs, &t1907_GC, NULL, NULL, NULL, t1907_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1907)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 4, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1906_TI;

extern TypeInfo t1906_TI;
extern TypeInfo t157_TI;
extern TypeInfo t35_TI;
extern TypeInfo t345_TI;
extern TypeInfo t1908_TI;
extern TypeInfo t1904_TI;
extern TypeInfo t338_TI;
extern TypeInfo t651_TI;
extern TypeInfo t25_TI;
extern TypeInfo t24_TI;
extern TypeInfo t600_TI;
extern TypeInfo t36_TI;
extern TypeInfo t26_TI;
extern TypeInfo t1887_TI;
extern TypeInfo t1905_TI;
extern TypeInfo t1886_TI;
#include "t1909MD.h"
extern MethodInfo m10211_MI;
extern MethodInfo m1532_MI;
extern MethodInfo m23736_MI;
extern MethodInfo m23741_MI;
extern MethodInfo m73_MI;
extern MethodInfo m2974_MI;
extern MethodInfo m7416_MI;
extern MethodInfo m7325_MI;
extern MethodInfo m10243_MI;
extern MethodInfo m23745_MI;
extern MethodInfo m23738_MI;
extern MethodInfo m23746_MI;
extern MethodInfo m23748_MI;


// Metadata Definition System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>
extern Il2CppType t1908_0_0_1;
FieldInfo t1906_f0_FieldInfo = 
{
	"list", &t1908_0_0_1, &t1906_TI, offsetof(t1906, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1906_FIs[] =
{
	&t1906_f0_FieldInfo,
	NULL
};
extern MethodInfo m10188_MI;
extern MethodInfo m10189_MI;
static PropertyInfo t1906____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo = 
{
	&t1906_TI, "System.Collections.Generic.IList<T>.Item", &m10188_MI, &m10189_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10190_MI;
static PropertyInfo t1906____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t1906_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m10190_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10200_MI;
static PropertyInfo t1906____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t1906_TI, "System.Collections.ICollection.IsSynchronized", &m10200_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10201_MI;
static PropertyInfo t1906____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t1906_TI, "System.Collections.ICollection.SyncRoot", &m10201_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10202_MI;
static PropertyInfo t1906____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t1906_TI, "System.Collections.IList.IsFixedSize", &m10202_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10203_MI;
static PropertyInfo t1906____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t1906_TI, "System.Collections.IList.IsReadOnly", &m10203_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10204_MI;
extern MethodInfo m10205_MI;
static PropertyInfo t1906____System_Collections_IList_Item_PropertyInfo = 
{
	&t1906_TI, "System.Collections.IList.Item", &m10204_MI, &m10205_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10210_MI;
static PropertyInfo t1906____Count_PropertyInfo = 
{
	&t1906_TI, "Count", &m10210_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10211_MI;
static PropertyInfo t1906____Item_PropertyInfo = 
{
	&t1906_TI, "Item", &m10211_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1906_PIs[] =
{
	&t1906____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo,
	&t1906____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t1906____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t1906____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t1906____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t1906____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t1906____System_Collections_IList_Item_PropertyInfo,
	&t1906____Count_PropertyInfo,
	&t1906____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1908_0_0_0;
static ParameterInfo t1906_m10182_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t1908_0_0_0},
};
extern TypeInfo t1906_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10182_MI = 
{
	".ctor", (methodPointerType)&m8186_gshared, &t1906_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1906_m10182_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t157_0_0_0;
static ParameterInfo t1906_m10183_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
};
extern TypeInfo t1906_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10183_MI = 
{
	"System.Collections.Generic.ICollection<T>.Add", (methodPointerType)&m8187_gshared, &t1906_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1906_m10183_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1906_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10184_MI = 
{
	"System.Collections.Generic.ICollection<T>.Clear", (methodPointerType)&m8188_gshared, &t1906_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 481, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t157_0_0_0;
static ParameterInfo t1906_m10185_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
};
extern TypeInfo t1906_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10185_MI = 
{
	"System.Collections.Generic.IList<T>.Insert", (methodPointerType)&m8189_gshared, &t1906_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t1906_m10185_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t157_0_0_0;
static ParameterInfo t1906_m10186_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
};
extern TypeInfo t1906_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10186_MI = 
{
	"System.Collections.Generic.ICollection<T>.Remove", (methodPointerType)&m8190_gshared, &t1906_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1906_m10186_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1906_m10187_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1906_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10187_MI = 
{
	"System.Collections.Generic.IList<T>.RemoveAt", (methodPointerType)&m8191_gshared, &t1906_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t1906_m10187_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1906_m10188_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1906_TI;
extern Il2CppType t157_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10188_MI = 
{
	"System.Collections.Generic.IList<T>.get_Item", (methodPointerType)&m8192_gshared, &t1906_TI, &t157_0_0_0, RuntimeInvoker_t14_t35, t1906_m10188_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t157_0_0_0;
static ParameterInfo t1906_m10189_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
};
extern TypeInfo t1906_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10189_MI = 
{
	"System.Collections.Generic.IList<T>.set_Item", (methodPointerType)&m8193_gshared, &t1906_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t1906_m10189_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1906_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10190_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m8194_gshared, &t1906_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t24_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t1906_m10191_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1906_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10191_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m8195_gshared, &t1906_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t1906_m10191_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1906_TI;
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10192_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8196_gshared, &t1906_TI, &t36_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1906_m10193_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1906_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10193_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m8197_gshared, &t1906_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t1906_m10193_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1906_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10194_MI = 
{
	"System.Collections.IList.Clear", (methodPointerType)&m8198_gshared, &t1906_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 481, 0, 14, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1906_m10195_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1906_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10195_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m8199_gshared, &t1906_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1906_m10195_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1906_m10196_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1906_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10196_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m8200_gshared, &t1906_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t1906_m10196_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t1906_m10197_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1906_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10197_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m8201_gshared, &t1906_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t1906_m10197_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1906_m10198_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1906_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10198_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m8202_gshared, &t1906_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1906_m10198_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1906_m10199_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1906_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10199_MI = 
{
	"System.Collections.IList.RemoveAt", (methodPointerType)&m8203_gshared, &t1906_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t1906_m10199_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 19, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1906_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10200_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m8204_gshared, &t1906_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1906_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10201_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m8205_gshared, &t1906_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1906_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10202_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m8206_gshared, &t1906_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1906_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10203_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m8207_gshared, &t1906_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1906_m10204_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1906_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10204_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m8208_gshared, &t1906_TI, &t14_0_0_0, RuntimeInvoker_t14_t35, t1906_m10204_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t1906_m10205_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1906_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10205_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m8209_gshared, &t1906_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t1906_m10205_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t157_0_0_0;
static ParameterInfo t1906_m10206_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
};
extern TypeInfo t1906_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10206_MI = 
{
	"Contains", (methodPointerType)&m8210_gshared, &t1906_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1906_m10206_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1887_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t1906_m10207_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1887_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1906_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10207_MI = 
{
	"CopyTo", (methodPointerType)&m8211_gshared, &t1906_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t1906_m10207_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1906_TI;
extern Il2CppType t1886_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10208_MI = 
{
	"GetEnumerator", (methodPointerType)&m8212_gshared, &t1906_TI, &t1886_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t157_0_0_0;
static ParameterInfo t1906_m10209_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
};
extern TypeInfo t1906_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10209_MI = 
{
	"IndexOf", (methodPointerType)&m8213_gshared, &t1906_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t1906_m10209_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1906_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10210_MI = 
{
	"get_Count", (methodPointerType)&m8214_gshared, &t1906_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1906_m10211_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1906_TI;
extern Il2CppType t157_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10211_MI = 
{
	"get_Item", (methodPointerType)&m8215_gshared, &t1906_TI, &t157_0_0_0, RuntimeInvoker_t14_t35, t1906_m10211_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 33, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1906_MIs[] =
{
	&m10182_MI,
	&m10183_MI,
	&m10184_MI,
	&m10185_MI,
	&m10186_MI,
	&m10187_MI,
	&m10188_MI,
	&m10189_MI,
	&m10190_MI,
	&m10191_MI,
	&m10192_MI,
	&m10193_MI,
	&m10194_MI,
	&m10195_MI,
	&m10196_MI,
	&m10197_MI,
	&m10198_MI,
	&m10199_MI,
	&m10200_MI,
	&m10201_MI,
	&m10202_MI,
	&m10203_MI,
	&m10204_MI,
	&m10205_MI,
	&m10206_MI,
	&m10207_MI,
	&m10208_MI,
	&m10209_MI,
	&m10210_MI,
	&m10211_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m10192_MI;
extern MethodInfo m10210_MI;
extern MethodInfo m10200_MI;
extern MethodInfo m10201_MI;
extern MethodInfo m10191_MI;
extern MethodInfo m10202_MI;
extern MethodInfo m10203_MI;
extern MethodInfo m10204_MI;
extern MethodInfo m10205_MI;
extern MethodInfo m10193_MI;
extern MethodInfo m10194_MI;
extern MethodInfo m10195_MI;
extern MethodInfo m10196_MI;
extern MethodInfo m10197_MI;
extern MethodInfo m10198_MI;
extern MethodInfo m10199_MI;
extern MethodInfo m10210_MI;
extern MethodInfo m10190_MI;
extern MethodInfo m10183_MI;
extern MethodInfo m10184_MI;
extern MethodInfo m10206_MI;
extern MethodInfo m10207_MI;
extern MethodInfo m10186_MI;
extern MethodInfo m10209_MI;
extern MethodInfo m10185_MI;
extern MethodInfo m10187_MI;
extern MethodInfo m10188_MI;
extern MethodInfo m10189_MI;
extern MethodInfo m10208_MI;
extern MethodInfo m10211_MI;
static MethodInfo* t1906_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m10192_MI,
	&m10210_MI,
	&m10200_MI,
	&m10201_MI,
	&m10191_MI,
	&m10202_MI,
	&m10203_MI,
	&m10204_MI,
	&m10205_MI,
	&m10193_MI,
	&m10194_MI,
	&m10195_MI,
	&m10196_MI,
	&m10197_MI,
	&m10198_MI,
	&m10199_MI,
	&m10210_MI,
	&m10190_MI,
	&m10183_MI,
	&m10184_MI,
	&m10206_MI,
	&m10207_MI,
	&m10186_MI,
	&m10209_MI,
	&m10185_MI,
	&m10187_MI,
	&m10188_MI,
	&m10189_MI,
	&m10208_MI,
	&m10211_MI,
};
extern TypeInfo t600_TI;
extern TypeInfo t651_TI;
extern TypeInfo t1023_TI;
extern TypeInfo t1904_TI;
extern TypeInfo t1908_TI;
extern TypeInfo t1905_TI;
static TypeInfo* t1906_ITIs[] = 
{
	&t600_TI,
	&t651_TI,
	&t1023_TI,
	&t1904_TI,
	&t1908_TI,
	&t1905_TI,
};
extern TypeInfo t600_TI;
extern TypeInfo t651_TI;
extern TypeInfo t1023_TI;
extern TypeInfo t1904_TI;
extern TypeInfo t1908_TI;
extern TypeInfo t1905_TI;
static Il2CppInterfaceOffsetPair t1906_IOs[] = 
{
	{ &t600_TI, 4},
	{ &t651_TI, 5},
	{ &t1023_TI, 9},
	{ &t1904_TI, 20},
	{ &t1908_TI, 27},
	{ &t1905_TI, 32},
};
extern MethodInfo m10211_MI;
extern MethodInfo m10243_MI;
extern TypeInfo t157_TI;
extern MethodInfo m23745_MI;
extern MethodInfo m23738_MI;
extern MethodInfo m23736_MI;
extern MethodInfo m23746_MI;
extern MethodInfo m23748_MI;
extern MethodInfo m23741_MI;
static void* t1906_RGCTXData[9] = 
{
	&m10211_MI,
	&m10243_MI,
	&t157_TI,
	&m23745_MI,
	&m23738_MI,
	&m23736_MI,
	&m23746_MI,
	&m23748_MI,
	&m23741_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1906_0_0_0;
extern Il2CppType t1906_1_0_0;
extern TypeInfo t14_TI;
struct t1906;
extern TypeInfo t1906_TI;
extern Il2CppGenericClass t1906_GC;
extern CustomAttributesCache t850__CustomAttributeCache;
TypeInfo t1906_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ReadOnlyCollection`1", "System.Collections.ObjectModel", t1906_MIs, t1906_PIs, t1906_FIs, NULL, &t14_TI, NULL, NULL, &t1906_TI, t1906_ITIs, t1906_VT, &t850__CustomAttributeCache, &t1906_TI, &t1906_0_0_0, &t1906_1_0_0, t1906_IOs, &t1906_GC, NULL, NULL, NULL, t1906_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1906), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 30, 9, 1, 0, 0, 34, 6, 6};
#include "t1909.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1909_TI;

extern TypeInfo t1909_TI;
extern TypeInfo t1904_TI;
extern TypeInfo t26_TI;
extern TypeInfo t1908_TI;
extern TypeInfo t157_TI;
extern TypeInfo t35_TI;
extern TypeInfo t25_TI;
extern TypeInfo t1885_TI;
extern TypeInfo t651_TI;
extern TypeInfo t14_TI;
extern TypeInfo t24_TI;
extern TypeInfo t1905_TI;
extern TypeInfo t1886_TI;
extern TypeInfo t1887_TI;
extern TypeInfo t31_TI;
extern TypeInfo t319_TI;
extern TypeInfo t345_TI;
extern TypeInfo t1023_TI;
extern Il2CppType t157_0_0_0;
extern MethodInfo m23742_MI;
extern MethodInfo m10246_MI;
extern MethodInfo m10247_MI;
extern MethodInfo m23736_MI;
extern MethodInfo m10244_MI;
extern MethodInfo m10242_MI;
extern MethodInfo m23741_MI;
extern MethodInfo m73_MI;
extern MethodInfo m10127_MI;
extern MethodInfo m7415_MI;
extern MethodInfo m7416_MI;
extern MethodInfo m23748_MI;
extern MethodInfo m10235_MI;
extern MethodInfo m10243_MI;
extern MethodInfo m23745_MI;
extern MethodInfo m23738_MI;
extern MethodInfo m10245_MI;
extern MethodInfo m10233_MI;
extern MethodInfo m10238_MI;
extern MethodInfo m10229_MI;
extern MethodInfo m23744_MI;
extern MethodInfo m23746_MI;
extern MethodInfo m23739_MI;
extern MethodInfo m23740_MI;
extern MethodInfo m23737_MI;
extern MethodInfo m1571_MI;
extern MethodInfo m3841_MI;
extern MethodInfo m1959_MI;
extern MethodInfo m1532_MI;
extern MethodInfo m7414_MI;
extern MethodInfo m7417_MI;


// Metadata Definition System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>
extern Il2CppType t1908_0_0_1;
FieldInfo t1909_f0_FieldInfo = 
{
	"list", &t1908_0_0_1, &t1909_TI, offsetof(t1909, f0), &EmptyCustomAttributesCache};
extern Il2CppType t14_0_0_1;
FieldInfo t1909_f1_FieldInfo = 
{
	"syncRoot", &t14_0_0_1, &t1909_TI, offsetof(t1909, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1909_FIs[] =
{
	&t1909_f0_FieldInfo,
	&t1909_f1_FieldInfo,
	NULL
};
extern MethodInfo m10213_MI;
static PropertyInfo t1909____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t1909_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m10213_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10221_MI;
static PropertyInfo t1909____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t1909_TI, "System.Collections.ICollection.IsSynchronized", &m10221_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10222_MI;
static PropertyInfo t1909____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t1909_TI, "System.Collections.ICollection.SyncRoot", &m10222_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10223_MI;
static PropertyInfo t1909____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t1909_TI, "System.Collections.IList.IsFixedSize", &m10223_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10224_MI;
static PropertyInfo t1909____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t1909_TI, "System.Collections.IList.IsReadOnly", &m10224_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10225_MI;
extern MethodInfo m10226_MI;
static PropertyInfo t1909____System_Collections_IList_Item_PropertyInfo = 
{
	&t1909_TI, "System.Collections.IList.Item", &m10225_MI, &m10226_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10239_MI;
static PropertyInfo t1909____Count_PropertyInfo = 
{
	&t1909_TI, "Count", &m10239_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10240_MI;
extern MethodInfo m10241_MI;
static PropertyInfo t1909____Item_PropertyInfo = 
{
	&t1909_TI, "Item", &m10240_MI, &m10241_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1909_PIs[] =
{
	&t1909____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t1909____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t1909____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t1909____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t1909____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t1909____System_Collections_IList_Item_PropertyInfo,
	&t1909____Count_PropertyInfo,
	&t1909____Item_PropertyInfo,
	NULL
};
extern TypeInfo t1909_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10212_MI = 
{
	".ctor", (methodPointerType)&m8216_gshared, &t1909_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1909_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10213_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m8217_gshared, &t1909_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t24_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t1909_m10214_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1909_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10214_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m8218_gshared, &t1909_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t1909_m10214_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1909_TI;
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10215_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8219_gshared, &t1909_TI, &t36_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1909_m10216_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1909_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10216_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m8220_gshared, &t1909_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t1909_m10216_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1909_m10217_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1909_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10217_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m8221_gshared, &t1909_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1909_m10217_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1909_m10218_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1909_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10218_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m8222_gshared, &t1909_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t1909_m10218_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t1909_m10219_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1909_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10219_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m8223_gshared, &t1909_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t1909_m10219_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1909_m10220_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1909_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10220_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m8224_gshared, &t1909_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1909_m10220_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1909_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10221_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m8225_gshared, &t1909_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1909_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10222_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m8226_gshared, &t1909_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1909_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10223_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m8227_gshared, &t1909_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1909_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10224_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m8228_gshared, &t1909_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1909_m10225_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1909_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10225_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m8229_gshared, &t1909_TI, &t14_0_0_0, RuntimeInvoker_t14_t35, t1909_m10225_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t1909_m10226_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1909_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10226_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m8230_gshared, &t1909_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t1909_m10226_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t157_0_0_0;
static ParameterInfo t1909_m10227_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
};
extern TypeInfo t1909_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10227_MI = 
{
	"Add", (methodPointerType)&m8231_gshared, &t1909_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1909_m10227_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1909_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10228_MI = 
{
	"Clear", (methodPointerType)&m8232_gshared, &t1909_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1909_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10229_MI = 
{
	"ClearItems", (methodPointerType)&m8233_gshared, &t1909_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 452, 0, 33, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t157_0_0_0;
static ParameterInfo t1909_m10230_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
};
extern TypeInfo t1909_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10230_MI = 
{
	"Contains", (methodPointerType)&m8234_gshared, &t1909_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1909_m10230_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1887_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t1909_m10231_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1887_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1909_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10231_MI = 
{
	"CopyTo", (methodPointerType)&m8235_gshared, &t1909_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t1909_m10231_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1909_TI;
extern Il2CppType t1886_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10232_MI = 
{
	"GetEnumerator", (methodPointerType)&m8236_gshared, &t1909_TI, &t1886_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t157_0_0_0;
static ParameterInfo t1909_m10233_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
};
extern TypeInfo t1909_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10233_MI = 
{
	"IndexOf", (methodPointerType)&m8237_gshared, &t1909_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t1909_m10233_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t157_0_0_0;
static ParameterInfo t1909_m10234_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
};
extern TypeInfo t1909_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10234_MI = 
{
	"Insert", (methodPointerType)&m8238_gshared, &t1909_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t1909_m10234_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t157_0_0_0;
static ParameterInfo t1909_m10235_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
};
extern TypeInfo t1909_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10235_MI = 
{
	"InsertItem", (methodPointerType)&m8239_gshared, &t1909_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t1909_m10235_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 34, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t157_0_0_0;
static ParameterInfo t1909_m10236_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
};
extern TypeInfo t1909_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10236_MI = 
{
	"Remove", (methodPointerType)&m8240_gshared, &t1909_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1909_m10236_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1909_m10237_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1909_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10237_MI = 
{
	"RemoveAt", (methodPointerType)&m8241_gshared, &t1909_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t1909_m10237_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1909_m10238_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1909_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10238_MI = 
{
	"RemoveItem", (methodPointerType)&m8242_gshared, &t1909_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t1909_m10238_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 35, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1909_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10239_MI = 
{
	"get_Count", (methodPointerType)&m8243_gshared, &t1909_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1909_m10240_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1909_TI;
extern Il2CppType t157_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10240_MI = 
{
	"get_Item", (methodPointerType)&m8244_gshared, &t1909_TI, &t157_0_0_0, RuntimeInvoker_t14_t35, t1909_m10240_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t157_0_0_0;
static ParameterInfo t1909_m10241_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
};
extern TypeInfo t1909_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10241_MI = 
{
	"set_Item", (methodPointerType)&m8245_gshared, &t1909_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t1909_m10241_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t157_0_0_0;
static ParameterInfo t1909_m10242_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
};
extern TypeInfo t1909_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10242_MI = 
{
	"SetItem", (methodPointerType)&m8246_gshared, &t1909_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t1909_m10242_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 36, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1909_m10243_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1909_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10243_MI = 
{
	"IsValidItem", (methodPointerType)&m8247_gshared, &t1909_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1909_m10243_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1909_m10244_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1909_TI;
extern Il2CppType t157_0_0_0;
extern void* RuntimeInvoker_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10244_MI = 
{
	"ConvertItem", (methodPointerType)&m8248_gshared, &t1909_TI, &t157_0_0_0, RuntimeInvoker_t14_t14, t1909_m10244_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1908_0_0_0;
static ParameterInfo t1909_m10245_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t1908_0_0_0},
};
extern TypeInfo t1909_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10245_MI = 
{
	"CheckWritable", (methodPointerType)&m8249_gshared, &t1909_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1909_m10245_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1908_0_0_0;
static ParameterInfo t1909_m10246_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t1908_0_0_0},
};
extern TypeInfo t1909_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10246_MI = 
{
	"IsSynchronized", (methodPointerType)&m8250_gshared, &t1909_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1909_m10246_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1908_0_0_0;
static ParameterInfo t1909_m10247_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t1908_0_0_0},
};
extern TypeInfo t1909_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10247_MI = 
{
	"IsFixedSize", (methodPointerType)&m8251_gshared, &t1909_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1909_m10247_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1909_MIs[] =
{
	&m10212_MI,
	&m10213_MI,
	&m10214_MI,
	&m10215_MI,
	&m10216_MI,
	&m10217_MI,
	&m10218_MI,
	&m10219_MI,
	&m10220_MI,
	&m10221_MI,
	&m10222_MI,
	&m10223_MI,
	&m10224_MI,
	&m10225_MI,
	&m10226_MI,
	&m10227_MI,
	&m10228_MI,
	&m10229_MI,
	&m10230_MI,
	&m10231_MI,
	&m10232_MI,
	&m10233_MI,
	&m10234_MI,
	&m10235_MI,
	&m10236_MI,
	&m10237_MI,
	&m10238_MI,
	&m10239_MI,
	&m10240_MI,
	&m10241_MI,
	&m10242_MI,
	&m10243_MI,
	&m10244_MI,
	&m10245_MI,
	&m10246_MI,
	&m10247_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m10215_MI;
extern MethodInfo m10239_MI;
extern MethodInfo m10221_MI;
extern MethodInfo m10222_MI;
extern MethodInfo m10214_MI;
extern MethodInfo m10223_MI;
extern MethodInfo m10224_MI;
extern MethodInfo m10225_MI;
extern MethodInfo m10226_MI;
extern MethodInfo m10216_MI;
extern MethodInfo m10228_MI;
extern MethodInfo m10217_MI;
extern MethodInfo m10218_MI;
extern MethodInfo m10219_MI;
extern MethodInfo m10220_MI;
extern MethodInfo m10237_MI;
extern MethodInfo m10239_MI;
extern MethodInfo m10213_MI;
extern MethodInfo m10227_MI;
extern MethodInfo m10228_MI;
extern MethodInfo m10230_MI;
extern MethodInfo m10231_MI;
extern MethodInfo m10236_MI;
extern MethodInfo m10233_MI;
extern MethodInfo m10234_MI;
extern MethodInfo m10237_MI;
extern MethodInfo m10240_MI;
extern MethodInfo m10241_MI;
extern MethodInfo m10232_MI;
extern MethodInfo m10229_MI;
extern MethodInfo m10235_MI;
extern MethodInfo m10238_MI;
extern MethodInfo m10242_MI;
static MethodInfo* t1909_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m10215_MI,
	&m10239_MI,
	&m10221_MI,
	&m10222_MI,
	&m10214_MI,
	&m10223_MI,
	&m10224_MI,
	&m10225_MI,
	&m10226_MI,
	&m10216_MI,
	&m10228_MI,
	&m10217_MI,
	&m10218_MI,
	&m10219_MI,
	&m10220_MI,
	&m10237_MI,
	&m10239_MI,
	&m10213_MI,
	&m10227_MI,
	&m10228_MI,
	&m10230_MI,
	&m10231_MI,
	&m10236_MI,
	&m10233_MI,
	&m10234_MI,
	&m10237_MI,
	&m10240_MI,
	&m10241_MI,
	&m10232_MI,
	&m10229_MI,
	&m10235_MI,
	&m10238_MI,
	&m10242_MI,
};
extern TypeInfo t600_TI;
extern TypeInfo t651_TI;
extern TypeInfo t1023_TI;
extern TypeInfo t1904_TI;
extern TypeInfo t1908_TI;
extern TypeInfo t1905_TI;
static TypeInfo* t1909_ITIs[] = 
{
	&t600_TI,
	&t651_TI,
	&t1023_TI,
	&t1904_TI,
	&t1908_TI,
	&t1905_TI,
};
extern TypeInfo t600_TI;
extern TypeInfo t651_TI;
extern TypeInfo t1023_TI;
extern TypeInfo t1904_TI;
extern TypeInfo t1908_TI;
extern TypeInfo t1905_TI;
static Il2CppInterfaceOffsetPair t1909_IOs[] = 
{
	{ &t600_TI, 4},
	{ &t651_TI, 5},
	{ &t1023_TI, 9},
	{ &t1904_TI, 20},
	{ &t1908_TI, 27},
	{ &t1905_TI, 32},
};
extern TypeInfo t1885_TI;
extern MethodInfo m10127_MI;
extern MethodInfo m23742_MI;
extern MethodInfo m23748_MI;
extern MethodInfo m23741_MI;
extern MethodInfo m10244_MI;
extern MethodInfo m10235_MI;
extern MethodInfo m10243_MI;
extern TypeInfo t157_TI;
extern MethodInfo m23745_MI;
extern MethodInfo m23738_MI;
extern MethodInfo m10245_MI;
extern MethodInfo m10233_MI;
extern MethodInfo m10238_MI;
extern MethodInfo m10246_MI;
extern MethodInfo m10247_MI;
extern MethodInfo m23736_MI;
extern MethodInfo m10242_MI;
extern MethodInfo m10229_MI;
extern MethodInfo m23744_MI;
extern MethodInfo m23746_MI;
extern MethodInfo m23739_MI;
extern MethodInfo m23740_MI;
extern MethodInfo m23737_MI;
extern Il2CppType t157_0_0_0;
static void* t1909_RGCTXData[25] = 
{
	&t1885_TI,
	&m10127_MI,
	&m23742_MI,
	&m23748_MI,
	&m23741_MI,
	&m10244_MI,
	&m10235_MI,
	&m10243_MI,
	&t157_TI,
	&m23745_MI,
	&m23738_MI,
	&m10245_MI,
	&m10233_MI,
	&m10238_MI,
	&m10246_MI,
	&m10247_MI,
	&m23736_MI,
	&m10242_MI,
	&m10229_MI,
	&m23744_MI,
	&m23746_MI,
	&m23739_MI,
	&m23740_MI,
	&m23737_MI,
	(void*)&t157_0_0_0,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1909_0_0_0;
extern Il2CppType t1909_1_0_0;
extern TypeInfo t14_TI;
struct t1909;
extern TypeInfo t1909_TI;
extern Il2CppGenericClass t1909_GC;
extern CustomAttributesCache t849__CustomAttributeCache;
TypeInfo t1909_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Collection`1", "System.Collections.ObjectModel", t1909_MIs, t1909_PIs, t1909_FIs, NULL, &t14_TI, NULL, NULL, &t1909_TI, t1909_ITIs, t1909_VT, &t849__CustomAttributeCache, &t1909_TI, &t1909_0_0_0, &t1909_1_0_0, t1909_IOs, &t1909_GC, NULL, NULL, NULL, t1909_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1909), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 36, 8, 2, 0, 0, 37, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1910_TI;
#include "t1910MD.h"

#include "t845.h"
#include "t1911.h"
extern TypeInfo t1910_TI;
extern TypeInfo t5154_TI;
extern TypeInfo t31_TI;
extern TypeInfo t157_TI;
extern TypeInfo t26_TI;
extern TypeInfo t845_TI;
extern TypeInfo t534_TI;
extern TypeInfo t1911_TI;
extern TypeInfo t35_TI;
#include "t1231MD.h"
#include "t1911MD.h"
extern Il2CppType t5154_0_0_0;
extern Il2CppType t157_0_0_0;
extern Il2CppType t845_0_0_0;
extern MethodInfo m73_MI;
extern MethodInfo m1571_MI;
extern MethodInfo m3005_MI;
extern MethodInfo m3003_MI;
extern MethodInfo m6460_MI;
extern MethodInfo m10253_MI;
extern MethodInfo m23750_MI;
extern MethodInfo m17611_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.ICanvasElement>
extern Il2CppType t1910_0_0_49;
FieldInfo t1910_f0_FieldInfo = 
{
	"_default", &t1910_0_0_49, &t1910_TI, offsetof(t1910_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1910_FIs[] =
{
	&t1910_f0_FieldInfo,
	NULL
};
extern MethodInfo m10252_MI;
static PropertyInfo t1910____Default_PropertyInfo = 
{
	&t1910_TI, "Default", &m10252_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1910_PIs[] =
{
	&t1910____Default_PropertyInfo,
	NULL
};
extern TypeInfo t1910_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10248_MI = 
{
	".ctor", (methodPointerType)&m8252_gshared, &t1910_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1910_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10249_MI = 
{
	".cctor", (methodPointerType)&m8253_gshared, &t1910_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1910_m10250_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1910_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10250_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m8254_gshared, &t1910_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t1910_m10250_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t1910_m10251_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1910_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10251_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m8255_gshared, &t1910_TI, &t26_0_0_0, RuntimeInvoker_t26_t14_t14, t1910_m10251_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t157_0_0_0;
static ParameterInfo t1910_m23750_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
};
extern TypeInfo t1910_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23750_MI = 
{
	"GetHashCode", NULL, &t1910_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t1910_m23750_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t157_0_0_0;
extern Il2CppType t157_0_0_0;
static ParameterInfo t1910_m17611_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
};
extern TypeInfo t1910_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m17611_MI = 
{
	"Equals", NULL, &t1910_TI, &t26_0_0_0, RuntimeInvoker_t26_t14_t14, t1910_m17611_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1910_TI;
extern Il2CppType t1910_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10252_MI = 
{
	"get_Default", (methodPointerType)&m8256_gshared, &t1910_TI, &t1910_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1910_MIs[] =
{
	&m10248_MI,
	&m10249_MI,
	&m10250_MI,
	&m10251_MI,
	&m23750_MI,
	&m17611_MI,
	&m10252_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m17611_MI;
extern MethodInfo m23750_MI;
extern MethodInfo m10251_MI;
extern MethodInfo m10250_MI;
static MethodInfo* t1910_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m17611_MI,
	&m23750_MI,
	&m10251_MI,
	&m10250_MI,
	NULL,
	NULL,
};
extern TypeInfo t1914_TI;
extern TypeInfo t868_TI;
static TypeInfo* t1910_ITIs[] = 
{
	&t1914_TI,
	&t868_TI,
};
extern TypeInfo t1914_TI;
extern TypeInfo t868_TI;
static Il2CppInterfaceOffsetPair t1910_IOs[] = 
{
	{ &t1914_TI, 4},
	{ &t868_TI, 6},
};
extern Il2CppType t5154_0_0_0;
extern Il2CppType t157_0_0_0;
extern TypeInfo t1910_TI;
extern TypeInfo t1910_TI;
extern TypeInfo t1911_TI;
extern MethodInfo m10253_MI;
extern TypeInfo t157_TI;
extern MethodInfo m23750_MI;
extern MethodInfo m17611_MI;
static void* t1910_RGCTXData[9] = 
{
	(void*)&t5154_0_0_0,
	(void*)&t157_0_0_0,
	&t1910_TI,
	&t1910_TI,
	&t1911_TI,
	&m10253_MI,
	&t157_TI,
	&m23750_MI,
	&m17611_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1910_0_0_0;
extern Il2CppType t1910_1_0_0;
extern TypeInfo t14_TI;
struct t1910;
extern TypeInfo t1910_TI;
extern Il2CppGenericClass t1910_GC;
TypeInfo t1910_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t1910_MIs, t1910_PIs, t1910_FIs, NULL, &t14_TI, NULL, NULL, &t1910_TI, t1910_ITIs, t1910_VT, &EmptyCustomAttributesCache, &t1910_TI, &t1910_0_0_0, &t1910_1_0_0, t1910_IOs, &t1910_GC, NULL, NULL, NULL, t1910_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1910), 0, -1, sizeof(t1910_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1914_TI;



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<UnityEngine.UI.ICanvasElement>
extern Il2CppType t157_0_0_0;
extern Il2CppType t157_0_0_0;
static ParameterInfo t1914_m23751_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
};
extern TypeInfo t1914_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23751_MI = 
{
	"Equals", NULL, &t1914_TI, &t26_0_0_0, RuntimeInvoker_t26_t14_t14, t1914_m23751_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t157_0_0_0;
static ParameterInfo t1914_m23752_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
};
extern TypeInfo t1914_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23752_MI = 
{
	"GetHashCode", NULL, &t1914_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t1914_m23752_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1914_MIs[] =
{
	&m23751_MI,
	&m23752_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1914_0_0_0;
extern Il2CppType t1914_1_0_0;
struct t1914;
extern TypeInfo t1914_TI;
extern Il2CppGenericClass t1914_GC;
TypeInfo t1914_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t1914_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1914_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1914_TI, &t1914_0_0_0, &t1914_1_0_0, NULL, &t1914_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5154_TI;



// Metadata Definition System.IEquatable`1<UnityEngine.UI.ICanvasElement>
extern Il2CppType t157_0_0_0;
static ParameterInfo t5154_m23753_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
};
extern TypeInfo t5154_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23753_MI = 
{
	"Equals", NULL, &t5154_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t5154_m23753_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5154_MIs[] =
{
	&m23753_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5154_0_0_0;
extern Il2CppType t5154_1_0_0;
struct t5154;
extern TypeInfo t5154_TI;
extern Il2CppGenericClass t5154_GC;
TypeInfo t5154_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t5154_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5154_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5154_TI, &t5154_0_0_0, &t5154_1_0_0, NULL, &t5154_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1911_TI;

extern TypeInfo t157_TI;
extern TypeInfo t14_TI;
extern TypeInfo t35_TI;
extern TypeInfo t26_TI;
extern MethodInfo m10248_MI;
extern MethodInfo m71_MI;
extern MethodInfo m70_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UI.ICanvasElement>
extern TypeInfo t1911_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10253_MI = 
{
	".ctor", (methodPointerType)&m8287_gshared, &t1911_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t157_0_0_0;
static ParameterInfo t1911_m10254_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
};
extern TypeInfo t1911_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10254_MI = 
{
	"GetHashCode", (methodPointerType)&m8288_gshared, &t1911_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t1911_m10254_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t157_0_0_0;
extern Il2CppType t157_0_0_0;
static ParameterInfo t1911_m10255_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
};
extern TypeInfo t1911_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10255_MI = 
{
	"Equals", (methodPointerType)&m8289_gshared, &t1911_TI, &t26_0_0_0, RuntimeInvoker_t26_t14_t14, t1911_m10255_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1911_MIs[] =
{
	&m10253_MI,
	&m10254_MI,
	&m10255_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m10255_MI;
extern MethodInfo m10254_MI;
extern MethodInfo m10251_MI;
extern MethodInfo m10250_MI;
extern MethodInfo m10254_MI;
extern MethodInfo m10255_MI;
static MethodInfo* t1911_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m10255_MI,
	&m10254_MI,
	&m10251_MI,
	&m10250_MI,
	&m10254_MI,
	&m10255_MI,
};
extern TypeInfo t1914_TI;
extern TypeInfo t868_TI;
static Il2CppInterfaceOffsetPair t1911_IOs[] = 
{
	{ &t1914_TI, 4},
	{ &t868_TI, 6},
};
extern Il2CppType t5154_0_0_0;
extern Il2CppType t157_0_0_0;
extern TypeInfo t1910_TI;
extern TypeInfo t1910_TI;
extern TypeInfo t1911_TI;
extern MethodInfo m10253_MI;
extern TypeInfo t157_TI;
extern MethodInfo m23750_MI;
extern MethodInfo m17611_MI;
extern MethodInfo m10248_MI;
extern TypeInfo t157_TI;
static void* t1911_RGCTXData[11] = 
{
	(void*)&t5154_0_0_0,
	(void*)&t157_0_0_0,
	&t1910_TI,
	&t1910_TI,
	&t1911_TI,
	&m10253_MI,
	&t157_TI,
	&m23750_MI,
	&m17611_MI,
	&m10248_MI,
	&t157_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1911_0_0_0;
extern Il2CppType t1911_1_0_0;
extern TypeInfo t1910_TI;
struct t1911;
extern TypeInfo t1911_TI;
extern Il2CppGenericClass t1911_GC;
extern TypeInfo t844_TI;
TypeInfo t1911_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t1911_MIs, NULL, NULL, NULL, &t1910_TI, NULL, &t844_TI, &t1911_TI, NULL, t1911_VT, &EmptyCustomAttributesCache, &t1911_TI, &t1911_0_0_0, &t1911_1_0_0, t1911_IOs, &t1911_GC, NULL, NULL, NULL, t1911_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1911), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t156_TI;



// Metadata Definition System.Predicate`1<UnityEngine.UI.ICanvasElement>
extern Il2CppType t14_0_0_0;
extern Il2CppType t77_0_0_0;
static ParameterInfo t156_m1543_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t77_0_0_0},
};
extern TypeInfo t156_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t77 (MethodInfo* method, void* obj, void** args);
MethodInfo m1543_MI = 
{
	".ctor", (methodPointerType)&m8290_gshared, &t156_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t77, t156_m1543_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t157_0_0_0;
static ParameterInfo t156_m10256_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
};
extern TypeInfo t156_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10256_MI = 
{
	"Invoke", (methodPointerType)&m8291_gshared, &t156_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t156_m10256_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t157_0_0_0;
extern Il2CppType t76_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t156_m10257_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t76_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t156_TI;
extern Il2CppType t75_0_0_0;
extern void* RuntimeInvoker_t14_t14_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10257_MI = 
{
	"BeginInvoke", (methodPointerType)&m8292_gshared, &t156_TI, &t75_0_0_0, RuntimeInvoker_t14_t14_t14_t14, t156_m10257_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t75_0_0_0;
static ParameterInfo t156_m10258_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t75_0_0_0},
};
extern TypeInfo t156_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10258_MI = 
{
	"EndInvoke", (methodPointerType)&m8293_gshared, &t156_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t156_m10258_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t156_MIs[] =
{
	&m1543_MI,
	&m10256_MI,
	&m10257_MI,
	&m10258_MI,
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
extern MethodInfo m10256_MI;
extern MethodInfo m10257_MI;
extern MethodInfo m10258_MI;
static MethodInfo* t156_VT[] =
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
	&m10256_MI,
	&m10257_MI,
	&m10258_MI,
};
extern TypeInfo t374_TI;
extern TypeInfo t375_TI;
static Il2CppInterfaceOffsetPair t156_IOs[] = 
{
	{ &t374_TI, 4},
	{ &t375_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t156_0_0_0;
extern Il2CppType t156_1_0_0;
extern TypeInfo t211_TI;
struct t156;
extern TypeInfo t156_TI;
extern Il2CppGenericClass t156_GC;
TypeInfo t156_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Predicate`1", "System", t156_MIs, NULL, NULL, NULL, &t211_TI, NULL, NULL, &t156_TI, NULL, t156_VT, &EmptyCustomAttributesCache, &t156_TI, &t156_0_0_0, &t156_1_0_0, t156_IOs, &t156_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t156), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1912_TI;

#include "t833.h"
#include "t1913.h"
extern TypeInfo t1912_TI;
extern TypeInfo t3350_TI;
extern TypeInfo t31_TI;
extern TypeInfo t157_TI;
extern TypeInfo t26_TI;
extern TypeInfo t833_TI;
extern TypeInfo t534_TI;
extern TypeInfo t1913_TI;
extern TypeInfo t35_TI;
extern TypeInfo t319_TI;
#include "t1913MD.h"
extern Il2CppType t3350_0_0_0;
extern Il2CppType t157_0_0_0;
extern Il2CppType t833_0_0_0;
extern MethodInfo m73_MI;
extern MethodInfo m1571_MI;
extern MethodInfo m3005_MI;
extern MethodInfo m3003_MI;
extern MethodInfo m6460_MI;
extern MethodInfo m10263_MI;
extern MethodInfo m23754_MI;
extern MethodInfo m6482_MI;


// Metadata Definition System.Collections.Generic.Comparer`1<UnityEngine.UI.ICanvasElement>
extern Il2CppType t1912_0_0_49;
FieldInfo t1912_f0_FieldInfo = 
{
	"_default", &t1912_0_0_49, &t1912_TI, offsetof(t1912_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1912_FIs[] =
{
	&t1912_f0_FieldInfo,
	NULL
};
extern MethodInfo m10262_MI;
static PropertyInfo t1912____Default_PropertyInfo = 
{
	&t1912_TI, "Default", &m10262_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1912_PIs[] =
{
	&t1912____Default_PropertyInfo,
	NULL
};
extern TypeInfo t1912_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10259_MI = 
{
	".ctor", (methodPointerType)&m8294_gshared, &t1912_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1912_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10260_MI = 
{
	".cctor", (methodPointerType)&m8295_gshared, &t1912_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t1912_m10261_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1912_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10261_MI = 
{
	"System.Collections.IComparer.Compare", (methodPointerType)&m8296_gshared, &t1912_TI, &t35_0_0_0, RuntimeInvoker_t35_t14_t14, t1912_m10261_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t157_0_0_0;
extern Il2CppType t157_0_0_0;
static ParameterInfo t1912_m23754_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
};
extern TypeInfo t1912_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23754_MI = 
{
	"Compare", NULL, &t1912_TI, &t35_0_0_0, RuntimeInvoker_t35_t14_t14, t1912_m23754_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1912_TI;
extern Il2CppType t1912_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10262_MI = 
{
	"get_Default", (methodPointerType)&m8297_gshared, &t1912_TI, &t1912_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1912_MIs[] =
{
	&m10259_MI,
	&m10260_MI,
	&m10261_MI,
	&m23754_MI,
	&m10262_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m23754_MI;
extern MethodInfo m10261_MI;
static MethodInfo* t1912_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m23754_MI,
	&m10261_MI,
	NULL,
};
extern TypeInfo t3349_TI;
extern TypeInfo t726_TI;
static TypeInfo* t1912_ITIs[] = 
{
	&t3349_TI,
	&t726_TI,
};
extern TypeInfo t3349_TI;
extern TypeInfo t726_TI;
static Il2CppInterfaceOffsetPair t1912_IOs[] = 
{
	{ &t3349_TI, 4},
	{ &t726_TI, 5},
};
extern Il2CppType t3350_0_0_0;
extern Il2CppType t157_0_0_0;
extern TypeInfo t1912_TI;
extern TypeInfo t1912_TI;
extern TypeInfo t1913_TI;
extern MethodInfo m10263_MI;
extern TypeInfo t157_TI;
extern MethodInfo m23754_MI;
static void* t1912_RGCTXData[8] = 
{
	(void*)&t3350_0_0_0,
	(void*)&t157_0_0_0,
	&t1912_TI,
	&t1912_TI,
	&t1913_TI,
	&m10263_MI,
	&t157_TI,
	&m23754_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1912_0_0_0;
extern Il2CppType t1912_1_0_0;
extern TypeInfo t14_TI;
struct t1912;
extern TypeInfo t1912_TI;
extern Il2CppGenericClass t1912_GC;
TypeInfo t1912_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparer`1", "System.Collections.Generic", t1912_MIs, t1912_PIs, t1912_FIs, NULL, &t14_TI, NULL, NULL, &t1912_TI, t1912_ITIs, t1912_VT, &EmptyCustomAttributesCache, &t1912_TI, &t1912_0_0_0, &t1912_1_0_0, t1912_IOs, &t1912_GC, NULL, NULL, NULL, t1912_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1912), 0, -1, sizeof(t1912_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 5, 1, 1, 0, 0, 7, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3349_TI;



// Metadata Definition System.Collections.Generic.IComparer`1<UnityEngine.UI.ICanvasElement>
extern Il2CppType t157_0_0_0;
extern Il2CppType t157_0_0_0;
static ParameterInfo t3349_m17619_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
};
extern TypeInfo t3349_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m17619_MI = 
{
	"Compare", NULL, &t3349_TI, &t35_0_0_0, RuntimeInvoker_t35_t14_t14, t3349_m17619_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3349_MIs[] =
{
	&m17619_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3349_0_0_0;
extern Il2CppType t3349_1_0_0;
struct t3349;
extern TypeInfo t3349_TI;
extern Il2CppGenericClass t3349_GC;
TypeInfo t3349_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t3349_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3349_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3349_TI, &t3349_0_0_0, &t3349_1_0_0, NULL, &t3349_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3350_TI;



// Metadata Definition System.IComparable`1<UnityEngine.UI.ICanvasElement>
extern Il2CppType t157_0_0_0;
static ParameterInfo t3350_m17620_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
};
extern TypeInfo t3350_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m17620_MI = 
{
	"CompareTo", NULL, &t3350_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t3350_m17620_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3350_MIs[] =
{
	&m17620_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3350_0_0_0;
extern Il2CppType t3350_1_0_0;
struct t3350;
extern TypeInfo t3350_TI;
extern Il2CppGenericClass t3350_GC;
TypeInfo t3350_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t3350_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3350_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3350_TI, &t3350_0_0_0, &t3350_1_0_0, NULL, &t3350_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1913_TI;

extern TypeInfo t157_TI;
extern TypeInfo t3350_TI;
extern TypeInfo t35_TI;
extern TypeInfo t43_TI;
extern TypeInfo t14_TI;
extern TypeInfo t319_TI;
extern MethodInfo m10259_MI;
extern MethodInfo m17620_MI;
extern MethodInfo m7322_MI;
extern MethodInfo m1959_MI;


// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UI.ICanvasElement>
extern TypeInfo t1913_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10263_MI = 
{
	".ctor", (methodPointerType)&m8298_gshared, &t1913_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t157_0_0_0;
extern Il2CppType t157_0_0_0;
static ParameterInfo t1913_m10264_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
};
extern TypeInfo t1913_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10264_MI = 
{
	"Compare", (methodPointerType)&m8299_gshared, &t1913_TI, &t35_0_0_0, RuntimeInvoker_t35_t14_t14, t1913_m10264_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1913_MIs[] =
{
	&m10263_MI,
	&m10264_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m10264_MI;
extern MethodInfo m10261_MI;
extern MethodInfo m10264_MI;
static MethodInfo* t1913_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m10264_MI,
	&m10261_MI,
	&m10264_MI,
};
extern TypeInfo t3349_TI;
extern TypeInfo t726_TI;
static Il2CppInterfaceOffsetPair t1913_IOs[] = 
{
	{ &t3349_TI, 4},
	{ &t726_TI, 5},
};
extern Il2CppType t3350_0_0_0;
extern Il2CppType t157_0_0_0;
extern TypeInfo t1912_TI;
extern TypeInfo t1912_TI;
extern TypeInfo t1913_TI;
extern MethodInfo m10263_MI;
extern TypeInfo t157_TI;
extern MethodInfo m23754_MI;
extern MethodInfo m10259_MI;
extern TypeInfo t157_TI;
extern TypeInfo t3350_TI;
extern MethodInfo m17620_MI;
static void* t1913_RGCTXData[12] = 
{
	(void*)&t3350_0_0_0,
	(void*)&t157_0_0_0,
	&t1912_TI,
	&t1912_TI,
	&t1913_TI,
	&m10263_MI,
	&t157_TI,
	&m23754_MI,
	&m10259_MI,
	&t157_TI,
	&t3350_TI,
	&m17620_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1913_0_0_0;
extern Il2CppType t1913_1_0_0;
extern TypeInfo t1912_TI;
struct t1913;
extern TypeInfo t1913_TI;
extern Il2CppGenericClass t1913_GC;
extern TypeInfo t832_TI;
TypeInfo t1913_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t1913_MIs, NULL, NULL, NULL, &t1912_TI, NULL, &t832_TI, &t1913_TI, NULL, t1913_VT, &EmptyCustomAttributesCache, &t1913_TI, &t1913_0_0_0, &t1913_1_0_0, t1913_IOs, &t1913_GC, NULL, NULL, NULL, t1913_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1913), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t155_TI;
#include "t155MD.h"



// Metadata Definition System.Comparison`1<UnityEngine.UI.ICanvasElement>
extern Il2CppType t14_0_0_0;
extern Il2CppType t77_0_0_0;
static ParameterInfo t155_m1542_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t77_0_0_0},
};
extern TypeInfo t155_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t77 (MethodInfo* method, void* obj, void** args);
MethodInfo m1542_MI = 
{
	".ctor", (methodPointerType)&m8330_gshared, &t155_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t77, t155_m1542_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t157_0_0_0;
extern Il2CppType t157_0_0_0;
static ParameterInfo t155_m10265_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
};
extern TypeInfo t155_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10265_MI = 
{
	"Invoke", (methodPointerType)&m8331_gshared, &t155_TI, &t35_0_0_0, RuntimeInvoker_t35_t14_t14, t155_m10265_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t157_0_0_0;
extern Il2CppType t157_0_0_0;
extern Il2CppType t76_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t155_m10266_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t76_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t155_TI;
extern Il2CppType t75_0_0_0;
extern void* RuntimeInvoker_t14_t14_t14_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10266_MI = 
{
	"BeginInvoke", (methodPointerType)&m8332_gshared, &t155_TI, &t75_0_0_0, RuntimeInvoker_t14_t14_t14_t14_t14, t155_m10266_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t75_0_0_0;
static ParameterInfo t155_m10267_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t75_0_0_0},
};
extern TypeInfo t155_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10267_MI = 
{
	"EndInvoke", (methodPointerType)&m8333_gshared, &t155_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t155_m10267_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t155_MIs[] =
{
	&m1542_MI,
	&m10265_MI,
	&m10266_MI,
	&m10267_MI,
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
extern MethodInfo m10265_MI;
extern MethodInfo m10266_MI;
extern MethodInfo m10267_MI;
static MethodInfo* t155_VT[] =
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
	&m10265_MI,
	&m10266_MI,
	&m10267_MI,
};
extern TypeInfo t374_TI;
extern TypeInfo t375_TI;
static Il2CppInterfaceOffsetPair t155_IOs[] = 
{
	{ &t374_TI, 4},
	{ &t375_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t155_0_0_0;
extern Il2CppType t155_1_0_0;
extern TypeInfo t211_TI;
struct t155;
extern TypeInfo t155_TI;
extern Il2CppGenericClass t155_GC;
TypeInfo t155_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparison`1", "System", t155_MIs, NULL, NULL, NULL, &t211_TI, NULL, NULL, &t155_TI, NULL, t155_VT, &EmptyCustomAttributesCache, &t155_TI, &t155_0_0_0, &t155_1_0_0, t155_IOs, &t155_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t155), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t366.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t366_TI;
#include "t366MD.h"

#include "t1916.h"
#include "t1918.h"
#include "t1915.h"
#include "t1924.h"
#include "t1920.h"
#include "t1925.h"
extern TypeInfo t366_TI;
extern TypeInfo t25_TI;
extern TypeInfo t157_TI;
extern TypeInfo t35_TI;
extern TypeInfo t338_TI;
extern TypeInfo t1914_TI;
extern TypeInfo t834_TI;
extern TypeInfo t26_TI;
extern TypeInfo t1916_TI;
extern TypeInfo t1917_TI;
extern TypeInfo t1918_TI;
extern TypeInfo t2907_TI;
extern TypeInfo t836_TI;
extern TypeInfo t1915_TI;
extern TypeInfo t1924_TI;
extern TypeInfo t1920_TI;
extern TypeInfo t1925_TI;
extern TypeInfo t1242_TI;
extern TypeInfo t1910_TI;
extern TypeInfo t51_TI;
extern TypeInfo t1459_TI;
extern TypeInfo t1887_TI;
extern TypeInfo t319_TI;
extern TypeInfo t863_TI;
extern TypeInfo t1835_TI;
extern TypeInfo t1818_TI;
extern TypeInfo t31_TI;
extern TypeInfo t33_TI;
#include "t1916MD.h"
#include "t1918MD.h"
#include "t1915MD.h"
#include "t1924MD.h"
#include "t1920MD.h"
#include "t1925MD.h"
extern Il2CppType t1914_0_0_0;
extern Il2CppType t1917_0_0_0;
extern Il2CppType t157_0_0_0;
extern Il2CppType t35_0_0_0;
extern MethodInfo m10302_MI;
extern MethodInfo m10303_MI;
extern MethodInfo m10285_MI;
extern MethodInfo m2974_MI;
extern MethodInfo m23752_MI;
extern MethodInfo m23751_MI;
extern MethodInfo m10292_MI;
extern MethodInfo m10318_MI;
extern MethodInfo m73_MI;
extern MethodInfo m10286_MI;
extern MethodInfo m10308_MI;
extern MethodInfo m10310_MI;
extern MethodInfo m10293_MI;
extern MethodInfo m10304_MI;
extern MethodInfo m10291_MI;
extern MethodInfo m10299_MI;
extern MethodInfo m10288_MI;
extern MethodInfo m10306_MI;
extern MethodInfo m10352_MI;
extern MethodInfo m17638_MI;
extern MethodInfo m10289_MI;
extern MethodInfo m10356_MI;
extern MethodInfo m17640_MI;
extern MethodInfo m10337_MI;
extern MethodInfo m10360_MI;
extern MethodInfo m6493_MI;
extern MethodInfo m10252_MI;
extern MethodInfo m10287_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m1959_MI;
extern MethodInfo m10284_MI;
extern MethodInfo m10307_MI;
extern MethodInfo m17641_MI;
extern MethodInfo m4429_MI;
extern MethodInfo m3786_MI;
extern MethodInfo m3782_MI;
extern MethodInfo m9713_MI;
extern MethodInfo m23407_MI;
extern MethodInfo m5759_MI;
extern MethodInfo m5765_MI;
extern MethodInfo m5768_MI;
extern MethodInfo m1571_MI;
extern MethodInfo m5755_MI;
extern MethodInfo m3872_MI;
extern MethodInfo m1786_MI;
extern MethodInfo m6483_MI;
extern MethodInfo m3841_MI;
extern MethodInfo m10300_MI;
extern MethodInfo m23542_MI;
extern MethodInfo m4371_MI;
struct t366;
 void m17638 (t366 * __this, t2907* p0, int32_t p1, t1915 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17638_MI;
struct t366;
 void m17640 (t366 * __this, t24 * p0, int32_t p1, t1924 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17640_MI;
struct t366;
 void m17641 (t366 * __this, t1917* p0, int32_t p1, t1924 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17641_MI;


extern MethodInfo m10268_MI;
 void m10268 (t366 * __this, MethodInfo* method){
	{
		m73(__this, &m73_MI);
		m10286(__this, ((int32_t)10), (t14*)NULL, &m10286_MI);
		return;
	}
}
extern MethodInfo m10269_MI;
 void m10269 (t366 * __this, t14* p0, MethodInfo* method){
	{
		m73(__this, &m73_MI);
		m10286(__this, ((int32_t)10), p0, &m10286_MI);
		return;
	}
}
extern MethodInfo m10270_MI;
 void m10270 (t366 * __this, int32_t p0, MethodInfo* method){
	{
		m73(__this, &m73_MI);
		m10286(__this, p0, (t14*)NULL, &m10286_MI);
		return;
	}
}
extern MethodInfo m10271_MI;
 void m10271 (t366 * __this, t715 * p0, t716  p1, MethodInfo* method){
	{
		m73(__this, &m73_MI);
		__this->f13 = p0;
		return;
	}
}
extern MethodInfo m10272_MI;
 void m10272 (t366 * __this, t14 * p0, t14 * p1, MethodInfo* method){
	{
		t14 * L_0 = m10302(__this, p0, &m10302_MI);
		int32_t L_1 = m10303(__this, p1, &m10303_MI);
		VirtActionInvoker2< t14 *, int32_t >::Invoke(&m10285_MI, __this, L_0, L_1);
		return;
	}
}
extern MethodInfo m10273_MI;
 bool m10273 (t366 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m10274_MI;
 t14 * m10274 (t366 * __this, MethodInfo* method){
	{
		return __this;
	}
}
extern MethodInfo m10275_MI;
 bool m10275 (t366 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m10276_MI;
 void m10276 (t366 * __this, t1918  p0, MethodInfo* method){
	{
		t14 * L_0 = m10308((&p0), &m10308_MI);
		int32_t L_1 = m10310((&p0), &m10310_MI);
		VirtActionInvoker2< t14 *, int32_t >::Invoke(&m10293_MI, __this, L_0, L_1);
		return;
	}
}
extern MethodInfo m10277_MI;
 bool m10277 (t366 * __this, t1918  p0, MethodInfo* method){
	{
		bool L_0 = m10304(__this, p0, &m10304_MI);
		return L_0;
	}
}
extern MethodInfo m10278_MI;
 void m10278 (t366 * __this, t1917* p0, int32_t p1, MethodInfo* method){
	{
		m10291(__this, p0, p1, &m10291_MI);
		return;
	}
}
extern MethodInfo m10279_MI;
 bool m10279 (t366 * __this, t1918  p0, MethodInfo* method){
	{
		bool L_0 = m10304(__this, p0, &m10304_MI);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return 0;
	}

IL_000b:
	{
		t14 * L_1 = m10308((&p0), &m10308_MI);
		bool L_2 = (bool)VirtFuncInvoker1< bool, t14 * >::Invoke(&m10299_MI, __this, L_1);
		return L_2;
	}
}
extern MethodInfo m10280_MI;
 void m10280 (t366 * __this, t24 * p0, int32_t p1, MethodInfo* method){
	t1917* V_0 = {0};
	t2907* V_1 = {0};
	int32_t G_B5_0 = 0;
	t2907* G_B5_1 = {0};
	t366 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	t2907* G_B4_1 = {0};
	t366 * G_B4_2 = {0};
	{
		V_0 = ((t1917*)IsInst(p0, InitializedTypeInfo(&t1917_TI)));
		if (!V_0)
		{
			goto IL_0013;
		}
	}
	{
		m10291(__this, V_0, p1, &m10291_MI);
		return;
	}

IL_0013:
	{
		m10288(__this, p0, p1, &m10288_MI);
		V_1 = ((t2907*)IsInst(p0, InitializedTypeInfo(&t2907_TI)));
		if (!V_1)
		{
			goto IL_004b;
		}
	}
	{
		G_B4_0 = p1;
		G_B4_1 = V_1;
		G_B4_2 = ((t366 *)(__this));
		if ((((t366_SFs*)InitializedTypeInfo(&t366_TI)->static_fields)->f15))
		{
			G_B5_0 = p1;
			G_B5_1 = V_1;
			G_B5_2 = ((t366 *)(__this));
			goto IL_0040;
		}
	}
	{
		t77 L_0 = { &m10306_MI };
		t1915 * L_1 = (t1915 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1915_TI));
		m10352(L_1, NULL, L_0, &m10352_MI);
		((t366_SFs*)InitializedTypeInfo(&t366_TI)->static_fields)->f15 = L_1;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((t366 *)(G_B4_2));
	}

IL_0040:
	{
		m17638(G_B5_2, G_B5_1, G_B5_0, (((t366_SFs*)InitializedTypeInfo(&t366_TI)->static_fields)->f15), &m17638_MI);
		return;
	}

IL_004b:
	{
		t77 L_2 = { &m10289_MI };
		t1924 * L_3 = (t1924 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1924_TI));
		m10356(L_3, NULL, L_2, &m10356_MI);
		m17640(__this, p0, p1, L_3, &m17640_MI);
		return;
	}
}
extern MethodInfo m10281_MI;
 t14 * m10281 (t366 * __this, MethodInfo* method){
	{
		t1920  L_0 = {0};
		m10337(&L_0, __this, &m10337_MI);
		t1920  L_1 = L_0;
		t14 * L_2 = Box(InitializedTypeInfo(&t1920_TI), &L_1);
		return (t14 *)L_2;
	}
}
extern MethodInfo m10282_MI;
 t14* m10282 (t366 * __this, MethodInfo* method){
	{
		t1920  L_0 = {0};
		m10337(&L_0, __this, &m10337_MI);
		t1920  L_1 = L_0;
		t14 * L_2 = Box(InitializedTypeInfo(&t1920_TI), &L_1);
		return (t14*)L_2;
	}
}
extern MethodInfo m10283_MI;
 t14 * m10283 (t366 * __this, MethodInfo* method){
	{
		t1925 * L_0 = (t1925 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1925_TI));
		m10360(L_0, __this, &m10360_MI);
		return L_0;
	}
}
extern MethodInfo m10284_MI;
 int32_t m10284 (t366 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f10);
		return L_0;
	}
}
extern MethodInfo m10285_MI;
 void m10285 (t366 * __this, t14 * p0, int32_t p1, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		t14 * L_0 = p0;
		if (((t14 *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t338 * L_1 = (t338 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t338_TI));
		m2974(L_1, (t33*) &_stringLiteral536, &m2974_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		t14* L_2 = (__this->f12);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t14 * >::Invoke(&m23752_MI, L_2, p0);
		V_0 = ((int32_t)(L_3|((int32_t)-2147483648)));
		t51* L_4 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t24 *)L_4)->max_length)))));
		t51* L_5 = (__this->f4);
		V_2 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_5, V_1))-1));
		V_3 = (-1);
		if ((((int32_t)V_2) == ((int32_t)(-1))))
		{
			goto IL_0090;
		}
	}

IL_0048:
	{
		t1459* L_6 = (__this->f5);
		int32_t L_7 = (((t834 *)(t834 *)SZArrayLdElema(L_6, V_2))->f0);
		if ((((uint32_t)L_7) != ((uint32_t)V_0)))
		{
			goto IL_0078;
		}
	}
	{
		t14* L_8 = (__this->f12);
		t1887* L_9 = (__this->f6);
		bool L_10 = (bool)InterfaceFuncInvoker2< bool, t14 *, t14 * >::Invoke(&m23751_MI, L_8, (*(t14 **)(t14 **)SZArrayLdElema(L_9, V_2)), p0);
		if (!L_10)
		{
			goto IL_0078;
		}
	}
	{
		goto IL_0090;
	}

IL_0078:
	{
		V_3 = V_2;
		t1459* L_11 = (__this->f5);
		int32_t L_12 = (((t834 *)(t834 *)SZArrayLdElema(L_11, V_2))->f1);
		V_2 = L_12;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0048;
		}
	}

IL_0090:
	{
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_13 = (__this->f10);
		int32_t L_14 = ((int32_t)(L_13+1));
		V_4 = L_14;
		__this->f10 = L_14;
		int32_t L_15 = (__this->f11);
		if ((((int32_t)V_4) <= ((int32_t)L_15)))
		{
			goto IL_00c9;
		}
	}
	{
		m10292(__this, &m10292_MI);
		t51* L_16 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t24 *)L_16)->max_length)))));
	}

IL_00c9:
	{
		int32_t L_17 = (__this->f9);
		V_2 = L_17;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_18 = (__this->f8);
		int32_t L_19 = L_18;
		V_4 = L_19;
		__this->f8 = ((int32_t)(L_19+1));
		V_2 = V_4;
		goto IL_0101;
	}

IL_00ea:
	{
		t1459* L_20 = (__this->f5);
		int32_t L_21 = (((t834 *)(t834 *)SZArrayLdElema(L_20, V_2))->f1);
		__this->f9 = L_21;
	}

IL_0101:
	{
		t1459* L_22 = (__this->f5);
		t51* L_23 = (__this->f4);
		((t834 *)(t834 *)SZArrayLdElema(L_22, V_2))->f1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_23, V_1))-1));
		t51* L_24 = (__this->f4);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_24, V_1)) = (int32_t)((int32_t)(V_2+1));
		t1459* L_25 = (__this->f5);
		((t834 *)(t834 *)SZArrayLdElema(L_25, V_2))->f0 = V_0;
		t1887* L_26 = (__this->f6);
		*((t14 **)(t14 **)SZArrayLdElema(L_26, V_2)) = (t14 *)p0;
		goto IL_0194;
	}

IL_0148:
	{
		if ((((int32_t)V_3) == ((int32_t)(-1))))
		{
			goto IL_0194;
		}
	}
	{
		t1459* L_27 = (__this->f5);
		t1459* L_28 = (__this->f5);
		int32_t L_29 = (((t834 *)(t834 *)SZArrayLdElema(L_28, V_2))->f1);
		((t834 *)(t834 *)SZArrayLdElema(L_27, V_3))->f1 = L_29;
		t1459* L_30 = (__this->f5);
		t51* L_31 = (__this->f4);
		((t834 *)(t834 *)SZArrayLdElema(L_30, V_2))->f1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_31, V_1))-1));
		t51* L_32 = (__this->f4);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_32, V_1)) = (int32_t)((int32_t)(V_2+1));
	}

IL_0194:
	{
		t51* L_33 = (__this->f7);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_33, V_2)) = (int32_t)p1;
		int32_t L_34 = (__this->f14);
		__this->f14 = ((int32_t)(L_34+1));
		return;
	}
}
extern MethodInfo m10286_MI;
 void m10286 (t366 * __this, int32_t p0, t14* p1, MethodInfo* method){
	t14* V_0 = {0};
	t366 * G_B4_0 = {0};
	t366 * G_B3_0 = {0};
	t14* G_B5_0 = {0};
	t366 * G_B5_1 = {0};
	{
		if ((((int32_t)p0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		t1242 * L_0 = (t1242 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1242_TI));
		m6493(L_0, (t33*) &_stringLiteral537, &m6493_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000f:
	{
		G_B3_0 = ((t366 *)(__this));
		if (!p1)
		{
			G_B4_0 = ((t366 *)(__this));
			goto IL_0018;
		}
	}
	{
		V_0 = p1;
		G_B5_0 = V_0;
		G_B5_1 = ((t366 *)(G_B3_0));
		goto IL_001d;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1910_TI));
		t1910 * L_1 = m10252(NULL, &m10252_MI);
		G_B5_0 = ((t14*)(L_1));
		G_B5_1 = ((t366 *)(G_B4_0));
	}

IL_001d:
	{
		G_B5_1->f12 = G_B5_0;
		if (p0)
		{
			goto IL_002b;
		}
	}
	{
		p0 = ((int32_t)10);
	}

IL_002b:
	{
		p0 = ((int32_t)((((int32_t)((float)((((float)p0))/(0.9f)))))+1));
		m10287(__this, p0, &m10287_MI);
		__this->f14 = 0;
		return;
	}
}
extern MethodInfo m10287_MI;
 void m10287 (t366 * __this, int32_t p0, MethodInfo* method){
	{
		__this->f4 = ((t51*)SZArrayNew(InitializedTypeInfo(&t51_TI), p0));
		__this->f5 = ((t1459*)SZArrayNew(InitializedTypeInfo(&t1459_TI), p0));
		__this->f9 = (-1);
		__this->f6 = ((t1887*)SZArrayNew(InitializedTypeInfo(&t1887_TI), p0));
		__this->f7 = ((t51*)SZArrayNew(InitializedTypeInfo(&t51_TI), p0));
		__this->f8 = 0;
		t51* L_0 = (__this->f4);
		__this->f11 = (((int32_t)((float)((((float)(((int32_t)(((t24 *)L_0)->max_length)))))*(0.9f)))));
		int32_t L_1 = (__this->f11);
		if (L_1)
		{
			goto IL_006e;
		}
	}
	{
		t51* L_2 = (__this->f4);
		if ((((int32_t)(((int32_t)(((t24 *)L_2)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		__this->f11 = 1;
	}

IL_006e:
	{
		return;
	}
}
extern MethodInfo m10288_MI;
 void m10288 (t366 * __this, t24 * p0, int32_t p1, MethodInfo* method){
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t338 * L_0 = (t338 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t338_TI));
		m2974(L_0, (t33*) &_stringLiteral326, &m2974_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		t1242 * L_1 = (t1242 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1242_TI));
		m6493(L_1, (t33*) &_stringLiteral323, &m6493_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_001d:
	{
		int32_t L_2 = m3737(p0, &m3737_MI);
		if ((((int32_t)p1) <= ((int32_t)L_2)))
		{
			goto IL_0031;
		}
	}
	{
		t319 * L_3 = (t319 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t319_TI));
		m1959(L_3, (t33*) &_stringLiteral538, &m1959_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0031:
	{
		int32_t L_4 = m3737(p0, &m3737_MI);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m10284_MI, __this);
		if ((((int32_t)((int32_t)(L_4-p1))) >= ((int32_t)L_5)))
		{
			goto IL_004c;
		}
	}
	{
		t319 * L_6 = (t319 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t319_TI));
		m1959(L_6, (t33*) &_stringLiteral539, &m1959_MI);
		il2cpp_codegen_raise_exception (L_6);
	}

IL_004c:
	{
		return;
	}
}
extern MethodInfo m10289_MI;
 t1918  m10289 (t14 * __this, t14 * p0, int32_t p1, MethodInfo* method){
	{
		t1918  L_0 = {0};
		m10307(&L_0, p0, p1, &m10307_MI);
		return L_0;
	}
}
extern MethodInfo m10290_MI;
 int32_t m10290 (t14 * __this, t14 * p0, int32_t p1, MethodInfo* method){
	{
		return p1;
	}
}
extern MethodInfo m10291_MI;
 void m10291 (t366 * __this, t1917* p0, int32_t p1, MethodInfo* method){
	{
		m10288(__this, (t24 *)(t24 *)p0, p1, &m10288_MI);
		t77 L_0 = { &m10289_MI };
		t1924 * L_1 = (t1924 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1924_TI));
		m10356(L_1, NULL, L_0, &m10356_MI);
		m17641(__this, p0, p1, L_1, &m17641_MI);
		return;
	}
}
extern MethodInfo m10292_MI;
 void m10292 (t366 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	t51* V_1 = {0};
	t1459* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	t1887* V_7 = {0};
	t51* V_8 = {0};
	int32_t V_9 = 0;
	{
		t51* L_0 = (__this->f4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t863_TI));
		int32_t L_1 = m4429(NULL, ((int32_t)(((int32_t)((((int32_t)(((t24 *)L_0)->max_length)))<<1))|1)), &m4429_MI);
		V_0 = L_1;
		V_1 = ((t51*)SZArrayNew(InitializedTypeInfo(&t51_TI), V_0));
		V_2 = ((t1459*)SZArrayNew(InitializedTypeInfo(&t1459_TI), V_0));
		V_3 = 0;
		goto IL_00ab;
	}

IL_0027:
	{
		t51* L_2 = (__this->f4);
		V_4 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_2, V_3))-1));
		goto IL_00a2;
	}

IL_0035:
	{
		t14* L_3 = (__this->f12);
		t1887* L_4 = (__this->f6);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, t14 * >::Invoke(&m23752_MI, L_3, (*(t14 **)(t14 **)SZArrayLdElema(L_4, V_4)));
		int32_t L_6 = ((int32_t)(L_5|((int32_t)-2147483648)));
		V_9 = L_6;
		((t834 *)(t834 *)SZArrayLdElema(V_2, V_4))->f0 = L_6;
		V_5 = V_9;
		V_6 = ((int32_t)(((int32_t)(V_5&((int32_t)2147483647)))%V_0));
		((t834 *)(t834 *)SZArrayLdElema(V_2, V_4))->f1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(V_1, V_6))-1));
		*((int32_t*)(int32_t*)SZArrayLdElema(V_1, V_6)) = (int32_t)((int32_t)(V_4+1));
		t1459* L_7 = (__this->f5);
		int32_t L_8 = (((t834 *)(t834 *)SZArrayLdElema(L_7, V_4))->f1);
		V_4 = L_8;
	}

IL_00a2:
	{
		if ((((uint32_t)V_4) != ((uint32_t)(-1))))
		{
			goto IL_0035;
		}
	}
	{
		V_3 = ((int32_t)(V_3+1));
	}

IL_00ab:
	{
		t51* L_9 = (__this->f4);
		if ((((int32_t)V_3) < ((int32_t)(((int32_t)(((t24 *)L_9)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		__this->f4 = V_1;
		__this->f5 = V_2;
		V_7 = ((t1887*)SZArrayNew(InitializedTypeInfo(&t1887_TI), V_0));
		V_8 = ((t51*)SZArrayNew(InitializedTypeInfo(&t51_TI), V_0));
		t1887* L_10 = (__this->f6);
		int32_t L_11 = (__this->f8);
		m3786(NULL, (t24 *)(t24 *)L_10, 0, (t24 *)(t24 *)V_7, 0, L_11, &m3786_MI);
		t51* L_12 = (__this->f7);
		int32_t L_13 = (__this->f8);
		m3786(NULL, (t24 *)(t24 *)L_12, 0, (t24 *)(t24 *)V_8, 0, L_13, &m3786_MI);
		__this->f6 = V_7;
		__this->f7 = V_8;
		__this->f11 = (((int32_t)((float)((((float)V_0))*(0.9f)))));
		return;
	}
}
extern MethodInfo m10293_MI;
 void m10293 (t366 * __this, t14 * p0, int32_t p1, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		t14 * L_0 = p0;
		if (((t14 *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t338 * L_1 = (t338 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t338_TI));
		m2974(L_1, (t33*) &_stringLiteral536, &m2974_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		t14* L_2 = (__this->f12);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t14 * >::Invoke(&m23752_MI, L_2, p0);
		V_0 = ((int32_t)(L_3|((int32_t)-2147483648)));
		t51* L_4 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t24 *)L_4)->max_length)))));
		t51* L_5 = (__this->f4);
		V_2 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_5, V_1))-1));
		goto IL_008f;
	}

IL_0044:
	{
		t1459* L_6 = (__this->f5);
		int32_t L_7 = (((t834 *)(t834 *)SZArrayLdElema(L_6, V_2))->f0);
		if ((((uint32_t)L_7) != ((uint32_t)V_0)))
		{
			goto IL_007d;
		}
	}
	{
		t14* L_8 = (__this->f12);
		t1887* L_9 = (__this->f6);
		bool L_10 = (bool)InterfaceFuncInvoker2< bool, t14 *, t14 * >::Invoke(&m23751_MI, L_8, (*(t14 **)(t14 **)SZArrayLdElema(L_9, V_2)), p0);
		if (!L_10)
		{
			goto IL_007d;
		}
	}
	{
		t319 * L_11 = (t319 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t319_TI));
		m1959(L_11, (t33*) &_stringLiteral541, &m1959_MI);
		il2cpp_codegen_raise_exception (L_11);
	}

IL_007d:
	{
		t1459* L_12 = (__this->f5);
		int32_t L_13 = (((t834 *)(t834 *)SZArrayLdElema(L_12, V_2))->f1);
		V_2 = L_13;
	}

IL_008f:
	{
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_14 = (__this->f10);
		int32_t L_15 = ((int32_t)(L_14+1));
		V_3 = L_15;
		__this->f10 = L_15;
		int32_t L_16 = (__this->f11);
		if ((((int32_t)V_3) <= ((int32_t)L_16)))
		{
			goto IL_00c3;
		}
	}
	{
		m10292(__this, &m10292_MI);
		t51* L_17 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t24 *)L_17)->max_length)))));
	}

IL_00c3:
	{
		int32_t L_18 = (__this->f9);
		V_2 = L_18;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_19 = (__this->f8);
		int32_t L_20 = L_19;
		V_3 = L_20;
		__this->f8 = ((int32_t)(L_20+1));
		V_2 = V_3;
		goto IL_00f9;
	}

IL_00e2:
	{
		t1459* L_21 = (__this->f5);
		int32_t L_22 = (((t834 *)(t834 *)SZArrayLdElema(L_21, V_2))->f1);
		__this->f9 = L_22;
	}

IL_00f9:
	{
		t1459* L_23 = (__this->f5);
		((t834 *)(t834 *)SZArrayLdElema(L_23, V_2))->f0 = V_0;
		t1459* L_24 = (__this->f5);
		t51* L_25 = (__this->f4);
		((t834 *)(t834 *)SZArrayLdElema(L_24, V_2))->f1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_25, V_1))-1));
		t51* L_26 = (__this->f4);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_26, V_1)) = (int32_t)((int32_t)(V_2+1));
		t1887* L_27 = (__this->f6);
		*((t14 **)(t14 **)SZArrayLdElema(L_27, V_2)) = (t14 *)p0;
		t51* L_28 = (__this->f7);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_28, V_2)) = (int32_t)p1;
		int32_t L_29 = (__this->f14);
		__this->f14 = ((int32_t)(L_29+1));
		return;
	}
}
extern MethodInfo m10294_MI;
 void m10294 (t366 * __this, MethodInfo* method){
	{
		__this->f10 = 0;
		t51* L_0 = (__this->f4);
		t51* L_1 = (__this->f4);
		m3782(NULL, (t24 *)(t24 *)L_0, 0, (((int32_t)(((t24 *)L_1)->max_length))), &m3782_MI);
		t1887* L_2 = (__this->f6);
		t1887* L_3 = (__this->f6);
		m3782(NULL, (t24 *)(t24 *)L_2, 0, (((int32_t)(((t24 *)L_3)->max_length))), &m3782_MI);
		t51* L_4 = (__this->f7);
		t51* L_5 = (__this->f7);
		m3782(NULL, (t24 *)(t24 *)L_4, 0, (((int32_t)(((t24 *)L_5)->max_length))), &m3782_MI);
		t1459* L_6 = (__this->f5);
		t1459* L_7 = (__this->f5);
		m3782(NULL, (t24 *)(t24 *)L_6, 0, (((int32_t)(((t24 *)L_7)->max_length))), &m3782_MI);
		__this->f9 = (-1);
		__this->f8 = 0;
		int32_t L_8 = (__this->f14);
		__this->f14 = ((int32_t)(L_8+1));
		return;
	}
}
extern MethodInfo m10295_MI;
 bool m10295 (t366 * __this, t14 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		t14 * L_0 = p0;
		if (((t14 *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t338 * L_1 = (t338 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t338_TI));
		m2974(L_1, (t33*) &_stringLiteral536, &m2974_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		t14* L_2 = (__this->f12);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t14 * >::Invoke(&m23752_MI, L_2, p0);
		V_0 = ((int32_t)(L_3|((int32_t)-2147483648)));
		t51* L_4 = (__this->f4);
		t51* L_5 = (__this->f4);
		V_1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_4, ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t24 *)L_5)->max_length)))))))-1));
		goto IL_0084;
	}

IL_0042:
	{
		t1459* L_6 = (__this->f5);
		int32_t L_7 = (((t834 *)(t834 *)SZArrayLdElema(L_6, V_1))->f0);
		if ((((uint32_t)L_7) != ((uint32_t)V_0)))
		{
			goto IL_0072;
		}
	}
	{
		t14* L_8 = (__this->f12);
		t1887* L_9 = (__this->f6);
		bool L_10 = (bool)InterfaceFuncInvoker2< bool, t14 *, t14 * >::Invoke(&m23751_MI, L_8, (*(t14 **)(t14 **)SZArrayLdElema(L_9, V_1)), p0);
		if (!L_10)
		{
			goto IL_0072;
		}
	}
	{
		return 1;
	}

IL_0072:
	{
		t1459* L_11 = (__this->f5);
		int32_t L_12 = (((t834 *)(t834 *)SZArrayLdElema(L_11, V_1))->f1);
		V_1 = L_12;
	}

IL_0084:
	{
		if ((((uint32_t)V_1) != ((uint32_t)(-1))))
		{
			goto IL_0042;
		}
	}
	{
		return 0;
	}
}
extern MethodInfo m10296_MI;
 bool m10296 (t366 * __this, int32_t p0, MethodInfo* method){
	t14* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1835_TI));
		t1835 * L_0 = m9713(NULL, &m9713_MI);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0048;
	}

IL_000a:
	{
		t51* L_1 = (__this->f4);
		V_2 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_1, V_1))-1));
		goto IL_0040;
	}

IL_0017:
	{
		t51* L_2 = (__this->f7);
		bool L_3 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(&m23407_MI, V_0, (*(int32_t*)(int32_t*)SZArrayLdElema(L_2, V_2)), p0);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		return 1;
	}

IL_002e:
	{
		t1459* L_4 = (__this->f5);
		int32_t L_5 = (((t834 *)(t834 *)SZArrayLdElema(L_4, V_2))->f1);
		V_2 = L_5;
	}

IL_0040:
	{
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0017;
		}
	}
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0048:
	{
		t51* L_6 = (__this->f4);
		if ((((int32_t)V_1) < ((int32_t)(((int32_t)(((t24 *)L_6)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}
}
extern MethodInfo m10297_MI;
 void m10297 (t366 * __this, t715 * p0, t716  p1, MethodInfo* method){
	t1917* V_0 = {0};
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t338 * L_0 = (t338 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t338_TI));
		m2974(L_0, (t33*) &_stringLiteral294, &m2974_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		int32_t L_1 = (__this->f14);
		m5759(p0, (t33*) &_stringLiteral542, L_1, &m5759_MI);
		t14* L_2 = (__this->f12);
		m5765(p0, (t33*) &_stringLiteral543, L_2, &m5765_MI);
		V_0 = (t1917*)NULL;
		int32_t L_3 = (__this->f10);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_4 = (__this->f10);
		V_0 = ((t1917*)SZArrayNew(InitializedTypeInfo(&t1917_TI), L_4));
		m10291(__this, V_0, 0, &m10291_MI);
	}

IL_004f:
	{
		t51* L_5 = (__this->f4);
		m5759(p0, (t33*) &_stringLiteral544, (((int32_t)(((t24 *)L_5)->max_length))), &m5759_MI);
		m5765(p0, (t33*) &_stringLiteral545, (t14 *)(t14 *)V_0, &m5765_MI);
		return;
	}
}
extern MethodInfo m10298_MI;
 void m10298 (t366 * __this, t14 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	t1917* V_1 = {0};
	int32_t V_2 = 0;
	{
		t715 * L_0 = (__this->f13);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		t715 * L_1 = (__this->f13);
		int32_t L_2 = m5768(L_1, (t33*) &_stringLiteral542, &m5768_MI);
		__this->f14 = L_2;
		t715 * L_3 = (__this->f13);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t31_TI));
		t31 * L_4 = m1571(NULL, LoadTypeToken(&t1914_0_0_0), &m1571_MI);
		t14 * L_5 = m5755(L_3, (t33*) &_stringLiteral543, L_4, &m5755_MI);
		__this->f12 = ((t14*)Castclass(L_5, InitializedTypeInfo(&t1914_TI)));
		t715 * L_6 = (__this->f13);
		int32_t L_7 = m5768(L_6, (t33*) &_stringLiteral544, &m5768_MI);
		V_0 = L_7;
		t715 * L_8 = (__this->f13);
		t31 * L_9 = m1571(NULL, LoadTypeToken(&t1917_0_0_0), &m1571_MI);
		t14 * L_10 = m5755(L_8, (t33*) &_stringLiteral545, L_9, &m5755_MI);
		V_1 = ((t1917*)Castclass(L_10, InitializedTypeInfo(&t1917_TI)));
		if ((((int32_t)V_0) >= ((int32_t)((int32_t)10))))
		{
			goto IL_007d;
		}
	}
	{
		V_0 = ((int32_t)10);
	}

IL_007d:
	{
		m10287(__this, V_0, &m10287_MI);
		__this->f10 = 0;
		if (!V_1)
		{
			goto IL_00ba;
		}
	}
	{
		V_2 = 0;
		goto IL_00b4;
	}

IL_0092:
	{
		t14 * L_11 = m10308(((t1918 *)(t1918 *)SZArrayLdElema(V_1, V_2)), &m10308_MI);
		int32_t L_12 = m10310(((t1918 *)(t1918 *)SZArrayLdElema(V_1, V_2)), &m10310_MI);
		VirtActionInvoker2< t14 *, int32_t >::Invoke(&m10293_MI, __this, L_11, L_12);
		V_2 = ((int32_t)(V_2+1));
	}

IL_00b4:
	{
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((t24 *)V_1)->max_length))))))
		{
			goto IL_0092;
		}
	}

IL_00ba:
	{
		int32_t L_13 = (__this->f14);
		__this->f14 = ((int32_t)(L_13+1));
		__this->f13 = (t715 *)NULL;
		return;
	}
}
extern MethodInfo m10299_MI;
 bool m10299 (t366 * __this, t14 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	t14 * V_4 = {0};
	int32_t V_5 = 0;
	{
		t14 * L_0 = p0;
		if (((t14 *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t338 * L_1 = (t338 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t338_TI));
		m2974(L_1, (t33*) &_stringLiteral536, &m2974_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		t14* L_2 = (__this->f12);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t14 * >::Invoke(&m23752_MI, L_2, p0);
		V_0 = ((int32_t)(L_3|((int32_t)-2147483648)));
		t51* L_4 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t24 *)L_4)->max_length)))));
		t51* L_5 = (__this->f4);
		V_2 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_5, V_1))-1));
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0048;
		}
	}
	{
		return 0;
	}

IL_0048:
	{
		V_3 = (-1);
	}

IL_004a:
	{
		t1459* L_6 = (__this->f5);
		int32_t L_7 = (((t834 *)(t834 *)SZArrayLdElema(L_6, V_2))->f0);
		if ((((uint32_t)L_7) != ((uint32_t)V_0)))
		{
			goto IL_007a;
		}
	}
	{
		t14* L_8 = (__this->f12);
		t1887* L_9 = (__this->f6);
		bool L_10 = (bool)InterfaceFuncInvoker2< bool, t14 *, t14 * >::Invoke(&m23751_MI, L_8, (*(t14 **)(t14 **)SZArrayLdElema(L_9, V_2)), p0);
		if (!L_10)
		{
			goto IL_007a;
		}
	}
	{
		goto IL_0092;
	}

IL_007a:
	{
		V_3 = V_2;
		t1459* L_11 = (__this->f5);
		int32_t L_12 = (((t834 *)(t834 *)SZArrayLdElema(L_11, V_2))->f1);
		V_2 = L_12;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_004a;
		}
	}

IL_0092:
	{
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0098;
		}
	}
	{
		return 0;
	}

IL_0098:
	{
		int32_t L_13 = (__this->f10);
		__this->f10 = ((int32_t)(L_13-1));
		if ((((uint32_t)V_3) != ((uint32_t)(-1))))
		{
			goto IL_00c7;
		}
	}
	{
		t51* L_14 = (__this->f4);
		t1459* L_15 = (__this->f5);
		int32_t L_16 = (((t834 *)(t834 *)SZArrayLdElema(L_15, V_2))->f1);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_14, V_1)) = (int32_t)((int32_t)(L_16+1));
		goto IL_00e9;
	}

IL_00c7:
	{
		t1459* L_17 = (__this->f5);
		t1459* L_18 = (__this->f5);
		int32_t L_19 = (((t834 *)(t834 *)SZArrayLdElema(L_18, V_2))->f1);
		((t834 *)(t834 *)SZArrayLdElema(L_17, V_3))->f1 = L_19;
	}

IL_00e9:
	{
		t1459* L_20 = (__this->f5);
		int32_t L_21 = (__this->f9);
		((t834 *)(t834 *)SZArrayLdElema(L_20, V_2))->f1 = L_21;
		__this->f9 = V_2;
		t1459* L_22 = (__this->f5);
		((t834 *)(t834 *)SZArrayLdElema(L_22, V_2))->f0 = 0;
		t1887* L_23 = (__this->f6);
		Initobj (&t157_TI, (&V_4));
		*((t14 **)(t14 **)SZArrayLdElema(L_23, V_2)) = (t14 *)V_4;
		t51* L_24 = (__this->f7);
		Initobj (&t35_TI, (&V_5));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_24, V_2)) = (int32_t)V_5;
		int32_t L_25 = (__this->f14);
		__this->f14 = ((int32_t)(L_25+1));
		return 1;
	}
}
extern MethodInfo m10300_MI;
 bool m10300 (t366 * __this, t14 * p0, int32_t* p1, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		t14 * L_0 = p0;
		if (((t14 *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t338 * L_1 = (t338 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t338_TI));
		m2974(L_1, (t33*) &_stringLiteral536, &m2974_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		t14* L_2 = (__this->f12);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t14 * >::Invoke(&m23752_MI, L_2, p0);
		V_0 = ((int32_t)(L_3|((int32_t)-2147483648)));
		t51* L_4 = (__this->f4);
		t51* L_5 = (__this->f4);
		V_1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_4, ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t24 *)L_5)->max_length)))))))-1));
		goto IL_0096;
	}

IL_0042:
	{
		t1459* L_6 = (__this->f5);
		int32_t L_7 = (((t834 *)(t834 *)SZArrayLdElema(L_6, V_1))->f0);
		if ((((uint32_t)L_7) != ((uint32_t)V_0)))
		{
			goto IL_0084;
		}
	}
	{
		t14* L_8 = (__this->f12);
		t1887* L_9 = (__this->f6);
		bool L_10 = (bool)InterfaceFuncInvoker2< bool, t14 *, t14 * >::Invoke(&m23751_MI, L_8, (*(t14 **)(t14 **)SZArrayLdElema(L_9, V_1)), p0);
		if (!L_10)
		{
			goto IL_0084;
		}
	}
	{
		t51* L_11 = (__this->f7);
		*p1 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_11, V_1));
		return 1;
	}

IL_0084:
	{
		t1459* L_12 = (__this->f5);
		int32_t L_13 = (((t834 *)(t834 *)SZArrayLdElema(L_12, V_1))->f1);
		V_1 = L_13;
	}

IL_0096:
	{
		if ((((uint32_t)V_1) != ((uint32_t)(-1))))
		{
			goto IL_0042;
		}
	}
	{
		Initobj (&t35_TI, (&V_2));
		*p1 = V_2;
		return 0;
	}
}
extern MethodInfo m10301_MI;
 t1916 * m10301 (t366 * __this, MethodInfo* method){
	{
		t1916 * L_0 = (t1916 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1916_TI));
		m10318(L_0, __this, &m10318_MI);
		return L_0;
	}
}
extern MethodInfo m10302_MI;
 t14 * m10302 (t366 * __this, t14 * p0, MethodInfo* method){
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t338 * L_0 = (t338 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t338_TI));
		m2974(L_0, (t33*) &_stringLiteral536, &m2974_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		if (((t14 *)IsInst(p0, InitializedTypeInfo(&t157_TI))))
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t31_TI));
		t31 * L_1 = m1571(NULL, LoadTypeToken(&t157_0_0_0), &m1571_MI);
		t33* L_2 = (t33*)VirtFuncInvoker0< t33* >::Invoke(&m3872_MI, L_1);
		IL2CPP_RUNTIME_CLASS_INIT((&t33_TI));
		t33* L_3 = m1786(NULL, (t33*) &_stringLiteral546, L_2, &m1786_MI);
		t319 * L_4 = (t319 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t319_TI));
		m6483(L_4, L_3, (t33*) &_stringLiteral536, &m6483_MI);
		il2cpp_codegen_raise_exception (L_4);
	}

IL_003a:
	{
		return ((t14 *)Castclass(p0, InitializedTypeInfo(&t157_TI)));
	}
}
extern MethodInfo m10303_MI;
 int32_t m10303 (t366 * __this, t14 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		if (p0)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t31_TI));
		t31 * L_0 = m1571(NULL, LoadTypeToken(&t35_0_0_0), &m1571_MI);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m3841_MI, L_0);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		Initobj (&t35_TI, (&V_0));
		return V_0;
	}

IL_001e:
	{
		if (((t14 *)IsInst(p0, InitializedTypeInfo(&t35_TI))))
		{
			goto IL_004a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t31_TI));
		t31 * L_2 = m1571(NULL, LoadTypeToken(&t35_0_0_0), &m1571_MI);
		t33* L_3 = (t33*)VirtFuncInvoker0< t33* >::Invoke(&m3872_MI, L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&t33_TI));
		t33* L_4 = m1786(NULL, (t33*) &_stringLiteral546, L_3, &m1786_MI);
		t319 * L_5 = (t319 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t319_TI));
		m6483(L_5, L_4, (t33*) &_stringLiteral242, &m6483_MI);
		il2cpp_codegen_raise_exception (L_5);
	}

IL_004a:
	{
		return ((*(int32_t*)((int32_t*)UnBox (p0, InitializedTypeInfo(&t35_TI)))));
	}
}
extern MethodInfo m10304_MI;
 bool m10304 (t366 * __this, t1918  p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		t14 * L_0 = m10308((&p0), &m10308_MI);
		bool L_1 = (bool)VirtFuncInvoker2< bool, t14 *, int32_t* >::Invoke(&m10300_MI, __this, L_0, (&V_0));
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1835_TI));
		t1835 * L_2 = m9713(NULL, &m9713_MI);
		int32_t L_3 = m10310((&p0), &m10310_MI);
		bool L_4 = (bool)VirtFuncInvoker2< bool, int32_t, int32_t >::Invoke(&m23542_MI, L_2, L_3, V_0);
		return L_4;
	}
}
extern MethodInfo m10305_MI;
 t1920  m10305 (t366 * __this, MethodInfo* method){
	{
		t1920  L_0 = {0};
		m10337(&L_0, __this, &m10337_MI);
		return L_0;
	}
}
extern MethodInfo m10306_MI;
 t836  m10306 (t14 * __this, t14 * p0, int32_t p1, MethodInfo* method){
	{
		t14 * L_0 = p0;
		int32_t L_1 = p1;
		t14 * L_2 = Box(InitializedTypeInfo(&t35_TI), &L_1);
		t836  L_3 = {0};
		m4371(&L_3, ((t14 *)L_0), L_2, &m4371_MI);
		return L_3;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>
extern Il2CppType t35_0_0_32849;
FieldInfo t366_f0_FieldInfo = 
{
	"INITIAL_SIZE", &t35_0_0_32849, &t366_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t28_0_0_32849;
FieldInfo t366_f1_FieldInfo = 
{
	"DEFAULT_LOAD_FACTOR", &t28_0_0_32849, &t366_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_32849;
FieldInfo t366_f2_FieldInfo = 
{
	"NO_SLOT", &t35_0_0_32849, &t366_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_32849;
FieldInfo t366_f3_FieldInfo = 
{
	"HASH_FLAG", &t35_0_0_32849, &t366_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t51_0_0_1;
FieldInfo t366_f4_FieldInfo = 
{
	"table", &t51_0_0_1, &t366_TI, offsetof(t366, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1459_0_0_1;
FieldInfo t366_f5_FieldInfo = 
{
	"linkSlots", &t1459_0_0_1, &t366_TI, offsetof(t366, f5), &EmptyCustomAttributesCache};
extern Il2CppType t1887_0_0_1;
FieldInfo t366_f6_FieldInfo = 
{
	"keySlots", &t1887_0_0_1, &t366_TI, offsetof(t366, f6), &EmptyCustomAttributesCache};
extern Il2CppType t51_0_0_1;
FieldInfo t366_f7_FieldInfo = 
{
	"valueSlots", &t51_0_0_1, &t366_TI, offsetof(t366, f7), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t366_f8_FieldInfo = 
{
	"touchedSlots", &t35_0_0_1, &t366_TI, offsetof(t366, f8), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t366_f9_FieldInfo = 
{
	"emptySlot", &t35_0_0_1, &t366_TI, offsetof(t366, f9), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t366_f10_FieldInfo = 
{
	"count", &t35_0_0_1, &t366_TI, offsetof(t366, f10), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t366_f11_FieldInfo = 
{
	"threshold", &t35_0_0_1, &t366_TI, offsetof(t366, f11), &EmptyCustomAttributesCache};
extern Il2CppType t1914_0_0_1;
FieldInfo t366_f12_FieldInfo = 
{
	"hcp", &t1914_0_0_1, &t366_TI, offsetof(t366, f12), &EmptyCustomAttributesCache};
extern Il2CppType t715_0_0_1;
FieldInfo t366_f13_FieldInfo = 
{
	"serialization_info", &t715_0_0_1, &t366_TI, offsetof(t366, f13), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t366_f14_FieldInfo = 
{
	"generation", &t35_0_0_1, &t366_TI, offsetof(t366, f14), &EmptyCustomAttributesCache};
extern Il2CppType t1915_0_0_17;
extern CustomAttributesCache t841__CustomAttributeCache_U3CU3Ef__am$cacheB;
FieldInfo t366_f15_FieldInfo = 
{
	"<>f__am$cacheB", &t1915_0_0_17, &t366_TI, offsetof(t366_SFs, f15), &t841__CustomAttributeCache_U3CU3Ef__am$cacheB};
static FieldInfo* t366_FIs[] =
{
	&t366_f0_FieldInfo,
	&t366_f1_FieldInfo,
	&t366_f2_FieldInfo,
	&t366_f3_FieldInfo,
	&t366_f4_FieldInfo,
	&t366_f5_FieldInfo,
	&t366_f6_FieldInfo,
	&t366_f7_FieldInfo,
	&t366_f8_FieldInfo,
	&t366_f9_FieldInfo,
	&t366_f10_FieldInfo,
	&t366_f11_FieldInfo,
	&t366_f12_FieldInfo,
	&t366_f13_FieldInfo,
	&t366_f14_FieldInfo,
	&t366_f15_FieldInfo,
	NULL
};
static const int32_t t366_f0_DefaultValueData = 10;
extern Il2CppType t35_0_0_0;
static Il2CppFieldDefaultValueEntry t366_f0_DefaultValue = 
{
	&t366_f0_FieldInfo, { (char*)&t366_f0_DefaultValueData, &t35_0_0_0 }};
static const float t366_f1_DefaultValueData = 0.9f;
extern Il2CppType t28_0_0_0;
static Il2CppFieldDefaultValueEntry t366_f1_DefaultValue = 
{
	&t366_f1_FieldInfo, { (char*)&t366_f1_DefaultValueData, &t28_0_0_0 }};
static const int32_t t366_f2_DefaultValueData = -1;
extern Il2CppType t35_0_0_0;
static Il2CppFieldDefaultValueEntry t366_f2_DefaultValue = 
{
	&t366_f2_FieldInfo, { (char*)&t366_f2_DefaultValueData, &t35_0_0_0 }};
static const int32_t t366_f3_DefaultValueData = -2147483648;
extern Il2CppType t35_0_0_0;
static Il2CppFieldDefaultValueEntry t366_f3_DefaultValue = 
{
	&t366_f3_FieldInfo, { (char*)&t366_f3_DefaultValueData, &t35_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t366_FDVs[] = 
{
	&t366_f0_DefaultValue,
	&t366_f1_DefaultValue,
	&t366_f2_DefaultValue,
	&t366_f3_DefaultValue,
	NULL
};
extern MethodInfo m10272_MI;
static PropertyInfo t366____System_Collections_IDictionary_Item_PropertyInfo = 
{
	&t366_TI, "System.Collections.IDictionary.Item", NULL, &m10272_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10273_MI;
static PropertyInfo t366____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t366_TI, "System.Collections.ICollection.IsSynchronized", &m10273_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10274_MI;
static PropertyInfo t366____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t366_TI, "System.Collections.ICollection.SyncRoot", &m10274_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10275_MI;
static PropertyInfo t366____System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnly_PropertyInfo = 
{
	&t366_TI, "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.IsReadOnly", &m10275_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10284_MI;
static PropertyInfo t366____Count_PropertyInfo = 
{
	&t366_TI, "Count", &m10284_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10285_MI;
static PropertyInfo t366____Item_PropertyInfo = 
{
	&t366_TI, "Item", NULL, &m10285_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10301_MI;
static PropertyInfo t366____Values_PropertyInfo = 
{
	&t366_TI, "Values", &m10301_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t366_PIs[] =
{
	&t366____System_Collections_IDictionary_Item_PropertyInfo,
	&t366____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t366____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t366____System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnly_PropertyInfo,
	&t366____Count_PropertyInfo,
	&t366____Item_PropertyInfo,
	&t366____Values_PropertyInfo,
	NULL
};
extern TypeInfo t366_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10268_MI = 
{
	".ctor", (methodPointerType)&m10268, &t366_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1914_0_0_0;
static ParameterInfo t366_m10269_ParameterInfos[] = 
{
	{"comparer", 0, 134217728, &EmptyCustomAttributesCache, &t1914_0_0_0},
};
extern TypeInfo t366_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10269_MI = 
{
	".ctor", (methodPointerType)&m10269, &t366_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t366_m10269_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t366_m10270_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t366_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10270_MI = 
{
	".ctor", (methodPointerType)&m10270, &t366_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t366_m10270_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t715_0_0_0;
extern Il2CppType t716_0_0_0;
static ParameterInfo t366_m10271_ParameterInfos[] = 
{
	{"info", 0, 134217728, &EmptyCustomAttributesCache, &t715_0_0_0},
	{"context", 1, 134217728, &EmptyCustomAttributesCache, &t716_0_0_0},
};
extern TypeInfo t366_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t716 (MethodInfo* method, void* obj, void** args);
MethodInfo m10271_MI = 
{
	".ctor", (methodPointerType)&m10271, &t366_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t716, t366_m10271_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t366_m10272_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t366_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10272_MI = 
{
	"System.Collections.IDictionary.set_Item", (methodPointerType)&m10272, &t366_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t14, t366_m10272_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 19, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t366_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10273_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m10273, &t366_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t366_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10274_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m10274, &t366_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t366_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10275_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly", (methodPointerType)&m10275, &t366_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 11, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1918_0_0_0;
static ParameterInfo t366_m10276_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t1918_0_0_0},
};
extern TypeInfo t366_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t1918 (MethodInfo* method, void* obj, void** args);
MethodInfo m10276_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add", (methodPointerType)&m10276, &t366_TI, &t25_0_0_0, RuntimeInvoker_t25_t1918, t366_m10276_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1918_0_0_0;
static ParameterInfo t366_m10277_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t1918_0_0_0},
};
extern TypeInfo t366_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t1918 (MethodInfo* method, void* obj, void** args);
MethodInfo m10277_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains", (methodPointerType)&m10277, &t366_TI, &t26_0_0_0, RuntimeInvoker_t26_t1918, t366_m10277_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 14, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1917_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t366_m10278_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1917_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t366_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10278_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo", (methodPointerType)&m10278, &t366_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t366_m10278_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1918_0_0_0;
static ParameterInfo t366_m10279_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t1918_0_0_0},
};
extern TypeInfo t366_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t1918 (MethodInfo* method, void* obj, void** args);
MethodInfo m10279_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove", (methodPointerType)&m10279, &t366_TI, &t26_0_0_0, RuntimeInvoker_t26_t1918, t366_m10279_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t24_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t366_m10280_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t366_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10280_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m10280, &t366_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t366_m10280_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t366_TI;
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10281_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m10281, &t366_TI, &t36_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t366_TI;
extern Il2CppType t1919_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10282_MI = 
{
	"System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator", (methodPointerType)&m10282, &t366_TI, &t1919_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 481, 0, 17, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t366_TI;
extern Il2CppType t842_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10283_MI = 
{
	"System.Collections.IDictionary.GetEnumerator", (methodPointerType)&m10283, &t366_TI, &t842_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 481, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t366_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10284_MI = 
{
	"get_Count", (methodPointerType)&m10284, &t366_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 2534, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t157_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t366_m10285_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t366_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10285_MI = 
{
	"set_Item", (methodPointerType)&m10285, &t366_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t366_m10285_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 22, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1914_0_0_0;
static ParameterInfo t366_m10286_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"hcp", 1, 134217728, &EmptyCustomAttributesCache, &t1914_0_0_0},
};
extern TypeInfo t366_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10286_MI = 
{
	"Init", (methodPointerType)&m10286, &t366_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t366_m10286_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t366_m10287_ParameterInfos[] = 
{
	{"size", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t366_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10287_MI = 
{
	"InitArrays", (methodPointerType)&m10287, &t366_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t366_m10287_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t24_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t366_m10288_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t366_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10288_MI = 
{
	"CopyToCheck", (methodPointerType)&m10288, &t366_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t366_m10288_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t366_TI;
extern Il2CppType t25_0_0_0;
extern Il2CppGenericContainer m23755_IGC;
extern TypeInfo m23755_gp_TRet_0_TI;
Il2CppGenericParamFull m23755_gp_TRet_0_TI_GenericParamFull = { { &m23755_IGC, 0}, {NULL, "TRet", 0, 0, NULL} };
extern TypeInfo m23755_gp_TElem_1_TI;
Il2CppGenericParamFull m23755_gp_TElem_1_TI_GenericParamFull = { { &m23755_IGC, 1}, {NULL, "TElem", 0, 0, NULL} };
static Il2CppGenericParamFull* m23755_IGPA[2] = 
{
	&m23755_gp_TRet_0_TI_GenericParamFull,
	&m23755_gp_TElem_1_TI_GenericParamFull,
};
extern MethodInfo m23755_MI;
Il2CppGenericContainer m23755_IGC = { { NULL, NULL }, NULL, &m23755_MI, 2, 1, m23755_IGPA };
MethodInfo m23755_MI = 
{
	"Do_CopyTo", NULL, &t366_TI, &t25_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, true, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t157_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t366_m10289_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t366_TI;
extern Il2CppType t1918_0_0_0;
extern void* RuntimeInvoker_t1918_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10289_MI = 
{
	"make_pair", (methodPointerType)&m10289, &t366_TI, &t1918_0_0_0, RuntimeInvoker_t1918_t14_t35, t366_m10289_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t157_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t366_m10290_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t366_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10290_MI = 
{
	"pick_value", (methodPointerType)&m10290, &t366_TI, &t35_0_0_0, RuntimeInvoker_t35_t14_t35, t366_m10290_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1917_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t366_m10291_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1917_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t366_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10291_MI = 
{
	"CopyTo", (methodPointerType)&m10291, &t366_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t366_m10291_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t366_TI;
extern Il2CppType t25_0_0_0;
extern Il2CppGenericContainer m23756_IGC;
extern TypeInfo m23756_gp_TRet_0_TI;
Il2CppGenericParamFull m23756_gp_TRet_0_TI_GenericParamFull = { { &m23756_IGC, 0}, {NULL, "TRet", 0, 0, NULL} };
static Il2CppGenericParamFull* m23756_IGPA[1] = 
{
	&m23756_gp_TRet_0_TI_GenericParamFull,
};
extern MethodInfo m23756_MI;
Il2CppGenericContainer m23756_IGC = { { NULL, NULL }, NULL, &m23756_MI, 1, 1, m23756_IGPA };
MethodInfo m23756_MI = 
{
	"Do_ICollectionCopyTo", NULL, &t366_TI, &t25_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, true, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t366_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10292_MI = 
{
	"Resize", (methodPointerType)&m10292, &t366_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t157_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t366_m10293_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t366_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10293_MI = 
{
	"Add", (methodPointerType)&m10293, &t366_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t366_m10293_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 23, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t366_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10294_MI = 
{
	"Clear", (methodPointerType)&m10294, &t366_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 13, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t157_0_0_0;
static ParameterInfo t366_m10295_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
};
extern TypeInfo t366_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10295_MI = 
{
	"ContainsKey", (methodPointerType)&m10295, &t366_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t366_m10295_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t366_m10296_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t366_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10296_MI = 
{
	"ContainsValue", (methodPointerType)&m10296, &t366_TI, &t26_0_0_0, RuntimeInvoker_t26_t35, t366_m10296_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t715_0_0_0;
extern Il2CppType t716_0_0_0;
static ParameterInfo t366_m10297_ParameterInfos[] = 
{
	{"info", 0, 134217728, &EmptyCustomAttributesCache, &t715_0_0_0},
	{"context", 1, 134217728, &EmptyCustomAttributesCache, &t716_0_0_0},
};
extern TypeInfo t366_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t716 (MethodInfo* method, void* obj, void** args);
MethodInfo m10297_MI = 
{
	"GetObjectData", (methodPointerType)&m10297, &t366_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t716, t366_m10297_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t366_m10298_ParameterInfos[] = 
{
	{"sender", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t366_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10298_MI = 
{
	"OnDeserialization", (methodPointerType)&m10298, &t366_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t366_m10298_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t157_0_0_0;
static ParameterInfo t366_m10299_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
};
extern TypeInfo t366_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10299_MI = 
{
	"Remove", (methodPointerType)&m10299, &t366_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t366_m10299_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t157_0_0_0;
extern Il2CppType t35_1_0_0;
static ParameterInfo t366_m10300_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t35_1_0_0},
};
extern TypeInfo t366_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14_t390 (MethodInfo* method, void* obj, void** args);
MethodInfo m10300_MI = 
{
	"TryGetValue", (methodPointerType)&m10300, &t366_TI, &t26_0_0_0, RuntimeInvoker_t26_t14_t390, t366_m10300_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t366_TI;
extern Il2CppType t1916_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10301_MI = 
{
	"get_Values", (methodPointerType)&m10301, &t366_TI, &t1916_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t366_m10302_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t366_TI;
extern Il2CppType t157_0_0_0;
extern void* RuntimeInvoker_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10302_MI = 
{
	"ToTKey", (methodPointerType)&m10302, &t366_TI, &t157_0_0_0, RuntimeInvoker_t14_t14, t366_m10302_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t366_m10303_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t366_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10303_MI = 
{
	"ToTValue", (methodPointerType)&m10303, &t366_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t366_m10303_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1918_0_0_0;
static ParameterInfo t366_m10304_ParameterInfos[] = 
{
	{"pair", 0, 134217728, &EmptyCustomAttributesCache, &t1918_0_0_0},
};
extern TypeInfo t366_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t1918 (MethodInfo* method, void* obj, void** args);
MethodInfo m10304_MI = 
{
	"ContainsKeyValuePair", (methodPointerType)&m10304, &t366_TI, &t26_0_0_0, RuntimeInvoker_t26_t1918, t366_m10304_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t366_TI;
extern Il2CppType t1920_0_0_0;
extern void* RuntimeInvoker_t1920 (MethodInfo* method, void* obj, void** args);
MethodInfo m10305_MI = 
{
	"GetEnumerator", (methodPointerType)&m10305, &t366_TI, &t1920_0_0_0, RuntimeInvoker_t1920, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t157_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t366_m10306_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t366_TI;
extern Il2CppType t836_0_0_0;
extern void* RuntimeInvoker_t836_t14_t35 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t841__CustomAttributeCache_m7579;
MethodInfo m10306_MI = 
{
	"<CopyTo>m__0", (methodPointerType)&m10306, &t366_TI, &t836_0_0_0, RuntimeInvoker_t836_t14_t35, t366_m10306_ParameterInfos, &t841__CustomAttributeCache_m7579, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t366_MIs[] =
{
	&m10268_MI,
	&m10269_MI,
	&m10270_MI,
	&m10271_MI,
	&m10272_MI,
	&m10273_MI,
	&m10274_MI,
	&m10275_MI,
	&m10276_MI,
	&m10277_MI,
	&m10278_MI,
	&m10279_MI,
	&m10280_MI,
	&m10281_MI,
	&m10282_MI,
	&m10283_MI,
	&m10284_MI,
	&m10285_MI,
	&m10286_MI,
	&m10287_MI,
	&m10288_MI,
	&m23755_MI,
	&m10289_MI,
	&m10290_MI,
	&m10291_MI,
	&m23756_MI,
	&m10292_MI,
	&m10293_MI,
	&m10294_MI,
	&m10295_MI,
	&m10296_MI,
	&m10297_MI,
	&m10298_MI,
	&m10299_MI,
	&m10300_MI,
	&m10301_MI,
	&m10302_MI,
	&m10303_MI,
	&m10304_MI,
	&m10305_MI,
	&m10306_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m10281_MI;
extern MethodInfo m10297_MI;
extern MethodInfo m10284_MI;
extern MethodInfo m10273_MI;
extern MethodInfo m10274_MI;
extern MethodInfo m10280_MI;
extern MethodInfo m10284_MI;
extern MethodInfo m10275_MI;
extern MethodInfo m10276_MI;
extern MethodInfo m10294_MI;
extern MethodInfo m10277_MI;
extern MethodInfo m10278_MI;
extern MethodInfo m10279_MI;
extern MethodInfo m10282_MI;
extern MethodInfo m10299_MI;
extern MethodInfo m10272_MI;
extern MethodInfo m10283_MI;
extern MethodInfo m10298_MI;
extern MethodInfo m10285_MI;
extern MethodInfo m10293_MI;
extern MethodInfo m10295_MI;
extern MethodInfo m10297_MI;
extern MethodInfo m10298_MI;
extern MethodInfo m10300_MI;
static MethodInfo* t366_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m10281_MI,
	&m10297_MI,
	&m10284_MI,
	&m10273_MI,
	&m10274_MI,
	&m10280_MI,
	&m10284_MI,
	&m10275_MI,
	&m10276_MI,
	&m10294_MI,
	&m10277_MI,
	&m10278_MI,
	&m10279_MI,
	&m10282_MI,
	&m10299_MI,
	&m10272_MI,
	&m10283_MI,
	&m10298_MI,
	&m10285_MI,
	&m10293_MI,
	&m10295_MI,
	&m10297_MI,
	&m10298_MI,
	&m10300_MI,
};
extern TypeInfo t600_TI;
extern TypeInfo t375_TI;
extern TypeInfo t651_TI;
extern TypeInfo t3993_TI;
extern TypeInfo t3995_TI;
extern TypeInfo t5155_TI;
extern TypeInfo t739_TI;
extern TypeInfo t1495_TI;
static TypeInfo* t366_ITIs[] = 
{
	&t600_TI,
	&t375_TI,
	&t651_TI,
	&t3993_TI,
	&t3995_TI,
	&t5155_TI,
	&t739_TI,
	&t1495_TI,
};
extern TypeInfo t600_TI;
extern TypeInfo t375_TI;
extern TypeInfo t651_TI;
extern TypeInfo t3993_TI;
extern TypeInfo t3995_TI;
extern TypeInfo t5155_TI;
extern TypeInfo t739_TI;
extern TypeInfo t1495_TI;
static Il2CppInterfaceOffsetPair t366_IOs[] = 
{
	{ &t600_TI, 4},
	{ &t375_TI, 5},
	{ &t651_TI, 6},
	{ &t3993_TI, 10},
	{ &t3995_TI, 17},
	{ &t5155_TI, 18},
	{ &t739_TI, 19},
	{ &t1495_TI, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t366_0_0_0;
extern Il2CppType t366_1_0_0;
extern TypeInfo t14_TI;
struct t366;
extern TypeInfo t366_TI;
extern Il2CppGenericClass t366_GC;
extern CustomAttributesCache t841__CustomAttributeCache;
extern CustomAttributesCache t841__CustomAttributeCache_U3CU3Ef__am$cacheB;
extern CustomAttributesCache t841__CustomAttributeCache_m7579;
TypeInfo t366_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Dictionary`2", "System.Collections.Generic", t366_MIs, t366_PIs, t366_FIs, NULL, &t14_TI, NULL, NULL, &t366_TI, t366_ITIs, t366_VT, &t841__CustomAttributeCache, &t366_TI, &t366_0_0_0, &t366_1_0_0, t366_IOs, &t366_GC, NULL, t366_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t366), 0, -1, sizeof(t366_SFs), 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 41, 7, 16, 0, 0, 28, 8, 8};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3993_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>
extern MethodInfo m23757_MI;
static PropertyInfo t3993____Count_PropertyInfo = 
{
	&t3993_TI, "Count", &m23757_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m23758_MI;
static PropertyInfo t3993____IsReadOnly_PropertyInfo = 
{
	&t3993_TI, "IsReadOnly", &m23758_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3993_PIs[] =
{
	&t3993____Count_PropertyInfo,
	&t3993____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t3993_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m23757_MI = 
{
	"get_Count", NULL, &t3993_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3993_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m23758_MI = 
{
	"get_IsReadOnly", NULL, &t3993_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1918_0_0_0;
static ParameterInfo t3993_m23759_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1918_0_0_0},
};
extern TypeInfo t3993_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t1918 (MethodInfo* method, void* obj, void** args);
MethodInfo m23759_MI = 
{
	"Add", NULL, &t3993_TI, &t25_0_0_0, RuntimeInvoker_t25_t1918, t3993_m23759_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3993_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m23760_MI = 
{
	"Clear", NULL, &t3993_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1918_0_0_0;
static ParameterInfo t3993_m23761_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1918_0_0_0},
};
extern TypeInfo t3993_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t1918 (MethodInfo* method, void* obj, void** args);
MethodInfo m23761_MI = 
{
	"Contains", NULL, &t3993_TI, &t26_0_0_0, RuntimeInvoker_t26_t1918, t3993_m23761_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1917_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t3993_m23762_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1917_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t3993_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m23762_MI = 
{
	"CopyTo", NULL, &t3993_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t3993_m23762_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1918_0_0_0;
static ParameterInfo t3993_m23763_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1918_0_0_0},
};
extern TypeInfo t3993_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t1918 (MethodInfo* method, void* obj, void** args);
MethodInfo m23763_MI = 
{
	"Remove", NULL, &t3993_TI, &t26_0_0_0, RuntimeInvoker_t26_t1918, t3993_m23763_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3993_MIs[] =
{
	&m23757_MI,
	&m23758_MI,
	&m23759_MI,
	&m23760_MI,
	&m23761_MI,
	&m23762_MI,
	&m23763_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t3995_TI;
static TypeInfo* t3993_ITIs[] = 
{
	&t600_TI,
	&t3995_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3993_0_0_0;
extern Il2CppType t3993_1_0_0;
struct t3993;
extern TypeInfo t3993_TI;
extern Il2CppGenericClass t3993_GC;
TypeInfo t3993_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t3993_MIs, t3993_PIs, NULL, NULL, NULL, NULL, NULL, &t3993_TI, t3993_ITIs, NULL, &EmptyCustomAttributesCache, &t3993_TI, &t3993_0_0_0, &t3993_1_0_0, NULL, &t3993_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3995_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>
extern TypeInfo t3995_TI;
extern Il2CppType t1919_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23764_MI = 
{
	"GetEnumerator", NULL, &t3995_TI, &t1919_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3995_MIs[] =
{
	&m23764_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t3995_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3995_0_0_0;
extern Il2CppType t3995_1_0_0;
struct t3995;
extern TypeInfo t3995_TI;
extern Il2CppGenericClass t3995_GC;
TypeInfo t3995_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t3995_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3995_TI, t3995_ITIs, NULL, &EmptyCustomAttributesCache, &t3995_TI, &t3995_0_0_0, &t3995_1_0_0, NULL, &t3995_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1919_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>
extern MethodInfo m23765_MI;
static PropertyInfo t1919____Current_PropertyInfo = 
{
	&t1919_TI, "Current", &m23765_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1919_PIs[] =
{
	&t1919____Current_PropertyInfo,
	NULL
};
extern TypeInfo t1919_TI;
extern Il2CppType t1918_0_0_0;
extern void* RuntimeInvoker_t1918 (MethodInfo* method, void* obj, void** args);
MethodInfo m23765_MI = 
{
	"get_Current", NULL, &t1919_TI, &t1918_0_0_0, RuntimeInvoker_t1918, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1919_MIs[] =
{
	&m23765_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t1919_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1919_0_0_0;
extern Il2CppType t1919_1_0_0;
struct t1919;
extern TypeInfo t1919_TI;
extern Il2CppGenericClass t1919_GC;
TypeInfo t1919_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t1919_MIs, t1919_PIs, NULL, NULL, NULL, NULL, NULL, &t1919_TI, t1919_ITIs, NULL, &EmptyCustomAttributesCache, &t1919_TI, &t1919_0_0_0, &t1919_1_0_0, NULL, &t1919_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1918_TI;

extern TypeInfo t1918_TI;
extern TypeInfo t443_TI;
extern TypeInfo t33_TI;
extern TypeInfo t157_TI;
extern TypeInfo t14_TI;
extern TypeInfo t35_TI;
extern MethodInfo m10309_MI;
extern MethodInfo m10311_MI;
extern MethodInfo m10308_MI;
extern MethodInfo m72_MI;
extern MethodInfo m10310_MI;
extern MethodInfo m3448_MI;


extern MethodInfo m10307_MI;
 void m10307 (t1918 * __this, t14 * p0, int32_t p1, MethodInfo* method){
	{
		m10309(__this, p0, &m10309_MI);
		m10311(__this, p1, &m10311_MI);
		return;
	}
}
extern MethodInfo m10308_MI;
 t14 * m10308 (t1918 * __this, MethodInfo* method){
	{
		t14 * L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m10309_MI;
 void m10309 (t1918 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m10310_MI;
 int32_t m10310 (t1918 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m10311_MI;
 void m10311 (t1918 * __this, int32_t p0, MethodInfo* method){
	{
		__this->f1 = p0;
		return;
	}
}
extern MethodInfo m10312_MI;
 t33* m10312 (t1918 * __this, MethodInfo* method){
	t14 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	t443* G_B2_1 = {0};
	t443* G_B2_2 = {0};
	int32_t G_B1_0 = 0;
	t443* G_B1_1 = {0};
	t443* G_B1_2 = {0};
	t33* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	t443* G_B3_2 = {0};
	t443* G_B3_3 = {0};
	int32_t G_B5_0 = 0;
	t443* G_B5_1 = {0};
	t443* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	t443* G_B4_1 = {0};
	t443* G_B4_2 = {0};
	t33* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	t443* G_B6_2 = {0};
	t443* G_B6_3 = {0};
	{
		t443* L_0 = ((t443*)SZArrayNew(InitializedTypeInfo(&t443_TI), 5));
		ArrayElementTypeCheck (L_0, (t33*) &_stringLiteral174);
		*((t33**)(t33**)SZArrayLdElema(L_0, 0)) = (t33*)(t33*) &_stringLiteral174;
		t443* L_1 = L_0;
		t14 * L_2 = m10308(__this, &m10308_MI);
		t14 * L_3 = L_2;
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!((t14 *)L_3))
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0033;
		}
	}
	{
		t14 * L_4 = m10308(__this, &m10308_MI);
		V_0 = L_4;
		t33* L_5 = (t33*)VirtFuncInvoker0< t33* >::Invoke(&m72_MI, (*(&V_0)));
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0038;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t33_TI));
		G_B3_0 = (((t33_SFs*)(&t33_TI)->static_fields)->f2);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0038:
	{
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((t33**)(t33**)SZArrayLdElema(G_B3_2, G_B3_1)) = (t33*)G_B3_0;
		t443* L_6 = G_B3_3;
		ArrayElementTypeCheck (L_6, (t33*) &_stringLiteral183);
		*((t33**)(t33**)SZArrayLdElema(L_6, 2)) = (t33*)(t33*) &_stringLiteral183;
		t443* L_7 = L_6;
		int32_t L_8 = m10310(__this, &m10310_MI);
		int32_t L_9 = L_8;
		t14 * L_10 = Box(InitializedTypeInfo(&t35_TI), &L_9);
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
		if (!L_10)
		{
			G_B5_0 = 3;
			G_B5_1 = L_7;
			G_B5_2 = L_7;
			goto IL_0066;
		}
	}
	{
		int32_t L_11 = m10310(__this, &m10310_MI);
		V_1 = L_11;
		t33* L_12 = (t33*)VirtFuncInvoker0< t33* >::Invoke(&m72_MI, Box(InitializedTypeInfo(&t35_TI), &(*(&V_1))));
		G_B6_0 = L_12;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_006b;
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t33_TI));
		G_B6_0 = (((t33_SFs*)(&t33_TI)->static_fields)->f2);
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_006b:
	{
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		*((t33**)(t33**)SZArrayLdElema(G_B6_2, G_B6_1)) = (t33*)G_B6_0;
		t443* L_13 = G_B6_3;
		ArrayElementTypeCheck (L_13, (t33*) &_stringLiteral175);
		*((t33**)(t33**)SZArrayLdElema(L_13, 4)) = (t33*)(t33*) &_stringLiteral175;
		IL2CPP_RUNTIME_CLASS_INIT((&t33_TI));
		t33* L_14 = m3448(NULL, L_13, &m3448_MI);
		return L_14;
	}
}
// Metadata Definition System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>
extern Il2CppType t157_0_0_1;
FieldInfo t1918_f0_FieldInfo = 
{
	"key", &t157_0_0_1, &t1918_TI, offsetof(t1918, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t1918_f1_FieldInfo = 
{
	"value", &t35_0_0_1, &t1918_TI, offsetof(t1918, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t1918_FIs[] =
{
	&t1918_f0_FieldInfo,
	&t1918_f1_FieldInfo,
	NULL
};
extern MethodInfo m10308_MI;
extern MethodInfo m10309_MI;
static PropertyInfo t1918____Key_PropertyInfo = 
{
	&t1918_TI, "Key", &m10308_MI, &m10309_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10310_MI;
extern MethodInfo m10311_MI;
static PropertyInfo t1918____Value_PropertyInfo = 
{
	&t1918_TI, "Value", &m10310_MI, &m10311_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1918_PIs[] =
{
	&t1918____Key_PropertyInfo,
	&t1918____Value_PropertyInfo,
	NULL
};
extern Il2CppType t157_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t1918_m10307_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1918_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10307_MI = 
{
	".ctor", (methodPointerType)&m10307, &t1918_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t1918_m10307_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1918_TI;
extern Il2CppType t157_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10308_MI = 
{
	"get_Key", (methodPointerType)&m10308, &t1918_TI, &t157_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t157_0_0_0;
static ParameterInfo t1918_m10309_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
};
extern TypeInfo t1918_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10309_MI = 
{
	"set_Key", (methodPointerType)&m10309, &t1918_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1918_m10309_ParameterInfos, &EmptyCustomAttributesCache, 2177, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1918_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10310_MI = 
{
	"get_Value", (methodPointerType)&m10310, &t1918_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1918_m10311_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1918_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10311_MI = 
{
	"set_Value", (methodPointerType)&m10311, &t1918_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t1918_m10311_ParameterInfos, &EmptyCustomAttributesCache, 2177, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1918_TI;
extern Il2CppType t33_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10312_MI = 
{
	"ToString", (methodPointerType)&m10312, &t1918_TI, &t33_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1918_MIs[] =
{
	&m10307_MI,
	&m10308_MI,
	&m10309_MI,
	&m10310_MI,
	&m10311_MI,
	&m10312_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m10312_MI;
static MethodInfo* t1918_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m10312_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1918_0_0_0;
extern Il2CppType t1918_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t1918_TI;
extern Il2CppGenericClass t1918_GC;
extern CustomAttributesCache t846__CustomAttributeCache;
TypeInfo t1918_TI = 
{
	&g_mscorlib_dll_Image, NULL, "KeyValuePair`2", "System.Collections.Generic", t1918_MIs, t1918_PIs, t1918_FIs, NULL, &t122_TI, NULL, NULL, &t1918_TI, NULL, t1918_VT, &t846__CustomAttributeCache, &t1918_TI, &t1918_0_0_0, &t1918_1_0_0, NULL, &t1918_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1918)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057033, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 2, 0, 0, 4, 0, 0};
#include "t1921.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1921_TI;
#include "t1921MD.h"

extern TypeInfo t1921_TI;
extern TypeInfo t1918_TI;
extern TypeInfo t1278_TI;
extern MethodInfo m10317_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m17625_MI;
struct t24;
 t1918  m17625 (t24 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17625_MI;


extern MethodInfo m10313_MI;
 void m10313 (t1921 * __this, t24 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m10314_MI;
 t14 * m10314 (t1921 * __this, MethodInfo* method){
	{
		t1918  L_0 = m10317(__this, &m10317_MI);
		t1918  L_1 = L_0;
		t14 * L_2 = Box(InitializedTypeInfo(&t1918_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m10315_MI;
 void m10315 (t1921 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m10316_MI;
 bool m10316 (t1921 * __this, MethodInfo* method){
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
extern MethodInfo m10317_MI;
 t1918  m10317 (t1921 * __this, MethodInfo* method){
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
		t1918  L_8 = m17625(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m17625_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>
extern Il2CppType t24_0_0_1;
FieldInfo t1921_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t1921_TI, offsetof(t1921, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t1921_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t1921_TI, offsetof(t1921, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t1921_FIs[] =
{
	&t1921_f0_FieldInfo,
	&t1921_f1_FieldInfo,
	NULL
};
extern MethodInfo m10314_MI;
static PropertyInfo t1921____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1921_TI, "System.Collections.IEnumerator.Current", &m10314_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10317_MI;
static PropertyInfo t1921____Current_PropertyInfo = 
{
	&t1921_TI, "Current", &m10317_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1921_PIs[] =
{
	&t1921____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1921____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t1921_m10313_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t1921_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10313_MI = 
{
	".ctor", (methodPointerType)&m10313, &t1921_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1921_m10313_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1921_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10314_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m10314, &t1921_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1921_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10315_MI = 
{
	"Dispose", (methodPointerType)&m10315, &t1921_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1921_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10316_MI = 
{
	"MoveNext", (methodPointerType)&m10316, &t1921_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1921_TI;
extern Il2CppType t1918_0_0_0;
extern void* RuntimeInvoker_t1918 (MethodInfo* method, void* obj, void** args);
MethodInfo m10317_MI = 
{
	"get_Current", (methodPointerType)&m10317, &t1921_TI, &t1918_0_0_0, RuntimeInvoker_t1918, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1921_MIs[] =
{
	&m10313_MI,
	&m10314_MI,
	&m10315_MI,
	&m10316_MI,
	&m10317_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m10314_MI;
extern MethodInfo m10316_MI;
extern MethodInfo m10315_MI;
extern MethodInfo m10317_MI;
static MethodInfo* t1921_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m10314_MI,
	&m10316_MI,
	&m10315_MI,
	&m10317_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t1919_TI;
static TypeInfo* t1921_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t1919_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t1919_TI;
static Il2CppInterfaceOffsetPair t1921_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t1919_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1921_0_0_0;
extern Il2CppType t1921_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t1921_TI;
extern Il2CppGenericClass t1921_GC;
extern TypeInfo t24_TI;
TypeInfo t1921_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1921_MIs, t1921_PIs, t1921_FIs, NULL, &t122_TI, NULL, &t24_TI, &t1921_TI, t1921_ITIs, t1921_VT, &EmptyCustomAttributesCache, &t1921_TI, &t1921_0_0_0, &t1921_1_0_0, t1921_IOs, &t1921_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1921)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3994_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>
extern MethodInfo m23766_MI;
extern MethodInfo m23767_MI;
static PropertyInfo t3994____Item_PropertyInfo = 
{
	&t3994_TI, "Item", &m23766_MI, &m23767_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3994_PIs[] =
{
	&t3994____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1918_0_0_0;
static ParameterInfo t3994_m23768_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1918_0_0_0},
};
extern TypeInfo t3994_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t1918 (MethodInfo* method, void* obj, void** args);
MethodInfo m23768_MI = 
{
	"IndexOf", NULL, &t3994_TI, &t35_0_0_0, RuntimeInvoker_t35_t1918, t3994_m23768_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1918_0_0_0;
static ParameterInfo t3994_m23769_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1918_0_0_0},
};
extern TypeInfo t3994_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t1918 (MethodInfo* method, void* obj, void** args);
MethodInfo m23769_MI = 
{
	"Insert", NULL, &t3994_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t1918, t3994_m23769_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t3994_m23770_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t3994_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m23770_MI = 
{
	"RemoveAt", NULL, &t3994_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t3994_m23770_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t3994_m23766_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t3994_TI;
extern Il2CppType t1918_0_0_0;
extern void* RuntimeInvoker_t1918_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m23766_MI = 
{
	"get_Item", NULL, &t3994_TI, &t1918_0_0_0, RuntimeInvoker_t1918_t35, t3994_m23766_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1918_0_0_0;
static ParameterInfo t3994_m23767_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1918_0_0_0},
};
extern TypeInfo t3994_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t1918 (MethodInfo* method, void* obj, void** args);
MethodInfo m23767_MI = 
{
	"set_Item", NULL, &t3994_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t1918, t3994_m23767_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3994_MIs[] =
{
	&m23768_MI,
	&m23769_MI,
	&m23770_MI,
	&m23766_MI,
	&m23767_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t3993_TI;
extern TypeInfo t3995_TI;
static TypeInfo* t3994_ITIs[] = 
{
	&t600_TI,
	&t3993_TI,
	&t3995_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3994_0_0_0;
extern Il2CppType t3994_1_0_0;
struct t3994;
extern TypeInfo t3994_TI;
extern Il2CppGenericClass t3994_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t3994_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t3994_MIs, t3994_PIs, NULL, NULL, NULL, NULL, NULL, &t3994_TI, t3994_ITIs, NULL, &t1409__CustomAttributeCache, &t3994_TI, &t3994_0_0_0, &t3994_1_0_0, NULL, &t3994_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5155_TI;



// Metadata Definition System.Collections.Generic.IDictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>
extern Il2CppType t157_0_0_0;
static ParameterInfo t5155_m23771_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
};
extern TypeInfo t5155_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23771_MI = 
{
	"Remove", NULL, &t5155_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t5155_m23771_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5155_MIs[] =
{
	&m23771_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t3993_TI;
extern TypeInfo t3995_TI;
static TypeInfo* t5155_ITIs[] = 
{
	&t600_TI,
	&t3993_TI,
	&t3995_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5155_0_0_0;
extern Il2CppType t5155_1_0_0;
struct t5155;
extern TypeInfo t5155_TI;
extern Il2CppGenericClass t5155_GC;
extern CustomAttributesCache t1469__CustomAttributeCache;
TypeInfo t5155_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IDictionary`2", "System.Collections.Generic", t5155_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5155_TI, t5155_ITIs, NULL, &t1469__CustomAttributeCache, &t5155_TI, &t5155_0_0_0, &t5155_1_0_0, NULL, &t5155_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1916_TI;

#include "t1922.h"
#include "t1923.h"
extern TypeInfo t1916_TI;
extern TypeInfo t651_TI;
extern TypeInfo t14_TI;
extern TypeInfo t366_TI;
extern TypeInfo t35_TI;
extern TypeInfo t338_TI;
extern TypeInfo t345_TI;
extern TypeInfo t1922_TI;
extern TypeInfo t51_TI;
extern TypeInfo t25_TI;
extern TypeInfo t1923_TI;
#include "t1923MD.h"
#include "t1922MD.h"
extern MethodInfo m7415_MI;
extern MethodInfo m10284_MI;
extern MethodInfo m73_MI;
extern MethodInfo m2974_MI;
extern MethodInfo m7027_MI;
extern MethodInfo m10296_MI;
extern MethodInfo m10330_MI;
extern MethodInfo m10329_MI;
extern MethodInfo m10288_MI;
extern MethodInfo m10290_MI;
extern MethodInfo m10348_MI;
extern MethodInfo m17636_MI;
extern MethodInfo m17637_MI;
extern MethodInfo m10332_MI;
struct t366;
 void m17636 (t366 * __this, t24 * p0, int32_t p1, t1923 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17636_MI;
struct t366;
 void m17637 (t366 * __this, t51* p0, int32_t p1, t1923 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17637_MI;


extern MethodInfo m10318_MI;
 void m10318 (t1916 * __this, t366 * p0, MethodInfo* method){
	{
		m73(__this, &m73_MI);
		if (p0)
		{
			goto IL_0014;
		}
	}
	{
		t338 * L_0 = (t338 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t338_TI));
		m2974(L_0, (t33*) &_stringLiteral549, &m2974_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_0014:
	{
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m10319_MI;
 void m10319 (t1916 * __this, int32_t p0, MethodInfo* method){
	{
		t345 * L_0 = (t345 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t345_TI));
		m7027(L_0, (t33*) &_stringLiteral550, &m7027_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m10320_MI;
 void m10320 (t1916 * __this, MethodInfo* method){
	{
		t345 * L_0 = (t345 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t345_TI));
		m7027(L_0, (t33*) &_stringLiteral550, &m7027_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m10321_MI;
 bool m10321 (t1916 * __this, int32_t p0, MethodInfo* method){
	{
		t366 * L_0 = (__this->f0);
		bool L_1 = m10296(L_0, p0, &m10296_MI);
		return L_1;
	}
}
extern MethodInfo m10322_MI;
 bool m10322 (t1916 * __this, int32_t p0, MethodInfo* method){
	{
		t345 * L_0 = (t345 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t345_TI));
		m7027(L_0, (t33*) &_stringLiteral550, &m7027_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m10323_MI;
 t14* m10323 (t1916 * __this, MethodInfo* method){
	{
		t1922  L_0 = m10330(__this, &m10330_MI);
		t1922  L_1 = L_0;
		t14 * L_2 = Box(InitializedTypeInfo(&t1922_TI), &L_1);
		return (t14*)L_2;
	}
}
extern MethodInfo m10324_MI;
 void m10324 (t1916 * __this, t24 * p0, int32_t p1, MethodInfo* method){
	t51* V_0 = {0};
	{
		V_0 = ((t51*)IsInst(p0, InitializedTypeInfo(&t51_TI)));
		if (!V_0)
		{
			goto IL_0013;
		}
	}
	{
		VirtActionInvoker2< t51*, int32_t >::Invoke(&m10329_MI, __this, V_0, p1);
		return;
	}

IL_0013:
	{
		t366 * L_0 = (__this->f0);
		m10288(L_0, p0, p1, &m10288_MI);
		t366 * L_1 = (__this->f0);
		t77 L_2 = { &m10290_MI };
		t1923 * L_3 = (t1923 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1923_TI));
		m10348(L_3, NULL, L_2, &m10348_MI);
		m17636(L_1, p0, p1, L_3, &m17636_MI);
		return;
	}
}
extern MethodInfo m10325_MI;
 t14 * m10325 (t1916 * __this, MethodInfo* method){
	{
		t1922  L_0 = m10330(__this, &m10330_MI);
		t1922  L_1 = L_0;
		t14 * L_2 = Box(InitializedTypeInfo(&t1922_TI), &L_1);
		return (t14 *)L_2;
	}
}
extern MethodInfo m10326_MI;
 bool m10326 (t1916 * __this, MethodInfo* method){
	{
		return 1;
	}
}
extern MethodInfo m10327_MI;
 bool m10327 (t1916 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m10328_MI;
 t14 * m10328 (t1916 * __this, MethodInfo* method){
	{
		t366 * L_0 = (__this->f0);
		t14 * L_1 = (t14 *)InterfaceFuncInvoker0< t14 * >::Invoke(&m7415_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m10329_MI;
 void m10329 (t1916 * __this, t51* p0, int32_t p1, MethodInfo* method){
	{
		t366 * L_0 = (__this->f0);
		m10288(L_0, (t24 *)(t24 *)p0, p1, &m10288_MI);
		t366 * L_1 = (__this->f0);
		t77 L_2 = { &m10290_MI };
		t1923 * L_3 = (t1923 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1923_TI));
		m10348(L_3, NULL, L_2, &m10348_MI);
		m17637(L_1, p0, p1, L_3, &m17637_MI);
		return;
	}
}
extern MethodInfo m10330_MI;
 t1922  m10330 (t1916 * __this, MethodInfo* method){
	{
		t366 * L_0 = (__this->f0);
		t1922  L_1 = {0};
		m10332(&L_1, L_0, &m10332_MI);
		return L_1;
	}
}
extern MethodInfo m10331_MI;
 int32_t m10331 (t1916 * __this, MethodInfo* method){
	{
		t366 * L_0 = (__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m10284_MI, L_0);
		return L_1;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.ICanvasElement,System.Int32>
extern Il2CppType t366_0_0_1;
FieldInfo t1916_f0_FieldInfo = 
{
	"dictionary", &t366_0_0_1, &t1916_TI, offsetof(t1916, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1916_FIs[] =
{
	&t1916_f0_FieldInfo,
	NULL
};
extern MethodInfo m10326_MI;
static PropertyInfo t1916____System_Collections_Generic_ICollectionU3CTValueU3E_IsReadOnly_PropertyInfo = 
{
	&t1916_TI, "System.Collections.Generic.ICollection<TValue>.IsReadOnly", &m10326_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10327_MI;
static PropertyInfo t1916____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t1916_TI, "System.Collections.ICollection.IsSynchronized", &m10327_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10328_MI;
static PropertyInfo t1916____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t1916_TI, "System.Collections.ICollection.SyncRoot", &m10328_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10331_MI;
static PropertyInfo t1916____Count_PropertyInfo = 
{
	&t1916_TI, "Count", &m10331_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1916_PIs[] =
{
	&t1916____System_Collections_Generic_ICollectionU3CTValueU3E_IsReadOnly_PropertyInfo,
	&t1916____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t1916____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t1916____Count_PropertyInfo,
	NULL
};
extern Il2CppType t366_0_0_0;
static ParameterInfo t1916_m10318_ParameterInfos[] = 
{
	{"dictionary", 0, 134217728, &EmptyCustomAttributesCache, &t366_0_0_0},
};
extern TypeInfo t1916_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10318_MI = 
{
	".ctor", (methodPointerType)&m10318, &t1916_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1916_m10318_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1916_m10319_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1916_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10319_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Add", (methodPointerType)&m10319, &t1916_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t1916_m10319_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1916_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10320_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Clear", (methodPointerType)&m10320, &t1916_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 481, 0, 12, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1916_m10321_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1916_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10321_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Contains", (methodPointerType)&m10321, &t1916_TI, &t26_0_0_0, RuntimeInvoker_t26_t35, t1916_m10321_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1916_m10322_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1916_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10322_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Remove", (methodPointerType)&m10322, &t1916_TI, &t26_0_0_0, RuntimeInvoker_t26_t35, t1916_m10322_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1916_TI;
extern Il2CppType t1898_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10323_MI = 
{
	"System.Collections.Generic.IEnumerable<TValue>.GetEnumerator", (methodPointerType)&m10323, &t1916_TI, &t1898_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 481, 0, 16, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t24_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t1916_m10324_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1916_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10324_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m10324, &t1916_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t1916_m10324_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1916_TI;
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10325_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m10325, &t1916_TI, &t36_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1916_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10326_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.get_IsReadOnly", (methodPointerType)&m10326, &t1916_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1916_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10327_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m10327, &t1916_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1916_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10328_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m10328, &t1916_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t51_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t1916_m10329_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t51_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1916_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10329_MI = 
{
	"CopyTo", (methodPointerType)&m10329, &t1916_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t1916_m10329_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 14, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1916_TI;
extern Il2CppType t1922_0_0_0;
extern void* RuntimeInvoker_t1922 (MethodInfo* method, void* obj, void** args);
MethodInfo m10330_MI = 
{
	"GetEnumerator", (methodPointerType)&m10330, &t1916_TI, &t1922_0_0_0, RuntimeInvoker_t1922, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1916_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10331_MI = 
{
	"get_Count", (methodPointerType)&m10331, &t1916_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 2534, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1916_MIs[] =
{
	&m10318_MI,
	&m10319_MI,
	&m10320_MI,
	&m10321_MI,
	&m10322_MI,
	&m10323_MI,
	&m10324_MI,
	&m10325_MI,
	&m10326_MI,
	&m10327_MI,
	&m10328_MI,
	&m10329_MI,
	&m10330_MI,
	&m10331_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m10325_MI;
extern MethodInfo m10331_MI;
extern MethodInfo m10327_MI;
extern MethodInfo m10328_MI;
extern MethodInfo m10324_MI;
extern MethodInfo m10331_MI;
extern MethodInfo m10326_MI;
extern MethodInfo m10319_MI;
extern MethodInfo m10320_MI;
extern MethodInfo m10321_MI;
extern MethodInfo m10329_MI;
extern MethodInfo m10322_MI;
extern MethodInfo m10323_MI;
static MethodInfo* t1916_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m10325_MI,
	&m10331_MI,
	&m10327_MI,
	&m10328_MI,
	&m10324_MI,
	&m10331_MI,
	&m10326_MI,
	&m10319_MI,
	&m10320_MI,
	&m10321_MI,
	&m10329_MI,
	&m10322_MI,
	&m10323_MI,
};
extern TypeInfo t600_TI;
extern TypeInfo t651_TI;
extern TypeInfo t3808_TI;
extern TypeInfo t3810_TI;
static TypeInfo* t1916_ITIs[] = 
{
	&t600_TI,
	&t651_TI,
	&t3808_TI,
	&t3810_TI,
};
extern TypeInfo t600_TI;
extern TypeInfo t651_TI;
extern TypeInfo t3808_TI;
extern TypeInfo t3810_TI;
static Il2CppInterfaceOffsetPair t1916_IOs[] = 
{
	{ &t600_TI, 4},
	{ &t651_TI, 5},
	{ &t3808_TI, 9},
	{ &t3810_TI, 16},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1916_0_0_0;
extern Il2CppType t1916_1_0_0;
extern TypeInfo t14_TI;
struct t1916;
extern TypeInfo t1916_TI;
extern Il2CppGenericClass t1916_GC;
extern TypeInfo t841_TI;
extern CustomAttributesCache t839__CustomAttributeCache;
TypeInfo t1916_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ValueCollection", "", t1916_MIs, t1916_PIs, t1916_FIs, NULL, &t14_TI, NULL, &t841_TI, &t1916_TI, t1916_ITIs, t1916_VT, &t839__CustomAttributeCache, &t1916_TI, &t1916_0_0_0, &t1916_1_0_0, t1916_IOs, &t1916_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1916), 0, -1, 0, 0, -1, 1057026, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 14, 4, 1, 0, 0, 17, 4, 4};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1922_TI;

extern TypeInfo t1922_TI;
extern TypeInfo t35_TI;
extern TypeInfo t1920_TI;
extern TypeInfo t25_TI;
extern TypeInfo t26_TI;
extern MethodInfo m10344_MI;
extern MethodInfo m10310_MI;
extern MethodInfo m10305_MI;
extern MethodInfo m10347_MI;
extern MethodInfo m10341_MI;


extern MethodInfo m10332_MI;
 void m10332 (t1922 * __this, t366 * p0, MethodInfo* method){
	{
		t1920  L_0 = m10305(p0, &m10305_MI);
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m10333_MI;
 t14 * m10333 (t1922 * __this, MethodInfo* method){
	{
		t1920 * L_0 = &(__this->f0);
		int32_t L_1 = m10344(L_0, &m10344_MI);
		int32_t L_2 = L_1;
		t14 * L_3 = Box(InitializedTypeInfo(&t35_TI), &L_2);
		return L_3;
	}
}
extern MethodInfo m10334_MI;
 void m10334 (t1922 * __this, MethodInfo* method){
	{
		t1920 * L_0 = &(__this->f0);
		m10347(L_0, &m10347_MI);
		return;
	}
}
extern MethodInfo m10335_MI;
 bool m10335 (t1922 * __this, MethodInfo* method){
	{
		t1920 * L_0 = &(__this->f0);
		bool L_1 = m10341(L_0, &m10341_MI);
		return L_1;
	}
}
extern MethodInfo m10336_MI;
 int32_t m10336 (t1922 * __this, MethodInfo* method){
	{
		t1920 * L_0 = &(__this->f0);
		t1918 * L_1 = &(L_0->f3);
		int32_t L_2 = m10310(L_1, &m10310_MI);
		return L_2;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>
extern Il2CppType t1920_0_0_1;
FieldInfo t1922_f0_FieldInfo = 
{
	"host_enumerator", &t1920_0_0_1, &t1922_TI, offsetof(t1922, f0) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t1922_FIs[] =
{
	&t1922_f0_FieldInfo,
	NULL
};
extern MethodInfo m10333_MI;
static PropertyInfo t1922____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1922_TI, "System.Collections.IEnumerator.Current", &m10333_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10336_MI;
static PropertyInfo t1922____Current_PropertyInfo = 
{
	&t1922_TI, "Current", &m10336_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1922_PIs[] =
{
	&t1922____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1922____Current_PropertyInfo,
	NULL
};
extern Il2CppType t366_0_0_0;
static ParameterInfo t1922_m10332_ParameterInfos[] = 
{
	{"host", 0, 134217728, &EmptyCustomAttributesCache, &t366_0_0_0},
};
extern TypeInfo t1922_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10332_MI = 
{
	".ctor", (methodPointerType)&m10332, &t1922_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1922_m10332_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1922_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10333_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m10333, &t1922_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1922_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10334_MI = 
{
	"Dispose", (methodPointerType)&m10334, &t1922_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1922_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10335_MI = 
{
	"MoveNext", (methodPointerType)&m10335, &t1922_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1922_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10336_MI = 
{
	"get_Current", (methodPointerType)&m10336, &t1922_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1922_MIs[] =
{
	&m10332_MI,
	&m10333_MI,
	&m10334_MI,
	&m10335_MI,
	&m10336_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m10333_MI;
extern MethodInfo m10335_MI;
extern MethodInfo m10334_MI;
extern MethodInfo m10336_MI;
static MethodInfo* t1922_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m10333_MI,
	&m10335_MI,
	&m10334_MI,
	&m10336_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t1898_TI;
static TypeInfo* t1922_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t1898_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t1898_TI;
static Il2CppInterfaceOffsetPair t1922_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t1898_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1922_0_0_0;
extern Il2CppType t1922_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t1922_TI;
extern Il2CppGenericClass t1922_GC;
extern TypeInfo t839_TI;
TypeInfo t1922_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t1922_MIs, t1922_PIs, t1922_FIs, NULL, &t122_TI, NULL, &t839_TI, &t1922_TI, t1922_ITIs, t1922_VT, &EmptyCustomAttributesCache, &t1922_TI, &t1922_0_0_0, &t1922_1_0_0, t1922_IOs, &t1922_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1922)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 1, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1920_TI;

extern TypeInfo t1920_TI;
extern TypeInfo t1918_TI;
extern TypeInfo t157_TI;
extern TypeInfo t35_TI;
extern TypeInfo t836_TI;
extern TypeInfo t366_TI;
extern TypeInfo t834_TI;
extern TypeInfo t1295_TI;
extern TypeInfo t1278_TI;
extern MethodInfo m10346_MI;
extern MethodInfo m10308_MI;
extern MethodInfo m10310_MI;
extern MethodInfo m4371_MI;
extern MethodInfo m10343_MI;
extern MethodInfo m10345_MI;
extern MethodInfo m10307_MI;
extern MethodInfo m7129_MI;
extern MethodInfo m6925_MI;


extern MethodInfo m10337_MI;
 void m10337 (t1920 * __this, t366 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		int32_t L_0 = (p0->f14);
		__this->f2 = L_0;
		return;
	}
}
extern MethodInfo m10338_MI;
 t14 * m10338 (t1920 * __this, MethodInfo* method){
	{
		m10346(__this, &m10346_MI);
		t1918  L_0 = (__this->f3);
		t1918  L_1 = L_0;
		t14 * L_2 = Box(InitializedTypeInfo(&t1918_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m10339_MI;
 t836  m10339 (t1920 * __this, MethodInfo* method){
	{
		m10346(__this, &m10346_MI);
		t1918 * L_0 = &(__this->f3);
		t14 * L_1 = m10308(L_0, &m10308_MI);
		t14 * L_2 = L_1;
		t1918 * L_3 = &(__this->f3);
		int32_t L_4 = m10310(L_3, &m10310_MI);
		int32_t L_5 = L_4;
		t14 * L_6 = Box(InitializedTypeInfo(&t35_TI), &L_5);
		t836  L_7 = {0};
		m4371(&L_7, ((t14 *)L_2), L_6, &m4371_MI);
		return L_7;
	}
}
extern MethodInfo m10340_MI;
 t14 * m10340 (t1920 * __this, MethodInfo* method){
	{
		t14 * L_0 = m10343(__this, &m10343_MI);
		t14 * L_1 = L_0;
		return ((t14 *)L_1);
	}
}
extern MethodInfo m10341_MI;
 bool m10341 (t1920 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		m10345(__this, &m10345_MI);
		int32_t L_0 = (__this->f1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		goto IL_0072;
	}

IL_0013:
	{
		int32_t L_1 = (__this->f1);
		int32_t L_2 = L_1;
		V_1 = L_2;
		__this->f1 = ((int32_t)(L_2+1));
		V_0 = V_1;
		t366 * L_3 = (__this->f0);
		t1459* L_4 = (L_3->f5);
		int32_t L_5 = (((t834 *)(t834 *)SZArrayLdElema(L_4, V_0))->f0);
		if (!((int32_t)(L_5&((int32_t)-2147483648))))
		{
			goto IL_0072;
		}
	}
	{
		t366 * L_6 = (__this->f0);
		t1887* L_7 = (L_6->f6);
		t366 * L_8 = (__this->f0);
		t51* L_9 = (L_8->f7);
		t1918  L_10 = {0};
		m10307(&L_10, (*(t14 **)(t14 **)SZArrayLdElema(L_7, V_0)), (*(int32_t*)(int32_t*)SZArrayLdElema(L_9, V_0)), &m10307_MI);
		__this->f3 = L_10;
		return 1;
	}

IL_0072:
	{
		int32_t L_11 = (__this->f1);
		t366 * L_12 = (__this->f0);
		int32_t L_13 = (L_12->f8);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0013;
		}
	}
	{
		__this->f1 = (-1);
		return 0;
	}
}
extern MethodInfo m10342_MI;
 t1918  m10342 (t1920 * __this, MethodInfo* method){
	{
		t1918  L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m10343_MI;
 t14 * m10343 (t1920 * __this, MethodInfo* method){
	{
		m10346(__this, &m10346_MI);
		t1918 * L_0 = &(__this->f3);
		t14 * L_1 = m10308(L_0, &m10308_MI);
		return L_1;
	}
}
extern MethodInfo m10344_MI;
 int32_t m10344 (t1920 * __this, MethodInfo* method){
	{
		m10346(__this, &m10346_MI);
		t1918 * L_0 = &(__this->f3);
		int32_t L_1 = m10310(L_0, &m10310_MI);
		return L_1;
	}
}
extern MethodInfo m10345_MI;
 void m10345 (t1920 * __this, MethodInfo* method){
	{
		t366 * L_0 = (__this->f0);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		t1295 * L_1 = (t1295 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1295_TI));
		m7129(L_1, (t33*)NULL, &m7129_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_000f:
	{
		t366 * L_2 = (__this->f0);
		int32_t L_3 = (L_2->f14);
		int32_t L_4 = (__this->f2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_002d;
		}
	}
	{
		t1278 * L_5 = (t1278 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1278_TI));
		m6925(L_5, (t33*) &_stringLiteral547, &m6925_MI);
		il2cpp_codegen_raise_exception (L_5);
	}

IL_002d:
	{
		return;
	}
}
extern MethodInfo m10346_MI;
 void m10346 (t1920 * __this, MethodInfo* method){
	{
		m10345(__this, &m10345_MI);
		int32_t L_0 = (__this->f1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		t1278 * L_1 = (t1278 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1278_TI));
		m6925(L_1, (t33*) &_stringLiteral548, &m6925_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_001a:
	{
		return;
	}
}
extern MethodInfo m10347_MI;
 void m10347 (t1920 * __this, MethodInfo* method){
	{
		__this->f0 = (t366 *)NULL;
		return;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>
extern Il2CppType t366_0_0_1;
FieldInfo t1920_f0_FieldInfo = 
{
	"dictionary", &t366_0_0_1, &t1920_TI, offsetof(t1920, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t1920_f1_FieldInfo = 
{
	"next", &t35_0_0_1, &t1920_TI, offsetof(t1920, f1) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t1920_f2_FieldInfo = 
{
	"stamp", &t35_0_0_1, &t1920_TI, offsetof(t1920, f2) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t1918_0_0_3;
FieldInfo t1920_f3_FieldInfo = 
{
	"current", &t1918_0_0_3, &t1920_TI, offsetof(t1920, f3) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t1920_FIs[] =
{
	&t1920_f0_FieldInfo,
	&t1920_f1_FieldInfo,
	&t1920_f2_FieldInfo,
	&t1920_f3_FieldInfo,
	NULL
};
extern MethodInfo m10338_MI;
static PropertyInfo t1920____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1920_TI, "System.Collections.IEnumerator.Current", &m10338_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10339_MI;
static PropertyInfo t1920____System_Collections_IDictionaryEnumerator_Entry_PropertyInfo = 
{
	&t1920_TI, "System.Collections.IDictionaryEnumerator.Entry", &m10339_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10340_MI;
static PropertyInfo t1920____System_Collections_IDictionaryEnumerator_Key_PropertyInfo = 
{
	&t1920_TI, "System.Collections.IDictionaryEnumerator.Key", &m10340_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10342_MI;
static PropertyInfo t1920____Current_PropertyInfo = 
{
	&t1920_TI, "Current", &m10342_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10343_MI;
static PropertyInfo t1920____CurrentKey_PropertyInfo = 
{
	&t1920_TI, "CurrentKey", &m10343_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10344_MI;
static PropertyInfo t1920____CurrentValue_PropertyInfo = 
{
	&t1920_TI, "CurrentValue", &m10344_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1920_PIs[] =
{
	&t1920____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1920____System_Collections_IDictionaryEnumerator_Entry_PropertyInfo,
	&t1920____System_Collections_IDictionaryEnumerator_Key_PropertyInfo,
	&t1920____Current_PropertyInfo,
	&t1920____CurrentKey_PropertyInfo,
	&t1920____CurrentValue_PropertyInfo,
	NULL
};
extern Il2CppType t366_0_0_0;
static ParameterInfo t1920_m10337_ParameterInfos[] = 
{
	{"dictionary", 0, 134217728, &EmptyCustomAttributesCache, &t366_0_0_0},
};
extern TypeInfo t1920_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10337_MI = 
{
	".ctor", (methodPointerType)&m10337, &t1920_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1920_m10337_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1920_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10338_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m10338, &t1920_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1920_TI;
extern Il2CppType t836_0_0_0;
extern void* RuntimeInvoker_t836 (MethodInfo* method, void* obj, void** args);
MethodInfo m10339_MI = 
{
	"System.Collections.IDictionaryEnumerator.get_Entry", (methodPointerType)&m10339, &t1920_TI, &t836_0_0_0, RuntimeInvoker_t836, NULL, &EmptyCustomAttributesCache, 2529, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1920_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10340_MI = 
{
	"System.Collections.IDictionaryEnumerator.get_Key", (methodPointerType)&m10340, &t1920_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1920_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10341_MI = 
{
	"MoveNext", (methodPointerType)&m10341, &t1920_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1920_TI;
extern Il2CppType t1918_0_0_0;
extern void* RuntimeInvoker_t1918 (MethodInfo* method, void* obj, void** args);
MethodInfo m10342_MI = 
{
	"get_Current", (methodPointerType)&m10342, &t1920_TI, &t1918_0_0_0, RuntimeInvoker_t1918, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1920_TI;
extern Il2CppType t157_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10343_MI = 
{
	"get_CurrentKey", (methodPointerType)&m10343, &t1920_TI, &t157_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1920_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10344_MI = 
{
	"get_CurrentValue", (methodPointerType)&m10344, &t1920_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1920_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10345_MI = 
{
	"VerifyState", (methodPointerType)&m10345, &t1920_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1920_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10346_MI = 
{
	"VerifyCurrent", (methodPointerType)&m10346, &t1920_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1920_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10347_MI = 
{
	"Dispose", (methodPointerType)&m10347, &t1920_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1920_MIs[] =
{
	&m10337_MI,
	&m10338_MI,
	&m10339_MI,
	&m10340_MI,
	&m10341_MI,
	&m10342_MI,
	&m10343_MI,
	&m10344_MI,
	&m10345_MI,
	&m10346_MI,
	&m10347_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m10338_MI;
extern MethodInfo m10341_MI;
extern MethodInfo m10347_MI;
extern MethodInfo m10342_MI;
extern MethodInfo m10339_MI;
extern MethodInfo m10340_MI;
static MethodInfo* t1920_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m10338_MI,
	&m10341_MI,
	&m10347_MI,
	&m10342_MI,
	&m10339_MI,
	&m10340_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t1919_TI;
extern TypeInfo t842_TI;
static TypeInfo* t1920_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t1919_TI,
	&t842_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t1919_TI;
extern TypeInfo t842_TI;
static Il2CppInterfaceOffsetPair t1920_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t1919_TI, 7},
	{ &t842_TI, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1920_0_0_0;
extern Il2CppType t1920_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t1920_TI;
extern Il2CppGenericClass t1920_GC;
extern TypeInfo t841_TI;
TypeInfo t1920_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t1920_MIs, t1920_PIs, t1920_FIs, NULL, &t122_TI, NULL, &t841_TI, &t1920_TI, t1920_ITIs, t1920_VT, &EmptyCustomAttributesCache, &t1920_TI, &t1920_0_0_0, &t1920_1_0_0, t1920_IOs, &t1920_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1920)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 11, 6, 4, 0, 0, 10, 4, 4};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1923_TI;



extern MethodInfo m10348_MI;
 void m10348 (t1923 * __this, t14 * p0, t77 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m10349_MI;
 int32_t m10349 (t1923 * __this, t14 * p0, int32_t p1, MethodInfo* method){
	typedef  int32_t (*FunctionPointerType) (t14 * __this, t14 * p0, int32_t p1, MethodInfo* method);
	if (__this->f9)
		m10349((t1923 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m10350_MI;
 t14 * m10350 (t1923 * __this, t14 * p0, int32_t p1, t76 * p2, t14 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(InitializedTypeInfo(&t35_TI), &p1);
	return (t14 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m10351_MI;
 int32_t m10351 (t1923 * __this, t14 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Int32>
extern Il2CppType t14_0_0_0;
extern Il2CppType t77_0_0_0;
static ParameterInfo t1923_m10348_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t77_0_0_0},
};
extern TypeInfo t1923_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t77 (MethodInfo* method, void* obj, void** args);
MethodInfo m10348_MI = 
{
	".ctor", (methodPointerType)&m10348, &t1923_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t77, t1923_m10348_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t157_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t1923_m10349_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1923_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10349_MI = 
{
	"Invoke", (methodPointerType)&m10349, &t1923_TI, &t35_0_0_0, RuntimeInvoker_t35_t14_t35, t1923_m10349_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t157_0_0_0;
extern Il2CppType t35_0_0_0;
extern Il2CppType t76_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t1923_m10350_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t76_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1923_TI;
extern Il2CppType t75_0_0_0;
extern void* RuntimeInvoker_t14_t14_t35_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10350_MI = 
{
	"BeginInvoke", (methodPointerType)&m10350, &t1923_TI, &t75_0_0_0, RuntimeInvoker_t14_t14_t35_t14_t14, t1923_m10350_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t75_0_0_0;
static ParameterInfo t1923_m10351_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t75_0_0_0},
};
extern TypeInfo t1923_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10351_MI = 
{
	"EndInvoke", (methodPointerType)&m10351, &t1923_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t1923_m10351_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1923_MIs[] =
{
	&m10348_MI,
	&m10349_MI,
	&m10350_MI,
	&m10351_MI,
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
extern MethodInfo m10349_MI;
extern MethodInfo m10350_MI;
extern MethodInfo m10351_MI;
static MethodInfo* t1923_VT[] =
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
	&m10349_MI,
	&m10350_MI,
	&m10351_MI,
};
extern TypeInfo t374_TI;
extern TypeInfo t375_TI;
static Il2CppInterfaceOffsetPair t1923_IOs[] = 
{
	{ &t374_TI, 4},
	{ &t375_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1923_0_0_0;
extern Il2CppType t1923_1_0_0;
extern TypeInfo t211_TI;
struct t1923;
extern TypeInfo t1923_TI;
extern Il2CppGenericClass t1923_GC;
extern TypeInfo t841_TI;
TypeInfo t1923_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t1923_MIs, NULL, NULL, NULL, &t211_TI, NULL, &t841_TI, &t1923_TI, NULL, t1923_VT, &EmptyCustomAttributesCache, &t1923_TI, &t1923_0_0_0, &t1923_1_0_0, t1923_IOs, &t1923_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1923), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1915_TI;



extern MethodInfo m10352_MI;
 void m10352 (t1915 * __this, t14 * p0, t77 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m10353_MI;
 t836  m10353 (t1915 * __this, t14 * p0, int32_t p1, MethodInfo* method){
	typedef  t836  (*FunctionPointerType) (t14 * __this, t14 * p0, int32_t p1, MethodInfo* method);
	if (__this->f9)
		m10353((t1915 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m10354_MI;
 t14 * m10354 (t1915 * __this, t14 * p0, int32_t p1, t76 * p2, t14 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(InitializedTypeInfo(&t35_TI), &p1);
	return (t14 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m10355_MI;
 t836  m10355 (t1915 * __this, t14 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t836 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Collections.DictionaryEntry>
extern Il2CppType t14_0_0_0;
extern Il2CppType t77_0_0_0;
static ParameterInfo t1915_m10352_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t77_0_0_0},
};
extern TypeInfo t1915_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t77 (MethodInfo* method, void* obj, void** args);
MethodInfo m10352_MI = 
{
	".ctor", (methodPointerType)&m10352, &t1915_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t77, t1915_m10352_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t157_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t1915_m10353_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1915_TI;
extern Il2CppType t836_0_0_0;
extern void* RuntimeInvoker_t836_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10353_MI = 
{
	"Invoke", (methodPointerType)&m10353, &t1915_TI, &t836_0_0_0, RuntimeInvoker_t836_t14_t35, t1915_m10353_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t157_0_0_0;
extern Il2CppType t35_0_0_0;
extern Il2CppType t76_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t1915_m10354_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t76_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1915_TI;
extern Il2CppType t75_0_0_0;
extern void* RuntimeInvoker_t14_t14_t35_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10354_MI = 
{
	"BeginInvoke", (methodPointerType)&m10354, &t1915_TI, &t75_0_0_0, RuntimeInvoker_t14_t14_t35_t14_t14, t1915_m10354_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t75_0_0_0;
static ParameterInfo t1915_m10355_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t75_0_0_0},
};
extern TypeInfo t1915_TI;
extern Il2CppType t836_0_0_0;
extern void* RuntimeInvoker_t836_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10355_MI = 
{
	"EndInvoke", (methodPointerType)&m10355, &t1915_TI, &t836_0_0_0, RuntimeInvoker_t836_t14, t1915_m10355_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1915_MIs[] =
{
	&m10352_MI,
	&m10353_MI,
	&m10354_MI,
	&m10355_MI,
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
extern MethodInfo m10353_MI;
extern MethodInfo m10354_MI;
extern MethodInfo m10355_MI;
static MethodInfo* t1915_VT[] =
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
	&m10353_MI,
	&m10354_MI,
	&m10355_MI,
};
extern TypeInfo t374_TI;
extern TypeInfo t375_TI;
static Il2CppInterfaceOffsetPair t1915_IOs[] = 
{
	{ &t374_TI, 4},
	{ &t375_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1915_0_0_0;
extern Il2CppType t1915_1_0_0;
extern TypeInfo t211_TI;
struct t1915;
extern TypeInfo t1915_TI;
extern Il2CppGenericClass t1915_GC;
extern TypeInfo t841_TI;
TypeInfo t1915_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t1915_MIs, NULL, NULL, NULL, &t211_TI, NULL, &t841_TI, &t1915_TI, NULL, t1915_VT, &EmptyCustomAttributesCache, &t1915_TI, &t1915_0_0_0, &t1915_1_0_0, t1915_IOs, &t1915_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1915), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1924_TI;



extern MethodInfo m10356_MI;
 void m10356 (t1924 * __this, t14 * p0, t77 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m10357_MI;
 t1918  m10357 (t1924 * __this, t14 * p0, int32_t p1, MethodInfo* method){
	typedef  t1918  (*FunctionPointerType) (t14 * __this, t14 * p0, int32_t p1, MethodInfo* method);
	if (__this->f9)
		m10357((t1924 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m10358_MI;
 t14 * m10358 (t1924 * __this, t14 * p0, int32_t p1, t76 * p2, t14 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(InitializedTypeInfo(&t35_TI), &p1);
	return (t14 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m10359_MI;
 t1918  m10359 (t1924 * __this, t14 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t1918 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>
extern Il2CppType t14_0_0_0;
extern Il2CppType t77_0_0_0;
static ParameterInfo t1924_m10356_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t77_0_0_0},
};
extern TypeInfo t1924_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t77 (MethodInfo* method, void* obj, void** args);
MethodInfo m10356_MI = 
{
	".ctor", (methodPointerType)&m10356, &t1924_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t77, t1924_m10356_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t157_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t1924_m10357_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1924_TI;
extern Il2CppType t1918_0_0_0;
extern void* RuntimeInvoker_t1918_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10357_MI = 
{
	"Invoke", (methodPointerType)&m10357, &t1924_TI, &t1918_0_0_0, RuntimeInvoker_t1918_t14_t35, t1924_m10357_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t157_0_0_0;
extern Il2CppType t35_0_0_0;
extern Il2CppType t76_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t1924_m10358_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t157_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t76_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1924_TI;
extern Il2CppType t75_0_0_0;
extern void* RuntimeInvoker_t14_t14_t35_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10358_MI = 
{
	"BeginInvoke", (methodPointerType)&m10358, &t1924_TI, &t75_0_0_0, RuntimeInvoker_t14_t14_t35_t14_t14, t1924_m10358_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t75_0_0_0;
static ParameterInfo t1924_m10359_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t75_0_0_0},
};
extern TypeInfo t1924_TI;
extern Il2CppType t1918_0_0_0;
extern void* RuntimeInvoker_t1918_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10359_MI = 
{
	"EndInvoke", (methodPointerType)&m10359, &t1924_TI, &t1918_0_0_0, RuntimeInvoker_t1918_t14, t1924_m10359_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1924_MIs[] =
{
	&m10356_MI,
	&m10357_MI,
	&m10358_MI,
	&m10359_MI,
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
extern MethodInfo m10357_MI;
extern MethodInfo m10358_MI;
extern MethodInfo m10359_MI;
static MethodInfo* t1924_VT[] =
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
	&m10357_MI,
	&m10358_MI,
	&m10359_MI,
};
extern TypeInfo t374_TI;
extern TypeInfo t375_TI;
static Il2CppInterfaceOffsetPair t1924_IOs[] = 
{
	{ &t374_TI, 4},
	{ &t375_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1924_0_0_0;
extern Il2CppType t1924_1_0_0;
extern TypeInfo t211_TI;
struct t1924;
extern TypeInfo t1924_TI;
extern Il2CppGenericClass t1924_GC;
extern TypeInfo t841_TI;
TypeInfo t1924_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t1924_MIs, NULL, NULL, NULL, &t211_TI, NULL, &t841_TI, &t1924_TI, NULL, t1924_VT, &EmptyCustomAttributesCache, &t1924_TI, &t1924_0_0_0, &t1924_1_0_0, t1924_IOs, &t1924_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1924), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1925_TI;

extern TypeInfo t1925_TI;
extern TypeInfo t1920_TI;
extern TypeInfo t842_TI;
extern TypeInfo t836_TI;
extern TypeInfo t1918_TI;
extern TypeInfo t157_TI;
extern TypeInfo t26_TI;
extern MethodInfo m7725_MI;
extern MethodInfo m10342_MI;
extern MethodInfo m10308_MI;
extern MethodInfo m10362_MI;
extern MethodInfo m73_MI;
extern MethodInfo m10305_MI;
extern MethodInfo m10341_MI;


extern MethodInfo m10360_MI;
 void m10360 (t1925 * __this, t366 * p0, MethodInfo* method){
	{
		m73(__this, &m73_MI);
		t1920  L_0 = m10305(p0, &m10305_MI);
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m10361_MI;
 bool m10361 (t1925 * __this, MethodInfo* method){
	{
		t1920 * L_0 = &(__this->f0);
		bool L_1 = m10341(L_0, &m10341_MI);
		return L_1;
	}
}
extern MethodInfo m10362_MI;
 t836  m10362 (t1925 * __this, MethodInfo* method){
	{
		t1920  L_0 = (__this->f0);
		t1920  L_1 = L_0;
		t14 * L_2 = Box(InitializedTypeInfo(&t1920_TI), &L_1);
		t836  L_3 = (t836 )InterfaceFuncInvoker0< t836  >::Invoke(&m7725_MI, L_2);
		return L_3;
	}
}
extern MethodInfo m10363_MI;
 t14 * m10363 (t1925 * __this, MethodInfo* method){
	t1918  V_0 = {0};
	{
		t1920 * L_0 = &(__this->f0);
		t1918  L_1 = m10342(L_0, &m10342_MI);
		V_0 = L_1;
		t14 * L_2 = m10308((&V_0), &m10308_MI);
		t14 * L_3 = L_2;
		return ((t14 *)L_3);
	}
}
extern MethodInfo m10364_MI;
 t14 * m10364 (t1925 * __this, MethodInfo* method){
	{
		t836  L_0 = (t836 )VirtFuncInvoker0< t836  >::Invoke(&m10362_MI, __this);
		t836  L_1 = L_0;
		t14 * L_2 = Box(InitializedTypeInfo(&t836_TI), &L_1);
		return L_2;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.UI.ICanvasElement,System.Int32>
extern Il2CppType t1920_0_0_1;
FieldInfo t1925_f0_FieldInfo = 
{
	"host_enumerator", &t1920_0_0_1, &t1925_TI, offsetof(t1925, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1925_FIs[] =
{
	&t1925_f0_FieldInfo,
	NULL
};
extern MethodInfo m10362_MI;
static PropertyInfo t1925____Entry_PropertyInfo = 
{
	&t1925_TI, "Entry", &m10362_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10363_MI;
static PropertyInfo t1925____Key_PropertyInfo = 
{
	&t1925_TI, "Key", &m10363_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10364_MI;
static PropertyInfo t1925____Current_PropertyInfo = 
{
	&t1925_TI, "Current", &m10364_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1925_PIs[] =
{
	&t1925____Entry_PropertyInfo,
	&t1925____Key_PropertyInfo,
	&t1925____Current_PropertyInfo,
	NULL
};
extern Il2CppType t366_0_0_0;
static ParameterInfo t1925_m10360_ParameterInfos[] = 
{
	{"host", 0, 134217728, &EmptyCustomAttributesCache, &t366_0_0_0},
};
extern TypeInfo t1925_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10360_MI = 
{
	".ctor", (methodPointerType)&m10360, &t1925_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1925_m10360_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1925_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10361_MI = 
{
	"MoveNext", (methodPointerType)&m10361, &t1925_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1925_TI;
extern Il2CppType t836_0_0_0;
extern void* RuntimeInvoker_t836 (MethodInfo* method, void* obj, void** args);
MethodInfo m10362_MI = 
{
	"get_Entry", (methodPointerType)&m10362, &t1925_TI, &t836_0_0_0, RuntimeInvoker_t836, NULL, &EmptyCustomAttributesCache, 2534, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1925_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10363_MI = 
{
	"get_Key", (methodPointerType)&m10363, &t1925_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1925_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10364_MI = 
{
	"get_Current", (methodPointerType)&m10364, &t1925_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1925_MIs[] =
{
	&m10360_MI,
	&m10361_MI,
	&m10362_MI,
	&m10363_MI,
	&m10364_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m10364_MI;
extern MethodInfo m10361_MI;
extern MethodInfo m10362_MI;
extern MethodInfo m10363_MI;
static MethodInfo* t1925_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m10364_MI,
	&m10361_MI,
	&m10362_MI,
	&m10363_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t842_TI;
static TypeInfo* t1925_ITIs[] = 
{
	&t36_TI,
	&t842_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t842_TI;
static Il2CppInterfaceOffsetPair t1925_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t842_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1925_0_0_0;
extern Il2CppType t1925_1_0_0;
extern TypeInfo t14_TI;
struct t1925;
extern TypeInfo t1925_TI;
extern Il2CppGenericClass t1925_GC;
extern TypeInfo t841_TI;
TypeInfo t1925_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ShimEnumerator", "", t1925_MIs, t1925_PIs, t1925_FIs, NULL, &t14_TI, NULL, &t841_TI, &t1925_TI, t1925_ITIs, t1925_VT, &EmptyCustomAttributesCache, &t1925_TI, &t1925_0_0_0, &t1925_1_0_0, t1925_IOs, &t1925_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1925), 0, -1, 0, 0, -1, 1056771, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 5, 3, 1, 0, 0, 8, 2, 2};
#include "t166.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t166_TI;
#include "t166MD.h"

#include "t160.h"
#include "t350.h"
#include "UnityEngine_ArrayTypes.h"
#include "t1930.h"
#include "t1932.h"
#include "t1929.h"
#include "t1972.h"
#include "t1934.h"
#include "t1973.h"
#include "t1974.h"
#include "t1976.h"
extern TypeInfo t166_TI;
extern TypeInfo t25_TI;
extern TypeInfo t160_TI;
extern TypeInfo t350_TI;
extern TypeInfo t338_TI;
extern TypeInfo t1928_TI;
extern TypeInfo t35_TI;
extern TypeInfo t834_TI;
extern TypeInfo t26_TI;
extern TypeInfo t1930_TI;
extern TypeInfo t1931_TI;
extern TypeInfo t1932_TI;
extern TypeInfo t2907_TI;
extern TypeInfo t836_TI;
extern TypeInfo t1929_TI;
extern TypeInfo t1972_TI;
extern TypeInfo t1934_TI;
extern TypeInfo t1973_TI;
extern TypeInfo t1242_TI;
extern TypeInfo t1974_TI;
extern TypeInfo t51_TI;
extern TypeInfo t1459_TI;
extern TypeInfo t1926_TI;
extern TypeInfo t1927_TI;
extern TypeInfo t319_TI;
extern TypeInfo t863_TI;
extern TypeInfo t1976_TI;
extern TypeInfo t5156_TI;
extern TypeInfo t31_TI;
extern TypeInfo t33_TI;
#include "t1930MD.h"
#include "t1932MD.h"
#include "t1929MD.h"
#include "t1972MD.h"
#include "t1934MD.h"
#include "t1973MD.h"
#include "t1974MD.h"
#include "t1976MD.h"
extern Il2CppType t1928_0_0_0;
extern Il2CppType t1931_0_0_0;
extern Il2CppType t160_0_0_0;
extern Il2CppType t350_0_0_0;
extern MethodInfo m10426_MI;
extern MethodInfo m10428_MI;
extern MethodInfo m10395_MI;
extern MethodInfo m2974_MI;
extern MethodInfo m23772_MI;
extern MethodInfo m23773_MI;
extern MethodInfo m10408_MI;
extern MethodInfo m10682_MI;
extern MethodInfo m73_MI;
extern MethodInfo m10397_MI;
extern MethodInfo m10499_MI;
extern MethodInfo m10501_MI;
extern MethodInfo m1560_MI;
extern MethodInfo m10430_MI;
extern MethodInfo m10406_MI;
extern MethodInfo m10421_MI;
extern MethodInfo m10401_MI;
extern MethodInfo m10432_MI;
extern MethodInfo m10716_MI;
extern MethodInfo m17765_MI;
extern MethodInfo m10403_MI;
extern MethodInfo m10720_MI;
extern MethodInfo m17767_MI;
extern MethodInfo m10701_MI;
extern MethodInfo m10724_MI;
extern MethodInfo m6493_MI;
extern MethodInfo m10733_MI;
extern MethodInfo m10399_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m1959_MI;
extern MethodInfo m10393_MI;
extern MethodInfo m10498_MI;
extern MethodInfo m17768_MI;
extern MethodInfo m4429_MI;
extern MethodInfo m3786_MI;
extern MethodInfo m3782_MI;
extern MethodInfo m10741_MI;
extern MethodInfo m23774_MI;
extern MethodInfo m5759_MI;
extern MethodInfo m5765_MI;
extern MethodInfo m5768_MI;
extern MethodInfo m1571_MI;
extern MethodInfo m5755_MI;
extern MethodInfo m3872_MI;
extern MethodInfo m1786_MI;
extern MethodInfo m6483_MI;
extern MethodInfo m3841_MI;
extern MethodInfo m1558_MI;
extern MethodInfo m23775_MI;
extern MethodInfo m4371_MI;
struct t166;
 void m17765 (t166 * __this, t2907* p0, int32_t p1, t1929 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17765_MI;
struct t166;
 void m17767 (t166 * __this, t24 * p0, int32_t p1, t1972 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17767_MI;
struct t166;
 void m17768 (t166 * __this, t1931* p0, int32_t p1, t1972 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17768_MI;


extern MethodInfo m10380_MI;
 void m10380 (t166 * __this, t1932  p0, MethodInfo* method){
	{
		t160 * L_0 = m10499((&p0), &m10499_MI);
		t350 * L_1 = m10501((&p0), &m10501_MI);
		VirtActionInvoker2< t160 *, t350 * >::Invoke(&m1560_MI, __this, L_0, L_1);
		return;
	}
}
extern MethodInfo m10381_MI;
 bool m10381 (t166 * __this, t1932  p0, MethodInfo* method){
	{
		bool L_0 = m10430(__this, p0, &m10430_MI);
		return L_0;
	}
}
extern MethodInfo m10384_MI;
 bool m10384 (t166 * __this, t1932  p0, MethodInfo* method){
	{
		bool L_0 = m10430(__this, p0, &m10430_MI);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return 0;
	}

IL_000b:
	{
		t160 * L_1 = m10499((&p0), &m10499_MI);
		bool L_2 = (bool)VirtFuncInvoker1< bool, t160 * >::Invoke(&m10421_MI, __this, L_1);
		return L_2;
	}
}
extern MethodInfo m10403_MI;
 t1932  m10403 (t14 * __this, t160 * p0, t350 * p1, MethodInfo* method){
	{
		t1932  L_0 = {0};
		m10498(&L_0, p0, p1, &m10498_MI);
		return L_0;
	}
}
extern MethodInfo m10430_MI;
 bool m10430 (t166 * __this, t1932  p0, MethodInfo* method){
	t350 * V_0 = {0};
	{
		t160 * L_0 = m10499((&p0), &m10499_MI);
		bool L_1 = (bool)VirtFuncInvoker2< bool, t160 *, t350 ** >::Invoke(&m1558_MI, __this, L_0, (&V_0));
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1976_TI));
		t1976 * L_2 = m10741(NULL, &m10741_MI);
		t350 * L_3 = m10501((&p0), &m10501_MI);
		bool L_4 = (bool)VirtFuncInvoker2< bool, t350 *, t350 * >::Invoke(&m23775_MI, L_2, L_3, V_0);
		return L_4;
	}
}
extern MethodInfo m10431_MI;
 t1934  m10431 (t166 * __this, MethodInfo* method){
	{
		t1934  L_0 = {0};
		m10701(&L_0, __this, &m10701_MI);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
extern Il2CppType t35_0_0_32849;
FieldInfo t166_f0_FieldInfo = 
{
	"INITIAL_SIZE", &t35_0_0_32849, &t166_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t28_0_0_32849;
FieldInfo t166_f1_FieldInfo = 
{
	"DEFAULT_LOAD_FACTOR", &t28_0_0_32849, &t166_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_32849;
FieldInfo t166_f2_FieldInfo = 
{
	"NO_SLOT", &t35_0_0_32849, &t166_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_32849;
FieldInfo t166_f3_FieldInfo = 
{
	"HASH_FLAG", &t35_0_0_32849, &t166_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t51_0_0_1;
FieldInfo t166_f4_FieldInfo = 
{
	"table", &t51_0_0_1, &t166_TI, offsetof(t166, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1459_0_0_1;
FieldInfo t166_f5_FieldInfo = 
{
	"linkSlots", &t1459_0_0_1, &t166_TI, offsetof(t166, f5), &EmptyCustomAttributesCache};
extern Il2CppType t1926_0_0_1;
FieldInfo t166_f6_FieldInfo = 
{
	"keySlots", &t1926_0_0_1, &t166_TI, offsetof(t166, f6), &EmptyCustomAttributesCache};
extern Il2CppType t1927_0_0_1;
FieldInfo t166_f7_FieldInfo = 
{
	"valueSlots", &t1927_0_0_1, &t166_TI, offsetof(t166, f7), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t166_f8_FieldInfo = 
{
	"touchedSlots", &t35_0_0_1, &t166_TI, offsetof(t166, f8), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t166_f9_FieldInfo = 
{
	"emptySlot", &t35_0_0_1, &t166_TI, offsetof(t166, f9), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t166_f10_FieldInfo = 
{
	"count", &t35_0_0_1, &t166_TI, offsetof(t166, f10), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t166_f11_FieldInfo = 
{
	"threshold", &t35_0_0_1, &t166_TI, offsetof(t166, f11), &EmptyCustomAttributesCache};
extern Il2CppType t1928_0_0_1;
FieldInfo t166_f12_FieldInfo = 
{
	"hcp", &t1928_0_0_1, &t166_TI, offsetof(t166, f12), &EmptyCustomAttributesCache};
extern Il2CppType t715_0_0_1;
FieldInfo t166_f13_FieldInfo = 
{
	"serialization_info", &t715_0_0_1, &t166_TI, offsetof(t166, f13), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t166_f14_FieldInfo = 
{
	"generation", &t35_0_0_1, &t166_TI, offsetof(t166, f14), &EmptyCustomAttributesCache};
extern Il2CppType t1929_0_0_17;
extern CustomAttributesCache t841__CustomAttributeCache_U3CU3Ef__am$cacheB;
FieldInfo t166_f15_FieldInfo = 
{
	"<>f__am$cacheB", &t1929_0_0_17, &t166_TI, offsetof(t166_SFs, f15), &t841__CustomAttributeCache_U3CU3Ef__am$cacheB};
static FieldInfo* t166_FIs[] =
{
	&t166_f0_FieldInfo,
	&t166_f1_FieldInfo,
	&t166_f2_FieldInfo,
	&t166_f3_FieldInfo,
	&t166_f4_FieldInfo,
	&t166_f5_FieldInfo,
	&t166_f6_FieldInfo,
	&t166_f7_FieldInfo,
	&t166_f8_FieldInfo,
	&t166_f9_FieldInfo,
	&t166_f10_FieldInfo,
	&t166_f11_FieldInfo,
	&t166_f12_FieldInfo,
	&t166_f13_FieldInfo,
	&t166_f14_FieldInfo,
	&t166_f15_FieldInfo,
	NULL
};
static const int32_t t166_f0_DefaultValueData = 10;
extern Il2CppType t35_0_0_0;
static Il2CppFieldDefaultValueEntry t166_f0_DefaultValue = 
{
	&t166_f0_FieldInfo, { (char*)&t166_f0_DefaultValueData, &t35_0_0_0 }};
static const float t166_f1_DefaultValueData = 0.9f;
extern Il2CppType t28_0_0_0;
static Il2CppFieldDefaultValueEntry t166_f1_DefaultValue = 
{
	&t166_f1_FieldInfo, { (char*)&t166_f1_DefaultValueData, &t28_0_0_0 }};
static const int32_t t166_f2_DefaultValueData = -1;
extern Il2CppType t35_0_0_0;
static Il2CppFieldDefaultValueEntry t166_f2_DefaultValue = 
{
	&t166_f2_FieldInfo, { (char*)&t166_f2_DefaultValueData, &t35_0_0_0 }};
static const int32_t t166_f3_DefaultValueData = -2147483648;
extern Il2CppType t35_0_0_0;
static Il2CppFieldDefaultValueEntry t166_f3_DefaultValue = 
{
	&t166_f3_FieldInfo, { (char*)&t166_f3_DefaultValueData, &t35_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t166_FDVs[] = 
{
	&t166_f0_DefaultValue,
	&t166_f1_DefaultValue,
	&t166_f2_DefaultValue,
	&t166_f3_DefaultValue,
	NULL
};
extern MethodInfo m10372_MI;
static PropertyInfo t166____System_Collections_IDictionary_Item_PropertyInfo = 
{
	&t166_TI, "System.Collections.IDictionary.Item", NULL, &m10372_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10374_MI;
static PropertyInfo t166____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t166_TI, "System.Collections.ICollection.IsSynchronized", &m10374_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10376_MI;
static PropertyInfo t166____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t166_TI, "System.Collections.ICollection.SyncRoot", &m10376_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10378_MI;
static PropertyInfo t166____System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnly_PropertyInfo = 
{
	&t166_TI, "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.IsReadOnly", &m10378_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10393_MI;
static PropertyInfo t166____Count_PropertyInfo = 
{
	&t166_TI, "Count", &m10393_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10395_MI;
static PropertyInfo t166____Item_PropertyInfo = 
{
	&t166_TI, "Item", NULL, &m10395_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10424_MI;
static PropertyInfo t166____Values_PropertyInfo = 
{
	&t166_TI, "Values", &m10424_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t166_PIs[] =
{
	&t166____System_Collections_IDictionary_Item_PropertyInfo,
	&t166____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t166____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t166____System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnly_PropertyInfo,
	&t166____Count_PropertyInfo,
	&t166____Item_PropertyInfo,
	&t166____Values_PropertyInfo,
	NULL
};
extern TypeInfo t166_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m1557_MI = 
{
	".ctor", (methodPointerType)&m10365_gshared, &t166_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1928_0_0_0;
static ParameterInfo t166_m10366_ParameterInfos[] = 
{
	{"comparer", 0, 134217728, &EmptyCustomAttributesCache, &t1928_0_0_0},
};
extern TypeInfo t166_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10366_MI = 
{
	".ctor", (methodPointerType)&m10367_gshared, &t166_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t166_m10366_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t166_m10368_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t166_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10368_MI = 
{
	".ctor", (methodPointerType)&m10369_gshared, &t166_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t166_m10368_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t715_0_0_0;
extern Il2CppType t716_0_0_0;
static ParameterInfo t166_m10370_ParameterInfos[] = 
{
	{"info", 0, 134217728, &EmptyCustomAttributesCache, &t715_0_0_0},
	{"context", 1, 134217728, &EmptyCustomAttributesCache, &t716_0_0_0},
};
extern TypeInfo t166_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t716 (MethodInfo* method, void* obj, void** args);
MethodInfo m10370_MI = 
{
	".ctor", (methodPointerType)&m10371_gshared, &t166_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t716, t166_m10370_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t166_m10372_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t166_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10372_MI = 
{
	"System.Collections.IDictionary.set_Item", (methodPointerType)&m10373_gshared, &t166_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t14, t166_m10372_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 19, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t166_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10374_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m10375_gshared, &t166_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t166_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10376_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m10377_gshared, &t166_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t166_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10378_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly", (methodPointerType)&m10379_gshared, &t166_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 11, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1932_0_0_0;
static ParameterInfo t166_m10380_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t1932_0_0_0},
};
extern TypeInfo t166_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t1932 (MethodInfo* method, void* obj, void** args);
MethodInfo m10380_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add", (methodPointerType)&m10380, &t166_TI, &t25_0_0_0, RuntimeInvoker_t25_t1932, t166_m10380_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1932_0_0_0;
static ParameterInfo t166_m10381_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t1932_0_0_0},
};
extern TypeInfo t166_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t1932 (MethodInfo* method, void* obj, void** args);
MethodInfo m10381_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains", (methodPointerType)&m10381, &t166_TI, &t26_0_0_0, RuntimeInvoker_t26_t1932, t166_m10381_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 14, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1931_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t166_m10382_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1931_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t166_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10382_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo", (methodPointerType)&m10383_gshared, &t166_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t166_m10382_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1932_0_0_0;
static ParameterInfo t166_m10384_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t1932_0_0_0},
};
extern TypeInfo t166_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t1932 (MethodInfo* method, void* obj, void** args);
MethodInfo m10384_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove", (methodPointerType)&m10384, &t166_TI, &t26_0_0_0, RuntimeInvoker_t26_t1932, t166_m10384_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t24_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t166_m10385_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t166_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10385_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m10386_gshared, &t166_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t166_m10385_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t166_TI;
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10387_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m10388_gshared, &t166_TI, &t36_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t166_TI;
extern Il2CppType t1933_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10389_MI = 
{
	"System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator", (methodPointerType)&m10390_gshared, &t166_TI, &t1933_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 481, 0, 17, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t166_TI;
extern Il2CppType t842_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10391_MI = 
{
	"System.Collections.IDictionary.GetEnumerator", (methodPointerType)&m10392_gshared, &t166_TI, &t842_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 481, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t166_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10393_MI = 
{
	"get_Count", (methodPointerType)&m10394_gshared, &t166_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 2534, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t160_0_0_0;
extern Il2CppType t350_0_0_0;
static ParameterInfo t166_m10395_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t160_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t350_0_0_0},
};
extern TypeInfo t166_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10395_MI = 
{
	"set_Item", (methodPointerType)&m10396_gshared, &t166_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t14, t166_m10395_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 22, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1928_0_0_0;
static ParameterInfo t166_m10397_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"hcp", 1, 134217728, &EmptyCustomAttributesCache, &t1928_0_0_0},
};
extern TypeInfo t166_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10397_MI = 
{
	"Init", (methodPointerType)&m10398_gshared, &t166_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t166_m10397_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t166_m10399_ParameterInfos[] = 
{
	{"size", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t166_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10399_MI = 
{
	"InitArrays", (methodPointerType)&m10400_gshared, &t166_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t166_m10399_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t24_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t166_m10401_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t166_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10401_MI = 
{
	"CopyToCheck", (methodPointerType)&m10402_gshared, &t166_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t166_m10401_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t166_TI;
extern Il2CppType t25_0_0_0;
extern Il2CppGenericContainer m23776_IGC;
extern TypeInfo m23776_gp_TRet_0_TI;
Il2CppGenericParamFull m23776_gp_TRet_0_TI_GenericParamFull = { { &m23776_IGC, 0}, {NULL, "TRet", 0, 0, NULL} };
extern TypeInfo m23776_gp_TElem_1_TI;
Il2CppGenericParamFull m23776_gp_TElem_1_TI_GenericParamFull = { { &m23776_IGC, 1}, {NULL, "TElem", 0, 0, NULL} };
static Il2CppGenericParamFull* m23776_IGPA[2] = 
{
	&m23776_gp_TRet_0_TI_GenericParamFull,
	&m23776_gp_TElem_1_TI_GenericParamFull,
};
extern MethodInfo m23776_MI;
Il2CppGenericContainer m23776_IGC = { { NULL, NULL }, NULL, &m23776_MI, 2, 1, m23776_IGPA };
MethodInfo m23776_MI = 
{
	"Do_CopyTo", NULL, &t166_TI, &t25_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, true, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t160_0_0_0;
extern Il2CppType t350_0_0_0;
static ParameterInfo t166_m10403_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t160_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t350_0_0_0},
};
extern TypeInfo t166_TI;
extern Il2CppType t1932_0_0_0;
extern void* RuntimeInvoker_t1932_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10403_MI = 
{
	"make_pair", (methodPointerType)&m10403, &t166_TI, &t1932_0_0_0, RuntimeInvoker_t1932_t14_t14, t166_m10403_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t160_0_0_0;
extern Il2CppType t350_0_0_0;
static ParameterInfo t166_m10404_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t160_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t350_0_0_0},
};
extern TypeInfo t166_TI;
extern Il2CppType t350_0_0_0;
extern void* RuntimeInvoker_t14_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10404_MI = 
{
	"pick_value", (methodPointerType)&m10405_gshared, &t166_TI, &t350_0_0_0, RuntimeInvoker_t14_t14_t14, t166_m10404_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1931_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t166_m10406_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1931_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t166_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10406_MI = 
{
	"CopyTo", (methodPointerType)&m10407_gshared, &t166_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t166_m10406_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t166_TI;
extern Il2CppType t25_0_0_0;
extern Il2CppGenericContainer m23777_IGC;
extern TypeInfo m23777_gp_TRet_0_TI;
Il2CppGenericParamFull m23777_gp_TRet_0_TI_GenericParamFull = { { &m23777_IGC, 0}, {NULL, "TRet", 0, 0, NULL} };
static Il2CppGenericParamFull* m23777_IGPA[1] = 
{
	&m23777_gp_TRet_0_TI_GenericParamFull,
};
extern MethodInfo m23777_MI;
Il2CppGenericContainer m23777_IGC = { { NULL, NULL }, NULL, &m23777_MI, 1, 1, m23777_IGPA };
MethodInfo m23777_MI = 
{
	"Do_ICollectionCopyTo", NULL, &t166_TI, &t25_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, true, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t166_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10408_MI = 
{
	"Resize", (methodPointerType)&m10409_gshared, &t166_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t160_0_0_0;
extern Il2CppType t350_0_0_0;
static ParameterInfo t166_m1560_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t160_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t350_0_0_0},
};
extern TypeInfo t166_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m1560_MI = 
{
	"Add", (methodPointerType)&m10410_gshared, &t166_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t14, t166_m1560_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 23, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t166_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10411_MI = 
{
	"Clear", (methodPointerType)&m10412_gshared, &t166_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 13, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t160_0_0_0;
static ParameterInfo t166_m10413_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t160_0_0_0},
};
extern TypeInfo t166_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10413_MI = 
{
	"ContainsKey", (methodPointerType)&m10414_gshared, &t166_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t166_m10413_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t350_0_0_0;
static ParameterInfo t166_m10415_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t350_0_0_0},
};
extern TypeInfo t166_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10415_MI = 
{
	"ContainsValue", (methodPointerType)&m10416_gshared, &t166_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t166_m10415_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t715_0_0_0;
extern Il2CppType t716_0_0_0;
static ParameterInfo t166_m10417_ParameterInfos[] = 
{
	{"info", 0, 134217728, &EmptyCustomAttributesCache, &t715_0_0_0},
	{"context", 1, 134217728, &EmptyCustomAttributesCache, &t716_0_0_0},
};
extern TypeInfo t166_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t716 (MethodInfo* method, void* obj, void** args);
MethodInfo m10417_MI = 
{
	"GetObjectData", (methodPointerType)&m10418_gshared, &t166_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t716, t166_m10417_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t166_m10419_ParameterInfos[] = 
{
	{"sender", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t166_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10419_MI = 
{
	"OnDeserialization", (methodPointerType)&m10420_gshared, &t166_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t166_m10419_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t160_0_0_0;
static ParameterInfo t166_m10421_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t160_0_0_0},
};
extern TypeInfo t166_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10421_MI = 
{
	"Remove", (methodPointerType)&m10422_gshared, &t166_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t166_m10421_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t160_0_0_0;
extern Il2CppType t350_1_0_0;
static ParameterInfo t166_m1558_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t160_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t350_1_0_0},
};
extern TypeInfo t166_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14_t5157 (MethodInfo* method, void* obj, void** args);
MethodInfo m1558_MI = 
{
	"TryGetValue", (methodPointerType)&m10423_gshared, &t166_TI, &t26_0_0_0, RuntimeInvoker_t26_t14_t5157, t166_m1558_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t166_TI;
extern Il2CppType t1930_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10424_MI = 
{
	"get_Values", (methodPointerType)&m10425_gshared, &t166_TI, &t1930_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t166_m10426_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t166_TI;
extern Il2CppType t160_0_0_0;
extern void* RuntimeInvoker_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10426_MI = 
{
	"ToTKey", (methodPointerType)&m10427_gshared, &t166_TI, &t160_0_0_0, RuntimeInvoker_t14_t14, t166_m10426_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t166_m10428_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t166_TI;
extern Il2CppType t350_0_0_0;
extern void* RuntimeInvoker_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10428_MI = 
{
	"ToTValue", (methodPointerType)&m10429_gshared, &t166_TI, &t350_0_0_0, RuntimeInvoker_t14_t14, t166_m10428_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1932_0_0_0;
static ParameterInfo t166_m10430_ParameterInfos[] = 
{
	{"pair", 0, 134217728, &EmptyCustomAttributesCache, &t1932_0_0_0},
};
extern TypeInfo t166_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t1932 (MethodInfo* method, void* obj, void** args);
MethodInfo m10430_MI = 
{
	"ContainsKeyValuePair", (methodPointerType)&m10430, &t166_TI, &t26_0_0_0, RuntimeInvoker_t26_t1932, t166_m10430_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t166_TI;
extern Il2CppType t1934_0_0_0;
extern void* RuntimeInvoker_t1934 (MethodInfo* method, void* obj, void** args);
MethodInfo m10431_MI = 
{
	"GetEnumerator", (methodPointerType)&m10431, &t166_TI, &t1934_0_0_0, RuntimeInvoker_t1934, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t160_0_0_0;
extern Il2CppType t350_0_0_0;
static ParameterInfo t166_m10432_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t160_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t350_0_0_0},
};
extern TypeInfo t166_TI;
extern Il2CppType t836_0_0_0;
extern void* RuntimeInvoker_t836_t14_t14 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t841__CustomAttributeCache_m7579;
MethodInfo m10432_MI = 
{
	"<CopyTo>m__0", (methodPointerType)&m10433_gshared, &t166_TI, &t836_0_0_0, RuntimeInvoker_t836_t14_t14, t166_m10432_ParameterInfos, &t841__CustomAttributeCache_m7579, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t166_MIs[] =
{
	&m1557_MI,
	&m10366_MI,
	&m10368_MI,
	&m10370_MI,
	&m10372_MI,
	&m10374_MI,
	&m10376_MI,
	&m10378_MI,
	&m10380_MI,
	&m10381_MI,
	&m10382_MI,
	&m10384_MI,
	&m10385_MI,
	&m10387_MI,
	&m10389_MI,
	&m10391_MI,
	&m10393_MI,
	&m10395_MI,
	&m10397_MI,
	&m10399_MI,
	&m10401_MI,
	&m23776_MI,
	&m10403_MI,
	&m10404_MI,
	&m10406_MI,
	&m23777_MI,
	&m10408_MI,
	&m1560_MI,
	&m10411_MI,
	&m10413_MI,
	&m10415_MI,
	&m10417_MI,
	&m10419_MI,
	&m10421_MI,
	&m1558_MI,
	&m10424_MI,
	&m10426_MI,
	&m10428_MI,
	&m10430_MI,
	&m10431_MI,
	&m10432_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m10387_MI;
extern MethodInfo m10417_MI;
extern MethodInfo m10393_MI;
extern MethodInfo m10374_MI;
extern MethodInfo m10376_MI;
extern MethodInfo m10385_MI;
extern MethodInfo m10393_MI;
extern MethodInfo m10378_MI;
extern MethodInfo m10380_MI;
extern MethodInfo m10411_MI;
extern MethodInfo m10381_MI;
extern MethodInfo m10382_MI;
extern MethodInfo m10384_MI;
extern MethodInfo m10389_MI;
extern MethodInfo m10421_MI;
extern MethodInfo m10372_MI;
extern MethodInfo m10391_MI;
extern MethodInfo m10419_MI;
extern MethodInfo m10395_MI;
extern MethodInfo m1560_MI;
extern MethodInfo m10413_MI;
extern MethodInfo m10417_MI;
extern MethodInfo m10419_MI;
extern MethodInfo m1558_MI;
static MethodInfo* t166_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m10387_MI,
	&m10417_MI,
	&m10393_MI,
	&m10374_MI,
	&m10376_MI,
	&m10385_MI,
	&m10393_MI,
	&m10378_MI,
	&m10380_MI,
	&m10411_MI,
	&m10381_MI,
	&m10382_MI,
	&m10384_MI,
	&m10389_MI,
	&m10421_MI,
	&m10372_MI,
	&m10391_MI,
	&m10419_MI,
	&m10395_MI,
	&m1560_MI,
	&m10413_MI,
	&m10417_MI,
	&m10419_MI,
	&m1558_MI,
};
extern TypeInfo t600_TI;
extern TypeInfo t375_TI;
extern TypeInfo t651_TI;
extern TypeInfo t4008_TI;
extern TypeInfo t4010_TI;
extern TypeInfo t5158_TI;
extern TypeInfo t739_TI;
extern TypeInfo t1495_TI;
static TypeInfo* t166_ITIs[] = 
{
	&t600_TI,
	&t375_TI,
	&t651_TI,
	&t4008_TI,
	&t4010_TI,
	&t5158_TI,
	&t739_TI,
	&t1495_TI,
};
extern TypeInfo t600_TI;
extern TypeInfo t375_TI;
extern TypeInfo t651_TI;
extern TypeInfo t4008_TI;
extern TypeInfo t4010_TI;
extern TypeInfo t5158_TI;
extern TypeInfo t739_TI;
extern TypeInfo t1495_TI;
static Il2CppInterfaceOffsetPair t166_IOs[] = 
{
	{ &t600_TI, 4},
	{ &t375_TI, 5},
	{ &t651_TI, 6},
	{ &t4008_TI, 10},
	{ &t4010_TI, 17},
	{ &t5158_TI, 18},
	{ &t739_TI, 19},
	{ &t1495_TI, 21},
};
extern MethodInfo m10397_MI;
extern MethodInfo m10426_MI;
extern MethodInfo m10428_MI;
extern MethodInfo m10395_MI;
extern MethodInfo m10499_MI;
extern MethodInfo m10501_MI;
extern MethodInfo m1560_MI;
extern MethodInfo m10430_MI;
extern MethodInfo m10406_MI;
extern MethodInfo m10421_MI;
extern TypeInfo t1931_TI;
extern MethodInfo m10401_MI;
extern TypeInfo t166_TI;
extern MethodInfo m10432_MI;
extern TypeInfo t1929_TI;
extern MethodInfo m10716_MI;
extern MethodInfo m17765_MI;
extern MethodInfo m10403_MI;
extern TypeInfo t1972_TI;
extern MethodInfo m10720_MI;
extern MethodInfo m17767_MI;
extern TypeInfo t1934_TI;
extern MethodInfo m10701_MI;
extern TypeInfo t1973_TI;
extern MethodInfo m10724_MI;
extern TypeInfo t160_TI;
extern MethodInfo m23772_MI;
extern MethodInfo m23773_MI;
extern MethodInfo m10408_MI;
extern MethodInfo m10733_MI;
extern MethodInfo m10399_MI;
extern TypeInfo t1926_TI;
extern TypeInfo t1927_TI;
extern MethodInfo m10393_MI;
extern TypeInfo t1932_TI;
extern MethodInfo m10498_MI;
extern MethodInfo m17768_MI;
extern MethodInfo m10741_MI;
extern MethodInfo m23774_MI;
extern TypeInfo t1931_TI;
extern Il2CppType t1928_0_0_0;
extern TypeInfo t1928_TI;
extern Il2CppType t1931_0_0_0;
extern TypeInfo t1930_TI;
extern MethodInfo m10682_MI;
extern Il2CppType t160_0_0_0;
extern Il2CppType t350_0_0_0;
extern TypeInfo t350_TI;
extern MethodInfo m1558_MI;
extern MethodInfo m23775_MI;
static void* t166_RGCTXData[50] = 
{
	&m10397_MI,
	&m10426_MI,
	&m10428_MI,
	&m10395_MI,
	&m10499_MI,
	&m10501_MI,
	&m1560_MI,
	&m10430_MI,
	&m10406_MI,
	&m10421_MI,
	&t1931_TI,
	&m10401_MI,
	&t166_TI,
	&m10432_MI,
	&t1929_TI,
	&m10716_MI,
	&m17765_MI,
	&m10403_MI,
	&t1972_TI,
	&m10720_MI,
	&m17767_MI,
	&t1934_TI,
	&m10701_MI,
	&t1973_TI,
	&m10724_MI,
	&t160_TI,
	&m23772_MI,
	&m23773_MI,
	&m10408_MI,
	&m10733_MI,
	&m10399_MI,
	&t1926_TI,
	&t1927_TI,
	&m10393_MI,
	&t1932_TI,
	&m10498_MI,
	&m17768_MI,
	&m10741_MI,
	&m23774_MI,
	&t1931_TI,
	(void*)&t1928_0_0_0,
	&t1928_TI,
	(void*)&t1931_0_0_0,
	&t1930_TI,
	&m10682_MI,
	(void*)&t160_0_0_0,
	(void*)&t350_0_0_0,
	&t350_TI,
	&m1558_MI,
	&m23775_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t166_0_0_0;
extern Il2CppType t166_1_0_0;
extern TypeInfo t14_TI;
struct t166;
extern TypeInfo t166_TI;
extern Il2CppGenericClass t166_GC;
extern CustomAttributesCache t841__CustomAttributeCache;
extern CustomAttributesCache t841__CustomAttributeCache_U3CU3Ef__am$cacheB;
extern CustomAttributesCache t841__CustomAttributeCache_m7579;
TypeInfo t166_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Dictionary`2", "System.Collections.Generic", t166_MIs, t166_PIs, t166_FIs, NULL, &t14_TI, NULL, NULL, &t166_TI, t166_ITIs, t166_VT, &t841__CustomAttributeCache, &t166_TI, &t166_0_0_0, &t166_1_0_0, t166_IOs, &t166_GC, NULL, t166_FDVs, NULL, t166_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t166), 0, -1, sizeof(t166_SFs), 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 41, 7, 16, 0, 0, 28, 8, 8};
#include "t1935.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1935_TI;
#include "t1935MD.h"

#include "t1938.h"
#include "t1939.h"
#include "t1937.h"
#include "t1945.h"
#include "t1941.h"
#include "t1946.h"
extern TypeInfo t1935_TI;
extern TypeInfo t25_TI;
extern TypeInfo t14_TI;
extern TypeInfo t338_TI;
extern TypeInfo t1890_TI;
extern TypeInfo t35_TI;
extern TypeInfo t834_TI;
extern TypeInfo t26_TI;
extern TypeInfo t1938_TI;
extern TypeInfo t1936_TI;
extern TypeInfo t1939_TI;
extern TypeInfo t2907_TI;
extern TypeInfo t836_TI;
extern TypeInfo t1937_TI;
extern TypeInfo t1945_TI;
extern TypeInfo t1941_TI;
extern TypeInfo t1946_TI;
extern TypeInfo t1242_TI;
extern TypeInfo t1494_TI;
extern TypeInfo t51_TI;
extern TypeInfo t1459_TI;
extern TypeInfo t40_TI;
extern TypeInfo t319_TI;
extern TypeInfo t863_TI;
extern TypeInfo t31_TI;
extern TypeInfo t33_TI;
#include "t1938MD.h"
#include "t1939MD.h"
#include "t1937MD.h"
#include "t1945MD.h"
#include "t1941MD.h"
#include "t1946MD.h"
extern Il2CppType t1890_0_0_0;
extern Il2CppType t1936_0_0_0;
extern Il2CppType t14_0_0_0;
extern MethodInfo m10427_MI;
extern MethodInfo m10429_MI;
extern MethodInfo m10396_MI;
extern MethodInfo m2974_MI;
extern MethodInfo m22741_MI;
extern MethodInfo m22740_MI;
extern MethodInfo m10409_MI;
extern MethodInfo m10451_MI;
extern MethodInfo m73_MI;
extern MethodInfo m10398_MI;
extern MethodInfo m10441_MI;
extern MethodInfo m10443_MI;
extern MethodInfo m10410_MI;
extern MethodInfo m10438_MI;
extern MethodInfo m10407_MI;
extern MethodInfo m10422_MI;
extern MethodInfo m10402_MI;
extern MethodInfo m10433_MI;
extern MethodInfo m10485_MI;
extern MethodInfo m17655_MI;
extern MethodInfo m10437_MI;
extern MethodInfo m10489_MI;
extern MethodInfo m17657_MI;
extern MethodInfo m10470_MI;
extern MethodInfo m10493_MI;
extern MethodInfo m6493_MI;
extern MethodInfo m8256_MI;
extern MethodInfo m10400_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m1959_MI;
extern MethodInfo m10394_MI;
extern MethodInfo m10440_MI;
extern MethodInfo m17658_MI;
extern MethodInfo m4429_MI;
extern MethodInfo m3786_MI;
extern MethodInfo m3782_MI;
extern MethodInfo m5759_MI;
extern MethodInfo m5765_MI;
extern MethodInfo m5768_MI;
extern MethodInfo m1571_MI;
extern MethodInfo m5755_MI;
extern MethodInfo m3872_MI;
extern MethodInfo m1786_MI;
extern MethodInfo m6483_MI;
extern MethodInfo m3841_MI;
extern MethodInfo m10423_MI;
extern MethodInfo m16652_MI;
extern MethodInfo m4371_MI;
struct t1935;
 void m17655 (t1935 * __this, t2907* p0, int32_t p1, t1937 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17655_MI;
struct t1935;
 void m17657 (t1935 * __this, t24 * p0, int32_t p1, t1945 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17657_MI;
struct t1935;
 void m17658 (t1935 * __this, t1936* p0, int32_t p1, t1945 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17658_MI;


extern MethodInfo m10365_MI;
 void m10365_gshared (t1935 * __this, MethodInfo* method)
{
	{
		m73(__this, &m73_MI);
		(( void (*) (t1935 * __this, int32_t p0, t14* p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0)->method)(__this, ((int32_t)10), (t14*)NULL, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0));
		return;
	}
}
extern MethodInfo m10367_MI;
 void m10367_gshared (t1935 * __this, t14* p0, MethodInfo* method)
{
	{
		m73(__this, &m73_MI);
		(( void (*) (t1935 * __this, int32_t p0, t14* p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0)->method)(__this, ((int32_t)10), p0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0));
		return;
	}
}
extern MethodInfo m10369_MI;
 void m10369_gshared (t1935 * __this, int32_t p0, MethodInfo* method)
{
	{
		m73(__this, &m73_MI);
		(( void (*) (t1935 * __this, int32_t p0, t14* p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0)->method)(__this, p0, (t14*)NULL, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0));
		return;
	}
}
extern MethodInfo m10371_MI;
 void m10371_gshared (t1935 * __this, t715 * p0, t716  p1, MethodInfo* method)
{
	{
		m73(__this, &m73_MI);
		__this->f13 = p0;
		return;
	}
}
extern MethodInfo m10373_MI;
 void m10373_gshared (t1935 * __this, t14 * p0, t14 * p1, MethodInfo* method)
{
	{
		t14 * L_0 = (( t14 * (*) (t1935 * __this, t14 * p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1)->method)(__this, p0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1));
		t14 * L_1 = (( t14 * (*) (t1935 * __this, t14 * p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2)->method)(__this, p1, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2));
		VirtActionInvoker2< t14 *, t14 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 3), __this, L_0, L_1);
		return;
	}
}
extern MethodInfo m10375_MI;
 bool m10375_gshared (t1935 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m10377_MI;
 t14 * m10377_gshared (t1935 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
extern MethodInfo m10379_MI;
 bool m10379_gshared (t1935 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m10434_MI;
 void m10434 (t1935 * __this, t1939  p0, MethodInfo* method){
	{
		t14 * L_0 = m10441((&p0), &m10441_MI);
		t14 * L_1 = m10443((&p0), &m10443_MI);
		VirtActionInvoker2< t14 *, t14 * >::Invoke(&m10410_MI, __this, L_0, L_1);
		return;
	}
}
extern MethodInfo m10435_MI;
 bool m10435 (t1935 * __this, t1939  p0, MethodInfo* method){
	{
		bool L_0 = m10438(__this, p0, &m10438_MI);
		return L_0;
	}
}
extern MethodInfo m10383_MI;
 void m10383_gshared (t1935 * __this, t1936* p0, int32_t p1, MethodInfo* method)
{
	{
		(( void (*) (t1935 * __this, t1936* p0, int32_t p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8)->method)(__this, p0, p1, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8));
		return;
	}
}
extern MethodInfo m10436_MI;
 bool m10436 (t1935 * __this, t1939  p0, MethodInfo* method){
	{
		bool L_0 = m10438(__this, p0, &m10438_MI);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return 0;
	}

IL_000b:
	{
		t14 * L_1 = m10441((&p0), &m10441_MI);
		bool L_2 = (bool)VirtFuncInvoker1< bool, t14 * >::Invoke(&m10422_MI, __this, L_1);
		return L_2;
	}
}
extern MethodInfo m10386_MI;
 void m10386_gshared (t1935 * __this, t24 * p0, int32_t p1, MethodInfo* method)
{
	t1936* V_0 = {0};
	t2907* V_1 = {0};
	int32_t G_B5_0 = 0;
	t2907* G_B5_1 = {0};
	t1935 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	t2907* G_B4_1 = {0};
	t1935 * G_B4_2 = {0};
	{
		V_0 = ((t1936*)IsInst(p0, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 10)));
		if (!V_0)
		{
			goto IL_0013;
		}
	}
	{
		(( void (*) (t1935 * __this, t1936* p0, int32_t p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8)->method)(__this, V_0, p1, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8));
		return;
	}

IL_0013:
	{
		(( void (*) (t1935 * __this, t24 * p0, int32_t p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 11)->method)(__this, p0, p1, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 11));
		V_1 = ((t2907*)IsInst(p0, InitializedTypeInfo(&t2907_TI)));
		if (!V_1)
		{
			goto IL_004b;
		}
	}
	{
		G_B4_0 = p1;
		G_B4_1 = V_1;
		G_B4_2 = ((t1935 *)(__this));
		if ((((t1935_SFs*)IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 12)->static_fields)->f15))
		{
			G_B5_0 = p1;
			G_B5_1 = V_1;
			G_B5_2 = ((t1935 *)(__this));
			goto IL_0040;
		}
	}
	{
		t77 L_0 = { IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 13) };
		t1937 * L_1 = (t1937 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 14));
		(( void (*) (t1937 * __this, t14 * p0, t77 p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 15)->method)(L_1, NULL, L_0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 15));
		((t1935_SFs*)IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 12)->static_fields)->f15 = L_1;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((t1935 *)(G_B4_2));
	}

IL_0040:
	{
		(( void (*) (t1935 * __this, t2907* p0, int32_t p1, t1937 * p2, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 16)->method)(G_B5_2, G_B5_1, G_B5_0, (((t1935_SFs*)IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 12)->static_fields)->f15), IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 16));
		return;
	}

IL_004b:
	{
		t77 L_2 = { IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 17) };
		t1945 * L_3 = (t1945 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 18));
		(( void (*) (t1945 * __this, t14 * p0, t77 p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 19)->method)(L_3, NULL, L_2, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 19));
		(( void (*) (t1935 * __this, t24 * p0, int32_t p1, t1945 * p2, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 20)->method)(__this, p0, p1, L_3, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 20));
		return;
	}
}
extern MethodInfo m10388_MI;
 t14 * m10388_gshared (t1935 * __this, MethodInfo* method)
{
	{
		t1941  L_0 = {0};
		(( void (*) (t1941 * __this, t1935 * p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 22)->method)(&L_0, __this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 22));
		t1941  L_1 = L_0;
		t14 * L_2 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 21), &L_1);
		return (t14 *)L_2;
	}
}
extern MethodInfo m10390_MI;
 t14* m10390_gshared (t1935 * __this, MethodInfo* method)
{
	{
		t1941  L_0 = {0};
		(( void (*) (t1941 * __this, t1935 * p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 22)->method)(&L_0, __this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 22));
		t1941  L_1 = L_0;
		t14 * L_2 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 21), &L_1);
		return (t14*)L_2;
	}
}
extern MethodInfo m10392_MI;
 t14 * m10392_gshared (t1935 * __this, MethodInfo* method)
{
	{
		t1946 * L_0 = (t1946 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 23));
		(( void (*) (t1946 * __this, t1935 * p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 24)->method)(L_0, __this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 24));
		return L_0;
	}
}
extern MethodInfo m10394_MI;
 int32_t m10394_gshared (t1935 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f10);
		return L_0;
	}
}
extern MethodInfo m10396_MI;
 void m10396_gshared (t1935 * __this, t14 * p0, t14 * p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		t14 * L_0 = p0;
		if (((t14 *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t338 * L_1 = (t338 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t338_TI));
		m2974(L_1, (t33*) &_stringLiteral536, &m2974_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		t14* L_2 = (__this->f12);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t14 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 26), L_2, p0);
		V_0 = ((int32_t)(L_3|((int32_t)-2147483648)));
		t51* L_4 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t24 *)L_4)->max_length)))));
		t51* L_5 = (__this->f4);
		V_2 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_5, V_1))-1));
		V_3 = (-1);
		if ((((int32_t)V_2) == ((int32_t)(-1))))
		{
			goto IL_0090;
		}
	}

IL_0048:
	{
		t1459* L_6 = (__this->f5);
		int32_t L_7 = (((t834 *)(t834 *)SZArrayLdElema(L_6, V_2))->f0);
		if ((((uint32_t)L_7) != ((uint32_t)V_0)))
		{
			goto IL_0078;
		}
	}
	{
		t14* L_8 = (__this->f12);
		t40* L_9 = (__this->f6);
		bool L_10 = (bool)InterfaceFuncInvoker2< bool, t14 *, t14 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 27), L_8, (*(t14 **)(t14 **)SZArrayLdElema(L_9, V_2)), p0);
		if (!L_10)
		{
			goto IL_0078;
		}
	}
	{
		goto IL_0090;
	}

IL_0078:
	{
		V_3 = V_2;
		t1459* L_11 = (__this->f5);
		int32_t L_12 = (((t834 *)(t834 *)SZArrayLdElema(L_11, V_2))->f1);
		V_2 = L_12;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0048;
		}
	}

IL_0090:
	{
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_13 = (__this->f10);
		int32_t L_14 = ((int32_t)(L_13+1));
		V_4 = L_14;
		__this->f10 = L_14;
		int32_t L_15 = (__this->f11);
		if ((((int32_t)V_4) <= ((int32_t)L_15)))
		{
			goto IL_00c9;
		}
	}
	{
		(( void (*) (t1935 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 28)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 28));
		t51* L_16 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t24 *)L_16)->max_length)))));
	}

IL_00c9:
	{
		int32_t L_17 = (__this->f9);
		V_2 = L_17;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_18 = (__this->f8);
		int32_t L_19 = L_18;
		V_4 = L_19;
		__this->f8 = ((int32_t)(L_19+1));
		V_2 = V_4;
		goto IL_0101;
	}

IL_00ea:
	{
		t1459* L_20 = (__this->f5);
		int32_t L_21 = (((t834 *)(t834 *)SZArrayLdElema(L_20, V_2))->f1);
		__this->f9 = L_21;
	}

IL_0101:
	{
		t1459* L_22 = (__this->f5);
		t51* L_23 = (__this->f4);
		((t834 *)(t834 *)SZArrayLdElema(L_22, V_2))->f1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_23, V_1))-1));
		t51* L_24 = (__this->f4);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_24, V_1)) = (int32_t)((int32_t)(V_2+1));
		t1459* L_25 = (__this->f5);
		((t834 *)(t834 *)SZArrayLdElema(L_25, V_2))->f0 = V_0;
		t40* L_26 = (__this->f6);
		*((t14 **)(t14 **)SZArrayLdElema(L_26, V_2)) = (t14 *)p0;
		goto IL_0194;
	}

IL_0148:
	{
		if ((((int32_t)V_3) == ((int32_t)(-1))))
		{
			goto IL_0194;
		}
	}
	{
		t1459* L_27 = (__this->f5);
		t1459* L_28 = (__this->f5);
		int32_t L_29 = (((t834 *)(t834 *)SZArrayLdElema(L_28, V_2))->f1);
		((t834 *)(t834 *)SZArrayLdElema(L_27, V_3))->f1 = L_29;
		t1459* L_30 = (__this->f5);
		t51* L_31 = (__this->f4);
		((t834 *)(t834 *)SZArrayLdElema(L_30, V_2))->f1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_31, V_1))-1));
		t51* L_32 = (__this->f4);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_32, V_1)) = (int32_t)((int32_t)(V_2+1));
	}

IL_0194:
	{
		t40* L_33 = (__this->f7);
		*((t14 **)(t14 **)SZArrayLdElema(L_33, V_2)) = (t14 *)p1;
		int32_t L_34 = (__this->f14);
		__this->f14 = ((int32_t)(L_34+1));
		return;
	}
}
extern MethodInfo m10398_MI;
 void m10398_gshared (t1935 * __this, int32_t p0, t14* p1, MethodInfo* method)
{
	t14* V_0 = {0};
	t1935 * G_B4_0 = {0};
	t1935 * G_B3_0 = {0};
	t14* G_B5_0 = {0};
	t1935 * G_B5_1 = {0};
	{
		if ((((int32_t)p0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		t1242 * L_0 = (t1242 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1242_TI));
		m6493(L_0, (t33*) &_stringLiteral537, &m6493_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000f:
	{
		G_B3_0 = ((t1935 *)(__this));
		if (!p1)
		{
			G_B4_0 = ((t1935 *)(__this));
			goto IL_0018;
		}
	}
	{
		V_0 = p1;
		G_B5_0 = V_0;
		G_B5_1 = ((t1935 *)(G_B3_0));
		goto IL_001d;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1494_TI));
		t1494 * L_1 = (( t1494 * (*) (t14 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 29)->method)(NULL, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 29));
		G_B5_0 = ((t14*)(L_1));
		G_B5_1 = ((t1935 *)(G_B4_0));
	}

IL_001d:
	{
		G_B5_1->f12 = G_B5_0;
		if (p0)
		{
			goto IL_002b;
		}
	}
	{
		p0 = ((int32_t)10);
	}

IL_002b:
	{
		p0 = ((int32_t)((((int32_t)((float)((((float)p0))/(0.9f)))))+1));
		(( void (*) (t1935 * __this, int32_t p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 30)->method)(__this, p0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 30));
		__this->f14 = 0;
		return;
	}
}
extern MethodInfo m10400_MI;
 void m10400_gshared (t1935 * __this, int32_t p0, MethodInfo* method)
{
	{
		__this->f4 = ((t51*)SZArrayNew(InitializedTypeInfo(&t51_TI), p0));
		__this->f5 = ((t1459*)SZArrayNew(InitializedTypeInfo(&t1459_TI), p0));
		__this->f9 = (-1);
		__this->f6 = ((t40*)SZArrayNew(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 31), p0));
		__this->f7 = ((t40*)SZArrayNew(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 32), p0));
		__this->f8 = 0;
		t51* L_0 = (__this->f4);
		__this->f11 = (((int32_t)((float)((((float)(((int32_t)(((t24 *)L_0)->max_length)))))*(0.9f)))));
		int32_t L_1 = (__this->f11);
		if (L_1)
		{
			goto IL_006e;
		}
	}
	{
		t51* L_2 = (__this->f4);
		if ((((int32_t)(((int32_t)(((t24 *)L_2)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		__this->f11 = 1;
	}

IL_006e:
	{
		return;
	}
}
extern MethodInfo m10402_MI;
 void m10402_gshared (t1935 * __this, t24 * p0, int32_t p1, MethodInfo* method)
{
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t338 * L_0 = (t338 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t338_TI));
		m2974(L_0, (t33*) &_stringLiteral326, &m2974_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		t1242 * L_1 = (t1242 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1242_TI));
		m6493(L_1, (t33*) &_stringLiteral323, &m6493_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_001d:
	{
		int32_t L_2 = m3737(p0, &m3737_MI);
		if ((((int32_t)p1) <= ((int32_t)L_2)))
		{
			goto IL_0031;
		}
	}
	{
		t319 * L_3 = (t319 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t319_TI));
		m1959(L_3, (t33*) &_stringLiteral538, &m1959_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0031:
	{
		int32_t L_4 = m3737(p0, &m3737_MI);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 33), __this);
		if ((((int32_t)((int32_t)(L_4-p1))) >= ((int32_t)L_5)))
		{
			goto IL_004c;
		}
	}
	{
		t319 * L_6 = (t319 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t319_TI));
		m1959(L_6, (t33*) &_stringLiteral539, &m1959_MI);
		il2cpp_codegen_raise_exception (L_6);
	}

IL_004c:
	{
		return;
	}
}
extern MethodInfo m10437_MI;
 t1939  m10437 (t14 * __this, t14 * p0, t14 * p1, MethodInfo* method){
	{
		t1939  L_0 = {0};
		m10440(&L_0, p0, p1, &m10440_MI);
		return L_0;
	}
}
extern MethodInfo m10405_MI;
 t14 * m10405_gshared (t14 * __this, t14 * p0, t14 * p1, MethodInfo* method)
{
	{
		return p1;
	}
}
extern MethodInfo m10407_MI;
 void m10407_gshared (t1935 * __this, t1936* p0, int32_t p1, MethodInfo* method)
{
	{
		(( void (*) (t1935 * __this, t24 * p0, int32_t p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 11)->method)(__this, (t24 *)(t24 *)p0, p1, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 11));
		t77 L_0 = { IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 17) };
		t1945 * L_1 = (t1945 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 18));
		(( void (*) (t1945 * __this, t14 * p0, t77 p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 19)->method)(L_1, NULL, L_0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 19));
		(( void (*) (t1935 * __this, t1936* p0, int32_t p1, t1945 * p2, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 36)->method)(__this, p0, p1, L_1, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 36));
		return;
	}
}
extern MethodInfo m10409_MI;
 void m10409_gshared (t1935 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	t51* V_1 = {0};
	t1459* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	t40* V_7 = {0};
	t40* V_8 = {0};
	int32_t V_9 = 0;
	{
		t51* L_0 = (__this->f4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t863_TI));
		int32_t L_1 = m4429(NULL, ((int32_t)(((int32_t)((((int32_t)(((t24 *)L_0)->max_length)))<<1))|1)), &m4429_MI);
		V_0 = L_1;
		V_1 = ((t51*)SZArrayNew(InitializedTypeInfo(&t51_TI), V_0));
		V_2 = ((t1459*)SZArrayNew(InitializedTypeInfo(&t1459_TI), V_0));
		V_3 = 0;
		goto IL_00ab;
	}

IL_0027:
	{
		t51* L_2 = (__this->f4);
		V_4 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_2, V_3))-1));
		goto IL_00a2;
	}

IL_0035:
	{
		t14* L_3 = (__this->f12);
		t40* L_4 = (__this->f6);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, t14 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 26), L_3, (*(t14 **)(t14 **)SZArrayLdElema(L_4, V_4)));
		int32_t L_6 = ((int32_t)(L_5|((int32_t)-2147483648)));
		V_9 = L_6;
		((t834 *)(t834 *)SZArrayLdElema(V_2, V_4))->f0 = L_6;
		V_5 = V_9;
		V_6 = ((int32_t)(((int32_t)(V_5&((int32_t)2147483647)))%V_0));
		((t834 *)(t834 *)SZArrayLdElema(V_2, V_4))->f1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(V_1, V_6))-1));
		*((int32_t*)(int32_t*)SZArrayLdElema(V_1, V_6)) = (int32_t)((int32_t)(V_4+1));
		t1459* L_7 = (__this->f5);
		int32_t L_8 = (((t834 *)(t834 *)SZArrayLdElema(L_7, V_4))->f1);
		V_4 = L_8;
	}

IL_00a2:
	{
		if ((((uint32_t)V_4) != ((uint32_t)(-1))))
		{
			goto IL_0035;
		}
	}
	{
		V_3 = ((int32_t)(V_3+1));
	}

IL_00ab:
	{
		t51* L_9 = (__this->f4);
		if ((((int32_t)V_3) < ((int32_t)(((int32_t)(((t24 *)L_9)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		__this->f4 = V_1;
		__this->f5 = V_2;
		V_7 = ((t40*)SZArrayNew(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 31), V_0));
		V_8 = ((t40*)SZArrayNew(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 32), V_0));
		t40* L_10 = (__this->f6);
		int32_t L_11 = (__this->f8);
		m3786(NULL, (t24 *)(t24 *)L_10, 0, (t24 *)(t24 *)V_7, 0, L_11, &m3786_MI);
		t40* L_12 = (__this->f7);
		int32_t L_13 = (__this->f8);
		m3786(NULL, (t24 *)(t24 *)L_12, 0, (t24 *)(t24 *)V_8, 0, L_13, &m3786_MI);
		__this->f6 = V_7;
		__this->f7 = V_8;
		__this->f11 = (((int32_t)((float)((((float)V_0))*(0.9f)))));
		return;
	}
}
extern MethodInfo m10410_MI;
 void m10410_gshared (t1935 * __this, t14 * p0, t14 * p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		t14 * L_0 = p0;
		if (((t14 *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t338 * L_1 = (t338 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t338_TI));
		m2974(L_1, (t33*) &_stringLiteral536, &m2974_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		t14* L_2 = (__this->f12);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t14 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 26), L_2, p0);
		V_0 = ((int32_t)(L_3|((int32_t)-2147483648)));
		t51* L_4 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t24 *)L_4)->max_length)))));
		t51* L_5 = (__this->f4);
		V_2 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_5, V_1))-1));
		goto IL_008f;
	}

IL_0044:
	{
		t1459* L_6 = (__this->f5);
		int32_t L_7 = (((t834 *)(t834 *)SZArrayLdElema(L_6, V_2))->f0);
		if ((((uint32_t)L_7) != ((uint32_t)V_0)))
		{
			goto IL_007d;
		}
	}
	{
		t14* L_8 = (__this->f12);
		t40* L_9 = (__this->f6);
		bool L_10 = (bool)InterfaceFuncInvoker2< bool, t14 *, t14 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 27), L_8, (*(t14 **)(t14 **)SZArrayLdElema(L_9, V_2)), p0);
		if (!L_10)
		{
			goto IL_007d;
		}
	}
	{
		t319 * L_11 = (t319 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t319_TI));
		m1959(L_11, (t33*) &_stringLiteral541, &m1959_MI);
		il2cpp_codegen_raise_exception (L_11);
	}

IL_007d:
	{
		t1459* L_12 = (__this->f5);
		int32_t L_13 = (((t834 *)(t834 *)SZArrayLdElema(L_12, V_2))->f1);
		V_2 = L_13;
	}

IL_008f:
	{
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_14 = (__this->f10);
		int32_t L_15 = ((int32_t)(L_14+1));
		V_3 = L_15;
		__this->f10 = L_15;
		int32_t L_16 = (__this->f11);
		if ((((int32_t)V_3) <= ((int32_t)L_16)))
		{
			goto IL_00c3;
		}
	}
	{
		(( void (*) (t1935 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 28)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 28));
		t51* L_17 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t24 *)L_17)->max_length)))));
	}

IL_00c3:
	{
		int32_t L_18 = (__this->f9);
		V_2 = L_18;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_19 = (__this->f8);
		int32_t L_20 = L_19;
		V_3 = L_20;
		__this->f8 = ((int32_t)(L_20+1));
		V_2 = V_3;
		goto IL_00f9;
	}

IL_00e2:
	{
		t1459* L_21 = (__this->f5);
		int32_t L_22 = (((t834 *)(t834 *)SZArrayLdElema(L_21, V_2))->f1);
		__this->f9 = L_22;
	}

IL_00f9:
	{
		t1459* L_23 = (__this->f5);
		((t834 *)(t834 *)SZArrayLdElema(L_23, V_2))->f0 = V_0;
		t1459* L_24 = (__this->f5);
		t51* L_25 = (__this->f4);
		((t834 *)(t834 *)SZArrayLdElema(L_24, V_2))->f1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_25, V_1))-1));
		t51* L_26 = (__this->f4);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_26, V_1)) = (int32_t)((int32_t)(V_2+1));
		t40* L_27 = (__this->f6);
		*((t14 **)(t14 **)SZArrayLdElema(L_27, V_2)) = (t14 *)p0;
		t40* L_28 = (__this->f7);
		*((t14 **)(t14 **)SZArrayLdElema(L_28, V_2)) = (t14 *)p1;
		int32_t L_29 = (__this->f14);
		__this->f14 = ((int32_t)(L_29+1));
		return;
	}
}
extern MethodInfo m10412_MI;
 void m10412_gshared (t1935 * __this, MethodInfo* method)
{
	{
		__this->f10 = 0;
		t51* L_0 = (__this->f4);
		t51* L_1 = (__this->f4);
		m3782(NULL, (t24 *)(t24 *)L_0, 0, (((int32_t)(((t24 *)L_1)->max_length))), &m3782_MI);
		t40* L_2 = (__this->f6);
		t40* L_3 = (__this->f6);
		m3782(NULL, (t24 *)(t24 *)L_2, 0, (((int32_t)(((t24 *)L_3)->max_length))), &m3782_MI);
		t40* L_4 = (__this->f7);
		t40* L_5 = (__this->f7);
		m3782(NULL, (t24 *)(t24 *)L_4, 0, (((int32_t)(((t24 *)L_5)->max_length))), &m3782_MI);
		t1459* L_6 = (__this->f5);
		t1459* L_7 = (__this->f5);
		m3782(NULL, (t24 *)(t24 *)L_6, 0, (((int32_t)(((t24 *)L_7)->max_length))), &m3782_MI);
		__this->f9 = (-1);
		__this->f8 = 0;
		int32_t L_8 = (__this->f14);
		__this->f14 = ((int32_t)(L_8+1));
		return;
	}
}
extern MethodInfo m10414_MI;
 bool m10414_gshared (t1935 * __this, t14 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		t14 * L_0 = p0;
		if (((t14 *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t338 * L_1 = (t338 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t338_TI));
		m2974(L_1, (t33*) &_stringLiteral536, &m2974_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		t14* L_2 = (__this->f12);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t14 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 26), L_2, p0);
		V_0 = ((int32_t)(L_3|((int32_t)-2147483648)));
		t51* L_4 = (__this->f4);
		t51* L_5 = (__this->f4);
		V_1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_4, ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t24 *)L_5)->max_length)))))))-1));
		goto IL_0084;
	}

IL_0042:
	{
		t1459* L_6 = (__this->f5);
		int32_t L_7 = (((t834 *)(t834 *)SZArrayLdElema(L_6, V_1))->f0);
		if ((((uint32_t)L_7) != ((uint32_t)V_0)))
		{
			goto IL_0072;
		}
	}
	{
		t14* L_8 = (__this->f12);
		t40* L_9 = (__this->f6);
		bool L_10 = (bool)InterfaceFuncInvoker2< bool, t14 *, t14 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 27), L_8, (*(t14 **)(t14 **)SZArrayLdElema(L_9, V_1)), p0);
		if (!L_10)
		{
			goto IL_0072;
		}
	}
	{
		return 1;
	}

IL_0072:
	{
		t1459* L_11 = (__this->f5);
		int32_t L_12 = (((t834 *)(t834 *)SZArrayLdElema(L_11, V_1))->f1);
		V_1 = L_12;
	}

IL_0084:
	{
		if ((((uint32_t)V_1) != ((uint32_t)(-1))))
		{
			goto IL_0042;
		}
	}
	{
		return 0;
	}
}
extern MethodInfo m10416_MI;
 bool m10416_gshared (t1935 * __this, t14 * p0, MethodInfo* method)
{
	t14* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1494_TI));
		t1494 * L_0 = (( t1494 * (*) (t14 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 37)->method)(NULL, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 37));
		V_0 = L_0;
		V_1 = 0;
		goto IL_0048;
	}

IL_000a:
	{
		t51* L_1 = (__this->f4);
		V_2 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_1, V_1))-1));
		goto IL_0040;
	}

IL_0017:
	{
		t40* L_2 = (__this->f7);
		bool L_3 = (bool)InterfaceFuncInvoker2< bool, t14 *, t14 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 38), V_0, (*(t14 **)(t14 **)SZArrayLdElema(L_2, V_2)), p0);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		return 1;
	}

IL_002e:
	{
		t1459* L_4 = (__this->f5);
		int32_t L_5 = (((t834 *)(t834 *)SZArrayLdElema(L_4, V_2))->f1);
		V_2 = L_5;
	}

IL_0040:
	{
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0017;
		}
	}
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0048:
	{
		t51* L_6 = (__this->f4);
		if ((((int32_t)V_1) < ((int32_t)(((int32_t)(((t24 *)L_6)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}
}
extern MethodInfo m10418_MI;
 void m10418_gshared (t1935 * __this, t715 * p0, t716  p1, MethodInfo* method)
{
	t1936* V_0 = {0};
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t338 * L_0 = (t338 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t338_TI));
		m2974(L_0, (t33*) &_stringLiteral294, &m2974_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		int32_t L_1 = (__this->f14);
		m5759(p0, (t33*) &_stringLiteral542, L_1, &m5759_MI);
		t14* L_2 = (__this->f12);
		m5765(p0, (t33*) &_stringLiteral543, L_2, &m5765_MI);
		V_0 = (t1936*)NULL;
		int32_t L_3 = (__this->f10);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_4 = (__this->f10);
		V_0 = ((t1936*)SZArrayNew(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 39), L_4));
		(( void (*) (t1935 * __this, t1936* p0, int32_t p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8)->method)(__this, V_0, 0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8));
	}

IL_004f:
	{
		t51* L_5 = (__this->f4);
		m5759(p0, (t33*) &_stringLiteral544, (((int32_t)(((t24 *)L_5)->max_length))), &m5759_MI);
		m5765(p0, (t33*) &_stringLiteral545, (t14 *)(t14 *)V_0, &m5765_MI);
		return;
	}
}
extern MethodInfo m10420_MI;
 void m10420_gshared (t1935 * __this, t14 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	t1936* V_1 = {0};
	int32_t V_2 = 0;
	{
		t715 * L_0 = (__this->f13);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		t715 * L_1 = (__this->f13);
		int32_t L_2 = m5768(L_1, (t33*) &_stringLiteral542, &m5768_MI);
		__this->f14 = L_2;
		t715 * L_3 = (__this->f13);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t31_TI));
		t31 * L_4 = m1571(NULL, LoadTypeToken(IL2CPP_RGCTX_TYPE(method->declaring_type->rgctx_data, 40)), &m1571_MI);
		t14 * L_5 = m5755(L_3, (t33*) &_stringLiteral543, L_4, &m5755_MI);
		__this->f12 = ((t14*)Castclass(L_5, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 41)));
		t715 * L_6 = (__this->f13);
		int32_t L_7 = m5768(L_6, (t33*) &_stringLiteral544, &m5768_MI);
		V_0 = L_7;
		t715 * L_8 = (__this->f13);
		t31 * L_9 = m1571(NULL, LoadTypeToken(IL2CPP_RGCTX_TYPE(method->declaring_type->rgctx_data, 42)), &m1571_MI);
		t14 * L_10 = m5755(L_8, (t33*) &_stringLiteral545, L_9, &m5755_MI);
		V_1 = ((t1936*)Castclass(L_10, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 10)));
		if ((((int32_t)V_0) >= ((int32_t)((int32_t)10))))
		{
			goto IL_007d;
		}
	}
	{
		V_0 = ((int32_t)10);
	}

IL_007d:
	{
		(( void (*) (t1935 * __this, int32_t p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 30)->method)(__this, V_0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 30));
		__this->f10 = 0;
		if (!V_1)
		{
			goto IL_00ba;
		}
	}
	{
		V_2 = 0;
		goto IL_00b4;
	}

IL_0092:
	{
		t14 * L_11 = (( t14 * (*) (t1939 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4)->method)(((t1939 *)(t1939 *)SZArrayLdElema(V_1, V_2)), IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4));
		t14 * L_12 = (( t14 * (*) (t1939 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 5)->method)(((t1939 *)(t1939 *)SZArrayLdElema(V_1, V_2)), IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 5));
		VirtActionInvoker2< t14 *, t14 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6), __this, L_11, L_12);
		V_2 = ((int32_t)(V_2+1));
	}

IL_00b4:
	{
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((t24 *)V_1)->max_length))))))
		{
			goto IL_0092;
		}
	}

IL_00ba:
	{
		int32_t L_13 = (__this->f14);
		__this->f14 = ((int32_t)(L_13+1));
		__this->f13 = (t715 *)NULL;
		return;
	}
}
extern MethodInfo m10422_MI;
 bool m10422_gshared (t1935 * __this, t14 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	t14 * V_4 = {0};
	t14 * V_5 = {0};
	{
		t14 * L_0 = p0;
		if (((t14 *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t338 * L_1 = (t338 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t338_TI));
		m2974(L_1, (t33*) &_stringLiteral536, &m2974_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		t14* L_2 = (__this->f12);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t14 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 26), L_2, p0);
		V_0 = ((int32_t)(L_3|((int32_t)-2147483648)));
		t51* L_4 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t24 *)L_4)->max_length)))));
		t51* L_5 = (__this->f4);
		V_2 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_5, V_1))-1));
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0048;
		}
	}
	{
		return 0;
	}

IL_0048:
	{
		V_3 = (-1);
	}

IL_004a:
	{
		t1459* L_6 = (__this->f5);
		int32_t L_7 = (((t834 *)(t834 *)SZArrayLdElema(L_6, V_2))->f0);
		if ((((uint32_t)L_7) != ((uint32_t)V_0)))
		{
			goto IL_007a;
		}
	}
	{
		t14* L_8 = (__this->f12);
		t40* L_9 = (__this->f6);
		bool L_10 = (bool)InterfaceFuncInvoker2< bool, t14 *, t14 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 27), L_8, (*(t14 **)(t14 **)SZArrayLdElema(L_9, V_2)), p0);
		if (!L_10)
		{
			goto IL_007a;
		}
	}
	{
		goto IL_0092;
	}

IL_007a:
	{
		V_3 = V_2;
		t1459* L_11 = (__this->f5);
		int32_t L_12 = (((t834 *)(t834 *)SZArrayLdElema(L_11, V_2))->f1);
		V_2 = L_12;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_004a;
		}
	}

IL_0092:
	{
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0098;
		}
	}
	{
		return 0;
	}

IL_0098:
	{
		int32_t L_13 = (__this->f10);
		__this->f10 = ((int32_t)(L_13-1));
		if ((((uint32_t)V_3) != ((uint32_t)(-1))))
		{
			goto IL_00c7;
		}
	}
	{
		t51* L_14 = (__this->f4);
		t1459* L_15 = (__this->f5);
		int32_t L_16 = (((t834 *)(t834 *)SZArrayLdElema(L_15, V_2))->f1);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_14, V_1)) = (int32_t)((int32_t)(L_16+1));
		goto IL_00e9;
	}

IL_00c7:
	{
		t1459* L_17 = (__this->f5);
		t1459* L_18 = (__this->f5);
		int32_t L_19 = (((t834 *)(t834 *)SZArrayLdElema(L_18, V_2))->f1);
		((t834 *)(t834 *)SZArrayLdElema(L_17, V_3))->f1 = L_19;
	}

IL_00e9:
	{
		t1459* L_20 = (__this->f5);
		int32_t L_21 = (__this->f9);
		((t834 *)(t834 *)SZArrayLdElema(L_20, V_2))->f1 = L_21;
		__this->f9 = V_2;
		t1459* L_22 = (__this->f5);
		((t834 *)(t834 *)SZArrayLdElema(L_22, V_2))->f0 = 0;
		t40* L_23 = (__this->f6);
		Initobj (&t14_TI, (&V_4));
		*((t14 **)(t14 **)SZArrayLdElema(L_23, V_2)) = (t14 *)V_4;
		t40* L_24 = (__this->f7);
		Initobj (&t14_TI, (&V_5));
		*((t14 **)(t14 **)SZArrayLdElema(L_24, V_2)) = (t14 *)V_5;
		int32_t L_25 = (__this->f14);
		__this->f14 = ((int32_t)(L_25+1));
		return 1;
	}
}
extern MethodInfo m10423_MI;
 bool m10423_gshared (t1935 * __this, t14 * p0, t14 ** p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t14 * V_2 = {0};
	{
		t14 * L_0 = p0;
		if (((t14 *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t338 * L_1 = (t338 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t338_TI));
		m2974(L_1, (t33*) &_stringLiteral536, &m2974_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		t14* L_2 = (__this->f12);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t14 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 26), L_2, p0);
		V_0 = ((int32_t)(L_3|((int32_t)-2147483648)));
		t51* L_4 = (__this->f4);
		t51* L_5 = (__this->f4);
		V_1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_4, ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t24 *)L_5)->max_length)))))))-1));
		goto IL_0096;
	}

IL_0042:
	{
		t1459* L_6 = (__this->f5);
		int32_t L_7 = (((t834 *)(t834 *)SZArrayLdElema(L_6, V_1))->f0);
		if ((((uint32_t)L_7) != ((uint32_t)V_0)))
		{
			goto IL_0084;
		}
	}
	{
		t14* L_8 = (__this->f12);
		t40* L_9 = (__this->f6);
		bool L_10 = (bool)InterfaceFuncInvoker2< bool, t14 *, t14 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 27), L_8, (*(t14 **)(t14 **)SZArrayLdElema(L_9, V_1)), p0);
		if (!L_10)
		{
			goto IL_0084;
		}
	}
	{
		t40* L_11 = (__this->f7);
		*p1 = (*(t14 **)(t14 **)SZArrayLdElema(L_11, V_1));
		return 1;
	}

IL_0084:
	{
		t1459* L_12 = (__this->f5);
		int32_t L_13 = (((t834 *)(t834 *)SZArrayLdElema(L_12, V_1))->f1);
		V_1 = L_13;
	}

IL_0096:
	{
		if ((((uint32_t)V_1) != ((uint32_t)(-1))))
		{
			goto IL_0042;
		}
	}
	{
		Initobj (&t14_TI, (&V_2));
		*p1 = V_2;
		return 0;
	}
}
extern MethodInfo m10425_MI;
 t1938 * m10425_gshared (t1935 * __this, MethodInfo* method)
{
	{
		t1938 * L_0 = (t1938 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 43));
		(( void (*) (t1938 * __this, t1935 * p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 44)->method)(L_0, __this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 44));
		return L_0;
	}
}
extern MethodInfo m10427_MI;
 t14 * m10427_gshared (t1935 * __this, t14 * p0, MethodInfo* method)
{
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t338 * L_0 = (t338 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t338_TI));
		m2974(L_0, (t33*) &_stringLiteral536, &m2974_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		if (((t14 *)IsInst(p0, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 25))))
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t31_TI));
		t31 * L_1 = m1571(NULL, LoadTypeToken(IL2CPP_RGCTX_TYPE(method->declaring_type->rgctx_data, 45)), &m1571_MI);
		t33* L_2 = (t33*)VirtFuncInvoker0< t33* >::Invoke(&m3872_MI, L_1);
		IL2CPP_RUNTIME_CLASS_INIT((&t33_TI));
		t33* L_3 = m1786(NULL, (t33*) &_stringLiteral546, L_2, &m1786_MI);
		t319 * L_4 = (t319 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t319_TI));
		m6483(L_4, L_3, (t33*) &_stringLiteral536, &m6483_MI);
		il2cpp_codegen_raise_exception (L_4);
	}

IL_003a:
	{
		return ((t14 *)Castclass(p0, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 25)));
	}
}
extern MethodInfo m10429_MI;
 t14 * m10429_gshared (t1935 * __this, t14 * p0, MethodInfo* method)
{
	t14 * V_0 = {0};
	{
		if (p0)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t31_TI));
		t31 * L_0 = m1571(NULL, LoadTypeToken(IL2CPP_RGCTX_TYPE(method->declaring_type->rgctx_data, 46)), &m1571_MI);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m3841_MI, L_0);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		Initobj (&t14_TI, (&V_0));
		return V_0;
	}

IL_001e:
	{
		if (((t14 *)IsInst(p0, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 47))))
		{
			goto IL_004a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t31_TI));
		t31 * L_2 = m1571(NULL, LoadTypeToken(IL2CPP_RGCTX_TYPE(method->declaring_type->rgctx_data, 46)), &m1571_MI);
		t33* L_3 = (t33*)VirtFuncInvoker0< t33* >::Invoke(&m3872_MI, L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&t33_TI));
		t33* L_4 = m1786(NULL, (t33*) &_stringLiteral546, L_3, &m1786_MI);
		t319 * L_5 = (t319 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t319_TI));
		m6483(L_5, L_4, (t33*) &_stringLiteral242, &m6483_MI);
		il2cpp_codegen_raise_exception (L_5);
	}

IL_004a:
	{
		return ((t14 *)Castclass(p0, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 47)));
	}
}
extern MethodInfo m10438_MI;
 bool m10438 (t1935 * __this, t1939  p0, MethodInfo* method){
	t14 * V_0 = {0};
	{
		t14 * L_0 = m10441((&p0), &m10441_MI);
		bool L_1 = (bool)VirtFuncInvoker2< bool, t14 *, t14 ** >::Invoke(&m10423_MI, __this, L_0, (&V_0));
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1494_TI));
		t1494 * L_2 = m8256(NULL, &m8256_MI);
		t14 * L_3 = m10443((&p0), &m10443_MI);
		bool L_4 = (bool)VirtFuncInvoker2< bool, t14 *, t14 * >::Invoke(&m16652_MI, L_2, L_3, V_0);
		return L_4;
	}
}
extern MethodInfo m10439_MI;
 t1941  m10439 (t1935 * __this, MethodInfo* method){
	{
		t1941  L_0 = {0};
		m10470(&L_0, __this, &m10470_MI);
		return L_0;
	}
}
extern MethodInfo m10433_MI;
 t836  m10433_gshared (t14 * __this, t14 * p0, t14 * p1, MethodInfo* method)
{
	{
		t14 * L_0 = p0;
		t14 * L_1 = p1;
		t836  L_2 = {0};
		m4371(&L_2, ((t14 *)L_0), ((t14 *)L_1), &m4371_MI);
		return L_2;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2<System.Object,System.Object>
extern Il2CppType t35_0_0_32849;
FieldInfo t1935_f0_FieldInfo = 
{
	"INITIAL_SIZE", &t35_0_0_32849, &t1935_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t28_0_0_32849;
FieldInfo t1935_f1_FieldInfo = 
{
	"DEFAULT_LOAD_FACTOR", &t28_0_0_32849, &t1935_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_32849;
FieldInfo t1935_f2_FieldInfo = 
{
	"NO_SLOT", &t35_0_0_32849, &t1935_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_32849;
FieldInfo t1935_f3_FieldInfo = 
{
	"HASH_FLAG", &t35_0_0_32849, &t1935_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t51_0_0_1;
FieldInfo t1935_f4_FieldInfo = 
{
	"table", &t51_0_0_1, &t1935_TI, offsetof(t1935, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1459_0_0_1;
FieldInfo t1935_f5_FieldInfo = 
{
	"linkSlots", &t1459_0_0_1, &t1935_TI, offsetof(t1935, f5), &EmptyCustomAttributesCache};
extern Il2CppType t40_0_0_1;
FieldInfo t1935_f6_FieldInfo = 
{
	"keySlots", &t40_0_0_1, &t1935_TI, offsetof(t1935, f6), &EmptyCustomAttributesCache};
extern Il2CppType t40_0_0_1;
FieldInfo t1935_f7_FieldInfo = 
{
	"valueSlots", &t40_0_0_1, &t1935_TI, offsetof(t1935, f7), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t1935_f8_FieldInfo = 
{
	"touchedSlots", &t35_0_0_1, &t1935_TI, offsetof(t1935, f8), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t1935_f9_FieldInfo = 
{
	"emptySlot", &t35_0_0_1, &t1935_TI, offsetof(t1935, f9), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t1935_f10_FieldInfo = 
{
	"count", &t35_0_0_1, &t1935_TI, offsetof(t1935, f10), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t1935_f11_FieldInfo = 
{
	"threshold", &t35_0_0_1, &t1935_TI, offsetof(t1935, f11), &EmptyCustomAttributesCache};
extern Il2CppType t1890_0_0_1;
FieldInfo t1935_f12_FieldInfo = 
{
	"hcp", &t1890_0_0_1, &t1935_TI, offsetof(t1935, f12), &EmptyCustomAttributesCache};
extern Il2CppType t715_0_0_1;
FieldInfo t1935_f13_FieldInfo = 
{
	"serialization_info", &t715_0_0_1, &t1935_TI, offsetof(t1935, f13), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t1935_f14_FieldInfo = 
{
	"generation", &t35_0_0_1, &t1935_TI, offsetof(t1935, f14), &EmptyCustomAttributesCache};
extern Il2CppType t1937_0_0_17;
extern CustomAttributesCache t841__CustomAttributeCache_U3CU3Ef__am$cacheB;
FieldInfo t1935_f15_FieldInfo = 
{
	"<>f__am$cacheB", &t1937_0_0_17, &t1935_TI, offsetof(t1935_SFs, f15), &t841__CustomAttributeCache_U3CU3Ef__am$cacheB};
static FieldInfo* t1935_FIs[] =
{
	&t1935_f0_FieldInfo,
	&t1935_f1_FieldInfo,
	&t1935_f2_FieldInfo,
	&t1935_f3_FieldInfo,
	&t1935_f4_FieldInfo,
	&t1935_f5_FieldInfo,
	&t1935_f6_FieldInfo,
	&t1935_f7_FieldInfo,
	&t1935_f8_FieldInfo,
	&t1935_f9_FieldInfo,
	&t1935_f10_FieldInfo,
	&t1935_f11_FieldInfo,
	&t1935_f12_FieldInfo,
	&t1935_f13_FieldInfo,
	&t1935_f14_FieldInfo,
	&t1935_f15_FieldInfo,
	NULL
};
static const int32_t t1935_f0_DefaultValueData = 10;
extern Il2CppType t35_0_0_0;
static Il2CppFieldDefaultValueEntry t1935_f0_DefaultValue = 
{
	&t1935_f0_FieldInfo, { (char*)&t1935_f0_DefaultValueData, &t35_0_0_0 }};
static const float t1935_f1_DefaultValueData = 0.9f;
extern Il2CppType t28_0_0_0;
static Il2CppFieldDefaultValueEntry t1935_f1_DefaultValue = 
{
	&t1935_f1_FieldInfo, { (char*)&t1935_f1_DefaultValueData, &t28_0_0_0 }};
static const int32_t t1935_f2_DefaultValueData = -1;
extern Il2CppType t35_0_0_0;
static Il2CppFieldDefaultValueEntry t1935_f2_DefaultValue = 
{
	&t1935_f2_FieldInfo, { (char*)&t1935_f2_DefaultValueData, &t35_0_0_0 }};
static const int32_t t1935_f3_DefaultValueData = -2147483648;
extern Il2CppType t35_0_0_0;
static Il2CppFieldDefaultValueEntry t1935_f3_DefaultValue = 
{
	&t1935_f3_FieldInfo, { (char*)&t1935_f3_DefaultValueData, &t35_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1935_FDVs[] = 
{
	&t1935_f0_DefaultValue,
	&t1935_f1_DefaultValue,
	&t1935_f2_DefaultValue,
	&t1935_f3_DefaultValue,
	NULL
};
extern MethodInfo m10373_MI;
static PropertyInfo t1935____System_Collections_IDictionary_Item_PropertyInfo = 
{
	&t1935_TI, "System.Collections.IDictionary.Item", NULL, &m10373_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10375_MI;
static PropertyInfo t1935____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t1935_TI, "System.Collections.ICollection.IsSynchronized", &m10375_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10377_MI;
static PropertyInfo t1935____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t1935_TI, "System.Collections.ICollection.SyncRoot", &m10377_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10379_MI;
static PropertyInfo t1935____System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnly_PropertyInfo = 
{
	&t1935_TI, "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.IsReadOnly", &m10379_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10394_MI;
static PropertyInfo t1935____Count_PropertyInfo = 
{
	&t1935_TI, "Count", &m10394_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10396_MI;
static PropertyInfo t1935____Item_PropertyInfo = 
{
	&t1935_TI, "Item", NULL, &m10396_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10425_MI;
static PropertyInfo t1935____Values_PropertyInfo = 
{
	&t1935_TI, "Values", &m10425_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1935_PIs[] =
{
	&t1935____System_Collections_IDictionary_Item_PropertyInfo,
	&t1935____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t1935____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t1935____System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnly_PropertyInfo,
	&t1935____Count_PropertyInfo,
	&t1935____Item_PropertyInfo,
	&t1935____Values_PropertyInfo,
	NULL
};
extern TypeInfo t1935_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10365_MI = 
{
	".ctor", (methodPointerType)&m10365_gshared, &t1935_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1890_0_0_0;
static ParameterInfo t1935_m10367_ParameterInfos[] = 
{
	{"comparer", 0, 134217728, &EmptyCustomAttributesCache, &t1890_0_0_0},
};
extern TypeInfo t1935_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10367_MI = 
{
	".ctor", (methodPointerType)&m10367_gshared, &t1935_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1935_m10367_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1935_m10369_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1935_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10369_MI = 
{
	".ctor", (methodPointerType)&m10369_gshared, &t1935_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t1935_m10369_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t715_0_0_0;
extern Il2CppType t716_0_0_0;
static ParameterInfo t1935_m10371_ParameterInfos[] = 
{
	{"info", 0, 134217728, &EmptyCustomAttributesCache, &t715_0_0_0},
	{"context", 1, 134217728, &EmptyCustomAttributesCache, &t716_0_0_0},
};
extern TypeInfo t1935_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t716 (MethodInfo* method, void* obj, void** args);
MethodInfo m10371_MI = 
{
	".ctor", (methodPointerType)&m10371_gshared, &t1935_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t716, t1935_m10371_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t1935_m10373_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1935_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10373_MI = 
{
	"System.Collections.IDictionary.set_Item", (methodPointerType)&m10373_gshared, &t1935_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t14, t1935_m10373_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 19, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1935_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10375_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m10375_gshared, &t1935_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1935_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10377_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m10377_gshared, &t1935_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1935_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10379_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly", (methodPointerType)&m10379_gshared, &t1935_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 11, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1939_0_0_0;
static ParameterInfo t1935_m10434_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t1939_0_0_0},
};
extern TypeInfo t1935_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t1939 (MethodInfo* method, void* obj, void** args);
MethodInfo m10434_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add", (methodPointerType)&m10434, &t1935_TI, &t25_0_0_0, RuntimeInvoker_t25_t1939, t1935_m10434_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1939_0_0_0;
static ParameterInfo t1935_m10435_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t1939_0_0_0},
};
extern TypeInfo t1935_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t1939 (MethodInfo* method, void* obj, void** args);
MethodInfo m10435_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains", (methodPointerType)&m10435, &t1935_TI, &t26_0_0_0, RuntimeInvoker_t26_t1939, t1935_m10435_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 14, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1936_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t1935_m10383_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1936_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1935_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10383_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo", (methodPointerType)&m10383_gshared, &t1935_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t1935_m10383_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1939_0_0_0;
static ParameterInfo t1935_m10436_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t1939_0_0_0},
};
extern TypeInfo t1935_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t1939 (MethodInfo* method, void* obj, void** args);
MethodInfo m10436_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove", (methodPointerType)&m10436, &t1935_TI, &t26_0_0_0, RuntimeInvoker_t26_t1939, t1935_m10436_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t24_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t1935_m10386_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1935_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10386_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m10386_gshared, &t1935_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t1935_m10386_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1935_TI;
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10388_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m10388_gshared, &t1935_TI, &t36_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1935_TI;
extern Il2CppType t1940_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10390_MI = 
{
	"System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator", (methodPointerType)&m10390_gshared, &t1935_TI, &t1940_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 481, 0, 17, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1935_TI;
extern Il2CppType t842_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10392_MI = 
{
	"System.Collections.IDictionary.GetEnumerator", (methodPointerType)&m10392_gshared, &t1935_TI, &t842_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 481, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1935_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10394_MI = 
{
	"get_Count", (methodPointerType)&m10394_gshared, &t1935_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 2534, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t1935_m10396_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1935_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10396_MI = 
{
	"set_Item", (methodPointerType)&m10396_gshared, &t1935_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t14, t1935_m10396_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 22, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1890_0_0_0;
static ParameterInfo t1935_m10398_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"hcp", 1, 134217728, &EmptyCustomAttributesCache, &t1890_0_0_0},
};
extern TypeInfo t1935_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10398_MI = 
{
	"Init", (methodPointerType)&m10398_gshared, &t1935_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t1935_m10398_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1935_m10400_ParameterInfos[] = 
{
	{"size", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1935_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10400_MI = 
{
	"InitArrays", (methodPointerType)&m10400_gshared, &t1935_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t1935_m10400_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t24_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t1935_m10402_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1935_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10402_MI = 
{
	"CopyToCheck", (methodPointerType)&m10402_gshared, &t1935_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t1935_m10402_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1935_TI;
extern Il2CppType t25_0_0_0;
extern Il2CppGenericContainer m23778_IGC;
extern TypeInfo m23778_gp_TRet_0_TI;
Il2CppGenericParamFull m23778_gp_TRet_0_TI_GenericParamFull = { { &m23778_IGC, 0}, {NULL, "TRet", 0, 0, NULL} };
extern TypeInfo m23778_gp_TElem_1_TI;
Il2CppGenericParamFull m23778_gp_TElem_1_TI_GenericParamFull = { { &m23778_IGC, 1}, {NULL, "TElem", 0, 0, NULL} };
static Il2CppGenericParamFull* m23778_IGPA[2] = 
{
	&m23778_gp_TRet_0_TI_GenericParamFull,
	&m23778_gp_TElem_1_TI_GenericParamFull,
};
extern MethodInfo m23778_MI;
Il2CppGenericContainer m23778_IGC = { { NULL, NULL }, NULL, &m23778_MI, 2, 1, m23778_IGPA };
MethodInfo m23778_MI = 
{
	"Do_CopyTo", NULL, &t1935_TI, &t25_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, true, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t1935_m10437_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1935_TI;
extern Il2CppType t1939_0_0_0;
extern void* RuntimeInvoker_t1939_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10437_MI = 
{
	"make_pair", (methodPointerType)&m10437, &t1935_TI, &t1939_0_0_0, RuntimeInvoker_t1939_t14_t14, t1935_m10437_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t1935_m10405_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1935_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10405_MI = 
{
	"pick_value", (methodPointerType)&m10405_gshared, &t1935_TI, &t14_0_0_0, RuntimeInvoker_t14_t14_t14, t1935_m10405_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1936_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t1935_m10407_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1936_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1935_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10407_MI = 
{
	"CopyTo", (methodPointerType)&m10407_gshared, &t1935_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t1935_m10407_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1935_TI;
extern Il2CppType t25_0_0_0;
extern Il2CppGenericContainer m23779_IGC;
extern TypeInfo m23779_gp_TRet_0_TI;
Il2CppGenericParamFull m23779_gp_TRet_0_TI_GenericParamFull = { { &m23779_IGC, 0}, {NULL, "TRet", 0, 0, NULL} };
static Il2CppGenericParamFull* m23779_IGPA[1] = 
{
	&m23779_gp_TRet_0_TI_GenericParamFull,
};
extern MethodInfo m23779_MI;
Il2CppGenericContainer m23779_IGC = { { NULL, NULL }, NULL, &m23779_MI, 1, 1, m23779_IGPA };
MethodInfo m23779_MI = 
{
	"Do_ICollectionCopyTo", NULL, &t1935_TI, &t25_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, true, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1935_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10409_MI = 
{
	"Resize", (methodPointerType)&m10409_gshared, &t1935_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t1935_m10410_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1935_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10410_MI = 
{
	"Add", (methodPointerType)&m10410_gshared, &t1935_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t14, t1935_m10410_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 23, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1935_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10412_MI = 
{
	"Clear", (methodPointerType)&m10412_gshared, &t1935_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 13, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1935_m10414_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1935_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10414_MI = 
{
	"ContainsKey", (methodPointerType)&m10414_gshared, &t1935_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1935_m10414_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1935_m10416_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1935_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10416_MI = 
{
	"ContainsValue", (methodPointerType)&m10416_gshared, &t1935_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1935_m10416_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t715_0_0_0;
extern Il2CppType t716_0_0_0;
static ParameterInfo t1935_m10418_ParameterInfos[] = 
{
	{"info", 0, 134217728, &EmptyCustomAttributesCache, &t715_0_0_0},
	{"context", 1, 134217728, &EmptyCustomAttributesCache, &t716_0_0_0},
};
extern TypeInfo t1935_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t716 (MethodInfo* method, void* obj, void** args);
MethodInfo m10418_MI = 
{
	"GetObjectData", (methodPointerType)&m10418_gshared, &t1935_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t716, t1935_m10418_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1935_m10420_ParameterInfos[] = 
{
	{"sender", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1935_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10420_MI = 
{
	"OnDeserialization", (methodPointerType)&m10420_gshared, &t1935_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1935_m10420_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1935_m10422_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1935_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10422_MI = 
{
	"Remove", (methodPointerType)&m10422_gshared, &t1935_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1935_m10422_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t14_1_0_0;
static ParameterInfo t1935_m10423_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t14_1_0_0},
};
extern TypeInfo t1935_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14_t1516 (MethodInfo* method, void* obj, void** args);
MethodInfo m10423_MI = 
{
	"TryGetValue", (methodPointerType)&m10423_gshared, &t1935_TI, &t26_0_0_0, RuntimeInvoker_t26_t14_t1516, t1935_m10423_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1935_TI;
extern Il2CppType t1938_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10425_MI = 
{
	"get_Values", (methodPointerType)&m10425_gshared, &t1935_TI, &t1938_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1935_m10427_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1935_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10427_MI = 
{
	"ToTKey", (methodPointerType)&m10427_gshared, &t1935_TI, &t14_0_0_0, RuntimeInvoker_t14_t14, t1935_m10427_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1935_m10429_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1935_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10429_MI = 
{
	"ToTValue", (methodPointerType)&m10429_gshared, &t1935_TI, &t14_0_0_0, RuntimeInvoker_t14_t14, t1935_m10429_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1939_0_0_0;
static ParameterInfo t1935_m10438_ParameterInfos[] = 
{
	{"pair", 0, 134217728, &EmptyCustomAttributesCache, &t1939_0_0_0},
};
extern TypeInfo t1935_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t1939 (MethodInfo* method, void* obj, void** args);
MethodInfo m10438_MI = 
{
	"ContainsKeyValuePair", (methodPointerType)&m10438, &t1935_TI, &t26_0_0_0, RuntimeInvoker_t26_t1939, t1935_m10438_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1935_TI;
extern Il2CppType t1941_0_0_0;
extern void* RuntimeInvoker_t1941 (MethodInfo* method, void* obj, void** args);
MethodInfo m10439_MI = 
{
	"GetEnumerator", (methodPointerType)&m10439, &t1935_TI, &t1941_0_0_0, RuntimeInvoker_t1941, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t1935_m10433_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1935_TI;
extern Il2CppType t836_0_0_0;
extern void* RuntimeInvoker_t836_t14_t14 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t841__CustomAttributeCache_m7579;
MethodInfo m10433_MI = 
{
	"<CopyTo>m__0", (methodPointerType)&m10433_gshared, &t1935_TI, &t836_0_0_0, RuntimeInvoker_t836_t14_t14, t1935_m10433_ParameterInfos, &t841__CustomAttributeCache_m7579, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1935_MIs[] =
{
	&m10365_MI,
	&m10367_MI,
	&m10369_MI,
	&m10371_MI,
	&m10373_MI,
	&m10375_MI,
	&m10377_MI,
	&m10379_MI,
	&m10434_MI,
	&m10435_MI,
	&m10383_MI,
	&m10436_MI,
	&m10386_MI,
	&m10388_MI,
	&m10390_MI,
	&m10392_MI,
	&m10394_MI,
	&m10396_MI,
	&m10398_MI,
	&m10400_MI,
	&m10402_MI,
	&m23778_MI,
	&m10437_MI,
	&m10405_MI,
	&m10407_MI,
	&m23779_MI,
	&m10409_MI,
	&m10410_MI,
	&m10412_MI,
	&m10414_MI,
	&m10416_MI,
	&m10418_MI,
	&m10420_MI,
	&m10422_MI,
	&m10423_MI,
	&m10425_MI,
	&m10427_MI,
	&m10429_MI,
	&m10438_MI,
	&m10439_MI,
	&m10433_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m10388_MI;
extern MethodInfo m10418_MI;
extern MethodInfo m10394_MI;
extern MethodInfo m10375_MI;
extern MethodInfo m10377_MI;
extern MethodInfo m10386_MI;
extern MethodInfo m10394_MI;
extern MethodInfo m10379_MI;
extern MethodInfo m10434_MI;
extern MethodInfo m10412_MI;
extern MethodInfo m10435_MI;
extern MethodInfo m10383_MI;
extern MethodInfo m10436_MI;
extern MethodInfo m10390_MI;
extern MethodInfo m10422_MI;
extern MethodInfo m10373_MI;
extern MethodInfo m10392_MI;
extern MethodInfo m10420_MI;
extern MethodInfo m10396_MI;
extern MethodInfo m10410_MI;
extern MethodInfo m10414_MI;
extern MethodInfo m10418_MI;
extern MethodInfo m10420_MI;
extern MethodInfo m10423_MI;
static MethodInfo* t1935_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m10388_MI,
	&m10418_MI,
	&m10394_MI,
	&m10375_MI,
	&m10377_MI,
	&m10386_MI,
	&m10394_MI,
	&m10379_MI,
	&m10434_MI,
	&m10412_MI,
	&m10435_MI,
	&m10383_MI,
	&m10436_MI,
	&m10390_MI,
	&m10422_MI,
	&m10373_MI,
	&m10392_MI,
	&m10420_MI,
	&m10396_MI,
	&m10410_MI,
	&m10414_MI,
	&m10418_MI,
	&m10420_MI,
	&m10423_MI,
};
extern TypeInfo t600_TI;
extern TypeInfo t375_TI;
extern TypeInfo t651_TI;
extern TypeInfo t3996_TI;
extern TypeInfo t3998_TI;
extern TypeInfo t5159_TI;
extern TypeInfo t739_TI;
extern TypeInfo t1495_TI;
static TypeInfo* t1935_ITIs[] = 
{
	&t600_TI,
	&t375_TI,
	&t651_TI,
	&t3996_TI,
	&t3998_TI,
	&t5159_TI,
	&t739_TI,
	&t1495_TI,
};
extern TypeInfo t600_TI;
extern TypeInfo t375_TI;
extern TypeInfo t651_TI;
extern TypeInfo t3996_TI;
extern TypeInfo t3998_TI;
extern TypeInfo t5159_TI;
extern TypeInfo t739_TI;
extern TypeInfo t1495_TI;
static Il2CppInterfaceOffsetPair t1935_IOs[] = 
{
	{ &t600_TI, 4},
	{ &t375_TI, 5},
	{ &t651_TI, 6},
	{ &t3996_TI, 10},
	{ &t3998_TI, 17},
	{ &t5159_TI, 18},
	{ &t739_TI, 19},
	{ &t1495_TI, 21},
};
extern MethodInfo m10398_MI;
extern MethodInfo m10427_MI;
extern MethodInfo m10429_MI;
extern MethodInfo m10396_MI;
extern MethodInfo m10441_MI;
extern MethodInfo m10443_MI;
extern MethodInfo m10410_MI;
extern MethodInfo m10438_MI;
extern MethodInfo m10407_MI;
extern MethodInfo m10422_MI;
extern TypeInfo t1936_TI;
extern MethodInfo m10402_MI;
extern TypeInfo t1935_TI;
extern MethodInfo m10433_MI;
extern TypeInfo t1937_TI;
extern MethodInfo m10485_MI;
extern MethodInfo m17655_MI;
extern MethodInfo m10437_MI;
extern TypeInfo t1945_TI;
extern MethodInfo m10489_MI;
extern MethodInfo m17657_MI;
extern TypeInfo t1941_TI;
extern MethodInfo m10470_MI;
extern TypeInfo t1946_TI;
extern MethodInfo m10493_MI;
extern TypeInfo t14_TI;
extern MethodInfo m22741_MI;
extern MethodInfo m22740_MI;
extern MethodInfo m10409_MI;
extern MethodInfo m8256_MI;
extern MethodInfo m10400_MI;
extern TypeInfo t40_TI;
extern TypeInfo t40_TI;
extern MethodInfo m10394_MI;
extern TypeInfo t1939_TI;
extern MethodInfo m10440_MI;
extern MethodInfo m17658_MI;
extern MethodInfo m8256_MI;
extern MethodInfo m22740_MI;
extern TypeInfo t1936_TI;
extern Il2CppType t1890_0_0_0;
extern TypeInfo t1890_TI;
extern Il2CppType t1936_0_0_0;
extern TypeInfo t1938_TI;
extern MethodInfo m10451_MI;
extern Il2CppType t14_0_0_0;
extern Il2CppType t14_0_0_0;
extern TypeInfo t14_TI;
extern MethodInfo m10423_MI;
extern MethodInfo m16652_MI;
static void* t1935_RGCTXData[50] = 
{
	&m10398_MI,
	&m10427_MI,
	&m10429_MI,
	&m10396_MI,
	&m10441_MI,
	&m10443_MI,
	&m10410_MI,
	&m10438_MI,
	&m10407_MI,
	&m10422_MI,
	&t1936_TI,
	&m10402_MI,
	&t1935_TI,
	&m10433_MI,
	&t1937_TI,
	&m10485_MI,
	&m17655_MI,
	&m10437_MI,
	&t1945_TI,
	&m10489_MI,
	&m17657_MI,
	&t1941_TI,
	&m10470_MI,
	&t1946_TI,
	&m10493_MI,
	&t14_TI,
	&m22741_MI,
	&m22740_MI,
	&m10409_MI,
	&m8256_MI,
	&m10400_MI,
	&t40_TI,
	&t40_TI,
	&m10394_MI,
	&t1939_TI,
	&m10440_MI,
	&m17658_MI,
	&m8256_MI,
	&m22740_MI,
	&t1936_TI,
	(void*)&t1890_0_0_0,
	&t1890_TI,
	(void*)&t1936_0_0_0,
	&t1938_TI,
	&m10451_MI,
	(void*)&t14_0_0_0,
	(void*)&t14_0_0_0,
	&t14_TI,
	&m10423_MI,
	&m16652_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1935_0_0_0;
extern Il2CppType t1935_1_0_0;
extern TypeInfo t14_TI;
struct t1935;
extern TypeInfo t1935_TI;
extern Il2CppGenericClass t1935_GC;
extern CustomAttributesCache t841__CustomAttributeCache;
extern CustomAttributesCache t841__CustomAttributeCache_U3CU3Ef__am$cacheB;
extern CustomAttributesCache t841__CustomAttributeCache_m7579;
TypeInfo t1935_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Dictionary`2", "System.Collections.Generic", t1935_MIs, t1935_PIs, t1935_FIs, NULL, &t14_TI, NULL, NULL, &t1935_TI, t1935_ITIs, t1935_VT, &t841__CustomAttributeCache, &t1935_TI, &t1935_0_0_0, &t1935_1_0_0, t1935_IOs, &t1935_GC, NULL, t1935_FDVs, NULL, t1935_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1935), 0, -1, sizeof(t1935_SFs), 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 41, 7, 16, 0, 0, 28, 8, 8};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3996_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
extern MethodInfo m23780_MI;
static PropertyInfo t3996____Count_PropertyInfo = 
{
	&t3996_TI, "Count", &m23780_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m23781_MI;
static PropertyInfo t3996____IsReadOnly_PropertyInfo = 
{
	&t3996_TI, "IsReadOnly", &m23781_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3996_PIs[] =
{
	&t3996____Count_PropertyInfo,
	&t3996____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t3996_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m23780_MI = 
{
	"get_Count", NULL, &t3996_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3996_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m23781_MI = 
{
	"get_IsReadOnly", NULL, &t3996_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1939_0_0_0;
static ParameterInfo t3996_m23782_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1939_0_0_0},
};
extern TypeInfo t3996_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t1939 (MethodInfo* method, void* obj, void** args);
MethodInfo m23782_MI = 
{
	"Add", NULL, &t3996_TI, &t25_0_0_0, RuntimeInvoker_t25_t1939, t3996_m23782_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3996_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m23783_MI = 
{
	"Clear", NULL, &t3996_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1939_0_0_0;
static ParameterInfo t3996_m23784_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1939_0_0_0},
};
extern TypeInfo t3996_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t1939 (MethodInfo* method, void* obj, void** args);
MethodInfo m23784_MI = 
{
	"Contains", NULL, &t3996_TI, &t26_0_0_0, RuntimeInvoker_t26_t1939, t3996_m23784_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1936_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t3996_m23785_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1936_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t3996_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m23785_MI = 
{
	"CopyTo", NULL, &t3996_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t3996_m23785_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1939_0_0_0;
static ParameterInfo t3996_m23786_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1939_0_0_0},
};
extern TypeInfo t3996_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t1939 (MethodInfo* method, void* obj, void** args);
MethodInfo m23786_MI = 
{
	"Remove", NULL, &t3996_TI, &t26_0_0_0, RuntimeInvoker_t26_t1939, t3996_m23786_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3996_MIs[] =
{
	&m23780_MI,
	&m23781_MI,
	&m23782_MI,
	&m23783_MI,
	&m23784_MI,
	&m23785_MI,
	&m23786_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t3998_TI;
static TypeInfo* t3996_ITIs[] = 
{
	&t600_TI,
	&t3998_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3996_0_0_0;
extern Il2CppType t3996_1_0_0;
struct t3996;
extern TypeInfo t3996_TI;
extern Il2CppGenericClass t3996_GC;
TypeInfo t3996_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t3996_MIs, t3996_PIs, NULL, NULL, NULL, NULL, NULL, &t3996_TI, t3996_ITIs, NULL, &EmptyCustomAttributesCache, &t3996_TI, &t3996_0_0_0, &t3996_1_0_0, NULL, &t3996_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3998_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
extern TypeInfo t3998_TI;
extern Il2CppType t1940_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23787_MI = 
{
	"GetEnumerator", NULL, &t3998_TI, &t1940_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3998_MIs[] =
{
	&m23787_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t3998_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3998_0_0_0;
extern Il2CppType t3998_1_0_0;
struct t3998;
extern TypeInfo t3998_TI;
extern Il2CppGenericClass t3998_GC;
TypeInfo t3998_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t3998_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3998_TI, t3998_ITIs, NULL, &EmptyCustomAttributesCache, &t3998_TI, &t3998_0_0_0, &t3998_1_0_0, NULL, &t3998_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1940_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
extern MethodInfo m23788_MI;
static PropertyInfo t1940____Current_PropertyInfo = 
{
	&t1940_TI, "Current", &m23788_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1940_PIs[] =
{
	&t1940____Current_PropertyInfo,
	NULL
};
extern TypeInfo t1940_TI;
extern Il2CppType t1939_0_0_0;
extern void* RuntimeInvoker_t1939 (MethodInfo* method, void* obj, void** args);
MethodInfo m23788_MI = 
{
	"get_Current", NULL, &t1940_TI, &t1939_0_0_0, RuntimeInvoker_t1939, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1940_MIs[] =
{
	&m23788_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t1940_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1940_0_0_0;
extern Il2CppType t1940_1_0_0;
struct t1940;
extern TypeInfo t1940_TI;
extern Il2CppGenericClass t1940_GC;
TypeInfo t1940_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t1940_MIs, t1940_PIs, NULL, NULL, NULL, NULL, NULL, &t1940_TI, t1940_ITIs, NULL, &EmptyCustomAttributesCache, &t1940_TI, &t1940_0_0_0, &t1940_1_0_0, NULL, &t1940_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1939_TI;

extern TypeInfo t1939_TI;
extern TypeInfo t443_TI;
extern TypeInfo t33_TI;
extern TypeInfo t14_TI;
extern MethodInfo m10442_MI;
extern MethodInfo m10444_MI;
extern MethodInfo m10441_MI;
extern MethodInfo m72_MI;
extern MethodInfo m10443_MI;
extern MethodInfo m3448_MI;


extern MethodInfo m10440_MI;
 void m10440_gshared (t1939 * __this, t14 * p0, t14 * p1, MethodInfo* method)
{
	{
		(( void (*) (t1939 * __this, t14 * p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0)->method)(__this, p0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0));
		(( void (*) (t1939 * __this, t14 * p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1)->method)(__this, p1, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1));
		return;
	}
}
extern MethodInfo m10441_MI;
 t14 * m10441_gshared (t1939 * __this, MethodInfo* method)
{
	{
		t14 * L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m10442_MI;
 void m10442_gshared (t1939 * __this, t14 * p0, MethodInfo* method)
{
	{
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m10443_MI;
 t14 * m10443_gshared (t1939 * __this, MethodInfo* method)
{
	{
		t14 * L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m10444_MI;
 void m10444_gshared (t1939 * __this, t14 * p0, MethodInfo* method)
{
	{
		__this->f1 = p0;
		return;
	}
}
extern MethodInfo m10445_MI;
 t33* m10445_gshared (t1939 * __this, MethodInfo* method)
{
	t14 * V_0 = {0};
	t14 * V_1 = {0};
	int32_t G_B2_0 = 0;
	t443* G_B2_1 = {0};
	t443* G_B2_2 = {0};
	int32_t G_B1_0 = 0;
	t443* G_B1_1 = {0};
	t443* G_B1_2 = {0};
	t33* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	t443* G_B3_2 = {0};
	t443* G_B3_3 = {0};
	int32_t G_B5_0 = 0;
	t443* G_B5_1 = {0};
	t443* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	t443* G_B4_1 = {0};
	t443* G_B4_2 = {0};
	t33* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	t443* G_B6_2 = {0};
	t443* G_B6_3 = {0};
	{
		t443* L_0 = ((t443*)SZArrayNew(InitializedTypeInfo(&t443_TI), 5));
		ArrayElementTypeCheck (L_0, (t33*) &_stringLiteral174);
		*((t33**)(t33**)SZArrayLdElema(L_0, 0)) = (t33*)(t33*) &_stringLiteral174;
		t443* L_1 = L_0;
		t14 * L_2 = (( t14 * (*) (t1939 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2));
		t14 * L_3 = L_2;
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!((t14 *)L_3))
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0033;
		}
	}
	{
		t14 * L_4 = (( t14 * (*) (t1939 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2));
		V_0 = L_4;
		t33* L_5 = (t33*)VirtFuncInvoker0< t33* >::Invoke(&m72_MI, (*(&V_0)));
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0038;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t33_TI));
		G_B3_0 = (((t33_SFs*)(&t33_TI)->static_fields)->f2);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0038:
	{
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((t33**)(t33**)SZArrayLdElema(G_B3_2, G_B3_1)) = (t33*)G_B3_0;
		t443* L_6 = G_B3_3;
		ArrayElementTypeCheck (L_6, (t33*) &_stringLiteral183);
		*((t33**)(t33**)SZArrayLdElema(L_6, 2)) = (t33*)(t33*) &_stringLiteral183;
		t443* L_7 = L_6;
		t14 * L_8 = (( t14 * (*) (t1939 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4));
		t14 * L_9 = L_8;
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
		if (!((t14 *)L_9))
		{
			G_B5_0 = 3;
			G_B5_1 = L_7;
			G_B5_2 = L_7;
			goto IL_0066;
		}
	}
	{
		t14 * L_10 = (( t14 * (*) (t1939 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4));
		V_1 = L_10;
		t33* L_11 = (t33*)VirtFuncInvoker0< t33* >::Invoke(&m72_MI, (*(&V_1)));
		G_B6_0 = L_11;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_006b;
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t33_TI));
		G_B6_0 = (((t33_SFs*)(&t33_TI)->static_fields)->f2);
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_006b:
	{
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		*((t33**)(t33**)SZArrayLdElema(G_B6_2, G_B6_1)) = (t33*)G_B6_0;
		t443* L_12 = G_B6_3;
		ArrayElementTypeCheck (L_12, (t33*) &_stringLiteral175);
		*((t33**)(t33**)SZArrayLdElema(L_12, 4)) = (t33*)(t33*) &_stringLiteral175;
		IL2CPP_RUNTIME_CLASS_INIT((&t33_TI));
		t33* L_13 = m3448(NULL, L_12, &m3448_MI);
		return L_13;
	}
}
// Metadata Definition System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
extern Il2CppType t14_0_0_1;
FieldInfo t1939_f0_FieldInfo = 
{
	"key", &t14_0_0_1, &t1939_TI, offsetof(t1939, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t14_0_0_1;
FieldInfo t1939_f1_FieldInfo = 
{
	"value", &t14_0_0_1, &t1939_TI, offsetof(t1939, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t1939_FIs[] =
{
	&t1939_f0_FieldInfo,
	&t1939_f1_FieldInfo,
	NULL
};
extern MethodInfo m10441_MI;
extern MethodInfo m10442_MI;
static PropertyInfo t1939____Key_PropertyInfo = 
{
	&t1939_TI, "Key", &m10441_MI, &m10442_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10443_MI;
extern MethodInfo m10444_MI;
static PropertyInfo t1939____Value_PropertyInfo = 
{
	&t1939_TI, "Value", &m10443_MI, &m10444_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1939_PIs[] =
{
	&t1939____Key_PropertyInfo,
	&t1939____Value_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t1939_m10440_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1939_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10440_MI = 
{
	".ctor", (methodPointerType)&m10440_gshared, &t1939_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t14, t1939_m10440_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1939_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10441_MI = 
{
	"get_Key", (methodPointerType)&m10441_gshared, &t1939_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1939_m10442_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1939_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10442_MI = 
{
	"set_Key", (methodPointerType)&m10442_gshared, &t1939_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1939_m10442_ParameterInfos, &EmptyCustomAttributesCache, 2177, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1939_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10443_MI = 
{
	"get_Value", (methodPointerType)&m10443_gshared, &t1939_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1939_m10444_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1939_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10444_MI = 
{
	"set_Value", (methodPointerType)&m10444_gshared, &t1939_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1939_m10444_ParameterInfos, &EmptyCustomAttributesCache, 2177, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1939_TI;
extern Il2CppType t33_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10445_MI = 
{
	"ToString", (methodPointerType)&m10445_gshared, &t1939_TI, &t33_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1939_MIs[] =
{
	&m10440_MI,
	&m10441_MI,
	&m10442_MI,
	&m10443_MI,
	&m10444_MI,
	&m10445_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m10445_MI;
static MethodInfo* t1939_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m10445_MI,
};
extern MethodInfo m10442_MI;
extern MethodInfo m10444_MI;
extern MethodInfo m10441_MI;
extern TypeInfo t14_TI;
extern MethodInfo m10443_MI;
extern TypeInfo t14_TI;
static void* t1939_RGCTXData[6] = 
{
	&m10442_MI,
	&m10444_MI,
	&m10441_MI,
	&t14_TI,
	&m10443_MI,
	&t14_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1939_0_0_0;
extern Il2CppType t1939_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t1939_TI;
extern Il2CppGenericClass t1939_GC;
extern CustomAttributesCache t846__CustomAttributeCache;
TypeInfo t1939_TI = 
{
	&g_mscorlib_dll_Image, NULL, "KeyValuePair`2", "System.Collections.Generic", t1939_MIs, t1939_PIs, t1939_FIs, NULL, &t122_TI, NULL, NULL, &t1939_TI, NULL, t1939_VT, &t846__CustomAttributeCache, &t1939_TI, &t1939_0_0_0, &t1939_1_0_0, NULL, &t1939_GC, NULL, NULL, NULL, t1939_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1939)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057033, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 2, 0, 0, 4, 0, 0};
#include "t1942.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1942_TI;
#include "t1942MD.h"

extern TypeInfo t1942_TI;
extern TypeInfo t1939_TI;
extern TypeInfo t1278_TI;
extern MethodInfo m10450_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m17643_MI;
struct t24;
 t1939  m17643 (t24 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17643_MI;


extern MethodInfo m10446_MI;
 void m10446 (t1942 * __this, t24 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m10447_MI;
 t14 * m10447 (t1942 * __this, MethodInfo* method){
	{
		t1939  L_0 = m10450(__this, &m10450_MI);
		t1939  L_1 = L_0;
		t14 * L_2 = Box(InitializedTypeInfo(&t1939_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m10448_MI;
 void m10448 (t1942 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m10449_MI;
 bool m10449 (t1942 * __this, MethodInfo* method){
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
extern MethodInfo m10450_MI;
 t1939  m10450 (t1942 * __this, MethodInfo* method){
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
		t1939  L_8 = m17643(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m17643_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
extern Il2CppType t24_0_0_1;
FieldInfo t1942_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t1942_TI, offsetof(t1942, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t1942_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t1942_TI, offsetof(t1942, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t1942_FIs[] =
{
	&t1942_f0_FieldInfo,
	&t1942_f1_FieldInfo,
	NULL
};
extern MethodInfo m10447_MI;
static PropertyInfo t1942____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1942_TI, "System.Collections.IEnumerator.Current", &m10447_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10450_MI;
static PropertyInfo t1942____Current_PropertyInfo = 
{
	&t1942_TI, "Current", &m10450_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1942_PIs[] =
{
	&t1942____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1942____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t1942_m10446_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t1942_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10446_MI = 
{
	".ctor", (methodPointerType)&m10446, &t1942_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1942_m10446_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1942_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10447_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m10447, &t1942_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1942_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10448_MI = 
{
	"Dispose", (methodPointerType)&m10448, &t1942_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1942_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10449_MI = 
{
	"MoveNext", (methodPointerType)&m10449, &t1942_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1942_TI;
extern Il2CppType t1939_0_0_0;
extern void* RuntimeInvoker_t1939 (MethodInfo* method, void* obj, void** args);
MethodInfo m10450_MI = 
{
	"get_Current", (methodPointerType)&m10450, &t1942_TI, &t1939_0_0_0, RuntimeInvoker_t1939, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1942_MIs[] =
{
	&m10446_MI,
	&m10447_MI,
	&m10448_MI,
	&m10449_MI,
	&m10450_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m10447_MI;
extern MethodInfo m10449_MI;
extern MethodInfo m10448_MI;
extern MethodInfo m10450_MI;
static MethodInfo* t1942_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m10447_MI,
	&m10449_MI,
	&m10448_MI,
	&m10450_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t1940_TI;
static TypeInfo* t1942_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t1940_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t1940_TI;
static Il2CppInterfaceOffsetPair t1942_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t1940_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1942_0_0_0;
extern Il2CppType t1942_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t1942_TI;
extern Il2CppGenericClass t1942_GC;
extern TypeInfo t24_TI;
TypeInfo t1942_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1942_MIs, t1942_PIs, t1942_FIs, NULL, &t122_TI, NULL, &t24_TI, &t1942_TI, t1942_ITIs, t1942_VT, &EmptyCustomAttributesCache, &t1942_TI, &t1942_0_0_0, &t1942_1_0_0, t1942_IOs, &t1942_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1942)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3997_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
extern MethodInfo m23789_MI;
extern MethodInfo m23790_MI;
static PropertyInfo t3997____Item_PropertyInfo = 
{
	&t3997_TI, "Item", &m23789_MI, &m23790_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3997_PIs[] =
{
	&t3997____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1939_0_0_0;
static ParameterInfo t3997_m23791_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1939_0_0_0},
};
extern TypeInfo t3997_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t1939 (MethodInfo* method, void* obj, void** args);
MethodInfo m23791_MI = 
{
	"IndexOf", NULL, &t3997_TI, &t35_0_0_0, RuntimeInvoker_t35_t1939, t3997_m23791_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1939_0_0_0;
static ParameterInfo t3997_m23792_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1939_0_0_0},
};
extern TypeInfo t3997_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t1939 (MethodInfo* method, void* obj, void** args);
MethodInfo m23792_MI = 
{
	"Insert", NULL, &t3997_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t1939, t3997_m23792_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t3997_m23793_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t3997_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m23793_MI = 
{
	"RemoveAt", NULL, &t3997_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t3997_m23793_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t3997_m23789_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t3997_TI;
extern Il2CppType t1939_0_0_0;
extern void* RuntimeInvoker_t1939_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m23789_MI = 
{
	"get_Item", NULL, &t3997_TI, &t1939_0_0_0, RuntimeInvoker_t1939_t35, t3997_m23789_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t1939_0_0_0;
static ParameterInfo t3997_m23790_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1939_0_0_0},
};
extern TypeInfo t3997_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t1939 (MethodInfo* method, void* obj, void** args);
MethodInfo m23790_MI = 
{
	"set_Item", NULL, &t3997_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t1939, t3997_m23790_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3997_MIs[] =
{
	&m23791_MI,
	&m23792_MI,
	&m23793_MI,
	&m23789_MI,
	&m23790_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t3996_TI;
extern TypeInfo t3998_TI;
static TypeInfo* t3997_ITIs[] = 
{
	&t600_TI,
	&t3996_TI,
	&t3998_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3997_0_0_0;
extern Il2CppType t3997_1_0_0;
struct t3997;
extern TypeInfo t3997_TI;
extern Il2CppGenericClass t3997_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t3997_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t3997_MIs, t3997_PIs, NULL, NULL, NULL, NULL, NULL, &t3997_TI, t3997_ITIs, NULL, &t1409__CustomAttributeCache, &t3997_TI, &t3997_0_0_0, &t3997_1_0_0, NULL, &t3997_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5159_TI;



// Metadata Definition System.Collections.Generic.IDictionary`2<System.Object,System.Object>
extern Il2CppType t14_0_0_0;
static ParameterInfo t5159_m23794_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t5159_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23794_MI = 
{
	"Remove", NULL, &t5159_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t5159_m23794_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5159_MIs[] =
{
	&m23794_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t3996_TI;
extern TypeInfo t3998_TI;
static TypeInfo* t5159_ITIs[] = 
{
	&t600_TI,
	&t3996_TI,
	&t3998_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5159_0_0_0;
extern Il2CppType t5159_1_0_0;
struct t5159;
extern TypeInfo t5159_TI;
extern Il2CppGenericClass t5159_GC;
extern CustomAttributesCache t1469__CustomAttributeCache;
TypeInfo t5159_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IDictionary`2", "System.Collections.Generic", t5159_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5159_TI, t5159_ITIs, NULL, &t1469__CustomAttributeCache, &t5159_TI, &t5159_0_0_0, &t5159_1_0_0, NULL, &t5159_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1938_TI;

#include "t1943.h"
#include "t1944.h"
extern TypeInfo t1938_TI;
extern TypeInfo t651_TI;
extern TypeInfo t14_TI;
extern TypeInfo t1935_TI;
extern TypeInfo t35_TI;
extern TypeInfo t338_TI;
extern TypeInfo t345_TI;
extern TypeInfo t1943_TI;
extern TypeInfo t40_TI;
extern TypeInfo t25_TI;
extern TypeInfo t1944_TI;
#include "t1944MD.h"
#include "t1943MD.h"
extern MethodInfo m7415_MI;
extern MethodInfo m10394_MI;
extern MethodInfo m73_MI;
extern MethodInfo m2974_MI;
extern MethodInfo m7027_MI;
extern MethodInfo m10416_MI;
extern MethodInfo m10463_MI;
extern MethodInfo m10462_MI;
extern MethodInfo m10402_MI;
extern MethodInfo m10405_MI;
extern MethodInfo m10481_MI;
extern MethodInfo m17654_MI;
extern MethodInfo m17653_MI;
extern MethodInfo m10465_MI;
struct t1935;
 void m17654_gshared (t1935 * __this, t24 * p0, int32_t p1, t1944 * p2, MethodInfo* method);
#define m17654(__this, p0, p1, p2, method) (void)m17654_gshared((t1935 *)__this, (t24 *)p0, (int32_t)p1, (t1944 *)p2, method)
extern MethodInfo m17654_MI;
struct t1935;
 void m17653 (t1935 * __this, t40* p0, int32_t p1, t1944 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17653_MI;


extern MethodInfo m10451_MI;
 void m10451_gshared (t1938 * __this, t1935 * p0, MethodInfo* method)
{
	{
		m73(__this, &m73_MI);
		if (p0)
		{
			goto IL_0014;
		}
	}
	{
		t338 * L_0 = (t338 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t338_TI));
		m2974(L_0, (t33*) &_stringLiteral549, &m2974_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_0014:
	{
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m10452_MI;
 void m10452_gshared (t1938 * __this, t14 * p0, MethodInfo* method)
{
	{
		t345 * L_0 = (t345 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t345_TI));
		m7027(L_0, (t33*) &_stringLiteral550, &m7027_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m10453_MI;
 void m10453_gshared (t1938 * __this, MethodInfo* method)
{
	{
		t345 * L_0 = (t345 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t345_TI));
		m7027(L_0, (t33*) &_stringLiteral550, &m7027_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m10454_MI;
 bool m10454_gshared (t1938 * __this, t14 * p0, MethodInfo* method)
{
	{
		t1935 * L_0 = (__this->f0);
		bool L_1 = (( bool (*) (t1935 * __this, t14 * p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0)->method)(L_0, p0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0));
		return L_1;
	}
}
extern MethodInfo m10455_MI;
 bool m10455_gshared (t1938 * __this, t14 * p0, MethodInfo* method)
{
	{
		t345 * L_0 = (t345 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t345_TI));
		m7027(L_0, (t33*) &_stringLiteral550, &m7027_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m10456_MI;
 t14* m10456_gshared (t1938 * __this, MethodInfo* method)
{
	{
		t1943  L_0 = (( t1943  (*) (t1938 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1));
		t1943  L_1 = L_0;
		t14 * L_2 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 2), &L_1);
		return (t14*)L_2;
	}
}
extern MethodInfo m10457_MI;
 void m10457_gshared (t1938 * __this, t24 * p0, int32_t p1, MethodInfo* method)
{
	t40* V_0 = {0};
	{
		V_0 = ((t40*)IsInst(p0, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 3)));
		if (!V_0)
		{
			goto IL_0013;
		}
	}
	{
		VirtActionInvoker2< t40*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4), __this, V_0, p1);
		return;
	}

IL_0013:
	{
		t1935 * L_0 = (__this->f0);
		(( void (*) (t1935 * __this, t24 * p0, int32_t p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 5)->method)(L_0, p0, p1, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 5));
		t1935 * L_1 = (__this->f0);
		t77 L_2 = { IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6) };
		t1944 * L_3 = (t1944 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 7));
		(( void (*) (t1944 * __this, t14 * p0, t77 p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8)->method)(L_3, NULL, L_2, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8));
		(( void (*) (t1935 * __this, t24 * p0, int32_t p1, t1944 * p2, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 9)->method)(L_1, p0, p1, L_3, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 9));
		return;
	}
}
extern MethodInfo m10458_MI;
 t14 * m10458_gshared (t1938 * __this, MethodInfo* method)
{
	{
		t1943  L_0 = (( t1943  (*) (t1938 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1));
		t1943  L_1 = L_0;
		t14 * L_2 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 2), &L_1);
		return (t14 *)L_2;
	}
}
extern MethodInfo m10459_MI;
 bool m10459_gshared (t1938 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
extern MethodInfo m10460_MI;
 bool m10460_gshared (t1938 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m10461_MI;
 t14 * m10461_gshared (t1938 * __this, MethodInfo* method)
{
	{
		t1935 * L_0 = (__this->f0);
		t14 * L_1 = (t14 *)InterfaceFuncInvoker0< t14 * >::Invoke(&m7415_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m10462_MI;
 void m10462_gshared (t1938 * __this, t40* p0, int32_t p1, MethodInfo* method)
{
	{
		t1935 * L_0 = (__this->f0);
		(( void (*) (t1935 * __this, t24 * p0, int32_t p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 5)->method)(L_0, (t24 *)(t24 *)p0, p1, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 5));
		t1935 * L_1 = (__this->f0);
		t77 L_2 = { IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6) };
		t1944 * L_3 = (t1944 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 7));
		(( void (*) (t1944 * __this, t14 * p0, t77 p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8)->method)(L_3, NULL, L_2, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8));
		(( void (*) (t1935 * __this, t40* p0, int32_t p1, t1944 * p2, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 10)->method)(L_1, p0, p1, L_3, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 10));
		return;
	}
}
extern MethodInfo m10463_MI;
 t1943  m10463 (t1938 * __this, MethodInfo* method){
	{
		t1935 * L_0 = (__this->f0);
		t1943  L_1 = {0};
		m10465(&L_1, L_0, &m10465_MI);
		return L_1;
	}
}
extern MethodInfo m10464_MI;
 int32_t m10464_gshared (t1938 * __this, MethodInfo* method)
{
	{
		t1935 * L_0 = (__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 12), L_0);
		return L_1;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
extern Il2CppType t1935_0_0_1;
FieldInfo t1938_f0_FieldInfo = 
{
	"dictionary", &t1935_0_0_1, &t1938_TI, offsetof(t1938, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1938_FIs[] =
{
	&t1938_f0_FieldInfo,
	NULL
};
extern MethodInfo m10459_MI;
static PropertyInfo t1938____System_Collections_Generic_ICollectionU3CTValueU3E_IsReadOnly_PropertyInfo = 
{
	&t1938_TI, "System.Collections.Generic.ICollection<TValue>.IsReadOnly", &m10459_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10460_MI;
static PropertyInfo t1938____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t1938_TI, "System.Collections.ICollection.IsSynchronized", &m10460_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10461_MI;
static PropertyInfo t1938____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t1938_TI, "System.Collections.ICollection.SyncRoot", &m10461_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10464_MI;
static PropertyInfo t1938____Count_PropertyInfo = 
{
	&t1938_TI, "Count", &m10464_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1938_PIs[] =
{
	&t1938____System_Collections_Generic_ICollectionU3CTValueU3E_IsReadOnly_PropertyInfo,
	&t1938____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t1938____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t1938____Count_PropertyInfo,
	NULL
};
extern Il2CppType t1935_0_0_0;
static ParameterInfo t1938_m10451_ParameterInfos[] = 
{
	{"dictionary", 0, 134217728, &EmptyCustomAttributesCache, &t1935_0_0_0},
};
extern TypeInfo t1938_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10451_MI = 
{
	".ctor", (methodPointerType)&m10451_gshared, &t1938_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1938_m10451_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1938_m10452_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1938_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10452_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Add", (methodPointerType)&m10452_gshared, &t1938_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1938_m10452_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1938_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10453_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Clear", (methodPointerType)&m10453_gshared, &t1938_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 481, 0, 12, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1938_m10454_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1938_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10454_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Contains", (methodPointerType)&m10454_gshared, &t1938_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1938_m10454_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1938_m10455_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1938_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10455_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Remove", (methodPointerType)&m10455_gshared, &t1938_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1938_m10455_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1938_TI;
extern Il2CppType t346_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10456_MI = 
{
	"System.Collections.Generic.IEnumerable<TValue>.GetEnumerator", (methodPointerType)&m10456_gshared, &t1938_TI, &t346_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 481, 0, 16, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t24_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t1938_m10457_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1938_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10457_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m10457_gshared, &t1938_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t1938_m10457_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1938_TI;
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10458_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m10458_gshared, &t1938_TI, &t36_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1938_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10459_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.get_IsReadOnly", (methodPointerType)&m10459_gshared, &t1938_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1938_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10460_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m10460_gshared, &t1938_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1938_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10461_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m10461_gshared, &t1938_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t40_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t1938_m10462_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t40_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1938_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10462_MI = 
{
	"CopyTo", (methodPointerType)&m10462_gshared, &t1938_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t1938_m10462_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 14, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1938_TI;
extern Il2CppType t1943_0_0_0;
extern void* RuntimeInvoker_t1943 (MethodInfo* method, void* obj, void** args);
MethodInfo m10463_MI = 
{
	"GetEnumerator", (methodPointerType)&m10463, &t1938_TI, &t1943_0_0_0, RuntimeInvoker_t1943, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1938_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10464_MI = 
{
	"get_Count", (methodPointerType)&m10464_gshared, &t1938_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 2534, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1938_MIs[] =
{
	&m10451_MI,
	&m10452_MI,
	&m10453_MI,
	&m10454_MI,
	&m10455_MI,
	&m10456_MI,
	&m10457_MI,
	&m10458_MI,
	&m10459_MI,
	&m10460_MI,
	&m10461_MI,
	&m10462_MI,
	&m10463_MI,
	&m10464_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m10458_MI;
extern MethodInfo m10464_MI;
extern MethodInfo m10460_MI;
extern MethodInfo m10461_MI;
extern MethodInfo m10457_MI;
extern MethodInfo m10464_MI;
extern MethodInfo m10459_MI;
extern MethodInfo m10452_MI;
extern MethodInfo m10453_MI;
extern MethodInfo m10454_MI;
extern MethodInfo m10462_MI;
extern MethodInfo m10455_MI;
extern MethodInfo m10456_MI;
static MethodInfo* t1938_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m10458_MI,
	&m10464_MI,
	&m10460_MI,
	&m10461_MI,
	&m10457_MI,
	&m10464_MI,
	&m10459_MI,
	&m10452_MI,
	&m10453_MI,
	&m10454_MI,
	&m10462_MI,
	&m10455_MI,
	&m10456_MI,
};
extern TypeInfo t600_TI;
extern TypeInfo t651_TI;
extern TypeInfo t1655_TI;
extern TypeInfo t1656_TI;
static TypeInfo* t1938_ITIs[] = 
{
	&t600_TI,
	&t651_TI,
	&t1655_TI,
	&t1656_TI,
};
extern TypeInfo t600_TI;
extern TypeInfo t651_TI;
extern TypeInfo t1655_TI;
extern TypeInfo t1656_TI;
static Il2CppInterfaceOffsetPair t1938_IOs[] = 
{
	{ &t600_TI, 4},
	{ &t651_TI, 5},
	{ &t1655_TI, 9},
	{ &t1656_TI, 16},
};
extern MethodInfo m10416_MI;
extern MethodInfo m10463_MI;
extern TypeInfo t1943_TI;
extern TypeInfo t40_TI;
extern MethodInfo m10462_MI;
extern MethodInfo m10402_MI;
extern MethodInfo m10405_MI;
extern TypeInfo t1944_TI;
extern MethodInfo m10481_MI;
extern MethodInfo m17654_MI;
extern MethodInfo m17653_MI;
extern MethodInfo m10465_MI;
extern MethodInfo m10394_MI;
static void* t1938_RGCTXData[13] = 
{
	&m10416_MI,
	&m10463_MI,
	&t1943_TI,
	&t40_TI,
	&m10462_MI,
	&m10402_MI,
	&m10405_MI,
	&t1944_TI,
	&m10481_MI,
	&m17654_MI,
	&m17653_MI,
	&m10465_MI,
	&m10394_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1938_0_0_0;
extern Il2CppType t1938_1_0_0;
extern TypeInfo t14_TI;
struct t1938;
extern TypeInfo t1938_TI;
extern Il2CppGenericClass t1938_GC;
extern TypeInfo t841_TI;
extern CustomAttributesCache t839__CustomAttributeCache;
TypeInfo t1938_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ValueCollection", "", t1938_MIs, t1938_PIs, t1938_FIs, NULL, &t14_TI, NULL, &t841_TI, &t1938_TI, t1938_ITIs, t1938_VT, &t839__CustomAttributeCache, &t1938_TI, &t1938_0_0_0, &t1938_1_0_0, t1938_IOs, &t1938_GC, NULL, NULL, NULL, t1938_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1938), 0, -1, 0, 0, -1, 1057026, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 14, 4, 1, 0, 0, 17, 4, 4};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1943_TI;

extern TypeInfo t1943_TI;
extern TypeInfo t14_TI;
extern TypeInfo t1941_TI;
extern TypeInfo t25_TI;
extern TypeInfo t26_TI;
extern MethodInfo m10477_MI;
extern MethodInfo m10443_MI;
extern MethodInfo m10439_MI;
extern MethodInfo m10480_MI;
extern MethodInfo m10474_MI;


extern MethodInfo m10465_MI;
 void m10465_gshared (t1943 * __this, t1935 * p0, MethodInfo* method)
{
	{
		t1941  L_0 = (( t1941  (*) (t1935 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0)->method)(p0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0));
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m10466_MI;
 t14 * m10466_gshared (t1943 * __this, MethodInfo* method)
{
	{
		t1941 * L_0 = &(__this->f0);
		t14 * L_1 = (( t14 * (*) (t1941 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1));
		t14 * L_2 = L_1;
		return ((t14 *)L_2);
	}
}
extern MethodInfo m10467_MI;
 void m10467_gshared (t1943 * __this, MethodInfo* method)
{
	{
		t1941 * L_0 = &(__this->f0);
		(( void (*) (t1941 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 3)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 3));
		return;
	}
}
extern MethodInfo m10468_MI;
 bool m10468_gshared (t1943 * __this, MethodInfo* method)
{
	{
		t1941 * L_0 = &(__this->f0);
		bool L_1 = (( bool (*) (t1941 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4));
		return L_1;
	}
}
extern MethodInfo m10469_MI;
 t14 * m10469_gshared (t1943 * __this, MethodInfo* method)
{
	{
		t1941 * L_0 = &(__this->f0);
		t1939 * L_1 = &(L_0->f3);
		t14 * L_2 = (( t14 * (*) (t1939 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 5)->method)(L_1, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 5));
		return L_2;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>
extern Il2CppType t1941_0_0_1;
FieldInfo t1943_f0_FieldInfo = 
{
	"host_enumerator", &t1941_0_0_1, &t1943_TI, offsetof(t1943, f0) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t1943_FIs[] =
{
	&t1943_f0_FieldInfo,
	NULL
};
extern MethodInfo m10466_MI;
static PropertyInfo t1943____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1943_TI, "System.Collections.IEnumerator.Current", &m10466_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10469_MI;
static PropertyInfo t1943____Current_PropertyInfo = 
{
	&t1943_TI, "Current", &m10469_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1943_PIs[] =
{
	&t1943____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1943____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1935_0_0_0;
static ParameterInfo t1943_m10465_ParameterInfos[] = 
{
	{"host", 0, 134217728, &EmptyCustomAttributesCache, &t1935_0_0_0},
};
extern TypeInfo t1943_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10465_MI = 
{
	".ctor", (methodPointerType)&m10465_gshared, &t1943_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1943_m10465_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1943_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10466_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m10466_gshared, &t1943_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1943_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10467_MI = 
{
	"Dispose", (methodPointerType)&m10467_gshared, &t1943_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1943_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10468_MI = 
{
	"MoveNext", (methodPointerType)&m10468_gshared, &t1943_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1943_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10469_MI = 
{
	"get_Current", (methodPointerType)&m10469_gshared, &t1943_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1943_MIs[] =
{
	&m10465_MI,
	&m10466_MI,
	&m10467_MI,
	&m10468_MI,
	&m10469_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m10466_MI;
extern MethodInfo m10468_MI;
extern MethodInfo m10467_MI;
extern MethodInfo m10469_MI;
static MethodInfo* t1943_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m10466_MI,
	&m10468_MI,
	&m10467_MI,
	&m10469_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t346_TI;
static TypeInfo* t1943_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t346_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t346_TI;
static Il2CppInterfaceOffsetPair t1943_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t346_TI, 7},
};
extern MethodInfo m10439_MI;
extern MethodInfo m10477_MI;
extern TypeInfo t14_TI;
extern MethodInfo m10480_MI;
extern MethodInfo m10474_MI;
extern MethodInfo m10443_MI;
static void* t1943_RGCTXData[6] = 
{
	&m10439_MI,
	&m10477_MI,
	&t14_TI,
	&m10480_MI,
	&m10474_MI,
	&m10443_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1943_0_0_0;
extern Il2CppType t1943_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t1943_TI;
extern Il2CppGenericClass t1943_GC;
extern TypeInfo t839_TI;
TypeInfo t1943_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t1943_MIs, t1943_PIs, t1943_FIs, NULL, &t122_TI, NULL, &t839_TI, &t1943_TI, t1943_ITIs, t1943_VT, &EmptyCustomAttributesCache, &t1943_TI, &t1943_0_0_0, &t1943_1_0_0, t1943_IOs, &t1943_GC, NULL, NULL, NULL, t1943_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1943)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 1, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1941_TI;

extern TypeInfo t1941_TI;
extern TypeInfo t1939_TI;
extern TypeInfo t14_TI;
extern TypeInfo t836_TI;
extern TypeInfo t1935_TI;
extern TypeInfo t834_TI;
extern TypeInfo t1295_TI;
extern TypeInfo t1278_TI;
extern MethodInfo m10479_MI;
extern MethodInfo m10441_MI;
extern MethodInfo m10443_MI;
extern MethodInfo m4371_MI;
extern MethodInfo m10476_MI;
extern MethodInfo m10478_MI;
extern MethodInfo m10440_MI;
extern MethodInfo m7129_MI;
extern MethodInfo m6925_MI;


extern MethodInfo m10470_MI;
 void m10470_gshared (t1941 * __this, t1935 * p0, MethodInfo* method)
{
	{
		__this->f0 = p0;
		int32_t L_0 = (p0->f14);
		__this->f2 = L_0;
		return;
	}
}
extern MethodInfo m10471_MI;
 t14 * m10471_gshared (t1941 * __this, MethodInfo* method)
{
	{
		(( void (*) (t1941 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0));
		t1939  L_0 = (__this->f3);
		t1939  L_1 = L_0;
		t14 * L_2 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 1), &L_1);
		return L_2;
	}
}
extern MethodInfo m10472_MI;
 t836  m10472_gshared (t1941 * __this, MethodInfo* method)
{
	{
		(( void (*) (t1941 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0));
		t1939 * L_0 = &(__this->f3);
		t14 * L_1 = (( t14 * (*) (t1939 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2));
		t14 * L_2 = L_1;
		t1939 * L_3 = &(__this->f3);
		t14 * L_4 = (( t14 * (*) (t1939 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4)->method)(L_3, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4));
		t14 * L_5 = L_4;
		t836  L_6 = {0};
		m4371(&L_6, ((t14 *)L_2), ((t14 *)L_5), &m4371_MI);
		return L_6;
	}
}
extern MethodInfo m10473_MI;
 t14 * m10473_gshared (t1941 * __this, MethodInfo* method)
{
	{
		t14 * L_0 = (( t14 * (*) (t1941 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6));
		t14 * L_1 = L_0;
		return ((t14 *)L_1);
	}
}
extern MethodInfo m10474_MI;
 bool m10474_gshared (t1941 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (t1941 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 7)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 7));
		int32_t L_0 = (__this->f1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		goto IL_0072;
	}

IL_0013:
	{
		int32_t L_1 = (__this->f1);
		int32_t L_2 = L_1;
		V_1 = L_2;
		__this->f1 = ((int32_t)(L_2+1));
		V_0 = V_1;
		t1935 * L_3 = (__this->f0);
		t1459* L_4 = (L_3->f5);
		int32_t L_5 = (((t834 *)(t834 *)SZArrayLdElema(L_4, V_0))->f0);
		if (!((int32_t)(L_5&((int32_t)-2147483648))))
		{
			goto IL_0072;
		}
	}
	{
		t1935 * L_6 = (__this->f0);
		t40* L_7 = (L_6->f6);
		t1935 * L_8 = (__this->f0);
		t40* L_9 = (L_8->f7);
		t1939  L_10 = {0};
		(( void (*) (t1939 * __this, t14 * p0, t14 * p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8)->method)(&L_10, (*(t14 **)(t14 **)SZArrayLdElema(L_7, V_0)), (*(t14 **)(t14 **)SZArrayLdElema(L_9, V_0)), IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8));
		__this->f3 = L_10;
		return 1;
	}

IL_0072:
	{
		int32_t L_11 = (__this->f1);
		t1935 * L_12 = (__this->f0);
		int32_t L_13 = (L_12->f8);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0013;
		}
	}
	{
		__this->f1 = (-1);
		return 0;
	}
}
extern MethodInfo m10475_MI;
 t1939  m10475 (t1941 * __this, MethodInfo* method){
	{
		t1939  L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m10476_MI;
 t14 * m10476_gshared (t1941 * __this, MethodInfo* method)
{
	{
		(( void (*) (t1941 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0));
		t1939 * L_0 = &(__this->f3);
		t14 * L_1 = (( t14 * (*) (t1939 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2));
		return L_1;
	}
}
extern MethodInfo m10477_MI;
 t14 * m10477_gshared (t1941 * __this, MethodInfo* method)
{
	{
		(( void (*) (t1941 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0));
		t1939 * L_0 = &(__this->f3);
		t14 * L_1 = (( t14 * (*) (t1939 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4));
		return L_1;
	}
}
extern MethodInfo m10478_MI;
 void m10478_gshared (t1941 * __this, MethodInfo* method)
{
	{
		t1935 * L_0 = (__this->f0);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		t1295 * L_1 = (t1295 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1295_TI));
		m7129(L_1, (t33*)NULL, &m7129_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_000f:
	{
		t1935 * L_2 = (__this->f0);
		int32_t L_3 = (L_2->f14);
		int32_t L_4 = (__this->f2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_002d;
		}
	}
	{
		t1278 * L_5 = (t1278 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1278_TI));
		m6925(L_5, (t33*) &_stringLiteral547, &m6925_MI);
		il2cpp_codegen_raise_exception (L_5);
	}

IL_002d:
	{
		return;
	}
}
extern MethodInfo m10479_MI;
 void m10479_gshared (t1941 * __this, MethodInfo* method)
{
	{
		(( void (*) (t1941 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 7)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 7));
		int32_t L_0 = (__this->f1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		t1278 * L_1 = (t1278 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1278_TI));
		m6925(L_1, (t33*) &_stringLiteral548, &m6925_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_001a:
	{
		return;
	}
}
extern MethodInfo m10480_MI;
 void m10480_gshared (t1941 * __this, MethodInfo* method)
{
	{
		__this->f0 = (t1935 *)NULL;
		return;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
extern Il2CppType t1935_0_0_1;
FieldInfo t1941_f0_FieldInfo = 
{
	"dictionary", &t1935_0_0_1, &t1941_TI, offsetof(t1941, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t1941_f1_FieldInfo = 
{
	"next", &t35_0_0_1, &t1941_TI, offsetof(t1941, f1) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t1941_f2_FieldInfo = 
{
	"stamp", &t35_0_0_1, &t1941_TI, offsetof(t1941, f2) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t1939_0_0_3;
FieldInfo t1941_f3_FieldInfo = 
{
	"current", &t1939_0_0_3, &t1941_TI, offsetof(t1941, f3) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t1941_FIs[] =
{
	&t1941_f0_FieldInfo,
	&t1941_f1_FieldInfo,
	&t1941_f2_FieldInfo,
	&t1941_f3_FieldInfo,
	NULL
};
extern MethodInfo m10471_MI;
static PropertyInfo t1941____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1941_TI, "System.Collections.IEnumerator.Current", &m10471_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10472_MI;
static PropertyInfo t1941____System_Collections_IDictionaryEnumerator_Entry_PropertyInfo = 
{
	&t1941_TI, "System.Collections.IDictionaryEnumerator.Entry", &m10472_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10473_MI;
static PropertyInfo t1941____System_Collections_IDictionaryEnumerator_Key_PropertyInfo = 
{
	&t1941_TI, "System.Collections.IDictionaryEnumerator.Key", &m10473_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10475_MI;
static PropertyInfo t1941____Current_PropertyInfo = 
{
	&t1941_TI, "Current", &m10475_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10476_MI;
static PropertyInfo t1941____CurrentKey_PropertyInfo = 
{
	&t1941_TI, "CurrentKey", &m10476_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10477_MI;
static PropertyInfo t1941____CurrentValue_PropertyInfo = 
{
	&t1941_TI, "CurrentValue", &m10477_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1941_PIs[] =
{
	&t1941____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1941____System_Collections_IDictionaryEnumerator_Entry_PropertyInfo,
	&t1941____System_Collections_IDictionaryEnumerator_Key_PropertyInfo,
	&t1941____Current_PropertyInfo,
	&t1941____CurrentKey_PropertyInfo,
	&t1941____CurrentValue_PropertyInfo,
	NULL
};
extern Il2CppType t1935_0_0_0;
static ParameterInfo t1941_m10470_ParameterInfos[] = 
{
	{"dictionary", 0, 134217728, &EmptyCustomAttributesCache, &t1935_0_0_0},
};
extern TypeInfo t1941_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10470_MI = 
{
	".ctor", (methodPointerType)&m10470_gshared, &t1941_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1941_m10470_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1941_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10471_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m10471_gshared, &t1941_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1941_TI;
extern Il2CppType t836_0_0_0;
extern void* RuntimeInvoker_t836 (MethodInfo* method, void* obj, void** args);
MethodInfo m10472_MI = 
{
	"System.Collections.IDictionaryEnumerator.get_Entry", (methodPointerType)&m10472_gshared, &t1941_TI, &t836_0_0_0, RuntimeInvoker_t836, NULL, &EmptyCustomAttributesCache, 2529, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1941_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10473_MI = 
{
	"System.Collections.IDictionaryEnumerator.get_Key", (methodPointerType)&m10473_gshared, &t1941_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1941_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10474_MI = 
{
	"MoveNext", (methodPointerType)&m10474_gshared, &t1941_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1941_TI;
extern Il2CppType t1939_0_0_0;
extern void* RuntimeInvoker_t1939 (MethodInfo* method, void* obj, void** args);
MethodInfo m10475_MI = 
{
	"get_Current", (methodPointerType)&m10475, &t1941_TI, &t1939_0_0_0, RuntimeInvoker_t1939, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1941_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10476_MI = 
{
	"get_CurrentKey", (methodPointerType)&m10476_gshared, &t1941_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1941_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10477_MI = 
{
	"get_CurrentValue", (methodPointerType)&m10477_gshared, &t1941_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1941_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10478_MI = 
{
	"VerifyState", (methodPointerType)&m10478_gshared, &t1941_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1941_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10479_MI = 
{
	"VerifyCurrent", (methodPointerType)&m10479_gshared, &t1941_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1941_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10480_MI = 
{
	"Dispose", (methodPointerType)&m10480_gshared, &t1941_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1941_MIs[] =
{
	&m10470_MI,
	&m10471_MI,
	&m10472_MI,
	&m10473_MI,
	&m10474_MI,
	&m10475_MI,
	&m10476_MI,
	&m10477_MI,
	&m10478_MI,
	&m10479_MI,
	&m10480_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m10471_MI;
extern MethodInfo m10474_MI;
extern MethodInfo m10480_MI;
extern MethodInfo m10475_MI;
extern MethodInfo m10472_MI;
extern MethodInfo m10473_MI;
static MethodInfo* t1941_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m10471_MI,
	&m10474_MI,
	&m10480_MI,
	&m10475_MI,
	&m10472_MI,
	&m10473_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t1940_TI;
extern TypeInfo t842_TI;
static TypeInfo* t1941_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t1940_TI,
	&t842_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t1940_TI;
extern TypeInfo t842_TI;
static Il2CppInterfaceOffsetPair t1941_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t1940_TI, 7},
	{ &t842_TI, 8},
};
extern MethodInfo m10479_MI;
extern TypeInfo t1939_TI;
extern MethodInfo m10441_MI;
extern TypeInfo t14_TI;
extern MethodInfo m10443_MI;
extern TypeInfo t14_TI;
extern MethodInfo m10476_MI;
extern MethodInfo m10478_MI;
extern MethodInfo m10440_MI;
static void* t1941_RGCTXData[9] = 
{
	&m10479_MI,
	&t1939_TI,
	&m10441_MI,
	&t14_TI,
	&m10443_MI,
	&t14_TI,
	&m10476_MI,
	&m10478_MI,
	&m10440_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1941_0_0_0;
extern Il2CppType t1941_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t1941_TI;
extern Il2CppGenericClass t1941_GC;
extern TypeInfo t841_TI;
TypeInfo t1941_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t1941_MIs, t1941_PIs, t1941_FIs, NULL, &t122_TI, NULL, &t841_TI, &t1941_TI, t1941_ITIs, t1941_VT, &EmptyCustomAttributesCache, &t1941_TI, &t1941_0_0_0, &t1941_1_0_0, t1941_IOs, &t1941_GC, NULL, NULL, NULL, t1941_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1941)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 11, 6, 4, 0, 0, 10, 4, 4};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1944_TI;



extern MethodInfo m10481_MI;
 void m10481_gshared (t1944 * __this, t14 * p0, t77 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m10482_MI;
 t14 * m10482_gshared (t1944 * __this, t14 * p0, t14 * p1, MethodInfo* method)
{
	typedef  t14 * (*FunctionPointerType) (t14 * __this, t14 * p0, t14 * p1, MethodInfo* method);
	if (__this->f9)
		m10482((t1944 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m10483_MI;
 t14 * m10483_gshared (t1944 * __this, t14 * p0, t14 * p1, t76 * p2, t14 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t14 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m10484_MI;
 t14 * m10484_gshared (t1944 * __this, t14 * p0, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return (t14 *)__result;
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
extern Il2CppType t14_0_0_0;
extern Il2CppType t77_0_0_0;
static ParameterInfo t1944_m10481_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t77_0_0_0},
};
extern TypeInfo t1944_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t77 (MethodInfo* method, void* obj, void** args);
MethodInfo m10481_MI = 
{
	".ctor", (methodPointerType)&m10481_gshared, &t1944_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t77, t1944_m10481_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t1944_m10482_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1944_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10482_MI = 
{
	"Invoke", (methodPointerType)&m10482_gshared, &t1944_TI, &t14_0_0_0, RuntimeInvoker_t14_t14_t14, t1944_m10482_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t14_0_0_0;
extern Il2CppType t76_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t1944_m10483_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t76_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1944_TI;
extern Il2CppType t75_0_0_0;
extern void* RuntimeInvoker_t14_t14_t14_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10483_MI = 
{
	"BeginInvoke", (methodPointerType)&m10483_gshared, &t1944_TI, &t75_0_0_0, RuntimeInvoker_t14_t14_t14_t14_t14, t1944_m10483_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t75_0_0_0;
static ParameterInfo t1944_m10484_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t75_0_0_0},
};
extern TypeInfo t1944_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10484_MI = 
{
	"EndInvoke", (methodPointerType)&m10484_gshared, &t1944_TI, &t14_0_0_0, RuntimeInvoker_t14_t14, t1944_m10484_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1944_MIs[] =
{
	&m10481_MI,
	&m10482_MI,
	&m10483_MI,
	&m10484_MI,
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
extern MethodInfo m10482_MI;
extern MethodInfo m10483_MI;
extern MethodInfo m10484_MI;
static MethodInfo* t1944_VT[] =
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
	&m10482_MI,
	&m10483_MI,
	&m10484_MI,
};
extern TypeInfo t374_TI;
extern TypeInfo t375_TI;
static Il2CppInterfaceOffsetPair t1944_IOs[] = 
{
	{ &t374_TI, 4},
	{ &t375_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1944_0_0_0;
extern Il2CppType t1944_1_0_0;
extern TypeInfo t211_TI;
struct t1944;
extern TypeInfo t1944_TI;
extern Il2CppGenericClass t1944_GC;
extern TypeInfo t841_TI;
TypeInfo t1944_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t1944_MIs, NULL, NULL, NULL, &t211_TI, NULL, &t841_TI, &t1944_TI, NULL, t1944_VT, &EmptyCustomAttributesCache, &t1944_TI, &t1944_0_0_0, &t1944_1_0_0, t1944_IOs, &t1944_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1944), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1937_TI;



extern MethodInfo m10485_MI;
 void m10485 (t1937 * __this, t14 * p0, t77 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m10486_MI;
 t836  m10486 (t1937 * __this, t14 * p0, t14 * p1, MethodInfo* method){
	typedef  t836  (*FunctionPointerType) (t14 * __this, t14 * p0, t14 * p1, MethodInfo* method);
	if (__this->f9)
		m10486((t1937 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m10487_MI;
 t14 * m10487 (t1937 * __this, t14 * p0, t14 * p1, t76 * p2, t14 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t14 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m10488_MI;
 t836  m10488 (t1937 * __this, t14 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t836 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
extern Il2CppType t14_0_0_0;
extern Il2CppType t77_0_0_0;
static ParameterInfo t1937_m10485_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t77_0_0_0},
};
extern TypeInfo t1937_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t77 (MethodInfo* method, void* obj, void** args);
MethodInfo m10485_MI = 
{
	".ctor", (methodPointerType)&m10485, &t1937_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t77, t1937_m10485_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t1937_m10486_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1937_TI;
extern Il2CppType t836_0_0_0;
extern void* RuntimeInvoker_t836_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10486_MI = 
{
	"Invoke", (methodPointerType)&m10486, &t1937_TI, &t836_0_0_0, RuntimeInvoker_t836_t14_t14, t1937_m10486_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t14_0_0_0;
extern Il2CppType t76_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t1937_m10487_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t76_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1937_TI;
extern Il2CppType t75_0_0_0;
extern void* RuntimeInvoker_t14_t14_t14_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10487_MI = 
{
	"BeginInvoke", (methodPointerType)&m10487, &t1937_TI, &t75_0_0_0, RuntimeInvoker_t14_t14_t14_t14_t14, t1937_m10487_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t75_0_0_0;
static ParameterInfo t1937_m10488_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t75_0_0_0},
};
extern TypeInfo t1937_TI;
extern Il2CppType t836_0_0_0;
extern void* RuntimeInvoker_t836_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10488_MI = 
{
	"EndInvoke", (methodPointerType)&m10488, &t1937_TI, &t836_0_0_0, RuntimeInvoker_t836_t14, t1937_m10488_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1937_MIs[] =
{
	&m10485_MI,
	&m10486_MI,
	&m10487_MI,
	&m10488_MI,
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
extern MethodInfo m10486_MI;
extern MethodInfo m10487_MI;
extern MethodInfo m10488_MI;
static MethodInfo* t1937_VT[] =
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
	&m10486_MI,
	&m10487_MI,
	&m10488_MI,
};
extern TypeInfo t374_TI;
extern TypeInfo t375_TI;
static Il2CppInterfaceOffsetPair t1937_IOs[] = 
{
	{ &t374_TI, 4},
	{ &t375_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1937_0_0_0;
extern Il2CppType t1937_1_0_0;
extern TypeInfo t211_TI;
struct t1937;
extern TypeInfo t1937_TI;
extern Il2CppGenericClass t1937_GC;
extern TypeInfo t841_TI;
TypeInfo t1937_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t1937_MIs, NULL, NULL, NULL, &t211_TI, NULL, &t841_TI, &t1937_TI, NULL, t1937_VT, &EmptyCustomAttributesCache, &t1937_TI, &t1937_0_0_0, &t1937_1_0_0, t1937_IOs, &t1937_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1937), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1945_TI;



extern MethodInfo m10489_MI;
 void m10489 (t1945 * __this, t14 * p0, t77 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m10490_MI;
 t1939  m10490 (t1945 * __this, t14 * p0, t14 * p1, MethodInfo* method){
	typedef  t1939  (*FunctionPointerType) (t14 * __this, t14 * p0, t14 * p1, MethodInfo* method);
	if (__this->f9)
		m10490((t1945 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m10491_MI;
 t14 * m10491 (t1945 * __this, t14 * p0, t14 * p1, t76 * p2, t14 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t14 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m10492_MI;
 t1939  m10492 (t1945 * __this, t14 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t1939 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
extern Il2CppType t14_0_0_0;
extern Il2CppType t77_0_0_0;
static ParameterInfo t1945_m10489_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t77_0_0_0},
};
extern TypeInfo t1945_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t77 (MethodInfo* method, void* obj, void** args);
MethodInfo m10489_MI = 
{
	".ctor", (methodPointerType)&m10489, &t1945_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t77, t1945_m10489_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t1945_m10490_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1945_TI;
extern Il2CppType t1939_0_0_0;
extern void* RuntimeInvoker_t1939_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10490_MI = 
{
	"Invoke", (methodPointerType)&m10490, &t1945_TI, &t1939_0_0_0, RuntimeInvoker_t1939_t14_t14, t1945_m10490_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t14_0_0_0;
extern Il2CppType t76_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t1945_m10491_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t76_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1945_TI;
extern Il2CppType t75_0_0_0;
extern void* RuntimeInvoker_t14_t14_t14_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10491_MI = 
{
	"BeginInvoke", (methodPointerType)&m10491, &t1945_TI, &t75_0_0_0, RuntimeInvoker_t14_t14_t14_t14_t14, t1945_m10491_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t75_0_0_0;
static ParameterInfo t1945_m10492_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t75_0_0_0},
};
extern TypeInfo t1945_TI;
extern Il2CppType t1939_0_0_0;
extern void* RuntimeInvoker_t1939_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10492_MI = 
{
	"EndInvoke", (methodPointerType)&m10492, &t1945_TI, &t1939_0_0_0, RuntimeInvoker_t1939_t14, t1945_m10492_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1945_MIs[] =
{
	&m10489_MI,
	&m10490_MI,
	&m10491_MI,
	&m10492_MI,
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
extern MethodInfo m10490_MI;
extern MethodInfo m10491_MI;
extern MethodInfo m10492_MI;
static MethodInfo* t1945_VT[] =
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
	&m10490_MI,
	&m10491_MI,
	&m10492_MI,
};
extern TypeInfo t374_TI;
extern TypeInfo t375_TI;
static Il2CppInterfaceOffsetPair t1945_IOs[] = 
{
	{ &t374_TI, 4},
	{ &t375_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1945_0_0_0;
extern Il2CppType t1945_1_0_0;
extern TypeInfo t211_TI;
struct t1945;
extern TypeInfo t1945_TI;
extern Il2CppGenericClass t1945_GC;
extern TypeInfo t841_TI;
TypeInfo t1945_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t1945_MIs, NULL, NULL, NULL, &t211_TI, NULL, &t841_TI, &t1945_TI, NULL, t1945_VT, &EmptyCustomAttributesCache, &t1945_TI, &t1945_0_0_0, &t1945_1_0_0, t1945_IOs, &t1945_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1945), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1946_TI;

extern TypeInfo t1946_TI;
extern TypeInfo t1941_TI;
extern TypeInfo t842_TI;
extern TypeInfo t836_TI;
extern TypeInfo t1939_TI;
extern TypeInfo t14_TI;
extern TypeInfo t26_TI;
extern MethodInfo m7725_MI;
extern MethodInfo m10475_MI;
extern MethodInfo m10441_MI;
extern MethodInfo m10495_MI;
extern MethodInfo m73_MI;
extern MethodInfo m10439_MI;
extern MethodInfo m10474_MI;


extern MethodInfo m10493_MI;
 void m10493_gshared (t1946 * __this, t1935 * p0, MethodInfo* method)
{
	{
		m73(__this, &m73_MI);
		t1941  L_0 = (( t1941  (*) (t1935 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0)->method)(p0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0));
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m10494_MI;
 bool m10494_gshared (t1946 * __this, MethodInfo* method)
{
	{
		t1941 * L_0 = &(__this->f0);
		bool L_1 = (( bool (*) (t1941 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1));
		return L_1;
	}
}
extern MethodInfo m10495_MI;
 t836  m10495_gshared (t1946 * __this, MethodInfo* method)
{
	{
		t1941  L_0 = (__this->f0);
		t1941  L_1 = L_0;
		t14 * L_2 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 2), &L_1);
		t836  L_3 = (t836 )InterfaceFuncInvoker0< t836  >::Invoke(&m7725_MI, L_2);
		return L_3;
	}
}
extern MethodInfo m10496_MI;
 t14 * m10496_gshared (t1946 * __this, MethodInfo* method)
{
	t1939  V_0 = {0};
	{
		t1941 * L_0 = &(__this->f0);
		t1939  L_1 = (( t1939  (*) (t1941 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 3)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 3));
		V_0 = L_1;
		t14 * L_2 = (( t14 * (*) (t1939 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4)->method)((&V_0), IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4));
		t14 * L_3 = L_2;
		return ((t14 *)L_3);
	}
}
extern MethodInfo m10497_MI;
 t14 * m10497_gshared (t1946 * __this, MethodInfo* method)
{
	{
		t836  L_0 = (t836 )VirtFuncInvoker0< t836  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6), __this);
		t836  L_1 = L_0;
		t14 * L_2 = Box(InitializedTypeInfo(&t836_TI), &L_1);
		return L_2;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
extern Il2CppType t1941_0_0_1;
FieldInfo t1946_f0_FieldInfo = 
{
	"host_enumerator", &t1941_0_0_1, &t1946_TI, offsetof(t1946, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1946_FIs[] =
{
	&t1946_f0_FieldInfo,
	NULL
};
extern MethodInfo m10495_MI;
static PropertyInfo t1946____Entry_PropertyInfo = 
{
	&t1946_TI, "Entry", &m10495_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10496_MI;
static PropertyInfo t1946____Key_PropertyInfo = 
{
	&t1946_TI, "Key", &m10496_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10497_MI;
static PropertyInfo t1946____Current_PropertyInfo = 
{
	&t1946_TI, "Current", &m10497_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1946_PIs[] =
{
	&t1946____Entry_PropertyInfo,
	&t1946____Key_PropertyInfo,
	&t1946____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1935_0_0_0;
static ParameterInfo t1946_m10493_ParameterInfos[] = 
{
	{"host", 0, 134217728, &EmptyCustomAttributesCache, &t1935_0_0_0},
};
extern TypeInfo t1946_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10493_MI = 
{
	".ctor", (methodPointerType)&m10493_gshared, &t1946_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1946_m10493_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1946_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10494_MI = 
{
	"MoveNext", (methodPointerType)&m10494_gshared, &t1946_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1946_TI;
extern Il2CppType t836_0_0_0;
extern void* RuntimeInvoker_t836 (MethodInfo* method, void* obj, void** args);
MethodInfo m10495_MI = 
{
	"get_Entry", (methodPointerType)&m10495_gshared, &t1946_TI, &t836_0_0_0, RuntimeInvoker_t836, NULL, &EmptyCustomAttributesCache, 2534, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1946_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10496_MI = 
{
	"get_Key", (methodPointerType)&m10496_gshared, &t1946_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1946_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10497_MI = 
{
	"get_Current", (methodPointerType)&m10497_gshared, &t1946_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1946_MIs[] =
{
	&m10493_MI,
	&m10494_MI,
	&m10495_MI,
	&m10496_MI,
	&m10497_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m10497_MI;
extern MethodInfo m10494_MI;
extern MethodInfo m10495_MI;
extern MethodInfo m10496_MI;
static MethodInfo* t1946_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m10497_MI,
	&m10494_MI,
	&m10495_MI,
	&m10496_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t842_TI;
static TypeInfo* t1946_ITIs[] = 
{
	&t36_TI,
	&t842_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t842_TI;
static Il2CppInterfaceOffsetPair t1946_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t842_TI, 6},
};
extern MethodInfo m10439_MI;
extern MethodInfo m10474_MI;
extern TypeInfo t1941_TI;
extern MethodInfo m10475_MI;
extern MethodInfo m10441_MI;
extern TypeInfo t14_TI;
extern MethodInfo m10495_MI;
static void* t1946_RGCTXData[7] = 
{
	&m10439_MI,
	&m10474_MI,
	&t1941_TI,
	&m10475_MI,
	&m10441_MI,
	&t14_TI,
	&m10495_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1946_0_0_0;
extern Il2CppType t1946_1_0_0;
extern TypeInfo t14_TI;
struct t1946;
extern TypeInfo t1946_TI;
extern Il2CppGenericClass t1946_GC;
extern TypeInfo t841_TI;
TypeInfo t1946_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ShimEnumerator", "", t1946_MIs, t1946_PIs, t1946_FIs, NULL, &t14_TI, NULL, &t841_TI, &t1946_TI, t1946_ITIs, t1946_VT, &EmptyCustomAttributesCache, &t1946_TI, &t1946_0_0_0, &t1946_1_0_0, t1946_IOs, &t1946_GC, NULL, NULL, NULL, t1946_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1946), 0, -1, 0, 0, -1, 1056771, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 5, 3, 1, 0, 0, 8, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4008_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>
extern MethodInfo m23795_MI;
static PropertyInfo t4008____Count_PropertyInfo = 
{
	&t4008_TI, "Count", &m23795_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m23796_MI;
static PropertyInfo t4008____IsReadOnly_PropertyInfo = 
{
	&t4008_TI, "IsReadOnly", &m23796_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4008_PIs[] =
{
	&t4008____Count_PropertyInfo,
	&t4008____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4008_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m23795_MI = 
{
	"get_Count", NULL, &t4008_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4008_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m23796_MI = 
{
	"get_IsReadOnly", NULL, &t4008_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1932_0_0_0;
static ParameterInfo t4008_m23797_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1932_0_0_0},
};
extern TypeInfo t4008_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t1932 (MethodInfo* method, void* obj, void** args);
MethodInfo m23797_MI = 
{
	"Add", NULL, &t4008_TI, &t25_0_0_0, RuntimeInvoker_t25_t1932, t4008_m23797_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4008_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m23798_MI = 
{
	"Clear", NULL, &t4008_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1932_0_0_0;
static ParameterInfo t4008_m23799_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1932_0_0_0},
};
extern TypeInfo t4008_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t1932 (MethodInfo* method, void* obj, void** args);
MethodInfo m23799_MI = 
{
	"Contains", NULL, &t4008_TI, &t26_0_0_0, RuntimeInvoker_t26_t1932, t4008_m23799_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1931_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t4008_m23800_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1931_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4008_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m23800_MI = 
{
	"CopyTo", NULL, &t4008_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t4008_m23800_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1932_0_0_0;
static ParameterInfo t4008_m23801_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1932_0_0_0},
};
extern TypeInfo t4008_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t1932 (MethodInfo* method, void* obj, void** args);
MethodInfo m23801_MI = 
{
	"Remove", NULL, &t4008_TI, &t26_0_0_0, RuntimeInvoker_t26_t1932, t4008_m23801_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4008_MIs[] =
{
	&m23795_MI,
	&m23796_MI,
	&m23797_MI,
	&m23798_MI,
	&m23799_MI,
	&m23800_MI,
	&m23801_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4010_TI;
static TypeInfo* t4008_ITIs[] = 
{
	&t600_TI,
	&t4010_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4008_0_0_0;
extern Il2CppType t4008_1_0_0;
struct t4008;
extern TypeInfo t4008_TI;
extern Il2CppGenericClass t4008_GC;
TypeInfo t4008_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4008_MIs, t4008_PIs, NULL, NULL, NULL, NULL, NULL, &t4008_TI, t4008_ITIs, NULL, &EmptyCustomAttributesCache, &t4008_TI, &t4008_0_0_0, &t4008_1_0_0, NULL, &t4008_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4010_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>
extern TypeInfo t4010_TI;
extern Il2CppType t1933_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23802_MI = 
{
	"GetEnumerator", NULL, &t4010_TI, &t1933_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4010_MIs[] =
{
	&m23802_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t4010_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4010_0_0_0;
extern Il2CppType t4010_1_0_0;
struct t4010;
extern TypeInfo t4010_TI;
extern Il2CppGenericClass t4010_GC;
TypeInfo t4010_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4010_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4010_TI, t4010_ITIs, NULL, &EmptyCustomAttributesCache, &t4010_TI, &t4010_0_0_0, &t4010_1_0_0, NULL, &t4010_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1933_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>
extern MethodInfo m23803_MI;
static PropertyInfo t1933____Current_PropertyInfo = 
{
	&t1933_TI, "Current", &m23803_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1933_PIs[] =
{
	&t1933____Current_PropertyInfo,
	NULL
};
extern TypeInfo t1933_TI;
extern Il2CppType t1932_0_0_0;
extern void* RuntimeInvoker_t1932 (MethodInfo* method, void* obj, void** args);
MethodInfo m23803_MI = 
{
	"get_Current", NULL, &t1933_TI, &t1932_0_0_0, RuntimeInvoker_t1932, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1933_MIs[] =
{
	&m23803_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t1933_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1933_0_0_0;
extern Il2CppType t1933_1_0_0;
struct t1933;
extern TypeInfo t1933_TI;
extern Il2CppGenericClass t1933_GC;
TypeInfo t1933_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t1933_MIs, t1933_PIs, NULL, NULL, NULL, NULL, NULL, &t1933_TI, t1933_ITIs, NULL, &EmptyCustomAttributesCache, &t1933_TI, &t1933_0_0_0, &t1933_1_0_0, NULL, &t1933_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1932_TI;

extern TypeInfo t1932_TI;
extern TypeInfo t443_TI;
extern TypeInfo t33_TI;
extern TypeInfo t160_TI;
extern TypeInfo t14_TI;
extern TypeInfo t350_TI;
extern MethodInfo m10500_MI;
extern MethodInfo m10502_MI;
extern MethodInfo m10499_MI;
extern MethodInfo m72_MI;
extern MethodInfo m10501_MI;
extern MethodInfo m3448_MI;


// Metadata Definition System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
extern Il2CppType t160_0_0_1;
FieldInfo t1932_f0_FieldInfo = 
{
	"key", &t160_0_0_1, &t1932_TI, offsetof(t1932, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t350_0_0_1;
FieldInfo t1932_f1_FieldInfo = 
{
	"value", &t350_0_0_1, &t1932_TI, offsetof(t1932, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t1932_FIs[] =
{
	&t1932_f0_FieldInfo,
	&t1932_f1_FieldInfo,
	NULL
};
extern MethodInfo m10499_MI;
extern MethodInfo m10500_MI;
static PropertyInfo t1932____Key_PropertyInfo = 
{
	&t1932_TI, "Key", &m10499_MI, &m10500_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10501_MI;
extern MethodInfo m10502_MI;
static PropertyInfo t1932____Value_PropertyInfo = 
{
	&t1932_TI, "Value", &m10501_MI, &m10502_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1932_PIs[] =
{
	&t1932____Key_PropertyInfo,
	&t1932____Value_PropertyInfo,
	NULL
};
extern Il2CppType t160_0_0_0;
extern Il2CppType t350_0_0_0;
static ParameterInfo t1932_m10498_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t160_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t350_0_0_0},
};
extern TypeInfo t1932_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10498_MI = 
{
	".ctor", (methodPointerType)&m10440_gshared, &t1932_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t14, t1932_m10498_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1932_TI;
extern Il2CppType t160_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10499_MI = 
{
	"get_Key", (methodPointerType)&m10441_gshared, &t1932_TI, &t160_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t160_0_0_0;
static ParameterInfo t1932_m10500_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t160_0_0_0},
};
extern TypeInfo t1932_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10500_MI = 
{
	"set_Key", (methodPointerType)&m10442_gshared, &t1932_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1932_m10500_ParameterInfos, &EmptyCustomAttributesCache, 2177, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1932_TI;
extern Il2CppType t350_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10501_MI = 
{
	"get_Value", (methodPointerType)&m10443_gshared, &t1932_TI, &t350_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t350_0_0_0;
static ParameterInfo t1932_m10502_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t350_0_0_0},
};
extern TypeInfo t1932_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10502_MI = 
{
	"set_Value", (methodPointerType)&m10444_gshared, &t1932_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1932_m10502_ParameterInfos, &EmptyCustomAttributesCache, 2177, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1932_TI;
extern Il2CppType t33_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10503_MI = 
{
	"ToString", (methodPointerType)&m10445_gshared, &t1932_TI, &t33_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1932_MIs[] =
{
	&m10498_MI,
	&m10499_MI,
	&m10500_MI,
	&m10501_MI,
	&m10502_MI,
	&m10503_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m10503_MI;
static MethodInfo* t1932_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m10503_MI,
};
extern MethodInfo m10500_MI;
extern MethodInfo m10502_MI;
extern MethodInfo m10499_MI;
extern TypeInfo t160_TI;
extern MethodInfo m10501_MI;
extern TypeInfo t350_TI;
static void* t1932_RGCTXData[6] = 
{
	&m10500_MI,
	&m10502_MI,
	&m10499_MI,
	&t160_TI,
	&m10501_MI,
	&t350_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1932_0_0_0;
extern Il2CppType t1932_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t1932_TI;
extern Il2CppGenericClass t1932_GC;
extern CustomAttributesCache t846__CustomAttributeCache;
TypeInfo t1932_TI = 
{
	&g_mscorlib_dll_Image, NULL, "KeyValuePair`2", "System.Collections.Generic", t1932_MIs, t1932_PIs, t1932_FIs, NULL, &t122_TI, NULL, NULL, &t1932_TI, NULL, t1932_VT, &t846__CustomAttributeCache, &t1932_TI, &t1932_0_0_0, &t1932_1_0_0, NULL, &t1932_GC, NULL, NULL, NULL, t1932_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1932)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057033, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 2, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t350_TI;
#include "t350MD.h"

#include "t167.h"
#include "t1954.h"
#include "t1951.h"
#include "t1952.h"
#include "t1964.h"
#include "t1953.h"
extern TypeInfo t350_TI;
extern TypeInfo t167_TI;
extern TypeInfo t35_TI;
extern TypeInfo t25_TI;
extern TypeInfo t319_TI;
extern TypeInfo t582_TI;
extern TypeInfo t1277_TI;
extern TypeInfo t1242_TI;
extern TypeInfo t1947_TI;
extern TypeInfo t1954_TI;
extern TypeInfo t26_TI;
extern TypeInfo t1949_TI;
extern TypeInfo t1950_TI;
extern TypeInfo t1948_TI;
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t1951_TI;
extern TypeInfo t338_TI;
extern TypeInfo t1952_TI;
extern TypeInfo t1964_TI;
#include "t1951MD.h"
#include "t1952MD.h"
#include "t1954MD.h"
#include "t1964MD.h"
extern MethodInfo m1563_MI;
extern MethodInfo m10547_MI;
extern MethodInfo m1959_MI;
extern MethodInfo m6492_MI;
extern MethodInfo m17715_MI;
extern MethodInfo m6493_MI;
extern MethodInfo m10535_MI;
extern MethodInfo m73_MI;
extern MethodInfo m10532_MI;
extern MethodInfo m3786_MI;
extern MethodInfo m1565_MI;
extern MethodInfo m10527_MI;
extern MethodInfo m10533_MI;
extern MethodInfo m10536_MI;
extern MethodInfo m1566_MI;
extern MethodInfo m10521_MI;
extern MethodInfo m10545_MI;
extern MethodInfo m6930_MI;
extern MethodInfo m10546_MI;
extern MethodInfo m23804_MI;
extern MethodInfo m23805_MI;
extern MethodInfo m23806_MI;
extern MethodInfo m23807_MI;
extern MethodInfo m67_MI;
extern MethodInfo m68_MI;
extern MethodInfo m10537_MI;
extern MethodInfo m10522_MI;
extern MethodInfo m10523_MI;
extern MethodInfo m10579_MI;
extern MethodInfo m3782_MI;
extern MethodInfo m17717_MI;
extern MethodInfo m10530_MI;
extern MethodInfo m10531_MI;
extern MethodInfo m2974_MI;
extern MethodInfo m10654_MI;
extern MethodInfo m10573_MI;
extern MethodInfo m10534_MI;
extern MethodInfo m10539_MI;
extern MethodInfo m3798_MI;
extern MethodInfo m10660_MI;
extern MethodInfo m17719_MI;
extern MethodInfo m17727_MI;
extern MethodInfo m3785_MI;
struct t24;
#define m17715(__this, p0, p1, method) (void)m16651_gshared((t14 *)__this, (t40**)p0, (int32_t)p1, method)
extern MethodInfo m17715_MI;
struct t24;
#include "t1962.h"
#define m17717(__this, p0, p1, p2, p3, method) (int32_t)m7724_gshared((t14 *)__this, (t40*)p0, (t14 *)p1, (int32_t)p2, (int32_t)p3, method)
extern MethodInfo m17717_MI;
struct t24;
#define m17719(__this, p0, p1, p2, p3, method) (void)m16720_gshared((t14 *)__this, (t40*)p0, (int32_t)p1, (int32_t)p2, (t14*)p3, method)
extern MethodInfo m17719_MI;
struct t24;
#define m17727(__this, p0, p1, p2, method) (void)m16794_gshared((t14 *)__this, (t40*)p0, (int32_t)p1, (t1654 *)p2, method)
extern MethodInfo m17727_MI;


extern MethodInfo m10532_MI;
 t1954  m10532 (t350 * __this, MethodInfo* method){
	{
		t1954  L_0 = {0};
		m10573(&L_0, __this, &m10573_MI);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.List`1<UnityEngine.UI.Text>
extern Il2CppType t35_0_0_32849;
FieldInfo t350_f0_FieldInfo = 
{
	"DefaultCapacity", &t35_0_0_32849, &t350_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1947_0_0_1;
FieldInfo t350_f1_FieldInfo = 
{
	"_items", &t1947_0_0_1, &t350_TI, offsetof(t350, f1), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t350_f2_FieldInfo = 
{
	"_size", &t35_0_0_1, &t350_TI, offsetof(t350, f2), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t350_f3_FieldInfo = 
{
	"_version", &t35_0_0_1, &t350_TI, offsetof(t350, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1947_0_0_49;
FieldInfo t350_f4_FieldInfo = 
{
	"EmptyArray", &t1947_0_0_49, &t350_TI, offsetof(t350_SFs, f4), &EmptyCustomAttributesCache};
static FieldInfo* t350_FIs[] =
{
	&t350_f0_FieldInfo,
	&t350_f1_FieldInfo,
	&t350_f2_FieldInfo,
	&t350_f3_FieldInfo,
	&t350_f4_FieldInfo,
	NULL
};
static const int32_t t350_f0_DefaultValueData = 4;
extern Il2CppType t35_0_0_0;
static Il2CppFieldDefaultValueEntry t350_f0_DefaultValue = 
{
	&t350_f0_FieldInfo, { (char*)&t350_f0_DefaultValueData, &t35_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t350_FDVs[] = 
{
	&t350_f0_DefaultValue,
	NULL
};
extern MethodInfo m10514_MI;
static PropertyInfo t350____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t350_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m10514_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10515_MI;
static PropertyInfo t350____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t350_TI, "System.Collections.ICollection.IsSynchronized", &m10515_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10516_MI;
static PropertyInfo t350____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t350_TI, "System.Collections.ICollection.SyncRoot", &m10516_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10517_MI;
static PropertyInfo t350____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t350_TI, "System.Collections.IList.IsFixedSize", &m10517_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10518_MI;
static PropertyInfo t350____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t350_TI, "System.Collections.IList.IsReadOnly", &m10518_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10519_MI;
extern MethodInfo m10520_MI;
static PropertyInfo t350____System_Collections_IList_Item_PropertyInfo = 
{
	&t350_TI, "System.Collections.IList.Item", &m10519_MI, &m10520_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10545_MI;
extern MethodInfo m10546_MI;
static PropertyInfo t350____Capacity_PropertyInfo = 
{
	&t350_TI, "Capacity", &m10545_MI, &m10546_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1564_MI;
static PropertyInfo t350____Count_PropertyInfo = 
{
	&t350_TI, "Count", &m1564_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1563_MI;
extern MethodInfo m10547_MI;
static PropertyInfo t350____Item_PropertyInfo = 
{
	&t350_TI, "Item", &m1563_MI, &m10547_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t350_PIs[] =
{
	&t350____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t350____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t350____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t350____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t350____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t350____System_Collections_IList_Item_PropertyInfo,
	&t350____Capacity_PropertyInfo,
	&t350____Count_PropertyInfo,
	&t350____Item_PropertyInfo,
	NULL
};
extern TypeInfo t350_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m1559_MI = 
{
	".ctor", (methodPointerType)&m8086_gshared, &t350_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t350_m10504_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t350_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10504_MI = 
{
	".ctor", (methodPointerType)&m8088_gshared, &t350_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t350_m10504_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t350_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10505_MI = 
{
	".cctor", (methodPointerType)&m8090_gshared, &t350_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t350_TI;
extern Il2CppType t1948_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10506_MI = 
{
	"System.Collections.Generic.IEnumerable<T>.GetEnumerator", (methodPointerType)&m8092_gshared, &t350_TI, &t1948_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 481, 0, 27, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t24_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t350_m10507_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t350_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10507_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m8094_gshared, &t350_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t350_m10507_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t350_TI;
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10508_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8096_gshared, &t350_TI, &t36_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t350_m10509_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t350_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10509_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m8098_gshared, &t350_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t350_m10509_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t350_m10510_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t350_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10510_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m8100_gshared, &t350_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t350_m10510_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t350_m10511_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t350_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10511_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m8102_gshared, &t350_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t350_m10511_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t350_m10512_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t350_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10512_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m8104_gshared, &t350_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t350_m10512_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t350_m10513_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t350_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10513_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m8106_gshared, &t350_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t350_m10513_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t350_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10514_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m8108_gshared, &t350_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t350_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10515_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m8110_gshared, &t350_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t350_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10516_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m8112_gshared, &t350_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t350_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10517_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m8114_gshared, &t350_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t350_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10518_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m8116_gshared, &t350_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t350_m10519_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t350_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10519_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m8118_gshared, &t350_TI, &t14_0_0_0, RuntimeInvoker_t14_t35, t350_m10519_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t350_m10520_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t350_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10520_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m8120_gshared, &t350_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t350_m10520_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t167_0_0_0;
static ParameterInfo t350_m1565_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t167_0_0_0},
};
extern TypeInfo t350_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m1565_MI = 
{
	"Add", (methodPointerType)&m8122_gshared, &t350_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t350_m1565_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t350_m10521_ParameterInfos[] = 
{
	{"newCount", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t350_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10521_MI = 
{
	"GrowIfNeeded", (methodPointerType)&m8124_gshared, &t350_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t350_m10521_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1949_0_0_0;
static ParameterInfo t350_m10522_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t1949_0_0_0},
};
extern TypeInfo t350_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10522_MI = 
{
	"AddCollection", (methodPointerType)&m8126_gshared, &t350_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t350_m10522_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1950_0_0_0;
static ParameterInfo t350_m10523_ParameterInfos[] = 
{
	{"enumerable", 0, 134217728, &EmptyCustomAttributesCache, &t1950_0_0_0},
};
extern TypeInfo t350_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10523_MI = 
{
	"AddEnumerable", (methodPointerType)&m8128_gshared, &t350_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t350_m10523_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1950_0_0_0;
static ParameterInfo t350_m10524_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t1950_0_0_0},
};
extern TypeInfo t350_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10524_MI = 
{
	"AddRange", (methodPointerType)&m8130_gshared, &t350_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t350_m10524_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t350_TI;
extern Il2CppType t1951_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10525_MI = 
{
	"AsReadOnly", (methodPointerType)&m8132_gshared, &t350_TI, &t1951_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t350_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10526_MI = 
{
	"Clear", (methodPointerType)&m8134_gshared, &t350_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t167_0_0_0;
static ParameterInfo t350_m10527_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t167_0_0_0},
};
extern TypeInfo t350_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10527_MI = 
{
	"Contains", (methodPointerType)&m8136_gshared, &t350_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t350_m10527_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1947_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t350_m10528_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1947_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t350_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10528_MI = 
{
	"CopyTo", (methodPointerType)&m8138_gshared, &t350_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t350_m10528_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1952_0_0_0;
static ParameterInfo t350_m10529_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t1952_0_0_0},
};
extern TypeInfo t350_TI;
extern Il2CppType t167_0_0_0;
extern void* RuntimeInvoker_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10529_MI = 
{
	"Find", (methodPointerType)&m8140_gshared, &t350_TI, &t167_0_0_0, RuntimeInvoker_t14_t14, t350_m10529_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1952_0_0_0;
static ParameterInfo t350_m10530_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t1952_0_0_0},
};
extern TypeInfo t350_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10530_MI = 
{
	"CheckMatch", (methodPointerType)&m8142_gshared, &t350_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t350_m10530_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t35_0_0_0;
extern Il2CppType t1952_0_0_0;
static ParameterInfo t350_m10531_ParameterInfos[] = 
{
	{"startIndex", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"count", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"match", 2, 134217728, &EmptyCustomAttributesCache, &t1952_0_0_0},
};
extern TypeInfo t350_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t35_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10531_MI = 
{
	"GetIndex", (methodPointerType)&m8144_gshared, &t350_TI, &t35_0_0_0, RuntimeInvoker_t35_t35_t35_t14, t350_m10531_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t350_TI;
extern Il2CppType t1954_0_0_0;
extern void* RuntimeInvoker_t1954 (MethodInfo* method, void* obj, void** args);
MethodInfo m10532_MI = 
{
	"GetEnumerator", (methodPointerType)&m10532, &t350_TI, &t1954_0_0_0, RuntimeInvoker_t1954, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t167_0_0_0;
static ParameterInfo t350_m10533_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t167_0_0_0},
};
extern TypeInfo t350_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10533_MI = 
{
	"IndexOf", (methodPointerType)&m8147_gshared, &t350_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t350_m10533_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t350_m10534_ParameterInfos[] = 
{
	{"start", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"delta", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t350_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10534_MI = 
{
	"Shift", (methodPointerType)&m8149_gshared, &t350_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t35, t350_m10534_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t350_m10535_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t350_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10535_MI = 
{
	"CheckIndex", (methodPointerType)&m8151_gshared, &t350_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t350_m10535_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t167_0_0_0;
static ParameterInfo t350_m10536_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t167_0_0_0},
};
extern TypeInfo t350_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10536_MI = 
{
	"Insert", (methodPointerType)&m8153_gshared, &t350_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t350_m10536_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1950_0_0_0;
static ParameterInfo t350_m10537_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t1950_0_0_0},
};
extern TypeInfo t350_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10537_MI = 
{
	"CheckCollection", (methodPointerType)&m8155_gshared, &t350_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t350_m10537_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t167_0_0_0;
static ParameterInfo t350_m1566_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t167_0_0_0},
};
extern TypeInfo t350_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m1566_MI = 
{
	"Remove", (methodPointerType)&m8157_gshared, &t350_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t350_m1566_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1952_0_0_0;
static ParameterInfo t350_m10538_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t1952_0_0_0},
};
extern TypeInfo t350_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10538_MI = 
{
	"RemoveAll", (methodPointerType)&m8159_gshared, &t350_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t350_m10538_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t350_m10539_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t350_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10539_MI = 
{
	"RemoveAt", (methodPointerType)&m8160_gshared, &t350_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t350_m10539_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t350_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10540_MI = 
{
	"Reverse", (methodPointerType)&m8162_gshared, &t350_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t350_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10541_MI = 
{
	"Sort", (methodPointerType)&m8164_gshared, &t350_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1953_0_0_0;
static ParameterInfo t350_m10542_ParameterInfos[] = 
{
	{"comparison", 0, 134217728, &EmptyCustomAttributesCache, &t1953_0_0_0},
};
extern TypeInfo t350_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10542_MI = 
{
	"Sort", (methodPointerType)&m8166_gshared, &t350_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t350_m10542_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t350_TI;
extern Il2CppType t1947_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10543_MI = 
{
	"ToArray", (methodPointerType)&m8168_gshared, &t350_TI, &t1947_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t350_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10544_MI = 
{
	"TrimExcess", (methodPointerType)&m8170_gshared, &t350_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t350_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10545_MI = 
{
	"get_Capacity", (methodPointerType)&m8172_gshared, &t350_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t350_m10546_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t350_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10546_MI = 
{
	"set_Capacity", (methodPointerType)&m8174_gshared, &t350_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t350_m10546_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t350_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m1564_MI = 
{
	"get_Count", (methodPointerType)&m8175_gshared, &t350_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t350_m1563_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t350_TI;
extern Il2CppType t167_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m1563_MI = 
{
	"get_Item", (methodPointerType)&m8176_gshared, &t350_TI, &t167_0_0_0, RuntimeInvoker_t14_t35, t350_m1563_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t167_0_0_0;
static ParameterInfo t350_m10547_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t167_0_0_0},
};
extern TypeInfo t350_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10547_MI = 
{
	"set_Item", (methodPointerType)&m8178_gshared, &t350_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t350_m10547_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 32, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t350_MIs[] =
{
	&m1559_MI,
	&m10504_MI,
	&m10505_MI,
	&m10506_MI,
	&m10507_MI,
	&m10508_MI,
	&m10509_MI,
	&m10510_MI,
	&m10511_MI,
	&m10512_MI,
	&m10513_MI,
	&m10514_MI,
	&m10515_MI,
	&m10516_MI,
	&m10517_MI,
	&m10518_MI,
	&m10519_MI,
	&m10520_MI,
	&m1565_MI,
	&m10521_MI,
	&m10522_MI,
	&m10523_MI,
	&m10524_MI,
	&m10525_MI,
	&m10526_MI,
	&m10527_MI,
	&m10528_MI,
	&m10529_MI,
	&m10530_MI,
	&m10531_MI,
	&m10532_MI,
	&m10533_MI,
	&m10534_MI,
	&m10535_MI,
	&m10536_MI,
	&m10537_MI,
	&m1566_MI,
	&m10538_MI,
	&m10539_MI,
	&m10540_MI,
	&m10541_MI,
	&m10542_MI,
	&m10543_MI,
	&m10544_MI,
	&m10545_MI,
	&m10546_MI,
	&m1564_MI,
	&m1563_MI,
	&m10547_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m10508_MI;
extern MethodInfo m1564_MI;
extern MethodInfo m10515_MI;
extern MethodInfo m10516_MI;
extern MethodInfo m10507_MI;
extern MethodInfo m10517_MI;
extern MethodInfo m10518_MI;
extern MethodInfo m10519_MI;
extern MethodInfo m10520_MI;
extern MethodInfo m10509_MI;
extern MethodInfo m10526_MI;
extern MethodInfo m10510_MI;
extern MethodInfo m10511_MI;
extern MethodInfo m10512_MI;
extern MethodInfo m10513_MI;
extern MethodInfo m10539_MI;
extern MethodInfo m1564_MI;
extern MethodInfo m10514_MI;
extern MethodInfo m1565_MI;
extern MethodInfo m10526_MI;
extern MethodInfo m10527_MI;
extern MethodInfo m10528_MI;
extern MethodInfo m1566_MI;
extern MethodInfo m10506_MI;
extern MethodInfo m10533_MI;
extern MethodInfo m10536_MI;
extern MethodInfo m10539_MI;
extern MethodInfo m1563_MI;
extern MethodInfo m10547_MI;
static MethodInfo* t350_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m10508_MI,
	&m1564_MI,
	&m10515_MI,
	&m10516_MI,
	&m10507_MI,
	&m10517_MI,
	&m10518_MI,
	&m10519_MI,
	&m10520_MI,
	&m10509_MI,
	&m10526_MI,
	&m10510_MI,
	&m10511_MI,
	&m10512_MI,
	&m10513_MI,
	&m10539_MI,
	&m1564_MI,
	&m10514_MI,
	&m1565_MI,
	&m10526_MI,
	&m10527_MI,
	&m10528_MI,
	&m1566_MI,
	&m10506_MI,
	&m10533_MI,
	&m10536_MI,
	&m10539_MI,
	&m1563_MI,
	&m10547_MI,
};
extern TypeInfo t600_TI;
extern TypeInfo t651_TI;
extern TypeInfo t1023_TI;
extern TypeInfo t1949_TI;
extern TypeInfo t1950_TI;
extern TypeInfo t1960_TI;
static TypeInfo* t350_ITIs[] = 
{
	&t600_TI,
	&t651_TI,
	&t1023_TI,
	&t1949_TI,
	&t1950_TI,
	&t1960_TI,
};
extern TypeInfo t600_TI;
extern TypeInfo t651_TI;
extern TypeInfo t1023_TI;
extern TypeInfo t1949_TI;
extern TypeInfo t1950_TI;
extern TypeInfo t1960_TI;
static Il2CppInterfaceOffsetPair t350_IOs[] = 
{
	{ &t600_TI, 4},
	{ &t651_TI, 5},
	{ &t1023_TI, 9},
	{ &t1949_TI, 20},
	{ &t1950_TI, 27},
	{ &t1960_TI, 28},
};
extern TypeInfo t350_TI;
extern TypeInfo t1947_TI;
extern MethodInfo m10532_MI;
extern TypeInfo t1954_TI;
extern TypeInfo t167_TI;
extern MethodInfo m1565_MI;
extern MethodInfo m10527_MI;
extern MethodInfo m10533_MI;
extern MethodInfo m10535_MI;
extern MethodInfo m10536_MI;
extern MethodInfo m1566_MI;
extern MethodInfo m1563_MI;
extern MethodInfo m10547_MI;
extern MethodInfo m10521_MI;
extern MethodInfo m10545_MI;
extern MethodInfo m10546_MI;
extern MethodInfo m23804_MI;
extern MethodInfo m23805_MI;
extern MethodInfo m23806_MI;
extern MethodInfo m23807_MI;
extern MethodInfo m10537_MI;
extern TypeInfo t1949_TI;
extern MethodInfo m10522_MI;
extern MethodInfo m10523_MI;
extern TypeInfo t1951_TI;
extern MethodInfo m10579_MI;
extern MethodInfo m17717_MI;
extern MethodInfo m10530_MI;
extern MethodInfo m10531_MI;
extern MethodInfo m10654_MI;
extern MethodInfo m10573_MI;
extern MethodInfo m10534_MI;
extern MethodInfo m10539_MI;
extern MethodInfo m10660_MI;
extern MethodInfo m17719_MI;
extern MethodInfo m17727_MI;
extern MethodInfo m17715_MI;
static void* t350_RGCTXData[37] = 
{
	&t350_TI,
	&t1947_TI,
	&m10532_MI,
	&t1954_TI,
	&t167_TI,
	&m1565_MI,
	&m10527_MI,
	&m10533_MI,
	&m10535_MI,
	&m10536_MI,
	&m1566_MI,
	&m1563_MI,
	&m10547_MI,
	&m10521_MI,
	&m10545_MI,
	&m10546_MI,
	&m23804_MI,
	&m23805_MI,
	&m23806_MI,
	&m23807_MI,
	&m10537_MI,
	&t1949_TI,
	&m10522_MI,
	&m10523_MI,
	&t1951_TI,
	&m10579_MI,
	&m17717_MI,
	&m10530_MI,
	&m10531_MI,
	&m10654_MI,
	&m10573_MI,
	&m10534_MI,
	&m10539_MI,
	&m10660_MI,
	&m17719_MI,
	&m17727_MI,
	&m17715_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t350_0_0_0;
extern Il2CppType t350_1_0_0;
extern TypeInfo t14_TI;
struct t350;
extern TypeInfo t350_TI;
extern Il2CppGenericClass t350_GC;
extern CustomAttributesCache t848__CustomAttributeCache;
TypeInfo t350_TI = 
{
	&g_mscorlib_dll_Image, NULL, "List`1", "System.Collections.Generic", t350_MIs, t350_PIs, t350_FIs, NULL, &t14_TI, NULL, NULL, &t350_TI, t350_ITIs, t350_VT, &t848__CustomAttributeCache, &t350_TI, &t350_0_0_0, &t350_1_0_0, t350_IOs, &t350_GC, NULL, t350_FDVs, NULL, t350_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t350), 0, -1, sizeof(t350_SFs), 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 49, 9, 5, 0, 0, 33, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1949_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.Text>
extern MethodInfo m23804_MI;
static PropertyInfo t1949____Count_PropertyInfo = 
{
	&t1949_TI, "Count", &m23804_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m23808_MI;
static PropertyInfo t1949____IsReadOnly_PropertyInfo = 
{
	&t1949_TI, "IsReadOnly", &m23808_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1949_PIs[] =
{
	&t1949____Count_PropertyInfo,
	&t1949____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t1949_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m23804_MI = 
{
	"get_Count", NULL, &t1949_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1949_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m23808_MI = 
{
	"get_IsReadOnly", NULL, &t1949_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t167_0_0_0;
static ParameterInfo t1949_m23809_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t167_0_0_0},
};
extern TypeInfo t1949_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23809_MI = 
{
	"Add", NULL, &t1949_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1949_m23809_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1949_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m23810_MI = 
{
	"Clear", NULL, &t1949_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t167_0_0_0;
static ParameterInfo t1949_m23811_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t167_0_0_0},
};
extern TypeInfo t1949_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23811_MI = 
{
	"Contains", NULL, &t1949_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1949_m23811_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1947_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t1949_m23805_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1947_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1949_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m23805_MI = 
{
	"CopyTo", NULL, &t1949_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t1949_m23805_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t167_0_0_0;
static ParameterInfo t1949_m23812_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t167_0_0_0},
};
extern TypeInfo t1949_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23812_MI = 
{
	"Remove", NULL, &t1949_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1949_m23812_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1949_MIs[] =
{
	&m23804_MI,
	&m23808_MI,
	&m23809_MI,
	&m23810_MI,
	&m23811_MI,
	&m23805_MI,
	&m23812_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t1950_TI;
static TypeInfo* t1949_ITIs[] = 
{
	&t600_TI,
	&t1950_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1949_0_0_0;
extern Il2CppType t1949_1_0_0;
struct t1949;
extern TypeInfo t1949_TI;
extern Il2CppGenericClass t1949_GC;
TypeInfo t1949_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t1949_MIs, t1949_PIs, NULL, NULL, NULL, NULL, NULL, &t1949_TI, t1949_ITIs, NULL, &EmptyCustomAttributesCache, &t1949_TI, &t1949_0_0_0, &t1949_1_0_0, NULL, &t1949_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1950_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Text>
extern TypeInfo t1950_TI;
extern Il2CppType t1948_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23806_MI = 
{
	"GetEnumerator", NULL, &t1950_TI, &t1948_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1950_MIs[] =
{
	&m23806_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t1950_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1950_0_0_0;
extern Il2CppType t1950_1_0_0;
struct t1950;
extern TypeInfo t1950_TI;
extern Il2CppGenericClass t1950_GC;
TypeInfo t1950_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t1950_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1950_TI, t1950_ITIs, NULL, &EmptyCustomAttributesCache, &t1950_TI, &t1950_0_0_0, &t1950_1_0_0, NULL, &t1950_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1948_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Text>
extern MethodInfo m23807_MI;
static PropertyInfo t1948____Current_PropertyInfo = 
{
	&t1948_TI, "Current", &m23807_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1948_PIs[] =
{
	&t1948____Current_PropertyInfo,
	NULL
};
extern TypeInfo t1948_TI;
extern Il2CppType t167_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23807_MI = 
{
	"get_Current", NULL, &t1948_TI, &t167_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1948_MIs[] =
{
	&m23807_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t1948_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1948_0_0_0;
extern Il2CppType t1948_1_0_0;
struct t1948;
extern TypeInfo t1948_TI;
extern Il2CppGenericClass t1948_GC;
TypeInfo t1948_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t1948_MIs, t1948_PIs, NULL, NULL, NULL, NULL, NULL, &t1948_TI, t1948_ITIs, NULL, &EmptyCustomAttributesCache, &t1948_TI, &t1948_0_0_0, &t1948_1_0_0, NULL, &t1948_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t1955.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1955_TI;
#include "t1955MD.h"

extern TypeInfo t1955_TI;
extern TypeInfo t167_TI;
extern TypeInfo t1278_TI;
extern MethodInfo m10552_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m17660_MI;
struct t24;
#define m17660(__this, p0, method) (t167 *)m16357_gshared((t24 *)__this, (int32_t)p0, method)
extern MethodInfo m17660_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.Text>
extern Il2CppType t24_0_0_1;
FieldInfo t1955_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t1955_TI, offsetof(t1955, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t1955_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t1955_TI, offsetof(t1955, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t1955_FIs[] =
{
	&t1955_f0_FieldInfo,
	&t1955_f1_FieldInfo,
	NULL
};
extern MethodInfo m10549_MI;
static PropertyInfo t1955____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1955_TI, "System.Collections.IEnumerator.Current", &m10549_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10552_MI;
static PropertyInfo t1955____Current_PropertyInfo = 
{
	&t1955_TI, "Current", &m10552_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1955_PIs[] =
{
	&t1955____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1955____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t1955_m10548_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t1955_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10548_MI = 
{
	".ctor", (methodPointerType)&m7877_gshared, &t1955_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1955_m10548_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1955_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10549_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7879_gshared, &t1955_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1955_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10550_MI = 
{
	"Dispose", (methodPointerType)&m7881_gshared, &t1955_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1955_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10551_MI = 
{
	"MoveNext", (methodPointerType)&m7883_gshared, &t1955_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1955_TI;
extern Il2CppType t167_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10552_MI = 
{
	"get_Current", (methodPointerType)&m7885_gshared, &t1955_TI, &t167_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1955_MIs[] =
{
	&m10548_MI,
	&m10549_MI,
	&m10550_MI,
	&m10551_MI,
	&m10552_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m10549_MI;
extern MethodInfo m10551_MI;
extern MethodInfo m10550_MI;
extern MethodInfo m10552_MI;
static MethodInfo* t1955_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m10549_MI,
	&m10551_MI,
	&m10550_MI,
	&m10552_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t1948_TI;
static TypeInfo* t1955_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t1948_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t1948_TI;
static Il2CppInterfaceOffsetPair t1955_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t1948_TI, 7},
};
extern MethodInfo m10552_MI;
extern TypeInfo t167_TI;
extern MethodInfo m17660_MI;
static void* t1955_RGCTXData[3] = 
{
	&m10552_MI,
	&t167_TI,
	&m17660_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1955_0_0_0;
extern Il2CppType t1955_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t1955_TI;
extern Il2CppGenericClass t1955_GC;
extern TypeInfo t24_TI;
TypeInfo t1955_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1955_MIs, t1955_PIs, t1955_FIs, NULL, &t122_TI, NULL, &t24_TI, &t1955_TI, t1955_ITIs, t1955_VT, &EmptyCustomAttributesCache, &t1955_TI, &t1955_0_0_0, &t1955_1_0_0, t1955_IOs, &t1955_GC, NULL, NULL, NULL, t1955_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1955)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1960_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.Text>
extern MethodInfo m23813_MI;
extern MethodInfo m23814_MI;
static PropertyInfo t1960____Item_PropertyInfo = 
{
	&t1960_TI, "Item", &m23813_MI, &m23814_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1960_PIs[] =
{
	&t1960____Item_PropertyInfo,
	NULL
};
extern Il2CppType t167_0_0_0;
static ParameterInfo t1960_m23815_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t167_0_0_0},
};
extern TypeInfo t1960_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23815_MI = 
{
	"IndexOf", NULL, &t1960_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t1960_m23815_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t167_0_0_0;
static ParameterInfo t1960_m23816_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t167_0_0_0},
};
extern TypeInfo t1960_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23816_MI = 
{
	"Insert", NULL, &t1960_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t1960_m23816_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1960_m23817_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1960_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m23817_MI = 
{
	"RemoveAt", NULL, &t1960_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t1960_m23817_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1960_m23813_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1960_TI;
extern Il2CppType t167_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m23813_MI = 
{
	"get_Item", NULL, &t1960_TI, &t167_0_0_0, RuntimeInvoker_t14_t35, t1960_m23813_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t167_0_0_0;
static ParameterInfo t1960_m23814_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t167_0_0_0},
};
extern TypeInfo t1960_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23814_MI = 
{
	"set_Item", NULL, &t1960_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t1960_m23814_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1960_MIs[] =
{
	&m23815_MI,
	&m23816_MI,
	&m23817_MI,
	&m23813_MI,
	&m23814_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t1949_TI;
extern TypeInfo t1950_TI;
static TypeInfo* t1960_ITIs[] = 
{
	&t600_TI,
	&t1949_TI,
	&t1950_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1960_0_0_0;
extern Il2CppType t1960_1_0_0;
struct t1960;
extern TypeInfo t1960_TI;
extern Il2CppGenericClass t1960_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t1960_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t1960_MIs, t1960_PIs, NULL, NULL, NULL, NULL, NULL, &t1960_TI, t1960_ITIs, NULL, &t1409__CustomAttributeCache, &t1960_TI, &t1960_0_0_0, &t1960_1_0_0, NULL, &t1960_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3999_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.ILayoutElement>
extern MethodInfo m23818_MI;
static PropertyInfo t3999____Count_PropertyInfo = 
{
	&t3999_TI, "Count", &m23818_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m23819_MI;
static PropertyInfo t3999____IsReadOnly_PropertyInfo = 
{
	&t3999_TI, "IsReadOnly", &m23819_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3999_PIs[] =
{
	&t3999____Count_PropertyInfo,
	&t3999____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t3999_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m23818_MI = 
{
	"get_Count", NULL, &t3999_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3999_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m23819_MI = 
{
	"get_IsReadOnly", NULL, &t3999_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t288_0_0_0;
static ParameterInfo t3999_m23820_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t288_0_0_0},
};
extern TypeInfo t3999_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23820_MI = 
{
	"Add", NULL, &t3999_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t3999_m23820_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3999_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m23821_MI = 
{
	"Clear", NULL, &t3999_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t288_0_0_0;
static ParameterInfo t3999_m23822_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t288_0_0_0},
};
extern TypeInfo t3999_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23822_MI = 
{
	"Contains", NULL, &t3999_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t3999_m23822_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3190_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t3999_m23823_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3190_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t3999_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m23823_MI = 
{
	"CopyTo", NULL, &t3999_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t3999_m23823_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t288_0_0_0;
static ParameterInfo t3999_m23824_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t288_0_0_0},
};
extern TypeInfo t3999_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23824_MI = 
{
	"Remove", NULL, &t3999_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t3999_m23824_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3999_MIs[] =
{
	&m23818_MI,
	&m23819_MI,
	&m23820_MI,
	&m23821_MI,
	&m23822_MI,
	&m23823_MI,
	&m23824_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4001_TI;
static TypeInfo* t3999_ITIs[] = 
{
	&t600_TI,
	&t4001_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3999_0_0_0;
extern Il2CppType t3999_1_0_0;
struct t3999;
extern TypeInfo t3999_TI;
extern Il2CppGenericClass t3999_GC;
TypeInfo t3999_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t3999_MIs, t3999_PIs, NULL, NULL, NULL, NULL, NULL, &t3999_TI, t3999_ITIs, NULL, &EmptyCustomAttributesCache, &t3999_TI, &t3999_0_0_0, &t3999_1_0_0, NULL, &t3999_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4001_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.ILayoutElement>
extern TypeInfo t4001_TI;
extern Il2CppType t3351_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23825_MI = 
{
	"GetEnumerator", NULL, &t4001_TI, &t3351_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4001_MIs[] =
{
	&m23825_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t4001_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4001_0_0_0;
extern Il2CppType t4001_1_0_0;
struct t4001;
extern TypeInfo t4001_TI;
extern Il2CppGenericClass t4001_GC;
TypeInfo t4001_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4001_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4001_TI, t4001_ITIs, NULL, &EmptyCustomAttributesCache, &t4001_TI, &t4001_0_0_0, &t4001_1_0_0, NULL, &t4001_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3351_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.ILayoutElement>
extern MethodInfo m23826_MI;
static PropertyInfo t3351____Current_PropertyInfo = 
{
	&t3351_TI, "Current", &m23826_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3351_PIs[] =
{
	&t3351____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3351_TI;
extern Il2CppType t288_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23826_MI = 
{
	"get_Current", NULL, &t3351_TI, &t288_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3351_MIs[] =
{
	&m23826_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t3351_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3351_0_0_0;
extern Il2CppType t3351_1_0_0;
struct t3351;
extern TypeInfo t3351_TI;
extern Il2CppGenericClass t3351_GC;
TypeInfo t3351_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3351_MIs, t3351_PIs, NULL, NULL, NULL, NULL, NULL, &t3351_TI, t3351_ITIs, NULL, &EmptyCustomAttributesCache, &t3351_TI, &t3351_0_0_0, &t3351_1_0_0, NULL, &t3351_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t1956.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1956_TI;
#include "t1956MD.h"

extern TypeInfo t1956_TI;
extern TypeInfo t288_TI;
extern TypeInfo t1278_TI;
extern MethodInfo m10557_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m17671_MI;
struct t24;
#define m17671(__this, p0, method) (t14 *)m16357_gshared((t24 *)__this, (int32_t)p0, method)
extern MethodInfo m17671_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.ILayoutElement>
extern Il2CppType t24_0_0_1;
FieldInfo t1956_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t1956_TI, offsetof(t1956, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t1956_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t1956_TI, offsetof(t1956, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t1956_FIs[] =
{
	&t1956_f0_FieldInfo,
	&t1956_f1_FieldInfo,
	NULL
};
extern MethodInfo m10554_MI;
static PropertyInfo t1956____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1956_TI, "System.Collections.IEnumerator.Current", &m10554_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10557_MI;
static PropertyInfo t1956____Current_PropertyInfo = 
{
	&t1956_TI, "Current", &m10557_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1956_PIs[] =
{
	&t1956____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1956____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t1956_m10553_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t1956_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10553_MI = 
{
	".ctor", (methodPointerType)&m7877_gshared, &t1956_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1956_m10553_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1956_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10554_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7879_gshared, &t1956_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1956_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10555_MI = 
{
	"Dispose", (methodPointerType)&m7881_gshared, &t1956_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1956_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10556_MI = 
{
	"MoveNext", (methodPointerType)&m7883_gshared, &t1956_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1956_TI;
extern Il2CppType t288_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10557_MI = 
{
	"get_Current", (methodPointerType)&m7885_gshared, &t1956_TI, &t288_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1956_MIs[] =
{
	&m10553_MI,
	&m10554_MI,
	&m10555_MI,
	&m10556_MI,
	&m10557_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m10554_MI;
extern MethodInfo m10556_MI;
extern MethodInfo m10555_MI;
extern MethodInfo m10557_MI;
static MethodInfo* t1956_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m10554_MI,
	&m10556_MI,
	&m10555_MI,
	&m10557_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3351_TI;
static TypeInfo* t1956_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t3351_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3351_TI;
static Il2CppInterfaceOffsetPair t1956_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t3351_TI, 7},
};
extern MethodInfo m10557_MI;
extern TypeInfo t288_TI;
extern MethodInfo m17671_MI;
static void* t1956_RGCTXData[3] = 
{
	&m10557_MI,
	&t288_TI,
	&m17671_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1956_0_0_0;
extern Il2CppType t1956_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t1956_TI;
extern Il2CppGenericClass t1956_GC;
extern TypeInfo t24_TI;
TypeInfo t1956_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1956_MIs, t1956_PIs, t1956_FIs, NULL, &t122_TI, NULL, &t24_TI, &t1956_TI, t1956_ITIs, t1956_VT, &EmptyCustomAttributesCache, &t1956_TI, &t1956_0_0_0, &t1956_1_0_0, t1956_IOs, &t1956_GC, NULL, NULL, NULL, t1956_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1956)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4000_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.ILayoutElement>
extern MethodInfo m23827_MI;
extern MethodInfo m23828_MI;
static PropertyInfo t4000____Item_PropertyInfo = 
{
	&t4000_TI, "Item", &m23827_MI, &m23828_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4000_PIs[] =
{
	&t4000____Item_PropertyInfo,
	NULL
};
extern Il2CppType t288_0_0_0;
static ParameterInfo t4000_m23829_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t288_0_0_0},
};
extern TypeInfo t4000_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23829_MI = 
{
	"IndexOf", NULL, &t4000_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t4000_m23829_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t288_0_0_0;
static ParameterInfo t4000_m23830_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t288_0_0_0},
};
extern TypeInfo t4000_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23830_MI = 
{
	"Insert", NULL, &t4000_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t4000_m23830_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4000_m23831_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4000_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m23831_MI = 
{
	"RemoveAt", NULL, &t4000_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t4000_m23831_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4000_m23827_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4000_TI;
extern Il2CppType t288_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m23827_MI = 
{
	"get_Item", NULL, &t4000_TI, &t288_0_0_0, RuntimeInvoker_t14_t35, t4000_m23827_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t288_0_0_0;
static ParameterInfo t4000_m23828_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t288_0_0_0},
};
extern TypeInfo t4000_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23828_MI = 
{
	"set_Item", NULL, &t4000_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t4000_m23828_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4000_MIs[] =
{
	&m23829_MI,
	&m23830_MI,
	&m23831_MI,
	&m23827_MI,
	&m23828_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t3999_TI;
extern TypeInfo t4001_TI;
static TypeInfo* t4000_ITIs[] = 
{
	&t600_TI,
	&t3999_TI,
	&t4001_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4000_0_0_0;
extern Il2CppType t4000_1_0_0;
struct t4000;
extern TypeInfo t4000_TI;
extern Il2CppGenericClass t4000_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t4000_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4000_MIs, t4000_PIs, NULL, NULL, NULL, NULL, NULL, &t4000_TI, t4000_ITIs, NULL, &t1409__CustomAttributeCache, &t4000_TI, &t4000_0_0_0, &t4000_1_0_0, NULL, &t4000_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4002_TI;

#include "t198.h"


// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.MaskableGraphic>
extern MethodInfo m23832_MI;
static PropertyInfo t4002____Count_PropertyInfo = 
{
	&t4002_TI, "Count", &m23832_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m23833_MI;
static PropertyInfo t4002____IsReadOnly_PropertyInfo = 
{
	&t4002_TI, "IsReadOnly", &m23833_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4002_PIs[] =
{
	&t4002____Count_PropertyInfo,
	&t4002____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4002_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m23832_MI = 
{
	"get_Count", NULL, &t4002_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4002_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m23833_MI = 
{
	"get_IsReadOnly", NULL, &t4002_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t198_0_0_0;
static ParameterInfo t4002_m23834_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t198_0_0_0},
};
extern TypeInfo t4002_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23834_MI = 
{
	"Add", NULL, &t4002_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t4002_m23834_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4002_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m23835_MI = 
{
	"Clear", NULL, &t4002_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t198_0_0_0;
static ParameterInfo t4002_m23836_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t198_0_0_0},
};
extern TypeInfo t4002_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23836_MI = 
{
	"Contains", NULL, &t4002_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t4002_m23836_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3191_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t4002_m23837_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3191_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4002_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m23837_MI = 
{
	"CopyTo", NULL, &t4002_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t4002_m23837_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t198_0_0_0;
static ParameterInfo t4002_m23838_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t198_0_0_0},
};
extern TypeInfo t4002_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23838_MI = 
{
	"Remove", NULL, &t4002_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t4002_m23838_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4002_MIs[] =
{
	&m23832_MI,
	&m23833_MI,
	&m23834_MI,
	&m23835_MI,
	&m23836_MI,
	&m23837_MI,
	&m23838_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4004_TI;
static TypeInfo* t4002_ITIs[] = 
{
	&t600_TI,
	&t4004_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4002_0_0_0;
extern Il2CppType t4002_1_0_0;
struct t4002;
extern TypeInfo t4002_TI;
extern Il2CppGenericClass t4002_GC;
TypeInfo t4002_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4002_MIs, t4002_PIs, NULL, NULL, NULL, NULL, NULL, &t4002_TI, t4002_ITIs, NULL, &EmptyCustomAttributesCache, &t4002_TI, &t4002_0_0_0, &t4002_1_0_0, NULL, &t4002_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4004_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.MaskableGraphic>
extern TypeInfo t4004_TI;
extern Il2CppType t3352_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23839_MI = 
{
	"GetEnumerator", NULL, &t4004_TI, &t3352_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4004_MIs[] =
{
	&m23839_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t4004_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4004_0_0_0;
extern Il2CppType t4004_1_0_0;
struct t4004;
extern TypeInfo t4004_TI;
extern Il2CppGenericClass t4004_GC;
TypeInfo t4004_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4004_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4004_TI, t4004_ITIs, NULL, &EmptyCustomAttributesCache, &t4004_TI, &t4004_0_0_0, &t4004_1_0_0, NULL, &t4004_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3352_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.MaskableGraphic>
extern MethodInfo m23840_MI;
static PropertyInfo t3352____Current_PropertyInfo = 
{
	&t3352_TI, "Current", &m23840_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3352_PIs[] =
{
	&t3352____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3352_TI;
extern Il2CppType t198_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23840_MI = 
{
	"get_Current", NULL, &t3352_TI, &t198_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3352_MIs[] =
{
	&m23840_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t3352_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3352_0_0_0;
extern Il2CppType t3352_1_0_0;
struct t3352;
extern TypeInfo t3352_TI;
extern Il2CppGenericClass t3352_GC;
TypeInfo t3352_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3352_MIs, t3352_PIs, NULL, NULL, NULL, NULL, NULL, &t3352_TI, t3352_ITIs, NULL, &EmptyCustomAttributesCache, &t3352_TI, &t3352_0_0_0, &t3352_1_0_0, NULL, &t3352_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t1957.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1957_TI;
#include "t1957MD.h"

extern TypeInfo t1957_TI;
extern TypeInfo t198_TI;
extern TypeInfo t1278_TI;
extern MethodInfo m10562_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m17682_MI;
struct t24;
#define m17682(__this, p0, method) (t198 *)m16357_gshared((t24 *)__this, (int32_t)p0, method)
extern MethodInfo m17682_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.MaskableGraphic>
extern Il2CppType t24_0_0_1;
FieldInfo t1957_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t1957_TI, offsetof(t1957, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t1957_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t1957_TI, offsetof(t1957, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t1957_FIs[] =
{
	&t1957_f0_FieldInfo,
	&t1957_f1_FieldInfo,
	NULL
};
extern MethodInfo m10559_MI;
static PropertyInfo t1957____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1957_TI, "System.Collections.IEnumerator.Current", &m10559_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10562_MI;
static PropertyInfo t1957____Current_PropertyInfo = 
{
	&t1957_TI, "Current", &m10562_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1957_PIs[] =
{
	&t1957____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1957____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t1957_m10558_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t1957_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10558_MI = 
{
	".ctor", (methodPointerType)&m7877_gshared, &t1957_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1957_m10558_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1957_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10559_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7879_gshared, &t1957_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1957_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10560_MI = 
{
	"Dispose", (methodPointerType)&m7881_gshared, &t1957_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1957_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10561_MI = 
{
	"MoveNext", (methodPointerType)&m7883_gshared, &t1957_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1957_TI;
extern Il2CppType t198_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10562_MI = 
{
	"get_Current", (methodPointerType)&m7885_gshared, &t1957_TI, &t198_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1957_MIs[] =
{
	&m10558_MI,
	&m10559_MI,
	&m10560_MI,
	&m10561_MI,
	&m10562_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m10559_MI;
extern MethodInfo m10561_MI;
extern MethodInfo m10560_MI;
extern MethodInfo m10562_MI;
static MethodInfo* t1957_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m10559_MI,
	&m10561_MI,
	&m10560_MI,
	&m10562_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3352_TI;
static TypeInfo* t1957_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t3352_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3352_TI;
static Il2CppInterfaceOffsetPair t1957_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t3352_TI, 7},
};
extern MethodInfo m10562_MI;
extern TypeInfo t198_TI;
extern MethodInfo m17682_MI;
static void* t1957_RGCTXData[3] = 
{
	&m10562_MI,
	&t198_TI,
	&m17682_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1957_0_0_0;
extern Il2CppType t1957_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t1957_TI;
extern Il2CppGenericClass t1957_GC;
extern TypeInfo t24_TI;
TypeInfo t1957_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1957_MIs, t1957_PIs, t1957_FIs, NULL, &t122_TI, NULL, &t24_TI, &t1957_TI, t1957_ITIs, t1957_VT, &EmptyCustomAttributesCache, &t1957_TI, &t1957_0_0_0, &t1957_1_0_0, t1957_IOs, &t1957_GC, NULL, NULL, NULL, t1957_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1957)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4003_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.MaskableGraphic>
extern MethodInfo m23841_MI;
extern MethodInfo m23842_MI;
static PropertyInfo t4003____Item_PropertyInfo = 
{
	&t4003_TI, "Item", &m23841_MI, &m23842_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4003_PIs[] =
{
	&t4003____Item_PropertyInfo,
	NULL
};
extern Il2CppType t198_0_0_0;
static ParameterInfo t4003_m23843_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t198_0_0_0},
};
extern TypeInfo t4003_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23843_MI = 
{
	"IndexOf", NULL, &t4003_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t4003_m23843_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t198_0_0_0;
static ParameterInfo t4003_m23844_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t198_0_0_0},
};
extern TypeInfo t4003_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23844_MI = 
{
	"Insert", NULL, &t4003_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t4003_m23844_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4003_m23845_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4003_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m23845_MI = 
{
	"RemoveAt", NULL, &t4003_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t4003_m23845_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4003_m23841_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4003_TI;
extern Il2CppType t198_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m23841_MI = 
{
	"get_Item", NULL, &t4003_TI, &t198_0_0_0, RuntimeInvoker_t14_t35, t4003_m23841_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t198_0_0_0;
static ParameterInfo t4003_m23842_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t198_0_0_0},
};
extern TypeInfo t4003_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23842_MI = 
{
	"set_Item", NULL, &t4003_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t4003_m23842_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4003_MIs[] =
{
	&m23843_MI,
	&m23844_MI,
	&m23845_MI,
	&m23841_MI,
	&m23842_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4002_TI;
extern TypeInfo t4004_TI;
static TypeInfo* t4003_ITIs[] = 
{
	&t600_TI,
	&t4002_TI,
	&t4004_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4003_0_0_0;
extern Il2CppType t4003_1_0_0;
struct t4003;
extern TypeInfo t4003_TI;
extern Il2CppGenericClass t4003_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t4003_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4003_MIs, t4003_PIs, NULL, NULL, NULL, NULL, NULL, &t4003_TI, t4003_ITIs, NULL, &t1409__CustomAttributeCache, &t4003_TI, &t4003_0_0_0, &t4003_1_0_0, NULL, &t4003_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4005_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.IMaskable>
extern MethodInfo m23846_MI;
static PropertyInfo t4005____Count_PropertyInfo = 
{
	&t4005_TI, "Count", &m23846_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m23847_MI;
static PropertyInfo t4005____IsReadOnly_PropertyInfo = 
{
	&t4005_TI, "IsReadOnly", &m23847_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4005_PIs[] =
{
	&t4005____Count_PropertyInfo,
	&t4005____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4005_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m23846_MI = 
{
	"get_Count", NULL, &t4005_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4005_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m23847_MI = 
{
	"get_IsReadOnly", NULL, &t4005_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t370_0_0_0;
static ParameterInfo t4005_m23848_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t370_0_0_0},
};
extern TypeInfo t4005_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23848_MI = 
{
	"Add", NULL, &t4005_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t4005_m23848_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4005_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m23849_MI = 
{
	"Clear", NULL, &t4005_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t370_0_0_0;
static ParameterInfo t4005_m23850_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t370_0_0_0},
};
extern TypeInfo t4005_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23850_MI = 
{
	"Contains", NULL, &t4005_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t4005_m23850_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3192_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t4005_m23851_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3192_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4005_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m23851_MI = 
{
	"CopyTo", NULL, &t4005_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t4005_m23851_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t370_0_0_0;
static ParameterInfo t4005_m23852_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t370_0_0_0},
};
extern TypeInfo t4005_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23852_MI = 
{
	"Remove", NULL, &t4005_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t4005_m23852_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4005_MIs[] =
{
	&m23846_MI,
	&m23847_MI,
	&m23848_MI,
	&m23849_MI,
	&m23850_MI,
	&m23851_MI,
	&m23852_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4007_TI;
static TypeInfo* t4005_ITIs[] = 
{
	&t600_TI,
	&t4007_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4005_0_0_0;
extern Il2CppType t4005_1_0_0;
struct t4005;
extern TypeInfo t4005_TI;
extern Il2CppGenericClass t4005_GC;
TypeInfo t4005_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4005_MIs, t4005_PIs, NULL, NULL, NULL, NULL, NULL, &t4005_TI, t4005_ITIs, NULL, &EmptyCustomAttributesCache, &t4005_TI, &t4005_0_0_0, &t4005_1_0_0, NULL, &t4005_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4007_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.IMaskable>
extern TypeInfo t4007_TI;
extern Il2CppType t3353_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23853_MI = 
{
	"GetEnumerator", NULL, &t4007_TI, &t3353_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4007_MIs[] =
{
	&m23853_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t4007_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4007_0_0_0;
extern Il2CppType t4007_1_0_0;
struct t4007;
extern TypeInfo t4007_TI;
extern Il2CppGenericClass t4007_GC;
TypeInfo t4007_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4007_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4007_TI, t4007_ITIs, NULL, &EmptyCustomAttributesCache, &t4007_TI, &t4007_0_0_0, &t4007_1_0_0, NULL, &t4007_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3353_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.IMaskable>
extern MethodInfo m23854_MI;
static PropertyInfo t3353____Current_PropertyInfo = 
{
	&t3353_TI, "Current", &m23854_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3353_PIs[] =
{
	&t3353____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3353_TI;
extern Il2CppType t370_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23854_MI = 
{
	"get_Current", NULL, &t3353_TI, &t370_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3353_MIs[] =
{
	&m23854_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t3353_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3353_0_0_0;
extern Il2CppType t3353_1_0_0;
struct t3353;
extern TypeInfo t3353_TI;
extern Il2CppGenericClass t3353_GC;
TypeInfo t3353_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3353_MIs, t3353_PIs, NULL, NULL, NULL, NULL, NULL, &t3353_TI, t3353_ITIs, NULL, &EmptyCustomAttributesCache, &t3353_TI, &t3353_0_0_0, &t3353_1_0_0, NULL, &t3353_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t1958.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1958_TI;
#include "t1958MD.h"

extern TypeInfo t1958_TI;
extern TypeInfo t370_TI;
extern TypeInfo t1278_TI;
extern MethodInfo m10567_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m17693_MI;
struct t24;
#define m17693(__this, p0, method) (t14 *)m16357_gshared((t24 *)__this, (int32_t)p0, method)
extern MethodInfo m17693_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.IMaskable>
extern Il2CppType t24_0_0_1;
FieldInfo t1958_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t1958_TI, offsetof(t1958, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t1958_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t1958_TI, offsetof(t1958, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t1958_FIs[] =
{
	&t1958_f0_FieldInfo,
	&t1958_f1_FieldInfo,
	NULL
};
extern MethodInfo m10564_MI;
static PropertyInfo t1958____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1958_TI, "System.Collections.IEnumerator.Current", &m10564_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10567_MI;
static PropertyInfo t1958____Current_PropertyInfo = 
{
	&t1958_TI, "Current", &m10567_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1958_PIs[] =
{
	&t1958____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1958____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t1958_m10563_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t1958_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10563_MI = 
{
	".ctor", (methodPointerType)&m7877_gshared, &t1958_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1958_m10563_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1958_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10564_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7879_gshared, &t1958_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1958_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10565_MI = 
{
	"Dispose", (methodPointerType)&m7881_gshared, &t1958_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1958_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10566_MI = 
{
	"MoveNext", (methodPointerType)&m7883_gshared, &t1958_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1958_TI;
extern Il2CppType t370_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10567_MI = 
{
	"get_Current", (methodPointerType)&m7885_gshared, &t1958_TI, &t370_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1958_MIs[] =
{
	&m10563_MI,
	&m10564_MI,
	&m10565_MI,
	&m10566_MI,
	&m10567_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m10564_MI;
extern MethodInfo m10566_MI;
extern MethodInfo m10565_MI;
extern MethodInfo m10567_MI;
static MethodInfo* t1958_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m10564_MI,
	&m10566_MI,
	&m10565_MI,
	&m10567_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3353_TI;
static TypeInfo* t1958_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t3353_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t3353_TI;
static Il2CppInterfaceOffsetPair t1958_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t3353_TI, 7},
};
extern MethodInfo m10567_MI;
extern TypeInfo t370_TI;
extern MethodInfo m17693_MI;
static void* t1958_RGCTXData[3] = 
{
	&m10567_MI,
	&t370_TI,
	&m17693_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1958_0_0_0;
extern Il2CppType t1958_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t1958_TI;
extern Il2CppGenericClass t1958_GC;
extern TypeInfo t24_TI;
TypeInfo t1958_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1958_MIs, t1958_PIs, t1958_FIs, NULL, &t122_TI, NULL, &t24_TI, &t1958_TI, t1958_ITIs, t1958_VT, &EmptyCustomAttributesCache, &t1958_TI, &t1958_0_0_0, &t1958_1_0_0, t1958_IOs, &t1958_GC, NULL, NULL, NULL, t1958_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1958)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4006_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.IMaskable>
extern MethodInfo m23855_MI;
extern MethodInfo m23856_MI;
static PropertyInfo t4006____Item_PropertyInfo = 
{
	&t4006_TI, "Item", &m23855_MI, &m23856_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4006_PIs[] =
{
	&t4006____Item_PropertyInfo,
	NULL
};
extern Il2CppType t370_0_0_0;
static ParameterInfo t4006_m23857_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t370_0_0_0},
};
extern TypeInfo t4006_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23857_MI = 
{
	"IndexOf", NULL, &t4006_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t4006_m23857_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t370_0_0_0;
static ParameterInfo t4006_m23858_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t370_0_0_0},
};
extern TypeInfo t4006_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23858_MI = 
{
	"Insert", NULL, &t4006_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t4006_m23858_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4006_m23859_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4006_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m23859_MI = 
{
	"RemoveAt", NULL, &t4006_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t4006_m23859_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t4006_m23855_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t4006_TI;
extern Il2CppType t370_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m23855_MI = 
{
	"get_Item", NULL, &t4006_TI, &t370_0_0_0, RuntimeInvoker_t14_t35, t4006_m23855_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t370_0_0_0;
static ParameterInfo t4006_m23856_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t370_0_0_0},
};
extern TypeInfo t4006_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23856_MI = 
{
	"set_Item", NULL, &t4006_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t4006_m23856_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4006_MIs[] =
{
	&m23857_MI,
	&m23858_MI,
	&m23859_MI,
	&m23855_MI,
	&m23856_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t4005_TI;
extern TypeInfo t4007_TI;
static TypeInfo* t4006_ITIs[] = 
{
	&t600_TI,
	&t4005_TI,
	&t4007_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4006_0_0_0;
extern Il2CppType t4006_1_0_0;
struct t4006;
extern TypeInfo t4006_TI;
extern Il2CppGenericClass t4006_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t4006_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4006_MIs, t4006_PIs, NULL, NULL, NULL, NULL, NULL, &t4006_TI, t4006_ITIs, NULL, &t1409__CustomAttributeCache, &t4006_TI, &t4006_0_0_0, &t4006_1_0_0, NULL, &t4006_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t363_TI;

#include "t168.h"


// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.Graphic>
extern MethodInfo m1647_MI;
static PropertyInfo t363____Count_PropertyInfo = 
{
	&t363_TI, "Count", &m1647_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m23860_MI;
static PropertyInfo t363____IsReadOnly_PropertyInfo = 
{
	&t363_TI, "IsReadOnly", &m23860_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t363_PIs[] =
{
	&t363____Count_PropertyInfo,
	&t363____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t363_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m1647_MI = 
{
	"get_Count", NULL, &t363_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t363_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m23860_MI = 
{
	"get_IsReadOnly", NULL, &t363_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t168_0_0_0;
static ParameterInfo t363_m23861_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern TypeInfo t363_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23861_MI = 
{
	"Add", NULL, &t363_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t363_m23861_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t363_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m23862_MI = 
{
	"Clear", NULL, &t363_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t168_0_0_0;
static ParameterInfo t363_m23863_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern TypeInfo t363_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23863_MI = 
{
	"Contains", NULL, &t363_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t363_m23863_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2019_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t363_m23864_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2019_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t363_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m23864_MI = 
{
	"CopyTo", NULL, &t363_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t363_m23864_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t168_0_0_0;
static ParameterInfo t363_m23865_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern TypeInfo t363_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23865_MI = 
{
	"Remove", NULL, &t363_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t363_m23865_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t363_MIs[] =
{
	&m1647_MI,
	&m23860_MI,
	&m23861_MI,
	&m23862_MI,
	&m23863_MI,
	&m23864_MI,
	&m23865_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t2021_TI;
static TypeInfo* t363_ITIs[] = 
{
	&t600_TI,
	&t2021_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t363_0_0_0;
extern Il2CppType t363_1_0_0;
struct t363;
extern TypeInfo t363_TI;
extern Il2CppGenericClass t363_GC;
TypeInfo t363_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t363_MIs, t363_PIs, NULL, NULL, NULL, NULL, NULL, &t363_TI, t363_ITIs, NULL, &EmptyCustomAttributesCache, &t363_TI, &t363_0_0_0, &t363_1_0_0, NULL, &t363_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2021_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Graphic>
extern TypeInfo t2021_TI;
extern Il2CppType t2020_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23866_MI = 
{
	"GetEnumerator", NULL, &t2021_TI, &t2020_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2021_MIs[] =
{
	&m23866_MI,
	NULL
};
extern TypeInfo t600_TI;
static TypeInfo* t2021_ITIs[] = 
{
	&t600_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2021_0_0_0;
extern Il2CppType t2021_1_0_0;
struct t2021;
extern TypeInfo t2021_TI;
extern Il2CppGenericClass t2021_GC;
TypeInfo t2021_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t2021_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2021_TI, t2021_ITIs, NULL, &EmptyCustomAttributesCache, &t2021_TI, &t2021_0_0_0, &t2021_1_0_0, NULL, &t2021_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2020_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Graphic>
extern MethodInfo m23867_MI;
static PropertyInfo t2020____Current_PropertyInfo = 
{
	&t2020_TI, "Current", &m23867_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2020_PIs[] =
{
	&t2020____Current_PropertyInfo,
	NULL
};
extern TypeInfo t2020_TI;
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23867_MI = 
{
	"get_Current", NULL, &t2020_TI, &t168_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2020_MIs[] =
{
	&m23867_MI,
	NULL
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
static TypeInfo* t2020_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2020_0_0_0;
extern Il2CppType t2020_1_0_0;
struct t2020;
extern TypeInfo t2020_TI;
extern Il2CppGenericClass t2020_GC;
TypeInfo t2020_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t2020_MIs, t2020_PIs, NULL, NULL, NULL, NULL, NULL, &t2020_TI, t2020_ITIs, NULL, &EmptyCustomAttributesCache, &t2020_TI, &t2020_0_0_0, &t2020_1_0_0, NULL, &t2020_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t1959.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1959_TI;
#include "t1959MD.h"

extern TypeInfo t1959_TI;
extern TypeInfo t168_TI;
extern TypeInfo t1278_TI;
extern MethodInfo m10572_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m17704_MI;
struct t24;
#define m17704(__this, p0, method) (t168 *)m16357_gshared((t24 *)__this, (int32_t)p0, method)
extern MethodInfo m17704_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.Graphic>
extern Il2CppType t24_0_0_1;
FieldInfo t1959_f0_FieldInfo = 
{
	"array", &t24_0_0_1, &t1959_TI, offsetof(t1959, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t1959_f1_FieldInfo = 
{
	"idx", &t35_0_0_1, &t1959_TI, offsetof(t1959, f1) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t1959_FIs[] =
{
	&t1959_f0_FieldInfo,
	&t1959_f1_FieldInfo,
	NULL
};
extern MethodInfo m10569_MI;
static PropertyInfo t1959____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1959_TI, "System.Collections.IEnumerator.Current", &m10569_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10572_MI;
static PropertyInfo t1959____Current_PropertyInfo = 
{
	&t1959_TI, "Current", &m10572_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1959_PIs[] =
{
	&t1959____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1959____Current_PropertyInfo,
	NULL
};
extern Il2CppType t24_0_0_0;
static ParameterInfo t1959_m10568_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t1959_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10568_MI = 
{
	".ctor", (methodPointerType)&m7877_gshared, &t1959_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1959_m10568_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1959_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10569_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7879_gshared, &t1959_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1959_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10570_MI = 
{
	"Dispose", (methodPointerType)&m7881_gshared, &t1959_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1959_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10571_MI = 
{
	"MoveNext", (methodPointerType)&m7883_gshared, &t1959_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1959_TI;
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10572_MI = 
{
	"get_Current", (methodPointerType)&m7885_gshared, &t1959_TI, &t168_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1959_MIs[] =
{
	&m10568_MI,
	&m10569_MI,
	&m10570_MI,
	&m10571_MI,
	&m10572_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m10569_MI;
extern MethodInfo m10571_MI;
extern MethodInfo m10570_MI;
extern MethodInfo m10572_MI;
static MethodInfo* t1959_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m10569_MI,
	&m10571_MI,
	&m10570_MI,
	&m10572_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t2020_TI;
static TypeInfo* t1959_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t2020_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t2020_TI;
static Il2CppInterfaceOffsetPair t1959_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t2020_TI, 7},
};
extern MethodInfo m10572_MI;
extern TypeInfo t168_TI;
extern MethodInfo m17704_MI;
static void* t1959_RGCTXData[3] = 
{
	&m10572_MI,
	&t168_TI,
	&m17704_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1959_0_0_0;
extern Il2CppType t1959_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t1959_TI;
extern Il2CppGenericClass t1959_GC;
extern TypeInfo t24_TI;
TypeInfo t1959_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1959_MIs, t1959_PIs, t1959_FIs, NULL, &t122_TI, NULL, &t24_TI, &t1959_TI, t1959_ITIs, t1959_VT, &EmptyCustomAttributesCache, &t1959_TI, &t1959_0_0_0, &t1959_1_0_0, t1959_IOs, &t1959_GC, NULL, NULL, NULL, t1959_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1959)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t187_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.Graphic>
extern MethodInfo m1644_MI;
extern MethodInfo m23868_MI;
static PropertyInfo t187____Item_PropertyInfo = 
{
	&t187_TI, "Item", &m1644_MI, &m23868_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t187_PIs[] =
{
	&t187____Item_PropertyInfo,
	NULL
};
extern Il2CppType t168_0_0_0;
static ParameterInfo t187_m23869_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern TypeInfo t187_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23869_MI = 
{
	"IndexOf", NULL, &t187_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t187_m23869_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t168_0_0_0;
static ParameterInfo t187_m23870_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern TypeInfo t187_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23870_MI = 
{
	"Insert", NULL, &t187_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t187_m23870_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t187_m23871_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t187_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m23871_MI = 
{
	"RemoveAt", NULL, &t187_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t187_m23871_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t187_m1644_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t187_TI;
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m1644_MI = 
{
	"get_Item", NULL, &t187_TI, &t168_0_0_0, RuntimeInvoker_t14_t35, t187_m1644_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t168_0_0_0;
static ParameterInfo t187_m23868_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern TypeInfo t187_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23868_MI = 
{
	"set_Item", NULL, &t187_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t187_m23868_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t187_MIs[] =
{
	&m23869_MI,
	&m23870_MI,
	&m23871_MI,
	&m1644_MI,
	&m23868_MI,
	NULL
};
extern TypeInfo t600_TI;
extern TypeInfo t363_TI;
extern TypeInfo t2021_TI;
static TypeInfo* t187_ITIs[] = 
{
	&t600_TI,
	&t363_TI,
	&t2021_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t187_0_0_0;
extern Il2CppType t187_1_0_0;
struct t187;
extern TypeInfo t187_TI;
extern Il2CppGenericClass t187_GC;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t187_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t187_MIs, t187_PIs, NULL, NULL, NULL, NULL, NULL, &t187_TI, t187_ITIs, NULL, &t1409__CustomAttributeCache, &t187_TI, &t187_0_0_0, &t187_1_0_0, NULL, &t187_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1954_TI;

extern TypeInfo t1954_TI;
extern TypeInfo t1278_TI;
extern TypeInfo t167_TI;
extern TypeInfo t350_TI;
extern TypeInfo t31_TI;
extern TypeInfo t33_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m10576_MI;
extern MethodInfo m6924_MI;
extern MethodInfo m1450_MI;
extern MethodInfo m3022_MI;
extern MethodInfo m7129_MI;
extern MethodInfo m6925_MI;


// Metadata Definition System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Text>
extern Il2CppType t350_0_0_1;
FieldInfo t1954_f0_FieldInfo = 
{
	"l", &t350_0_0_1, &t1954_TI, offsetof(t1954, f0) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t1954_f1_FieldInfo = 
{
	"next", &t35_0_0_1, &t1954_TI, offsetof(t1954, f1) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_1;
FieldInfo t1954_f2_FieldInfo = 
{
	"ver", &t35_0_0_1, &t1954_TI, offsetof(t1954, f2) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t167_0_0_1;
FieldInfo t1954_f3_FieldInfo = 
{
	"current", &t167_0_0_1, &t1954_TI, offsetof(t1954, f3) + sizeof(t14), &EmptyCustomAttributesCache};
static FieldInfo* t1954_FIs[] =
{
	&t1954_f0_FieldInfo,
	&t1954_f1_FieldInfo,
	&t1954_f2_FieldInfo,
	&t1954_f3_FieldInfo,
	NULL
};
extern MethodInfo m10574_MI;
static PropertyInfo t1954____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1954_TI, "System.Collections.IEnumerator.Current", &m10574_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10578_MI;
static PropertyInfo t1954____Current_PropertyInfo = 
{
	&t1954_TI, "Current", &m10578_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1954_PIs[] =
{
	&t1954____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1954____Current_PropertyInfo,
	NULL
};
extern Il2CppType t350_0_0_0;
static ParameterInfo t1954_m10573_ParameterInfos[] = 
{
	{"l", 0, 134217728, &EmptyCustomAttributesCache, &t350_0_0_0},
};
extern TypeInfo t1954_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10573_MI = 
{
	".ctor", (methodPointerType)&m8180_gshared, &t1954_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1954_m10573_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1954_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10574_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8181_gshared, &t1954_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1954_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10575_MI = 
{
	"Dispose", (methodPointerType)&m8182_gshared, &t1954_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1954_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10576_MI = 
{
	"VerifyState", (methodPointerType)&m8183_gshared, &t1954_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1954_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10577_MI = 
{
	"MoveNext", (methodPointerType)&m8184_gshared, &t1954_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1954_TI;
extern Il2CppType t167_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10578_MI = 
{
	"get_Current", (methodPointerType)&m8185_gshared, &t1954_TI, &t167_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1954_MIs[] =
{
	&m10573_MI,
	&m10574_MI,
	&m10575_MI,
	&m10576_MI,
	&m10577_MI,
	&m10578_MI,
	NULL
};
extern MethodInfo m1415_MI;
extern MethodInfo m50_MI;
extern MethodInfo m1416_MI;
extern MethodInfo m1516_MI;
extern MethodInfo m10574_MI;
extern MethodInfo m10577_MI;
extern MethodInfo m10575_MI;
extern MethodInfo m10578_MI;
static MethodInfo* t1954_VT[] =
{
	&m1415_MI,
	&m50_MI,
	&m1416_MI,
	&m1516_MI,
	&m10574_MI,
	&m10577_MI,
	&m10575_MI,
	&m10578_MI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t1948_TI;
static TypeInfo* t1954_ITIs[] = 
{
	&t36_TI,
	&t37_TI,
	&t1948_TI,
};
extern TypeInfo t36_TI;
extern TypeInfo t37_TI;
extern TypeInfo t1948_TI;
static Il2CppInterfaceOffsetPair t1954_IOs[] = 
{
	{ &t36_TI, 4},
	{ &t37_TI, 6},
	{ &t1948_TI, 7},
};
extern MethodInfo m10576_MI;
extern TypeInfo t167_TI;
extern TypeInfo t1954_TI;
static void* t1954_RGCTXData[3] = 
{
	&m10576_MI,
	&t167_TI,
	&t1954_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1954_0_0_0;
extern Il2CppType t1954_1_0_0;
extern TypeInfo t122_TI;
extern TypeInfo t1954_TI;
extern Il2CppGenericClass t1954_GC;
extern TypeInfo t848_TI;
TypeInfo t1954_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t1954_MIs, t1954_PIs, t1954_FIs, NULL, &t122_TI, NULL, &t848_TI, &t1954_TI, t1954_ITIs, t1954_VT, &EmptyCustomAttributesCache, &t1954_TI, &t1954_0_0_0, &t1954_1_0_0, t1954_IOs, &t1954_GC, NULL, NULL, NULL, t1954_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1954)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 4, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1951_TI;

extern TypeInfo t1951_TI;
extern TypeInfo t167_TI;
extern TypeInfo t35_TI;
extern TypeInfo t345_TI;
extern TypeInfo t1960_TI;
extern TypeInfo t1949_TI;
extern TypeInfo t338_TI;
extern TypeInfo t651_TI;
extern TypeInfo t25_TI;
extern TypeInfo t24_TI;
extern TypeInfo t600_TI;
extern TypeInfo t36_TI;
extern TypeInfo t26_TI;
extern TypeInfo t1947_TI;
extern TypeInfo t1950_TI;
extern TypeInfo t1948_TI;
#include "t1961MD.h"
extern MethodInfo m10608_MI;
extern MethodInfo m1532_MI;
extern MethodInfo m23813_MI;
extern MethodInfo m23804_MI;
extern MethodInfo m73_MI;
extern MethodInfo m2974_MI;
extern MethodInfo m7416_MI;
extern MethodInfo m7325_MI;
extern MethodInfo m10640_MI;
extern MethodInfo m23811_MI;
extern MethodInfo m23815_MI;
extern MethodInfo m23805_MI;
extern MethodInfo m23806_MI;


// Metadata Definition System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>
extern Il2CppType t1960_0_0_1;
FieldInfo t1951_f0_FieldInfo = 
{
	"list", &t1960_0_0_1, &t1951_TI, offsetof(t1951, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1951_FIs[] =
{
	&t1951_f0_FieldInfo,
	NULL
};
extern MethodInfo m10585_MI;
extern MethodInfo m10586_MI;
static PropertyInfo t1951____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo = 
{
	&t1951_TI, "System.Collections.Generic.IList<T>.Item", &m10585_MI, &m10586_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10587_MI;
static PropertyInfo t1951____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t1951_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m10587_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10597_MI;
static PropertyInfo t1951____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t1951_TI, "System.Collections.ICollection.IsSynchronized", &m10597_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10598_MI;
static PropertyInfo t1951____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t1951_TI, "System.Collections.ICollection.SyncRoot", &m10598_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10599_MI;
static PropertyInfo t1951____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t1951_TI, "System.Collections.IList.IsFixedSize", &m10599_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10600_MI;
static PropertyInfo t1951____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t1951_TI, "System.Collections.IList.IsReadOnly", &m10600_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10601_MI;
extern MethodInfo m10602_MI;
static PropertyInfo t1951____System_Collections_IList_Item_PropertyInfo = 
{
	&t1951_TI, "System.Collections.IList.Item", &m10601_MI, &m10602_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10607_MI;
static PropertyInfo t1951____Count_PropertyInfo = 
{
	&t1951_TI, "Count", &m10607_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10608_MI;
static PropertyInfo t1951____Item_PropertyInfo = 
{
	&t1951_TI, "Item", &m10608_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1951_PIs[] =
{
	&t1951____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo,
	&t1951____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t1951____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t1951____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t1951____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t1951____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t1951____System_Collections_IList_Item_PropertyInfo,
	&t1951____Count_PropertyInfo,
	&t1951____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1960_0_0_0;
static ParameterInfo t1951_m10579_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t1960_0_0_0},
};
extern TypeInfo t1951_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10579_MI = 
{
	".ctor", (methodPointerType)&m8186_gshared, &t1951_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1951_m10579_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t167_0_0_0;
static ParameterInfo t1951_m10580_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t167_0_0_0},
};
extern TypeInfo t1951_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10580_MI = 
{
	"System.Collections.Generic.ICollection<T>.Add", (methodPointerType)&m8187_gshared, &t1951_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1951_m10580_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1951_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10581_MI = 
{
	"System.Collections.Generic.ICollection<T>.Clear", (methodPointerType)&m8188_gshared, &t1951_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 481, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t167_0_0_0;
static ParameterInfo t1951_m10582_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t167_0_0_0},
};
extern TypeInfo t1951_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10582_MI = 
{
	"System.Collections.Generic.IList<T>.Insert", (methodPointerType)&m8189_gshared, &t1951_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t1951_m10582_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t167_0_0_0;
static ParameterInfo t1951_m10583_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t167_0_0_0},
};
extern TypeInfo t1951_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10583_MI = 
{
	"System.Collections.Generic.ICollection<T>.Remove", (methodPointerType)&m8190_gshared, &t1951_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1951_m10583_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1951_m10584_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1951_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10584_MI = 
{
	"System.Collections.Generic.IList<T>.RemoveAt", (methodPointerType)&m8191_gshared, &t1951_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t1951_m10584_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1951_m10585_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1951_TI;
extern Il2CppType t167_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10585_MI = 
{
	"System.Collections.Generic.IList<T>.get_Item", (methodPointerType)&m8192_gshared, &t1951_TI, &t167_0_0_0, RuntimeInvoker_t14_t35, t1951_m10585_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t167_0_0_0;
static ParameterInfo t1951_m10586_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t167_0_0_0},
};
extern TypeInfo t1951_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10586_MI = 
{
	"System.Collections.Generic.IList<T>.set_Item", (methodPointerType)&m8193_gshared, &t1951_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t1951_m10586_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1951_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10587_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m8194_gshared, &t1951_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t24_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t1951_m10588_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1951_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10588_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m8195_gshared, &t1951_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t1951_m10588_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1951_TI;
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10589_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8196_gshared, &t1951_TI, &t36_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1951_m10590_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1951_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10590_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m8197_gshared, &t1951_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t1951_m10590_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1951_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10591_MI = 
{
	"System.Collections.IList.Clear", (methodPointerType)&m8198_gshared, &t1951_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 481, 0, 14, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1951_m10592_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1951_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10592_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m8199_gshared, &t1951_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1951_m10592_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1951_m10593_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1951_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10593_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m8200_gshared, &t1951_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t1951_m10593_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t1951_m10594_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1951_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10594_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m8201_gshared, &t1951_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t1951_m10594_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1951_m10595_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1951_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10595_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m8202_gshared, &t1951_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1951_m10595_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1951_m10596_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1951_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10596_MI = 
{
	"System.Collections.IList.RemoveAt", (methodPointerType)&m8203_gshared, &t1951_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t1951_m10596_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 19, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1951_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10597_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m8204_gshared, &t1951_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1951_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10598_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m8205_gshared, &t1951_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1951_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10599_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m8206_gshared, &t1951_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1951_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10600_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m8207_gshared, &t1951_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1951_m10601_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1951_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10601_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m8208_gshared, &t1951_TI, &t14_0_0_0, RuntimeInvoker_t14_t35, t1951_m10601_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t1951_m10602_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1951_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10602_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m8209_gshared, &t1951_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t1951_m10602_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t167_0_0_0;
static ParameterInfo t1951_m10603_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t167_0_0_0},
};
extern TypeInfo t1951_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10603_MI = 
{
	"Contains", (methodPointerType)&m8210_gshared, &t1951_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1951_m10603_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1947_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t1951_m10604_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1947_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1951_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10604_MI = 
{
	"CopyTo", (methodPointerType)&m8211_gshared, &t1951_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t1951_m10604_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1951_TI;
extern Il2CppType t1948_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10605_MI = 
{
	"GetEnumerator", (methodPointerType)&m8212_gshared, &t1951_TI, &t1948_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t167_0_0_0;
static ParameterInfo t1951_m10606_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t167_0_0_0},
};
extern TypeInfo t1951_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10606_MI = 
{
	"IndexOf", (methodPointerType)&m8213_gshared, &t1951_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t1951_m10606_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1951_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10607_MI = 
{
	"get_Count", (methodPointerType)&m8214_gshared, &t1951_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1951_m10608_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1951_TI;
extern Il2CppType t167_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10608_MI = 
{
	"get_Item", (methodPointerType)&m8215_gshared, &t1951_TI, &t167_0_0_0, RuntimeInvoker_t14_t35, t1951_m10608_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 33, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1951_MIs[] =
{
	&m10579_MI,
	&m10580_MI,
	&m10581_MI,
	&m10582_MI,
	&m10583_MI,
	&m10584_MI,
	&m10585_MI,
	&m10586_MI,
	&m10587_MI,
	&m10588_MI,
	&m10589_MI,
	&m10590_MI,
	&m10591_MI,
	&m10592_MI,
	&m10593_MI,
	&m10594_MI,
	&m10595_MI,
	&m10596_MI,
	&m10597_MI,
	&m10598_MI,
	&m10599_MI,
	&m10600_MI,
	&m10601_MI,
	&m10602_MI,
	&m10603_MI,
	&m10604_MI,
	&m10605_MI,
	&m10606_MI,
	&m10607_MI,
	&m10608_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m10589_MI;
extern MethodInfo m10607_MI;
extern MethodInfo m10597_MI;
extern MethodInfo m10598_MI;
extern MethodInfo m10588_MI;
extern MethodInfo m10599_MI;
extern MethodInfo m10600_MI;
extern MethodInfo m10601_MI;
extern MethodInfo m10602_MI;
extern MethodInfo m10590_MI;
extern MethodInfo m10591_MI;
extern MethodInfo m10592_MI;
extern MethodInfo m10593_MI;
extern MethodInfo m10594_MI;
extern MethodInfo m10595_MI;
extern MethodInfo m10596_MI;
extern MethodInfo m10607_MI;
extern MethodInfo m10587_MI;
extern MethodInfo m10580_MI;
extern MethodInfo m10581_MI;
extern MethodInfo m10603_MI;
extern MethodInfo m10604_MI;
extern MethodInfo m10583_MI;
extern MethodInfo m10606_MI;
extern MethodInfo m10582_MI;
extern MethodInfo m10584_MI;
extern MethodInfo m10585_MI;
extern MethodInfo m10586_MI;
extern MethodInfo m10605_MI;
extern MethodInfo m10608_MI;
static MethodInfo* t1951_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m10589_MI,
	&m10607_MI,
	&m10597_MI,
	&m10598_MI,
	&m10588_MI,
	&m10599_MI,
	&m10600_MI,
	&m10601_MI,
	&m10602_MI,
	&m10590_MI,
	&m10591_MI,
	&m10592_MI,
	&m10593_MI,
	&m10594_MI,
	&m10595_MI,
	&m10596_MI,
	&m10607_MI,
	&m10587_MI,
	&m10580_MI,
	&m10581_MI,
	&m10603_MI,
	&m10604_MI,
	&m10583_MI,
	&m10606_MI,
	&m10582_MI,
	&m10584_MI,
	&m10585_MI,
	&m10586_MI,
	&m10605_MI,
	&m10608_MI,
};
extern TypeInfo t600_TI;
extern TypeInfo t651_TI;
extern TypeInfo t1023_TI;
extern TypeInfo t1949_TI;
extern TypeInfo t1960_TI;
extern TypeInfo t1950_TI;
static TypeInfo* t1951_ITIs[] = 
{
	&t600_TI,
	&t651_TI,
	&t1023_TI,
	&t1949_TI,
	&t1960_TI,
	&t1950_TI,
};
extern TypeInfo t600_TI;
extern TypeInfo t651_TI;
extern TypeInfo t1023_TI;
extern TypeInfo t1949_TI;
extern TypeInfo t1960_TI;
extern TypeInfo t1950_TI;
static Il2CppInterfaceOffsetPair t1951_IOs[] = 
{
	{ &t600_TI, 4},
	{ &t651_TI, 5},
	{ &t1023_TI, 9},
	{ &t1949_TI, 20},
	{ &t1960_TI, 27},
	{ &t1950_TI, 32},
};
extern MethodInfo m10608_MI;
extern MethodInfo m10640_MI;
extern TypeInfo t167_TI;
extern MethodInfo m23811_MI;
extern MethodInfo m23815_MI;
extern MethodInfo m23813_MI;
extern MethodInfo m23805_MI;
extern MethodInfo m23806_MI;
extern MethodInfo m23804_MI;
static void* t1951_RGCTXData[9] = 
{
	&m10608_MI,
	&m10640_MI,
	&t167_TI,
	&m23811_MI,
	&m23815_MI,
	&m23813_MI,
	&m23805_MI,
	&m23806_MI,
	&m23804_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1951_0_0_0;
extern Il2CppType t1951_1_0_0;
extern TypeInfo t14_TI;
struct t1951;
extern TypeInfo t1951_TI;
extern Il2CppGenericClass t1951_GC;
extern CustomAttributesCache t850__CustomAttributeCache;
TypeInfo t1951_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ReadOnlyCollection`1", "System.Collections.ObjectModel", t1951_MIs, t1951_PIs, t1951_FIs, NULL, &t14_TI, NULL, NULL, &t1951_TI, t1951_ITIs, t1951_VT, &t850__CustomAttributeCache, &t1951_TI, &t1951_0_0_0, &t1951_1_0_0, t1951_IOs, &t1951_GC, NULL, NULL, NULL, t1951_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1951), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 30, 9, 1, 0, 0, 34, 6, 6};
#include "t1961.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1961_TI;

extern TypeInfo t1961_TI;
extern TypeInfo t1949_TI;
extern TypeInfo t26_TI;
extern TypeInfo t1960_TI;
extern TypeInfo t167_TI;
extern TypeInfo t35_TI;
extern TypeInfo t25_TI;
extern TypeInfo t350_TI;
extern TypeInfo t651_TI;
extern TypeInfo t14_TI;
extern TypeInfo t24_TI;
extern TypeInfo t1950_TI;
extern TypeInfo t1948_TI;
extern TypeInfo t1947_TI;
extern TypeInfo t31_TI;
extern TypeInfo t319_TI;
extern TypeInfo t345_TI;
extern TypeInfo t1023_TI;
extern Il2CppType t167_0_0_0;
extern MethodInfo m23808_MI;
extern MethodInfo m10643_MI;
extern MethodInfo m10644_MI;
extern MethodInfo m23813_MI;
extern MethodInfo m10641_MI;
extern MethodInfo m10639_MI;
extern MethodInfo m23804_MI;
extern MethodInfo m73_MI;
extern MethodInfo m1559_MI;
extern MethodInfo m7415_MI;
extern MethodInfo m7416_MI;
extern MethodInfo m23806_MI;
extern MethodInfo m10632_MI;
extern MethodInfo m10640_MI;
extern MethodInfo m23811_MI;
extern MethodInfo m23815_MI;
extern MethodInfo m10642_MI;
extern MethodInfo m10630_MI;
extern MethodInfo m10635_MI;
extern MethodInfo m10626_MI;
extern MethodInfo m23810_MI;
extern MethodInfo m23805_MI;
extern MethodInfo m23816_MI;
extern MethodInfo m23817_MI;
extern MethodInfo m23814_MI;
extern MethodInfo m1571_MI;
extern MethodInfo m3841_MI;
extern MethodInfo m1959_MI;
extern MethodInfo m1532_MI;
extern MethodInfo m7414_MI;
extern MethodInfo m7417_MI;


// Metadata Definition System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>
extern Il2CppType t1960_0_0_1;
FieldInfo t1961_f0_FieldInfo = 
{
	"list", &t1960_0_0_1, &t1961_TI, offsetof(t1961, f0), &EmptyCustomAttributesCache};
extern Il2CppType t14_0_0_1;
FieldInfo t1961_f1_FieldInfo = 
{
	"syncRoot", &t14_0_0_1, &t1961_TI, offsetof(t1961, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1961_FIs[] =
{
	&t1961_f0_FieldInfo,
	&t1961_f1_FieldInfo,
	NULL
};
extern MethodInfo m10610_MI;
static PropertyInfo t1961____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t1961_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m10610_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10618_MI;
static PropertyInfo t1961____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t1961_TI, "System.Collections.ICollection.IsSynchronized", &m10618_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10619_MI;
static PropertyInfo t1961____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t1961_TI, "System.Collections.ICollection.SyncRoot", &m10619_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10620_MI;
static PropertyInfo t1961____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t1961_TI, "System.Collections.IList.IsFixedSize", &m10620_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10621_MI;
static PropertyInfo t1961____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t1961_TI, "System.Collections.IList.IsReadOnly", &m10621_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10622_MI;
extern MethodInfo m10623_MI;
static PropertyInfo t1961____System_Collections_IList_Item_PropertyInfo = 
{
	&t1961_TI, "System.Collections.IList.Item", &m10622_MI, &m10623_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10636_MI;
static PropertyInfo t1961____Count_PropertyInfo = 
{
	&t1961_TI, "Count", &m10636_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10637_MI;
extern MethodInfo m10638_MI;
static PropertyInfo t1961____Item_PropertyInfo = 
{
	&t1961_TI, "Item", &m10637_MI, &m10638_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1961_PIs[] =
{
	&t1961____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t1961____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t1961____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t1961____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t1961____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t1961____System_Collections_IList_Item_PropertyInfo,
	&t1961____Count_PropertyInfo,
	&t1961____Item_PropertyInfo,
	NULL
};
extern TypeInfo t1961_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10609_MI = 
{
	".ctor", (methodPointerType)&m8216_gshared, &t1961_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1961_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10610_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m8217_gshared, &t1961_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t24_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t1961_m10611_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1961_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10611_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m8218_gshared, &t1961_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t1961_m10611_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1961_TI;
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10612_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8219_gshared, &t1961_TI, &t36_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1961_m10613_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1961_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10613_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m8220_gshared, &t1961_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t1961_m10613_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1961_m10614_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1961_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10614_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m8221_gshared, &t1961_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1961_m10614_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1961_m10615_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1961_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10615_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m8222_gshared, &t1961_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t1961_m10615_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t1961_m10616_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1961_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10616_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m8223_gshared, &t1961_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t1961_m10616_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1961_m10617_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1961_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10617_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m8224_gshared, &t1961_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1961_m10617_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1961_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10618_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m8225_gshared, &t1961_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1961_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10619_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m8226_gshared, &t1961_TI, &t14_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1961_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10620_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m8227_gshared, &t1961_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1961_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26 (MethodInfo* method, void* obj, void** args);
MethodInfo m10621_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m8228_gshared, &t1961_TI, &t26_0_0_0, RuntimeInvoker_t26, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1961_m10622_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1961_TI;
extern Il2CppType t14_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10622_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m8229_gshared, &t1961_TI, &t14_0_0_0, RuntimeInvoker_t14_t35, t1961_m10622_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t1961_m10623_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1961_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10623_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m8230_gshared, &t1961_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t1961_m10623_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t167_0_0_0;
static ParameterInfo t1961_m10624_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t167_0_0_0},
};
extern TypeInfo t1961_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10624_MI = 
{
	"Add", (methodPointerType)&m8231_gshared, &t1961_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1961_m10624_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1961_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10625_MI = 
{
	"Clear", (methodPointerType)&m8232_gshared, &t1961_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1961_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10626_MI = 
{
	"ClearItems", (methodPointerType)&m8233_gshared, &t1961_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 452, 0, 33, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t167_0_0_0;
static ParameterInfo t1961_m10627_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t167_0_0_0},
};
extern TypeInfo t1961_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10627_MI = 
{
	"Contains", (methodPointerType)&m8234_gshared, &t1961_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1961_m10627_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1947_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t1961_m10628_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1947_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1961_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10628_MI = 
{
	"CopyTo", (methodPointerType)&m8235_gshared, &t1961_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t35, t1961_m10628_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1961_TI;
extern Il2CppType t1948_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10629_MI = 
{
	"GetEnumerator", (methodPointerType)&m8236_gshared, &t1961_TI, &t1948_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t167_0_0_0;
static ParameterInfo t1961_m10630_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t167_0_0_0},
};
extern TypeInfo t1961_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10630_MI = 
{
	"IndexOf", (methodPointerType)&m8237_gshared, &t1961_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t1961_m10630_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t167_0_0_0;
static ParameterInfo t1961_m10631_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t167_0_0_0},
};
extern TypeInfo t1961_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10631_MI = 
{
	"Insert", (methodPointerType)&m8238_gshared, &t1961_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t1961_m10631_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t167_0_0_0;
static ParameterInfo t1961_m10632_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t167_0_0_0},
};
extern TypeInfo t1961_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10632_MI = 
{
	"InsertItem", (methodPointerType)&m8239_gshared, &t1961_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t1961_m10632_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 34, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t167_0_0_0;
static ParameterInfo t1961_m10633_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t167_0_0_0},
};
extern TypeInfo t1961_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10633_MI = 
{
	"Remove", (methodPointerType)&m8240_gshared, &t1961_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1961_m10633_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1961_m10634_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1961_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10634_MI = 
{
	"RemoveAt", (methodPointerType)&m8241_gshared, &t1961_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t1961_m10634_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1961_m10635_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1961_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10635_MI = 
{
	"RemoveItem", (methodPointerType)&m8242_gshared, &t1961_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t1961_m10635_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 35, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1961_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10636_MI = 
{
	"get_Count", (methodPointerType)&m8243_gshared, &t1961_TI, &t35_0_0_0, RuntimeInvoker_t35, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t1961_m10637_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t1961_TI;
extern Il2CppType t167_0_0_0;
extern void* RuntimeInvoker_t14_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m10637_MI = 
{
	"get_Item", (methodPointerType)&m8244_gshared, &t1961_TI, &t167_0_0_0, RuntimeInvoker_t14_t35, t1961_m10637_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t167_0_0_0;
static ParameterInfo t1961_m10638_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t167_0_0_0},
};
extern TypeInfo t1961_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10638_MI = 
{
	"set_Item", (methodPointerType)&m8245_gshared, &t1961_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t1961_m10638_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t167_0_0_0;
static ParameterInfo t1961_m10639_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t167_0_0_0},
};
extern TypeInfo t1961_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10639_MI = 
{
	"SetItem", (methodPointerType)&m8246_gshared, &t1961_TI, &t25_0_0_0, RuntimeInvoker_t25_t35_t14, t1961_m10639_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 36, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1961_m10640_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1961_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10640_MI = 
{
	"IsValidItem", (methodPointerType)&m8247_gshared, &t1961_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1961_m10640_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1961_m10641_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1961_TI;
extern Il2CppType t167_0_0_0;
extern void* RuntimeInvoker_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10641_MI = 
{
	"ConvertItem", (methodPointerType)&m8248_gshared, &t1961_TI, &t167_0_0_0, RuntimeInvoker_t14_t14, t1961_m10641_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1960_0_0_0;
static ParameterInfo t1961_m10642_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t1960_0_0_0},
};
extern TypeInfo t1961_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10642_MI = 
{
	"CheckWritable", (methodPointerType)&m8249_gshared, &t1961_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t1961_m10642_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1960_0_0_0;
static ParameterInfo t1961_m10643_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t1960_0_0_0},
};
extern TypeInfo t1961_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10643_MI = 
{
	"IsSynchronized", (methodPointerType)&m8250_gshared, &t1961_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1961_m10643_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1960_0_0_0;
static ParameterInfo t1961_m10644_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t1960_0_0_0},
};
extern TypeInfo t1961_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10644_MI = 
{
	"IsFixedSize", (methodPointerType)&m8251_gshared, &t1961_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t1961_m10644_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1961_MIs[] =
{
	&m10609_MI,
	&m10610_MI,
	&m10611_MI,
	&m10612_MI,
	&m10613_MI,
	&m10614_MI,
	&m10615_MI,
	&m10616_MI,
	&m10617_MI,
	&m10618_MI,
	&m10619_MI,
	&m10620_MI,
	&m10621_MI,
	&m10622_MI,
	&m10623_MI,
	&m10624_MI,
	&m10625_MI,
	&m10626_MI,
	&m10627_MI,
	&m10628_MI,
	&m10629_MI,
	&m10630_MI,
	&m10631_MI,
	&m10632_MI,
	&m10633_MI,
	&m10634_MI,
	&m10635_MI,
	&m10636_MI,
	&m10637_MI,
	&m10638_MI,
	&m10639_MI,
	&m10640_MI,
	&m10641_MI,
	&m10642_MI,
	&m10643_MI,
	&m10644_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m10612_MI;
extern MethodInfo m10636_MI;
extern MethodInfo m10618_MI;
extern MethodInfo m10619_MI;
extern MethodInfo m10611_MI;
extern MethodInfo m10620_MI;
extern MethodInfo m10621_MI;
extern MethodInfo m10622_MI;
extern MethodInfo m10623_MI;
extern MethodInfo m10613_MI;
extern MethodInfo m10625_MI;
extern MethodInfo m10614_MI;
extern MethodInfo m10615_MI;
extern MethodInfo m10616_MI;
extern MethodInfo m10617_MI;
extern MethodInfo m10634_MI;
extern MethodInfo m10636_MI;
extern MethodInfo m10610_MI;
extern MethodInfo m10624_MI;
extern MethodInfo m10625_MI;
extern MethodInfo m10627_MI;
extern MethodInfo m10628_MI;
extern MethodInfo m10633_MI;
extern MethodInfo m10630_MI;
extern MethodInfo m10631_MI;
extern MethodInfo m10634_MI;
extern MethodInfo m10637_MI;
extern MethodInfo m10638_MI;
extern MethodInfo m10629_MI;
extern MethodInfo m10626_MI;
extern MethodInfo m10632_MI;
extern MethodInfo m10635_MI;
extern MethodInfo m10639_MI;
static MethodInfo* t1961_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m10612_MI,
	&m10636_MI,
	&m10618_MI,
	&m10619_MI,
	&m10611_MI,
	&m10620_MI,
	&m10621_MI,
	&m10622_MI,
	&m10623_MI,
	&m10613_MI,
	&m10625_MI,
	&m10614_MI,
	&m10615_MI,
	&m10616_MI,
	&m10617_MI,
	&m10634_MI,
	&m10636_MI,
	&m10610_MI,
	&m10624_MI,
	&m10625_MI,
	&m10627_MI,
	&m10628_MI,
	&m10633_MI,
	&m10630_MI,
	&m10631_MI,
	&m10634_MI,
	&m10637_MI,
	&m10638_MI,
	&m10629_MI,
	&m10626_MI,
	&m10632_MI,
	&m10635_MI,
	&m10639_MI,
};
extern TypeInfo t600_TI;
extern TypeInfo t651_TI;
extern TypeInfo t1023_TI;
extern TypeInfo t1949_TI;
extern TypeInfo t1960_TI;
extern TypeInfo t1950_TI;
static TypeInfo* t1961_ITIs[] = 
{
	&t600_TI,
	&t651_TI,
	&t1023_TI,
	&t1949_TI,
	&t1960_TI,
	&t1950_TI,
};
extern TypeInfo t600_TI;
extern TypeInfo t651_TI;
extern TypeInfo t1023_TI;
extern TypeInfo t1949_TI;
extern TypeInfo t1960_TI;
extern TypeInfo t1950_TI;
static Il2CppInterfaceOffsetPair t1961_IOs[] = 
{
	{ &t600_TI, 4},
	{ &t651_TI, 5},
	{ &t1023_TI, 9},
	{ &t1949_TI, 20},
	{ &t1960_TI, 27},
	{ &t1950_TI, 32},
};
extern TypeInfo t350_TI;
extern MethodInfo m1559_MI;
extern MethodInfo m23808_MI;
extern MethodInfo m23806_MI;
extern MethodInfo m23804_MI;
extern MethodInfo m10641_MI;
extern MethodInfo m10632_MI;
extern MethodInfo m10640_MI;
extern TypeInfo t167_TI;
extern MethodInfo m23811_MI;
extern MethodInfo m23815_MI;
extern MethodInfo m10642_MI;
extern MethodInfo m10630_MI;
extern MethodInfo m10635_MI;
extern MethodInfo m10643_MI;
extern MethodInfo m10644_MI;
extern MethodInfo m23813_MI;
extern MethodInfo m10639_MI;
extern MethodInfo m10626_MI;
extern MethodInfo m23810_MI;
extern MethodInfo m23805_MI;
extern MethodInfo m23816_MI;
extern MethodInfo m23817_MI;
extern MethodInfo m23814_MI;
extern Il2CppType t167_0_0_0;
static void* t1961_RGCTXData[25] = 
{
	&t350_TI,
	&m1559_MI,
	&m23808_MI,
	&m23806_MI,
	&m23804_MI,
	&m10641_MI,
	&m10632_MI,
	&m10640_MI,
	&t167_TI,
	&m23811_MI,
	&m23815_MI,
	&m10642_MI,
	&m10630_MI,
	&m10635_MI,
	&m10643_MI,
	&m10644_MI,
	&m23813_MI,
	&m10639_MI,
	&m10626_MI,
	&m23810_MI,
	&m23805_MI,
	&m23816_MI,
	&m23817_MI,
	&m23814_MI,
	(void*)&t167_0_0_0,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1961_0_0_0;
extern Il2CppType t1961_1_0_0;
extern TypeInfo t14_TI;
struct t1961;
extern TypeInfo t1961_TI;
extern Il2CppGenericClass t1961_GC;
extern CustomAttributesCache t849__CustomAttributeCache;
TypeInfo t1961_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Collection`1", "System.Collections.ObjectModel", t1961_MIs, t1961_PIs, t1961_FIs, NULL, &t14_TI, NULL, NULL, &t1961_TI, t1961_ITIs, t1961_VT, &t849__CustomAttributeCache, &t1961_TI, &t1961_0_0_0, &t1961_1_0_0, t1961_IOs, &t1961_GC, NULL, NULL, NULL, t1961_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1961), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 36, 8, 2, 0, 0, 37, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1962_TI;
#include "t1962MD.h"

#include "t1963.h"
extern TypeInfo t1962_TI;
extern TypeInfo t5160_TI;
extern TypeInfo t31_TI;
extern TypeInfo t167_TI;
extern TypeInfo t26_TI;
extern TypeInfo t845_TI;
extern TypeInfo t534_TI;
extern TypeInfo t1963_TI;
extern TypeInfo t35_TI;
#include "t1963MD.h"
extern Il2CppType t5160_0_0_0;
extern Il2CppType t167_0_0_0;
extern Il2CppType t845_0_0_0;
extern MethodInfo m73_MI;
extern MethodInfo m1571_MI;
extern MethodInfo m3005_MI;
extern MethodInfo m3003_MI;
extern MethodInfo m6460_MI;
extern MethodInfo m10650_MI;
extern MethodInfo m23872_MI;
extern MethodInfo m17716_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.Text>
extern Il2CppType t1962_0_0_49;
FieldInfo t1962_f0_FieldInfo = 
{
	"_default", &t1962_0_0_49, &t1962_TI, offsetof(t1962_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1962_FIs[] =
{
	&t1962_f0_FieldInfo,
	NULL
};
extern MethodInfo m10649_MI;
static PropertyInfo t1962____Default_PropertyInfo = 
{
	&t1962_TI, "Default", &m10649_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1962_PIs[] =
{
	&t1962____Default_PropertyInfo,
	NULL
};
extern TypeInfo t1962_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10645_MI = 
{
	".ctor", (methodPointerType)&m8252_gshared, &t1962_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1962_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10646_MI = 
{
	".cctor", (methodPointerType)&m8253_gshared, &t1962_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1962_m10647_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1962_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10647_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m8254_gshared, &t1962_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t1962_m10647_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t14_0_0_0;
static ParameterInfo t1962_m10648_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1962_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10648_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m8255_gshared, &t1962_TI, &t26_0_0_0, RuntimeInvoker_t26_t14_t14, t1962_m10648_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t167_0_0_0;
static ParameterInfo t1962_m23872_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t167_0_0_0},
};
extern TypeInfo t1962_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t35_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m23872_MI = 
{
	"GetHashCode", NULL, &t1962_TI, &t35_0_0_0, RuntimeInvoker_t35_t14, t1962_m23872_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t167_0_0_0;
extern Il2CppType t167_0_0_0;
static ParameterInfo t1962_m17716_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t167_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t167_0_0_0},
};
extern TypeInfo t1962_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m17716_MI = 
{
	"Equals", NULL, &t1962_TI, &t26_0_0_0, RuntimeInvoker_t26_t14_t14, t1962_m17716_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1962_TI;
extern Il2CppType t1962_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m10649_MI = 
{
	"get_Default", (methodPointerType)&m8256_gshared, &t1962_TI, &t1962_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1962_MIs[] =
{
	&m10645_MI,
	&m10646_MI,
	&m10647_MI,
	&m10648_MI,
	&m23872_MI,
	&m17716_MI,
	&m10649_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m17716_MI;
extern MethodInfo m23872_MI;
extern MethodInfo m10648_MI;
extern MethodInfo m10647_MI;
static MethodInfo* t1962_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m17716_MI,
	&m23872_MI,
	&m10648_MI,
	&m10647_MI,
	NULL,
	NULL,
};
extern TypeInfo t5161_TI;
extern TypeInfo t868_TI;
static TypeInfo* t1962_ITIs[] = 
{
	&t5161_TI,
	&t868_TI,
};
extern TypeInfo t5161_TI;
extern TypeInfo t868_TI;
static Il2CppInterfaceOffsetPair t1962_IOs[] = 
{
	{ &t5161_TI, 4},
	{ &t868_TI, 6},
};
extern Il2CppType t5160_0_0_0;
extern Il2CppType t167_0_0_0;
extern TypeInfo t1962_TI;
extern TypeInfo t1962_TI;
extern TypeInfo t1963_TI;
extern MethodInfo m10650_MI;
extern TypeInfo t167_TI;
extern MethodInfo m23872_MI;
extern MethodInfo m17716_MI;
static void* t1962_RGCTXData[9] = 
{
	(void*)&t5160_0_0_0,
	(void*)&t167_0_0_0,
	&t1962_TI,
	&t1962_TI,
	&t1963_TI,
	&m10650_MI,
	&t167_TI,
	&m23872_MI,
	&m17716_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1962_0_0_0;
extern Il2CppType t1962_1_0_0;
extern TypeInfo t14_TI;
struct t1962;
extern TypeInfo t1962_TI;
extern Il2CppGenericClass t1962_GC;
TypeInfo t1962_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t1962_MIs, t1962_PIs, t1962_FIs, NULL, &t14_TI, NULL, NULL, &t1962_TI, t1962_ITIs, t1962_VT, &EmptyCustomAttributesCache, &t1962_TI, &t1962_0_0_0, &t1962_1_0_0, t1962_IOs, &t1962_GC, NULL, NULL, NULL, t1962_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1962), 0, -1, sizeof(t1962_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
