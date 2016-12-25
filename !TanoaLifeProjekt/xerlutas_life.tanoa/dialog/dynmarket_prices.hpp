class life_dynmarket_prices {
	idd = 7100;
	name= "life_dynmarket_prices";
	movingEnable = false;
	enableSimulation = true;
	onLoad = "[] spawn {sleep 1;[] call life_fnc_LoadIntoListbox;};";
	
	class controlsBackground {
		class Xer_Background: Life_RscPicture
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
            text = "Börse";
            x = 0.683367 * safezoneW + safezoneX;
            y = 0.395308 * safezoneH + safezoneY;
            w = 0.144444 * safezoneW;
            h = 0.031481 * safezoneH;
        };
	};
	
	class controls {
class RscListbox_1500: Life_RscListBox
{
	idc = 7055;
	onLBSelChanged = "[] spawn {[] call life_fnc_DisplayPrices;};";

	x = 0.685312 * safezoneW + safezoneX;
	y = 0.626928 * safezoneH + safezoneY;
	w = 0.144305 * safezoneW;
	h = 0.207252 * safezoneH;
	sizeEx = 0.0260;
};
class RscText_1000: Life_RscText
{
	idc = -1;

	text = "Momentaner Verkaufspreis:"; //--- ToDo: Localize;
	x = 0.685069 * safezoneW + safezoneX;
	y = 0.428394 * safezoneH + safezoneY;
	w = 0.145312 * safezoneW;
	h = 0.031481 * safezoneH;
};
class RscText_1001: Life_RscText
{
	idc = 7056;

	text = "Bitte wähle ein Item aus!"; //--- ToDo: Localize;
	x = 0.685069 * safezoneW + safezoneX;
	y = 0.462962 * safezoneH + safezoneY;
	w = 0.145312* safezoneW;
	h = 0.031481 * safezoneH;
	sizeEx = 0.060;
};
class RscText_1002: Life_RscText
{
	idc = -1;

	text = "Von dir Verkaufte Items:"; //--- ToDo: Localize;
	x = 0.685069 * safezoneW + safezoneX;
	y = 0.544444 * safezoneH + safezoneY;
	w = 0.146527 * safezoneW;
	h = 0.031481 * safezoneH;
};
class RscText_1003: Life_RscText
{
	idc = 7057;

	text = ""; //--- ToDo: Localize;
	x = 0.685069 * safezoneW + safezoneX;
	y = 0.583950 * safezoneH + safezoneY;
	w = 0.146527 * safezoneW;
	h = 0.031481 * safezoneH;
	sizeEx = 0.060;
};
class RscButtonMenu_2400: Life_RscButtonInvisible
{
	onButtonClick = "closeDialog 0;";

	idc = 1006;
	text = ""; //--- ToDo: Localize;
	x = 0.679335 * safezoneW + safezoneX;
    y = 0.840492 * safezoneH + safezoneY;
    w = 0.154175 * safezoneW;
    h = 0.053272 * safezoneH;
};
class RscText_1007: Life_RscStructuredText
{
	idc = 7058;

	text = ""; //--- ToDo: Localize;
	x = 0.685069 * safezoneW + safezoneX;
	y = 0.498456 * safezoneH + safezoneY;
	w = 0.145833 * safezoneW;
	h = 0.031481 * safezoneH;
	colorText[] = {0.33,0.33,0.33,1};
};
};
};