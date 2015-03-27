#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t780;
struct t780_marshaled;

 void m3965 (t780 * __this, bool p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t780_marshal(const t780& unmarshaled, t780_marshaled& marshaled);
void t780_marshal_back(const t780_marshaled& marshaled, t780& unmarshaled);
void t780_marshal_cleanup(t780_marshaled& marshaled);
