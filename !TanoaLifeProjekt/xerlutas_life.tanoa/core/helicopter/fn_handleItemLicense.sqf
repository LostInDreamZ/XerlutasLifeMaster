/*
/////////////////////////////Xerlutas Gaming//////////////////
	Author: LostInDreamZ
///////////////////////////////////////////////////////////////
*/

private["_caller","_shop"];

_shop = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_caller = [_this,1,ObjNull,[ObjNull]] call BIS_fnc_param;
_action = [_this,2] call BIS_fnc_param;



//////Checks 
if(side _caller != civilian) exitWith {};
if(_caller distance _shop > 3) exitWith {};
if (_wip) exitWith {};
if (vehicle player != _caller) exitWith {};
if !(alive _caller) exitWith {};


missionNamespace setVariable [_var,(_value + _num)]; //remove Item


missionNamespace setVariable [_varName,true]; //license add