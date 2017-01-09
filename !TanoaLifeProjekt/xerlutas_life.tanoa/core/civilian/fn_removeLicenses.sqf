#include "..\..\script_macros.hpp"
/*
    File: fn_removeLicenses.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Used for stripping certain licenses off of civilians as punishment.
*/
private "_state";
_state = param [0,1,[0]];

switch (_state) do {
    //Death while being wanted
    case 0: {
        missionNamespace setVariable [LICENSE_VARNAME("rebel","civ"),false];
        missionNamespace setVariable [LICENSE_VARNAME("driver","civ"),false];
        missionNamespace setVariable [LICENSE_VARNAME("heroin","civ"),false];
        missionNamespace setVariable [LICENSE_VARNAME("marijuana","civ"),false];
        missionNamespace setVariable [LICENSE_VARNAME("cocaine","civ"),false];
    };

    //Jail licenses
    case 1: {
        missionNamespace setVariable [LICENSE_VARNAME("gun","civ"),false];
        missionNamespace setVariable [LICENSE_VARNAME("driver","civ"),false];
        missionNamespace setVariable [LICENSE_VARNAME("rebel","civ"),false];
    };

    //Remove motor vehicle licenses
    case 2: {
        if (missionNamespace getVariable LICENSE_VARNAME("driver","civ") || missionNamespace getVariable LICENSE_VARNAME("pilot","civ") || missionNamespace getVariable LICENSE_VARNAME("trucking","civ") || missionNamespace getVariable LICENSE_VARNAME("boat","civ")) then {
            missionNamespace setVariable [LICENSE_VARNAME("pilot","civ"),false];
            missionNamespace setVariable [LICENSE_VARNAME("driver","civ"),false];
            missionNamespace setVariable [LICENSE_VARNAME("trucking","civ"),false];
            missionNamespace setVariable [LICENSE_VARNAME("boat","civ"),false];
            hint localize "STR_Civ_LicenseRemove_1";
        };
    };

    //Killing someone while owning a gun license
    case 3: {
        if (missionNamespace getVariable LICENSE_VARNAME("gun","civ")) then {
            missionNamespace setVariable [LICENSE_VARNAME("gun","civ"),false];
            hint localize "STR_Civ_LicenseRemove_2";
        };
    };
	
	/////////////////////////////////////Police License Removing////////////////////////////////////////////
 
	// Führerschein Lizenz
	case 10: {
		missionNamespace setVariable [LICENSE_VARNAME("driver","civ"),false];
		hint localize "STR_Civ_RevokeLicense_Driver";
	};
	// LKW Führerschein Lizenz
	case 11: {
		missionNamespace setVariable [LICENSE_VARNAME("trucking","civ"),false];
		hint localize "STR_Civ_RevokeLicense_Truck";
	};
	// Pilotenschein Lizenz
	case 12: {
		missionNamespace setVariable [LICENSE_VARNAME("pilot","civ"),false];
		hint localize "STR_Civ_RevokeLicense_Pilot";
	};
	// Bootsschein Lizenz
	case 13: {
		missionNamespace setVariable [LICENSE_VARNAME("boat","civ"),false];
		hint localize "STR_Civ_RevokeLicense_Boating";
	};
	// Ausweis Lizenz
	case 14: {
		missionNamespace setVariable [LICENSE_VARNAME("perso","civ"),false];
		hint localize "STR_Civ_RevokeLicense_ausweis";
	};
	// Waffenschein Lizenz
	case 15: {
		missionNamespace setVariable [LICENSE_VARNAME("gun","civ"),false];
		hint localize "STR_Civ_RevokeLicense_Wap";
	};
	// Alle Scheine
	case 16: {
	missionNamespace setVariable [LICENSE_VARNAME("driver","civ"),false];
	missionNamespace setVariable [LICENSE_VARNAME("trucking","civ"),false];
	missionNamespace setVariable [LICENSE_VARNAME("pilot","civ"),false];
	missionNamespace setVariable [LICENSE_VARNAME("boat","civ"),false];
	hint localize "STR_Civ_RevokeLicense_AllMotor";
	};
	
	///////////////////////////////////////////////////////////////////////////////////////////////
};
