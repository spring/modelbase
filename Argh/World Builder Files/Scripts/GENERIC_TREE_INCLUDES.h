// Generic Tree Library
// Subject to the terms of the World Builder License.

#ifndef GENERIC_TREE_INCLUDES_H_
#define GENERIC_TREE_INCLUDES_H_

//Tree / Bush Generic Script
#include "STANDARD_COMMANDS_WORLDBUILDER.h"

piece base;

#define TREE_EXPLOSION_FX 1024+0

Create()
{
	var RandomTurn;
	RandomTurn = rand(0,359);
	turn base to y-axis <1>*RandomTurn now;
}

Killed(a,b)
{
	emit-sfx TREE_EXPLOSION_FX from base;
	turn base to x-axis <-120> speed <60>;
	wait-for-turn base around x-axis;	
	return (0);
}

#endif // if GENERIC_TREE_INCLUDES_H_