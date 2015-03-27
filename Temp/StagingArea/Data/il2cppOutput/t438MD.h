#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t438;
struct t438_marshaled;

 void m2494 (t438 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2495 (t438 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2496 (t438 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t438_marshal(const t438& unmarshaled, t438_marshaled& marshaled);
void t438_marshal_back(const t438_marshaled& marshaled, t438& unmarshaled);
void t438_marshal_cleanup(t438_marshaled& marshaled);
