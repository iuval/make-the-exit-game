#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t518;
struct t518_marshaled;
struct t33;

 bool m2680 (t518 * __this, t33* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m2681 (t518 * __this, t33* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m2682 (t518 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m2683 (t518 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m2684 (t518 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 float m2685 (t518 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m2686 (t518 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m2687 (t518 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m2688 (t518 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t518_marshal(const t518& unmarshaled, t518_marshaled& marshaled);
void t518_marshal_back(const t518_marshaled& marshaled, t518& unmarshaled);
void t518_marshal_cleanup(t518_marshaled& marshaled);
