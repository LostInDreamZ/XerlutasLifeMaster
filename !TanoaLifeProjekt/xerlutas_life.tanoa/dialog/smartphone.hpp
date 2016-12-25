class Life_my_smartphone {
 idd = 88888;
 name = "life_my_telephone_menu";
 movingEnable = false;
 enableSimulation = true;
 onLoad = "[] spawn life_fnc_smartphone;";
 
	class controlsBackground {
		class Xer_Background: Life_RscPicture
        {
            idc = -1;
            text = "dialog\CustomSmartphone\Handy1024quer.paa";
            x = 0.370658 * safezoneW + safezoneX;
            y = -0.03357 * safezoneH + safezoneY;
            w = 0.596355 * safezoneW;
            h = 1.039860 * safezoneH;
        };
	
	};
	
	class controls {
		class MessageTitle : Life_RscTitle { 
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
			idc = 88886;
			text = "";
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.9)";
			x = 0.568999 * safezoneW + safezoneX;
            y = 0.564289 * safezoneH + safezoneY;
            w = 0.265375 * safezoneW;
            h = 0.041666 * safezoneH;
		};
		
		class RandomTitle : Life_RscTitle {
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
			idc = 88890;
			text = "$STR_SMARTPHONE_RANDOMTITLE";
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.9)";
			x = 0.568999 * safezoneW + safezoneX;
            y = 0.740833 * safezoneH + safezoneY;
            w = 0.265375 * safezoneW;
            h = 0.041666 * safezoneH;
		};
		
		class PlayerList : Life_RscListBox {
			idc = 88881;
			onLBSelChanged = "[2] spawn life_fnc_smartphone;";
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			x = 0.451041 * safezoneW + safezoneX;
            y = 0.564289 * safezoneH + safezoneY;
            w = 0.113194 * safezoneW;
            h = 0.041666 * safezoneH;
		};
		
		class MessageList : Life_RscListNBox {
			idc = 88882;
			onLBSelChanged = "[(lbCurSel 88882)] call life_fnc_showMsg;";
			//sizeEx = 0.04;
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			colorBackground[] = {0, 0, 0, 0.0};
			columns[] = {0,0.3};
			x = 0.568999 * safezoneW + safezoneX;
            y = 0.564289 * safezoneH + safezoneY;
            w = 0.265375 * safezoneW;
            h = 0.041666 * safezoneH;
		};
		
		class TextShow : Life_RscControlsGroup {
			x = 0.569618 * safezoneW + safezoneX;
            y = 0.783579 * safezoneH + safezoneY;
            w = 0.266145 * safezoneW;
            h = 0.111728 * safezoneH;
				class HScrollbar : HScrollbar {
					height = 0;
				};
				class controls {
					class showText : Life_RscStructuredText {
						idc = 88887;
						text = "";
						colorBackground[] = {0.28,0.28,0.28,0.28};
						size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
						shadow = 0;
						x = 0;
						y = 0;
						w = 0.69;//w = 0.7;
						h = 1;//h = 2.15;
					};
				};
		};
		
		class Schreiben : Life_RscButtonMenu {
			idc = 887892;
			text = "$STR_SMARTPHONE_SCHREIBEN";
			onButtonClick = "[4] call life_fnc_smartphone;";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 1.0};
			x = 0.450347 * safezoneW + safezoneX;
            y = 0.902407 * safezoneH + safezoneY;
            w = 0.11875 * safezoneW;
            h = 0.037037 * safezoneH;
		};
 
		class Title : Life_RscTitle {
			colorBackground[] = {0, 0, 0, 0};
			idc = -1;
			text = "$STR_SMARTPHONE_TITLE";
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			x = 0.1;
			y = 0.2;
			w = 0.95;
			h = (1 / 25);
		};
		
		class PlayerListTitle : Life_RscTitle {
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
			idc = -1;
			text = "$STR_SMARTPHONE_PLAYERLISTTITLE";
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.9)";
			x = 0.451041 * safezoneW + safezoneX;
            y = 0.564289 * safezoneH + safezoneY;
            w = 0.113194 * safezoneW;
            h = 0.041666 * safezoneH;
		};
		
		class CloseLoadMenu : Life_RscButtonInvisible {
			idc = -1;
			text = "$STR_Global_Close";
			onButtonClick = "closeDialog 0;";
			x = 0.839236 * safezoneW + safezoneX;
            y = 0.556110 * safezoneH + safezoneY;
            w = 0.045833 * safezoneW;
            h = 0.385802 * safezoneH;
		};
		
		class Notruf : Life_RscButtonMenu {
			idc = -1;
			text = "$STR_SMARTPHONE_NOTRUF";
			onButtonClick = "createDialog ""Life_smartphone_notruf"";";
			colorBackground[] = {0.584, 0.086, 0.086,1.0};
			x = 0.716666 * safezoneW + safezoneX;
            y = 0.902407 * safezoneH + safezoneY;
            w = 0.11875 * safezoneW;
            h = 0.037037 * safezoneH;
		};
	};
};

