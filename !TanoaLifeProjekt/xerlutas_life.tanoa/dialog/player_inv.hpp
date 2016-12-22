class playerSettings {
    idd = playersys_DIALOG;
    movingEnable = 1;
    enableSimulation = 1;

    class controlsBackground {
		class Picturebox_1100: Life_RscPicture
        {
            idc = 1100;
            text = "dialog\CustomSmartPhone\HandyHauptMenu.paa";
            x = 0.686964 * safezoneW + safezoneX;
            y = 0.499064 * safezoneH + safezoneY;
            w = 0.319402 * safezoneW;
            h = 0.501603 * safezoneH;
        };
    };
    class controls {
        class ButtonClose: Life_RscButtonMenu //Ok
        {
            idc = -1;
            text = "Close";
			onButtonClick = "closeDialog 0;";
            x = 0.750831 * safezoneW + safezoneX;
            y = 0.888071 * safezoneH + safezoneY;
            w = 0.118130 * safezoneW;
            h = 0.038088 * safezoneH;
        };
        class ButtonSettings: Life_RscButtonMenu //Ok
        {
            idc = -1;
            text = "$STR_Global_Settings";
            onButtonClick = "[] call life_fnc_settingsMenu;";
            x = 0.752982 * safezoneW + safezoneX;
            y = 0.834112 * safezoneH + safezoneY;
            w = 0.024643 * safezoneW;
            h = 0.035081 * safezoneH;
        };
        class Button_Sync: Life_RscButtonMenu //OK
        {
            idc = -1;
            //shortcuts[] = {0x00050000 + 2};
            text = "$STR_PM_SyncData";
            onButtonClick = "[] call SOCK_fnc_syncData;";
            x = 0.783492 * safezoneW + safezoneX;
            y = 0.833444 * safezoneH + safezoneY;
            w = 0.024643 * safezoneW;
            h = 0.035081 * safezoneH;
        };
        class Button_SMS: Life_RscButtonMenu //OK
        {
            idc = 2014;
            text = "$STR_PM_CellPhone";
            onButtonClick = "createDialog ""Life_cell_phone"";";
            x = 0.814003 * safezoneW + safezoneX;
            y = 0.833444 * safezoneH + safezoneY;
            w = 0.024643 * safezoneW;
            h = 0.035081 * safezoneH;
        };
        class Button_Cash: Life_RscButtonMenu
        {
            idc = 1103;
            text = "Button";
            x = 0.843340 * safezoneW + safezoneX;
            y = 0.833444 * safezoneH + safezoneY;
            w = 0.024643 * safezoneW;
            h = 0.035081 * safezoneH;
            ColorBackground[] = {0,0,0,0.627450};
            ColorText[] = {1,1,1,1};
            font = TahomaB;
            colorFocused[] = {0,0,0,1};
            colorDisabled[] = {0,0,0,1};
        };
        class Button_Inv: Life_RscButtonMenu
        {
            idc = 1101;
            text = "Button";
            x = 0.753764 * safezoneW + safezoneX;
            y = 0.584196 * safezoneH + safezoneY;
            w = 0.024643 * safezoneW;
            h = 0.035081 * safezoneH;
            ColorBackground[] = {0,0,0,0.627450};
            ColorText[] = {1,1,1,1};
            font = TahomaB;
            colorFocused[] = {0,0,0,1};
            colorDisabled[] = {0,0,0,1};
        };
        class Button_keys: Life_RscButtonMenu
        {
            idc = 2013;
            text = "$STR_PM_KeyChain";
            onButtonClick = "createDialog ""Life_key_management"";";
            x = 0.783492 * safezoneW + safezoneX;
            y = 0.584196 * safezoneH + safezoneY;
            w = 0.024643 * safezoneW;
            h = 0.035081 * safezoneH;
        };
        class Button_license: Life_RscButtonMenu
        {
            idc = 1108;
            text = "Button";
            x = 0.814003 * safezoneW + safezoneX;
            y = 0.584196 * safezoneH + safezoneY;
            w = 0.024643 * safezoneW;
            h = 0.035081 * safezoneH;
            ColorBackground[] = {0,0,0,0.627450};
            ColorText[] = {1,1,1,1};
            font = TahomaB;
            colorFocused[] = {0,0,0,1};
            colorDisabled[] = {0,0,0,1};
        };
        class Button_Gang: Life_RscButtonMenu //Ok
        {
            idc = 2011;
            text = "$STR_PM_MyGang";
            onButtonClick = "if (isNil ""life_action_gangInUse"") then {if (isNil {(group player) getVariable ""gang_owner""}) then {createDialog ""Life_Create_Gang_Diag"";} else {[] spawn life_fnc_gangMenu;};};";
            x = 0.843340 * safezoneW + safezoneX;
            y = 0.584196 * safezoneH + safezoneY;
            w = 0.024643 * safezoneW;
            h = 0.035081 * safezoneH;
        };
        class Button_dance: Life_RscButtonMenu
        {
            idc = 1110;
            text = "Button";
            x = 0.753764 * safezoneW + safezoneX;
            y = 0.633645 * safezoneH + safezoneY;
            w = 0.024643 * safezoneW;
            h = 0.035081 * safezoneH;
            ColorBackground[] = {0,0,0,0.627450};
            ColorText[] = {1,1,1,1};
            font = TahomaB;
            colorFocused[] = {0,0,0,1};
            colorDisabled[] = {0,0,0,1};
        };
        class Button_market: Life_RscButtonMenu
        {
            idc = 1111;
            text = "Button";
            x = 0.783884 * safezoneW + safezoneX;
            y = 0.632977 * safezoneH + safezoneY;
            w = 0.024643 * safezoneW;
            h = 0.035081 * safezoneH;
            ColorBackground[] = {0,0,0,0.627450};
            ColorText[] = {1,1,1,1};
            font = TahomaB;
            colorFocused[] = {0,0,0,1};
            colorDisabled[] = {0,0,0,1};
        };
        class Button_wanted: Life_RscButtonMenu
        {
            idc = 2012;
            text = "$STR_PM_WantedList";
            onButtonClick = "[] call life_fnc_wantedMenu";
            x = 0.753373 * safezoneW + safezoneX;
            y = 0.727865 * safezoneH + safezoneY;
            w = 0.024643 * safezoneW;
            h = 0.035081 * safezoneH;
        };
        class Button_admin: Life_RscButtonMenu
        {
            idc = 2021;
            text = "$STR_PM_AdminMenu";
            onButtonClick = "closeDialog 0; createDialog ""life_admin_menu"";";
            x = 0.753373 * safezoneW + safezoneX;
            y = 0.775977 * safezoneH + safezoneY;
            w = 0.024643 * safezoneW;
            h = 0.035081 * safezoneH;
        };
    };
};
////////////////////////////////////////////////////////////////////////////
