class playerSettings {
    idd = playersys_DIALOG;
    movingEnable = 1;
    enableSimulation = 1;

    class controlsBackground {
		class XerlutasSmartphone: RscPicture //OK
        {
            idc = 1100;
            text = "dialog\CustomSmartPhone\HandyHauptMenu.paa";
            x = 0.598954 * safezoneW + safezoneX;
            y = 0.289352 * safezoneH + safezoneY;
            w = 0.409382 * safezoneW;
            h = 0.712529 * safezoneH;
        };
    };
    class controls {
        class ButtonClose: Life_RscButtonInvisible  //OK
        {
            idc = -1;
            text = "Close";
			onButtonClick = "closeDialog 0;";
            x = 0.679335 * safezoneW + safezoneX;
            y = 0.840492 * safezoneH + safezoneY;
            w = 0.154175 * safezoneW;
            h = 0.053272 * safezoneH;
        };
        class ButtonSettings: Life_RscButtonInvisible  //OK
        {
            idc = -1;
            text = "$STR_Global_Settings";
            onButtonClick = "[] call life_fnc_settingsMenu;";
            x = 0.683616 * safezoneW + safezoneX;
            y = 0.763762 * safezoneH + safezoneY;
            w = 0.035892 * safezoneW;
            h = 0.067412 * safezoneH;
        };
        class Button_Sync: Life_RscButtonInvisible  //OK
        {
            idc = -1;
            //shortcuts[] = {0x00050000 + 2};
            text = "$STR_PM_SyncData";
            onButtonClick = "[] call SOCK_fnc_syncData;";
            x = 0.721116 * safezoneW + safezoneX;
            y = 0.763762 * safezoneH + safezoneY;
            w = 0.035892 * safezoneW;
            h = 0.067412 * safezoneH;
        };
        class Button_SMS: Life_RscButtonInvisible  //OK
        {
            idc = 2014;
            text = "$STR_PM_CellPhone";
            onButtonClick = "createDialog ""Life_cell_phone"";";
            x = 0.758616 * safezoneW + safezoneX;
            y = 0.764997 * safezoneH + safezoneY;
            w = 0.035892 * safezoneW;
            h = 0.067412 * safezoneH;
        };
        class Button_Cash: Life_RscButtonInvisible  //Implementierung folgt!
        {
            idc = 1103;
            text = "Button";
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
        class Button_Inv: Life_RscButtonInvisible  //Implementierung folgt!
        {
            idc = 1101;
            text = "Button";
            x = 0.681532 * safezoneW + safezoneX;
            y = 0.408207 * safezoneH + safezoneY;
            w = 0.035892 * safezoneW;
            h = 0.067412 * safezoneH;
            ColorBackground[] = {0,0,0,0.627450};
            ColorText[] = {1,1,1,1};
            font = TahomaB;
            colorFocused[] = {0,0,0,1};
            colorDisabled[] = {0,0,0,1};
        };
        class Button_keys: Life_RscButtonInvisible  //OK
        {
            idc = 2013;
            text = "$STR_PM_KeyChain";
            onButtonClick = "createDialog ""Life_key_management"";";
            x = 0.719727 * safezoneW + safezoneX;
            y = 0.408207 * safezoneH + safezoneY;
            w = 0.035892 * safezoneW;
            h = 0.067412 * safezoneH;
        };
        class Button_license: Life_RscButtonInvisible  //Implementierung folgt!
        {
            idc = 1108;
            text = "Button";
            x = 0.758616 * safezoneW + safezoneX;
            y = 0.409441 * safezoneH + safezoneY;
            w = 0.035892 * safezoneW;
            h = 0.067412 * safezoneH;
            ColorBackground[] = {0,0,0,0.627450};
            ColorText[] = {1,1,1,1};
            font = TahomaB;
            colorFocused[] = {0,0,0,1};
            colorDisabled[] = {0,0,0,1};
        };
        class Button_Gang: Life_RscButtonInvisible  //OK
        {
            idc = 2011;
            text = "$STR_PM_MyGang";
            onButtonClick = "if (isNil ""life_action_gangInUse"") then {if (isNil {(group player) getVariable ""gang_owner""}) then {createDialog ""Life_Create_Gang_Diag"";} else {[] spawn life_fnc_gangMenu;};};";
            x = 0.797505 * safezoneW + safezoneX;
            y = 0.409441 * safezoneH + safezoneY;
            w = 0.035892 * safezoneW;
            h = 0.067412 * safezoneH;
        };
        class Button_dance: Life_RscButtonInvisible  //Implementierung folgt!
        {
            idc = 1110;
            text = "Button";
            x = 0.682227 * safezoneW + safezoneX;
            y = 0.477343 * safezoneH + safezoneY;
            w = 0.035892 * safezoneW;
            h = 0.067412 * safezoneH;
            ColorBackground[] = {0,0,0,0.627450};
            ColorText[] = {1,1,1,1};
            font = TahomaB;
            colorFocused[] = {0,0,0,1};
            colorDisabled[] = {0,0,0,1};
        };
        class Button_market: Life_RscButtonInvisible  //Implementierung folgt!
        {
            idc = 1111;
            text = "Button";
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
        class Button_wanted: Life_RscButtonInvisible 
        {
            idc = 2012;
            text = "$STR_PM_WantedList";
            onButtonClick = "[] call life_fnc_wantedMenu";
            x = 0.681532 * safezoneW + safezoneX;
            y = 0.609441 * safezoneH + safezoneY;
            w = 0.035892 * safezoneW;
            h = 0.067412 * safezoneH;
        };
        class Button_admin: Life_RscButtonInvisible 
        {
			idc = 2021;
            text = "$STR_PM_AdminMenu";
            onButtonClick = "closeDialog 0; createDialog ""life_admin_menu"";";
            x = 0.682227 * safezoneW + safezoneX;
            y = 0.678577 * safezoneH + safezoneY;
            w = 0.035892 * safezoneW;
            h = 0.067412 * safezoneH;
        };
    };
};
////////////////////////////////////////////////////////////////////////////
