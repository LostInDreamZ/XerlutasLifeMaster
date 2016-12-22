#define ST_CENTER         0x02
/*
    Author: Daniel Stuart

    File: hud_stats.hpp
*/

class playerHUD {
    idd = -1;
    duration = 10e10;
    movingEnable = 0;
    fadein = 0;
    fadeout = 0;
    name = "playerHUD";
    onLoad = "uiNamespace setVariable ['playerHUD',_this select 0]";
    objects[] = {};
    controls[] = {
        Life_RscProgress_HUDFood,
        Life_RscProgress_HUDHealth,
        Life_RscProgress_HUDWater,
		Life_RscPicture_HUD
    };

    /* Progress Bars */
    class LIFE_RscProgress_HUDCommon: Life_RscProgress {
        colorFrame[] = {0, 0, 0, 0.8};
        x = 0.885999 * safezoneW + safezoneX;
        w = 0.079209 * safezoneW;
        h = 0.046222 * safezoneH;
    };

    class Life_RscProgress_HUDFood: LIFE_RscProgress_HUDCommon {
        idc = 2200;
        colorBar[] = {0,0.50,0,1};
        y = 0.8 * safezoneH + safezoneY;
    };

    class Life_RscProgress_HUDHealth: LIFE_RscProgress_HUDCommon {
        idc = 2201;
        colorBar[] = {0.85,0.05,0,1};
        y = 0.84645 * safezoneH + safezoneY;
    };

    class Life_RscProgress_HUDWater: LIFE_RscProgress_HUDCommon {
        idc = 2202;
        colorBar[] = {0,0.25,0.65,1};
        y = 0.893223 * safezoneH + safezoneY;
    };

    class Life_RscPicture_HUD: Life_RscPicture {
		idc = 2220;
        text = "dialog\CustomHUD\hud.paa";
        x = 0.863576 * safezoneW + safezoneX;
        y = 0.759814 * safezoneH + safezoneY;
        w = 0.125 * safezoneW;
        h = 0.222222 * safezoneH;
    };
};