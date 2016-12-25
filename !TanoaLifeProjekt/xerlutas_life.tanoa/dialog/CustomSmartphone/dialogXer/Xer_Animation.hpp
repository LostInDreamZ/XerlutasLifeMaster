class Life_Xer_Animation {
	idd = 2900;
	name= "Life_Xer_Animation";
	movingEnable = false;
	enableSimulation = true;
	onLoad = "[] spawn life_fnc_movesMenu;";
	
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
            h = 0.321605 * safezoneH;
        };
		
		 class ButtonHeader : Life_RscText {
            idc = -1;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
            x = 0.685069 * safezoneW + safezoneX;
            y = 0.767375 * safezoneH + safezoneY;
            w = 0.144444 * safezoneW;
            h = 0.062654 * safezoneH;
        };
	};
	
	class controls {

		
		class Title: Life_RscTitle {
            idc = -1;
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
            text = "Animationen";
            x = 0.685069 * safezoneW + safezoneX;
            y = 0.395308 * safezoneH + safezoneY;
            w = 0.144444 * safezoneW;
            h = 0.031481 * safezoneH;
        };
		
		class movesList : Life_RscListBox 
		{
			idc = 2902;
			text = "";
			sizeEx = 0.035;			
			x = 0.690069 * safezoneW + safezoneX;
			y = 0.437283 * safezoneH + safezoneY;
			w = 0.134444 * safezoneW;
			h = 0.305555 * safezoneH;
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
		
		class performMove : Life_RscButtonMenu {
			idc = -1;
			text = "Animation starten";
			tooltip = "Führt die ausgewählte Animation aus.";
			onButtonClick = "_move = lbData[2902,lbCurSel (2902)];_move = call compile format[""%1"", _move]; player playMove _move; closeDialog 0;closeDialog 0;";
			x = 0.690069 * safezoneW + safezoneX;
			y = 0.780184 * safezoneH + safezoneY;
			w = 0.134444 * safezoneW;
			h = 0.037037 * safezoneH;
		};
	};
};