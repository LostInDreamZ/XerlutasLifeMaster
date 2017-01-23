/*
/////////////////////////////Xerlutas Gaming//////////////////
	Author: LostInDreamZ
///////////////////////////////////////////////////////////////
*/
private ["_title","_progressBar","_cP","_titleText"];
if (isNull _curTarget) exitWith {}; //Bad type

if (missionNamespace getVariable LICENSE_VARNAME("helib","civ") exitWith {hint "Du hast bereits einen Helikopter Wertschein!";};
if (!(missionNamespace getVariable LICENSE_VARNAME("helib","civ")) then {
	if (dialog) then {closeDialog 0;}
	if (life_action_inUse) exitWith {};
	
	life_action_inUse = true;
	//Setup the progress bar
	disableSerialization;
	"progressBar" cutRsc ["life_progress","PLAIN"];
	_ui = uiNamespace getVariable "life_progress";
	_progressBar = _ui displayCtrl 38201;
	_titleText = _ui displayCtrl 38202;
	_titleText ctrlSetText format ["%2 (1%1)...","%",_title];
	_progressBar progressSetPosition 0.01;
	_cP = 0.01;
	
	for "_i" from 0 to 1 step 0 do {
		sleep 0.26;
		if (isNull _ui) then {
			"progressBar" cutRsc ["life_progress","PLAIN"];
			_ui = uiNamespace getVariable "life_progress";
			_progressBar = _ui displayCtrl 38201;
			_titleText = _ui displayCtrl 38202;
		};
		_cP = _cP + 0.01;
		_progressBar progressSetPosition _cP;
		_titleText ctrlSetText format ["%3 (%1%2)...",round(_cP * 100),"%",_title];

		if (_cP >= 1 || !alive player) exitWith {};
		if (life_istazed) exitWith {}; //Tazed
		if (life_isknocked) exitWith {}; //Knocked
		if (life_interrupted) exitWith {};
		if (player getVariable ["restrained",false]) exitWith {};
	};

	//Kill the UI display and check for various states
	"progressBar" cutText ["","PLAIN"];

	if (!alive player || life_istazed || life_isknocked) exitWith {life_action_inUse = false;};
	if (player getVariable ["restrained",false]) exitWith {life_action_inUse = false;};
	if (life_interrupted) exitWith {life_interrupted = false; titleText[localize "STR_NOTF_ActionCancel","PLAIN"]; life_action_inUse = false;};
	if (!([false,"helib",1] call life_fnc_handleInv)) exitWith {life_action_inUse = false;};
	missionNamespace setVariable [LICENSE_VARNAME("helib","civ"),true];
	
	life_action_inUse = false;
	
}