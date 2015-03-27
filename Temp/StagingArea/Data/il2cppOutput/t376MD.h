#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t376;
struct t376_marshaled;

 void m1728 (t376 * __this, float p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t376_marshal(const t376& unmarshaled, t376_marshaled& marshaled);
void t376_marshal_back(const t376_marshaled& marshaled, t376& unmarshaled);
void t376_marshal_cleanup(t376_marshaled& marshaled);
