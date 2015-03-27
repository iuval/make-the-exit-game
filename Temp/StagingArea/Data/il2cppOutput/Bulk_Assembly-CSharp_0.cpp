#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t0.h"
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
extern TypeInfo t0_TI;
#include "t0MD.h"


#include "t24.h"

// Metadata Definition <Module>
static MethodInfo* t0_MIs[] =
{
	NULL
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t0_0_0_0;
extern Il2CppType t0_1_0_0;
struct t0;
extern TypeInfo t0_TI;
TypeInfo t0_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "<Module>", "", t0_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t0_TI, NULL, NULL, &EmptyCustomAttributesCache, &t0_TI, &t0_0_0_0, &t0_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t0), 0, -1, 0, 0, -1, 0, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#include "t1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1_TI;
#include "t1MD.h"

#include "t25.h"
#include "t26.h"
#include "t2.h"
#include "t23.h"
#include "t8.h"
#include "t27.h"
#include "t28.h"
#include "t29.h"
extern TypeInfo t1_TI;
extern TypeInfo t23_TI;
extern TypeInfo t2_TI;
extern TypeInfo t25_TI;
extern TypeInfo t27_TI;
#include "t3MD.h"
#include "t30MD.h"
#include "t8MD.h"
#include "t23MD.h"
#include "t29MD.h"
#include "t2MD.h"
extern MethodInfo m39_MI;
extern MethodInfo m40_MI;
extern MethodInfo m41_MI;
extern MethodInfo m42_MI;
extern MethodInfo m43_MI;
extern MethodInfo m44_MI;
extern MethodInfo m45_MI;
extern MethodInfo m46_MI;
extern MethodInfo m47_MI;
extern MethodInfo m4_MI;
struct t30;
#include "t30.h"
#include "t31.h"
#include "t32.h"
struct t30;
#include "t14.h"
 t14 * m48_gshared (t30 * __this, MethodInfo* method);
#define m48(__this, method) (t14 *)m48_gshared((t30 *)__this, method)
#define m40(__this, method) (t2 *)m48_gshared((t30 *)__this, method)
extern MethodInfo m40_MI;


extern MethodInfo m0_MI;
 void m0 (t1 * __this, MethodInfo* method){
	{
		__this->f7 = 1;
		m39(__this, &m39_MI);
		return;
	}
}
extern MethodInfo m1_MI;
 void m1 (t1 * __this, MethodInfo* method){
	{
		t2 * L_0 = m40(__this, &m40_MI);
		__this->f8 = L_0;
		return;
	}
}
extern MethodInfo m2_MI;
 void m2 (t1 * __this, MethodInfo* method){
	t23  V_0 = {0};
	{
		bool L_0 = (__this->f3);
		if (!L_0)
		{
			goto IL_011c;
		}
	}
	{
		t8 * L_1 = m41(__this, &m41_MI);
		t27  L_2 = m42(L_1, &m42_MI);
		t23  L_3 = m43(NULL, L_2, &m43_MI);
		V_0 = L_3;
		float L_4 = ((&V_0)->f2);
		float L_5 = (__this->f4);
		if ((((float)L_4) == ((float)L_5)))
		{
			goto IL_006b;
		}
	}
	{
		float L_6 = ((&V_0)->f2);
		float L_7 = (__this->f4);
		if ((((float)((float)(L_6-L_7))) <= ((float)(0.1f))))
		{
			goto IL_005e;
		}
	}
	{
		t23 * L_8 = (&V_0);
		float L_9 = (L_8->f2);
		L_8->f2 = ((float)(L_9-(0.1f)));
		goto IL_006b;
	}

IL_005e:
	{
		float L_10 = (__this->f4);
		(&V_0)->f2 = L_10;
	}

IL_006b:
	{
		float L_11 = ((&V_0)->f1);
		float L_12 = (__this->f5);
		if ((((float)L_11) == ((float)L_12)))
		{
			goto IL_00ba;
		}
	}
	{
		float L_13 = ((&V_0)->f1);
		float L_14 = (__this->f5);
		if ((((float)((float)(L_13-L_14))) <= ((float)(0.1f))))
		{
			goto IL_00ad;
		}
	}
	{
		t23 * L_15 = (&V_0);
		float L_16 = (L_15->f1);
		L_15->f1 = ((float)(L_16-(0.1f)));
		goto IL_00ba;
	}

IL_00ad:
	{
		float L_17 = (__this->f5);
		(&V_0)->f1 = L_17;
	}

IL_00ba:
	{
		float L_18 = ((&V_0)->f1);
		float L_19 = (__this->f5);
		if ((((float)L_18) != ((float)L_19)))
		{
			goto IL_00e5;
		}
	}
	{
		float L_20 = ((&V_0)->f2);
		float L_21 = (__this->f4);
		if ((((float)L_20) != ((float)L_21)))
		{
			goto IL_00e5;
		}
	}
	{
		__this->f3 = 0;
	}

IL_00e5:
	{
		t8 * L_22 = m41(__this, &m41_MI);
		t27  L_23 = m44(NULL, V_0, &m44_MI);
		m45(L_22, L_23, &m45_MI);
		t2 * L_24 = (__this->f8);
		bool L_25 = m46(NULL, L_24, &m46_MI);
		if (!L_25)
		{
			goto IL_011c;
		}
	}
	{
		bool L_26 = (__this->f3);
		if (L_26)
		{
			goto IL_011c;
		}
	}
	{
		t2 * L_27 = (__this->f8);
		VirtActionInvoker0::Invoke(&m47_MI, L_27);
	}

IL_011c:
	{
		return;
	}
}
extern MethodInfo m3_MI;
 void m3 (t1 * __this, float p0, MethodInfo* method){
	t27  V_0 = {0};
	{
		t8 * L_0 = m41(__this, &m41_MI);
		t27  L_1 = m42(L_0, &m42_MI);
		V_0 = L_1;
		float L_2 = ((&V_0)->f1);
		m4(__this, L_2, p0, &m4_MI);
		__this->f3 = 1;
		return;
	}
}
extern MethodInfo m4_MI;
 void m4 (t1 * __this, float p0, float p1, MethodInfo* method){
	{
		__this->f4 = p1;
		__this->f5 = p0;
		__this->f3 = 1;
		return;
	}
}
// Metadata Definition Box
extern Il2CppType t4_0_0_6;
FieldInfo t1_f2_FieldInfo = 
{
	"Element", &t4_0_0_6, &t1_TI, offsetof(t1, f2), &EmptyCustomAttributesCache};
extern Il2CppType t26_0_0_1;
FieldInfo t1_f3_FieldInfo = 
{
	"isMoving", &t26_0_0_1, &t1_TI, offsetof(t1, f3), &EmptyCustomAttributesCache};
extern Il2CppType t28_0_0_1;
FieldInfo t1_f4_FieldInfo = 
{
	"goToY", &t28_0_0_1, &t1_TI, offsetof(t1, f4), &EmptyCustomAttributesCache};
extern Il2CppType t28_0_0_1;
FieldInfo t1_f5_FieldInfo = 
{
	"goToX", &t28_0_0_1, &t1_TI, offsetof(t1, f5), &EmptyCustomAttributesCache};
extern Il2CppType t26_0_0_6;
FieldInfo t1_f6_FieldInfo = 
{
	"isClickable", &t26_0_0_6, &t1_TI, offsetof(t1, f6), &EmptyCustomAttributesCache};
