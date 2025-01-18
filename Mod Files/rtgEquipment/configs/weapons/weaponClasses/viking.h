// M/23
	class ptv_rs556: Rifle_Base_F{
		magazineWell[] = {"CBA_556x45_STANAG"};
		magazines[] = {"rtg_30rnd_556_45"};
		recoil = "rtg_556_carbine";
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_m23";
			camo = "grn";
			barrel = "long";
			launcher = "no";
		};
	};
	class ptv_rs556_b : ptv_rs556{
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_m23";
			camo = "blk";
			barrel = "long";
			launcher = "no";
		};
	};
	class ptv_rs556_t : ptv_rs556{
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_m23";
			camo = "tan";
			barrel = "long";
			launcher = "no";
		};
	};
	class ptv_rs556_gl : ptv_rs556{
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_m23";
			camo = "grn";
			barrel = "long";
			launcher = "gl";
		};
	};
	class ptv_rs556_gl_b : ptv_rs556_gl{
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_m23";
			camo = "blk";
			barrel = "long";
			launcher = "gl";
		};
	};
	class ptv_rs556_gl_t : ptv_rs556_gl{
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_m23";
			camo = "tan";
			barrel = "long";
			launcher = "gl";
		};
	};
	class ptv_rs556s: ptv_rs556{
		magazineWell[] = {"CBA_556x45_STANAG"};
		magazines[] = {"rtg_30rnd_556_45"};
		recoil = "rtg_556_pdw";
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_m23";
			camo = "grn";
			barrel = "short";
			launcher = "no";
		};
	};
	class ptv_rs556s_b : ptv_rs556s{
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_m23";
			camo = "blk";
			barrel = "short";
			launcher = "no";
		};
	};
	class ptv_rs556s_t : ptv_rs556s{
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_m23";
			camo = "tan";
			barrel = "short";
			launcher = "no";
		};
	};


// M/90
	class ptv_AG: Rifle_Base_F
	{
		magazineWell[] = {"CBA_556x45_STANAG"};
		magazines[] = {"rtg_30rnd_556_45"};
		recoil = "rtg_556_rifle";
		RTG_ACEAX_EMPTY 
	}
	class ptv_AG_k : ptv_AG
	{
		recoil = "rtg_556_carbine";
		RTG_ACEAX_EMPTY 
	}
	class ptv_AG_c: ptv_AG
	{
		recoil = "rtg_556_pdw";
		RTG_ACEAX_EMPTY 
	}

	class ptv_AG_r: ptv_AG
	{
		recoil = "rtg_556_rifle";
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_m90";
			modern = "r";
			camo = "grn";
			barrel = "long";
			launcher = "no";
		};
	}
	class ptv_AG_r_b: ptv_AG_r
	{
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_m90";
			modern = "r";
			camo = "blk";
			barrel = "long";
			launcher = "no";
		};
	}
	class ptv_AG_k_r: ptv_AG_k
	{
		recoil = "rtg_556_carbine";
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_m90";
			modern = "r";
			camo = "grn";
			barrel = "short";
			launcher = "no";
		};
	}
	class ptv_AG_k_r_b: ptv_AG_k_r
	{
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_m90";
			modern = "r";
			camo = "blk";
			barrel = "short";
			launcher = "no";
		};
	}
	class ptv_AG_GL_k_r: ptv_AG_k_r
	{
		recoil = "rtg_556_carbine";
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_m90";
			modern = "r";
			camo = "grn";
			barrel = "short";
			launcher = "gl";
		};
	}
	class ptv_AG_GL_k_r_b: ptv_AG_GL_k_r
	{
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_m90";
			modern = "r";
			camo = "blk";
			barrel = "short";
			launcher = "gl";
		};
	}
	class ptv_AG_c_r: ptv_AG_c
	{
		recoil = "rtg_556_pdw";
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_m90";
			modern = "r";
			camo = "grn";
			barrel = "pdw";
			launcher = "no";
		};
	}
	class ptv_AG_c_r_b : ptv_AG_c_r
	{
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_m90";
			modern = "r";
			camo = "blk";
			barrel = "pdw";
			launcher = "no";
		};
	}
	class ptv_AG_r2: ptv_AG_r
	{
		recoil = "rtg_556_rifle";
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_m90";
			modern = "r2";
			camo = "grn";
			barrel = "long";
			launcher = "no";
		};
	}
	class ptv_AG_r2_b: ptv_AG_r2
	{
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_m90";
			modern = "r2";
			camo = "blk";
			barrel = "long";
			launcher = "no";
		};
	}
	class ptv_AG_k_r2: ptv_AG_k_r
	{
		recoil = "rtg_556_carbine";
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_m90";
			modern = "r2";
			camo = "grn";
			barrel = "short";
			launcher = "no";
		};
	}
	class ptv_AG_k_r2_b: ptv_AG_k_r2
	{
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_m90";
			modern = "r2";
			camo = "blk";
			barrel = "short";
			launcher = "no";
		};
	}
	class ptv_AGM: ptv_AG_k
	{
		recoil = "rtg_556_carbine";
		magazineWell[] = {"CBA_556x45_STANAG"};
		magazines[] = {"rtg_30rnd_556_45"};
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_m90";
			modern = "m";
			camo = "grn";
			barrel = "short";
			launcher = "no";
		};
	}
	class ptv_AGM_b: ptv_AGM
	{
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_m90";
			modern = "m";
			camo = "blk";
			barrel = "short";
			launcher = "no";
		};
	}
	class ptv_AGM_GL: ptv_AGM
	{
		recoil = "rtg_556_carbine";
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_m90";
			modern = "m";
			camo = "grn";
			barrel = "short";
			launcher = "gl";
		};
	}
	class ptv_AGM_GL_b: ptv_AGM_GL
	{
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_m90";
			modern = "m";
			camo = "blk";
			barrel = "short";
			launcher = "gl";
		};
	}
	class ptv_AGMR: ptv_AGM
	{
		recoil = "rtg_556_carbine";
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_m90";
			modern = "mr";
			camo = "grn";
			barrel = "short";
			launcher = "no";
		};
	}
	class ptv_AGMR_b : ptv_AGMR
	{
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_m90";
			modern = "mr";
			camo = "blk";
			barrel = "short";
			launcher = "no";
		};
	}
	class ptv_AG_c2: ptv_AG_c
	{
		magazineWell[] = {"CBA_556x45_STANAG"};
		magazines[] = {"rtg_30rnd_556_45"};
		recoil = "rtg_556_pdw";
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_m90";
			modern = "m";
			camo = "grn";
			barrel = "pdw";
			launcher = "no";
		};
	}
	class ptv_AG_c2_b : ptv_AG_c2
	{
		magazineWell[] = {"CBA_556x45_STANAG"};
		magazines[] = {"rtg_30rnd_556_45"};
		recoil = "rtg_556_pdw";
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_m90";
			modern = "m";
			camo = "blk";
			barrel = "pdw";
			launcher = "no";
		};
	}

