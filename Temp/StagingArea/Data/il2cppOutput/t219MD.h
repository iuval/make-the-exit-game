#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t219;
struct t219_marshaled;

 void m2096 (t219 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2097 (t219 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2098 (t219 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t219_marshal(const t219& unmarshaled, t219_marshaled& marshaled);
void t219_marshal_back(const t219_marshaled& marshaled, t219& unmarshaled);
void t219_marshal_cleanup(t219_marshaled& marshaled);
