class Life_atm_management {
    idd = 2700;
    name= "life_atm_menu";
    movingEnable = 0;
    enableSimulation = 1;

    class controlsBackground {
        class Xer_Background: Life_RscPicture
        {
            idc = 1100;
            text = "textures\dialog\bank.paa";
            x = 0.21125 * safezoneW + safezoneX;
            y = 0.093 * safezoneH + safezoneY;
            w = 0.519097 * safezoneW;
            h = 0.929012 * safezoneH;
            ColorBackground[] = {0.662745,0.270588,0.192156,1};
        };
    };

    class controls {
        class CashTitle: Life_RscStructuredText {
            idc = 2701;
            text = "";
            x = 0.414409 * safezoneW + safezoneX;
            y = 0.249487 * safezoneH + safezoneY;
            w = 0.125 * safezoneW;
            h = 0.033 * safezoneH;
        };

        /*class Title: Life_RscTitle {
            colorBackground[] = {0, 0, 0, 0};
            idc = -1;
            text = "$STR_ATM_Title";
            x = 0.35;
            y = 0.2;
            w = 0.6;
            h = (1 / 25);
        };
		*/

        class WithdrawButton: Life_RscButtonInvisible {
            idc = -1;
            onButtonClick = "[] call life_fnc_bankWithdraw";
            x = 0.358506 * safezoneW + safezoneX;
            y = 0.4142 * safezoneH + safezoneY;
            w = 0.088888 * safezoneW;
            h = 0.033 * safezoneH;
        };

        class DepositButton: Life_RscButtonInvisible {
            idc = -1;
            onButtonClick = "[] call life_fnc_bankDeposit";
            x = 0.358506 * safezoneW + safezoneX;
            y = 0.381 * safezoneH + safezoneY;
            w = 0.088888 * safezoneW;
            h = 0.033 * safezoneH;
        };

        class moneyEdit: Life_RscEdit {
            idc = 2702;
            text = "1";
            sizeEx = 0.030;
            x = 0.414409 * safezoneW + safezoneX;
            y = 0.331419 * safezoneH + safezoneY;
            w = 0.125 * safezoneW;
            h = 0.037037 * safezoneH;
        };

        class PlayerList: Life_RscCombo {
            idc = 2703;
            x = 0.414409 * safezoneW + safezoneX;
            y = 0.286975 * safezoneH + safezoneY;
            w = 0.125 * safezoneW;
            h = 0.037037 * safezoneH;
        };

        class TransferButton: Life_RscButtonInvisible {
            idc = -1;
            onButtonClick = "[] call life_fnc_bankTransfer";
            x = 0.358506 * safezoneW + safezoneX;
            y = 0.448 * safezoneH + safezoneY;
            w = 0.088888 * safezoneW;
            h = 0.033 * safezoneH;
        };

        class GangWithdraw : TransferButton {
            idc = 2705;
            onButtonClick = "[] call life_fnc_gangWithdraw";
            x = 0.461978 * safezoneW + safezoneX;
            y = 0.48 * safezoneH + safezoneY;
            w = 0.125 * safezoneW;
            h = 0.033 * safezoneH;
        };

        class GangDeposit : TransferButton {
            idc = 2706;
            onButtonClick = "[] call life_fnc_gangDeposit";
            x = 0.461978 * safezoneW + safezoneX;
            y = 0.4459 * safezoneH + safezoneY;
            w = 0.125 * safezoneW;
            h = 0.033 * safezoneH;
        };

        class CloseButtonKey: Life_RscButtonInvisible{
            idc = -1;
            onButtonClick = "closeDialog 0;";
            x = 0.406076 * safezoneW + safezoneX;
            y = 0.695616 * safezoneH + safezoneY;
            w = 0.133333 * safezoneW;
            h = 0.256790 * safezoneH;
        };
    };
};