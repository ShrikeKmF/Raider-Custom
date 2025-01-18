class SMG_03C_black;
class SMG_03C_camo;
class SMG_03C_hex;
class SMG_03C_khaki;
class SMG_03C_TR_black;
class SMG_03C_TR_camo;
class SMG_03C_TR_hex;
class SMG_03C_TR_khaki;
class rtg_SMG_03C_black : SMG_03C_black {
    RTG_WEAPON_BASE
    baseWeapon = "rtg_SMG_03C_black";
    magazines[] = {"rtg_p90"};
    mode[] = {"Single", "FullAuto"};
    recoil = "rtg_9mm_primary";
    class Single : Single
    {
        sounds[] = {"StandardSound", "SilencedSound"};
        class BaseSoundModeType
        {
            weaponSoundEffect = "DefaultRifle";

            closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            soundClosure[] = {closure1, 0.5, closure2, 0.5};
        };
        class StandardSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
        };
        class SilencedSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
        };
    };
    class FullAuto : FullAuto
    {
        sounds[] = {"StandardSound", "SilencedSound"};
        class BaseSoundModeType
        {
            weaponSoundEffect = "DefaultRifle";

            closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            soundClosure[] = {closure1, 0.5, closure2, 0.5};
        };
        class StandardSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
        };
        class SilencedSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
        };
    };
    class XtdGearInfo
    {
        model = "rtg_ace_expanded_p90";
        style = "optic";
        camo = "black";
    };
};
class rtg_SMG_03C_camo : SMG_03C_camo {
    RTG_WEAPON_BASE
    baseWeapon = "rtg_SMG_03C_camo";
    magazines[] = {"rtg_p90"};
    mode[] = {"Single", "FullAuto"};
    recoil = "rtg_9mm_primary";
    class Single : Single
    {
        sounds[] = {"StandardSound", "SilencedSound"};
        class BaseSoundModeType
        {
            weaponSoundEffect = "DefaultRifle";

            closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            soundClosure[] = {closure1, 0.5, closure2, 0.5};
        };
        class StandardSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
        };
        class SilencedSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
        };
    };
    class FullAuto : FullAuto
    {
        sounds[] = {"StandardSound", "SilencedSound"};
        class BaseSoundModeType
        {
            weaponSoundEffect = "DefaultRifle";

            closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            soundClosure[] = {closure1, 0.5, closure2, 0.5};
        };
        class StandardSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
        };
        class SilencedSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
        };
    };
    class XtdGearInfo
    {
        model = "rtg_ace_expanded_p90";
        style = "optic";
        camo = "camo";
    };
};
class rtg_SMG_03C_hex : SMG_03C_hex {
    RTG_WEAPON_BASE
    baseWeapon = "rtg_SMG_03C_hex";
    magazines[] = {"rtg_p90"};
    mode[] = {"Single", "FullAuto"};
    recoil = "rtg_9mm_primary";
    class Single : Single
    {
        sounds[] = {"StandardSound", "SilencedSound"};
        class BaseSoundModeType
        {
            weaponSoundEffect = "DefaultRifle";

            closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            soundClosure[] = {closure1, 0.5, closure2, 0.5};
        };
        class StandardSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
        };
        class SilencedSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
        };
    };
    class FullAuto : FullAuto
    {
        sounds[] = {"StandardSound", "SilencedSound"};
        class BaseSoundModeType
        {
            weaponSoundEffect = "DefaultRifle";

            closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            soundClosure[] = {closure1, 0.5, closure2, 0.5};
        };
        class StandardSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
        };
        class SilencedSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
        };
    };
    class XtdGearInfo
    {
        model = "rtg_ace_expanded_p90";
        style = "optic";
        camo = "hex";
    };
};
class rtg_SMG_03C_khaki : SMG_03C_khaki {
    RTG_WEAPON_BASE
    baseWeapon = "rtg_SMG_03C_khaki";
    magazines[] = {"rtg_p90"};
    mode[] = {"Single", "FullAuto"};
    recoil = "rtg_9mm_primary";
    class Single : Single
    {
        sounds[] = {"StandardSound", "SilencedSound"};
        class BaseSoundModeType
        {
            weaponSoundEffect = "DefaultRifle";

            closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            soundClosure[] = {closure1, 0.5, closure2, 0.5};
        };
        class StandardSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
        };
        class SilencedSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
        };
    };
    class FullAuto : FullAuto
    {
        sounds[] = {"StandardSound", "SilencedSound"};
        class BaseSoundModeType
        {
            weaponSoundEffect = "DefaultRifle";

            closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            soundClosure[] = {closure1, 0.5, closure2, 0.5};
        };
        class StandardSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
        };
        class SilencedSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
        };
    };
    class XtdGearInfo
    {
        model = "rtg_ace_expanded_p90";
        style = "optic";
        camo = "khaki";
    };
};
class rtg_SMG_03C_TR_black : SMG_03C_TR_black {
    RTG_WEAPON_BASE
    baseWeapon = "rtg_SMG_03C_TR_black";
    magazines[] = {"rtg_p90"};
    mode[] = {"Single", "FullAuto"};
    recoil = "rtg_9mm_primary";
    class Single : Single
    {
        sounds[] = {"StandardSound", "SilencedSound"};
        class BaseSoundModeType
        {
            weaponSoundEffect = "DefaultRifle";

            closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            soundClosure[] = {closure1, 0.5, closure2, 0.5};
        };
        class StandardSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
        };
        class SilencedSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
        };
    };
    class FullAuto : FullAuto
    {
        sounds[] = {"StandardSound", "SilencedSound"};
        class BaseSoundModeType
        {
            weaponSoundEffect = "DefaultRifle";

            closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            soundClosure[] = {closure1, 0.5, closure2, 0.5};
        };
        class StandardSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
        };
        class SilencedSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
        };
    };
    class XtdGearInfo
    {
        model = "rtg_ace_expanded_p90";
        style = "tac";
        camo = "black";
    };
};
class rtg_SMG_03C_TR_camo : SMG_03C_TR_camo {
    RTG_WEAPON_BASE
    baseWeapon = "rtg_SMG_03C_TR_camo";
    magazines[] = {"rtg_p90"};
    mode[] = {"Single", "FullAuto"};
    recoil = "rtg_9mm_primary";
    class Single : Single
    {
        sounds[] = {"StandardSound", "SilencedSound"};
        class BaseSoundModeType
        {
            weaponSoundEffect = "DefaultRifle";

            closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            soundClosure[] = {closure1, 0.5, closure2, 0.5};
        };
        class StandardSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
        };
        class SilencedSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
        };
    };
    class FullAuto : FullAuto
    {
        sounds[] = {"StandardSound", "SilencedSound"};
        class BaseSoundModeType
        {
            weaponSoundEffect = "DefaultRifle";

            closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            soundClosure[] = {closure1, 0.5, closure2, 0.5};
        };
        class StandardSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
        };
        class SilencedSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
        };
    };
    class XtdGearInfo
    {
        model = "rtg_ace_expanded_p90";
        style = "tac";
        camo = "camo";
    };
};
class rtg_SMG_03C_TR_hex : SMG_03C_TR_hex {
    RTG_WEAPON_BASE
    baseWeapon = "rtg_SMG_03C_TR_hex";
    magazines[] = {"rtg_p90"};
    mode[] = {"Single", "FullAuto"};
    recoil = "rtg_9mm_primary";
    class Single : Single
    {
        sounds[] = {"StandardSound", "SilencedSound"};
        class BaseSoundModeType
        {
            weaponSoundEffect = "DefaultRifle";

            closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            soundClosure[] = {closure1, 0.5, closure2, 0.5};
        };
        class StandardSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
        };
        class SilencedSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
        };
    };
    class FullAuto : FullAuto
    {
        sounds[] = {"StandardSound", "SilencedSound"};
        class BaseSoundModeType
        {
            weaponSoundEffect = "DefaultRifle";

            closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            soundClosure[] = {closure1, 0.5, closure2, 0.5};
        };
        class StandardSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
        };
        class SilencedSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
        };
    };
    class XtdGearInfo
    {
        model = "rtg_ace_expanded_p90";
        style = "tac";
        camo = "hex";
    };
};
class rtg_SMG_03C_TR_khaki : SMG_03C_TR_khaki {
    RTG_WEAPON_BASE
    baseWeapon = "rtg_SMG_03C_TR_khaki";
    magazines[] = {"rtg_p90"};
    mode[] = {"Single", "FullAuto"};
    recoil = "rtg_9mm_primary";
    class Single : Single
    {
        sounds[] = {"StandardSound", "SilencedSound"};
        class BaseSoundModeType
        {
            weaponSoundEffect = "DefaultRifle";

            closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            soundClosure[] = {closure1, 0.5, closure2, 0.5};
        };
        class StandardSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
        };
        class SilencedSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
        };
    };
    class FullAuto : FullAuto
    {
        sounds[] = {"StandardSound", "SilencedSound"};
        class BaseSoundModeType
        {
            weaponSoundEffect = "DefaultRifle";

            closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            soundClosure[] = {closure1, 0.5, closure2, 0.5};
        };
        class StandardSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
        };
        class SilencedSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
        };
    };
    class XtdGearInfo
    {
        model = "rtg_ace_expanded_p90";
        style = "tac";
        camo = "khaki";
    };
};
// Long Barrel
class UK3CB_P90_black;
class UK3CB_P90_camo;
class UK3CB_P90_hex;
class UK3CB_P90_khaki;
class UK3CB_P90_TR_black;
class UK3CB_P90_TR_camo;
class UK3CB_P90_TR_hex;
class UK3CB_P90_TR_khaki;
class rtg_SMG_03_black : UK3CB_P90_black {
    RTG_WEAPON_BASE
    baseWeapon = "rtg_SMG_03_black";
    magazines[] = {"rtg_p90"};
    mode[] = {"Single", "FullAuto"};
    recoil = "rtg_9mm_primary";
    class Single : Single
    {
        sounds[] = {"StandardSound", "SilencedSound"};
        class BaseSoundModeType
        {
            weaponSoundEffect = "DefaultRifle";

            closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            soundClosure[] = {closure1, 0.5, closure2, 0.5};
        };
        class StandardSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
        };
        class SilencedSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
        };
    };
    class FullAuto : FullAuto
    {
        sounds[] = {"StandardSound", "SilencedSound"};
        class BaseSoundModeType
        {
            weaponSoundEffect = "DefaultRifle";

            closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            soundClosure[] = {closure1, 0.5, closure2, 0.5};
        };
        class StandardSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
        };
        class SilencedSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
        };
    };
    class XtdGearInfo
    {
        model = "rtg_ace_expanded_p90";
        style = "Loptic";
        camo = "black";
    };
};
class rtg_SMG_03_camo : UK3CB_P90_camo {
    RTG_WEAPON_BASE
    baseWeapon = "rtg_SMG_03_camo";
    magazines[] = {"rtg_p90"};
    mode[] = {"Single", "FullAuto"};
    recoil = "rtg_9mm_primary";
    class Single : Single
    {
        sounds[] = {"StandardSound", "SilencedSound"};
        class BaseSoundModeType
        {
            weaponSoundEffect = "DefaultRifle";

            closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            soundClosure[] = {closure1, 0.5, closure2, 0.5};
        };
        class StandardSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
        };
        class SilencedSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
        };
    };
    class FullAuto : FullAuto
    {
        sounds[] = {"StandardSound", "SilencedSound"};
        class BaseSoundModeType
        {
            weaponSoundEffect = "DefaultRifle";

            closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            soundClosure[] = {closure1, 0.5, closure2, 0.5};
        };
        class StandardSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
        };
        class SilencedSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
        };
    };
    class XtdGearInfo
    {
        model = "rtg_ace_expanded_p90";
        style = "Loptic";
        camo = "camo";
    };
};
class rtg_SMG_03_hex : UK3CB_P90_hex {
    RTG_WEAPON_BASE
    baseWeapon = "rtg_SMG_03_hex";
    magazines[] = {"rtg_p90"};
    mode[] = {"Single", "FullAuto"};
    recoil = "rtg_9mm_primary";
    class Single : Single
    {
        sounds[] = {"StandardSound", "SilencedSound"};
        class BaseSoundModeType
        {
            weaponSoundEffect = "DefaultRifle";

            closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            soundClosure[] = {closure1, 0.5, closure2, 0.5};
        };
        class StandardSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
        };
        class SilencedSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
        };
    };
    class FullAuto : FullAuto
    {
        sounds[] = {"StandardSound", "SilencedSound"};
        class BaseSoundModeType
        {
            weaponSoundEffect = "DefaultRifle";

            closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            soundClosure[] = {closure1, 0.5, closure2, 0.5};
        };
        class StandardSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
        };
        class SilencedSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
        };
    };
    class XtdGearInfo
    {
        model = "rtg_ace_expanded_p90";
        style = "Loptic";
        camo = "hex";
    };
};
class rtg_SMG_03_khaki : UK3CB_P90_khaki {
    RTG_WEAPON_BASE
    baseWeapon = "rtg_SMG_03_khaki";
    magazines[] = {"rtg_p90"};
    mode[] = {"Single", "FullAuto"};
    recoil = "rtg_9mm_primary";
    class Single : Single
    {
        sounds[] = {"StandardSound", "SilencedSound"};
        class BaseSoundModeType
        {
            weaponSoundEffect = "DefaultRifle";

            closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            soundClosure[] = {closure1, 0.5, closure2, 0.5};
        };
        class StandardSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
        };
        class SilencedSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
        };
    };
    class FullAuto : FullAuto
    {
        sounds[] = {"StandardSound", "SilencedSound"};
        class BaseSoundModeType
        {
            weaponSoundEffect = "DefaultRifle";

            closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            soundClosure[] = {closure1, 0.5, closure2, 0.5};
        };
        class StandardSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
        };
        class SilencedSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
        };
    };
    class XtdGearInfo
    {
        model = "rtg_ace_expanded_p90";
        style = "Loptic";
        camo = "khaki";
    };
};
class rtg_SMG_03_TR_black : UK3CB_P90_TR_black {
    RTG_WEAPON_BASE
    baseWeapon = "rtg_SMG_03_TR_black";
    magazines[] = {"rtg_p90"};
    mode[] = {"Single", "FullAuto"};
    recoil = "rtg_9mm_primary";
    class Single : Single
    {
        sounds[] = {"StandardSound", "SilencedSound"};
        class BaseSoundModeType
        {
            weaponSoundEffect = "DefaultRifle";

            closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            soundClosure[] = {closure1, 0.5, closure2, 0.5};
        };
        class StandardSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
        };
        class SilencedSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
        };
    };
    class FullAuto : FullAuto
    {
        sounds[] = {"StandardSound", "SilencedSound"};
        class BaseSoundModeType
        {
            weaponSoundEffect = "DefaultRifle";

            closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            soundClosure[] = {closure1, 0.5, closure2, 0.5};
        };
        class StandardSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
        };
        class SilencedSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
        };
    };
    class XtdGearInfo
    {
        model = "rtg_ace_expanded_p90";
        style = "Ltac";
        camo = "black";
    };
};
class rtg_SMG_03_TR_camo : UK3CB_P90_TR_camo {
    RTG_WEAPON_BASE
    baseWeapon = "rtg_SMG_03_TR_camo";
    magazines[] = {"rtg_p90"};
    mode[] = {"Single", "FullAuto"};
    recoil = "rtg_9mm_primary";
    class Single : Single
    {
        sounds[] = {"StandardSound", "SilencedSound"};
        class BaseSoundModeType
        {
            weaponSoundEffect = "DefaultRifle";

            closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            soundClosure[] = {closure1, 0.5, closure2, 0.5};
        };
        class StandardSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
        };
        class SilencedSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
        };
    };
    class FullAuto : FullAuto
    {
        sounds[] = {"StandardSound", "SilencedSound"};
        class BaseSoundModeType
        {
            weaponSoundEffect = "DefaultRifle";

            closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            soundClosure[] = {closure1, 0.5, closure2, 0.5};
        };
        class StandardSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
        };
        class SilencedSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
        };
    };
    class XtdGearInfo
    {
        model = "rtg_ace_expanded_p90";
        style = "Ltac";
        camo = "camo";
    };
};
class rtg_SMG_03_TR_hex : UK3CB_P90_TR_hex {
    RTG_WEAPON_BASE
    baseWeapon = "rtg_SMG_03_TR_hex";
    magazines[] = {"rtg_p90"};
    mode[] = {"Single", "FullAuto"};
    recoil = "rtg_9mm_primary";
    class Single : Single
    {
        sounds[] = {"StandardSound", "SilencedSound"};
        class BaseSoundModeType
        {
            weaponSoundEffect = "DefaultRifle";

            closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            soundClosure[] = {closure1, 0.5, closure2, 0.5};
        };
        class StandardSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
        };
        class SilencedSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
        };
    };
    class FullAuto : FullAuto
    {
        sounds[] = {"StandardSound", "SilencedSound"};
        class BaseSoundModeType
        {
            weaponSoundEffect = "DefaultRifle";

            closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            soundClosure[] = {closure1, 0.5, closure2, 0.5};
        };
        class StandardSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
        };
        class SilencedSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
        };
    };
    class XtdGearInfo
    {
        model = "rtg_ace_expanded_p90";
        style = "Ltac";
        camo = "hex";
    };
};
class rtg_SMG_03_TR_khaki : UK3CB_P90_TR_khaki {
    RTG_WEAPON_BASE
    baseWeapon = "rtg_SMG_03_TR_khaki";
    magazines[] = {"rtg_p90"};
    mode[] = {"Single", "FullAuto"};
    recoil = "rtg_9mm_primary";
    class Single : Single
    {
        sounds[] = {"StandardSound", "SilencedSound"};
        class BaseSoundModeType
        {
            weaponSoundEffect = "DefaultRifle";

            closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            soundClosure[] = {closure1, 0.5, closure2, 0.5};
        };
        class StandardSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
        };
        class SilencedSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
        };
    };
    class FullAuto : FullAuto
    {
        sounds[] = {"StandardSound", "SilencedSound"};
        class BaseSoundModeType
        {
            weaponSoundEffect = "DefaultRifle";

            closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
            soundClosure[] = {closure1, 0.5, closure2, 0.5};
        };
        class StandardSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
        };
        class SilencedSound : BaseSoundModeType
        {
            soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
        };
    };
    class XtdGearInfo
    {
        model = "rtg_ace_expanded_p90";
        style = "Ltac";
        camo = "khaki";
    };
};