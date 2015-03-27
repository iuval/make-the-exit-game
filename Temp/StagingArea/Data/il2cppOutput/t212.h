#pragma once
#include <stdint.h>
struct t14;
struct t213;
#include "t14.h"
struct t212  : public t14
{
	int32_t f0;
	t14 * f1;
	t213 * f2;
};
