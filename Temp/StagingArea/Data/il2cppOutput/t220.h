#pragma once
#include <stdint.h>
struct t220;
struct t220_marshaled;
struct t482;
#include "t14.h"
#include "t77.h"
struct t220  : public t14
{
	t77 f0;
};
struct t220_SFs{
	t220 * f1;
	t220 * f2;
	t482 * f3;
};
// Native definition for marshalling of: UnityEngine.Event
struct t220_marshaled
{
	t77 f0;
};
