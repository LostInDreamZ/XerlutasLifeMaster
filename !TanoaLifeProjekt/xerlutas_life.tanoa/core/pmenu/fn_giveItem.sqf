#include "..\..\script_macros.hpp"
/*
    File: fn_giveItem.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Gives the selected item & amount to the selected player and
    removes the item & amount of it from the players virtual
    inventory.
*/
private ["_unit","_val"];
_val = ctrlText 3004;
ctrlShow[1602,false];
if ((lbCurSel 2100) isEqualTo -1) exitWith {hint localize "STR_NOTF_noOneSelected";
ctrlShow[1602,true];};
_unit = lbData [2100,lbCurSel 2100];
_unit = call compile format ["%1",_unit];

if ((lbCurSel 1500) isEqualTo -1) exitWith {hint localize "STR_NOTF_didNotSelectItemToGive";ctrlShow[1602,true];};

_item = lbData [1500,(lbCurSel 1500)];
if (isNil "_unit") exitWith {ctrlShow[1602,true];};
if (_unit == player) exitWith {ctrlShow[1602,true];};
if (isNull _unit) exitWith {ctrlShow[1602,true];};

//A series of checks *ugh*
if (!([_val] call TON_fnc_isnumber)) exitWith {hint localize "STR_NOTF_notNumberFormat";ctrlShow[1602,true];};
if (parseNumber(_val) <= 0) exitWith {hint localize "STR_NOTF_enterAmountGive";ctrlShow[1602,true];};
if (isNil "_unit") exitWith {ctrlShow[2001,true]; hint localize "STR_NOTF_notWithinRange";};
if (!([false,_item,(parseNumber _val)] call life_fnc_handleInv)) exitWith {hint localize "STR_NOTF_couldNotGive";ctrlShow[1602,true];};

[_unit,_val,_item,player] remoteExecCall ["life_fnc_receiveItem",_unit];
_type = M_CONFIG(getText,"VirtualItems",_item,"displayName");
hint format [localize "STR_NOTF_youGaveItem",_unit getVariable ["realname",name _unit],_val,(localize _type)];
[] call life_fnc_p_updateMenu;

ctrlShow[1602,true];