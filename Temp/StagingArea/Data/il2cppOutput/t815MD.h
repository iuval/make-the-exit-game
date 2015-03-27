#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t815;
struct t815_marshaled;

void t815_marshal(const t815& unmarshaled, t815_marshaled& marshaled);
void t815_marshal_back(const t815_marshaled& marshaled, t815& unmarshaled);
void t815_marshal_cleanup(t815_marshaled& marshaled);