extern Il2CppType t26_0_0_6;
FieldInfo t1_f7_FieldInfo = 
{
	"isAlive", &t26_0_0_6, &t1_TI, offsetof(t1, f7), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1_f8_FieldInfo = 
{
	"ai", &t2_0_0_1, &t1_TI, offsetof(t1, f8), &EmptyCustomAttributesCache};
static FieldInfo* t1_FIs[] =
{
	&t1_f2_FieldInfo,
	&t1_f3_FieldInfo,
	&t1_f4_FieldInfo,
	&t1_f5_FieldInfo,
	&t1_f6_FieldInfo,
	&t1_f7_FieldInfo,
	&t1_f8_FieldInfo,
	NULL
};
extern TypeInfo t1_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m0_MI = 
{
	".ctor", (methodPointerType)&m0, &t1_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 1, NULL, (methodPointerType)NULL};
extern TypeInfo t1_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m1_MI = 
{
	"Start", (methodPointerType)&m1, &t1_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2, NULL, (methodPointerType)NULL};
extern TypeInfo t1_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m2_MI = 
{
	"Update", (methodPointerType)&m2, &t1_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 3, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
static ParameterInfo t1_m3_ParameterInfos[] = 
{
	{"y", 0, 134217729, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t1_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m3_MI = 
{
	"MoveToY", (methodPointerType)&m3, &t1_TI, &t25_0_0_0, RuntimeInvoker_t25_t28, t1_m3_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t1_m4_ParameterInfos[] = 
{
	{"x", 0, 134217730, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"y", 1, 134217731, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t1_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m4_MI = 
{
	"MoveTo", (methodPointerType)&m4, &t1_TI, &t25_0_0_0, RuntimeInvoker_t25_t28_t28, t1_m4_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 5, NULL, (methodPointerType)NULL};
static MethodInfo* t1_MIs[] =
{
	&m0_MI,
	&m1_MI,
	&m2_MI,
	&m3_MI,
	&m4_MI,
	NULL
};
extern MethodInfo m49_MI;
extern MethodInfo m50_MI;
extern MethodInfo m51_MI;
extern MethodInfo m52_MI;
static MethodInfo* t1_VT[] =
{
	&m49_MI,
	&m50_MI,
	&m51_MI,
	&m52_MI,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t1_0_0_0;
extern Il2CppType t1_1_0_0;
extern TypeInfo t3_TI;
struct t1;
extern TypeInfo t1_TI;
TypeInfo t1_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "Box", "", t1_MIs, NULL, t1_FIs, NULL, &t3_TI, NULL, NULL, &t1_TI, NULL, t1_VT, &EmptyCustomAttributesCache, &t1_TI, &t1_0_0_0, &t1_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 5, 0, 7, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2_TI;

extern MethodInfo m39_MI;


extern MethodInfo m5_MI;
 void m5 (t2 * __this, MethodInfo* method){
	{
		m39(__this, &m39_MI);
		return;
	}
}
// Metadata Definition DropAI
extern TypeInfo t2_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5_MI = 
{
	".ctor", (methodPointerType)&m5, &t2_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 6, NULL, (methodPointerType)NULL};
extern TypeInfo t2_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m47_MI = 
{
	"ActionOnLanding", NULL, &t2_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 4, 0, false, false, 7, NULL, (methodPointerType)NULL};
static MethodInfo* t2_MIs[] =
{
	&m5_MI,
	&m47_MI,
	NULL
};
extern MethodInfo m49_MI;
extern MethodInfo m50_MI;
extern MethodInfo m51_MI;
extern MethodInfo m52_MI;
static MethodInfo* t2_VT[] =
{
	&m49_MI,
	&m50_MI,
	&m51_MI,
	&m52_MI,
	NULL,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_1_0_0;
extern TypeInfo t3_TI;
struct t2;
extern TypeInfo t2_TI;
TypeInfo t2_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "DropAI", "", t2_MIs, NULL, NULL, NULL, &t3_TI, NULL, NULL, &t2_TI, NULL, t2_VT, &EmptyCustomAttributesCache, &t2_TI, &t2_0_0_0, &t2_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2), 0, -1, 0, 0, -1, 1048705, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 5, 0, 0};
#include "t5.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5_TI;
#include "t5MD.h"

extern MethodInfo m5_MI;


extern MethodInfo m6_MI;
 void m6 (t5 * __this, MethodInfo* method){
	{
		m5(__this, &m5_MI);
		return;
	}
}
extern MethodInfo m7_MI;
 void m7 (t5 * __this, MethodInfo* method){
	{
		return;
	}
}
// Metadata Definition DropBonus
extern TypeInfo t5_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6_MI = 
{
	".ctor", (methodPointerType)&m6, &t5_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 8, NULL, (methodPointerType)NULL};
extern TypeInfo t5_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m7_MI = 
{
	"ActionOnLanding", (methodPointerType)&m7, &t5_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 198, 0, 4, 0, false, false, 9, NULL, (methodPointerType)NULL};
static MethodInfo* t5_MIs[] =
{
	&m6_MI,
	&m7_MI,
	NULL
};
extern MethodInfo m49_MI;
extern MethodInfo m50_MI;
extern MethodInfo m51_MI;
extern MethodInfo m52_MI;
extern MethodInfo m7_MI;
static MethodInfo* t5_VT[] =
{
	&m49_MI,
	&m50_MI,
	&m51_MI,
	&m52_MI,
	&m7_MI,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_1_0_0;
extern TypeInfo t2_TI;
struct t5;
extern TypeInfo t5_TI;
TypeInfo t5_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "DropBonus", "", t5_MIs, NULL, NULL, NULL, &t2_TI, NULL, NULL, &t5_TI, NULL, t5_VT, &EmptyCustomAttributesCache, &t5_TI, &t5_0_0_0, &t5_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t5), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 5, 0, 0};
#include "t6.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6_TI;
#include "t6MD.h"

#include "t33.h"
#include "t7.h"
extern TypeInfo t6_TI;
#include "t7MD.h"
#include "t34MD.h"
#include "t27MD.h"
extern MethodInfo m5_MI;
extern MethodInfo m53_MI;
extern MethodInfo m54_MI;
extern MethodInfo m55_MI;
extern MethodInfo m41_MI;
extern MethodInfo m42_MI;
extern MethodInfo m56_MI;
extern MethodInfo m45_MI;


extern MethodInfo m8_MI;
 void m8 (t6 * __this, MethodInfo* method){
	{
		__this->f4 = (0.3f);
		m5(__this, &m5_MI);
		return;
	}
}
extern MethodInfo m9_MI;
 void m9 (t6 * __this, MethodInfo* method){
	{
		t7 * L_0 = m53(NULL, (t33*) &_stringLiteral1, &m53_MI);
		__this->f2 = L_0;
		t7 * L_1 = (__this->f2);
		t8 * L_2 = m54(L_1, &m54_MI);
		__this->f3 = L_2;
		return;
	}
}
extern MethodInfo m10_MI;
 void m10 (t6 * __this, MethodInfo* method){
	{
		__this->f5 = 1;
		return;
	}
}
extern MethodInfo m11_MI;
 void m11 (t6 * __this, MethodInfo* method){
	float V_0 = 0.0f;
	{
		bool L_0 = (__this->f5);
		if (!L_0)
		{
			goto IL_003f;
		}
	}
	{
		float L_1 = (__this->f4);
		float L_2 = m55(NULL, &m55_MI);
		V_0 = ((float)(L_1*L_2));
		t8 * L_3 = m41(__this, &m41_MI);
		t8 * L_4 = m41(__this, &m41_MI);
		t27  L_5 = m42(L_4, &m42_MI);
		t8 * L_6 = (__this->f3);
		t27  L_7 = m42(L_6, &m42_MI);
		t27  L_8 = m56(NULL, L_5, L_7, V_0, &m56_MI);
		m45(L_3, L_8, &m45_MI);
	}

IL_003f:
	{
		return;
	}
}
// Metadata Definition DropEnemy
extern Il2CppType t7_0_0_1;
FieldInfo t6_f2_FieldInfo = 
{
	"player", &t7_0_0_1, &t6_TI, offsetof(t6, f2), &EmptyCustomAttributesCache};
extern Il2CppType t8_0_0_1;
FieldInfo t6_f3_FieldInfo = 
{
	"playerTransform", &t8_0_0_1, &t6_TI, offsetof(t6, f3), &EmptyCustomAttributesCache};
extern Il2CppType t28_0_0_1;
FieldInfo t6_f4_FieldInfo = 
{
	"speed", &t28_0_0_1, &t6_TI, offsetof(t6, f4), &EmptyCustomAttributesCache};
extern Il2CppType t26_0_0_1;
FieldInfo t6_f5_FieldInfo = 
{
	"doAction", &t26_0_0_1, &t6_TI, offsetof(t6, f5), &EmptyCustomAttributesCache};
static FieldInfo* t6_FIs[] =
{
	&t6_f2_FieldInfo,
	&t6_f3_FieldInfo,
	&t6_f4_FieldInfo,
	&t6_f5_FieldInfo,
	NULL
};
extern TypeInfo t6_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8_MI = 
{
	".ctor", (methodPointerType)&m8, &t6_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 10, NULL, (methodPointerType)NULL};
extern TypeInfo t6_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m9_MI = 
{
	"Start", (methodPointerType)&m9, &t6_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 11, NULL, (methodPointerType)NULL};
extern TypeInfo t6_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m10_MI = 
{
	"ActionOnLanding", (methodPointerType)&m10, &t6_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 198, 0, 4, 0, false, false, 12, NULL, (methodPointerType)NULL};
extern TypeInfo t6_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m11_MI = 
{
	"Update", (methodPointerType)&m11, &t6_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 13, NULL, (methodPointerType)NULL};
static MethodInfo* t6_MIs[] =
{
	&m8_MI,
	&m9_MI,
	&m10_MI,
	&m11_MI,
	NULL
};
extern MethodInfo m49_MI;
extern MethodInfo m50_MI;
extern MethodInfo m51_MI;
extern MethodInfo m52_MI;
extern MethodInfo m10_MI;
static MethodInfo* t6_VT[] =
{
	&m49_MI,
	&m50_MI,
	&m51_MI,
	&m52_MI,
	&m10_MI,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t6_0_0_0;
extern Il2CppType t6_1_0_0;
extern TypeInfo t2_TI;
struct t6;
extern TypeInfo t6_TI;
TypeInfo t6_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "DropEnemy", "", t6_MIs, NULL, t6_FIs, NULL, &t2_TI, NULL, NULL, &t6_TI, NULL, t6_VT, &EmptyCustomAttributesCache, &t6_TI, &t6_0_0_0, &t6_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t6), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 4, 0, 4, 0, 0, 5, 0, 0};
#include "t9.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t9_TI;
#include "t9MD.h"

#include "UnityEngine_ArrayTypes.h"
#include "Assembly-CSharp_ArrayTypes.h"
#include "t4.h"
#include "t13.h"
#include "t10.h"
#include "t35.h"
#include "t19.h"
extern TypeInfo t10_TI;
extern TypeInfo t13_TI;
extern TypeInfo t14_TI;
extern TypeInfo t35_TI;
extern TypeInfo t23_TI;
extern TypeInfo t36_TI;
extern TypeInfo t33_TI;
extern TypeInfo t19_TI;
extern TypeInfo t26_TI;
extern TypeInfo t37_TI;
extern TypeInfo t25_TI;
#include "t10MD.h"
#include "t13MD.h"
#include "t33MD.h"
#include "t38MD.h"
#include "t19MD.h"
extern MethodInfo m14_MI;
extern MethodInfo m57_MI;
extern MethodInfo m58_MI;
extern MethodInfo m54_MI;
extern MethodInfo m42_MI;
extern MethodInfo m43_MI;
extern MethodInfo m59_MI;
extern MethodInfo m60_MI;
extern MethodInfo m61_MI;
extern MethodInfo m62_MI;
extern MethodInfo m63_MI;
extern MethodInfo m64_MI;
extern MethodInfo m65_MI;
extern MethodInfo m66_MI;
extern MethodInfo m26_MI;
extern MethodInfo m67_MI;
extern MethodInfo m68_MI;
extern MethodInfo m29_MI;
struct t7;
struct t7;
 t14 * m69_gshared (t7 * __this, MethodInfo* method);
#define m69(__this, method) (t14 *)m69_gshared((t7 *)__this, method)
#define m63(__this, method) (t1 *)m69_gshared((t7 *)__this, method)
extern MethodInfo m63_MI;


extern MethodInfo m12_MI;
 void m12 (t9 * __this, t11* p0, t12* p1, t7 * p2, MethodInfo* method){
	{
		m14(__this, p0, p1, p2, &m14_MI);
		return;
	}
}
extern MethodInfo m13_MI;
 void m13 (t9 * __this, t13 * p0, MethodInfo* method){
	t23  V_0 = {0};
	t23  V_1 = {0};
	t14 * V_2 = {0};
	t1 * V_3 = {0};
	t23  V_4 = {0};
	t23  V_5 = {0};
	t14 * V_6 = {0};
	int32_t leaveInstructions[1] = {0};
	t39 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t39 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		t11* L_0 = (__this->f0);
		t14 * L_1 = (t14 *)VirtFuncInvoker1< t14 *, int32_t >::Invoke(&m57_MI, p0, 0);
		V_4 = ((*(t23 *)((t23 *)UnBox (L_1, InitializedTypeInfo(&t23_TI)))));
		float L_2 = ((&V_4)->f1);
		t14 * L_3 = (t14 *)VirtFuncInvoker1< t14 *, int32_t >::Invoke(&m57_MI, p0, 0);
		V_5 = ((*(t23 *)((t23 *)UnBox (L_3, InitializedTypeInfo(&t23_TI)))));
		float L_4 = ((&V_5)->f2);
		t7 * L_5 = GenArrayGet2(L_0, (((int32_t)L_2)), (((int32_t)L_4)), t7 *);;
		t8 * L_6 = m54(L_5, &m54_MI);
		t27  L_7 = m42(L_6, &m42_MI);
		t23  L_8 = m43(NULL, L_7, &m43_MI);
		V_0 = L_8;
		t14 * L_9 = (t14 *)VirtFuncInvoker0< t14 * >::Invoke(&m59_MI, p0);
		V_2 = L_9;
	}

IL_004e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00ce;
		}

IL_0053:
		{
			t14 * L_10 = (t14 *)InterfaceFuncInvoker0< t14 * >::Invoke(&m60_MI, V_2);
			V_1 = ((*(t23 *)((t23 *)UnBox (L_10, InitializedTypeInfo(&t23_TI)))));
			t23  L_11 = V_1;
			t14 * L_12 = Box(InitializedTypeInfo(&t23_TI), &L_11);
			IL2CPP_RUNTIME_CLASS_INIT((&t33_TI));
			t33* L_13 = m61(NULL, (t33*) &_stringLiteral2, L_12, &m61_MI);
			m62(NULL, L_13, &m62_MI);
			t11* L_14 = (__this->f0);
			float L_15 = ((&V_1)->f1);
			float L_16 = ((&V_1)->f2);
			t7 * L_17 = GenArrayGet2(L_14, (((int32_t)L_15)), (((int32_t)L_16)), t7 *);;
			t1 * L_18 = m63(L_17, &m63_MI);
			V_3 = L_18;
			t7 * L_19 = m64(V_3, &m64_MI);
			m65(NULL, L_19, &m65_MI);
			t11* L_20 = (__this->f0);
			float L_21 = ((&V_1)->f1);
			float L_22 = ((&V_1)->f2);
			GenArraySet2(L_20, (((int32_t)L_21)), (((int32_t)L_22)), (t7 *)NULL, t7 *);;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t19_TI));
			float L_23 = ((&V_1)->f1);
			m26((((t19_SFs*)InitializedTypeInfo(&t19_TI)->static_fields)->f2), (((int32_t)L_23)), &m26_MI);
		}

IL_00ce:
		{
			bool L_24 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m67_MI, V_2);
			if (L_24)
			{
				goto IL_0053;
			}
		}

IL_00d9:
		{
			// IL_00d9: leave IL_00f3
			leaveInstructions[0] = 0xF3; // 1
			THROW_SENTINEL(IL_00f3);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_00de;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t39 *)e.ex;
		goto IL_00de;
	}

IL_00de:
	{ // begin finally (depth: 1)
		{
			V_6 = ((t14 *)IsInst(V_2, InitializedTypeInfo(&t37_TI)));
			if (V_6)
			{
				goto IL_00eb;
			}
		}

IL_00ea:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0xF3:
					goto IL_00f3;
				default:
				{
					#if IL2CPP_DEBUG
					assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
					#endif
					t39 * _tmp_exception_local = __last_unhandled_exception;
					__last_unhandled_exception = 0;
					il2cpp_codegen_raise_exception (_tmp_exception_local);
				}
			}
		}

IL_00eb:
		{
			InterfaceActionInvoker0::Invoke(&m68_MI, V_6);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0xF3:
					goto IL_00f3;
				default:
				{
					#if IL2CPP_DEBUG
					assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
					#endif
					t39 * _tmp_exception_local = __last_unhandled_exception;
					__last_unhandled_exception = 0;
					il2cpp_codegen_raise_exception (_tmp_exception_local);
				}
			}
		}
	} // end finally (depth: 1)

IL_00f3:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t19_TI));
		t7 * L_25 = (__this->f1);
		m29((((t19_SFs*)InitializedTypeInfo(&t19_TI)->static_fields)->f2), L_25, V_0, &m29_MI);
		return;
	}
}
// Metadata Definition DropEffect
extern Il2CppType t11_0_0_0;
extern Il2CppType t12_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t9_m12_ParameterInfos[] = 
{
	{"all", 0, 134217732, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"pattern", 1, 134217733, &EmptyCustomAttributesCache, &t12_0_0_0},
	{"prefav", 2, 134217734, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t9_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m12_MI = 
{
	".ctor", (methodPointerType)&m12, &t9_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t14_t14, t9_m12_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 14, NULL, (methodPointerType)NULL};
extern Il2CppType t13_0_0_0;
static ParameterInfo t9_m13_ParameterInfos[] = 
{
	{"positions", 0, 134217735, &EmptyCustomAttributesCache, &t13_0_0_0},
};
extern TypeInfo t9_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m13_MI = 
{
	"DoEffect", (methodPointerType)&m13, &t9_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t9_m13_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, false, 15, NULL, (methodPointerType)NULL};
static MethodInfo* t9_MIs[] =
{
	&m12_MI,
	&m13_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m13_MI;
static MethodInfo* t9_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m13_MI,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t9_0_0_0;
extern Il2CppType t9_1_0_0;
extern TypeInfo t10_TI;
struct t9;
extern TypeInfo t9_TI;
TypeInfo t9_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "DropEffect", "", t9_MIs, NULL, NULL, NULL, &t10_TI, NULL, NULL, &t9_TI, NULL, t9_VT, &EmptyCustomAttributesCache, &t9_TI, &t9_0_0_0, &t9_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t9), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 5, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t10_TI;

#include "mscorlib_ArrayTypes.h"
extern TypeInfo t10_TI;
extern TypeInfo t13_TI;
extern TypeInfo t35_TI;
extern TypeInfo t14_TI;
extern TypeInfo t23_TI;
extern TypeInfo t26_TI;
extern TypeInfo t1_TI;
extern TypeInfo t40_TI;
extern TypeInfo t33_TI;
extern TypeInfo t4_TI;
extern TypeInfo t25_TI;
#include "t14MD.h"
extern MethodInfo m73_MI;
extern MethodInfo m74_MI;
extern MethodInfo m75_MI;
extern MethodInfo m57_MI;
extern MethodInfo m76_MI;
extern MethodInfo m58_MI;
extern MethodInfo m63_MI;
extern MethodInfo m77_MI;
extern MethodInfo m78_MI;
extern MethodInfo m62_MI;
extern MethodInfo m61_MI;
extern MethodInfo m79_MI;
extern MethodInfo m63_MI;


extern MethodInfo m14_MI;
 void m14 (t10 * __this, t11* p0, t12* p1, t7 * p2, MethodInfo* method){
	{
		m73(__this, &m73_MI);
		__this->f0 = p0;
		__this->f2 = p1;
		__this->f1 = p2;
		return;
	}
}
extern MethodInfo m15_MI;
 bool m15 (t10 * __this, t13 * p0, MethodInfo* method){
	t13 * V_0 = {0};
	int32_t V_1 = 0;
	t23  V_2 = {0};
	int32_t V_3 = {0};
	t12* V_4 = {0};
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	t33* V_8 = {0};
	int32_t V_9 = {0};
	t12* V_10 = {0};
	int32_t V_11 = 0;
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m74_MI, p0);
		t12* L_1 = (__this->f2);
		if ((((int32_t)L_0) == ((int32_t)(((int32_t)(((t24 *)L_1)->max_length))))))
		{
			goto IL_0015;
		}
	}
	{
		return 0;
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t13_TI));
		t13 * L_2 = (t13 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t13_TI));
		m75(L_2, &m75_MI);
		V_0 = L_2;
		V_1 = 0;
		t12* L_3 = (__this->f2);
		V_4 = L_3;
		V_5 = 0;
		goto IL_00c2;
	}

IL_002d:
	{
		V_3 = (*(int32_t*)(int32_t*)SZArrayLdElema(V_4, V_5));
		V_6 = 0;
		V_7 = 0;
		goto IL_00a8;
	}

