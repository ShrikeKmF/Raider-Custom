// Negev
	class ptv_negev;
	class ptv_ng5 : ptv_negev
	{
		RTG_RECOIL(negev)
		RTG_WEAPON_HANDLING(3.2)
		magazineWell[] = {"CBA_556x45_STANAG_Negev"};
		magazines[] = {"rtg_200rnd_556_45_negev"};
	};
	class ptv_ng5_sf: ptv_ng5
	{
		RTG_RECOIL(negev)
		RTG_WEAPON_HANDLING(3.0)
		magazineWell[] = {"CBA_556x45_STANAG_Negev", "CBA_556x45_STANAG_HBAR", "CBA_556x45_STANAG"};
		magazines[] = {"rtg_200rnd_556_45_negev"};
	};

// M60E4
	class ptv_m60e4: Rifle_Long_Base_F
	{
		recoil = "rtg_762n_mmg";
		magazineWell[] = {"CBA_762x51_LINKS"};
		magazines[] = {"rtg_200Rnd_762x51"};
	}
	
// Benalli
	class ptv_bm4: Rifle_Base_F
	{
		DisplayName = "Benalli M4";
		magazineWell[] = {"CBA_12g_8rnds"};
		magazines[] = {"rtg_8Rnd_00Buck"};
	}
	class ptv_bm4e: ptv_bm4
	{
		magazineWell[] = {"CBA_12g_5rnds"};
		magazines[] = {"rtg_5Rnd_00Buck"};
		DisplayName = "Benalli M4 Entry";
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