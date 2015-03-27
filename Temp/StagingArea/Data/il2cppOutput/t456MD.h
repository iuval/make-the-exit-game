#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t456;
struct t456_marshaled;

 void m2140 (t456 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2141 (t456 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2142 (t456 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2143 (t456 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t456_marshal(const t456& unmarshaled, t456_marshaled& marshaled);
void t456_marshal_back(const t456_marshaled& marshaled, t456& unmarshaled);
void t456_marshal_cleanup(t456_marshaled& marshaled);
