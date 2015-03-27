#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
extern TypeInfo t55_TI;
#include "t55.h"
#include "t55MD.h"
extern MethodInfo m132_MI;
void g_AssemblyU2DCSharp_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t14 *) * cache->count, 0);
	{
		t55 * tmp;
		tmp = (t55 *)il2cpp_codegen_object_new (&t55_TI);
		m132(tmp, &m132_MI);
		extern MethodInfo m133_MI;
		m133(tmp, true, &m133_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache g_AssemblyU2DCSharp_Assembly__CustomAttributeCache = {
1,
NULL,
&g_AssemblyU2DCSharp_Assembly_CustomAttributesCacheGenerator
};
