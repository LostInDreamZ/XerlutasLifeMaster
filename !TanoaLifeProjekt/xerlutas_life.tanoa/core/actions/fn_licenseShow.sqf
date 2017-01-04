//Author: PierreAmyf
if(isServer)exitWith{};
private["_ziel", "_rang", "_marke", "_org", "_message","driverl","weaponl"];


if(vehicle player != player )exitWith{};
_ziel = cursorTarget;
if(isNull _ziel) then {_ziel = player;}; 
if(!(_ziel isKindOf "Man")) then {_ziel = player;}; 
if(!(alive _ziel)) then {_ziel = player;};

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
	_marke = "textures\licenses\...";
	_org = "Tanoa Polizei";
	
	if (license_cop_cAir && license_cop_cg) then {_driverl = "textures\licenses\...";}
	else if(license_cop_cAir && !license_cop_cg) then {_driverl = "textures\licenses\...";}
	else if(!license_cop_cAir && license_cop_cg) then {_driverl = "textures\licenses\...";}
	else{_driverl = "";};
	
	_weaponl = "";
	
	};
 case independent:{
		switch (call life_mediclevel) do{
		case 1: { _rang = "Sanitäter"; };
		default { _rank = "Error";};
		};
	_marke = "textures\licenses\...";
	_org = "Tanoa Feuerwehr";
	if (license_med_mAir) then {_driverl = "textures\licenses\...";}
	else {_driverl = "";};
	_weaponl = "";
	};
 
 case civilian:{
		if(playerSide == civilian)then{
		_rang = "Bürger";
		
		if(license_civ_perso) then { _marke = "textures\licenses\..."; }
		else {_marke = "";};
	
		if(license_civ_driver && license_civ_pilot && license_civ_trucking) then {_driverl = "textures\licenses\...";}
		else if(license_civ_driver && license_civ_pilot && !license_civ_trucking) then {_driverl = "textures\licenses\...";}
		else if(license_civ_driver && license_civ_trucking && !license_civ_pilot) then {_driverl = "textures\licenses\...";}
		else if(license_civ_pilot && license_civ_trucking && !license_civ_driver) then {_driverl = "textures\licenses\...";}
		else if(license_civ_pilot && !license_civ_trucking && !license_civ_driver ) then {_driverl = "textures\licenses\...";}
		else if(license_civ_driver && !license_civ_trucking && !license_civ_pilot) then {_driverl = "textures\licenses\...";}
		else if(license_civ_trucking && !license_civ_driver && !license_civ_pilot) then {_driverl = "textures\licenses\...";}
		else {_driverl = "";};
		
		if(license_civ_gun) then { _weaponl = "textures\licenses\..."; }
		else {_weaponl = "";};
		
		_org = "Tanoa Island";
		
		}else{
		_rang = "Bürger";
		_marke = "#Error#";
		_weaponl = "#Error#";
		_driverl = "#Error#";
		_org = "Tanoa Island";
		}; 
	};
};

//_message = format["<img size='12' image='%1.jpg'/><br/><br/><t size='2.5'>%2</t><br/><t size='1.8'>%3</t><br/><t size='1'>%4</t>",_marke, name player, _rang, _org];
_message = format["size='2.5'>%1</t><br/><t size='1'>%2</t> size='1.8'>%3</t><br/><t <img size='12' image='%4.jpg'/><br/><br/><t <img size='12' image='%5.jpg'/><br/><br/><t <img size='12' image='%6.jpg'/><br/><br/><t", name player, _org , _rang, _marke, _driverl, _weaponl]


[player, _message] remoteExec ["life_fnc_Lizenzsehen",_ziel];
