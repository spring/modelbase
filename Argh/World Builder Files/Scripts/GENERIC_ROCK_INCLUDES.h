// Generic Rock Library
// Subject to the terms of the World Builder License.

#ifndef GENERIC_ROCK_INCLUDES_H_
#define GENERIC_ROCK_INCLUDES_H_

// This Include is absolutely VITAL.  
// You must call it FIRST.  PERIOD.
// Don't say I didn't warn you ;-)
#include "STANDARD_COMMANDS_WORLDBUILDER.h"

piece base;

#define DEADBUILDING_DUST_FX 1024+1

Create()
{
	var RandomTurn;
	RandomTurn = rand(0,359);
	turn base to y-axis <1>*RandomTurn now;
}

Killed(a,b)
{
	explode base type FALL;
	hide base;
	return (0);
}

#endif // if GENERIC_ROCK_INCLUDES_H_