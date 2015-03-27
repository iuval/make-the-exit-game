#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t515;
struct t515_marshaled;
struct t516;

 void m2666 (t515 * __this, t516* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2667 (t515 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2668 (t515 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2669 (t515 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2670 (t515 * __this, t516* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t515_marshal(const t515& unmarshaled, t515_marshaled& marshaled);
void t515_marshal_back(const t515_marshaled& marshaled, t515& unmarshaled);
void t515_marshal_cleanup(t515_marshaled& marshaled);