IL_003e:
	{
		t14 * L_4 = (t14 *)VirtFuncInvoker1< t14 *, int32_t >::Invoke(&m57_MI, p0, V_7);
		V_2 = ((*(t23 *)((t23 *)UnBox (L_4, InitializedTypeInfo(&t23_TI)))));
		t23  L_5 = V_2;
		t14 * L_6 = Box(InitializedTypeInfo(&t23_TI), &L_5);
		bool L_7 = (bool)VirtFuncInvoker1< bool, t14 * >::Invoke(&m76_MI, V_0, L_6);
		if (L_7)
		{
			goto IL_00a2;
		}
	}
	{
		t11* L_8 = (__this->f0);
		float L_9 = ((&V_2)->f1);
		float L_10 = ((&V_2)->f2);
		t7 * L_11 = GenArrayGet2(L_8, (((int32_t)L_9)), (((int32_t)L_10)), t7 *);;
		t1 * L_12 = m63(L_11, &m63_MI);
		int32_t L_13 = (L_12->f2);
		V_6 = ((int32_t)(V_6|((((int32_t)L_13) == ((int32_t)V_3))? 1 : 0)));
		if (!V_6)
		{
			goto IL_00a2;
		}
	}
	{
		V_1 = ((int32_t)(V_1+1));
		t23  L_14 = V_2;
		t14 * L_15 = Box(InitializedTypeInfo(&t23_TI), &L_14);
		VirtFuncInvoker1< int32_t, t14 * >::Invoke(&m77_MI, V_0, L_15);
	}

IL_00a2:
	{
		V_7 = ((int32_t)(V_7+1));
	}

IL_00a8:
	{
		if (V_6)
		{
			goto IL_00bc;
		}
	}
	{
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m74_MI, p0);
		if ((((int32_t)V_7) < ((int32_t)L_16)))
		{
			goto IL_003e;
		}
	}

IL_00bc:
	{
		V_5 = ((int32_t)(V_5+1));
	}

IL_00c2:
	{
		if ((((int32_t)V_5) < ((int32_t)(((int32_t)(((t24 *)V_4)->max_length))))))
		{
			goto IL_002d;
		}
	}
	{
		t40* L_17 = ((t40*)SZArrayNew(InitializedTypeInfo(&t40_TI), 4));
		ArrayElementTypeCheck (L_17, (t33*) &_stringLiteral3);
		*((t14 **)(t14 **)SZArrayLdElema(L_17, 0)) = (t14 *)(t33*) &_stringLiteral3;
		t40* L_18 = L_17;
		t12* L_19 = (__this->f2);
		int32_t L_20 = (((int32_t)(((t24 *)L_19)->max_length)));
		t14 * L_21 = Box(InitializedTypeInfo(&t35_TI), &L_20);
		ArrayElementTypeCheck (L_18, L_21);
		*((t14 **)(t14 **)SZArrayLdElema(L_18, 1)) = (t14 *)L_21;
		t40* L_22 = L_18;
		ArrayElementTypeCheck (L_22, (t33*) &_stringLiteral4);
		*((t14 **)(t14 **)SZArrayLdElema(L_22, 2)) = (t14 *)(t33*) &_stringLiteral4;
		t40* L_23 = L_22;
		int32_t L_24 = V_1;
		t14 * L_25 = Box(InitializedTypeInfo(&t35_TI), &L_24);
		ArrayElementTypeCheck (L_23, L_25);
		*((t14 **)(t14 **)SZArrayLdElema(L_23, 3)) = (t14 *)L_25;
		IL2CPP_RUNTIME_CLASS_INIT((&t33_TI));
		t33* L_26 = m78(NULL, L_23, &m78_MI);
		m62(NULL, L_26, &m62_MI);
		t12* L_27 = (__this->f2);
		if ((((uint32_t)(((int32_t)(((t24 *)L_27)->max_length)))) != ((uint32_t)V_1)))
		{
			goto IL_0163;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t33_TI));
		V_8 = (((t33_SFs*)(&t33_TI)->static_fields)->f2);
		t12* L_28 = (__this->f2);
		V_10 = L_28;
		V_11 = 0;
		goto IL_0148;
	}

IL_012b:
	{
		V_9 = (*(int32_t*)(int32_t*)SZArrayLdElema(V_10, V_11));
		int32_t L_29 = V_9;
		t14 * L_30 = Box(InitializedTypeInfo(&t4_TI), &L_29);
		IL2CPP_RUNTIME_CLASS_INIT((&t33_TI));
		t33* L_31 = m61(NULL, V_8, L_30, &m61_MI);
		V_8 = L_31;
		V_11 = ((int32_t)(V_11+1));
	}

IL_0148:
	{
		if ((((int32_t)V_11) < ((int32_t)(((int32_t)(((t24 *)V_10)->max_length))))))
		{
			goto IL_012b;
		}
	}
	{
		m62(NULL, V_8, &m62_MI);
		VirtActionInvoker1< t13 * >::Invoke(&m79_MI, __this, p0);
		return 1;
	}

IL_0163:
	{
		return 0;
	}
}
// Metadata Definition Effect
extern Il2CppType t11_0_0_4;
FieldInfo t10_f0_FieldInfo = 
{
	"all", &t11_0_0_4, &t10_TI, offsetof(t10, f0), &EmptyCustomAttributesCache};
extern Il2CppType t7_0_0_4;
FieldInfo t10_f1_FieldInfo = 
{
	"prefav", &t7_0_0_4, &t10_TI, offsetof(t10, f1), &EmptyCustomAttributesCache};
extern Il2CppType t12_0_0_1;
FieldInfo t10_f2_FieldInfo = 
{
	"pattern", &t12_0_0_1, &t10_TI, offsetof(t10, f2), &EmptyCustomAttributesCache};
static FieldInfo* t10_FIs[] =
{
	&t10_f0_FieldInfo,
	&t10_f1_FieldInfo,
	&t10_f2_FieldInfo,
	NULL
};
extern Il2CppType t11_0_0_0;
extern Il2CppType t12_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t10_m14_ParameterInfos[] = 
{
	{"all", 0, 134217736, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"pattern", 1, 134217737, &EmptyCustomAttributesCache, &t12_0_0_0},
	{"prefav", 2, 134217738, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t10_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m14_MI = 
{
	".ctor", (methodPointerType)&m14, &t10_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t14_t14, t10_m14_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 16, NULL, (methodPointerType)NULL};
extern Il2CppType t13_0_0_0;
static ParameterInfo t10_m15_ParameterInfos[] = 
{
	{"positions", 0, 134217739, &EmptyCustomAttributesCache, &t13_0_0_0},
};
extern TypeInfo t10_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m15_MI = 
{
	"LookForMatches", (methodPointerType)&m15, &t10_TI, &t26_0_0_0, RuntimeInvoker_t26_t14, t10_m15_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 17, NULL, (methodPointerType)NULL};
extern Il2CppType t13_0_0_0;
static ParameterInfo t10_m79_ParameterInfos[] = 
{
	{"positions", 0, 134217740, &EmptyCustomAttributesCache, &t13_0_0_0},
};
extern TypeInfo t10_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m79_MI = 
{
	"DoEffect", NULL, &t10_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t10_m79_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, false, 18, NULL, (methodPointerType)NULL};
static MethodInfo* t10_MIs[] =
{
	&m14_MI,
	&m15_MI,
	&m79_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
static MethodInfo* t10_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	NULL,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t10_0_0_0;
extern Il2CppType t10_1_0_0;
extern TypeInfo t14_TI;
struct t10;
extern TypeInfo t10_TI;
TypeInfo t10_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "Effect", "", t10_MIs, NULL, t10_FIs, NULL, &t14_TI, NULL, NULL, &t10_TI, NULL, t10_VT, &EmptyCustomAttributesCache, &t10_TI, &t10_0_0_0, &t10_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t10), 0, -1, 0, 0, -1, 1048705, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 3, 0, 0, 5, 0, 0};
#include "t15.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t15_TI;
#include "t15MD.h"

extern TypeInfo t13_TI;
extern TypeInfo t14_TI;
extern TypeInfo t35_TI;
extern TypeInfo t23_TI;
extern TypeInfo t10_TI;
extern TypeInfo t19_TI;
extern MethodInfo m14_MI;
extern MethodInfo m57_MI;
extern MethodInfo m58_MI;
extern MethodInfo m63_MI;
extern MethodInfo m64_MI;
extern MethodInfo m65_MI;
extern MethodInfo m54_MI;
extern MethodInfo m42_MI;
extern MethodInfo m43_MI;
extern MethodInfo m27_MI;
extern MethodInfo m66_MI;
extern MethodInfo m26_MI;
extern MethodInfo m74_MI;
extern MethodInfo m63_MI;


extern MethodInfo m16_MI;
 void m16 (t15 * __this, t11* p0, t12* p1, t7 * p2, MethodInfo* method){
	{
		m14(__this, p0, p1, p2, &m14_MI);
		return;
	}
}
extern MethodInfo m17_MI;
 void m17 (t15 * __this, t13 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	t23  V_1 = {0};
	t1 * V_2 = {0};
	{
		V_0 = 0;
		goto IL_00b9;
	}

IL_0007:
	{
		t14 * L_0 = (t14 *)VirtFuncInvoker1< t14 *, int32_t >::Invoke(&m57_MI, p0, V_0);
		V_1 = ((*(t23 *)((t23 *)UnBox (L_0, InitializedTypeInfo(&t23_TI)))));
		t11* L_1 = (__this->f0);
		float L_2 = ((&V_1)->f1);
		float L_3 = ((&V_1)->f2);
		t7 * L_4 = GenArrayGet2(L_1, (((int32_t)L_2)), (((int32_t)L_3)), t7 *);;
		t1 * L_5 = m63(L_4, &m63_MI);
		V_2 = L_5;
		t7 * L_6 = m64(V_2, &m64_MI);
		m65(NULL, L_6, &m65_MI);
		if (V_0)
		{
			goto IL_0087;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t19_TI));
		t7 * L_7 = (__this->f1);
		t11* L_8 = (__this->f0);
		float L_9 = ((&V_1)->f1);
		float L_10 = ((&V_1)->f2);
		t7 * L_11 = GenArrayGet2(L_8, (((int32_t)L_9)), (((int32_t)L_10)), t7 *);;
		t8 * L_12 = m54(L_11, &m54_MI);
		t27  L_13 = m42(L_12, &m42_MI);
		t23  L_14 = m43(NULL, L_13, &m43_MI);
		m27((((t19_SFs*)InitializedTypeInfo(&t19_TI)->static_fields)->f2), L_7, V_1, L_14, &m27_MI);
		goto IL_00b5;
	}

IL_0087:
	{
		t11* L_15 = (__this->f0);
		float L_16 = ((&V_1)->f1);
		float L_17 = ((&V_1)->f2);
		GenArraySet2(L_15, (((int32_t)L_16)), (((int32_t)L_17)), (t7 *)NULL, t7 *);;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t19_TI));
		float L_18 = ((&V_1)->f1);
		m26((((t19_SFs*)InitializedTypeInfo(&t19_TI)->static_fields)->f2), (((int32_t)L_18)), &m26_MI);
	}

IL_00b5:
	{
		V_0 = ((int32_t)(V_0+1));
	}

