#include "player_sys.sqf"

class smartphoneopen {
    idd = 8223;
    movingEnable = 1;
    enableSimulation = 1;
	//onLoad = "[] spawn life_fnc_p_openSmartphone;";

    class controlsBackground {
		class XerlutasSmartphone: Life_RscPicture //OK
        {
            idc = 1100;
            text = "dialog\CustomSmartPhone\HandyHauptMenu.paa";
            x = 0.598954 * safezoneW + safezoneX;
            y = 0.289352 * safezoneH + safezoneY;
            w = 0.409382 * safezoneW;
            h = 0.712529 * safezoneH;
        };
		class Icon_wanted: Life_RscPicture
        {
            idc = 1101;
            text = "dialog\CustomSmartPhone\Wanted.paa";
            x = 0.681532 * safezoneW + safezoneX;
            y = 0.609441 * safezoneH + safezoneY;
            w = 0.035892 * safezoneW;
            h = 0.067412 * safezoneH;
        };
        class Icon_admin: Life_RscPicture 
        {
			idc = 1102;
            text = "dialog\CustomSmartPhone\Admin.paa";
            x = 0.682227 * safezoneW + safezoneX;
            y = 0.678577 * safezoneH + safezoneY;
            w = 0.035892 * safezoneW;
            h = 0.067412 * safezoneH;
        };
    };
    class controls {
        class ButtonClose: Life_RscButtonInvisible  //Completed
        {
            idc = -1;
			text = "";
			onButtonClick = "closeDialog 0;";
            x = 0.679335 * safezoneW + safezoneX;
            y = 0.840492 * safezoneH + safezoneY;
            w = 0.154175 * safezoneW;
            h = 0.053272 * safezoneH;
        };
        class ButtonSettings: Life_RscButtonInvisible  //Completed
        {
            idc = -1;
			text = "";
            onButtonClick = "[] call life_fnc_settingsMenu;";
            x = 0.683616 * safezoneW + safezoneX;
            y = 0.763762 * safezoneH + safezoneY;
            w = 0.035892 * safezoneW;
            h = 0.067412 * safezoneH;
        };
        class Button_Sync: Life_RscButtonInvisible  //Completed
        {
            idc = -1;
			text = "";
            //shortcuts[] = {0x00050000 + 2};
            onButtonClick = "[] call SOCK_fnc_syncData;";
            x = 0.721116 * safezoneW + safezoneX;
            y = 0.763762 * safezoneH + safezoneY;
            w = 0.035892 * safezoneW;
            h = 0.067412 * safezoneH;
        };
        class Button_SMS: Life_RscButtonInvisible  //OK -> SQL Smartphoen folgt...
        {
            idc = 2014;
            text = "";
            //onButtonClick = "createDialog ""Life_cell_phone"";";
			onButtonClick = "createDialog ""Life_my_smartphone"";";
            x = 0.758616 * safezoneW + safezoneX;
            y = 0.764997 * safezoneH + safezoneY;
            w = 0.035892 * safezoneW;
            h = 0.067412 * safezoneH;
        };
        class Button_Cash: Life_RscButtonInvisible  //In Bearbeitung... Icons fehlen!
        {
            idc = 1103;
			text = "";
			onButtonClick = "createDialog ""Life_Xer_Banking"";";
            x = 0.796116 * safezoneW + safezoneX;
            y = 0.764997 * safezoneH + safezoneY;
            w = 0.035892 * safezoneW;
            h = 0.067412 * safezoneH;
            ColorBackground[] = {0,0,0,0.627450};
            ColorText[] = {1,1,1,1};
            font = TahomaB;
            colorFocused[] = {0,0,0,1};
            colorDisabled[] = {0,0,0,1};
        };
        class Button_Inv: Life_RscButtonInvisible  //In Bearbeitung...
        {
            idc = 1101;
            text = "";
			//onButtonClick = "[]call life_fnc_openInvMenu;";
			onButtonClick = "createDialog ""playerSettings"";disableSerialization;[] call life_fnc_p_updateMenu;";
            x = 0.681532 * safezoneW + safezoneX;
            y = 0.408207 * safezoneH + safezoneY;
            w = 0.035892 * safezoneW;
            h = 0.067412 * safezoneH;
        };
        class Button_keys: Life_RscButtonInvisible  //Completed
        {
            idc = 2013;
            text = "";
            onButtonClick = "createDialog ""Life_key_management"";";
            x = 0.719727 * safezoneW + safezoneX;
            y = 0.408207 * safezoneH + safezoneY;
            w = 0.035892 * safezoneW;
            h = 0.067412 * safezoneH;
        };
        class Button_license: Life_RscButtonInvisible  //In Bearbeitung..
        {
            idc = 1108;
            text = "";
			onButtonClick = "createDialog ""Life_Xer_Licences"";disableSerialization;[] call life_fnc_openLicensesMenu;";
            x = 0.758616 * safezoneW + safezoneX;
            y = 0.409441 * safezoneH + safezoneY;
            w = 0.035892 * safezoneW;
            h = 0.067412 * safezoneH;
        };
        class Button_Gang: Life_RscButtonInvisible  //In Bearbeitung...
        {
            idc = 2011;
            text = "";
            onButtonClick = "if (isNil ""life_action_gangInUse"") then {if (isNil {(group player) getVariable ""gang_owner""}) then {createDialog ""Life_Create_Gang_Diag"";} else {[] spawn life_fnc_gangMenu;};};";
            x = 0.797505 * safezoneW + safezoneX;
            y = 0.409441 * safezoneH + safezoneY;
            w = 0.035892 * safezoneW;
            h = 0.067412 * safezoneH;
        };
        class Button_dance: Life_RscButtonInvisible  //Completed
        {
            idc = 1110;
            text = "";
			onButtonClick = "createDialog ""Life_Xer_Animation"";";
            x = 0.682227 * safezoneW + safezoneX;
            y = 0.477343 * safezoneH + safezoneY;
            w = 0.035892 * safezoneW;
            h = 0.067412 * safezoneH;
        };
        class Button_market: Life_RscButtonInvisible  //Testing...
        {
            idc = 1111;
			text = "";
			onButtonClick = "createDialog ""life_dynmarket_prices"";"; 
            x = 0.721116 * safezoneW + safezoneX;
            y = 0.478577 * safezoneH + safezoneY;
            w = 0.035892 * safezoneW;
            h = 0.067412 * safezoneH;
            ColorBackground[] = {0,0,0,0.627450};
            ColorText[] = {1,1,1,1};
            font = TahomaB;
            colorFocused[] = {0,0,0,1};
            colorDisabled[] = {0,0,0,1};
        };
        class Button_wanted: Life_RscButtonInvisible //Status? In bearbeitung...
        {
            idc = 2012;
            text = "";
            onButtonClick = "[] call life_fnc_wantedMenu";
            x = 0.681532 * safezoneW + safezoneX;
            y = 0.609441 * safezoneH + safezoneY;
            w = 0.035892 * safezoneW;
            h = 0.067412 * safezoneH;
        };
        class Button_admin: Life_RscButtonInvisible //Status?
        {
			idc = 2021;
            text = "";
            onButtonClick = "createDialog ""life_admin_menu"";";
            x = 0.682227 * safezoneW + safezoneX;
            y = 0.678577 * safezoneH + safezoneY;
            w = 0.035892 * safezoneW;
            h = 0.067412 * safezoneH;
        };
    };
};
