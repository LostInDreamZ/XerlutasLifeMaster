class Life_Xer_Banking {

	idd = 7124;
	name = "Life_Xer_Banking";
	movingEnable = true;
	enableSimulation = true;
	onLoad = "[] spawn life_fnc_SmartphoneBank;";
	
	class controlsBackground {
		class SmartphoneLicenses: Life_RscPicture
        {
            idc = -1;
            text = "dialog\CustomSmartphone\HandyWechselMenu.paa";
            x = 0.598954 * safezoneW + safezoneX;
            y = 0.289352 * safezoneH + safezoneY;
            w = 0.409382 * safezoneW;
            h = 0.712529 * safezoneH;
        };
		
		class moneyInfo : Life_RscStructuredText {
			idc = -1;
			size = "0.022 * safeZoneH";
			text = "$STR_PM_MoneyStats";
			x = 0.684375 * safezoneW + safezoneX;
            y = 0.396543 * safezoneH + safezoneY;
            w = 0.145833 * safezoneW;
            h = 0.046296 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		
		class moneyCash : Life_RscStructuredText {
			idc = 2016;
			size = "0.022 * safeZoneH";
			text = "";
			tooltip = "Bargeld";
			x = 0.684375 * safezoneW + safezoneX;
            y = 0.553333 * safezoneH + safezoneY;
            w = 0.145833 * safezoneW;
            h = 0.046296 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		
		class moneyBank : Life_RscStructuredText {
			idc = 2017;
			size = "0.022 * safeZoneH";
			text = "";
			tooltip = "Bankkonto";
			x = 0.684375 * safezoneW + safezoneX;               
            y = 0.496543 * safezoneH + safezoneY;
            w = 0.145833 * safezoneW;
            h = 0.046296 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
	};
	
	class controls {
		class moneyEdit : Life_RscEdit {
			idc = 2018;
			
			text = "1";
			sizeEx = "0.022 * safeZoneH";
			x = 0.684375 * safezoneW + safezoneX;
            y = 0.689135 * safezoneH + safezoneY;
            w = 0.145833 * safezoneW;
            h = 0.046296 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		
		class NearPlayers : Life_RscCombo {
			idc = 2022;
		
			x = 0.684375 * safezoneW + safezoneX;
            y = 0.638518 * safezoneH + safezoneY;
            w = 0.145833 * safezoneW;
            h = 0.046296 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		
		class moneyDrop : Life_RscButtonMenu {
			idc = -1;
			text = "Geben";
			onButtonClick = "[] call life_fnc_giveMoney";
			size = "0.022 * safeZoneH";
			x = 0.684375 * safezoneW + safezoneX;
            y = 0.786666 * safezoneH + safezoneY;
            w = 0.145833 * safezoneW;
            h = 0.046296 * safezoneH;
			tooltip = "Geld Übergeben";
		};
		
		class ButtonClose: Life_RscButtonInvisible
		{
			idc = 1600;
			text = "";
			onButtonClick = "closeDialog 0;";
			x = 0.679335 * safezoneW + safezoneX;
            y = 0.840492 * safezoneH + safezoneY;
            w = 0.154175 * safezoneW;
            h = 0.053272 * safezoneH;
		};
	};
};