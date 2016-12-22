class Life_Xer_Licences {
    idd = 20058;
    name = "Life_Xer_Licences";
    movingEnable = 0;
	enableSimulation = 1;

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
		
		class TR8_Licence_List: Life_RscStructuredText
		{
			idc = 1500;
			background[] = {0,0,0,0};
			x = 0.429615 * safezoneW + safezoneX;
			y = 0.387848 * safezoneH + safezoneY;
			w = 0.113859 * safezoneW;
			h = 0.153934 * safezoneH;
		};
		class TR8_Close: Life_RscButtonInvisible
		{
			idc = 1600;
			x = 0.475158 * safezoneW + safezoneX;
			y = 0.695716 * safezoneH + safezoneY;
			w = 0.025877 * safezoneW;
			h = 0.0329859 * safezoneH;
			action = "closeDialog 0; createDialog 'playerSettings'";
		};
	};
};
////////////////////////////////////////////////////////////////////////////
