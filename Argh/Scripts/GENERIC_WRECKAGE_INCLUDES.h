// Generic Wreckage Library
// Subject to the terms of the World Builder License.

#ifndef GENERIC_WRECKAGE_INCLUDES_H_
#define GENERIC_WRECKAGE_INCLUDES_H_

// Argh's Wreckage Script

// This script is hereby released under GPL v. 3 or later by Wolfe Games, 2007
// All contents were created by Wolfe Games.

// This Include is absolutely VITAL.  
// You must call it FIRST.  PERIOD.
// Don't say I didn't warn you ;-)
#include "STANDARD_COMMANDS_WORLDBUILDER.h"

piece base;

piece chunk01, chunk02, chunk03, chunk04, chunk05, chunk06, chunk07, chunk08, chunk09;

piece chunk_rotator01, chunk_rotator02, chunk_rotator03, chunk_rotator04, chunk_rotator05, chunk_rotator06, chunk_rotator07, chunk_rotator08, chunk_rotator09;

Placer()
{
var RandomTurn, RandomMoveZ, GroundHeight, RandomMoveX, RandomMoveNegZ, RandomMoveNegX, RandomMoveY, HideMe;
/////////////////////////////////////////////////////////////////////////////////////////////////// FLORA
///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////	
	RandomTurn = rand(0,359);
	turn chunk_rotator01 to y-axis <1>*RandomTurn now;	
	RandomMoveZ = rand(12,80);
	move chunk01 to z-axis [1]*(RandomMoveZ) now;	
	GroundHeight = ((get UNIT_Y) - (get GROUND_HEIGHT(get PIECE_XZ(chunk01))));
	if (GroundHeight < 0)
	{
		move chunk01 to y-axis GroundHeight now;	
	}
	if (GroundHeight > 0)
	{
		move chunk01 to y-axis 0 - GroundHeight now;
	}
	RandomMoveY = rand(0,[2.5]);
	move chunk01 to y-axis -1*RandomMoveY now;
	
	HideMe = rand(1,6);
	if (HideMe == 6)
	{
		hide chunk01;
	}		
	
	sleep 1;
///////////////////////////////////////////////////////////////////////////////////////////////////	
	RandomTurn = rand(0,359);
	turn chunk_rotator02 to y-axis <1>*RandomTurn now;	
	RandomMoveZ = rand(12,80);
	move chunk02 to z-axis [1]*(RandomMoveZ) now;	
	GroundHeight = ((get UNIT_Y) - (get GROUND_HEIGHT(get PIECE_XZ(chunk02))));
	if (GroundHeight < 0)
	{
		move chunk02 to y-axis GroundHeight now;	
	}
	if (GroundHeight > 0)
	{
		move chunk02 to y-axis 0 - GroundHeight now;
	}	

	RandomMoveY = rand(0,[2.5]);
	move chunk02 to y-axis -1*RandomMoveY now;

	HideMe = rand(1,6);
	if (HideMe == 6)
	{
		hide chunk02;
	}		
	
	sleep 1;
///////////////////////////////////////////////////////////////////////////////////////////////////	
	RandomTurn = rand(0,359);
	turn chunk_rotator03 to y-axis <1>*RandomTurn now;	
	RandomMoveZ = rand(12,80);
	move chunk03 to z-axis [1]*(RandomMoveZ) now;	
	GroundHeight = ((get UNIT_Y) - (get GROUND_HEIGHT(get PIECE_XZ(chunk03))));
	if (GroundHeight < 0)
	{
		move chunk03 to y-axis GroundHeight now;	
	}
	if (GroundHeight > 0)
	{
		move chunk03 to y-axis 0 - GroundHeight now;
	}

	RandomMoveY = rand(0,[2.5]);
	move chunk03 to y-axis -1*RandomMoveY now;	

	HideMe = rand(1,6);
	if (HideMe == 6)
	{
		hide chunk03;
	}		
	
	sleep 1;
///////////////////////////////////////////////////////////////////////////////////////////////////	
	RandomTurn = rand(0,359);
	turn chunk_rotator04 to y-axis <1>*RandomTurn now;	
	RandomMoveZ = rand(12,80);
	move chunk04 to z-axis [1]*(RandomMoveZ) now;	
	GroundHeight = ((get UNIT_Y) - (get GROUND_HEIGHT(get PIECE_XZ(chunk04))));
	if (GroundHeight < 0)
	{
		move chunk04 to y-axis GroundHeight now;	
	}
	if (GroundHeight > 0)
	{
		move chunk04 to y-axis 0 - GroundHeight now;
	}

	RandomMoveY = rand(0,[2.5]);
	move chunk04 to y-axis -1*RandomMoveY now;

	HideMe = rand(1,6);
	if (HideMe == 6)
	{
		hide chunk04;
	}			
	
	sleep 1;
///////////////////////////////////////////////////////////////////////////////////////////////////	
	RandomTurn = rand(0,359);
	turn chunk_rotator05 to y-axis <1>*RandomTurn now;	
	RandomMoveZ = rand(12,80);
	move chunk05 to z-axis [1]*(RandomMoveZ) now;	
	GroundHeight = ((get UNIT_Y) - (get GROUND_HEIGHT(get PIECE_XZ(chunk05))));
	if (GroundHeight < 0)
	{
		move chunk05 to y-axis GroundHeight now;	
	}
	if (GroundHeight > 0)
	{
		move chunk05 to y-axis 0 - GroundHeight now;
	}

	RandomMoveY = rand(0,[2.5]);
	move chunk05 to y-axis -1*RandomMoveY now;

	HideMe = rand(1,6);
	if (HideMe == 6)
	{
		hide chunk05;
	}			
	
	sleep 1;
///////////////////////////////////////////////////////////////////////////////////////////////////	
	RandomTurn = rand(0,359);
	turn chunk_rotator06 to y-axis <1>*RandomTurn now;	
	RandomMoveZ = rand(12,80);
	move chunk06 to z-axis [1]*(RandomMoveZ) now;	
	GroundHeight = ((get UNIT_Y) - (get GROUND_HEIGHT(get PIECE_XZ(chunk06))));
	if (GroundHeight < 0)
	{
		move chunk06 to y-axis GroundHeight now;	
	}
	if (GroundHeight > 0)
	{
		move chunk06 to y-axis 0 - GroundHeight now;
	}	

	RandomMoveY = rand(0,[2.5]);
	move chunk06 to y-axis -1*RandomMoveY now;

	HideMe = rand(1,6);
	if (HideMe == 6)
	{
		hide chunk06;
	}		
	
	sleep 1;
///////////////////////////////////////////////////////////////////////////////////////////////////	
	RandomTurn = rand(0,359);
	turn chunk_rotator07 to y-axis <1>*RandomTurn now;	
	RandomMoveZ = rand(12,80);
	move chunk07 to z-axis [1]*(RandomMoveZ) now;	
	GroundHeight = ((get UNIT_Y) - (get GROUND_HEIGHT(get PIECE_XZ(chunk07))));
	if (GroundHeight < 0)
	{
		move chunk07 to y-axis GroundHeight now;	
	}
	if (GroundHeight > 0)
	{
		move chunk07 to y-axis 0 - GroundHeight now;
	}

	RandomMoveY = rand(0,[2.5]);
	move chunk07 to y-axis -1*RandomMoveY now;

	HideMe = rand(1,6);
	if (HideMe == 6)
	{
		hide chunk07;
	}			
	
	sleep 1;
///////////////////////////////////////////////////////////////////////////////////////////////////	
	RandomTurn = rand(0,359);
	turn chunk_rotator08 to y-axis <1>*RandomTurn now;	
	RandomMoveZ = rand(12,80);
	move chunk08 to z-axis [1]*(RandomMoveZ) now;	
	GroundHeight = ((get UNIT_Y) - (get GROUND_HEIGHT(get PIECE_XZ(chunk08))));
	if (GroundHeight < 0)
	{
		move chunk08 to y-axis GroundHeight now;	
	}
	if (GroundHeight > 0)
	{
		move chunk08 to y-axis 0 - GroundHeight now;
	}	

	RandomMoveY = rand(0,[2.5]);
	move chunk08 to y-axis -1*RandomMoveY now;

	HideMe = rand(1,6);
	if (HideMe == 6)
	{
		hide chunk08;
	}		
	
	sleep 1;
///////////////////////////////////////////////////////////////////////////////////////////////////	
	RandomTurn = rand(0,359);
	turn chunk_rotator09 to y-axis <1>*RandomTurn now;	
	RandomMoveZ = rand(12,80);
	move chunk09 to z-axis [1]*(RandomMoveZ) now;	
	GroundHeight = ((get UNIT_Y) - (get GROUND_HEIGHT(get PIECE_XZ(chunk09))));
	if (GroundHeight < 0)
	{
		move chunk09 to y-axis GroundHeight now;	
	}
	if (GroundHeight > 0)
	{
		move chunk09 to y-axis 0 - GroundHeight now;
	}	

	RandomMoveY = rand(0,[2.5]);
	move chunk09 to y-axis -1*RandomMoveY now;

	HideMe = rand(1,6);
	if (HideMe == 6)
	{
		hide chunk09;
	}		
	
	sleep 1;
///////////////////////////////////////////////////////////////////////////////////////////////////	
}

Create()
{
	turn base to y-axis rand(<-180>,<180>) now;
	start-script Placer();
}

Killed(severity, corpsetype)
{
	emit-sfx 1025 from base;
	hide chunk01;
	explode chunk01 type FALL;
	hide chunk03;
	explode chunk03 type FALL;
	hide chunk05;
	explode chunk05 type FALL;
	hide chunk07;
	explode chunk07 type FALL;
	hide chunk09;
	explode chunk09 type FALL;											
	return (0);
}


#endif // if GENERIC_WRECKAGE_INCLUDES_H_