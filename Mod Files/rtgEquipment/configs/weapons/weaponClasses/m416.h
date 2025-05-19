class arifle_SPAR_01_blk_F;
class arifle_SPAR_01_khk_F;
class arifle_SPAR_01_snd_F;
class arifle_SPAR_02_blk_F;
class arifle_SPAR_02_khk_F;
class arifle_SPAR_02_snd_F;
// M416
class rtg_m416_c_blk : arifle_SPAR_01_blk_F
{
	RTG_WEAPON_BASE
    displayName="M416 10.5";
    baseWeapon = "rtg_m416_c_blk";
    magazineWell[] = {"CBA_556x45_STANAG"};
    magazines[] = {"rtg_30rnd_556_45"};
    RTG_RECOIL(m416_c)
    RTG_WEAPON_HANDLING(1.79)
	class XtdGearInfo{model = "rtg_ace_expanded_m416_c";camo = "blk";};
}
class rtg_m416_c_khk : arifle_SPAR_01_khk_F
{
    RTG_WEAPON_BASE
    displayName="M416 10.5 (Khaki)";
    baseWeapon = "rtg_m416_c_khk";
    magazineWell[] = {"CBA_556x45_STANAG"};
    magazines[] = {"rtg_30rnd_556_45"};
    RTG_RECOIL(m416_c)
    RTG_WEAPON_HANDLING(1.79)
	class XtdGearInfo{model = "rtg_ace_expanded_m416_c";camo = "khk";};
};
class rtg_m416_c_snd : arifle_SPAR_01_snd_F
{
    RTG_WEAPON_BASE
    displayName="M416 10.5 (Sand)";
    baseWeapon = "rtg_m416_c_snd";
    magazineWell[] = {"CBA_556x45_STANAG"};
    magazines[] = {"rtg_30rnd_556_45"};
    RTG_RECOIL(m416_c)
    RTG_WEAPON_HANDLING(1.79)
	class XtdGearInfo{model = "rtg_ace_expanded_m416_c";camo = "snd";};
};
class rtg_m416_blk : arifle_SPAR_02_blk_F
{
	RTG_WEAPON_BASE
    displayName="M146 14.5";
    baseWeapon = "rtg_m416_blk";
    magazineWell[] = {"CBA_556x45_STANAG"};
    magazines[] = {"rtg_30rnd_556_45"};
    RTG_RECOIL(m416)
    RTG_WEAPON_HANDLING(1.92)
	class XtdGearInfo{model = "rtg_ace_expanded_m416";camo = "blk";};
}
class rtg_m416_khk : arifle_SPAR_02_khk_F
{
    RTG_WEAPON_BASE
    displayName="M416 14.5 (Khaki)";
    baseWeapon = "rtg_m416_khk";
    magazineWell[] = {"CBA_556x45_STANAG"};
    magazines[] = {"rtg_30rnd_556_45"};
    RTG_RECOIL(m416)
    RTG_WEAPON_HANDLING(1.92)
	class XtdGearInfo{model = "rtg_ace_expanded_m416";camo = "khk";};
};
class rtg_m416_snd : arifle_SPAR_02_snd_F
{
    RTG_WEAPON_BASE
    displayName="M416 14.5 (Sand)";
    baseWeapon = "rtg_m416_snd";
    magazineWell[] = {"CBA_556x45_STANAG"};
    magazines[] = {"rtg_30rnd_556_45"};
    RTG_RECOIL(m416)
    RTG_WEAPON_HANDLING(1.92)
	class XtdGearInfo{model = "rtg_ace_expanded_m416";camo = "snd";};
};

// M26 LSW
class rtg_m416_lsw_blk : arifle_SPAR_02_blk_F
{
	RTG_WEAPON_BASE
    displayName="M146 LSW";
    baseWeapon = "rtg_m416_lsw_blk";
    magazineWell[] = {"CBA_556x45_STANAG_HBAR"};
    magazines[] = {"rtg_50rnd_556"};
    RTG_RECOIL(m416_lsw)
    RTG_WEAPON_HANDLING(2.0)
	class XtdGearInfo{model = "rtg_ace_expanded_m416_lsw";camo = "blk";};
}
class rtg_m416_lsw_khk : arifle_SPAR_02_khk_F
{
    RTG_WEAPON_BASE
    displayName="M416 LSW (Khaki)";
    baseWeapon = "rtg_m416_lsw_khk";
    magazineWell[] = {"CBA_556x45_STANAG_HBAR"};
    magazines[] = {"rtg_50rnd_556"};
    RTG_RECOIL(m416_lsw)
    RTG_WEAPON_HANDLING(2.0)
	class XtdGearInfo{model = "rtg_ace_expanded_m416_lsw";camo = "khk";};
};
class rtg_m416_lsw_snd : arifle_SPAR_02_snd_F
{
    RTG_WEAPON_BASE
    displayName="M416 LSW (Sand)";
    baseWeapon = "rtg_m416_lsw_snd";
    magazineWell[] = {"CBA_556x45_STANAG_HBAR"};
    magazines[] = {"rtg_50rnd_556"};
    RTG_RECOIL(m416_lsw)
    RTG_WEAPON_HANDLING(2.0)
	class XtdGearInfo{model = "rtg_ace_expanded_m416_lsw";camo = "snd";};
};

// M416 12
class rtg_m416_12g : arifle_SPAR_02_blk_F
{

}


// M146 9