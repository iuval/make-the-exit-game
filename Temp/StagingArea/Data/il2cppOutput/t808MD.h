#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t808;
struct t808_marshaled;

void t808_marshal(const t808& unmarshaled, t808_marshaled& marshaled);
void t808_marshal_back(const t808_marshaled& marshaled, t808& unmarshaled);
void t808_marshal_cleanup(t808_marshaled& marshaled);
