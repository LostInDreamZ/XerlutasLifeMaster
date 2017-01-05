#include "..\..\script_macros.hpp"
/*	
	//////////////////Xerlutas Gaming Community//////////////////
	File: fn_licenseShow.sqf
	Author:???? edited by LostInDreamZ
*/
if(isServer)exitWith{};
private["_UID","_ziel", "_rang", "_marke", "_message","_driverl","_weaponl"];


if(vehicle player != player )exitWith{};
_ziel = cursorTarget;
if(isNull _ziel) then {_ziel = player;}; 
if(!(_ziel isKindOf "Man")) then {_ziel = player;}; 
if(!(alive _ziel)) then {_ziel = player;};

_UID = getPlayerUID player;

switch(playerSide)do{
 case west:{
		switch (call life_coplevel) do{
		case 1: { _rang = "Gefreiter"; };
		case 2: { _rang = "Gefreiter"; };
		case 3: { _rang = "Gefreiter"; };
		case 4: { _rang = "Gefreiter"; };
		case 5: { _rang = "Gefreiter"; };
		case 6: { _rang = "Gefreiter"; };
		case 7: { _rang = "Gefreiter"; };
		case 8: { _rang = "Gefreiter"; };
		case 9: { _rang = "Gefreiter"; };
		case 10: { _rang = "Gefreiter"; };
		case 11: { _rang = "Gefreiter"; };
		case 12: { _rang = "Gefreiter"; };
		default { _rank = "Error"; };
		};
	_marke = "<img size='8' image='textures\licenses\marke_pol.paa'/> ";
	
	_message = format["<t size='1.5'>%1</t><br/><t size='1.25'>%2</t><br/><br/>%3", name player, _rang, _marke];
	[_message, _UID] remoteExec ["life_fnc_licenseShown",_ziel];
	};
	
	
	
	
 case independent:{
		switch (call life_mediclevel) do{
		case 1: { _rang = "Helfer"; };
		default { _rank = "Error";};
		};
	_marke = "<img size='8' image='textures\licenses\marke_feu.paa'/> ";
	
	_message = format["<t size='1.5'>%1</t><br/><t size='1.25'>%2</t><br/><br/>%3", name player, _rang, _marke];
	[_message, _UID] remoteExec ["life_fnc_licenseShown",_ziel];
	};
 
 
 
 
 
 
 case civilian:{
		if(playerSide == civilian)then{
		
		if (FETCH_CONST(life_adminlevel) > 4) then { _rang = "Bürger | Admin";}
		else{_rang = "Bürger";};
		
		if(license_civ_perso) then { _marke = "<img size='8' image='textures\licenses\marke_ziv.paa'/>"; }
		else {_marke = "<br/>";};
	
		if(license_civ_driver && license_civ_pilot && license_civ_trucking) then {_driverl = "<img size='8' image='textures\licenses\führer_xxx.paa'/> ";};
		if(license_civ_driver && license_civ_pilot && !license_civ_trucking) then {_driverl = "<img size='8' image='textures\licenses\führer_xox.paa'/> ";};
		if(license_civ_driver && license_civ_trucking && !license_civ_pilot) then {_driverl = "<img size='8' image='textures\licenses\führer_xxo.paa'/> ";};
		if(license_civ_pilot && license_civ_trucking && !license_civ_driver) then {_driverl = "<img size='8' image='textures\licenses\führer_oxx.paa'/> ";};
		if(license_civ_pilot && !license_civ_trucking && !license_civ_driver) then {_driverl = "<img size='8' image='textures\licenses\führer_oox.paa'/> ";};
		if(license_civ_driver && !license_civ_trucking && !license_civ_pilot) then {_driverl = "<img size='8' image='textures\licenses\führer_xoo.paa'/> ";};
		if(license_civ_trucking && !license_civ_driver && !license_civ_pilot) then {_driverl = "<img size='8' image='textures\licenses\führer_oxo.paa'/> ";};
		if(!license_civ_trucking && !license_civ_driver && !license_civ_pilot) then {_driverl = "<img size='8' image='textures\licenses\führer_ooo.paa'/> ";};
		
		if(license_civ_gun) then { _weaponl = "<img size='8' image='textures\licenses\marke_waf.paa'/> "; }
		else {_weaponl = "<br/>";};
		
		
		}else{
		_rang = "Bürger";
		_marke = "<br/>";
		}; 
		
		_message = format["<t size='1.5'>%1</t><br/><t size='1.25'>%2</t><t size='1'>%3</t><br/>%4<br/>%5<br/>%6",name player,_rang,_UID,_marke,_driverl, _weaponl];
		[_message, _UID] remoteExec ["life_fnc_licenseShown",_ziel];
	};
		
};

//_message = format["<img size='12' image='%1.jpg'/><br/><br/><t size='2.5'>%2</t><br/><t size='1.8'>%3</t><br/><t size='1'>%4</t>",_marke, name player, _rang, _org];
//_message = format["size='2.5'>%1</t><br/><t size='1'>%2</t> size='1.8'>%3</t><br/><t <img size='12' image='%4.paa'/><br/><br/><t <img size='12' image='%5.paa'/><br/><br/><t <img size='12' image='%6.paa'/><br/><br/><t", name player, _org , _rang, _marke, _driverl, _weaponl];
//[player, _message] remoteExec ["life_fnc_Lizenzsehen",_ziel];
