
class CfgPatches {
    class rtgIntroUI {
        name = "rtgIntroUI";
        units[]={};
		weapons[]={};
		requiredVersion=0.1;
        requiredAddons[] = {
            "A3_Data_F",
            "A3_Functions_F",
            "A3_UiFonts_F",
            "A3_Data_F_Enoch_Loadorder",
            "A3_Ui_F",
            "a3_map_altis_scenes",
            "a3_map_vr_scenes",
            "a3_map_stratis_scenes"
        };
        author[]=
		{
			"Shrike"
		};
    };
};

class RscVideo;
class RscTitles {
    class SplashArma3 {
        class Picture: RscVideo {
            duration = 60;
            x = "safezoneX";
            y = "safezoneY";
            w = "safezoneW";
            h = "safezoneH"; 
            text = "\rtgIntroUI\Video\rtgIntro.ogv";
        };
    };
};
