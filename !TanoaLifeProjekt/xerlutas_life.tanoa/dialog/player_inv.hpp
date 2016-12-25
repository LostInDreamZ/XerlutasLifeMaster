
class playerSettings {

	idd = 2001;
	movingEnable = 1;
	enableSimulation = 1;
	
	class controlsBackground {

	class XerlutasSmartphone: Life_RscPicture {
			idc = 1200;
            text = "dialog\CustomSmartphone\HandyWechselMenu.paa";
            x = 0.598954 * safezoneW + safezoneX;
            y = 0.289352 * safezoneH + safezoneY;
            w = 0.409382 * safezoneW;
            h = 0.712529 * safezoneH;
		};
		
		class Title: Life_RscTitle {
            idc = -1;
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
            text = "Inventar";
            x = 0.683367 * safezoneW + safezoneX;
            y = 0.395308 * safezoneH + safezoneY;
            w = 0.144444 * safezoneW;
            h = 0.031481 * safezoneH;
        };
	};

	class controls {
		
		class Inv_use: Life_RscButtonMenu
		{
			idc = -1;
			text = "Benutzen";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
			onButtonClick = "[] call life_fnc_useItem;";
			size = "0.022 * safeZoneH";
			x = 0.694965 * safezoneW + safezoneX;
            y = 0.734567 * safezoneH + safezoneY;
            w = 0.125 * safezoneW;
            h = 0.031481 * safezoneH;
		};
		class Inv_remove: Life_RscButtonMenu
		{
			idc = -1;
			text = "Wegwerfen";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
			onButtonClick = "[] call life_fnc_removeItem;";
			size = "0.022 * safeZoneH";
			x = 0.694965 * safezoneW + safezoneX;
            y = 0.780246 * safezoneH + safezoneY;
            w = 0.125 * safezoneW;
            h = 0.031481 * safezoneH;
		};
		class Inv_give: Life_RscButtonMenu
		{
			idc = -1;
			text = "Geben";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
			onButtonClick = "[] call life_fnc_giveItem;";
			size = "0.022 * safeZoneH";
			x = 0.694965* safezoneW + safezoneX;
            y = 0.690123 * safezoneH + safezoneY;
            w = 0.125 * safezoneW;
            h = 0.031481 * safezoneH;
		};
		class ButtonClose: Life_RscButtonInvisible
		{
			idc = 1604;
			text = "";
			onButtonClick = "closeDialog 0;";
			x = 0.679335 * safezoneW + safezoneX;
            y = 0.840492 * safezoneH + safezoneY;
            w = 0.154175 * safezoneW;
            h = 0.053272 * safezoneH;
		};
		class Inv_nearPlayers: Life_RscCombo
		{
			idc = 2022;
			x = 0.756770 * safezoneW + safezoneX;
            y = 0.6429 * safezoneH + safezoneY;
            w = 0.072222 * safezoneW;
            h = 0.031481 * safezoneH;
		};
		class Inv_items: Life_RscListbox
		{
			idc = 2005;
			sizeEx = "0.02 * safeZoneH";
			x = 0.685069 * safezoneW + safezoneX;
            y = 0.430632 * safezoneH + safezoneY;
            w = 0.144444 * safezoneW;
            h = 0.207252 * safezoneH;
		};
		class Inv_quantity: Life_RscEdit
		{
			idc = 2010;
			text = "1";
			sizeEx = "0.02 * safeZoneH";
			x = 0.685069 * safezoneW + safezoneX;
            y = 0.642900 * safezoneH + safezoneY;
            w = 0.068402 * safezoneW;
            h = 0.031481 * safezoneH;
		};
	};
};