IL_00b9:
	{
		int32_t L_19 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m74_MI, p0);
		if ((((int32_t)V_0) < ((int32_t)L_19)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Metadata Definition NewBoxEffect
extern Il2CppType t11_0_0_0;
extern Il2CppType t12_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t15_m16_ParameterInfos[] = 
{
	{"all", 0, 134217741, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"pattern", 1, 134217742, &EmptyCustomAttributesCache, &t12_0_0_0},
	{"prefav", 2, 134217743, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t15_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14_t14_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m16_MI = 
{
	".ctor", (methodPointerType)&m16, &t15_TI, &t25_0_0_0, RuntimeInvoker_t25_t14_t14_t14, t15_m16_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 19, NULL, (methodPointerType)NULL};
extern Il2CppType t13_0_0_0;
static ParameterInfo t15_m17_ParameterInfos[] = 
{
	{"positions", 0, 134217744, &EmptyCustomAttributesCache, &t13_0_0_0},
};
extern TypeInfo t15_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m17_MI = 
{
	"DoEffect", (methodPointerType)&m17, &t15_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t15_m17_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, false, 20, NULL, (methodPointerType)NULL};
static MethodInfo* t15_MIs[] =
{
	&m16_MI,
	&m17_MI,
	NULL
};
extern MethodInfo m70_MI;
extern MethodInfo m50_MI;
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
extern MethodInfo m17_MI;
static MethodInfo* t15_VT[] =
{
	&m70_MI,
	&m50_MI,
	&m71_MI,
	&m72_MI,
	&m17_MI,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t15_0_0_0;
extern Il2CppType t15_1_0_0;
extern TypeInfo t10_TI;
struct t15;
extern TypeInfo t15_TI;
TypeInfo t15_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "NewBoxEffect", "", t15_MIs, NULL, NULL, NULL, &t10_TI, NULL, NULL, &t15_TI, NULL, t15_VT, &EmptyCustomAttributesCache, &t15_TI, &t15_0_0_0, &t15_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t15), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 5, 0, 0};
#include "t16.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t16_TI;
#include "t16MD.h"

extern TypeInfo t16_TI;
extern TypeInfo t17_TI;
extern TypeInfo t10_TI;
extern TypeInfo t12_TI;
extern TypeInfo t4_TI;
extern TypeInfo t15_TI;
extern TypeInfo t9_TI;
extern TypeInfo t13_TI;
extern TypeInfo t36_TI;
extern TypeInfo t14_TI;
extern TypeInfo t23_TI;
extern TypeInfo t33_TI;
extern TypeInfo t19_TI;
extern TypeInfo t26_TI;
extern TypeInfo t37_TI;
extern TypeInfo t25_TI;
extern MethodInfo m39_MI;
extern MethodInfo m16_MI;
extern MethodInfo m12_MI;
extern MethodInfo m15_MI;
extern MethodInfo m62_MI;
extern MethodInfo m59_MI;
extern MethodInfo m60_MI;
extern MethodInfo m61_MI;
extern MethodInfo m58_MI;
extern MethodInfo m63_MI;
extern MethodInfo m64_MI;
extern MethodInfo m54_MI;
extern MethodInfo m42_MI;
extern MethodInfo m43_MI;
extern MethodInfo m28_MI;
extern MethodInfo m65_MI;
extern MethodInfo m66_MI;
extern MethodInfo m26_MI;
extern MethodInfo m67_MI;
extern MethodInfo m68_MI;
extern MethodInfo m63_MI;


extern MethodInfo m18_MI;
 void m18 (t16 * __this, MethodInfo* method){
	{
		m39(__this, &m39_MI);
		return;
	}
}
extern MethodInfo m19_MI;
 void m19 (t16 * __this, t11* p0, MethodInfo* method){
	{
		__this->f2 = p0;
		t17* L_0 = ((t17*)SZArrayNew(InitializedTypeInfo(&t17_TI), 8));
		t12* L_1 = ((t12*)SZArrayNew(InitializedTypeInfo(&t12_TI), 3));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_1, 0)) = (int32_t)1;
		t12* L_2 = L_1;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_2, 1)) = (int32_t)1;
		t12* L_3 = L_2;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_3, 2)) = (int32_t)1;
		t7 * L_4 = (__this->f4);
		t15 * L_5 = (t15 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t15_TI));
		m16(L_5, p0, L_3, L_4, &m16_MI);
		ArrayElementTypeCheck (L_0, L_5);
		*((t10 **)(t10 **)SZArrayLdElema(L_0, 0)) = (t10 *)L_5;
		t17* L_6 = L_0;
		t12* L_7 = ((t12*)SZArrayNew(InitializedTypeInfo(&t12_TI), 2));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_7, 0)) = (int32_t)4;
		t12* L_8 = L_7;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_8, 1)) = (int32_t)6;
		t7 * L_9 = (__this->f5);
		t9 * L_10 = (t9 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t9_TI));
		m12(L_10, p0, L_8, L_9, &m12_MI);
		ArrayElementTypeCheck (L_6, L_10);
		*((t10 **)(t10 **)SZArrayLdElema(L_6, 1)) = (t10 *)L_10;
		t17* L_11 = L_6;
		t12* L_12 = ((t12*)SZArrayNew(InitializedTypeInfo(&t12_TI), 3));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_12, 0)) = (int32_t)4;
		t12* L_13 = L_12;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_13, 1)) = (int32_t)1;
		t12* L_14 = L_13;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_14, 2)) = (int32_t)1;
		t7 * L_15 = (__this->f6);
		t9 * L_16 = (t9 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t9_TI));
		m12(L_16, p0, L_14, L_15, &m12_MI);
		ArrayElementTypeCheck (L_11, L_16);
		*((t10 **)(t10 **)SZArrayLdElema(L_11, 2)) = (t10 *)L_16;
		t17* L_17 = L_11;
		t12* L_18 = ((t12*)SZArrayNew(InitializedTypeInfo(&t12_TI), 3));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_18, 0)) = (int32_t)4;
		t12* L_19 = L_18;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_19, 1)) = (int32_t)4;
		t12* L_20 = L_19;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_20, 2)) = (int32_t)1;
		t7 * L_21 = (__this->f9);
		t9 * L_22 = (t9 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t9_TI));
		m12(L_22, p0, L_20, L_21, &m12_MI);
		ArrayElementTypeCheck (L_17, L_22);
		*((t10 **)(t10 **)SZArrayLdElema(L_17, 3)) = (t10 *)L_22;
		t17* L_23 = L_17;
		t12* L_24 = ((t12*)SZArrayNew(InitializedTypeInfo(&t12_TI), 3));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_24, 0)) = (int32_t)4;
		t12* L_25 = L_24;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_25, 1)) = (int32_t)2;
		t12* L_26 = L_25;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_26, 2)) = (int32_t)2;
		t7 * L_27 = (__this->f7);
		t9 * L_28 = (t9 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t9_TI));
		m12(L_28, p0, L_26, L_27, &m12_MI);
		ArrayElementTypeCheck (L_23, L_28);
		*((t10 **)(t10 **)SZArrayLdElema(L_23, 4)) = (t10 *)L_28;
		t17* L_29 = L_23;
		t12* L_30 = ((t12*)SZArrayNew(InitializedTypeInfo(&t12_TI), 3));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_30, 0)) = (int32_t)4;
		t12* L_31 = L_30;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_31, 1)) = (int32_t)4;
		t12* L_32 = L_31;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_32, 2)) = (int32_t)2;
		t7 * L_33 = (__this->f10);
		t9 * L_34 = (t9 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t9_TI));
		m12(L_34, p0, L_32, L_33, &m12_MI);
		ArrayElementTypeCheck (L_29, L_34);
		*((t10 **)(t10 **)SZArrayLdElema(L_29, 5)) = (t10 *)L_34;
		t17* L_35 = L_29;
		t12* L_36 = ((t12*)SZArrayNew(InitializedTypeInfo(&t12_TI), 3));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_36, 0)) = (int32_t)4;
		t12* L_37 = L_36;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_37, 1)) = (int32_t)3;
		t12* L_38 = L_37;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_38, 2)) = (int32_t)3;
		t7 * L_39 = (__this->f8);
		t9 * L_40 = (t9 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t9_TI));
		m12(L_40, p0, L_38, L_39, &m12_MI);
		ArrayElementTypeCheck (L_35, L_40);
		*((t10 **)(t10 **)SZArrayLdElema(L_35, 6)) = (t10 *)L_40;
		t17* L_41 = L_35;
		t12* L_42 = ((t12*)SZArrayNew(InitializedTypeInfo(&t12_TI), 3));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_42, 0)) = (int32_t)4;
		t12* L_43 = L_42;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_43, 1)) = (int32_t)4;
		t12* L_44 = L_43;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_44, 2)) = (int32_t)3;
		t7 * L_45 = (__this->f11);
		t9 * L_46 = (t9 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t9_TI));
		m12(L_46, p0, L_44, L_45, &m12_MI);
		ArrayElementTypeCheck (L_41, L_46);
		*((t10 **)(t10 **)SZArrayLdElema(L_41, 7)) = (t10 *)L_46;
		__this->f3 = L_41;
		return;
	}
}
extern MethodInfo m20_MI;
 void m20 (t16 * __this, t13 * p0, MethodInfo* method){
	bool V_0 = false;
	t10 * V_1 = {0};
	t17* V_2 = {0};
	int32_t V_3 = 0;
	t23  V_4 = {0};
	t14 * V_5 = {0};
	t1 * V_6 = {0};
	t14 * V_7 = {0};
	int32_t leaveInstructions[1] = {0};
	t39 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t39 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		V_0 = 0;
		t17* L_0 = (__this->f3);
		V_2 = L_0;
		V_3 = 0;
		goto IL_0037;
	}

IL_0010:
	{
		V_1 = (*(t10 **)(t10 **)SZArrayLdElema(V_2, V_3));
		bool L_1 = m15(V_1, p0, &m15_MI);
		V_0 = ((int32_t)(V_0|L_1));
		if (!V_0)
		{
			goto IL_0033;
		}
	}
	{
		m62(NULL, (t33*) &_stringLiteral5, &m62_MI);
		goto IL_0040;
	}

IL_0033:
	{
		V_3 = ((int32_t)(V_3+1));
	}

IL_0037:
	{
		if ((((int32_t)V_3) < ((int32_t)(((int32_t)(((t24 *)V_2)->max_length))))))
		{
			goto IL_0010;
		}
	}

IL_0040:
	{
		if (V_0)
		{
			goto IL_011b;
		}
	}
	{
		t14 * L_2 = (t14 *)VirtFuncInvoker0< t14 * >::Invoke(&m59_MI, p0);
		V_5 = L_2;
	}

IL_004e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00f4;
		}

IL_0053:
		{
			t14 * L_3 = (t14 *)InterfaceFuncInvoker0< t14 * >::Invoke(&m60_MI, V_5);
			V_4 = ((*(t23 *)((t23 *)UnBox (L_3, InitializedTypeInfo(&t23_TI)))));
			t23  L_4 = V_4;
			t14 * L_5 = Box(InitializedTypeInfo(&t23_TI), &L_4);
			IL2CPP_RUNTIME_CLASS_INIT((&t33_TI));
			t33* L_6 = m61(NULL, (t33*) &_stringLiteral2, L_5, &m61_MI);
			m62(NULL, L_6, &m62_MI);
			t11* L_7 = (__this->f2);
			float L_8 = ((&V_4)->f1);
			float L_9 = ((&V_4)->f2);
			t7 * L_10 = GenArrayGet2(L_7, (((int32_t)L_8)), (((int32_t)L_9)), t7 *);;
			t1 * L_11 = m63(L_10, &m63_MI);
			V_6 = L_11;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t19_TI));
			t7 * L_12 = m64(V_6, &m64_MI);
			t8 * L_13 = m54(L_12, &m54_MI);
			t27  L_14 = m42(L_13, &m42_MI);
			t23  L_15 = m43(NULL, L_14, &m43_MI);
			m28((((t19_SFs*)InitializedTypeInfo(&t19_TI)->static_fields)->f2), L_15, &m28_MI);
			t7 * L_16 = m64(V_6, &m64_MI);
			m65(NULL, L_16, &m65_MI);
			t11* L_17 = (__this->f2);
			float L_18 = ((&V_4)->f1);
			float L_19 = ((&V_4)->f2);
			GenArraySet2(L_17, (((int32_t)L_18)), (((int32_t)L_19)), (t7 *)NULL, t7 *);;
			float L_20 = ((&V_4)->f1);
			m26((((t19_SFs*)InitializedTypeInfo(&t19_TI)->static_fields)->f2), (((int32_t)L_20)), &m26_MI);
		}

IL_00f4:
		{
			bool L_21 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m67_MI, V_5);
			if (L_21)
			{
				goto IL_0053;
			}
		}

IL_0100:
		{
			// IL_0100: leave IL_011b
			leaveInstructions[0] = 0x11B; // 1
			THROW_SENTINEL(IL_011b);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0105;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t39 *)e.ex;
		goto IL_0105;
	}

IL_0105:
	{ // begin finally (depth: 1)
		{
			V_7 = ((t14 *)IsInst(V_5, InitializedTypeInfo(&t37_TI)));
			if (V_7)
			{
				goto IL_0113;
			}
		}

IL_0112:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x11B:
					goto IL_011b;
				default:
				{
					#if IL2CPP_DEBUG
					assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
					#endif
					t39 * _tmp_exception_local = __last_unhandled_exception;
					__last_unhandled_exception = 0;
					il2cpp_codegen_raise_exception (_tmp_exception_local);
				}
			}
		}

IL_0113:
		{
			InterfaceActionInvoker0::Invoke(&m68_MI, V_7);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x11B:
					goto IL_011b;
				default:
				{
					#if IL2CPP_DEBUG
					assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
					#endif
					t39 * _tmp_exception_local = __last_unhandled_exception;
					__last_unhandled_exception = 0;
					il2cpp_codegen_raise_exception (_tmp_exception_local);
				}
			}
		}
	} // end finally (depth: 1)

IL_011b:
	{
		return;
	}
}
// Metadata Definition Figures
extern Il2CppType t11_0_0_6;
FieldInfo t16_f2_FieldInfo = 
{
	"all", &t11_0_0_6, &t16_TI, offsetof(t16, f2), &EmptyCustomAttributesCache};
extern Il2CppType t17_0_0_1;
FieldInfo t16_f3_FieldInfo = 
{
	"effects", &t17_0_0_1, &t16_TI, offsetof(t16, f3), &EmptyCustomAttributesCache};
extern Il2CppType t7_0_0_6;
FieldInfo t16_f4_FieldInfo = 
{
	"padlockPrefav", &t7_0_0_6, &t16_TI, offsetof(t16, f4), &EmptyCustomAttributesCache};
extern Il2CppType t7_0_0_6;
FieldInfo t16_f5_FieldInfo = 
{
	"doorPrefav", &t7_0_0_6, &t16_TI, offsetof(t16, f5), &EmptyCustomAttributesCache};
extern Il2CppType t7_0_0_6;
FieldInfo t16_f6_FieldInfo = 
{
	"ironSwordPrefav", &t7_0_0_6, &t16_TI, offsetof(t16, f6), &EmptyCustomAttributesCache};
extern Il2CppType t7_0_0_6;
FieldInfo t16_f7_FieldInfo = 
{
	"goldSwordPrefav", &t7_0_0_6, &t16_TI, offsetof(t16, f7), &EmptyCustomAttributesCache};
extern Il2CppType t7_0_0_6;
FieldInfo t16_f8_FieldInfo = 
{
	"diamonSwordPrefav", &t7_0_0_6, &t16_TI, offsetof(t16, f8), &EmptyCustomAttributesCache};
extern Il2CppType t7_0_0_6;
FieldInfo t16_f9_FieldInfo = 
{
	"ironShieldPrefav", &t7_0_0_6, &t16_TI, offsetof(t16, f9), &EmptyCustomAttributesCache};
extern Il2CppType t7_0_0_6;
FieldInfo t16_f10_FieldInfo = 
{
	"goldShieldPrefav", &t7_0_0_6, &t16_TI, offsetof(t16, f10), &EmptyCustomAttributesCache};
extern Il2CppType t7_0_0_6;
FieldInfo t16_f11_FieldInfo = 
{
	"diamonShieldPrefav", &t7_0_0_6, &t16_TI, offsetof(t16, f11), &EmptyCustomAttributesCache};
static FieldInfo* t16_FIs[] =
{
	&t16_f2_FieldInfo,
	&t16_f3_FieldInfo,
	&t16_f4_FieldInfo,
	&t16_f5_FieldInfo,
	&t16_f6_FieldInfo,
	&t16_f7_FieldInfo,
	&t16_f8_FieldInfo,
	&t16_f9_FieldInfo,
	&t16_f10_FieldInfo,
	&t16_f11_FieldInfo,
	NULL
};
extern TypeInfo t16_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m18_MI = 
{
	".ctor", (methodPointerType)&m18, &t16_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 21, NULL, (methodPointerType)NULL};
