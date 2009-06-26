// Generic Car Library
// Subject to the terms of the World Builder License.

#ifndef GENERIC_CAR_INCLUDES_H_
#define GENERIC_CAR_INCLUDES_H_

// This Include is absolutely VITAL.  
// You must call it FIRST.  PERIOD.
// Don't say I didn't warn you ;-)
#include "STANDARD_COMMANDS_WORLDBUILDER.h"

piece base;

#define DEADBUILDING_DUST_FX 1024+1

Create()
{
	sleep 30;
}

Killed(a,b)
{
	emit-sfx DEADBUILDING_DUST_FX from base;
	explode base type FALL;
	hide base;
	return (0);
}

#endif // if GENERIC_CAR_INCLUDES_H_