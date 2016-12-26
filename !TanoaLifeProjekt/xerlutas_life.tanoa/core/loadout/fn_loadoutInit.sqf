/*
	File: fn_loadoutInit.sqf 
	Author: DeadP4xel

	Description:
	Init the loadout script
*/
private["_dropdownMenu","_buttonSaveGear"];
disableSerialization;

if(playerSide isEqualTo civilian) exitWith {hint "Du bist kein Polizist!";};
if(playerSide isEqualTo independent) exitWith {hint "Du bist kein Polizist!";};
if(!(call sd_loadoutMaster)) exitWith {};

if(!(createDialog "loadoutGUI")) exitWith {};

// DISPLAYS
_buttonSaveGear = ((findDisplay 75000) displayCtrl 75002);
_dropdownMenu = ((findDisplay 75000) displayCtrl 75004);

// DROPDOWN MENU 
lbClear _dropdownMenu;
if(FETCH_CONST(life_coplevel) >= 1) then {
	_dropdownMenu lbAdd "Ausrüstung 1";
};
if(FETCH_CONST(life_coplevel) >= 2) then {
	_dropdownMenu lbAdd "Ausrüstung 2";
};
if(FETCH_CONST(life_coplevel) >= 4) then {
	_dropdownMenu lbAdd "Ausrüstung 3";
};
if(FETCH_CONST(life_coplevel) >= 6) then {
	_dropdownMenu lbAdd "Ausrüstung 4";
};
if(FETCH_CONST(life_coplevel) >= 8) then {
	_dropdownMenu lbAdd "Ausrüstung 5";
};
_dropdownMenu lbSetCurSel 0;

// BUTTON CONTROL 
if(sd_loadoutSyncCooldown) then {
	_buttonSaveGear ctrlEnable false;
	_buttonSaveGear ctrlSetText "COOLDOWN";
} else {
	_buttonSaveGear ctrlEnable true;
	_buttonSaveGear ctrlSetText "SYNC TO SERVER";
};