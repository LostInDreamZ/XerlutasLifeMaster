/*
	File: fn_loadoutDeleteGear.sqf 
	Author: DeadP4xel

	Description:
	Delete Saved Gear on button click.
*/
private["_index","_deleteCurrentSlot","_deleteAll"];

// VARIABLES
_index = [_this,0,"",[]] call BIS_fnc_param;

// ERROR CHECKS 
if((_index > 1) OR (_index < 0)) then {_index = 0};
if(_index isEqualTo []) exitWith {};

// START SCRIPT
switch(_index) do {
	case 0:
	{
		_deleteCurrentSlot = ["Möchtest du das ausgewählte Loadout löschen?","Lösche momentanes Loadout","Loadout gelöscht","Schließen"] call BIS_fnc_guiMessage;
		if(_deleteCurrentSlot) then {
			hintSilent "Ausgewähltes Loadout gelöscht!";
			if(sd_activeProfile isEqualTo -1) exitWith {hintSilent "Nichts ausgewählt!"};
			if(sd_activeProfile isEqualTo 0) then {
    			sd_loadout_1 = [];
			};
			if(sd_activeProfile isEqualTo 1) then {
			    sd_loadout_2 = [];
			};
			if(sd_activeProfile isEqualTo 2) then {
			    sd_loadout_3 = [];
			};
			if(sd_activeProfile isEqualTo 3) then {
			    sd_loadout_4 = [];
			};
			if(sd_activeProfile isEqualTo 4) then {
			    sd_loadout_5 = [];
			};
		} else {
			[] call life_fnc_loadoutInit;
		};
	};
	case 1:
	{
		_deleteAll = ["Möchtest du ALLE Loadouts löschen?","Lösche alle Loadouts","Loadouts gelöscht","Schließen"] call BIS_fnc_guiMessage;
		if(_deleteAll) then {
			hintSilent "Alle Loadouts gelöscht!";
			sd_loadout_1 = [];
			sd_loadout_2 = [];
			sd_loadout_3 = [];
			sd_loadout_4 = [];
			sd_loadout_5 = [];
		} else {
			[] call life_fnc_loadoutInit;
		};
	};
	default {hintSilent "Abgebrochen!"};
};