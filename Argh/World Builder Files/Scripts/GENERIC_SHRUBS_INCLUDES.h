// Generic Shrub Library
// Subject to the terms of the World Builder License.

#ifndef GENERIC_SHRUBS_INCLUDES_H_
#define GENERIC_SHRUBS_INCLUDES_H_

// Argh's Flora Script

// This script is hereby released under GPL v. 3 or later by Wolfe Games, 2007
// All contents were created by Wolfe Games.

// This Include is absolutely VITAL.  
// You must call it FIRST.  PERIOD.
// Don't say I didn't warn you ;-)
#include "STANDARD_COMMANDS_WORLDBUILDER.h"

piece base;

piece flora001, flora002, flora003, flora004, flora005;
piece flora006, flora007, flora008, flora009, flora010;
piece flora011, flora012, flora013, flora014, flora015;
piece flora016, flora017, flora018, flora019, flora020;

piece flora_proxy001, flora_proxy002, flora_proxy003, flora_proxy004, flora_proxy005;
piece flora_proxy006, flora_proxy007, flora_proxy008, flora_proxy009, flora_proxy010;
piece flora_proxy011, flora_proxy012, flora_proxy013, flora_proxy014, flora_proxy015;
piece flora_proxy016, flora_proxy017, flora_proxy018, flora_proxy019, flora_proxy020;

