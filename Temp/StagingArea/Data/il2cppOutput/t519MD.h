#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t519;
struct t519_marshaled;

void t519_marshal(const t519& unmarshaled, t519_marshaled& marshaled);
void t519_marshal_back(const t519_marshaled& marshaled, t519& unmarshaled);
void t519_marshal_cleanup(t519_marshaled& marshaled);
