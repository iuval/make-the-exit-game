#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
extern TypeInfo t662_TI;
#include "t662.h"
#include "t662MD.h"
extern MethodInfo m3065_MI;
extern TypeInfo t662_TI;
extern MethodInfo m3065_MI;
extern TypeInfo t662_TI;
extern MethodInfo m3065_MI;
extern TypeInfo t662_TI;
extern MethodInfo m3065_MI;
extern TypeInfo t662_TI;
extern MethodInfo m3065_MI;
extern TypeInfo t662_TI;
extern MethodInfo m3065_MI;
extern TypeInfo t662_TI;
extern MethodInfo m3065_MI;
extern TypeInfo t55_TI;
#include "t55.h"
#include "t55MD.h"
extern MethodInfo m132_MI;
extern TypeInfo t662_TI;
extern MethodInfo m3065_MI;
extern TypeInfo t663_TI;
#include "t663.h"
#include "t663MD.h"
extern MethodInfo m3066_MI;
extern TypeInfo t662_TI;
extern MethodInfo m3065_MI;
extern TypeInfo t662_TI;
extern MethodInfo m3065_MI;
extern TypeInfo t662_TI;
extern MethodInfo m3065_MI;
extern TypeInfo t662_TI;
extern MethodInfo m3065_MI;
void g_UnityEngine_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t14 *) * cache->count, 0);
	{
		t662 * tmp;
		tmp = (t662 *)il2cpp_codegen_object_new (&t662_TI);
		m3065(tmp, il2cpp_codegen_string_new_wrapper("Unity.Automation"), &m3065_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t662 * tmp;
		tmp = (t662 *)il2cpp_codegen_object_new (&t662_TI);
		m3065(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Advertisements"), &m3065_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t662 * tmp;
		tmp = (t662 *)il2cpp_codegen_object_new (&t662_TI);
		m3065(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud"), &m3065_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t662 * tmp;
		tmp = (t662 *)il2cpp_codegen_object_new (&t662_TI);
		m3065(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Networking"), &m3065_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t662 * tmp;
		tmp = (t662 *)il2cpp_codegen_object_new (&t662_TI);
		m3065(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.TerrainPhysics"), &m3065_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		t662 * tmp;
		tmp = (t662 *)il2cpp_codegen_object_new (&t662_TI);
		m3065(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Terrain"), &m3065_MI);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		t662 * tmp;
		tmp = (t662 *)il2cpp_codegen_object_new (&t662_TI);
		m3065(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests"), &m3065_MI);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		t55 * tmp;
		tmp = (t55 *)il2cpp_codegen_object_new (&t55_TI);
		m132(tmp, &m132_MI);
		extern MethodInfo m133_MI;
		m133(tmp, true, &m133_MI);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		t662 * tmp;
		tmp = (t662 *)il2cpp_codegen_object_new (&t662_TI);
		m3065(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Physics"), &m3065_MI);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		t663 * tmp;
		tmp = (t663 *)il2cpp_codegen_object_new (&t663_TI);
		m3066(tmp, &m3066_MI);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		t662 * tmp;
		tmp = (t662 *)il2cpp_codegen_object_new (&t662_TI);
		m3065(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework.Tests"), &m3065_MI);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		t662 * tmp;
		tmp = (t662 *)il2cpp_codegen_object_new (&t662_TI);
		m3065(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework"), &m3065_MI);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
	{
		t662 * tmp;
		tmp = (t662 *)il2cpp_codegen_object_new (&t662_TI);
		m3065(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests"), &m3065_MI);
		cache->attributes[12] = (Il2CppObject*)tmp;
	}
	{
		t662 * tmp;
		tmp = (t662 *)il2cpp_codegen_object_new (&t662_TI);
		m3065(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests.Framework"), &m3065_MI);
		cache->attributes[13] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache g_UnityEngine_Assembly__CustomAttributeCache = {
14,
NULL,
&g_UnityEngine_Assembly_CustomAttributesCacheGenerator
};
