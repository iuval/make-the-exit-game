#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t781;
struct t781_marshaled;

void t781_marshal(const t781& unmarshaled, t781_marshaled& marshaled);
void t781_marshal_back(const t781_marshaled& marshaled, t781& unmarshaled);
void t781_marshal_cleanup(t781_marshaled& marshaled);