class Life_smartphone_schreiben{
 idd = 88883;
 name = "life_my_smartphone_schreiben";
 movingEnable = false;
 enableSimulation = true;
 onLoad = "";
 class controlsBackground {
 class Life_RscTitleBackground:Life_RscText {
 colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
 idc = -1;
 x = 0.1;
 y = 0.2;
 w = 0.6;
 h = (1 / 25);
 };
 class MainBackground:Life_RscText {
 colorBackground[] = {0, 0, 0, 0.7};
 idc = -1;
 x = 0.1;
 y = 0.2 + (11 / 250);
 w = 0.6;
 h = 0.1;
 };
 };
 class controls {
 class Title : Life_RscTitle {
 colorBackground[] = {0, 0, 0, 0};
 idc = 88886;
 text = "$STR_SMARTPHONE_NACHRICHTTITLE";
 x = 0.1;
 y = 0.2;
 w = 0.95;
 h = (1 / 25);
 };
 class Absenden : Life_RscButtonMenu {
 idc = 88885;
 text = "$STR_SMARTPHONE_ABSENDEN";
 onButtonClick = "[1,-1,(ctrlText 88884)] call life_fnc_newMsg;";
 colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 1.0};
 x = 0.6 - (6.25 / 40) + 0.088;
 y = 0.3 + (1 / 25) - 0.048;
 w = (6.25 / 40);
 h = (1 / 25);
 };
 class AdminMsg : life_RscButtonMenu 
 {
 idc = 888897;
 text = "$STR_CELL_AdminMsg";
 colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 1.0};
 onButtonClick = "[5,-1,(ctrlText 88884)] call life_fnc_newMsg;";
 x = 0.6 - (6.25 / 40) - 0.121;
 y = 0.3 + (1 / 25) - 0.048;
 w = 0.2;
 h = (1 / 25);
 };
 class Close : Life_RscButtonMenu {
 idc = -1;
 text = "$STR_Global_Close";
 onButtonClick = "closeDialog 0;";
 colorBackground[] = {0.584, 0.086, 0.086,1.0};
 x = 0.11;
 y = 0.3 + (1 / 25) - 0.048;
 w = (6.25 / 40);
 h = (1 / 25);
 };
 class textEdit : Life_RscEdit {
 idc = 88884;
 text = "";
 sizeEx = 0.030;
 x = 0.11; y = 0.3 - 0.048;
 w = 0.58; h = 0.03;
 };
 };
};
class Life_smartphone_notruf {
 idd = 887890;
 name= "life_my_smartphone_notruf";
 movingEnable = false;
 enableSimulation = true;
 onLoad = "[6] spawn life_fnc_newMsg;";
 class controlsBackground {
 class Life_RscTitleBackground:Life_RscText {
 colorBackground[] = {0.584, 0.086, 0.086,1.0};
 idc = -1;
 x = 0.1;
 y = 0.2;
 w = 0.64;
 h = (1 / 25);
 };
 class MainBackground:Life_RscText {
 colorBackground[] = {0, 0, 0, 0.7};
 idc = -1;
 x = 0.1;
 y = 0.2 + (11 / 250);
 w = 0.64;
 h = 0.15 - (5 / 250);
 };
 };
 class controls {
 class Title : Life_RscTitle {
 colorBackground[] = {0, 0, 0, 0};
 idc = 888892;
 text = "$STR_SMARTPHONE_Notruftitle";
 x = 0.1;
 y = 0.2;
 w = 0.6;
 h = (1 / 25);
 };
 class textEdit : Life_RscEdit {
 idc = 888894;
 text = "";
 sizeEx = 0.030;
 x = 0.11; y = 0.25;
 w = 0.62; h = 0.03;
 };
 class TxtCopButton : life_RscButtonMenu 
 {
 idc = 888895;
 text = "$STR_CELL_TextPolice";
 colorBackground[] = {0.584, 0.086, 0.086,1.0};
 onButtonClick = "[2,-1,(ctrlText 888894)] call life_fnc_newMsg;";
 x = 0.32;
 y = 0.30;
 w = 0.2;
 h = (1 / 25);
 };
 class TxtAdminButton : life_RscButtonMenu 
 {
 idc = 888896;
 text = "$STR_CELL_TextAdmins";
 colorBackground[] = {0.584, 0.086, 0.086,1.0};
 onButtonClick = "[3,-1,(ctrlText 888894)] call life_fnc_newMsg;";
 x = 0.53;
 y = 0.30;
 w = 0.2;
 h = (1 / 25);
 };
 class AdminMsgAll : life_RscButtonMenu 
 {
 idc = 888898;
 text = "$STR_CELL_AdminMSGAll";
 colorBackground[] = {0.584, 0.086, 0.086,1.0};
 onButtonClick = "[7,-1,(ctrlText 888894)] call life_fnc_newMsg;";
 x = 0.53;
 y = 0.30;
 w = 0.2;
 h = (1 / 25);
 };
 class EMSReq : life_RscButtonMenu
 {
 idc = 888899;
 text = "$STR_CELL_EMSRequest";
 colorBackground[] = {0.584, 0.086, 0.086,1.0};
 onButtonClick = "[4,-1,(ctrlText 888894)] call life_fnc_newMsg;";
 x = 0.11;
 y = 0.30;
 w = 0.2;
 h = (1 / 25);
 };
 class CloseButton : Life_RscButtonMenu {
 idc = -1;
 text = "$STR_Global_Close";
 onButtonClick = "closeDialog 0;";
 x = -0.06 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
 y = 0.36 + (1 / 50);
 w = (6.25 / 40);
 h = (1 / 25);
 };
 };
};