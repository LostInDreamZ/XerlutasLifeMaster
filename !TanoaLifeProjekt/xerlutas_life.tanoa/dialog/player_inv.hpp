
class playerSettings {

	idd = 2001;
	movingEnable = 1;
	enableSimulation = 1;
	
	class controlsBackground {

	class TR8_PlayerInv: Life_RscPicture {
			idc = 1200;
            text = "dialog\CustomSmartphone\HandyWechselMenu.paa";
            x = 0.598954 * safezoneW + safezoneX;
            y = 0.289352 * safezoneH + safezoneY;
            w = 0.409382 * safezoneW;
            h = 0.712529 * safezoneH;
		};
	};

	class controls {
		
		class Inv_use: Life_RscButtonMenu
		{
			idc = -1;
			text = "Benutzen";
			onButtonClick = "[] call life_fnc_useItem;";
			size = "0.022 * safeZoneH";
			x = 0.684583 * safezoneW + safezoneX;
            y = 0.778641 * safezoneH + safezoneY;
            w = 0.071874 * safezoneW;
            h = 0.046296 * safezoneH;
		};
		class Inv_remove: Life_RscButtonMenu
		{
			idc = -1;
			text = "Wegwerfen";
			onButtonClick = "[] call life_fnc_removeItem;";
			size = "0.022 * safeZoneH";
			x = 0.759583 * safezoneW + safezoneX;
            y = 0.778641 * safezoneH + safezoneY;
            w = 0.071874 * safezoneW;
            h = 0.046296 * safezoneH;
		};
		class Inv_give: Life_RscButtonMenu
		{
			idc = -1;
			text = "Geben";
			onButtonClick = "[] call life_fnc_giveItem;";
			size = "0.022 * safeZoneH";
			x = 0.684409 * safezoneW + safezoneX;
            y = 0.725555 * safezoneH + safezoneY;
            w = 0.145833 * safezoneW;
            h = 0.046296 * safezoneH;
		};
		class ButtonClose: Life_RscButtonInvisible
		{
			idc = 1604;
			text = "";
			x = 0.679335 * safezoneW + safezoneX;
            y = 0.840492 * safezoneH + safezoneY;
            w = 0.154175 * safezoneW;
            h = 0.053272 * safezoneH;
			action = "closeDialog 0; createDialog 'playerSettings'";
		};
		class Inv_nearPlayers: Life_RscCombo
		{
			idc = 2022;
			x = 0.685104 * safezoneW + safezoneX;
            y = 0.618147 * safezoneH + safezoneY;
            w = 0.145833 * safezoneW;
            h = 0.046296 * safezoneH;
		};
		class Inv_items: Life_RscListbox
		{
			idc = 2005;
			sizeEx = "0.02 * safeZoneH";
			x = 0.684409 * safezoneW + safezoneX;
            y = 0.397160 * safezoneH + safezoneY;
            w = 0.145833 * safezoneW;
            h = 0.215740 * safezoneH;
		};
		class Inv_quantity: Life_RscEdit
		{
			idc = 2010;
			text = "1";
			sizeEx = "0.02 * safeZoneH";
			x = 0.685104 * safezoneW + safezoneX;
            y = 0.671234 * safezoneH + safezoneY;
            w = 0.145833 * safezoneW;
            h = 0.046296 * safezoneH;
		};
	};
};