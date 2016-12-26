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
		class Xer_Background: Life_RscPicture
        {
            idc = -1;
            text = "dialog\loadout\loadout.png";
            x = 0.270966 * safezoneW + safezoneX;
            y = 0.17906 * safezoneH + safezoneY;
            w = 0.480666 * safezoneW;
            h = 0.730604 * safezoneH;
        };
		class TitleHeaderCurrentGear: Life_RscText
		{
			idc = -1;
			text = "Momentane Ausrüstung";
			x = 0.301088 * safezoneW + safezoneX;
            y = 0.300336 * safezoneH + safezoneY;
            w = 0.1125 * safezoneW;
            h = 0.02 * safezoneH;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"}; 
		};
		class TitleHeaderSavedItems: Life_RscText
		{
			idc = -1;
			text = "Gespeicherte Ausrüstung";
			x = 0.603992 * safezoneW + safezoneX;
            y = 0.300336 * safezoneH + safezoneY;
            w = 0.1125 * safezoneW;
            h = 0.02 * safezoneH;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
		};
	};

	class controls
	{
		class ButtonClose: Life_RscButtonInvisible
		{
			idc = -1;
			onButtonClick = "closeDialog 0";
			x = 0.473505 * safezoneW + safezoneX;
            y = 0.707017 * safezoneH + safezoneY;
            w = 0.070575 * safezoneW;
            h = 0.057446 * safezoneH;
		};
		class ButtonWear: Life_RscButtonInvisible
		{
			idc = 75001;
			onButtonClick = "[] call life_fnc_loadoutChange; closeDialog 0;";
			x = 0.454494 * safezoneW + safezoneX;
            y = 0.314373 * safezoneH + safezoneY;
            w = 0.069792 * safezoneW;
            h = 0.055996 * safezoneH;
		};
		class ButtonSafe: Life_RscButtonInvisible
		{
			idc = 75002;
			onButtonClick = "[] spawn life_fnc_loadoutUpdate";
			x = 0.461005 * safezoneW + safezoneX;
            y = 0.440735 * safezoneH + safezoneY;
            w = 0.070313 * safezoneW;
            h = 0.056480 * safezoneH;
		};
		class ButtonLoadGear: Life_RscButtonInvisible
		{
			idc = 75003;
			onButtonClick = "[] call life_fnc_loadoutSave; closeDialog 0";
			 x = 0.491738 * safezoneW + safezoneX;
            y = 0.371502 * safezoneH + safezoneY;
            w = 0.070053 * safezoneW;
            h = 0.056964 * safezoneH;
		};
		class DropDownMenu: Life_RscCombo
		{
			idc = 75004;
			onLBSelChanged = "_this call life_fnc_loadoutList";
			x = 0.603992 * safezoneW + safezoneX;
            y = 0.647951 * safezoneH + safezoneY;
            w = 0.1125 * safezoneW;
            h = 0.02 * safezoneH;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
		};
		class ListBoxCurrentItems: Life_RscListbox
		{
			idc = 75005;
			x = 0.301088 * safezoneW + safezoneX;
            y = 0.319302 * safezoneH + safezoneY;
            w = 0.1125 * safezoneW;
            h = 0.32 * safezoneH;
		};
		class ListBoxSavedItems: Life_RscListbox
		{
			idc = 75006;
			x = 0.603992 * safezoneW + safezoneX;
            y = 0.319302 * safezoneH + safezoneY;
            w = 0.1125 * safezoneW;
            h = 0.32 * safezoneH;
		};
		class ButtonClearCurrent: Life_RscButtonInvisible
		{
			idc = 75008;
			onButtonClick = "closeDialog 0; [0] spawn life_fnc_loadoutDeleteGear";
			x = 0.496166 * safezoneW + safezoneX;
            y = 0.502224 * safezoneH + safezoneY;
            w = 0.070053 * safezoneW;
            h = 0.057446 * safezoneH;
		};
		class ButtonClearAll: Life_RscButtonInvisible
		{
			idc = 75007;
			onButtonClick = "closeDialog 0; [1] spawn life_fnc_loadoutDeleteGear";
			x = 0.462047 * safezoneW + safezoneX;
            y = 0.582592 * safezoneH + safezoneY;
            w = 0.071094 * safezoneW;
            h = 0.057446 * safezoneH;
		};
	};
};
