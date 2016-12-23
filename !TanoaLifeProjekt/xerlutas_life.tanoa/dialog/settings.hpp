class SettingsMenu {
    idd = 2900;
    name = "SettingsMenu";
    movingEnable = 1;
    enableSimulation = 1;

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

        class SideChatHeader : PlayerTagsHeader {
            idc = -1;
            text = "$STR_SM_SC";
            x = 0.683367 * safezoneW + safezoneX;
            y = 0.724938 * safezoneH + safezoneY;
            w = 0.144444 * safezoneW;
            h = 0.031481 * safezoneH;
        };

        class RevealNearestHeader : PlayerTagsHeader {
            idc = -1;
            text = "$STR_SM_RNObj";
            x = 0.683367 * safezoneW + safezoneX;
            y = 0.763209 * safezoneH + safezoneY;
            w = 0.144444 * safezoneW;
            h = 0.031481 * safezoneH;
        };

        class BroacastHeader : PlayerTagsHeader {
            idc = -1;
            text = "$STR_SM_BCSW";
            x = 0.683367 * safezoneW + safezoneX;
            y = 0.800246 * safezoneH + safezoneY;
            w = 0.144444 * safezoneW;
            h = 0.031481 * safezoneH;
        };

        class Title: Life_RscTitle {
            idc = -1;
            colorBackground[] = {0,0,0,0};
            text = "$STR_SM_Title";
            x = 0.683367 * safezoneW + safezoneX;
            y = 0.395608 * safezoneH + safezoneY;
            w = 0.083333 * safezoneW;
            h = 0.031481 * safezoneH;
        };
    };

    class controls {
        class VDonFoot: Life_RscText {
            idc = -1;
            text = "$STR_SM_onFoot";
            x = 0.683367 * safezoneW + safezoneX;
            y = 0.429876 * safezoneH + safezoneY;
            w = 0.093333 * safezoneW;
            h = 0.031481 * safezoneH;
        };

        class VDinCar: Life_RscText {
            idc = -1;
            text = "$STR_SM_inCar";
            x = 0.683367 * safezoneW + safezoneX;
            y = 0.506419 * safezoneH + safezoneY;
            w = 0.093333 * safezoneW;
            h = 0.031481 * safezoneH;
        };

        class VDinAir: Life_RscText {
            idc = -1;
            text = "$STR_SM_inAir";
            x = 0.683367 * safezoneW + safezoneX;
            y = 0.579258 * safezoneH + safezoneY;
            w = 0.093333 * safezoneW;
            h = 0.031481 * safezoneH;
        };

        class VD_onfoot_slider: life_RscXSliderH {
            idc = 2901;
            text = "";
            onSliderPosChanged = "[0,_this select 1] call life_fnc_s_onSliderChange;";
            tooltip = "$STR_SM_ToolTip1";
            x = 0.683367 * safezoneW + safezoneX;
            y = 0.469003 * safezoneH + safezoneY;
            w = 0.093333 * safezoneW;
            h = 0.031481 * safezoneH;
        };

        class VD_onfoot_value: Life_RscEdit {
            idc = 2902;
            text = "";
            onChar = "[_this select 0, _this select 1,'ground',false] call life_fnc_s_onChar;";
            onKeyUp = "[_this select 0, _this select 1,'ground',true] call life_fnc_s_onChar;";
            x = 0.783715 * safezoneW + safezoneX;
            y = 0.469003 * safezoneH + safezoneY;
            w = 0.042361 * safezoneW;
            h = 0.031481 * safezoneH;
        };

        class VD_car_slider: life_RscXSliderH {
            idc = 2911;
            text = "";
            onSliderPosChanged = "[1,_this select 1] call life_fnc_s_onSliderChange;";
            tooltip = "$STR_SM_ToolTip2";
            x = 0.683367 * safezoneW + safezoneX;
            y = 0.543456 * safezoneH + safezoneY;
            w = 0.093333 * safezoneW;
            h = 0.031481 * safezoneH;
        };

        class VD_car_value: Life_RscEdit {
            idc = 2912;
            text = "";
            onChar = "[_this select 0, _this select 1,'vehicle',false] call life_fnc_s_onChar;";
            onKeyUp = "[_this select 0, _this select 1,'vehicle',true] call life_fnc_s_onChar;";
            x = 0.783715 * safezoneW + safezoneX;
            y = 0.543456 * safezoneH + safezoneY;
            w = 0.042361 * safezoneW;
            h = 0.031481 * safezoneH;
        };

        class VD_air_slider: life_RscXSliderH {
            idc = 2921;
            text = "";
            onSliderPosChanged = "[2,_this select 1] call life_fnc_s_onSliderChange;";
            tooltip = "$STR_SM_ToolTip3";
            x = 0.683367 * safezoneW + safezoneX;
            y = 0.617530 * safezoneH + safezoneY;
            w = 0.093333 * safezoneW;
            h = 0.031481 * safezoneH;
        };

        class VD_air_value: Life_RscEdit {
            idc = 2922;
            text = "";
            onChar = "[_this select 0, _this select 1,'air',false] call life_fnc_s_onChar;";
            onKeyUp = "[_this select 0, _this select 1,'air',true] call life_fnc_s_onChar;";
            x = 0.783715 * safezoneW + safezoneX;
            y = 0.61753 * safezoneH + safezoneY;
            w = 0.042361 * safezoneW;
            h = 0.031481 * safezoneH;
        };

        class SideChatONOFF: PlayerTagsONOFF {
            idc = 2971;
            tooltip = "$STR_GUI_SideSwitch";
            onCheckedChanged = "['sidechat',_this select 1] call life_fnc_s_onCheckedChange;";
            x = 0.809756 * safezoneW + safezoneX;
            y = 0.7263 * safezoneH + safezoneY;
            w = 0.104166 * safezoneW;
            h = 0.037037 * safezoneH;
        };

        class RevealONOFF : PlayerTagsONOFF {
            idc = 2972;
            tooltip = "$STR_GUI_PlayerReveal";
            onCheckedChanged = "['objects',_this select 1] call life_fnc_s_onCheckedChange;";
            x = 0.809756 * safezoneW + safezoneX;
            y = 0.76527 * safezoneH + safezoneY;
            w = 0.104166 * safezoneW;
            h = 0.037037 * safezoneH;
        };

        class BroadcastONOFF : PlayerTagsONOFF {
            idc = 2973;
            tooltip = "$STR_GUI_BroadcastSwitch";
            onCheckedChanged = "['broadcast',_this select 1] call life_fnc_s_onCheckedChange;";
            x = 0.809756 * safezoneW + safezoneX;
            y = 0.802407 * safezoneH + safezoneY;
            w = 0.104166 * safezoneW;
            h = 0.037037 * safezoneH;
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
    };
};