Placer()
{
var RandomTurn, RandomMoveZ, GroundHeight, RandomMoveX, RandomMoveNegZ, RandomMoveNegX;
/////////////////////////////////////////////////////////////////////////////////////////////////// FLORA
///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////	
	RandomTurn = rand(0,359);
	turn flora_proxy001 to y-axis <1>*RandomTurn now;	
	RandomMoveZ = rand(24,128);
	move flora001 to z-axis [1]*(RandomMoveZ) now;	
	GroundHeight = ((get UNIT_Y) - (get GROUND_HEIGHT(get PIECE_XZ(flora001))));
	if (GroundHeight < 0)
	{
		move flora001 to y-axis GroundHeight now;	
	}
	if (GroundHeight > 0)
	{
		move flora001 to y-axis 0 - GroundHeight now;
	}			
	
	sleep 1;
///////////////////////////////////////////////////////////////////////////////////////////////////	
	RandomTurn = rand(0,359);
	turn flora_proxy002 to y-axis <1>*RandomTurn now;	
	RandomMoveZ = rand(24,128);
	move flora002 to z-axis [1]*(RandomMoveZ) now;	
	GroundHeight = ((get UNIT_Y) - (get GROUND_HEIGHT(get PIECE_XZ(flora002))));
	if (GroundHeight < 0)
	{
		move flora002 to y-axis GroundHeight now;	
	}
	if (GroundHeight > 0)
	{
		move flora002 to y-axis 0 - GroundHeight now;
	}			
	
	sleep 1;
///////////////////////////////////////////////////////////////////////////////////////////////////	
	RandomTurn = rand(0,359);
	turn flora_proxy003 to y-axis <1>*RandomTurn now;	
	RandomMoveZ = rand(24,128);
	move flora003 to z-axis [1]*(RandomMoveZ) now;	
	GroundHeight = ((get UNIT_Y) - (get GROUND_HEIGHT(get PIECE_XZ(flora003))));
	if (GroundHeight < 0)
	{
		move flora003 to y-axis GroundHeight now;	
	}
	if (GroundHeight > 0)
	{
		move flora003 to y-axis 0 - GroundHeight now;
	}			
	
	sleep 1;
///////////////////////////////////////////////////////////////////////////////////////////////////	
	RandomTurn = rand(0,359);
	turn flora_proxy004 to y-axis <1>*RandomTurn now;	
	RandomMoveZ = rand(24,128);
	move flora004 to z-axis [1]*(RandomMoveZ) now;	
	GroundHeight = ((get UNIT_Y) - (get GROUND_HEIGHT(get PIECE_XZ(flora004))));
	if (GroundHeight < 0)
	{
		move flora004 to y-axis GroundHeight now;	
	}
	if (GroundHeight > 0)
	{
		move flora004 to y-axis 0 - GroundHeight now;
	}			
	
	sleep 1;
///////////////////////////////////////////////////////////////////////////////////////////////////	
	RandomTurn = rand(0,359);
	turn flora_proxy005 to y-axis <1>*RandomTurn now;	
	RandomMoveZ = rand(24,128);
	move flora005 to z-axis [1]*(RandomMoveZ) now;	
	GroundHeight = ((get UNIT_Y) - (get GROUND_HEIGHT(get PIECE_XZ(flora005))));
	if (GroundHeight < 0)
	{
		move flora005 to y-axis GroundHeight now;	
	}
	if (GroundHeight > 0)
	{
		move flora005 to y-axis 0 - GroundHeight now;
	}			
	
	sleep 1;
///////////////////////////////////////////////////////////////////////////////////////////////////	
	RandomTurn = rand(0,359);
	turn flora_proxy006 to y-axis <1>*RandomTurn now;	
	RandomMoveZ = rand(24,128);
	move flora006 to z-axis [1]*(RandomMoveZ) now;	
	GroundHeight = ((get UNIT_Y) - (get GROUND_HEIGHT(get PIECE_XZ(flora006))));
	if (GroundHeight < 0)
	{
		move flora006 to y-axis GroundHeight now;	
	}
	if (GroundHeight > 0)
	{
		move flora006 to y-axis 0 - GroundHeight now;
	}			
	
	sleep 1;
///////////////////////////////////////////////////////////////////////////////////////////////////	
	RandomTurn = rand(0,359);
	turn flora_proxy007 to y-axis <1>*RandomTurn now;	
	RandomMoveZ = rand(24,128);
	move flora007 to z-axis [1]*(RandomMoveZ) now;	
	GroundHeight = ((get UNIT_Y) - (get GROUND_HEIGHT(get PIECE_XZ(flora007))));
	if (GroundHeight < 0)
	{
		move flora007 to y-axis GroundHeight now;	
	}
	if (GroundHeight > 0)
	{
		move flora007 to y-axis 0 - GroundHeight now;
	}			
	
	sleep 1;
///////////////////////////////////////////////////////////////////////////////////////////////////	
	RandomTurn = rand(0,359);
	turn flora_proxy008 to y-axis <1>*RandomTurn now;	
	RandomMoveZ = rand(24,128);
	move flora008 to z-axis [1]*(RandomMoveZ) now;	
	GroundHeight = ((get UNIT_Y) - (get GROUND_HEIGHT(get PIECE_XZ(flora008))));
	if (GroundHeight < 0)
	{
		move flora008 to y-axis GroundHeight now;	
	}
	if (GroundHeight > 0)
	{
		move flora008 to y-axis 0 - GroundHeight now;
	}			
	
	sleep 1;
///////////////////////////////////////////////////////////////////////////////////////////////////	
	RandomTurn = rand(0,359);
	turn flora_proxy009 to y-axis <1>*RandomTurn now;	
	RandomMoveZ = rand(24,128);
	move flora009 to z-axis [1]*(RandomMoveZ) now;	
	GroundHeight = ((get UNIT_Y) - (get GROUND_HEIGHT(get PIECE_XZ(flora009))));
	if (GroundHeight < 0)
	{
		move flora009 to y-axis GroundHeight now;	
	}
	if (GroundHeight > 0)
	{
		move flora009 to y-axis 0 - GroundHeight now;
	}			
	
	sleep 1;
///////////////////////////////////////////////////////////////////////////////////////////////////	
	RandomTurn = rand(0,359);
	turn flora_proxy010 to y-axis <1>*RandomTurn now;	
	RandomMoveZ = rand(24,128);
	move flora010 to z-axis [1]*(RandomMoveZ) now;	
	GroundHeight = ((get UNIT_Y) - (get GROUND_HEIGHT(get PIECE_XZ(flora010))));
	if (GroundHeight < 0)
	{
		move flora010 to y-axis GroundHeight now;	
	}
	if (GroundHeight > 0)
	{
		move flora010 to y-axis 0 - GroundHeight now;
	}			
	
	sleep 1;
///////////////////////////////////////////////////////////////////////////////////////////////////	
	RandomTurn = rand(0,359);
	turn flora_proxy011 to y-axis <1>*RandomTurn now;	
	RandomMoveZ = rand(24,128);
	move flora011 to z-axis [1]*(RandomMoveZ) now;	
	GroundHeight = ((get UNIT_Y) - (get GROUND_HEIGHT(get PIECE_XZ(flora011))));
	if (GroundHeight < 0)
	{
		move flora011 to y-axis GroundHeight now;	
	}
	if (GroundHeight > 0)
	{
		move flora011 to y-axis 0 - GroundHeight now;
	}			
	
	sleep 1;
///////////////////////////////////////////////////////////////////////////////////////////////////	
	RandomTurn = rand(0,359);
	turn flora_proxy012 to y-axis <1>*RandomTurn now;	
	RandomMoveZ = rand(24,128);
	move flora012 to z-axis [1]*(RandomMoveZ) now;	
	GroundHeight = ((get UNIT_Y) - (get GROUND_HEIGHT(get PIECE_XZ(flora012))));
	if (GroundHeight < 0)
	{
		move flora012 to y-axis GroundHeight now;	
	}
	if (GroundHeight > 0)
	{
		move flora012 to y-axis 0 - GroundHeight now;
	}			
	
	sleep 1;
///////////////////////////////////////////////////////////////////////////////////////////////////	
	RandomTurn = rand(0,359);
	turn flora_proxy013 to y-axis <1>*RandomTurn now;	
	RandomMoveZ = rand(24,128);
	move flora013 to z-axis [1]*(RandomMoveZ) now;	
	GroundHeight = ((get UNIT_Y) - (get GROUND_HEIGHT(get PIECE_XZ(flora013))));
	if (GroundHeight < 0)
	{
		move flora013 to y-axis GroundHeight now;	
	}
	if (GroundHeight > 0)
	{
		move flora013 to y-axis 0 - GroundHeight now;
	}			
	
	sleep 1;
///////////////////////////////////////////////////////////////////////////////////////////////////	
	RandomTurn = rand(0,359);
	turn flora_proxy014 to y-axis <1>*RandomTurn now;	
	RandomMoveZ = rand(24,128);
	move flora014 to z-axis [1]*(RandomMoveZ) now;	
	GroundHeight = ((get UNIT_Y) - (get GROUND_HEIGHT(get PIECE_XZ(flora014))));
	if (GroundHeight < 0)
	{
		move flora014 to y-axis GroundHeight now;	
	}
	if (GroundHeight > 0)
	{
		move flora014 to y-axis 0 - GroundHeight now;
	}			
	
	sleep 1;
///////////////////////////////////////////////////////////////////////////////////////////////////	
	RandomTurn = rand(0,359);
	turn flora_proxy015 to y-axis <1>*RandomTurn now;	
	RandomMoveZ = rand(24,128);
	move flora015 to z-axis [1]*(RandomMoveZ) now;	
	GroundHeight = ((get UNIT_Y) - (get GROUND_HEIGHT(get PIECE_XZ(flora015))));
	if (GroundHeight < 0)
	{
		move flora015 to y-axis GroundHeight now;	
	}
	if (GroundHeight > 0)
	{
		move flora015 to y-axis 0 - GroundHeight now;
	}			
	
	sleep 1;
///////////////////////////////////////////////////////////////////////////////////////////////////	
	RandomTurn = rand(0,359);
	turn flora_proxy016 to y-axis <1>*RandomTurn now;	
	RandomMoveZ = rand(24,128);
	move flora016 to z-axis [1]*(RandomMoveZ) now;	
	GroundHeight = ((get UNIT_Y) - (get GROUND_HEIGHT(get PIECE_XZ(flora016))));
	if (GroundHeight < 0)
	{
		move flora016 to y-axis GroundHeight now;	
	}
	if (GroundHeight > 0)
	{
		move flora016 to y-axis 0 - GroundHeight now;
	}			
	
	sleep 1;
///////////////////////////////////////////////////////////////////////////////////////////////////	
	RandomTurn = rand(0,359);
	turn flora_proxy017 to y-axis <1>*RandomTurn now;	
	RandomMoveZ = rand(24,128);
	move flora017 to z-axis [1]*(RandomMoveZ) now;	
	GroundHeight = ((get UNIT_Y) - (get GROUND_HEIGHT(get PIECE_XZ(flora017))));
	if (GroundHeight < 0)
	{
		move flora017 to y-axis GroundHeight now;	
	}
	if (GroundHeight > 0)
	{
		move flora017 to y-axis 0 - GroundHeight now;
	}			
	
	sleep 1;
///////////////////////////////////////////////////////////////////////////////////////////////////	
	RandomTurn = rand(0,359);
	turn flora_proxy018 to y-axis <1>*RandomTurn now;	
	RandomMoveZ = rand(24,128);
	move flora018 to z-axis [1]*(RandomMoveZ) now;	
	GroundHeight = ((get UNIT_Y) - (get GROUND_HEIGHT(get PIECE_XZ(flora018))));
	if (GroundHeight < 0)
	{
		move flora018 to y-axis GroundHeight now;	
	}
	if (GroundHeight > 0)
	{
		move flora018 to y-axis 0 - GroundHeight now;
	}			
	
	sleep 1;
///////////////////////////////////////////////////////////////////////////////////////////////////	
	RandomTurn = rand(0,359);
	turn flora_proxy019 to y-axis <1>*RandomTurn now;	
	RandomMoveZ = rand(24,128);
	move flora019 to z-axis [1]*(RandomMoveZ) now;	
	GroundHeight = ((get UNIT_Y) - (get GROUND_HEIGHT(get PIECE_XZ(flora019))));
	if (GroundHeight < 0)
	{
		move flora019 to y-axis GroundHeight now;	
	}
	if (GroundHeight > 0)
	{
		move flora019 to y-axis 0 - GroundHeight now;
	}			
	
	sleep 1;
///////////////////////////////////////////////////////////////////////////////////////////////////	
	RandomTurn = rand(0,359);
	turn flora_proxy020 to y-axis <1>*RandomTurn now;	
	RandomMoveZ = rand(24,128);
	move flora020 to z-axis [1]*(RandomMoveZ) now;	
	GroundHeight = ((get UNIT_Y) - (get GROUND_HEIGHT(get PIECE_XZ(flora020))));
	if (GroundHeight < 0)
	{
		move flora020 to y-axis GroundHeight now;	
	}
	if (GroundHeight > 0)
	{
		move flora020 to y-axis 0 - GroundHeight now;
	}			
	
	sleep 1;	
}

Create()
{
	start-script Placer();
}

Killed(severity, corpsetype)
{
	move base to y-axis [-15] speed [5];
	wait-for-move base along y-axis;												
	return (0);
}


#endif // if GENERIC_SHRUBS_INCLUDES_H_