extern Il2CppType t11_0_0_0;
static ParameterInfo t16_m19_ParameterInfos[] = 
{
	{"all", 0, 134217745, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern TypeInfo t16_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m19_MI = 
{
	"Init", (methodPointerType)&m19, &t16_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t16_m19_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 22, NULL, (methodPointerType)NULL};
extern Il2CppType t13_0_0_0;
static ParameterInfo t16_m20_ParameterInfos[] = 
{
	{"positions", 0, 134217746, &EmptyCustomAttributesCache, &t13_0_0_0},
};
extern TypeInfo t16_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m20_MI = 
{
	"Check", (methodPointerType)&m20, &t16_TI, &t25_0_0_0, RuntimeInvoker_t25_t14, t16_m20_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 23, NULL, (methodPointerType)NULL};
static MethodInfo* t16_MIs[] =
{
	&m18_MI,
	&m19_MI,
	&m20_MI,
	NULL
};
extern MethodInfo m49_MI;
extern MethodInfo m50_MI;
extern MethodInfo m51_MI;
extern MethodInfo m52_MI;
static MethodInfo* t16_VT[] =
{
	&m49_MI,
	&m50_MI,
	&m51_MI,
	&m52_MI,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t16_0_0_0;
extern Il2CppType t16_1_0_0;
extern TypeInfo t3_TI;
struct t16;
extern TypeInfo t16_TI;
TypeInfo t16_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "Figures", "", t16_MIs, NULL, t16_FIs, NULL, &t3_TI, NULL, NULL, &t16_TI, NULL, t16_VT, &EmptyCustomAttributesCache, &t16_TI, &t16_0_0_0, &t16_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t16), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 10, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4_TI;
#include "t4MD.h"



// Metadata Definition ItemsManager/Elements
extern Il2CppType t35_0_0_1542;
FieldInfo t4_f1_FieldInfo = 
{
	"value__", &t35_0_0_1542, &t4_TI, offsetof(t4, f1) + sizeof(t14), &EmptyCustomAttributesCache};
extern Il2CppType t4_0_0_32854;
FieldInfo t4_f2_FieldInfo = 
{
	"None", &t4_0_0_32854, &t4_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t4_0_0_32854;
FieldInfo t4_f3_FieldInfo = 
{
	"Iron", &t4_0_0_32854, &t4_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t4_0_0_32854;
FieldInfo t4_f4_FieldInfo = 
{
	"Gold", &t4_0_0_32854, &t4_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t4_0_0_32854;
FieldInfo t4_f5_FieldInfo = 
{
	"Diamond", &t4_0_0_32854, &t4_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t4_0_0_32854;
FieldInfo t4_f6_FieldInfo = 
{
	"Wood", &t4_0_0_32854, &t4_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t4_0_0_32854;
FieldInfo t4_f7_FieldInfo = 
{
	"Enemy", &t4_0_0_32854, &t4_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t4_0_0_32854;
FieldInfo t4_f8_FieldInfo = 
{
	"Lock", &t4_0_0_32854, &t4_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t4_FIs[] =
{
	&t4_f1_FieldInfo,
	&t4_f2_FieldInfo,
	&t4_f3_FieldInfo,
	&t4_f4_FieldInfo,
	&t4_f5_FieldInfo,
	&t4_f6_FieldInfo,
	&t4_f7_FieldInfo,
	&t4_f8_FieldInfo,
	NULL
};
static const int32_t t4_f2_DefaultValueData = 0;
extern Il2CppType t35_0_0_0;
static Il2CppFieldDefaultValueEntry t4_f2_DefaultValue = 
{
	&t4_f2_FieldInfo, { (char*)&t4_f2_DefaultValueData, &t35_0_0_0 }};
static const int32_t t4_f3_DefaultValueData = 1;
extern Il2CppType t35_0_0_0;
static Il2CppFieldDefaultValueEntry t4_f3_DefaultValue = 
{
	&t4_f3_FieldInfo, { (char*)&t4_f3_DefaultValueData, &t35_0_0_0 }};
static const int32_t t4_f4_DefaultValueData = 2;
extern Il2CppType t35_0_0_0;
static Il2CppFieldDefaultValueEntry t4_f4_DefaultValue = 
{
	&t4_f4_FieldInfo, { (char*)&t4_f4_DefaultValueData, &t35_0_0_0 }};
static const int32_t t4_f5_DefaultValueData = 3;
extern Il2CppType t35_0_0_0;
static Il2CppFieldDefaultValueEntry t4_f5_DefaultValue = 
{
	&t4_f5_FieldInfo, { (char*)&t4_f5_DefaultValueData, &t35_0_0_0 }};
static const int32_t t4_f6_DefaultValueData = 4;
extern Il2CppType t35_0_0_0;
static Il2CppFieldDefaultValueEntry t4_f6_DefaultValue = 
{
	&t4_f6_FieldInfo, { (char*)&t4_f6_DefaultValueData, &t35_0_0_0 }};
static const int32_t t4_f7_DefaultValueData = 5;
extern Il2CppType t35_0_0_0;
static Il2CppFieldDefaultValueEntry t4_f7_DefaultValue = 
{
	&t4_f7_FieldInfo, { (char*)&t4_f7_DefaultValueData, &t35_0_0_0 }};
static const int32_t t4_f8_DefaultValueData = 6;
extern Il2CppType t35_0_0_0;
static Il2CppFieldDefaultValueEntry t4_f8_DefaultValue = 
{
	&t4_f8_FieldInfo, { (char*)&t4_f8_DefaultValueData, &t35_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t4_FDVs[] = 
{
	&t4_f2_DefaultValue,
	&t4_f3_DefaultValue,
	&t4_f4_DefaultValue,
	&t4_f5_DefaultValue,
	&t4_f6_DefaultValue,
	&t4_f7_DefaultValue,
	&t4_f8_DefaultValue,
	NULL
};
static MethodInfo* t4_MIs[] =
{
	NULL
};
extern MethodInfo m80_MI;
extern MethodInfo m50_MI;
extern MethodInfo m81_MI;
extern MethodInfo m82_MI;
extern MethodInfo m83_MI;
extern MethodInfo m84_MI;
extern MethodInfo m85_MI;
extern MethodInfo m86_MI;
extern MethodInfo m87_MI;
extern MethodInfo m88_MI;
extern MethodInfo m89_MI;
extern MethodInfo m90_MI;
extern MethodInfo m91_MI;
extern MethodInfo m92_MI;
extern MethodInfo m93_MI;
extern MethodInfo m94_MI;
extern MethodInfo m95_MI;
extern MethodInfo m96_MI;
extern MethodInfo m97_MI;
extern MethodInfo m98_MI;
extern MethodInfo m99_MI;
extern MethodInfo m100_MI;
extern MethodInfo m101_MI;
static MethodInfo* t4_VT[] =
{
	&m80_MI,
	&m50_MI,
	&m81_MI,
	&m82_MI,
	&m83_MI,
	&m84_MI,
	&m85_MI,
	&m86_MI,
	&m87_MI,
	&m88_MI,
	&m89_MI,
	&m90_MI,
	&m91_MI,
	&m92_MI,
	&m93_MI,
	&m94_MI,
	&m95_MI,
	&m96_MI,
	&m97_MI,
	&m98_MI,
	&m99_MI,
	&m100_MI,
	&m101_MI,
};
extern TypeInfo t41_TI;
extern TypeInfo t42_TI;
extern TypeInfo t43_TI;
static Il2CppInterfaceOffsetPair t4_IOs[] = 
{
	{ &t41_TI, 4},
	{ &t42_TI, 5},
	{ &t43_TI, 21},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_1_0_0;
extern TypeInfo t18_TI;
extern TypeInfo t35_TI;
extern TypeInfo t35_TI;
extern TypeInfo t19_TI;
TypeInfo t4_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "Elements", "", t4_MIs, NULL, t4_FIs, NULL, &t18_TI, NULL, &t19_TI, &t35_TI, NULL, t4_VT, &EmptyCustomAttributesCache, &t35_TI, &t4_0_0_0, &t4_1_0_0, t4_IOs, NULL, NULL, t4_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 258, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 8, 0, 0, 23, 0, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t19_TI;

#include "t22.h"
#include "t44.h"
#include "t45.h"
#include "t46.h"
#include "t47.h"
#include "t48.h"
#include "t49.h"
#include "t50.h"
extern TypeInfo t19_TI;
extern TypeInfo t13_TI;
extern TypeInfo t23_TI;
extern TypeInfo t21_TI;
extern TypeInfo t51_TI;
extern TypeInfo t35_TI;
extern TypeInfo t11_TI;
extern TypeInfo t7_TI;
extern TypeInfo t14_TI;
extern TypeInfo t36_TI;
extern TypeInfo t1_TI;
extern TypeInfo t26_TI;
extern TypeInfo t37_TI;
extern TypeInfo t25_TI;
extern TypeInfo t52_TI;
#include "t53MD.h"
#include "t54MD.h"
#include "t47MD.h"
#include "t46MD.h"
#include "t45MD.h"
#include "t52MD.h"
#include "t48MD.h"
#include "t50MD.h"
extern MethodInfo m75_MI;
extern MethodInfo m39_MI;
extern MethodInfo m102_MI;
extern MethodInfo m103_MI;
extern MethodInfo m25_MI;
extern MethodInfo m104_MI;
extern MethodInfo m19_MI;
extern MethodInfo m38_MI;
extern MethodInfo m105_MI;
extern MethodInfo m31_MI;
extern MethodInfo m66_MI;
extern MethodInfo m58_MI;
extern MethodInfo m54_MI;
extern MethodInfo m41_MI;
extern MethodInfo m106_MI;
extern MethodInfo m44_MI;
extern MethodInfo m45_MI;
extern MethodInfo m107_MI;
extern MethodInfo m108_MI;
extern MethodInfo m63_MI;
extern MethodInfo m3_MI;
extern MethodInfo m36_MI;
extern MethodInfo m109_MI;
extern MethodInfo m30_MI;
extern MethodInfo m77_MI;
extern MethodInfo m110_MI;
extern MethodInfo m4_MI;
extern MethodInfo m111_MI;
extern MethodInfo m112_MI;
extern MethodInfo m37_MI;
extern MethodInfo m59_MI;
extern MethodInfo m60_MI;
extern MethodInfo m64_MI;
extern MethodInfo m113_MI;
extern MethodInfo m114_MI;
extern MethodInfo m67_MI;
extern MethodInfo m68_MI;
extern MethodInfo m115_MI;
extern MethodInfo m65_MI;
extern MethodInfo m116_MI;
extern MethodInfo m117_MI;
extern MethodInfo m76_MI;
extern MethodInfo m118_MI;
extern MethodInfo m119_MI;
extern MethodInfo m120_MI;
extern MethodInfo m20_MI;
extern MethodInfo m121_MI;
extern MethodInfo m55_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m124_MI;
extern MethodInfo m125_MI;
extern MethodInfo m126_MI;
extern MethodInfo m127_MI;
extern MethodInfo m43_MI;
extern MethodInfo m33_MI;
extern MethodInfo m35_MI;
extern MethodInfo m34_MI;
extern MethodInfo m128_MI;
extern MethodInfo m129_MI;
extern MethodInfo m130_MI;
struct t30;
#define m104(__this, method) (t16 *)m48_gshared((t30 *)__this, method)
extern MethodInfo m104_MI;
extern MethodInfo m63_MI;
struct t29;
 t7 * m109 (t14 * __this, t7 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m109_MI;
struct t7;
#define m113(__this, method) (t44 *)m69_gshared((t7 *)__this, method)
extern MethodInfo m113_MI;
struct t7;
struct t7;
 t14 * m131_gshared (t7 * __this, MethodInfo* method);
#define m131(__this, method) (t14 *)m131_gshared((t7 *)__this, method)
#define m118(__this, method) (t45 *)m131_gshared((t7 *)__this, method)
extern MethodInfo m118_MI;
struct t7;
#define m121(__this, method) (t47 *)m69_gshared((t7 *)__this, method)
extern MethodInfo m121_MI;


extern MethodInfo m21_MI;
 void m21 (t19 * __this, MethodInfo* method){
	{
		__this->f13 = (0.97f);
		__this->f14 = (0.85f);
		__this->f15 = (0.5f);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t13_TI));
		t13 * L_0 = (t13 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t13_TI));
		m75(L_0, &m75_MI);
		__this->f22 = L_0;
		t13 * L_1 = (t13 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t13_TI));
		m75(L_1, &m75_MI);
		__this->f27 = L_1;
		t13 * L_2 = (t13 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t13_TI));
		m75(L_2, &m75_MI);
		__this->f29 = L_2;
		t13 * L_3 = (t13 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t13_TI));
		m75(L_3, &m75_MI);
		__this->f30 = L_3;
		m39(__this, &m39_MI);
		return;
	}
}
extern MethodInfo m22_MI;
 void m22 (t14 * __this, MethodInfo* method){
	{
		((t19_SFs*)InitializedTypeInfo(&t19_TI)->static_fields)->f9 = 5;
		((t19_SFs*)InitializedTypeInfo(&t19_TI)->static_fields)->f10 = 5;
		int32_t L_0 = m102(NULL, &m102_MI);
		((t19_SFs*)InitializedTypeInfo(&t19_TI)->static_fields)->f16 = L_0;
		t23  L_1 = {0};
		m103(&L_1, (-1.0f), (-1.0f), &m103_MI);
		((t19_SFs*)InitializedTypeInfo(&t19_TI)->static_fields)->f20 = L_1;
		t23  L_2 = {0};
		m103(&L_2, (-2.0f), (-2.0f), &m103_MI);
		((t19_SFs*)InitializedTypeInfo(&t19_TI)->static_fields)->f21 = L_2;
		t21* L_3 = ((t21*)SZArrayNew(InitializedTypeInfo(&t21_TI), 4));
		t51* L_4 = ((t51*)SZArrayNew(InitializedTypeInfo(&t51_TI), 2));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_4, 1)) = (int32_t)(-1);
		ArrayElementTypeCheck (L_3, L_4);
		*((t51**)(t51**)SZArrayLdElema(L_3, 0)) = (t51*)L_4;
		t21* L_5 = L_3;
		t51* L_6 = ((t51*)SZArrayNew(InitializedTypeInfo(&t51_TI), 2));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_6, 0)) = (int32_t)(-1);
		ArrayElementTypeCheck (L_5, L_6);
		*((t51**)(t51**)SZArrayLdElema(L_5, 1)) = (t51*)L_6;
		t21* L_7 = L_5;
		t51* L_8 = ((t51*)SZArrayNew(InitializedTypeInfo(&t51_TI), 2));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_8, 0)) = (int32_t)1;
		ArrayElementTypeCheck (L_7, L_8);
		*((t51**)(t51**)SZArrayLdElema(L_7, 2)) = (t51*)L_8;
		t21* L_9 = L_7;
		t51* L_10 = ((t51*)SZArrayNew(InitializedTypeInfo(&t51_TI), 2));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_10, 1)) = (int32_t)1;
		ArrayElementTypeCheck (L_9, L_10);
		*((t51**)(t51**)SZArrayLdElema(L_9, 3)) = (t51*)L_10;
		((t19_SFs*)InitializedTypeInfo(&t19_TI)->static_fields)->f25 = L_9;
		return;
	}
}
extern MethodInfo m23_MI;
 void m23 (t19 * __this, MethodInfo* method){
	{
		m25(__this, &m25_MI);
		t16 * L_0 = m104(__this, &m104_MI);
		__this->f26 = L_0;
		t16 * L_1 = (__this->f26);
		t11* L_2 = (__this->f7);
		m19(L_1, L_2, &m19_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t19_TI));
		((t19_SFs*)InitializedTypeInfo(&t19_TI)->static_fields)->f2 = __this;
		return;
	}
}
extern MethodInfo m24_MI;
 void m24 (t19 * __this, MethodInfo* method){
	{
		m38(__this, &m38_MI);
		return;
	}
}
extern MethodInfo m25_MI;
 void m25 (t19 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t19_TI));
		t11* L_0 = (t11*)GenArrayNew2(InitializedTypeInfo(&t11_TI), (((t19_SFs*)InitializedTypeInfo(&t19_TI)->static_fields)->f9), (((t19_SFs*)InitializedTypeInfo(&t19_TI)->static_fields)->f10));
		__this->f7 = L_0;
		V_0 = 0;
		goto IL_00a7;
	}

