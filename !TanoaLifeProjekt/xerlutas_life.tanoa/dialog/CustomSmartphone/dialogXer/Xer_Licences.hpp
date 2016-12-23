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
    };
    class controls {
		class Title : Life_RscTitle {
			colorBackground[] = {0, 0, 0, 0};
			idc = 3001;
			text = "";
			x = 0.1;
			y = 0.2;
			w = 0.6;
			h = (1 / 25);
		};
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
