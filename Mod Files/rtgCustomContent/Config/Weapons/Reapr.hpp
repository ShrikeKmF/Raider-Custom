class pReaprModel: Rifle_Base_F
{
    scope = 1;
    magazineWell[]            = { "CBA_338NM_LINKS" };
    RTG_ACEAX_EMPTY
}

class RTG_Reapr_Sand : pReaprModel
{
    scope = 2;
    author = "Mac";
    baseWeapon = "RTG_Reapr_Sand";
    displayName = "OOW Reapr (Sand)";
    ace_overheating_mrbs = 2000;
    ACE_Overheating_SlowdownFactor = 0.18;
    ACE_Overheating_JamChance = 0.015;
    ACE_Overheating_Dispersion = 0.0006;
    ACE_overheating_allowSwapBarrel = 1;
    ace_barrelLength = 619.76;
    ace_overheating_barrelMass = 28.44598;
    ace_range = 3800;
}