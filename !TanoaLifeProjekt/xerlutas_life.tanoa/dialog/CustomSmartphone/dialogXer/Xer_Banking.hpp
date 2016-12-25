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
		
		class Title: Life_RscTitle {
            idc = -1;
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
            text = "$STR_PM_MoneyStats";
            x = 0.683367 * safezoneW + safezoneX;
            y = 0.395308 * safezoneH + safezoneY;
            w = 0.144444 * safezoneW;
            h = 0.031481 * safezoneH;
        };
		
		class Frame_1116: Life_RscFrame
        {
            idc = 4116;
            x = 0.684678 * safezoneW + safezoneX;
            y = 0.626994 * safezoneH + safezoneY;
            w = 0.145573 * safezoneW;
            h = 0.197388 * safezoneH;
            ColorBackground[] = {0,0,0,0};
            ColorText[] = {1,1,1,1};
        };
		
		class IconBank: RscPicture
        {
            idc = -1;
            text = "";
			tooltip = "Bankkonto";
            x = 0.685069 * safezoneW + safezoneX;
            y = 0.451234 * safezoneH + safezoneY;
            w = 0.039930 * safezoneW;
            h = 0.064814 * safezoneH;
        };
		
		class IconCash: RscPicture
        {
            idc = -1;
            text = "";
			tooltip = "Bargeld";
            x = 0.685069 * safezoneW + safezoneX;
            y = 0.538279 * safezoneH + safezoneY;
            w = 0.03993 * safezoneW;
            h = 0.064814 * safezoneH;
        };
		
		class moneyCash : Life_RscStructuredText {
			idc = 2016;
			size = "0.022 * safeZoneH";
			text = "";
			tooltip = "Bargeld";
			x = 0.731597 * safezoneW + safezoneX;
            y = 0.551851 * safezoneH + safezoneY;
            w = 0.097569 * safezoneW;
            h = 0.031481 * safezoneH;
		};
		
		class moneyBank : Life_RscStructuredText {
			idc = 2017;
			size = "0.022 * safeZoneH";
			text = "";
			tooltip = "Bankkonto";
			x = 0.731597 * safezoneW + safezoneX;
            y = 0.469135 * safezoneH + safezoneY;
            w = 0.097569 * safezoneW;
            h = 0.031481 * safezoneH;
		};
	};
	
	class controls {
		class moneyEdit : Life_RscEdit {
			idc = 2018;
			
			text = "1";
			sizeEx = "0.022 * safeZoneH";
			x = 0.696353 * safezoneW + safezoneX;
            y = 0.660493 * safezoneH + safezoneY;
            w = 0.125 * safezoneW;
            h = 0.031481 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		
		class NearPlayers : Life_RscCombo {
			idc = 2022;
		
			x = 0.696353 * safezoneW + safezoneX;
            y = 0.711111 * safezoneH + safezoneY;
            w = 0.125 * safezoneW;
            h = 0.031481 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		
		class moneyDrop : Life_RscButtonMenu {
			idc = -1;
			text = "Geben";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
			onButtonClick = "[] call life_fnc_giveMoney";
			size = "0.022 * safeZoneH";
			x = 0.696353 * safezoneW + safezoneX;
            y = 0.758024 * safezoneH + safezoneY;
            w = 0.125 * safezoneW;
            h = 0.031481 * safezoneH;
			tooltip = "Geld übergeben";
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