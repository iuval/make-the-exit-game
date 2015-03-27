#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t445;
struct t445_marshaled;

 void m2604 (t445 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t445_marshal(const t445& unmarshaled, t445_marshaled& marshaled);
void t445_marshal_back(const t445_marshaled& marshaled, t445& unmarshaled);
void t445_marshal_cleanup(t445_marshaled& marshaled);
