#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t517;
struct t517_marshaled;
struct t14;

 bool m2805 (t517 * __this, t14 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m2806 (t517 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m2807 (t14 * __this, t517 * p0, t517 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t517_marshal(const t517& unmarshaled, t517_marshaled& marshaled);
void t517_marshal_back(const t517_marshaled& marshaled, t517& unmarshaled);
void t517_marshal_cleanup(t517_marshaled& marshaled);
