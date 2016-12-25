class Life_key_management {
    idd = 2700;
    name= "life_key_chain";
    movingEnable = 0;
    enableSimulation = 1;
    onLoad = "[] spawn life_fnc_keyMenu;";

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
		
		class ListBoxHeader : Life_RscText {
            idc = -1;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
            x = 0.685069 * safezoneW + safezoneX;
            y = 0.428950 * safezoneH + safezoneY;
            w = 0.144444 * safezoneW;
            h = 0.262345 * safezoneH;
        };
		
		class Button1Header : Life_RscText {
            idc = -1;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
            x = 0.685069 * safezoneW + safezoneX;
            y = 0.698240 * safezoneH + safezoneY;
            w = 0.144444 * safezoneW;
            h = 0.062654 * safezoneH;
        };
		
		class Button2Header : Life_RscText {
            idc = -1;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
            x = 0.685069 * safezoneW + safezoneX;
            y = 0.767375 * safezoneH + safezoneY;
            w = 0.144444 * safezoneW;
            h = 0.062654 * safezoneH;
        };
		
		class Title: Life_RscTitle {
            idc = -1;
            text = "$STR_Keys_Title";
            x = 0.685069 * safezoneW + safezoneX;
            y = 0.395308 * safezoneH + safezoneY;
            w = 0.144444 * safezoneW;
            h = 0.031481 * safezoneH;
        };

        
    };

    class controls {

        class KeyChainList: Life_RscListBox {
            idc = 2701;
            text = "";
            sizeEx = 0.035;
            x = 0.689375 * safezoneW + safezoneX;
            y = 0.436049 * safezoneH + safezoneY;
            w = 0.134444 * safezoneW;
            h = 0.246604 * safezoneH;
        };

        class ButtonClose: Life_RscButtonInvisible
		{
			idc = -1;
			text = "";
			onButtonClick = "closeDialog 0;";
			x = 0.679335 * safezoneW + safezoneX;
            y = 0.840492 * safezoneH + safezoneY;
            w = 0.154175 * safezoneW;
            h = 0.053272 * safezoneH;
		};

        class NearPlayers: Life_RscCombo {
            idc = 2702;
            x = 0.689375 * safezoneW + safezoneX;
            y = 0.646851 * safezoneH + safezoneY;
            w = 0.134444 * safezoneW;
            h = 0.037037 * safezoneH;
        };

        class DropKey: Life_RscButtonMenu {
            idc = -1;
            text = "$STR_Keys_DropKey";
            onButtonClick = "[] call life_fnc_keyDrop";
            x = 0.690069 * safezoneW + safezoneX;
            y = 0.780184 * safezoneH + safezoneY;
            w = 0.134444 * safezoneW;
            h = 0.037037 * safezoneH;
        };

        class GiveKey: Life_RscButtonMenu {
            idc = 2703;
            text = "$STR_Keys_GiveKey";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            onButtonClick = "[] call life_fnc_keyGive";
            x = 0.690069 * safezoneW + safezoneX;
            y = 0.711049 * safezoneH + safezoneY;
            w = 0.134444 * safezoneW;
            h = 0.037037 * safezoneH;
        };
    };
};