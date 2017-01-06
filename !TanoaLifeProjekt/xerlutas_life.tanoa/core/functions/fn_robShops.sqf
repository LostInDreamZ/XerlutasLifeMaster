/*
///////////////////Xerlutas Gaming Community////////////////////////
file: fn_robShops.sqf
Author: ???? edited by LostInDreamZ
Description:
Main Script Robbing Shops!

////////////////////////////////////////////////////////////////////
*/



private["_robber","_shop","_kassa","_ui","_progress","_pgText","_cP","_rip","_pos"];

_shop = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_robber = [_this,1,ObjNull,[ObjNull]] call BIS_fnc_param;
_action = [_this,2] call BIS_fnc_param;

//Some Checks befor starting

if(side _robber != civilian) exitWith { hint "Ausrauben...?? Guter Witz!" };
if(_robber distance _shop > 3) exitWith {};
if !(_kassa) then { _kassa = 1000; };
if (_rip) exitWith { hint "Robbery already in progress!" };
if (vehicle player != _robber) exitWith { hint "Get out of your vehicle!" };
if !(alive _robber) exitWith {};
if (currentWeapon _robber == "") exitWith { hint "HaHa, you do not threaten me! Get out of here you hobo!" };
if (_kassa == 0) exitWith { hint "There is no cash in the register!" };

//Start Robbing
_rip = true;
_kassa = 800 + round(random 2000) + round(random 3000);
_shop removeAction _action;
_shop switchMove "AmovPercMstpSsurWnonDnon";

//Chance callig Police
_chance = random(100);
if(_chance >= 30) then {[1,format["ALARM! - Tankstelle: %1 wird Ausgeraubt!", _shop]] remoteExec ["life_fnc_broadcast",west]; };
_cops = (west countSide playableUnits);
if(_cops < 1) exitWith{[_vault,-1] remoteExec ["disableSerialization;",2]; hint "Tja mein Freund! Da schaust du... Nichts in der Kasse!";};
disableSerialization;

//ProgressBar Setup
5 cutRsc ["life_progress","PLAIN"];
_ui = uiNameSpace getVariable "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["Tankstelle wird ausgeraubt! Bleib in der nähe (5m) (1%1)...","%"];
_progress progressSetPosition 0.01;
_cP = 0.0001;

if(_rip) then {
	while{true} do
	{
		sleep 3;
		_cP = _cP + 0.01;
		_progress progressSetPosition _cP;
		_pgText ctrlSetText format["Tankstelle wird ausgeraubt! Bleib in der nähe (5m) (%1%2)...",round(_cP * 100),"%"];
		_Pos = position player;
		_marker = createMarker ["Marker200", _Pos];
		"Marker200" setMarkerColor "ColorRed";
		"Marker200" setMarkerText "!Achtung! Tankstellenraub !Achtung!";
		"Marker200" setMarkerType "mil_warning";
		if(_cP >= 1) exitWith {};
		if(_robber distance _shop > 5.5) exitWith { };
		if!(alive _robber) exitWith {};
	};
	
	if!(alive _robber) exitWith { _rip = false; };
	if(_robber distance _shop > 5.5) exitWith { deleteMarker "Marker200"; _shop switchMove ""; hint "KLICK! Der Kassierer hat die Kasse elektronisch verriegelt!"; 5 cutText ["","PLAIN"]; _rip = false; };
	5 cutText ["","PLAIN"];
	titleText[format["Du hast $%1 gestohlen!",[_kassa] call life_fnc_numberText],"PLAIN"];
	deleteMarker "Marker200";
	life_cash = life_cash + _kassa;
	_rip = false;
	life_use_atm = false;
	sleep (30 + random(180));
	life_use_atm = true;
	if!(alive _robber) exitWith {};
	//[getPlayerUID _robber,name _robber,"211"] remoteExec ["life_fnc_wantedAdd",2];
};

//Reset Shop 
_shop switchMove "";
sleep 300;
_action = _shop addAction["Tankstelle ausrauben",life_fnc_robShops];