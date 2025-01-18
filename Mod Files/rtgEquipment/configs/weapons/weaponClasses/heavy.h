// Launchers
class launch_MRAWS_olive_rail_F;
class launch_MRAWS_sand_rail_F;
class rtg_MRAWS_olive : launch_MRAWS_olive_rail_F
{
	RTG_WEAPON_BASE
	
	displayName = "M3 MAAWS (Olive)";
	baseWeapon = "rtg_MRAWS_olive";
	magazineWell[] = {"CBA_Carl_Gustaf"};
	magazines[] = {"rtg_MRAWS_HEAT_F"};
	ace_reloadlaunchers_enabled = 1;
	class OpticsModes
		{
			class optic
			{
				opticsID=1;
				useModelOptics=1;
				opticsZoomMin=0.087499999;
				opticsZoomMax=0.087499999;
				opticsZoomInit=0.087499999;
				distanceZoomMin=300;
				distanceZoomMax=300;
				memoryPointCamera="eye";
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="look";
				visionMode[]=
				{
					"Normal",
					"NVG"
				};
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
			};
		};
};
class rtg_MRAWS_sand : launch_MRAWS_sand_rail_F
{
	RTG_WEAPON_BASE
	
	displayName = "M3 MAAWS (Sand)";
	baseWeapon = "rtg_MRAWS_sand";
	magazineWell[] = {"CBA_Carl_Gustaf"};
	magazines[] = {"rtg_MRAWS_HEAT_F"};
	ace_reloadlaunchers_enabled = 1;
	class OpticsModes
		{
			class optic
			{
				opticsID=1;
				useModelOptics=1;
				opticsZoomMin=0.087499999;
				opticsZoomMax=0.087499999;
				opticsZoomInit=0.087499999;
				distanceZoomMin=300;
				distanceZoomMax=300;
				memoryPointCamera="eye";
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="look";
				visionMode[]=
				{
					"Normal",
					"NVG"
				};
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
			};
		};
};
class rtg_sal_Launcher : launch_MRAWS_olive_rail_F
{
	RTG_WEAPON_BASE
	
	displayName = "M3 MAAWS (Black/Sal)";
	baseWeapon = "rtg_sal_Launcher";
	magazineWell[] = {"CBA_Carl_Gustaf"};
	magazines[] = {"rtg_MRAWS_HEAT_F"};
	ace_reloadlaunchers_enabled = 1;
	hiddenSelectionsTextures[] = {"rtgEquipment\tex\salLauncher.paa","\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_rail_02_F_co"};
	class OpticsModes
		{
			class optic
			{
				opticsID=1;
				useModelOptics=1;
				opticsZoomMin=0.087499999;
				opticsZoomMax=0.087499999;
				opticsZoomInit=0.087499999;
				distanceZoomMin=300;
				distanceZoomMax=300;
				memoryPointCamera="eye";
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="look";
				visionMode[]=
				{
					"Normal",
					"NVG"
				};
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
			};
		};
};

class launch_Titan_short_base;
class launch_I_Titan_short_F : launch_Titan_short_base
{
	RTG_WEAPON_BASE
	
	displayName = "M6E2 MPRL (Olive)";
	baseWeapon = "rtg_MPRL_olive";
	mass = 225;
	ace_reloadlaunchers_enabled = 1;
};

class launch_B_Titan_short_F : launch_Titan_short_base
{
	RTG_WEAPON_BASE
	
	displayName = "M6E2 MPRL (Sand)";
	baseWeapon = "rtg_MPRL_sand";
	mass = 225;
	ace_reloadlaunchers_enabled = 1;
};

class launch_RPG7_F;
class rtg_pslr1_rpg7 : launch_RPG7_F
{
	RTG_WEAPON_BASE
	
	displayName = "PSLR-1";
	baseWeapon = "rtg_pslr1";
	mass = 90.5;
	ace_reloadlaunchers_enabled = 1;
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"rtgEquipment\tex\PSLR-1.paa"};
	magazines[] = {"RPG7_F"};
	magazineWell[] = {"RPG7"};
	RTG_STANDARD_ZOOM
}