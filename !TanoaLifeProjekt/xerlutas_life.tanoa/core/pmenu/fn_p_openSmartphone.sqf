#include "..\..\script_macros.hpp"
/*
	File: fn_p_openSmartPhone.sqf
	Author: LostInDreamZ

	Description:
	Opens the players virtual inventory menu
*/
if (!alive player || dialog) exitWith {}; //Prevent them from opening this for exploits while dead.
createDialog "smartphoneopen";
disableSerialization;

switch(playerSide) do
{
	case west: 
	{
		ctrlEnable[2011,false];
		ctrlEnable[2016,false];
	};
	
	case civilian:
	{
		ctrlEnable[2012,false];
	};
	
	case independent:
	{
		ctrlEnable[2011,false];
		ctrlEnable[2016,false];
		ctrlEnable[2012,false];
	};
};

if (FETCH_CONST(life_adminlevel) < 1) then {
    ctrlShow[2021,false];
};