// Negev
	class ptv_negev;
	class ptv_ng5 : ptv_negev
	{
		recoil = "rtg_556_lmg";
		magazineWell[] = {"CBA_556x45_STANAG"};
		magazines[] = {"rtg_100rnd_556_45"};
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_negev";
			camo = "grn";
			barrel = "long";
		};
	}
	class ptv_ng5_b : ptv_ng5
	{
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_negev";
			camo = "blk";
			barrel = "long";
		};
	}
	class ptv_ng5_sf: ptv_ng5
	{
		recoil = "rtg_556_lmg";
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_negev";
			camo = "grn";
			barrel = "short";
		};
	}
	class ptv_ng5_sf_b : ptv_ng5_sf
	{
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_negev";
			camo = "blk";
			barrel = "short";
		};
	}
	class ptv_ng5_sf_des : ptv_ng5_sf
	{
		RTG_ACEAX_EMPTY 
	}

// M60E4
	class ptv_m60e4: Rifle_Long_Base_F
	{
		recoil = "rtg_762n_mmg";
		magazineWell[] = {"CBA_762x51_LINKS"};
		magazines[] = {"rtg_200Rnd_762x51"};
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_m60";
			camo = "blk";
			barrel = "long";
			sight = "static";
		};
	}
	class ptv_m60e4_g: ptv_m60e4
	{
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_m60";
			camo = "grn";
			barrel = "long";
			sight = "static";
		};
	}
	class ptv_m60e4_t: ptv_m60e4
	{
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_m60";
			camo = "tan";
			barrel = "long";
			sight = "static";
		};
	}
	class ptv_m60e4r: ptv_m60e4
	{
		recoil = "rtg_762n_mmg";
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_m60";
			camo = "blk";
			barrel = "long";
			sight = "flip";
		};
	}
	class ptv_m60e4r_g: ptv_m60e4_g
	{
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_m60";
			camo = "grn";
			barrel = "long";
			sight = "flip";
		};
	}
	class ptv_m60e4r_t: ptv_m60e4_t
	{
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_m60";
			camo = "tan";
			barrel = "long";
			sight = "flip";
		};
	}
	class ptv_m60e4s: ptv_m60e4
	{
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_m60";
			camo = "blk";
			barrel = "short";
			sight = "static";
		};
	}
	class ptv_m60e4s_g: ptv_m60e4s
	{
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_m60";
			camo = "grn";
			barrel = "short";
			sight = "static";
		};
	}
	class ptv_m60e4s_t: ptv_m60e4s
	{
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_m60";
			camo = "tan";
			barrel = "short";
			sight = "static";
		};
	}
	class ptv_m60e4rs: ptv_m60e4s
	{
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_m60";
			camo = "blk";
			barrel = "short";
			sight = "flip";
		};
	}
	class ptv_m60e4rs_g: ptv_m60e4s_g
	{
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_m60";
			camo = "grn";
			barrel = "short";
			sight = "flip";
		};
	}
	class ptv_m60e4rs_t: ptv_m60e4s_t
	{
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_m60";
			camo = "tan";
			barrel = "short";
			sight = "flip";
		};
	}
