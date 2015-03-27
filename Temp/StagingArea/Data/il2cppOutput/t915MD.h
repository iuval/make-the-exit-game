#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t915;
struct t915_marshaled;

void t915_marshal(const t915& unmarshaled, t915_marshaled& marshaled);
void t915_marshal_back(const t915_marshaled& marshaled, t915& unmarshaled);
void t915_marshal_cleanup(t915_marshaled& marshaled);
