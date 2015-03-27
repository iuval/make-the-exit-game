#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t521;
struct t521_marshaled;
struct t33;

 t33* m2692 (t521 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2693 (t521 * __this, t33* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t33* m2694 (t521 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2695 (t521 * __this, t33* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t521_marshal(const t521& unmarshaled, t521_marshaled& marshaled);
void t521_marshal_back(const t521_marshaled& marshaled, t521& unmarshaled);
void t521_marshal_cleanup(t521_marshaled& marshaled);
