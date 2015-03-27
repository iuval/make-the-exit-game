#pragma once
#include <stdint.h>
struct t2;
#include "t3.h"
#include "t4.h"
struct t1  : public t3
{
	int32_t f2;
	bool f3;
	float f4;
	float f5;
	bool f6;
	bool f7;
	t2 * f8;
};
