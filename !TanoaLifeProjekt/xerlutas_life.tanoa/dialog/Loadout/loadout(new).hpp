class Life_loadout{
	idd = 9542;
	name= "Life_loadout";
	movingEnable = false;
	enableSimulation = true;
	onload = "[player] remoteExec ['UGC_fnc_loadoutGet',2];";

	class controlsBackground {
		class IGUIBack_2200: life_RscPicture
		{
			idc = -1;
			text = "dialog\Loadout\loadout.png";
			x = 0.309667 * safezoneW + safezoneX;
            y = 0.17906 * safezoneH + safezoneY;
            w = 0.380666 * safezoneW;
            h = 0.630604 * safezoneH;
		};
	};
	class controls{
		class RscButtonMenu_2400: Life_RscButtonInvisible
		{
			idc = 2000;
			onButtonClick = "[] spawn life_fnc_loadoutSave;";
			x = 0.546701 * safezoneW + safezoneX;
            y = 0.460184 * safezoneH + safezoneY;
            w = 0.063194 * safezoneW;
            h = 0.061728 * safezoneH;
		};
		class RscButtonMenu_2401: Life_RscButtonInvisible
		{
			idc = 2001;
			onButtonClick = "[] spawn life_fnc_loadoutDelete;";
			x = 0.527603 * safezoneW + safezoneX;
            y = 0.521913 * safezoneH + safezoneY;
            w = 0.066666 * safezoneW;
            h = 0.060493 * safezoneH;
		};
		class RscButtonMenu_2402: Life_RscButtonInvisible
		{
			idc = 2002;
			onButtonClick = "closeDialog 0;";
			x = 0.547048 * safezoneW + safezoneX;
            y = 0.587345 * safezoneH + safezoneY;
            w = 0.065972 * safezoneW;
            h = 0.060493 * safezoneH;
		};
		class RscButtonMenu_2403: Life_RscButtonInvisible
		{
			idc = 2003;
			onButtonClick = "[] spawn life_fnc_loadoutSelect;";
			x = 0.528298 * safezoneW + safezoneX;
            y = 0.404629 * safezoneH + safezoneY;
            w = 0.064583 * safezoneW;
            h = 0.055555 * safezoneH;
		};
		class RscEdit_1400: Life_RscEdit
		{
			idc = 4000;
			x = 0.353659 * safezoneW + safezoneX;
            y = 0.273876 * safezoneH + safezoneY;
            w = 0.134 * safezoneW;
            h = 0.022 * safezoneH;
			colorBackground[] = {-1,-1,-1,-1};
			colorBackgroundFocused[] = {1,1,1,0.12};
			colorBackground2[] = {0.75,0.75,0.75,0.2};
			color[] = {1,1,1,1};
			colorFocused[] = {0,0,0,1};
			color2[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			colorDisabled[] = {0,0,0,0.4};
		};
		class RscText_1000: Life_RscText
		{
			idc = 3000;
			text = "";
			x = 0.399851 * safezoneW + safezoneX;
            y = 0.680345 * safezoneH + safezoneY;
            w = 0.087450 * safezoneW;
            h = 0.014 * safezoneH;
			colorBackground[] = {-1,-1,-1,-1};
			colorBackgroundFocused[] = {1,1,1,0.12};
			colorBackground2[] = {0.75,0.75,0.75,0.2};
			color[] = {1,1,1,1};
			colorFocused[] = {0,0,0,1};
			color2[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			colorDisabled[] = {0,0,0,0.4};
			linespacing = 0;
		};
		class RscListbox_1500: Life_RscListbox
		{
			idc = 1000;
			onLBSelChanged = "call life_fnc_loadoutOnLbChanged;";
			sizeEx = 0.05;
			x = 0.350607 * safezoneW + safezoneX;
            y = 0.324382 * safezoneH + safezoneY;
            w = 0.133748 * safezoneW;
            h = 0.275 * safezoneH;
		};
	};
};
/* #Pymazy
$[
	1.063,
	["sss",[[0,0,1,1],0.025,0.04,"GUI_GRID"],0,0,0],
	[2200,"",[1,"",["0.340532 * safezoneW + safezoneX","0.28 * safezoneH + safezoneY","0.318937 * safezoneW","0.374 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[2400,"",[1,"",["0.345676 * safezoneW + safezoneX","0.588 * safezoneH + safezoneY","0.0411531 * safezoneW","0.055 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[2401,"",[1,"",["0.613171 * safezoneW + safezoneX","0.588 * safezoneH + safezoneY","0.0411531 * safezoneW","0.055 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1400,"",[1,"",["0.391973 * safezoneW + safezoneX","0.621 * safezoneH + safezoneY","0.216054 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1000,"",[1,"",["0.391973 * safezoneW + safezoneX","0.588 * safezoneH + safezoneY","0.216054 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1500,"",[1,"",["0.345676 * safezoneW + safezoneX","0.291 * safezoneH + safezoneY","0.308648 * safezoneW","0.286 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]]
]
*/