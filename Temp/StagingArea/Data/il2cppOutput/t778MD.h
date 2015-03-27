#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t778;
struct t778_marshaled;
#include "t779.h"

 void m3964 (t778 * __this, int32_t p0, uint8_t* p1, uint8_t* p2, uint8_t* p3, uint8_t* p4, uint8_t* p5, bool p6, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t778_marshal(const t778& unmarshaled, t778_marshaled& marshaled);
void t778_marshal_back(const t778_marshaled& marshaled, t778& unmarshaled);
void t778_marshal_cleanup(t778_marshaled& marshaled);
