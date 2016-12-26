class loadoutGUI
{
    idd = 75000;
    movingEnable = 0;
    fadeIn = 0;
    duration = 10e10;
    fadeOut = 0;
    name = "loadoutGUI";
    onLoad = "uiNamespace setVariable ['loadoutGUI',_this select 0]";
    objects[] = {};

    class controlsBackground
    {
		class MainBackground: Life_RscText
		{
			idc = -1;
			x = 0.3 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.4 * safezoneW;
			h = 0.48 * safezoneH;
			colorBackground[] = {0,0,0,0.7};
		};
		class TitleHeader: Life_RscText
		{
			idc = -1;
			text = "Loadout Menü";
			x = 0.3 * safezoneW + safezoneX;
			y = 0.26 * safezoneH + safezoneY;
			w = 0.4 * safezoneW;
			h = 0.02 * safezoneH;
			colorBackground[] = {0.541,0.541,0.4,1};
		};
		class TitleHeaderCurrentGear: Life_RscText
		{
			idc = -1;
			text = "Current Items";
			x = 0.3125 * safezoneW + safezoneX;
			y = 0.34 * safezoneH + safezoneY;
			w = 0.1125 * safezoneW;
			h = 0.02 * safezoneH;
			colorBackground[] = {0.541,0.541,0.4,1}; 
		};
		class TitleHeaderSavedItems: Life_RscText
		{
			idc = -1;
			text = "Saved Items";
			x = 0.575 * safezoneW + safezoneX;
			y = 0.34 * safezoneH + safezoneY;
			w = 0.1125 * safezoneW;
			h = 0.02 * safezoneH;
			colorBackground[] = {0.541,0.541,0.4,1};
		};
	};

	class controls
	{
		class ButtonClose: Life_RscButtonMenu
		{
			idc = -1;
			text = "$STR_Global_Close";
			onButtonClick = "closeDialog 0";
			x = 0.45 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.02 * safezoneH;
			colorBackground[] = {0.541,0.541,0.4,1};
		};
		class ButtonWear: Life_RscButtonMenu
		{
			idc = 75001;
			text = "WEAR SAVED GEAR";
			onButtonClick = "[] call life_fnc_loadoutChange; closeDialog 0;";
			x = 0.4375 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.125 * safezoneW;
			h = 0.020006 * safezoneH;
			colorBackground[] = {0.541,0.541,0.4,1};
		};
		class ButtonSafe: Life_RscButtonMenu
		{
			idc = 75002;
			text = "";
			onButtonClick = "[] spawn life_fnc_loadoutUpdate";
			x = 0.4375 * safezoneW + safezoneX;
			y = 0.54 * safezoneH + safezoneY;
			w = 0.125 * safezoneW;
			h = 0.020006 * safezoneH;
			colorBackground[] = {0.541,0.541,0.4,1};
		};
		class ButtonLoadGear: Life_RscButtonMenu
		{
			idc = 75003;
			text = "SAVE CURRENT GEAR";
			onButtonClick = "[] call life_fnc_loadoutSave; closeDialog 0";
			x = 0.4375 * safezoneW + safezoneX;
			y = 0.46 * safezoneH + safezoneY;
			w = 0.125 * safezoneW;
			h = 0.020006 * safezoneH;
			colorBackground[] = {0.541,0.541,0.4,1};
		};
		class DropDownMenu: Life_RscCombo
		{
			idc = 75004;
			onLBSelChanged = "_this call life_fnc_loadoutList";
			x = 0.4 * safezoneW + safezoneX;
			y = 0.3 * safezoneH + safezoneY;
			w = 0.2 * safezoneW;
			h = 0.02 * safezoneH;
		};
		class ListBoxCurrentItems: Life_RscListbox
		{
			idc = 75005;
			x = 0.3125 * safezoneW + safezoneX;
			y = 0.36 * safezoneH + safezoneY;
			w = 0.1125 * safezoneW;
			h = 0.32 * safezoneH;
		};
		class ListBoxSavedItems: Life_RscListbox
		{
			idc = 75006;
			x = 0.575 * safezoneW + safezoneX;
			y = 0.36 * safezoneH + safezoneY;
			w = 0.1125 * safezoneW;
			h = 0.32 * safezoneH;
		};
		class ButtonClearCurrent: Life_RscButtonMenu
		{
			idc = 75008;
			text = "Clear Current Slot";
			onButtonClick = "closeDialog 0; [0] spawn life_fnc_loadoutDeleteGear";
			x = 0.4375 * safezoneW + safezoneX;
			y = 0.62 * safezoneH + safezoneY;
			w = 0.125 * safezoneW;
			h = 0.02 * safezoneH;
			colorBackground[] = {0.584,0.086,0.086,1};
		};
		class ButtonClearAll: Life_RscButtonMenu
		{
			idc = 75007;
			text = "Clear all Slots";
			onButtonClick = "closeDialog 0; [1] spawn life_fnc_loadoutDeleteGear";
			x = 0.4375 * safezoneW + safezoneX;
			y = 0.66 * safezoneH + safezoneY;
			w = 0.125 * safezoneW;
			h = 0.02 * safezoneH;
			colorBackground[] = {0.584,0.086,0.086,1};
		};
	};
};
