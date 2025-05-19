// M4 Family
// Defines
	#define M4_Family_Base \
		RTG_STANDARD_ZOOM \
		RTG_ACEAX_EMPTY \
		magazineWell[] = {"CBA_556x45_STANAG"}; \
		magazines[] = {"rtg_30rnd_556_45"};
    
// JCA
	// M16A4
	// Base
	class JCA_arifle_M16A4_base_F: Rifle_Base_F
	{
		M4_Family_Base
		RTG_RECOIL(m16a4_556)
		RTG_WEAPON_HANDLING(2.3)
	};
	class JCA_arifle_M16A4_FG_base_F: JCA_arifle_M16A4_base_F{RTG_ACEAX_EMPTY};
	class JCA_arifle_M16A4_GL_base_F: JCA_arifle_M16A4_base_F{RTG_ACEAX_EMPTY};
	// Black
	class JCA_arifle_M16A4_black_F: JCA_arifle_M16A4_base_F
	{
		RTG_WEAPON_BASE
		class XtdGearInfo{model = "rtg_ace_expanded_m16a4";camo = "BLK";attachment="N";};
	};
	class JCA_arifle_M16A4_FG_black_F: JCA_arifle_M16A4_FG_base_F
	{
		RTG_WEAPON_BASE
		class XtdGearInfo{model = "rtg_ace_expanded_m16a4";camo = "BLK";attachment="FG";};
	};
	class JCA_arifle_M16A4_GL_black_F: JCA_arifle_M16A4_GL_base_F
	{
		RTG_WEAPON_BASE
		class XtdGearInfo{model = "rtg_ace_expanded_m16a4";camo = "BLK";attachment="GL";};
	};
	// Sand
	class JCA_arifle_M16A4_sand_F: JCA_arifle_M16A4_base_F
	{
		RTG_WEAPON_BASE
		class XtdGearInfo{model = "rtg_ace_expanded_m16a4";camo = "CYT";attachment="N";};
	};
	class JCA_arifle_M16A4_FG_sand_F: JCA_arifle_M16A4_FG_base_F
	{
		RTG_WEAPON_BASE
		class XtdGearInfo{model = "rtg_ace_expanded_m16a4";camo = "CYT";attachment="FG";};
	};
	class JCA_arifle_M16A4_GL_sand_F: JCA_arifle_M16A4_GL_base_F
	{
		RTG_WEAPON_BASE
		class XtdGearInfo{model = "rtg_ace_expanded_m16a4";camo = "CYT";attachment="GL";};
	};
	// Olive
	class JCA_arifle_M16A4_olive_F: JCA_arifle_M16A4_base_F
	{
		RTG_WEAPON_BASE
		class XtdGearInfo{model = "rtg_ace_expanded_m16a4";camo = "GRN";attachment="N";};
	};
	class JCA_arifle_M16A4_FG_olive_F: JCA_arifle_M16A4_FG_base_F
	{
		RTG_WEAPON_BASE
		class XtdGearInfo{model = "rtg_ace_expanded_m16a4";camo = "GRN";attachment="FG";};
	};
	class JCA_arifle_M16A4_GL_olive_F: JCA_arifle_M16A4_GL_base_F
	{
		RTG_WEAPON_BASE
		class XtdGearInfo{model = "rtg_ace_expanded_m16a4";camo = "GRN";attachment="GL";};
	};

	// M4A1
	// Base
	class JCA_arifle_M4A1_base_F: Rifle_Base_F
	{
		M4_Family_Base
		RTG_RECOIL(m4a1_556)
		RTG_WEAPON_HANDLING(2.0)
	};
	class JCA_arifle_M4A1_GL_base_F: JCA_arifle_M4A1_base_F{RTG_ACEAX_EMPTY};
	class JCA_arifle_M4A1_short_base_F: JCA_arifle_M4A1_base_F{RTG_ACEAX_EMPTY};
	// Black
	class JCA_arifle_M4A1_black_F: JCA_arifle_M4A1_base_F
	{
		RTG_WEAPON_BASE
		class XtdGearInfo{model = "rtg_ace_expanded_m4a1";camo = "BLK";attachment="N";barrel="L";};
	};
	class JCA_arifle_M4A1_GL_black_F: JCA_arifle_M4A1_GL_base_F
	{
		RTG_WEAPON_BASE
		class XtdGearInfo{model = "rtg_ace_expanded_m4a1";camo = "BLK";attachment="GL";barrel="L";};
	};
	class JCA_arifle_M4A1_short_black_F: JCA_arifle_M4A1_short_base_F
	{
		RTG_WEAPON_BASE
		class XtdGearInfo{model = "rtg_ace_expanded_m4a1";camo = "BLK";attachment="N";barrel="S";};
	};
	// Sand
	class JCA_arifle_M4A1_sand_F: JCA_arifle_M4A1_base_F
	{
		RTG_WEAPON_BASE
		class XtdGearInfo{model = "rtg_ace_expanded_m4a1";camo = "CYT";attachment="N";barrel="L";};
	};
	class JCA_arifle_M4A1_GL_sand_F: JCA_arifle_M4A1_GL_base_F
	{
		RTG_WEAPON_BASE
		class XtdGearInfo{model = "rtg_ace_expanded_m4a1";camo = "CYT";attachment="GL";barrel="L";};
	};
	class JCA_arifle_M4A1_short_sand_F: JCA_arifle_M4A1_short_base_F
	{
		RTG_WEAPON_BASE
		class XtdGearInfo{model = "rtg_ace_expanded_m4a1";camo = "CYT";attachment="N";barrel="S";};
	};
	// Olive
	class JCA_arifle_M4A1_olive_F: JCA_arifle_M4A1_base_F
	{
		RTG_WEAPON_BASE
		class XtdGearInfo{model = "rtg_ace_expanded_m4a1";camo = "GRN";attachment="N";barrel="L";};
	};
	class JCA_arifle_M4A1_GL_olive_F: JCA_arifle_M4A1_GL_base_F
	{
		RTG_WEAPON_BASE
		class XtdGearInfo{model = "rtg_ace_expanded_m4a1";camo = "GRN";attachment="GL";barrel="L";};
	};
	class JCA_arifle_M4A1_short_olive_F: JCA_arifle_M4A1_short_base_F
	{
		RTG_WEAPON_BASE
		class XtdGearInfo{model = "rtg_ace_expanded_m4a1";camo = "GRN";attachment="N";barrel="S";};
	};

	// M4A1 9mm
	#define  RTG_M4A1_9_Sounds \
	modes[] = {"Single","FullAuto"}; \
	drySound[] = {"sounds_f_JCA_IA\arsenal\weapons\SMGs\MP5\MP5_dry",0.17782794,1,10}; \
	reloadMagazineSound[] = {"\sounds_f_JCA_IA\arsenal\weapons\SMGs\MP5\MP5_reload","25",1,10}; \
	changeFiremodeSound[] = {"sounds_f_JCA_IA\arsenal\weapons\SMGs\MP5\MP5_firemode",0.17782794,1,5}; \
	class Single: Single \
	{ \
		class BaseSoundModeType; \
		class StandardSound: BaseSoundModeType \
		{ \
			soundSetShot[] = {"JCA_MP5_Shot_SoundSet","JCA_MP5_Tail_SoundSet","JCA_MP5_Tail_Interior_SoundSet"}; \
		}; \
		class SilencedSound: BaseSoundModeType \
		{ \
			soundSetShot[] = {"JCA_MP5_suppressed_Shot_SoundSet","JCA_MP5_suppressed_Tail_SoundSet","JCA_MP5_suppressed_Tail_Interior_SoundSet"}; \
		}; \
	}; \
	class FullAuto: FullAuto \
	{ \
		class BaseSoundModeType; \
		class StandardSound: BaseSoundModeType \
		{ \
			soundSetShot[] = {"JCA_MP5_Shot_SoundSet","JCA_MP5_Tail_SoundSet","JCA_MP5_Tail_Interior_SoundSet"}; \
		}; \
		class SilencedSound: BaseSoundModeType  \
		{ \
			soundSetShot[] = {"JCA_MP5_suppressed_Shot_SoundSet","JCA_MP5_suppressed_Tail_SoundSet","JCA_MP5_suppressed_Tail_Interior_SoundSet"}; \
		}; \
	}; \
	
	// Black
	class RTG_M4A1_9_Black_F: JCA_arifle_M4A1_black_F
	{
		RTG_WEAPON_BASE
		baseWeapon = "RTG_M4A1_9_Black_F";
		displayName = "M4A1 9mm (Black)";
		RTG_RECOIL(m4a1_9)
		RTG_WEAPON_HANDLING(1.8)
		magazineWell[] = {"RTG_9x19"};
		magazines[] = {"rtg_9mm_35Rnd_mag"};
		RTG_M4A1_9_Sounds
		class XtdGearInfo{model = "rtg_ace_expanded_m4a1_9";camo = "BLK";attachment="N";barrel="L";};
	};
	class RTG_M4A1_9_GL_Black_F: JCA_arifle_M4A1_GL_black_F
	{
		RTG_WEAPON_BASE
		baseWeapon = "RTG_M4A1_9_GL_Black_F";
		displayName = "M4A1 9mm GL (Black)";
		RTG_RECOIL(m4a1_9)
		RTG_WEAPON_HANDLING(1.8)
		magazineWell[] = {"RTG_9x19"};
		magazines[] = {"rtg_9mm_35Rnd_mag"};
		RTG_M4A1_9_Sounds
		class XtdGearInfo{model = "rtg_ace_expanded_m4a1_9";camo = "BLK";attachment="GL";barrel="L";};
	};
	class RTG_M4A1_9_Short_Black_F: JCA_arifle_M4A1_short_black_F
	{
		RTG_WEAPON_BASE
		baseWeapon = "RTG_M4A1_9_Short_Black_F";
		displayName = "M4A1 9mm CQB (Black)";
		RTG_RECOIL(m4a1_9)
		RTG_WEAPON_HANDLING(1.8)
		magazineWell[] = {"RTG_9x19"};
		magazines[] = {"rtg_9mm_35Rnd_mag"};
		RTG_M4A1_9_Sounds
		class XtdGearInfo{model = "rtg_ace_expanded_m4a1_9";camo = "BLK";attachment="N";barrel="S";};
	};
	// Sand
	class RTG_M4A1_9_Sand_F: JCA_arifle_M4A1_sand_F
	{
		RTG_WEAPON_BASE
		baseWeapon = "RTG_M4A1_9_Sand_F";
		displayName = "M4A1 9mm (Sand)";
		RTG_RECOIL(m4a1_9)
		RTG_WEAPON_HANDLING(1.8)
		magazineWell[] = {"RTG_9x19"};
		magazines[] = {"rtg_9mm_35Rnd_mag"};
		RTG_M4A1_9_Sounds
		class XtdGearInfo{model = "rtg_ace_expanded_m4a1_9";camo = "CYT";attachment="N";barrel="L";};
	};
	class RTG_M4A1_9_GL_Sand_F: JCA_arifle_M4A1_GL_sand_F
	{
		RTG_WEAPON_BASE
		baseWeapon = "RTG_M4A1_9_GL_Sand_F";
		displayName = "M4A1 9mm GL (Sand)";
		RTG_RECOIL(m4a1_9)
		RTG_WEAPON_HANDLING(1.8)
		magazineWell[] = {"RTG_9x19"};
		magazines[] = {"rtg_9mm_35Rnd_mag"};
		RTG_M4A1_9_Sounds
		class XtdGearInfo{model = "rtg_ace_expanded_m4a1_9";camo = "CYT";attachment="GL";barrel="L";};
	};
	class RTG_M4A1_9_Short_Sand_F: JCA_arifle_M4A1_short_sand_F
	{
		RTG_WEAPON_BASE
		baseWeapon = "RTG_M4A1_9_Short_Sand_F";
		displayName = "M4A1 9mm CQB (Sand)";
		RTG_RECOIL(m4a1_9)
		RTG_WEAPON_HANDLING(1.8)
		magazineWell[] = {"RTG_9x19"};
		magazines[] = {"rtg_9mm_35Rnd_mag"};
		RTG_M4A1_9_Sounds
		class XtdGearInfo{model = "rtg_ace_expanded_m4a1_9";camo = "CYT";attachment="N";barrel="S";};
	};
	// Olive
	class RTG_M4A1_9_Olive_F: JCA_arifle_M4A1_olive_F
	{
		RTG_WEAPON_BASE
		baseWeapon = "RTG_M4A1_9_Olive_F";
		displayName = "M4A1 9mm GL (Olive)";
		RTG_RECOIL(m4a1_9)
		RTG_WEAPON_HANDLING(1.8)
		magazineWell[] = {"RTG_9x19"};
		magazines[] = {"rtg_9mm_35Rnd_mag"};
		RTG_M4A1_9_Sounds
		class XtdGearInfo{model = "rtg_ace_expanded_m4a1_9";camo = "GRN";attachment="N";barrel="L";};
	};
	class RTG_M4A1_9_GL_Olive_F: JCA_arifle_M4A1_GL_olive_F
	{
		RTG_WEAPON_BASE
		baseWeapon = "RTG_M4A1_9_GL_Olive_F";
		displayName = "M4A1 9mm GL (Olive)";
		RTG_RECOIL(m4a1_9)
		RTG_WEAPON_HANDLING(1.8)
		magazineWell[] = {"RTG_9x19"};
		magazines[] = {"rtg_9mm_35Rnd_mag"};
		RTG_M4A1_9_Sounds
		class XtdGearInfo{model = "rtg_ace_expanded_m4a1_9";camo = "GRN";attachment="GL";barrel="L";};
	};
	class RTG_M4A1_9_Short_Olive_F: JCA_arifle_M4A1_short_olive_F
	{
		RTG_WEAPON_BASE
		baseWeapon = "RTG_M4A1_9_Short_Olive_F";
		displayName = "M4A1 9mm CQB (Olive)";
		RTG_RECOIL(m4a1_9)
		RTG_WEAPON_HANDLING(1.8)
		magazineWell[] = {"RTG_9x19"};
		magazines[] = {"rtg_9mm_35Rnd_mag"};
		RTG_M4A1_9_Sounds
		class XtdGearInfo{model = "rtg_ace_expanded_m4a1_9";camo = "GRN";attachment="N";barrel="S";};
	};

	// M4A4
	// Base
	class JCA_arifle_M4A4_base_F: Rifle_Base_F
	{
		M4_Family_Base
		RTG_RECOIL(m4a4_556)
		RTG_WEAPON_HANDLING(1.88)
	};
	class JCA_arifle_M4A4_AFG_base_F: JCA_arifle_M4A4_base_F{RTG_ACEAX_EMPTY};
	class JCA_arifle_M4A4_VFG_base_F: JCA_arifle_M4A4_base_F{RTG_ACEAX_EMPTY};
	class JCA_arifle_M4A4_GL_base_F: JCA_arifle_M4A4_base_F{RTG_ACEAX_EMPTY};
	class JCA_arifle_M4A4_AFG_black_F: JCA_arifle_M4A4_AFG_base_F
	{
		RTG_WEAPON_BASE
		class XtdGearInfo{model = "rtg_ace_expanded_m4a4";camo = "BLK";attachment="AFG";};
	};
	class JCA_arifle_M4A4_VFG_black_F: JCA_arifle_M4A4_VFG_base_F
	{
		RTG_WEAPON_BASE
		class XtdGearInfo{model = "rtg_ace_expanded_m4a4";camo = "BLK";attachment="VFG";};
	};
	class JCA_arifle_M4A4_GL_black_F: JCA_arifle_M4A4_GL_base_F
	{
		RTG_WEAPON_BASE
		class XtdGearInfo{model = "rtg_ace_expanded_m4a4";camo = "BLK";attachment="GL";};
	};
	class JCA_arifle_M4A4_AFG_sand_F: JCA_arifle_M4A4_AFG_base_F
	{
		RTG_WEAPON_BASE
		class XtdGearInfo{model = "rtg_ace_expanded_m4a4";camo = "CYT";attachment="AFG";};
	};
	class JCA_arifle_M4A4_VFG_sand_F: JCA_arifle_M4A4_VFG_base_F
	{
		RTG_WEAPON_BASE
		class XtdGearInfo{model = "rtg_ace_expanded_m4a4";camo = "CYT";attachment="VFG";};
	};
	class JCA_arifle_M4A4_GL_sand_F: JCA_arifle_M4A4_GL_base_F
	{
		RTG_WEAPON_BASE
		class XtdGearInfo{model = "rtg_ace_expanded_m4a4";camo = "CYT";attachment="GL";};
	};
	class JCA_arifle_M4A4_AFG_olive_F: JCA_arifle_M4A4_AFG_base_F
	{
		RTG_WEAPON_BASE
		class XtdGearInfo{model = "rtg_ace_expanded_m4a4";camo = "GRN";attachment="AFG";};
	};
	class JCA_arifle_M4A4_VFG_olive_F: JCA_arifle_M4A4_VFG_base_F
	{
		RTG_WEAPON_BASE
		class XtdGearInfo{model = "rtg_ace_expanded_m4a4";camo = "GRN";attachment="VFG";};
	};
	class JCA_arifle_M4A4_GL_olive_F: JCA_arifle_M4A4_GL_base_F
	{
		RTG_WEAPON_BASE
		class XtdGearInfo{model = "rtg_ace_expanded_m4a4";camo = "GRN";attachment="GL";};
	};

