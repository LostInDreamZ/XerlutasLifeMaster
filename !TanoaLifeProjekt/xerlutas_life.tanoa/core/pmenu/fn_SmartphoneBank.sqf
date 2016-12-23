#include "..\..\script_macros.hpp"
/*
	File: fn_SmartphoneBank.sqf
	Author: LostInDreamz
*/
private["_near","_near_units","_msBank","_msCash","_total"];
disableSerialization;

_near = CONTROL(7124,2022);
_msBank = CONTROL(7124,2016);
_msCash = CONTROL(7124,2017);
lbClear _near;

//Near players
_near_units = [];
{ if (player distance _x < 10) then {_near_units pushBack _x};} forEach playableUnits;
{
    if (!isNull _x && alive _x && player distance _x < 10 && _x != player) then {
        _near lbAdd format ["%1 - %2",_x getVariable ["realname",name _x], side _x];
        _near lbSetData [(lbSize _near)-1,str(_x)];
    };
} forEach _near_units;

_msBank ctrlSetStructuredText parseText format["<t color='#5A5A5A' size='1px'>$ %1",[CASH] call life_fnc_numberText];
_msCash ctrlSetStructuredText parseText format["<t color='#5A5A5A' size='1px'>$ %1",[BANK] call life_fnc_numberText];