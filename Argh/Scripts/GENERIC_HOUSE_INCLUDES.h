// Generic House Library
// Subject to the terms of the World Builder License.

#ifndef GENERIC_HOUSE_INCLUDES_H_
#define GENERIC_HOUSE_INCLUDES_H_

// This Include is absolutely VITAL.  
// You must call it FIRST.  PERIOD.
// Don't say I didn't warn you ;-)
#include "STANDARD_COMMANDS_WORLDBUILDER.h"
#include "BUILDING_INCLUDES.h"

piece base, smoke;
piece explodepoint, explode_point01, explode_point02, explode_point03, explode_point04;

// SmokeUnit_WORLDBUILDER is a completely optional Include.  It *requires* STANDARD_COMMANDS_WORLDBUILDER.h
// ...to be included (or the code) *BEFORE* you call it.
// And SMOKEPIECE1 through SMOKEPIECE4 MUST BE DEFINED!
// It doesn't matter if they all refer to the same part.
#define SMOKEPIECE1 explode_point01
#define SMOKEPIECE2 explode_point02
#define SMOKEPIECE3 explode_point03
#define SMOKEPIECE4 explode_point04
#include "SmokeUnit_WORLDBUILDER.h"

#define DEADBUILDING_DUST_FX 1024+1

SmokeMe()
{
	var RandomSeed;
	while(TRUE)
	{
	RandomSeed = rand(100,300);
	emit-sfx SMOKEPUFF_WORLDBUILDER from smoke;
	sleep RandomSeed;
	}
}

Create()
{
	var CanWe;
	CanWe = rand(1,10);
	turn explodepoint to x-axis <-90> now;
	start-script SmokeUnit_WORLDBUILDER();
	if (CanWe == 10)
	{
		start-script SmokeMe();
	}
}

Killed(severity, corpsetype)
{
	emit-sfx DEADBUILDING_DUST_FX from explodepoint;
	return(0);
}

#endif // if GENERIC_HOUSE_INCLUDES_H_