#pragma once
#include <stdint.h>
struct t7;
#include "t61.h"
#include "t66.h"
#include "t23.h"
#include "t27.h"
#include "t123.h"
struct t64  : public t61
{
	t7 * f2;
	t7 * f3;
	t7 * f4;
	t7 * f5;
	t7 * f6;
	t66  f7;
	t66  f8;
	bool f9;
	int32_t f10;
	t23  f11;
	t23  f12;
	t23  f13;
	t27  f14;
	t27  f15;
	float f16;
	int32_t f17;
	t23  f18;
	bool f19;
	bool f20;
	int32_t f21;
};