IL_001c:
	{
		V_1 = 0;
		goto IL_0098;
	}

IL_0023:
	{
		t11* L_1 = (__this->f7);
		t7 * L_2 = m31(__this, &m31_MI);
		GenArraySet2(L_1, V_0, V_1, L_2, t7 *);;
		t11* L_3 = (__this->f7);
		t7 * L_4 = GenArrayGet2(L_3, V_0, V_1, t7 *);;
		t8 * L_5 = m54(L_4, &m54_MI);
		t8 * L_6 = m41(__this, &m41_MI);
		m106(L_5, L_6, &m106_MI);
		t11* L_7 = (__this->f7);
		t7 * L_8 = GenArrayGet2(L_7, V_0, V_1, t7 *);;
		t8 * L_9 = m54(L_8, &m54_MI);
		float L_10 = (__this->f12);
		float L_11 = (__this->f8);
		float L_12 = (__this->f11);
		float L_13 = (__this->f8);
		t23  L_14 = {0};
		m103(&L_14, ((float)(L_10+((float)(L_11*(((float)V_0)))))), ((float)(L_12+((float)(L_13*(((float)V_1)))))), &m103_MI);
		t27  L_15 = m44(NULL, L_14, &m44_MI);
		m45(L_9, L_15, &m45_MI);
		V_1 = ((int32_t)(V_1+1));
	}

IL_0098:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t19_TI));
		if ((((int32_t)V_1) < ((int32_t)(((t19_SFs*)InitializedTypeInfo(&t19_TI)->static_fields)->f10))))
		{
			goto IL_0023;
		}
	}
	{
		V_0 = ((int32_t)(V_0+1));
	}

IL_00a7:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t19_TI));
		if ((((int32_t)V_0) < ((int32_t)(((t19_SFs*)InitializedTypeInfo(&t19_TI)->static_fields)->f9))))
		{
			goto IL_001c;
		}
	}
	{
		return;
	}
}
extern MethodInfo m26_MI;
 void m26 (t19 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_00b3;
	}

IL_0009:
	{
		t11* L_0 = (__this->f7);
		t7 * L_1 = GenArrayGet2(L_0, p0, V_1, t7 *);;
		bool L_2 = m107(NULL, L_1, (t29 *)NULL, &m107_MI);
		if (!L_2)
		{
			goto IL_00af;
		}
	}
	{
		V_0 = ((int32_t)(V_0+1));
		V_2 = ((int32_t)(V_1+1));
		goto IL_00a2;
	}

IL_002e:
	{
		t11* L_3 = (__this->f7);
		t7 * L_4 = GenArrayGet2(L_3, p0, V_2, t7 *);;
		bool L_5 = m108(NULL, L_4, (t29 *)NULL, &m108_MI);
		if (!L_5)
		{
			goto IL_009e;
		}
	}
	{
		t11* L_6 = (__this->f7);
		t11* L_7 = (__this->f7);
		t7 * L_8 = GenArrayGet2(L_7, p0, V_2, t7 *);;
		GenArraySet2(L_6, p0, V_1, L_8, t7 *);;
		t11* L_9 = (__this->f7);
		GenArraySet2(L_9, p0, V_2, (t7 *)NULL, t7 *);;
		t11* L_10 = (__this->f7);
		t7 * L_11 = GenArrayGet2(L_10, p0, V_1, t7 *);;
		t1 * L_12 = m63(L_11, &m63_MI);
		float L_13 = (__this->f11);
		float L_14 = (__this->f8);
		m3(L_12, ((float)(L_13+((float)(L_14*(((float)V_1)))))), &m3_MI);
		V_0 = ((int32_t)(V_0-1));
		goto IL_00af;
	}

IL_009e:
	{
		V_2 = ((int32_t)(V_2+1));
	}

IL_00a2:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t19_TI));
		if ((((int32_t)V_2) <= ((int32_t)((int32_t)((((t19_SFs*)InitializedTypeInfo(&t19_TI)->static_fields)->f10)-1)))))
		{
			goto IL_002e;
		}
	}

IL_00af:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_00b3:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t19_TI));
		if ((((int32_t)V_1) <= ((int32_t)((int32_t)((((t19_SFs*)InitializedTypeInfo(&t19_TI)->static_fields)->f10)-1)))))
		{
			goto IL_0009;
		}
	}
	{
		V_4 = V_0;
		goto IL_0181;
	}

IL_00c8:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t19_TI));
		V_3 = ((int32_t)((((t19_SFs*)InitializedTypeInfo(&t19_TI)->static_fields)->f10)-V_4));
		bool L_15 = m36(NULL, p0, V_3, &m36_MI);
		if (!L_15)
		{
			goto IL_017b;
		}
	}
	{
		t11* L_16 = (__this->f7);
		t7 * L_17 = m31(__this, &m31_MI);
		GenArraySet2(L_16, p0, V_3, L_17, t7 *);;
		t11* L_18 = (__this->f7);
		t7 * L_19 = GenArrayGet2(L_18, p0, V_3, t7 *);;
		t8 * L_20 = m54(L_19, &m54_MI);
		t8 * L_21 = m41(__this, &m41_MI);
		m106(L_20, L_21, &m106_MI);
		t11* L_22 = (__this->f7);
		t7 * L_23 = GenArrayGet2(L_22, p0, V_3, t7 *);;
		t8 * L_24 = m54(L_23, &m54_MI);
		float L_25 = (__this->f12);
		float L_26 = (__this->f8);
		float L_27 = (__this->f11);
		float L_28 = (__this->f8);
		t23  L_29 = {0};
		m103(&L_29, ((float)(L_25+((float)(L_26*(((float)p0)))))), ((float)(((float)((5.0f)+L_27))+((float)(L_28*(((float)V_3)))))), &m103_MI);
		t27  L_30 = m44(NULL, L_29, &m44_MI);
		m45(L_24, L_30, &m45_MI);
		t11* L_31 = (__this->f7);
		t7 * L_32 = GenArrayGet2(L_31, p0, V_3, t7 *);;
		t1 * L_33 = m63(L_32, &m63_MI);
		float L_34 = (__this->f11);
		float L_35 = (__this->f8);
		m3(L_33, ((float)(L_34+((float)(L_35*(((float)V_3)))))), &m3_MI);
	}

IL_017b:
	{
		V_4 = ((int32_t)(V_4-1));
	}

IL_0181:
	{
		if ((((int32_t)V_4) > ((int32_t)0)))
		{
			goto IL_00c8;
		}
	}
	{
		return;
	}
}
extern MethodInfo m27_MI;
 t7 * m27 (t19 * __this, t7 * p0, t23  p1, t23  p2, MethodInfo* method){
	t7 * V_0 = {0};
	{
		t7 * L_0 = m109(NULL, p0, &m109_MI);
		V_0 = L_0;
		t11* L_1 = (__this->f7);
		float L_2 = ((&p1)->f1);
		float L_3 = ((&p1)->f2);
		GenArraySet2(L_1, (((int32_t)L_2)), (((int32_t)L_3)), V_0, t7 *);;
		t8 * L_4 = m54(V_0, &m54_MI);
		t27  L_5 = m44(NULL, p2, &m44_MI);
		m45(L_4, L_5, &m45_MI);
		return V_0;
	}
}
extern MethodInfo m28_MI;
 t7 * m28 (t19 * __this, t23  p0, MethodInfo* method){
	t7 * V_0 = {0};
	{
		t7 * L_0 = (__this->f28);
		t7 * L_1 = m30(__this, L_0, p0, &m30_MI);
		V_0 = L_1;
		t13 * L_2 = (__this->f27);
		VirtFuncInvoker1< int32_t, t14 * >::Invoke(&m77_MI, L_2, V_0);
		return V_0;
	}
}
extern MethodInfo m29_MI;
 t7 * m29 (t19 * __this, t7 * p0, t23  p1, MethodInfo* method){
	t7 * V_0 = {0};
	{
		t7 * L_0 = m30(__this, p0, p1, &m30_MI);
		V_0 = L_0;
		t13 * L_1 = (__this->f29);
		t1 * L_2 = m63(V_0, &m63_MI);
		VirtFuncInvoker1< int32_t, t14 * >::Invoke(&m77_MI, L_1, L_2);
		return V_0;
	}
}
extern MethodInfo m30_MI;
 t7 * m30 (t19 * __this, t7 * p0, t23  p1, MethodInfo* method){
	t7 * V_0 = {0};
	t1 * V_1 = {0};
	{
		t7 * L_0 = m109(NULL, p0, &m109_MI);
		V_0 = L_0;
		t8 * L_1 = m54(V_0, &m54_MI);
		t27  L_2 = m44(NULL, p1, &m44_MI);
		m45(L_1, L_2, &m45_MI);
		t1 * L_3 = m63(V_0, &m63_MI);
		V_1 = L_3;
		float L_4 = ((&p1)->f1);
		float L_5 = m110(NULL, (-0.2f), (0.2f), &m110_MI);
		float L_6 = m110(NULL, (3.6f), (4.2f), &m110_MI);
		m4(V_1, ((float)(L_4+L_5)), ((-L_6)), &m4_MI);
		return V_0;
	}
}
extern MethodInfo m31_MI;
 t7 * m31 (t19 * __this, MethodInfo* method){
	t7 * V_0 = {0};
	float V_1 = 0.0f;
	{
		float L_0 = m111(NULL, &m111_MI);
		V_1 = L_0;
		float L_1 = (__this->f13);
		if ((((float)V_1) < ((float)L_1)))
		{
			goto IL_0032;
		}
	}
	{
		t20* L_2 = (__this->f6);
		t20* L_3 = (__this->f6);
		int32_t L_4 = m112(NULL, 0, (((int32_t)(((t24 *)L_3)->max_length))), &m112_MI);
		t7 * L_5 = m109(NULL, (*(t7 **)(t7 **)SZArrayLdElema(L_2, L_4)), &m109_MI);
		V_0 = L_5;
		goto IL_00a5;
	}

IL_0032:
	{
		float L_6 = (__this->f14);
		if ((((float)V_1) <= ((float)L_6)))
		{
			goto IL_005e;
		}
	}
	{
		t20* L_7 = (__this->f5);
		t20* L_8 = (__this->f5);
		int32_t L_9 = m112(NULL, 0, (((int32_t)(((t24 *)L_8)->max_length))), &m112_MI);
		t7 * L_10 = m109(NULL, (*(t7 **)(t7 **)SZArrayLdElema(L_7, L_9)), &m109_MI);
		V_0 = L_10;
		goto IL_00a5;
	}

IL_005e:
	{
		float L_11 = (__this->f15);
		if ((((float)V_1) <= ((float)L_11)))
		{
			goto IL_008a;
		}
	}
	{
		t20* L_12 = (__this->f4);
		t20* L_13 = (__this->f4);
		int32_t L_14 = m112(NULL, 0, (((int32_t)(((t24 *)L_13)->max_length))), &m112_MI);
		t7 * L_15 = m109(NULL, (*(t7 **)(t7 **)SZArrayLdElema(L_12, L_14)), &m109_MI);
		V_0 = L_15;
		goto IL_00a5;
	}

IL_008a:
	{
		t20* L_16 = (__this->f3);
		t20* L_17 = (__this->f3);
		int32_t L_18 = m112(NULL, 0, (((int32_t)(((t24 *)L_17)->max_length))), &m112_MI);
		t7 * L_19 = m109(NULL, (*(t7 **)(t7 **)SZArrayLdElema(L_16, L_18)), &m109_MI);
		V_0 = L_19;
	}

IL_00a5:
	{
		return V_0;
	}
}
extern MethodInfo m32_MI;
 void m32 (t19 * __this, MethodInfo* method){
	{
		return;
	}
}
extern MethodInfo m33_MI;
 void m33 (t19 * __this, t23  p0, MethodInfo* method){
	t1 * V_0 = {0};
	t14 * V_1 = {0};
	t1 * V_2 = {0};
	t14 * V_3 = {0};
	t14 * V_4 = {0};
	t14 * V_5 = {0};
	int32_t leaveInstructions[1] = {0};
	t39 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t39 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		t23  L_0 = m37(__this, p0, &m37_MI);
		__this->f23 = L_0;
		t13 * L_1 = (__this->f29);
		t14 * L_2 = (t14 *)VirtFuncInvoker0< t14 * >::Invoke(&m59_MI, L_1);
		V_1 = L_2;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005f;
		}

IL_001e:
		{
			t14 * L_3 = (t14 *)InterfaceFuncInvoker0< t14 * >::Invoke(&m60_MI, V_1);
			V_0 = ((t1 *)Castclass(L_3, InitializedTypeInfo(&t1_TI)));
			t7 * L_4 = m64(V_0, &m64_MI);
			t44 * L_5 = m113(L_4, &m113_MI);
			bool L_6 = m114(L_5, p0, &m114_MI);
			if (!L_6)
			{
				goto IL_0047;
			}
		}

IL_0040:
		{
			V_0->f7 = 0;
		}

IL_0047:
		{
			bool L_7 = (V_0->f7);
			if (L_7)
			{
				goto IL_005f;
			}
		}

IL_0052:
		{
			t13 * L_8 = (__this->f30);
			VirtFuncInvoker1< int32_t, t14 * >::Invoke(&m77_MI, L_8, V_0);
		}

IL_005f:
		{
			bool L_9 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m67_MI, V_1);
			if (L_9)
			{
				goto IL_001e;
			}
		}

IL_006a:
		{
			// IL_006a: leave IL_0084
			leaveInstructions[0] = 0x84; // 1
			THROW_SENTINEL(IL_0084);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_006f;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t39 *)e.ex;
		goto IL_006f;
	}

IL_006f:
	{ // begin finally (depth: 1)
		{
			V_4 = ((t14 *)IsInst(V_1, InitializedTypeInfo(&t37_TI)));
			if (V_4)
			{
				goto IL_007c;
			}
		}

IL_007b:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x84:
					goto IL_0084;
				default:
				{
					#if IL2CPP_DEBUG
					assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
					#endif
					t39 * _tmp_exception_local = __last_unhandled_exception;
					__last_unhandled_exception = 0;
					il2cpp_codegen_raise_exception (_tmp_exception_local);
				}
			}
		}