// ACWP
	// Base
	//class ACWP_rifle_base;
	// M4A5
	// Base
	class ACWP_M4A5_base: ACWP_rifle_base{M4_Family_Base};
	// 10.5
	class ACWP_M4A5_105_troy_base: ACWP_M4A5_base
	{
		class XtdGearInfo { model = "ACWP_M4A1_105"; camo = "black"; grip = "none"; };
		RTG_WEAPON_BASE
		RTG_RECOIL_SETUP(m4a5_105_556)
		RTG_WEAPON_HANDLING(1.8)
	};
	class ACWP_M4A5_105_troy_base_BLK: ACWP_M4A5_105_troy_base
	{
		class XtdGearInfo { model = "ACWP_M4A1_105"; camo = "blk"; grip = "none"; };
		RTG_WEAPON_BASE
	};
	class ACWP_M4A5_105_troy_base_BLK_DON: ACWP_M4A5_105_troy_base
	{
		class XtdGearInfo { model = "ACWP_M4A1_105"; camo = "blk_don"; grip = "none"; };
		RTG_WEAPON_BASE
	};
	class ACWP_M4A5_105_troy_base_BLK_NET: ACWP_M4A5_105_troy_base
	{
		class XtdGearInfo { model = "ACWP_M4A1_105"; camo = "blk_net"; grip = "none"; };
		RTG_WEAPON_BASE
	};
	class ACWP_M4A5_105_troy_base_BLK_TAN: ACWP_M4A5_105_troy_base
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_105"; camo = "blk_tan"; grip = "none"; };
	};
	class ACWP_M4A5_105_troy_base_DON: ACWP_M4A5_105_troy_base
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_105"; camo = "don"; grip = "none"; };
	};
	class ACWP_M4A5_105_troy_base_NET: ACWP_M4A5_105_troy_base
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_105"; camo = "net"; grip = "none"; };
	};
	class ACWP_M4A5_105_troy_base_TAN: ACWP_M4A5_105_troy_base
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_105"; camo = "tan"; grip = "none"; };
	};
	class ACWP_M4A5_105_troy_AFG: ACWP_M4A5_105_troy_base
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_105"; camo = "black"; grip = "afg"; };
	};
	class ACWP_M4A5_105_troy_AFG_BLK: ACWP_M4A5_105_troy_AFG
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_105"; camo = "blk"; grip = "afg"; };
	};
	class ACWP_M4A5_105_troy_AFG_BLK_DON: ACWP_M4A5_105_troy_AFG
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_105"; camo = "blk_don"; grip = "afg"; };
	};
	class ACWP_M4A5_105_troy_AFG_BLK_NET: ACWP_M4A5_105_troy_AFG
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_105"; camo = "blk_net"; grip = "afg"; };
	};
	class ACWP_M4A5_105_troy_AFG_BLK_TAN: ACWP_M4A5_105_troy_AFG
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_105"; camo = "blk_tan"; grip = "afg"; };
	};
	class ACWP_M4A5_105_troy_AFG_DON: ACWP_M4A5_105_troy_AFG
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_105"; camo = "don"; grip = "afg"; };
	};
	class ACWP_M4A5_105_troy_AFG_NET: ACWP_M4A5_105_troy_AFG
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_105"; camo = "net"; grip = "afg"; };
	};
	class ACWP_M4A5_105_troy_AFG_TAN: ACWP_M4A5_105_troy_AFG
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_105"; camo = "tan"; grip = "afg"; };
	};
	class ACWP_M4A5_105_troy_KAG: ACWP_M4A5_105_troy_base
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_105"; camo = "black"; grip = "kag"; };
	};
	class ACWP_M4A5_105_troy_KAG_BLK: ACWP_M4A5_105_troy_KAG
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_105"; camo = "blk"; grip = "kag"; };
	};
	class ACWP_M4A5_105_troy_KAG_BLK_DON: ACWP_M4A5_105_troy_KAG
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_105"; camo = "blk_don"; grip = "kag"; };
	};
	class ACWP_M4A5_105_troy_KAG_BLK_NET: ACWP_M4A5_105_troy_KAG
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_105"; camo = "blk_net"; grip = "kag"; };
	};
	class ACWP_M4A5_105_troy_KAG_BLK_TAN: ACWP_M4A5_105_troy_KAG
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_105"; camo = "blk_tan"; grip = "kag"; };
	};
	class ACWP_M4A5_105_troy_KAG_DON: ACWP_M4A5_105_troy_KAG
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_105"; camo = "don"; grip = "kag"; };
	};
	class ACWP_M4A5_105_troy_KAG_NET: ACWP_M4A5_105_troy_KAG
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_105"; camo = "net"; grip = "kag"; };
	};
	class ACWP_M4A5_105_troy_KAG_TAN: ACWP_M4A5_105_troy_KAG
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_105"; camo = "tan"; grip = "kag"; };
	};
	class ACWP_M4A5_105_troy_MOD3: ACWP_M4A5_105_troy_base
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_105"; camo = "black"; grip = "mod3"; };
	};
	class ACWP_M4A5_105_troy_MOD3_BLK: ACWP_M4A5_105_troy_MOD3
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_105"; camo = "blk"; grip = "mod3"; };
	};
	class ACWP_M4A5_105_troy_MOD3_BLK_DON: ACWP_M4A5_105_troy_MOD3
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_105"; camo = "blk_don"; grip = "mod3"; };
	};
	class ACWP_M4A5_105_troy_MOD3_BLK_NET: ACWP_M4A5_105_troy_MOD3
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_105"; camo = "blk_net"; grip = "mod3"; };
	};
	class ACWP_M4A5_105_troy_MOD3_BLK_TAN: ACWP_M4A5_105_troy_MOD3
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_105"; camo = "blk_tan"; grip = "mod3"; };
	};
	class ACWP_M4A5_105_troy_MOD3_DON: ACWP_M4A5_105_troy_MOD3
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_105"; camo = "don"; grip = "mod3"; };
	};
	class ACWP_M4A5_105_troy_MOD3_NET: ACWP_M4A5_105_troy_MOD3
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_105"; camo = "net"; grip = "mod3"; };
	};
	class ACWP_M4A5_105_troy_MOD3_TAN: ACWP_M4A5_105_troy_MOD3
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_105"; camo = "tan"; grip = "mod3"; };
	};
	class ACWP_M4A5_105_troy_ROE: ACWP_M4A5_105_troy_base
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_105"; camo = "black"; grip = "roe"; };
	};
	class ACWP_M4A5_105_troy_ROE_BLK: ACWP_M4A5_105_troy_ROE
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_105"; camo = "blk"; grip = "roe"; };
	};
	class ACWP_M4A5_105_troy_ROE_BLK_DON: ACWP_M4A5_105_troy_ROE
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_105"; camo = "blk_don"; grip = "roe"; };
	};
	class ACWP_M4A5_105_troy_ROE_BLK_NET: ACWP_M4A5_105_troy_ROE
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_105"; camo = "blk_net"; grip = "roe"; };
	};
	class ACWP_M4A5_105_troy_ROE_BLK_TAN: ACWP_M4A5_105_troy_ROE
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_105"; camo = "blk_tan"; grip = "roe"; };
	};
	class ACWP_M4A5_105_troy_ROE_DON: ACWP_M4A5_105_troy_ROE
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_105"; camo = "don"; grip = "roe"; };
	};
	class ACWP_M4A5_105_troy_ROE_NET: ACWP_M4A5_105_troy_ROE
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_105"; camo = "net"; grip = "roe"; };
	};
	class ACWP_M4A5_105_troy_ROE_TAN: ACWP_M4A5_105_troy_ROE
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_105"; camo = "tan"; grip = "roe"; };
	};

	// 14.5
	class ACWP_M4A5_145_ris_base: ACWP_M4A5_base
	{
		RTG_WEAPON_BASE
		RTG_RECOIL_SETUP(m4a5_145_556)
		RTG_WEAPON_HANDLING(1.9)
		class XtdGearInfo { model = "ACWP_M4A1_145"; camo = "black"; grip = "none"; rail = "ris"; };
	};
	class ACWP_M4A5_145_ris_base_don: ACWP_M4A5_145_ris_base
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_145"; camo = "don"; grip = "none"; rail = "ris"; };
	};
	class ACWP_M4A5_145_ris_base_net: ACWP_M4A5_145_ris_base
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_145"; camo = "net"; grip = "none"; rail = "ris"; };
	};
	class ACWP_M4A5_145_ris_base_tan: ACWP_M4A5_145_ris_base
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_145"; camo = "tan"; grip = "none"; rail = "ris"; };
	};
	class ACWP_M4A5_145_ris_KAG: ACWP_M4A5_145_ris_base
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_145"; camo = "black"; grip = "kag"; rail = "ris"; };
	};
	class ACWP_M4A5_145_ris_KAG_don: ACWP_M4A5_145_ris_KAG
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_145"; camo = "don"; grip = "kag"; rail = "ris"; };
	};
	class ACWP_M4A5_145_ris_KAG_net: ACWP_M4A5_145_ris_KAG
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_145"; camo = "net"; grip = "kag"; rail = "ris"; };
	};
	class ACWP_M4A5_145_ris_KAG_tan: ACWP_M4A5_145_ris_KAG
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_145"; camo = "tan"; grip = "kag"; rail = "ris"; };
	};
	class ACWP_M4A5_145_ris_MOD3: ACWP_M4A5_145_ris_base
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_145"; camo = "black"; grip = "mod3"; rail = "ris"; };
	};
	class ACWP_M4A5_145_ris_MOD3_don: ACWP_M4A5_145_ris_MOD3
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_145"; camo = "don"; grip = "mod3"; rail = "ris"; };
	};
	class ACWP_M4A5_145_ris_MOD3_net: ACWP_M4A5_145_ris_MOD3
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_145"; camo = "net"; grip = "mod3"; rail = "ris"; };
	};
	class ACWP_M4A5_145_ris_MOD3_tan: ACWP_M4A5_145_ris_MOD3
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_145"; camo = "tan"; grip = "mod3"; rail = "ris"; };
	};
	class ACWP_M4A5_145_ris_ROE: ACWP_M4A5_145_ris_base
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_145"; camo = "black"; grip = "roe"; rail = "ris"; };
	};
	class ACWP_M4A5_145_ris_ROE_don: ACWP_M4A5_145_ris_ROE
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_145"; camo = "don"; grip = "roe"; rail = "ris"; };
	};
	class ACWP_M4A5_145_ris_ROE_net: ACWP_M4A5_145_ris_ROE
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_145"; camo = "net"; grip = "roe"; rail = "ris"; };
	};
	class ACWP_M4A5_145_ris_ROE_tan: ACWP_M4A5_145_ris_ROE
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_145"; camo = "tan"; grip = "roe"; rail = "ris"; };
	};
	class ACWP_M4A5_145_ris_Tango: ACWP_M4A5_145_ris_base
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_145"; camo = "black"; grip = "tango"; rail = "ris"; };
	};
	class ACWP_M4A5_145_ris_Tango_don: ACWP_M4A5_145_ris_Tango
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_145"; camo = "don"; grip = "tango"; rail = "ris"; };
	};
	class ACWP_M4A5_145_ris_Tango_net: ACWP_M4A5_145_ris_Tango
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_145"; camo = "net"; grip = "tango"; rail = "ris"; };
	};
	class ACWP_M4A5_145_ris_Tango_tan: ACWP_M4A5_145_ris_Tango
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_145"; camo = "tan"; grip = "tango"; rail = "ris"; };
	};
	class ACWP_M4A5_145_ris_AFG: ACWP_M4A5_145_ris_base
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_145"; camo = "black"; grip = "afg"; rail = "ris"; };
	};
	class ACWP_M4A5_145_ris_AFG_don: ACWP_M4A5_145_ris_AFG
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_145"; camo = "don"; grip = "afg"; rail = "ris"; };
	};
	class ACWP_M4A5_145_ris_AFG_net: ACWP_M4A5_145_ris_AFG
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_145"; camo = "net"; grip = "afg"; rail = "ris"; };
	};
	class ACWP_M4A5_145_ris_AFG_tan: ACWP_M4A5_145_ris_AFG
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_145"; camo = "tan"; grip = "afg"; rail = "ris"; };
	};
	class ACWP_M4A5_145_troy_base: ACWP_M4A5_base
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_145"; camo = "black"; grip = "none"; rail = "troy"; };
	};
	class ACWP_M4A5_145_troy_base_BLK: ACWP_M4A5_145_troy_base
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_145"; camo = "blk"; grip = "none"; rail = "troy"; };
	};
	class ACWP_M4A5_145_troy_base_BLK_DON: ACWP_M4A5_145_troy_base
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_145"; camo = "blk_don"; grip = "none"; rail = "troy"; };
	};
	class ACWP_M4A5_145_troy_base_BLK_NET: ACWP_M4A5_145_troy_base
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_145"; camo = "blk_net"; grip = "none"; rail = "troy"; };
	};
	class ACWP_M4A5_145_troy_base_BLK_TAN: ACWP_M4A5_145_troy_base
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_145"; camo = "blk_tan"; grip = "none"; rail = "troy"; };
	};
	class ACWP_M4A5_145_troy_base_DON: ACWP_M4A5_145_troy_base
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_145"; camo = "don"; grip = "none"; rail = "troy"; };
	};
	class ACWP_M4A5_145_troy_base_NET: ACWP_M4A5_145_troy_base
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_145"; camo = "net"; grip = "none"; rail = "troy"; };
	};
	class ACWP_M4A5_145_troy_base_TAN: ACWP_M4A5_145_troy_base
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_145"; camo = "tan"; grip = "none"; rail = "troy"; };
	};
	class ACWP_M4A5_145_troy_MOD3: ACWP_M4A5_145_troy_base
	{
		RTG_WEAPON_BASE
		class XtdGearInfo { model = "ACWP_M4A1_145"; camo = "black"; grip = "mod3"; rail = "troy"; };
	};
	class ACWP_M4A5_145_troy_MOD3_BLK: ACWP_M4A5_145_troy_MOD3
	{
		RTG_WEAPON_BASE
			class XtdGearInfo { model = "ACWP_M4A1_145"; camo = "blk"; grip = "mod3"; rail = "troy"; };
	};
	class ACWP_M4A5_145_troy_MOD3_BLK_DON: ACWP_M4A5_145_troy_MOD3
	{
		RTG_WEAPON_BASE
			class XtdGearInfo { model = "ACWP_M4A1_145"; camo = "blk_don"; grip = "mod3"; rail = "troy"; };
	};
	class ACWP_M4A5_145_troy_MOD3_BLK_NET: ACWP_M4A5_145_troy_MOD3
	{
		RTG_WEAPON_BASE
			class XtdGearInfo { model = "ACWP_M4A1_145"; camo = "blk_net"; grip = "mod3"; rail = "troy"; };
	};
	class ACWP_M4A5_145_troy_MOD3_BLK_TAN: ACWP_M4A5_145_troy_MOD3
	{
		RTG_WEAPON_BASE
			class XtdGearInfo { model = "ACWP_M4A1_145"; camo = "blk_tan"; grip = "mod3"; rail = "troy"; };
	};
	class ACWP_M4A5_145_troy_MOD3_DON: ACWP_M4A5_145_troy_MOD3
	{
		RTG_WEAPON_BASE
			class XtdGearInfo { model = "ACWP_M4A1_145"; camo = "don"; grip = "mod3"; rail = "troy"; };
	};
	class ACWP_M4A5_145_troy_MOD3_NET: ACWP_M4A5_145_troy_MOD3
	{
		RTG_WEAPON_BASE
			class XtdGearInfo { model = "ACWP_M4A1_145"; camo = "net"; grip = "mod3"; rail = "troy"; };
	};
	class ACWP_M4A5_145_troy_MOD3_TAN: ACWP_M4A5_145_troy_MOD3
	{
		RTG_WEAPON_BASE
			class XtdGearInfo { model = "ACWP_M4A1_145"; camo = "tan"; grip = "mod3"; rail = "troy"; };
	};
	class ACWP_M4A5_145_troy_ROE: ACWP_M4A5_145_troy_base
	{
		RTG_WEAPON_BASE
			class XtdGearInfo { model = "ACWP_M4A1_145"; camo = "black"; grip = "roe"; rail = "troy"; };
	};
	class ACWP_M4A5_145_troy_ROE_BLK: ACWP_M4A5_145_troy_ROE
	{
		RTG_WEAPON_BASE
			class XtdGearInfo { model = "ACWP_M4A1_145"; camo = "blk"; grip = "roe"; rail = "troy"; };
	};
	class ACWP_M4A5_145_troy_ROE_BLK_DON: ACWP_M4A5_145_troy_ROE
	{
		RTG_WEAPON_BASE
			class XtdGearInfo { model = "ACWP_M4A1_145"; camo = "blk_don"; grip = "roe"; rail = "troy"; };
	};
	class ACWP_M4A5_145_troy_ROE_BLK_NET: ACWP_M4A5_145_troy_ROE
	{
		RTG_WEAPON_BASE
			class XtdGearInfo { model = "ACWP_M4A1_145"; camo = "blk_net"; grip = "roe"; rail = "troy"; };
	};
	class ACWP_M4A5_145_troy_ROE_BLK_TAN: ACWP_M4A5_145_troy_ROE
	{
		RTG_WEAPON_BASE
			class XtdGearInfo { model = "ACWP_M4A1_145"; camo = "blk_tan"; grip = "roe"; rail = "troy"; };
	};
	class ACWP_M4A5_145_troy_ROE_DON: ACWP_M4A5_145_troy_ROE
	{
		RTG_WEAPON_BASE
			class XtdGearInfo { model = "ACWP_M4A1_145"; camo = "don"; grip = "roe"; rail = "troy"; };
	};
	class ACWP_M4A5_145_troy_ROE_NET: ACWP_M4A5_145_troy_ROE
	{
		RTG_WEAPON_BASE
			class XtdGearInfo { model = "ACWP_M4A1_145"; camo = "net"; grip = "roe"; rail = "troy"; };
	};
	class ACWP_M4A5_145_troy_ROE_TAN: ACWP_M4A5_145_troy_ROE
	{
		RTG_WEAPON_BASE
			class XtdGearInfo { model = "ACWP_M4A1_145"; camo = "tan"; grip = "roe"; rail = "troy"; };
	};
	class ACWP_M4A5_145_troy_tango: ACWP_M4A5_145_troy_base
	{
		RTG_WEAPON_BASE
			class XtdGearInfo { model = "ACWP_M4A1_145"; camo = "black"; grip = "tango"; rail = "troy"; };
	};
	class ACWP_M4A5_145_troy_tango_BLK: ACWP_M4A5_145_troy_tango
	{
		RTG_WEAPON_BASE
			class XtdGearInfo { model = "ACWP_M4A1_145"; camo = "blk"; grip = "tango"; rail = "troy"; };
	};
	class ACWP_M4A5_145_troy_tango_BLK_DON: ACWP_M4A5_145_troy_tango
	{
		RTG_WEAPON_BASE
			class XtdGearInfo { model = "ACWP_M4A1_145"; camo = "blk_don"; grip = "tango"; rail = "troy"; };
	};
	class ACWP_M4A5_145_troy_tango_BLK_NET: ACWP_M4A5_145_troy_tango
	{
		RTG_WEAPON_BASE
			class XtdGearInfo { model = "ACWP_M4A1_145"; camo = "blk_net"; grip = "tango"; rail = "troy"; };
	};
	class ACWP_M4A5_145_troy_tango_BLK_TAN: ACWP_M4A5_145_troy_tango
	{
		RTG_WEAPON_BASE
			class XtdGearInfo { model = "ACWP_M4A1_145"; camo = "blk_tan"; grip = "tango"; rail = "troy"; };
	};
	class ACWP_M4A5_145_troy_tango_DON: ACWP_M4A5_145_troy_tango
	{
		RTG_WEAPON_BASE
			class XtdGearInfo { model = "ACWP_M4A1_145"; camo = "don"; grip = "tango"; rail = "troy"; };
	};
	class ACWP_M4A5_145_troy_tango_NET: ACWP_M4A5_145_troy_tango
	{
		RTG_WEAPON_BASE
			class XtdGearInfo { model = "ACWP_M4A1_145"; camo = "net"; grip = "tango"; rail = "troy"; };
	};
	class ACWP_M4A5_145_troy_tango_TAN: ACWP_M4A5_145_troy_tango
	{
		RTG_WEAPON_BASE
			class XtdGearInfo { model = "ACWP_M4A1_145"; camo = "tan"; grip = "tango"; rail = "troy"; };
	};
	class ACWP_M4A5_145_7rail_GL: ACWP_M4A5_145_ris_base
	{
		RTG_WEAPON_BASE
			class XtdGearInfo { model = "ACWP_M4A5_145_GL"; camo = "black"; grip = "none"; };
	};
	class ACWP_M4A5_145_7rail_GL_don: ACWP_M4A5_145_7rail_GL
	{
		RTG_WEAPON_BASE
			class XtdGearInfo { model = "ACWP_M4A5_145_GL"; camo = "don"; grip = "none"; };
	};
	class ACWP_M4A5_145_7rail_GL_net: ACWP_M4A5_145_7rail_GL
	{
		RTG_WEAPON_BASE
			class XtdGearInfo { model = "ACWP_M4A5_145_GL"; camo = "net"; grip = "none"; };
	};
	class ACWP_M4A5_145_7rail_GL_tan: ACWP_M4A5_145_7rail_GL
	{
		RTG_WEAPON_BASE
			class XtdGearInfo { model = "ACWP_M4A5_145_GL"; camo = "tan"; grip = "none"; };
	};
	class ACWP_M4A5_145_7rail_GL_grip: ACWP_M4A5_145_7rail_GL
	{
		RTG_WEAPON_BASE
			class XtdGearInfo { model = "ACWP_M4A5_145_GL"; camo = "black"; grip = "vfg"; };
	};
	class ACWP_M4A5_145_7rail_GL_grip_don: ACWP_M4A5_145_7rail_GL_grip
	{
		RTG_WEAPON_BASE
			class XtdGearInfo { model = "ACWP_M4A5_145_GL"; camo = "don"; grip = "vfg"; };
	};
	class ACWP_M4A5_145_7rail_GL_grip_net: ACWP_M4A5_145_7rail_GL_grip
	{
		RTG_WEAPON_BASE
			class XtdGearInfo { model = "ACWP_M4A5_145_GL"; camo = "net"; grip = "vfg"; };
	};
	class ACWP_M4A5_145_7rail_GL_grip_tan: ACWP_M4A5_145_7rail_GL_grip
	{
		RTG_WEAPON_BASE
			class XtdGearInfo { model = "ACWP_M4A5_145_GL"; camo = "tan"; grip = "vfg"; };
	};

