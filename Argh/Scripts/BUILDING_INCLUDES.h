// Building Library
// Subject to the terms of the World Builder License.

#ifndef BUILDING_INCLUDES_H_
#define BUILDING_INCLUDES_H_

piece hold,door;

lua_PieceNums(arg) { return (0); }
lua_DoorNums(arg) { return (0); }

ReturnPieces()
{
	call-script lua_PieceNums(hold);
}

GetDoor()
{
	call-script lua_DoorNums(door);
}

#endif // if BUILDING_INCLUDES_H_