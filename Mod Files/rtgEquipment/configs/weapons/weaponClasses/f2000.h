// FN F-2000
// 5.56
class arifle_Mk20_plain_F;
class arifle_Mk20_F;
class arifle_Mk20C_plain_F;
class arifle_Mk20C_F;
class rtg_f2000_tan : arifle_Mk20_plain_F
{
    RTG_WEAPON_BASE
    baseWeapon = "rtg_f2000_tan";
    
    displayName = "F2000 Tan";
    modes[] = {"Single","FullAuto"};
    recoil = "rtg_556_rifle";
    class Single: Single
    {
        sounds[] = {"StandardSound","SilencedSound"};
        class BaseSoundModeType
        {
            weaponSoundEffect = "DefaultRifle";
        };
        class StandardSound: BaseSoundModeType
        {
            soundSetShot[] = {"ACWP_416SBR_Shot_SoundSet","ACWP_416SBR_Tail_SoundSet"};
        };
        class SilencedSound: BaseSoundModeType
        {
            soundSetShot[] = {"ACWP_416SBR_silencerShot_SoundSet","ACWP_416SBR_silencerTail_SoundSet"};
        };
        weaponSoundEffect = "DefaultRifle";
        reloadTime = 0.06741;
        dispersion = 0.0019;
    };
    class FullAuto: FullAuto
    {
        sounds[] = {"StandardSound","SilencedSound"};
        class BaseSoundModeType
        {
            weaponSoundEffect = "DefaultRifle";
        };
        class StandardSound: BaseSoundModeType
        {
            soundSetShot[] = {"ACWP_416SBR_Shot_SoundSet","ACWP_416SBR_Tail_SoundSet"};
        };
        class SilencedSound: BaseSoundModeType
        {
            soundSetShot[] = {"ACWP_416SBR_silencerShot_SoundSet","ACWP_416SBR_silencerTail_SoundSet"};
        };
        weaponSoundEffect = "DefaultRifle";
        reloadTime = 0.06741;
        dispersion = 0.0019;
    };
    class XtdGearInfo
    {
        model = "rtg_ace_expanded_f2000";
        barrel = "long";
        camo = "tan";
    };
};
class rtg_f2000_camo : arifle_Mk20_F {
    RTG_WEAPON_BASE
    baseWeapon = "rtg_f2000_camo";
    
    displayName = "F2000 Camo";
    modes[] = {"Single","FullAuto"};
    recoil = "rtg_556_rifle";
    class Single: Single
    {
        sounds[] = {"StandardSound","SilencedSound"};
        class BaseSoundModeType
        {
            weaponSoundEffect = "DefaultRifle";
        };
        class StandardSound: BaseSoundModeType
        {
            soundSetShot[] = {"ACWP_416SBR_Shot_SoundSet","ACWP_416SBR_Tail_SoundSet"};
        };
        class SilencedSound: BaseSoundModeType
        {
            soundSetShot[] = {"ACWP_416SBR_silencerShot_SoundSet","ACWP_416SBR_silencerTail_SoundSet"};
        };
        weaponSoundEffect = "DefaultRifle";
        reloadTime = 0.06741;
        dispersion = 0.0019;
    };
    class FullAuto: FullAuto
    {
        sounds[] = {"StandardSound","SilencedSound"};
        class BaseSoundModeType
        {
            weaponSoundEffect = "DefaultRifle";
        };
        class StandardSound: BaseSoundModeType
        {
            soundSetShot[] = {"ACWP_416SBR_Shot_SoundSet","ACWP_416SBR_Tail_SoundSet"};
        };
        class SilencedSound: BaseSoundModeType
        {
            soundSetShot[] = {"ACWP_416SBR_silencerShot_SoundSet","ACWP_416SBR_silencerTail_SoundSet"};
        };
        weaponSoundEffect = "DefaultRifle";
        reloadTime = 0.06741;
        dispersion = 0.0019;
    };
    class XtdGearInfo
    {
        model = "rtg_ace_expanded_f2000";
        barrel = "long";
        camo = "green";
    };
};
class rtg_f2000C_tan : arifle_Mk20C_plain_F {
    RTG_WEAPON_BASE
    baseWeapon = "rtg_f2000C_tan";
    