// T1
	// SR-16
	class Tier1_HK416D145_LMT;
	class Tier1_HK416D10_LMT: Tier1_HK416D145_LMT
	{
		M4_Family_Base
		RTG_RECOIL_SETUP(sr16_crb_556)
		RTG_WEAPON_HANDLING(1.8)
	};
	class Tier1_SR16_CQB_Mod2_CTR_FDE: Tier1_HK416D10_LMT
	{
		class XtdGearInfo { model = "rtg_ace_expanded_sr16"; camo="CYT"; stock="CTR";barrel="CQB";};
		RTG_WEAPON_BASE
		RTG_RECOIL_SETUP(sr16_cqb_556)
		RTG_WEAPON_HANDLING(1.7)
	};
	class Tier1_SR16_CQB_Mod2_CTR_Black: Tier1_SR16_CQB_Mod2_CTR_FDE
	{
		class XtdGearInfo { model = "rtg_ace_expanded_sr16"; camo="black"; stock="CTR";barrel="CQB";};
		RTG_WEAPON_BASE
	};
	class Tier1_SR16_CQB_Mod2_LMT_FDE: Tier1_SR16_CQB_Mod2_CTR_FDE
	{
		class XtdGearInfo { model = "rtg_ace_expanded_sr16"; camo="CYT"; stock="LMT";barrel="CQB";};
		RTG_WEAPON_BASE
	};
	class Tier1_SR16_CQB_Mod2_LMT_Black: Tier1_SR16_CQB_Mod2_LMT_FDE
	{
		class XtdGearInfo { model = "rtg_ace_expanded_sr16"; camo="BLK"; stock="LMT";barrel="CQB";};
		RTG_WEAPON_BASE
	};
	class Tier1_SR16_CQB_Mod2_IMOD_FDE: Tier1_SR16_CQB_Mod2_CTR_FDE
	{
		class XtdGearInfo { model = "rtg_ace_expanded_sr16"; camo="CYT"; stock="IMOD";barrel="CQB";};
		RTG_WEAPON_BASE
	};
	class Tier1_SR16_CQB_Mod2_IMOD_Black: Tier1_SR16_CQB_Mod2_IMOD_FDE
	{
		class XtdGearInfo { model = "rtg_ace_expanded_sr16"; camo="BLK"; stock="IMOD";barrel="CQB";};
		RTG_WEAPON_BASE
	};
	class Tier1_SR16_CQB_Mod2_MFT_FDE: Tier1_SR16_CQB_Mod2_CTR_FDE
	{
		class XtdGearInfo { model = "rtg_ace_expanded_sr16"; camo="CYT"; stock="MFT";barrel="CQB";};
		RTG_WEAPON_BASE
	};
	class Tier1_SR16_CQB_Mod2_MFT_Black: Tier1_SR16_CQB_Mod2_MFT_FDE
	{
		class XtdGearInfo { model = "rtg_ace_expanded_sr16"; camo="BLK"; stock="MFT";barrel="CQB";};
		RTG_WEAPON_BASE
	};
	class Tier1_SR16_Carbine_Mod2_CTR_FDE: Tier1_HK416D145_LMT
	{
		class XtdGearInfo { model = "rtg_ace_expanded_sr16"; camo="CYT"; stock="CTR";barrel="MR";};
		RTG_RECOIL_SETUP(sr16_crb_556)
		RTG_WEAPON_HANDLING(1.8)
		RTG_WEAPON_BASE
	};
	class Tier1_SR16_Carbine_Mod2_CTR_Black: Tier1_SR16_Carbine_Mod2_CTR_FDE
	{
		class XtdGearInfo { model = "rtg_ace_expanded_sr16"; camo="BLK"; stock="CTR";barrel="MR";};
		RTG_WEAPON_BASE
	};
	class Tier1_SR16_Carbine_Mod2_LMT_FDE: Tier1_SR16_Carbine_Mod2_CTR_FDE
	{
		class XtdGearInfo { model = "rtg_ace_expanded_sr16"; camo="CYT"; stock="LMT";barrel="MR";};
		RTG_WEAPON_BASE
	};
	class Tier1_SR16_Carbine_Mod2_LMT_Black: Tier1_SR16_Carbine_Mod2_LMT_FDE
	{
		class XtdGearInfo { model = "rtg_ace_expanded_sr16"; camo="BLK"; stock="LMT";barrel="MR";};
		RTG_WEAPON_BASE
	};
	class Tier1_SR16_Carbine_Mod2_IMOD_FDE: Tier1_SR16_Carbine_Mod2_CTR_FDE
	{
		class XtdGearInfo { model = "rtg_ace_expanded_sr16"; camo="CYT"; stock="IMOD";barrel="MR";};
		RTG_WEAPON_BASE
	};
	class Tier1_SR16_Carbine_Mod2_IMOD_Black: Tier1_SR16_Carbine_Mod2_IMOD_FDE
	{
		class XtdGearInfo { model = "rtg_ace_expanded_sr16"; camo="BLK"; stock="IMOD";barrel="MR";};
		RTG_WEAPON_BASE
	};
	class Tier1_SR16_Carbine_Mod2_MFT_FDE: Tier1_SR16_Carbine_Mod2_CTR_FDE
	{
		class XtdGearInfo { model = "rtg_ace_expanded_sr16"; camo="CYT"; stock="MFT";barrel="MR";};
		RTG_WEAPON_BASE
	};
	class Tier1_SR16_Carbine_Mod2_MFT_Black: Tier1_SR16_Carbine_Mod2_MFT_FDE
	{
		class XtdGearInfo { model = "rtg_ace_expanded_sr16"; camo="BLK"; stock="MFT";barrel="MR";};
		RTG_WEAPON_BASE
	};
	