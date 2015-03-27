#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
extern TypeInfo t426_TI;
#include "t426.h"
#include "t426MD.h"
extern MethodInfo m2071_MI;
extern TypeInfo t427_TI;
#include "t427.h"
#include "t427MD.h"
extern MethodInfo m2072_MI;
extern TypeInfo t428_TI;
#include "t428.h"
#include "t428MD.h"
extern MethodInfo m2073_MI;
extern TypeInfo t429_TI;
#include "t429.h"
#include "t429MD.h"
extern MethodInfo m2074_MI;
extern TypeInfo t430_TI;
#include "t430.h"
#include "t430MD.h"
extern MethodInfo m2075_MI;
extern TypeInfo t431_TI;
#include "t431.h"
#include "t431MD.h"
extern MethodInfo m2076_MI;
extern TypeInfo t55_TI;
#include "t55.h"
#include "t55MD.h"
extern MethodInfo m132_MI;
extern TypeInfo t432_TI;
#include "t432.h"
#include "t432MD.h"
extern MethodInfo m2077_MI;
extern TypeInfo t433_TI;
#include "t433.h"
#include "t433MD.h"
extern MethodInfo m2078_MI;
extern TypeInfo t434_TI;
#include "t434.h"
#include "t434MD.h"
extern MethodInfo m2079_MI;
extern TypeInfo t435_TI;
#include "t435.h"
#include "t435MD.h"
extern MethodInfo m2080_MI;
void g_UnityEngine_UI_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t14 *) * cache->count, 0);
	{
		t426 * tmp;
		tmp = (t426 *)il2cpp_codegen_object_new (&t426_TI);
		m2071(tmp, il2cpp_codegen_string_new_wrapper("guisystem"), &m2071_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t427 * tmp;
		tmp = (t427 *)il2cpp_codegen_object_new (&t427_TI);
		m2072(tmp, il2cpp_codegen_string_new_wrapper(""), &m2072_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t428 * tmp;
		tmp = (t428 *)il2cpp_codegen_object_new (&t428_TI);
		m2073(tmp, il2cpp_codegen_string_new_wrapper(""), &m2073_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t429 * tmp;
		tmp = (t429 *)il2cpp_codegen_object_new (&t429_TI);
		m2074(tmp, il2cpp_codegen_string_new_wrapper("Microsoft"), &m2074_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t430 * tmp;
		tmp = (t430 *)il2cpp_codegen_object_new (&t430_TI);
		m2075(tmp, il2cpp_codegen_string_new_wrapper("guisystem"), &m2075_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		t431 * tmp;
		tmp = (t431 *)il2cpp_codegen_object_new (&t431_TI);
		m2076(tmp, il2cpp_codegen_string_new_wrapper("Copyright © Microsoft 2013"), &m2076_MI);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		t55 * tmp;
		tmp = (t55 *)il2cpp_codegen_object_new (&t55_TI);
		m132(tmp, &m132_MI);
		extern MethodInfo m133_MI;
		m133(tmp, true, &m133_MI);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		t432 * tmp;
		tmp = (t432 *)il2cpp_codegen_object_new (&t432_TI);
		m2077(tmp, il2cpp_codegen_string_new_wrapper("1.0.0.0"), &m2077_MI);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		t433 * tmp;
		tmp = (t433 *)il2cpp_codegen_object_new (&t433_TI);
		m2078(tmp, il2cpp_codegen_string_new_wrapper("d4f464c7-9b15-460d-b4bc-2cacd1c1df73"), &m2078_MI);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		t434 * tmp;
		tmp = (t434 *)il2cpp_codegen_object_new (&t434_TI);
		m2079(tmp, false, &m2079_MI);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		t435 * tmp;
		tmp = (t435 *)il2cpp_codegen_object_new (&t435_TI);
		m2080(tmp, il2cpp_codegen_string_new_wrapper(""), &m2080_MI);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache g_UnityEngine_UI_Assembly__CustomAttributeCache = {
11,
NULL,
&g_UnityEngine_UI_Assembly_CustomAttributesCacheGenerator
};
