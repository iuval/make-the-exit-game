#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t48;
struct t48_marshaled;
#include "t23.h"
#include "t49.h"

 int32_t m1439 (t48 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t23  m126 (t48 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m124 (t48 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t48_marshal(const t48& unmarshaled, t48_marshaled& marshaled);
void t48_marshal_back(const t48_marshaled& marshaled, t48& unmarshaled);
void t48_marshal_cleanup(t48_marshaled& marshaled);
