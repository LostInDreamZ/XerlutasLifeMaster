class Life_Xer_Licences {
    idd = 20058;
    name = "Life_Xer_Licences";
    movingEnable = 0;
	enableSimulation = 1;
	onLoad = "[] spawn life_fnc_openLicensesMenu;";

    class controlsBackground {
		class SmartphoneLicenses: Life_RscPicture
        {
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
            text = "Aktuelle Lizenzen";
            x = 0.685069 * safezoneW + safezoneX;
            y = 0.395308 * safezoneH + safezoneY;
            w = 0.144444 * safezoneW;
            h = 0.031481 * safezoneH;
        };
    };
    class controls {
		class LicenceList: Life_RscStructuredText
		{
			idc = 1500;
			background[] = {0,0,0,0};
			x = 0.699478 * safezoneW + safezoneX;
            y = 0.454876 * safezoneH + safezoneY;
            w = 0.119444 * safezoneW;
            h = 0.369135 * safezoneH;
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
////////////////////////////////////////////////////////////////////////////
