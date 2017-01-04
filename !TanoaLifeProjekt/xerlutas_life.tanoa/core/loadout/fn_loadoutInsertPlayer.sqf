/*
	File: fn_insertPlayerLoadout.sqf
	Author: DeadP4xel

	Description:
	Insert the default schema.
*/
// PREPARE THE PACKAGE WITH DATA
//[[(profileName),getPlayerUID player,player],"LOUTS_fnc_insertNewPlayer",false,false] spawn BIS_fnc_MP;
[(profileName), getPlayerUID player,player] remoteExec ["LOUTS_fnc_loadoutHandler",2];