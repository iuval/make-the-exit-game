#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t619;
struct t619_marshaled;

void t619_marshal(const t619& unmarshaled, t619_marshaled& marshaled);
void t619_marshal_back(const t619_marshaled& marshaled, t619& unmarshaled);
void t619_marshal_cleanup(t619_marshaled& marshaled);
