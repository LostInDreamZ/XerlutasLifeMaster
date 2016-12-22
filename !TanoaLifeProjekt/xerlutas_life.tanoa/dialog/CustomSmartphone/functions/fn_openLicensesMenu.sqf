#include "..\..\..\script_macros.hpp"
/*
	File: fn_openLicencesMenu.sqf
	Author: Travis Boi edited lostInDreamZ
	
	Description:
	Updates the players licences menu!
*/
private["_lic","_side","_struct"];
disableSerialization;

_side = switch(playerSide) do {case west:{"cop"}; case civilian:{"civ"}; case independent:{"med"};};
_lic = CONTROL(20058,1500);
_struct = "";

{
    _displayName = getText(_x >> "displayName");

    if (LICENSE_VALUE(configName _x,_side)) then {
        _struct = _struct + format ["%1<br/>",localize _displayName];
    };
} forEach (format ["getText(_x >> 'side') isEqualTo '%1'",_side] configClasses (missionConfigFile >> "Licenses"));

if (_struct isEqualTo "") then {
    _struct = "Keine Lizenzen";
};

_lic ctrlSetStructuredText parseText format["
<t size='0.8px'>
%1
</t>
",_struct];