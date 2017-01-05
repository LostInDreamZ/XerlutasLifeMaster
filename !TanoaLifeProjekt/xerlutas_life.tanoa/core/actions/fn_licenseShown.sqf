/*	
	//////////////////Xerlutas Gaming Community//////////////////
	File: fn_licenseShown.sqf
	Author:???? edited by LostInDreamZ
*/


/*if(isServer)exitWith{};
private["_msg"];
_msg = _this select 1;
hintSilent parseText _msg;
*/

params [
	"_msg",
	"_uid"
];

hint parseText format ["%1",_msg];
xer_licensesShown pushBack _uid;