    displayName = "F2000 Carbine Tan";
    modes[] = {"Single","FullAuto"};
    recoil = "rtg_556_carbine";
    class Single: Single
    {
        sounds[] = {"StandardSound","SilencedSound"};
        class BaseSoundModeType
        {
            weaponSoundEffect = "DefaultRifle";
        };
        class StandardSound: BaseSoundModeType
        {
            soundSetShot[] = {"ACWP_416SBR_Shot_SoundSet","ACWP_416SBR_Tail_SoundSet"};
        };
        class SilencedSound: BaseSoundModeType
        {
            soundSetShot[] = {"ACWP_416SBR_silencerShot_SoundSet","ACWP_416SBR_silencerTail_SoundSet"};
        };
        weaponSoundEffect = "DefaultRifle";
        reloadTime = 0.06741;
        dispersion = 0.0019;
    };
    class FullAuto: FullAuto
    {
        sounds[] = {"StandardSound","SilencedSound"};
        class BaseSoundModeType
        {
            weaponSoundEffect = "DefaultRifle";
        };
        class StandardSound: BaseSoundModeType
        {
            soundSetShot[] = {"ACWP_416SBR_Shot_SoundSet","ACWP_416SBR_Tail_SoundSet"};
        };
        class SilencedSound: BaseSoundModeType
        {
            soundSetShot[] = {"ACWP_416SBR_silencerShot_SoundSet","ACWP_416SBR_silencerTail_SoundSet"};
        };
        weaponSoundEffect = "DefaultRifle";
        reloadTime = 0.06741;
        dispersion = 0.0019;
    };
    class XtdGearInfo
    {
        model = "rtg_ace_expanded_f2000";
        barrel = "short";
        camo = "tan";
    };
};
class rtg_f2000C_camo : arifle_Mk20C_F {
    RTG_WEAPON_BASE
    baseWeapon = "rtg_f2000C_camo";
    
    displayName = "F2000 Carbine Camo";
    modes[] = {"Single","FullAuto"};
    recoil = "rtg_556_carbine";
    class Single: Single
    {
        sounds[] = {"StandardSound","SilencedSound"};
        class BaseSoundModeType
        {
            weaponSoundEffect = "DefaultRifle";
        };
        class StandardSound: BaseSoundModeType
        {
            soundSetShot[] = {"ACWP_416SBR_Shot_SoundSet","ACWP_416SBR_Tail_SoundSet"};
        };
        class SilencedSound: BaseSoundModeType
        {
            soundSetShot[] = {"ACWP_416SBR_silencerShot_SoundSet","ACWP_416SBR_silencerTail_SoundSet"};
        };
        weaponSoundEffect = "DefaultRifle";
        reloadTime = 0.06741;
        dispersion = 0.0019;
    };
    class FullAuto: FullAuto
    {
        sounds[] = {"StandardSound","SilencedSound"};
        class BaseSoundModeType
        {
            weaponSoundEffect = "DefaultRifle";
        };
        class StandardSound: BaseSoundModeType
        {
            soundSetShot[] = {"ACWP_416SBR_Shot_SoundSet","ACWP_416SBR_Tail_SoundSet"};
        };
        class SilencedSound: BaseSoundModeType
        {
            soundSetShot[] = {"ACWP_416SBR_silencerShot_SoundSet","ACWP_416SBR_silencerTail_SoundSet"};
        };
        weaponSoundEffect = "DefaultRifle";
        reloadTime = 0.06741;
        dispersion = 0.0019;
    };
    class XtdGearInfo
    {
        model = "rtg_ace_expanded_f2000";
        barrel = "short";
        camo = "green";
    };
};