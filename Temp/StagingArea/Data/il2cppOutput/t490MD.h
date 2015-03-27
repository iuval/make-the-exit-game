#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t490;
struct t490_marshaled;

void t490_marshal(const t490& unmarshaled, t490_marshaled& marshaled);
void t490_marshal_back(const t490_marshaled& marshaled, t490& unmarshaled);
void t490_marshal_cleanup(t490_marshaled& marshaled);
