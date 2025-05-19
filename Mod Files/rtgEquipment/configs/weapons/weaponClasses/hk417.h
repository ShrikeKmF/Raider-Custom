class Tier1_M110k5;
class Tier1_M110k5_ACS: Tier1_M110k5
{
    RTG_WEAPON_BASE
    RTG_ACEAX_EMPTY
    displayName = "M110A5 (Tan)";
    magazineWell[] = {"CBA_762x51_M14"};
    magazines[] = {"rtg_20Rnd_762x51"};
    RTG_RECOIL_SETUP(hk417_762)
	RTG_WEAPON_HANDLING(2.6)
}
class Tier1_M110k5_65mm: Tier1_M110k5
{
    RTG_WEAPON_BASE
    RTG_ACEAX_EMPTY
    displayName = "M110A5 (6.8/Tan)";
    magazineWell[] = {"RTG_68x51_MAGWELL"};
	magazines[] = {"rtg_20Rnd_68x51"};
	RTG_RECOIL_SETUP(hk417_277)
	RTG_WEAPON_HANDLING(2.6)
};