// Benalli
	class ptv_bm4: Rifle_Base_F
	{
		DisplayName = "Benalli M4";
		magazineWell[] = {"CBA_12g_6rnds"};
		magazines[] = {"rtg_6Rnd_00Buck"};
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_benelli";
			length = "long";
		};
	}
	class ptv_bm4e: ptv_bm4
	{
		DisplayName = "Benalli M4 Entry";
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_benelli";
			length = "short";
		};
	}

// CBJ
	class ptv_cbj_ms: Rifle_Base_F
	{
		magazineWell[] = {"RTG_9x19"};
		magazines[] = {"rtg_9mm_35Rnd_mag"};
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_cbj";
			camo = "grn";
		};
	}
	class ptv_cbj_ms_b: ptv_cbj_ms
	{
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_cbj";
			camo = "blk";
		};
	}
	class ptv_cbj_ms2: ptv_cbj_ms
	{
		RTG_ACEAX_EMPTY 
	}
	class ptv_cbj_ms2_b: ptv_cbj_ms2
	{
		RTG_ACEAX_EMPTY 
	}

// G18
	class ptv_g19;
	class rtg_g18c : ptv_g19
	{
		RTG_WEAPON_BASE
		
		baseWeapon = "rtg_g18c";
		displayName = "Glock-18C";
		modes[] = {"Burst", "Single1"};
		class Single1 : Single
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Closure_Rook40_01",0.15848932,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Closure_Rook40_02",0.15848932,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_short_01",3.1622777,1,1200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_short_02",3.1622777,1,1200};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_short_03",3.1622777,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_interior",1.4125376,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_trees",1.0,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_forest",1.0,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_meadows",1.0,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_houses",1.0,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_short_01",0.56234133,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_short_02",0.56234133,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_short_03",0.56234133,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin2",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_interior",1.0,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_trees",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_forest",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_meadows",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_houses",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.070588235;
			dispersion = 0.0029;
		};
		class Burst : Single1
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Closure_Rook40_01",0.15848932,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Closure_Rook40_02",0.15848932,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_short_01",3.1622777,1,1200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_short_02",3.1622777,1,1200};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_short_03",3.1622777,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_interior",1.4125376,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_trees",1.0,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_forest",1.0,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_meadows",1.0,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_houses",1.0,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_short_01",0.56234133,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_short_02",0.56234133,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_short_03",0.56234133,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin2",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_interior",1.0,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_trees",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_forest",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_meadows",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_houses",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.070588235;
			dispersion = 0.0029;
			burst = 3;
			textureType = "burst";
		};
	}

// P320
	class ptv_p320t;
	class ptv_p320t_p : ptv_p320t
	{
		RTG_WEAPON_BASE
		
		baseWeapon = "ptv_p320t_p";
		displayName = "P320 Tactical (Pink)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\rtgEquipment\tex\p320_p.paa"};
	};

// AX50
	class ptv_AX_Base: Rifle_Long_Base_F
	{
		magazineWell[] = {"CBA_50BMG_M107"};
		magazines[] = {"rtg_10Rnd_127x99"};
	}
	class ptv_M82a1: Rifle_Long_Base_F
	{
		magazineWell[] = {"CBA_50BMG_M107"};
		magazines[] = {"rtg_10Rnd_127x99"};
	}