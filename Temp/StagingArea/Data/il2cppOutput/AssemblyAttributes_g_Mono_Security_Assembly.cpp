#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
extern TypeInfo t434_TI;
#include "t434.h"
#include "t434MD.h"
extern MethodInfo m2079_MI;
extern TypeInfo t55_TI;
#include "t55.h"
#include "t55MD.h"
extern MethodInfo m132_MI;
extern TypeInfo t662_TI;
#include "t662.h"
#include "t662MD.h"
extern MethodInfo m3065_MI;
extern TypeInfo t684_TI;
#include "t684.h"
#include "t684MD.h"
extern MethodInfo m3087_MI;
extern TypeInfo t685_TI;
#include "t685.h"
#include "t685MD.h"
extern MethodInfo m3088_MI;
extern TypeInfo t431_TI;
#include "t431.h"
#include "t431MD.h"
extern MethodInfo m2076_MI;
extern TypeInfo t429_TI;
#include "t429.h"
#include "t429MD.h"
extern MethodInfo m2074_MI;
extern TypeInfo t681_TI;
#include "t681.h"
#include "t681MD.h"
extern MethodInfo m3084_MI;
extern TypeInfo t426_TI;
#include "t426.h"
#include "t426MD.h"
extern MethodInfo m2071_MI;
extern TypeInfo t430_TI;
#include "t430.h"
#include "t430MD.h"
extern MethodInfo m2075_MI;
extern TypeInfo t427_TI;
#include "t427.h"
#include "t427MD.h"
extern MethodInfo m2072_MI;
extern TypeInfo t680_TI;
#include "t680.h"
#include "t680MD.h"
extern MethodInfo m3083_MI;
void g_Mono_Security_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t14 *) * cache->count, 0);
	{
		t434 * tmp;
		tmp = (t434 *)il2cpp_codegen_object_new (&t434_TI);
		m2079(tmp, false, &m2079_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t55 * tmp;
		tmp = (t55 *)il2cpp_codegen_object_new (&t55_TI);
		m132(tmp, &m132_MI);
		extern MethodInfo m133_MI;
		m133(tmp, true, &m133_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t662 * tmp;
		tmp = (t662 *)il2cpp_codegen_object_new (&t662_TI);
		m3065(tmp, il2cpp_codegen_string_new_wrapper("System, PublicKey=00240000048000009400000006020000002400005253413100040000010001008D56C76F9E8649383049F383C44BE0EC204181822A6C31CF5EB7EF486944D032188EA1D3920763712CCB12D75FB77E9811149E6148E5D32FBAAB37611C1878DDC19E20EF135D0CB2CFF2BFEC3D115810C3D9069638FE4BE215DBF795861920E5AB6F7DB2E2CEEF136AC23D5DD2BF031700AEC232F6C6B1C785B4305C123B37AB"), &m3065_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3087(tmp, il2cpp_codegen_string_new_wrapper("../mono.pub"), &m3087_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t685 * tmp;
		tmp = (t685 *)il2cpp_codegen_object_new (&t685_TI);
		m3088(tmp, true, &m3088_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		t431 * tmp;
		tmp = (t431 *)il2cpp_codegen_object_new (&t431_TI);
		m2076(tmp, il2cpp_codegen_string_new_wrapper("(c) 2003-2004 Various Authors"), &m2076_MI);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		t429 * tmp;
		tmp = (t429 *)il2cpp_codegen_object_new (&t429_TI);
		m2074(tmp, il2cpp_codegen_string_new_wrapper("MONO development team"), &m2074_MI);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		t681 * tmp;
		tmp = (t681 *)il2cpp_codegen_object_new (&t681_TI);
		m3084(tmp, true, &m3084_MI);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		t426 * tmp;
		tmp = (t426 *)il2cpp_codegen_object_new (&t426_TI);
		m2071(tmp, il2cpp_codegen_string_new_wrapper("Mono.Security.dll"), &m2071_MI);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		t430 * tmp;
		tmp = (t430 *)il2cpp_codegen_object_new (&t430_TI);
		m2075(tmp, il2cpp_codegen_string_new_wrapper("MONO CLI"), &m2075_MI);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		t427 * tmp;
		tmp = (t427 *)il2cpp_codegen_object_new (&t427_TI);
		m2072(tmp, il2cpp_codegen_string_new_wrapper("Mono.Security.dll"), &m2072_MI);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		t680 * tmp;
		tmp = (t680 *)il2cpp_codegen_object_new (&t680_TI);
		m3083(tmp, il2cpp_codegen_string_new_wrapper("en-US"), &m3083_MI);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache g_Mono_Security_Assembly__CustomAttributeCache = {
12,
NULL,
&g_Mono_Security_Assembly_CustomAttributesCacheGenerator
};
