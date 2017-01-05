/*
    File: fn_setupActions.sqf
    Author:

    Description:
    Master addAction file handler for all client-based actions.
*/
switch (playerSide) do {
    case civilian: {
        //Drop fishing net
        life_actions = [player addAction[localize "STR_pAct_DropFishingNet",life_fnc_dropFishingNet,"",0,false,false,"",'
        (surfaceisWater (getPos vehicle player)) && (vehicle player isKindOf "Ship") && life_carryWeight < life_maxWeight && speed (vehicle player) < 2 && speed (vehicle player) > -1 && !life_net_dropped ']];
        //Rob person
        life_actions = life_actions + [player addAction[localize "STR_pAct_RobPerson",life_fnc_robAction,"",0,false,false,"",'
        !isNull cursorObject && player distance cursorObject < 3.5 && isPlayer cursorObject && animationState cursorObject == "Incapacitated" && !(cursorObject getVariable ["robbed",false]) ']];
		//Ausweis
		life_actions = life_actions + [player addAction["<t color='#FF00FF'>Ausweis zeigen</t>",life_fnc_licenseShow,"",1,false,true,"",'
		playerSide == civilian && !isNull cursorTarget && player distance cursorTarget < 2.5 && cursorTarget isKindOf "Man" && alive cursortarget ']];
    };
	
	case west:	{
		//Ausweis
		life_actions = life_actions + [player addAction["<t color='#FF00FF'>Polizeimarke zeigen</t>",life_fnc_licenseShow,"",1,false,true,"",'
		playerSide == west && !isNull cursorTarget && player distance cursorTarget < 2.5 && cursorTarget isKindOf "Man" && alive cursortarget ']];
	};
	
	case independent:	{
		//Ausweis
		life_actions = life_actions + [player addAction["<t color='#FF00FF'>Dienstausweis zeigen</t>",life_fnc_licenseShow,"",1,false,true,"",'
		playerSide == west && !isNull cursorTarget && player distance cursorTarget < 2.5 && cursorTarget isKindOf "Man" && alive cursortarget ']];
	}; 
};