IL_007c:
		{
			InterfaceActionInvoker0::Invoke(&m68_MI, V_4);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x84:
					goto IL_0084;
				default:
				{
					#if IL2CPP_DEBUG
					assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
					#endif
					t39 * _tmp_exception_local = __last_unhandled_exception;
					__last_unhandled_exception = 0;
					il2cpp_codegen_raise_exception (_tmp_exception_local);
				}
			}
		}
	} // end finally (depth: 1)

IL_0084:
	{
		t13 * L_10 = (__this->f30);
		t14 * L_11 = (t14 *)VirtFuncInvoker0< t14 * >::Invoke(&m59_MI, L_10);
		V_3 = L_11;
	}

IL_0090:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00b8;
		}

IL_0095:
		{
			t14 * L_12 = (t14 *)InterfaceFuncInvoker0< t14 * >::Invoke(&m60_MI, V_3);
			V_2 = ((t1 *)Castclass(L_12, InitializedTypeInfo(&t1_TI)));
			t13 * L_13 = (__this->f29);
			VirtActionInvoker1< t14 * >::Invoke(&m115_MI, L_13, V_2);
			t7 * L_14 = m64(V_2, &m64_MI);
			m65(NULL, L_14, &m65_MI);
		}

IL_00b8:
		{
			bool L_15 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m67_MI, V_3);
			if (L_15)
			{
				goto IL_0095;
			}
		}

IL_00c3:
		{
			// IL_00c3: leave IL_00dd
			leaveInstructions[0] = 0xDD; // 1
			THROW_SENTINEL(IL_00dd);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_00c8;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t39 *)e.ex;
		goto IL_00c8;
	}

IL_00c8:
	{ // begin finally (depth: 1)
		{
			V_5 = ((t14 *)IsInst(V_3, InitializedTypeInfo(&t37_TI)));
			if (V_5)
			{
				goto IL_00d5;
			}
		}

IL_00d4:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0xDD:
					goto IL_00dd;
				default:
				{
					#if IL2CPP_DEBUG
					assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
					#endif
					t39 * _tmp_exception_local = __last_unhandled_exception;
					__last_unhandled_exception = 0;
					il2cpp_codegen_raise_exception (_tmp_exception_local);
				}
			}
		}

IL_00d5:
		{
			InterfaceActionInvoker0::Invoke(&m68_MI, V_5);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0xDD:
					goto IL_00dd;
				default:
				{
					#if IL2CPP_DEBUG
					assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
					#endif
					t39 * _tmp_exception_local = __last_unhandled_exception;
					__last_unhandled_exception = 0;
					il2cpp_codegen_raise_exception (_tmp_exception_local);
				}
			}
		}
	} // end finally (depth: 1)

IL_00dd:
	{
		t13 * L_16 = (__this->f30);
		VirtActionInvoker0::Invoke(&m116_MI, L_16);
		return;
	}
}
extern MethodInfo m34_MI;
 void m34 (t19 * __this, t23  p0, MethodInfo* method){
	{
		t23  L_0 = m37(__this, p0, &m37_MI);
		__this->f23 = L_0;
		t23  L_1 = (__this->f23);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t19_TI));
		bool L_2 = m117(NULL, L_1, (((t19_SFs*)InitializedTypeInfo(&t19_TI)->static_fields)->f20), &m117_MI);
		if (!L_2)
		{
			goto IL_0086;
		}
	}
	{
		t13 * L_3 = (__this->f22);
		t23  L_4 = (__this->f23);
		t23  L_5 = L_4;
		t14 * L_6 = Box(InitializedTypeInfo(&t23_TI), &L_5);
		bool L_7 = (bool)VirtFuncInvoker1< bool, t14 * >::Invoke(&m76_MI, L_3, L_6);
		if (L_7)
		{
			goto IL_0086;
		}
	}
	{
		t13 * L_8 = (__this->f22);
		t23  L_9 = (__this->f23);
		t23  L_10 = L_9;
		t14 * L_11 = Box(InitializedTypeInfo(&t23_TI), &L_10);
		VirtFuncInvoker1< int32_t, t14 * >::Invoke(&m77_MI, L_8, L_11);
		t11* L_12 = (__this->f7);
		t23 * L_13 = &(__this->f23);
		float L_14 = (L_13->f1);
		t23 * L_15 = &(__this->f23);
		float L_16 = (L_15->f2);
		t7 * L_17 = GenArrayGet2(L_12, (((int32_t)L_14)), (((int32_t)L_16)), t7 *);;
		t45 * L_18 = m118(L_17, &m118_MI);
		t46  L_19 = m119(NULL, &m119_MI);
		m120(L_18, L_19, &m120_MI);
	}

IL_0086:
	{
		return;
	}
}
extern MethodInfo m35_MI;
 void m35 (t19 * __this, t23  p0, MethodInfo* method){
	{
		t23  L_0 = m37(__this, p0, &m37_MI);
		__this->f24 = L_0;
		t16 * L_1 = (__this->f26);
		t13 * L_2 = (__this->f22);
		m20(L_1, L_2, &m20_MI);
		t13 * L_3 = (__this->f22);
		VirtActionInvoker0::Invoke(&m116_MI, L_3);
		return;
	}
}
extern MethodInfo m36_MI;
 bool m36 (t14 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	int32_t G_B5_0 = 0;
	{
		if ((((int32_t)p0) < ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		if ((((int32_t)p1) < ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t19_TI));
		if ((((int32_t)p0) >= ((int32_t)(((t19_SFs*)InitializedTypeInfo(&t19_TI)->static_fields)->f9))))
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t19_TI));
		G_B5_0 = ((((int32_t)p1) < ((int32_t)(((t19_SFs*)InitializedTypeInfo(&t19_TI)->static_fields)->f10)))? 1 : 0);
		goto IL_0024;
	}

IL_0023:
	{
		G_B5_0 = 0;
	}

IL_0024:
	{
		return G_B5_0;
	}
}
extern MethodInfo m37_MI;
 t23  m37 (t19 * __this, t23  p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t7 * V_2 = {0};
	{
		V_0 = 0;
		goto IL_0056;
	}

IL_0007:
	{
		V_1 = 0;
		goto IL_0047;
	}

IL_000e:
	{
		t11* L_0 = (__this->f7);
		t7 * L_1 = GenArrayGet2(L_0, V_0, V_1, t7 *);;
		V_2 = L_1;
		bool L_2 = m108(NULL, V_2, (t29 *)NULL, &m108_MI);
		if (!L_2)
		{
			goto IL_0043;
		}
	}
	{
		t47 * L_3 = m121(V_2, &m121_MI);
		bool L_4 = m114(L_3, p0, &m114_MI);
		if (!L_4)
		{
			goto IL_0043;
		}
	}
	{
		t23  L_5 = {0};
		m103(&L_5, (((float)V_0)), (((float)V_1)), &m103_MI);
		return L_5;
	}

IL_0043:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0047:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t19_TI));
		if ((((int32_t)V_1) < ((int32_t)(((t19_SFs*)InitializedTypeInfo(&t19_TI)->static_fields)->f10))))
		{
			goto IL_000e;
		}
	}
	{
		V_0 = ((int32_t)(V_0+1));
	}

IL_0056:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t19_TI));
		if ((((int32_t)V_0) < ((int32_t)(((t19_SFs*)InitializedTypeInfo(&t19_TI)->static_fields)->f9))))
		{
			goto IL_0007;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t19_TI));
		return (((t19_SFs*)InitializedTypeInfo(&t19_TI)->static_fields)->f20);
	}
}
extern MethodInfo m38_MI;
 void m38 (t19 * __this, MethodInfo* method){
	t48  V_0 = {0};
	t48  V_1 = {0};
	t48  V_2 = {0};
	t48  V_3 = {0};
	t48  V_4 = {0};
	{
		bool L_0 = (__this->f17);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		float L_1 = (__this->f18);
		float L_2 = m55(NULL, &m55_MI);
		__this->f18 = ((float)(L_1+L_2));
	}

IL_001d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t19_TI));
		if ((((int32_t)(((t19_SFs*)InitializedTypeInfo(&t19_TI)->static_fields)->f16)) == ((int32_t)((int32_t)11))))
		{
			goto IL_0034;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t19_TI));
		if ((((uint32_t)(((t19_SFs*)InitializedTypeInfo(&t19_TI)->static_fields)->f16)) != ((uint32_t)8)))
		{
			goto IL_0134;
		}
	}

IL_0034:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t52_TI));
		int32_t L_3 = m122(NULL, &m122_MI);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_012f;
		}
	}
	{
		bool L_4 = (__this->f17);
		if (L_4)
		{
			goto IL_00a8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t52_TI));
		t48  L_5 = m123(NULL, 0, &m123_MI);
		V_0 = L_5;
		int32_t L_6 = m124((&V_0), &m124_MI);
		if (L_6)
		{
			goto IL_00a8;
		}
	}
	{
		__this->f17 = 1;
		__this->f18 = (0.0f);
		t50 * L_7 = m125(NULL, &m125_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t52_TI));
		t48  L_8 = m123(NULL, 0, &m123_MI);
		V_1 = L_8;
		t23  L_9 = m126((&V_1), &m126_MI);
		t27  L_10 = m44(NULL, L_9, &m44_MI);
		t27  L_11 = m127(L_7, L_10, &m127_MI);
		t23  L_12 = m43(NULL, L_11, &m43_MI);
		__this->f19 = L_12;
		t23  L_13 = (__this->f19);
		m33(__this, L_13, &m33_MI);
		goto IL_012f;
	}

IL_00a8:
	{
		bool L_14 = (__this->f17);
		if (!L_14)
		{
			goto IL_00fb;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t52_TI));
		t48  L_15 = m123(NULL, 0, &m123_MI);
		V_2 = L_15;
		int32_t L_16 = m124((&V_2), &m124_MI);
		if ((((uint32_t)L_16) != ((uint32_t)3)))
		{
			goto IL_00fb;
		}
	}
	{
		__this->f17 = 0;
		t50 * L_17 = m125(NULL, &m125_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t52_TI));
		t48  L_18 = m123(NULL, 0, &m123_MI);
		V_3 = L_18;
		t23  L_19 = m126((&V_3), &m126_MI);
		t27  L_20 = m44(NULL, L_19, &m44_MI);
		t27  L_21 = m127(L_17, L_20, &m127_MI);
		t23  L_22 = m43(NULL, L_21, &m43_MI);
		m35(__this, L_22, &m35_MI);
		goto IL_012f;
	}

IL_00fb:
	{
		bool L_23 = (__this->f17);
		if (!L_23)
		{
			goto IL_012f;
		}
	}
	{
		t50 * L_24 = m125(NULL, &m125_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t52_TI));
		t48  L_25 = m123(NULL, 0, &m123_MI);
		V_4 = L_25;
		t23  L_26 = m126((&V_4), &m126_MI);
		t27  L_27 = m44(NULL, L_26, &m44_MI);
		t27  L_28 = m127(L_24, L_27, &m127_MI);
		t23  L_29 = m43(NULL, L_28, &m43_MI);
		m34(__this, L_29, &m34_MI);
	}

IL_012f:
	{
		goto IL_01e8;
	}

IL_0134:
	{
		bool L_30 = (__this->f17);
		if (L_30)
		{
			goto IL_0187;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t52_TI));
		bool L_31 = m128(NULL, 0, &m128_MI);
		if (!L_31)
		{
			goto IL_0187;
		}
	}
	{
		__this->f17 = 1;
		__this->f18 = (0.0f);
		t50 * L_32 = m125(NULL, &m125_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t52_TI));
		t27  L_33 = m129(NULL, &m129_MI);
		t27  L_34 = m127(L_32, L_33, &m127_MI);
		t23  L_35 = m43(NULL, L_34, &m43_MI);
		__this->f19 = L_35;
		t23  L_36 = (__this->f19);
		m33(__this, L_36, &m33_MI);
		goto IL_01e8;
	}

IL_0187:
	{
		bool L_37 = (__this->f17);
		if (!L_37)
		{
			goto IL_01c3;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t52_TI));
		bool L_38 = m130(NULL, 0, &m130_MI);
		if (!L_38)
		{
			goto IL_01c3;
		}
	}
	{
		__this->f17 = 0;
		t50 * L_39 = m125(NULL, &m125_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t52_TI));
		t27  L_40 = m129(NULL, &m129_MI);
		t27  L_41 = m127(L_39, L_40, &m127_MI);
		t23  L_42 = m43(NULL, L_41, &m43_MI);
		m35(__this, L_42, &m35_MI);
		goto IL_01e8;
	}

IL_01c3:
	{
		bool L_43 = (__this->f17);
		if (!L_43)
		{
			goto IL_01e8;
		}
	}
	{
		t50 * L_44 = m125(NULL, &m125_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t52_TI));
		t27  L_45 = m129(NULL, &m129_MI);
		t27  L_46 = m127(L_44, L_45, &m127_MI);
		t23  L_47 = m43(NULL, L_46, &m43_MI);
		m34(__this, L_47, &m34_MI);
	}

IL_01e8:
	{
		return;
	}
}
// Metadata Definition ItemsManager
extern Il2CppType t19_0_0_22;
FieldInfo t19_f2_FieldInfo = 
{
	"instance", &t19_0_0_22, &t19_TI, offsetof(t19_SFs, f2), &EmptyCustomAttributesCache};
extern Il2CppType t20_0_0_6;
FieldInfo t19_f3_FieldInfo = 
{
	"empties", &t20_0_0_6, &t19_TI, offsetof(t19, f3), &EmptyCustomAttributesCache};
extern Il2CppType t20_0_0_6;
FieldInfo t19_f4_FieldInfo = 
{
	"commons", &t20_0_0_6, &t19_TI, offsetof(t19, f4), &EmptyCustomAttributesCache};
extern Il2CppType t20_0_0_6;
FieldInfo t19_f5_FieldInfo = 
{
	"specials", &t20_0_0_6, &t19_TI, offsetof(t19, f5), &EmptyCustomAttributesCache};
