/*
	File: fn_insertNewPlayer.sqf
	Author: DeadP4xel

	Description:
	INSERT Data to the database
*/
private["_uid","_name","_sender","_result","_query"];

// CONVERT DATA
_name = 			[_this,0,"",[""]] call BIS_fnc_param;
_uid = 				[_this,1,"",[""]] call BIS_fnc_param;
_sender = 			[_this,2,ObjNull,[ObjNull]] call BIS_fnc_param;
_result = 			"";

// ERROR CHECKS
if((_uid isEqualTo "") OR (_name isEqualTo "")) exitWith {};
if(isNull _sender) exitWith {};

// QUERY REQUEST
_query = format["SELECT name, playerid FROM loadouts WHERE playerid='%1'",_uid];
_result = [_query,2] call DB_fnc_queryHandler;

// ERROR CHECKS 2
if(typeName _result isEqualTo "STRING") exitWith {
//[[],"life_fnc_loadoutSendRequest",(owner _sender),false] spawn BIS_fnc_MP
[] remoteExec ["life_fnc_loadoutSendRequest",(owner _sender)];
};

if(count _result != 0) exitWith {
//[[],"life_fnc_loadoutSendRequest",(owner _sender),false] spawn BIS_fnc_MP
[] remoteExec ["life_fnc_loadoutSendRequest",(owner _sender)];
};

// CONVERT DATA
_name = [_name] call DB_fnc_mresString;

// INSERT DATA FINAL
_query = format["INSERT INTO loadouts (name, playerid, active, loadout_1, loadout_2, loadout_3, loadout_4, loadout_5) VALUES('%1', '%2', '0', '""[]""', '""[]""', '""[]""', '""[]""', '""[]""')",_name,_uid];
[_query,1] call DB_fnc_queryHandler;

// SEND TO CLIENT
//[[],"life_fnc_loadoutSendRequest",(owner _sender),false] spawn BIS_fnc_MP;
[] remoteExec ["life_fnc_loadoutSendRequest",(owner _sender)];