extern Il2CppType t20_0_0_6;
FieldInfo t19_f6_FieldInfo = 
{
	"rares", &t20_0_0_6, &t19_TI, offsetof(t19, f6), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_6;
FieldInfo t19_f7_FieldInfo = 
{
	"all", &t11_0_0_6, &t19_TI, offsetof(t19, f7), &EmptyCustomAttributesCache};
extern Il2CppType t28_0_0_6;
FieldInfo t19_f8_FieldInfo = 
{
	"itemSide", &t28_0_0_6, &t19_TI, offsetof(t19, f8), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_22;
FieldInfo t19_f9_FieldInfo = 
{
	"itemsCountH", &t35_0_0_22, &t19_TI, offsetof(t19_SFs, f9), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_22;
FieldInfo t19_f10_FieldInfo = 
{
	"itemsCountV", &t35_0_0_22, &t19_TI, offsetof(t19_SFs, f10), &EmptyCustomAttributesCache};
extern Il2CppType t28_0_0_6;
FieldInfo t19_f11_FieldInfo = 
{
	"initY", &t28_0_0_6, &t19_TI, offsetof(t19, f11), &EmptyCustomAttributesCache};
extern Il2CppType t28_0_0_6;
FieldInfo t19_f12_FieldInfo = 
{
	"initX", &t28_0_0_6, &t19_TI, offsetof(t19, f12), &EmptyCustomAttributesCache};
extern Il2CppType t28_0_0_1;
FieldInfo t19_f13_FieldInfo = 
{
	"rareWhen", &t28_0_0_1, &t19_TI, offsetof(t19, f13), &EmptyCustomAttributesCache};
extern Il2CppType t28_0_0_1;
FieldInfo t19_f14_FieldInfo = 
{
	"specialWhen", &t28_0_0_1, &t19_TI, offsetof(t19, f14), &EmptyCustomAttributesCache};
extern Il2CppType t28_0_0_1;
FieldInfo t19_f15_FieldInfo = 
{
	"commonWhen", &t28_0_0_1, &t19_TI, offsetof(t19, f15), &EmptyCustomAttributesCache};
extern Il2CppType t22_0_0_22;
FieldInfo t19_f16_FieldInfo = 
{
	"platform", &t22_0_0_22, &t19_TI, offsetof(t19_SFs, f16), &EmptyCustomAttributesCache};
extern Il2CppType t26_0_0_1;
FieldInfo t19_f17_FieldInfo = 
{
	"down", &t26_0_0_1, &t19_TI, offsetof(t19, f17), &EmptyCustomAttributesCache};
extern Il2CppType t28_0_0_1;
FieldInfo t19_f18_FieldInfo = 
{
	"time", &t28_0_0_1, &t19_TI, offsetof(t19, f18), &EmptyCustomAttributesCache};
extern Il2CppType t23_0_0_1;
FieldInfo t19_f19_FieldInfo = 
{
	"pressPos", &t23_0_0_1, &t19_TI, offsetof(t19, f19), &EmptyCustomAttributesCache};
extern Il2CppType t23_0_0_22;
FieldInfo t19_f20_FieldInfo = 
{
	"invalidPosition", &t23_0_0_22, &t19_TI, offsetof(t19_SFs, f20), &EmptyCustomAttributesCache};
extern Il2CppType t23_0_0_22;
FieldInfo t19_f21_FieldInfo = 
{
	"endPosition", &t23_0_0_22, &t19_TI, offsetof(t19_SFs, f21), &EmptyCustomAttributesCache};
extern Il2CppType t13_0_0_1;
FieldInfo t19_f22_FieldInfo = 
{
	"selectedPositions", &t13_0_0_1, &t19_TI, offsetof(t19, f22), &EmptyCustomAttributesCache};
extern Il2CppType t23_0_0_1;
FieldInfo t19_f23_FieldInfo = 
{
	"selectdBoxPos", &t23_0_0_1, &t19_TI, offsetof(t19, f23), &EmptyCustomAttributesCache};
extern Il2CppType t23_0_0_1;
FieldInfo t19_f24_FieldInfo = 
{
	"endBoxPos", &t23_0_0_1, &t19_TI, offsetof(t19, f24), &EmptyCustomAttributesCache};
extern Il2CppType t21_0_0_22;
FieldInfo t19_f25_FieldInfo = 
{
	"neighbours", &t21_0_0_22, &t19_TI, offsetof(t19_SFs, f25), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t19_f26_FieldInfo = 
{
	"figures", &t16_0_0_1, &t19_TI, offsetof(t19, f26), &EmptyCustomAttributesCache};
extern Il2CppType t13_0_0_1;
FieldInfo t19_f27_FieldInfo = 
{
	"enemies", &t13_0_0_1, &t19_TI, offsetof(t19, f27), &EmptyCustomAttributesCache};
extern Il2CppType t7_0_0_6;
FieldInfo t19_f28_FieldInfo = 
{
	"enemyPrefav", &t7_0_0_6, &t19_TI, offsetof(t19, f28), &EmptyCustomAttributesCache};
extern Il2CppType t13_0_0_1;
FieldInfo t19_f29_FieldInfo = 
{
	"bonuses", &t13_0_0_1, &t19_TI, offsetof(t19, f29), &EmptyCustomAttributesCache};
extern Il2CppType t13_0_0_1;
FieldInfo t19_f30_FieldInfo = 
{
	"consumablesToKill", &t13_0_0_1, &t19_TI, offsetof(t19, f30), &EmptyCustomAttributesCache};
static FieldInfo* t19_FIs[] =
{
	&t19_f2_FieldInfo,
	&t19_f3_FieldInfo,
	&t19_f4_FieldInfo,
	&t19_f5_FieldInfo,
	&t19_f6_FieldInfo,
	&t19_f7_FieldInfo,
	&t19_f8_FieldInfo,
	&t19_f9_FieldInfo,
	&t19_f10_FieldInfo,
	&t19_f11_FieldInfo,
	&t19_f12_FieldInfo,
	&t19_f13_FieldInfo,
	&t19_f14_FieldInfo,
	&t19_f15_FieldInfo,
	&t19_f16_FieldInfo,
	&t19_f17_FieldInfo,
	&t19_f18_FieldInfo,
	&t19_f19_FieldInfo,
	&t19_f20_FieldInfo,
	&t19_f21_FieldInfo,
	&t19_f22_FieldInfo,
	&t19_f23_FieldInfo,
	&t19_f24_FieldInfo,
	&t19_f25_FieldInfo,
	&t19_f26_FieldInfo,
	&t19_f27_FieldInfo,
	&t19_f28_FieldInfo,
	&t19_f29_FieldInfo,
	&t19_f30_FieldInfo,
	NULL
};
extern TypeInfo t19_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m21_MI = 
{
	".ctor", (methodPointerType)&m21, &t19_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 24, NULL, (methodPointerType)NULL};
extern TypeInfo t19_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m22_MI = 
{
	".cctor", (methodPointerType)&m22, &t19_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 25, NULL, (methodPointerType)NULL};
extern TypeInfo t19_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m23_MI = 
{
	"Start", (methodPointerType)&m23, &t19_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 26, NULL, (methodPointerType)NULL};
extern TypeInfo t19_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m24_MI = 
{
	"Update", (methodPointerType)&m24, &t19_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 27, NULL, (methodPointerType)NULL};
extern TypeInfo t19_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m25_MI = 
{
	"InitWall", (methodPointerType)&m25, &t19_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 28, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t19_m26_ParameterInfos[] = 
{
	{"x", 0, 134217747, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t19_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m26_MI = 
{
	"CreateBoxAtX", (methodPointerType)&m26, &t19_TI, &t25_0_0_0, RuntimeInvoker_t25_t35, t19_m26_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 29, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
extern Il2CppType t23_0_0_0;
extern Il2CppType t23_0_0_0;
static ParameterInfo t19_m27_ParameterInfos[] = 
{
	{"prefav", 0, 134217748, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"gridPos", 1, 134217749, &EmptyCustomAttributesCache, &t23_0_0_0},
	{"pos", 2, 134217750, &EmptyCustomAttributesCache, &t23_0_0_0},
};
extern TypeInfo t19_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t14_t14_t23_t23 (MethodInfo* method, void* obj, void** args);
MethodInfo m27_MI = 
{
	"CreateBox", (methodPointerType)&m27, &t19_TI, &t7_0_0_0, RuntimeInvoker_t14_t14_t23_t23, t19_m27_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 30, NULL, (methodPointerType)NULL};
extern Il2CppType t23_0_0_0;
static ParameterInfo t19_m28_ParameterInfos[] = 
{
	{"pos", 0, 134217751, &EmptyCustomAttributesCache, &t23_0_0_0},
};
extern TypeInfo t19_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t14_t23 (MethodInfo* method, void* obj, void** args);
MethodInfo m28_MI = 
{
	"CreateEnemy", (methodPointerType)&m28, &t19_TI, &t7_0_0_0, RuntimeInvoker_t14_t23, t19_m28_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 31, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
extern Il2CppType t23_0_0_0;
static ParameterInfo t19_m29_ParameterInfos[] = 
{
	{"prefav", 0, 134217752, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"pos", 1, 134217753, &EmptyCustomAttributesCache, &t23_0_0_0},
};
extern TypeInfo t19_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t14_t14_t23 (MethodInfo* method, void* obj, void** args);
MethodInfo m29_MI = 
{
	"CreateBonus", (methodPointerType)&m29, &t19_TI, &t7_0_0_0, RuntimeInvoker_t14_t14_t23, t19_m29_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 32, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
extern Il2CppType t23_0_0_0;
static ParameterInfo t19_m30_ParameterInfos[] = 
{
	{"prefav", 0, 134217754, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"pos", 1, 134217755, &EmptyCustomAttributesCache, &t23_0_0_0},
};
extern TypeInfo t19_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t14_t14_t23 (MethodInfo* method, void* obj, void** args);
MethodInfo m30_MI = 
{
	"CreateDrop", (methodPointerType)&m30, &t19_TI, &t7_0_0_0, RuntimeInvoker_t14_t14_t23, t19_m30_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 33, NULL, (methodPointerType)NULL};
extern TypeInfo t19_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t14 (MethodInfo* method, void* obj, void** args);
MethodInfo m31_MI = 
{
	"CreateBox", (methodPointerType)&m31, &t19_TI, &t7_0_0_0, RuntimeInvoker_t14, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 34, NULL, (methodPointerType)NULL};
extern TypeInfo t19_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m32_MI = 
{
	"CheckForFigures", (methodPointerType)&m32, &t19_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 35, NULL, (methodPointerType)NULL};
extern Il2CppType t23_0_0_0;
static ParameterInfo t19_m33_ParameterInfos[] = 
{
	{"position", 0, 134217756, &EmptyCustomAttributesCache, &t23_0_0_0},
};
extern TypeInfo t19_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t23 (MethodInfo* method, void* obj, void** args);
MethodInfo m33_MI = 
{
	"OnPress", (methodPointerType)&m33, &t19_TI, &t25_0_0_0, RuntimeInvoker_t25_t23, t19_m33_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 36, NULL, (methodPointerType)NULL};
extern Il2CppType t23_0_0_0;
static ParameterInfo t19_m34_ParameterInfos[] = 
{
	{"position", 0, 134217757, &EmptyCustomAttributesCache, &t23_0_0_0},
};
extern TypeInfo t19_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t23 (MethodInfo* method, void* obj, void** args);
MethodInfo m34_MI = 
{
	"OnDrag", (methodPointerType)&m34, &t19_TI, &t25_0_0_0, RuntimeInvoker_t25_t23, t19_m34_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 37, NULL, (methodPointerType)NULL};
extern Il2CppType t23_0_0_0;
static ParameterInfo t19_m35_ParameterInfos[] = 
{
	{"position", 0, 134217758, &EmptyCustomAttributesCache, &t23_0_0_0},
};
extern TypeInfo t19_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t23 (MethodInfo* method, void* obj, void** args);
MethodInfo m35_MI = 
{
	"OnEndDrag", (methodPointerType)&m35, &t19_TI, &t25_0_0_0, RuntimeInvoker_t25_t23, t19_m35_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 38, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t35_0_0_0;
static ParameterInfo t19_m36_ParameterInfos[] = 
{
	{"x", 0, 134217759, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"y", 1, 134217760, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t19_TI;
extern Il2CppType t26_0_0_0;
extern void* RuntimeInvoker_t26_t35_t35 (MethodInfo* method, void* obj, void** args);
MethodInfo m36_MI = 
{
	"InBoard", (methodPointerType)&m36, &t19_TI, &t26_0_0_0, RuntimeInvoker_t26_t35_t35, t19_m36_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 39, NULL, (methodPointerType)NULL};
extern Il2CppType t23_0_0_0;
static ParameterInfo t19_m37_ParameterInfos[] = 
{
	{"position", 0, 134217761, &EmptyCustomAttributesCache, &t23_0_0_0},
};
extern TypeInfo t19_TI;
extern Il2CppType t23_0_0_0;
extern void* RuntimeInvoker_t23_t23 (MethodInfo* method, void* obj, void** args);
MethodInfo m37_MI = 
{
	"BoxCoordsAtPosition", (methodPointerType)&m37, &t19_TI, &t23_0_0_0, RuntimeInvoker_t23_t23, t19_m37_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 40, NULL, (methodPointerType)NULL};
extern TypeInfo t19_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m38_MI = 
{
	"CheckInput", (methodPointerType)&m38, &t19_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 41, NULL, (methodPointerType)NULL};
static MethodInfo* t19_MIs[] =
{
	&m21_MI,
	&m22_MI,
	&m23_MI,
	&m24_MI,
	&m25_MI,
	&m26_MI,
	&m27_MI,
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m32_MI,
	&m33_MI,
	&m34_MI,
	&m35_MI,
	&m36_MI,
	&m37_MI,
	&m38_MI,
	NULL
};
extern TypeInfo t4_TI;
static TypeInfo* t19_TI__nestedTypes[2] =
{
	&t4_TI,
	NULL
};
extern MethodInfo m49_MI;
extern MethodInfo m50_MI;
extern MethodInfo m51_MI;
extern MethodInfo m52_MI;
static MethodInfo* t19_VT[] =
{
	&m49_MI,
	&m50_MI,
	&m51_MI,
	&m52_MI,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t19_0_0_0;
extern Il2CppType t19_1_0_0;
extern TypeInfo t3_TI;
struct t19;
extern TypeInfo t19_TI;
TypeInfo t19_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "ItemsManager", "", t19_MIs, NULL, t19_FIs, NULL, &t3_TI, t19_TI__nestedTypes, NULL, &t19_TI, NULL, t19_VT, &EmptyCustomAttributesCache, &t19_TI, &t19_0_0_0, &t19_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t19), 0, -1, sizeof(t19_SFs), 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, true, false, false, 18, 0, 29, 0, 1, 4, 0, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
