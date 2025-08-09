// AUG
// A1
class hlc_rifle_auga1_b;
class hlc_rifle_auga1;
class hlc_rifle_auga1_t;
// A2
class hlc_rifle_auga2_b;
class hlc_rifle_auga2;
class hlc_rifle_auga2_t;
// A3
class hlc_rifle_auga3_b;
class hlc_rifle_auga3;
class hlc_rifle_auga3_bl;
// A3 GL
class hlc_rifle_auga3_GL_b;
class hlc_rifle_auga3_GL;
class hlc_rifle_auga3_GL_bl;
// HBAR
class hlc_rifle_auga2lsw_b;
class hlc_rifle_auga2lsw;
class hlc_rifle_auga2lsw_t;
// Para
class hlc_rifle_auga2para_b;
class hlc_rifle_auga2para;
class hlc_rifle_auga2para_t;

// AUG A1
class rtg_auga1_b : hlc_rifle_auga1_b {
    RTG_WEAPON_BASE
    baseWeapon = "rtg_auga1_b";
    class XtdGearInfo { model = "rtg_ace_expanded_aug_a1"; camo = "b"; };
	magazineWell[] = {"CBA_556x45_STANAG"};
    magazines[] = {"rtg_30rnd_556_45"};
	RTG_RECOIL(aug)
	RTG_WEAPON_HANDLING(1.94)
};
class rtg_auga1_std : hlc_rifle_auga1 {
    RTG_WEAPON_BASE
    baseWeapon = "rtg_auga1_std";
    class XtdGearInfo { model = "rtg_ace_expanded_aug_a1"; camo = "std"; };
	magazineWell[] = {"CBA_556x45_STANAG"};
    magazines[] = {"rtg_30rnd_556_45"};
	RTG_RECOIL(aug)
	RTG_WEAPON_HANDLING(1.94)
};
class rtg_auga1_t : hlc_rifle_auga1_t {
    RTG_WEAPON_BASE
    baseWeapon = "rtg_auga1_t";
    class XtdGearInfo { model = "rtg_ace_expanded_aug_a1"; camo = "t"; };
	magazineWell[] = {"CBA_556x45_STANAG"};
    magazines[] = {"rtg_30rnd_556_45"};
	RTG_RECOIL(aug)
	RTG_WEAPON_HANDLING(1.94)
};

// AUG A2
class rtg_auga2_b : hlc_rifle_auga2_b {
    RTG_WEAPON_BASE
    baseWeapon = "rtg_auga2_b";
    class XtdGearInfo { model = "rtg_ace_expanded_aug_a2"; camo = "b"; };
	magazineWell[] = {"CBA_556x45_STANAG"};
    magazines[] = {"rtg_30rnd_556_45"};
	RTG_RECOIL(aug)
	RTG_WEAPON_HANDLING(1.92)
};
class rtg_auga2_std : hlc_rifle_auga2 {
    RTG_WEAPON_BASE
    baseWeapon = "rtg_auga2_std";
    class XtdGearInfo { model = "rtg_ace_expanded_aug_a2"; camo = "std"; };
	magazineWell[] = {"CBA_556x45_STANAG"};
    magazines[] = {"rtg_30rnd_556_45"};
	RTG_RECOIL(aug)
	RTG_WEAPON_HANDLING(1.92)
};
class rtg_auga2_t : hlc_rifle_auga2_t {
    RTG_WEAPON_BASE
    baseWeapon = "rtg_auga2_t";
    class XtdGearInfo { model = "rtg_ace_expanded_aug_a2"; camo = "t"; };
	magazineWell[] = {"CBA_556x45_STANAG"};
    magazines[] = {"rtg_30rnd_556_45"};
	RTG_RECOIL(aug)
	RTG_WEAPON_HANDLING(1.92)
};

// AUG A3 (no GL)
class rtg_auga3_b : hlc_rifle_auga3_b {

    RTG_WEAPON_BASE
    baseWeapon = "rtg_auga3_b";
    class XtdGearInfo { model = "rtg_ace_expanded_aug_a3"; camo = "b"; };
	magazineWell[] = {"CBA_556x45_STANAG"};
    magazines[] = {"rtg_30rnd_556_45"};
	RTG_RECOIL(aug)
	RTG_WEAPON_HANDLING(1.9)
};
class rtg_auga3_std : hlc_rifle_auga3 {
    RTG_WEAPON_BASE
    baseWeapon = "rtg_auga3_std";
    class XtdGearInfo { model = "rtg_ace_expanded_aug_a3"; camo = "std"; };
	magazineWell[] = {"CBA_556x45_STANAG"};
    magazines[] = {"rtg_30rnd_556_45"};
	RTG_RECOIL(aug)
	RTG_WEAPON_HANDLING(1.9)
};
class rtg_auga3_bl : hlc_rifle_auga3_bl {
    RTG_WEAPON_BASE
    baseWeapon = "rtg_auga3_bl";
    class XtdGearInfo { model = "rtg_ace_expanded_aug_a3"; camo = "bl"; };
	magazineWell[] = {"CBA_556x45_STANAG"};
    magazines[] = {"rtg_30rnd_556_45"};
	RTG_RECOIL(aug)
	RTG_WEAPON_HANDLING(1.9)
};

// AUG A3 GL
class rtg_auga3_gl_b : hlc_rifle_auga3_GL_b {
    RTG_WEAPON_BASE
    baseWeapon = "rtg_auga3_gl_b";
    class XtdGearInfo { model = "rtg_ace_expanded_aug_a3_gl"; camo = "b"; };
	magazineWell[] = {"CBA_556x45_STANAG"};
    magazines[] = {"rtg_30rnd_556_45"};
	RTG_RECOIL(aug)
	RTG_WEAPON_HANDLING(1.9)
};
class rtg_auga3_gl_std : hlc_rifle_auga3_GL {
    RTG_WEAPON_BASE
    baseWeapon = "rtg_auga3_gl_std";
    class XtdGearInfo { model = "rtg_ace_expanded_aug_a3_gl"; camo = "std"; };
	magazineWell[] = {"CBA_556x45_STANAG"};
    magazines[] = {"rtg_30rnd_556_45"};
	RTG_RECOIL(aug)
	RTG_WEAPON_HANDLING(1.9)
};
class rtg_auga3_gl_bl : hlc_rifle_auga3_GL_bl {
    RTG_WEAPON_BASE
    baseWeapon = "rtg_auga3_gl_bl";
    class XtdGearInfo { model = "rtg_ace_expanded_aug_a3_gl"; camo = "bl"; };
	magazineWell[] = {"CBA_556x45_STANAG"};
    magazines[] = {"rtg_30rnd_556_45"};
	RTG_RECOIL(aug)
	RTG_WEAPON_HANDLING(1.9)
};

// AUG HBAR (LSW)
class rtg_auga2lsw_b : hlc_rifle_auga2lsw_b {
    RTG_WEAPON_BASE
    baseWeapon = "rtg_auga2lsw_b";
    class XtdGearInfo { model = "rtg_ace_expanded_aug_lsw"; camo = "b"; };
	magazineWell[] = {"CBA_556x45_STANAG_HBAR"};
    magazines[] = {"rtg_50rnd_556"};
	RTG_RECOIL(aug_hbar)
	RTG_WEAPON_HANDLING(2.4)
};
class rtg_auga2lsw_std : hlc_rifle_auga2lsw {
    RTG_WEAPON_BASE
    baseWeapon = "rtg_auga2lsw_std";
    class XtdGearInfo { model = "rtg_ace_expanded_aug_lsw"; camo = "std"; };
	magazineWell[] = {"CBA_556x45_STANAG_HBAR"};
    magazines[] = {"rtg_50rnd_556"};
	RTG_RECOIL(aug_hbar)
	RTG_WEAPON_HANDLING(2.4)
};
class rtg_auga2lsw_t : hlc_rifle_auga2lsw_t {
    RTG_WEAPON_BASE
    baseWeapon = "rtg_auga2lsw_t";
    class XtdGearInfo { model = "rtg_ace_expanded_aug_lsw"; camo = "t"; };
	magazineWell[] = {"CBA_556x45_STANAG_HBAR"};
    magazines[] = {"rtg_50rnd_556"};
	RTG_RECOIL(aug_hbar)
	RTG_WEAPON_HANDLING(2.4)
};

// AUG Para
class rtg_auga2para_b : hlc_rifle_auga2para_b {
    RTG_WEAPON_BASE
    baseWeapon = "rtg_auga2para_b";
    class XtdGearInfo { model = "rtg_ace_expanded_aug_para"; camo = "b"; };
	magazineWell[] = {"RTG_9x19"};
    magazines[] = {"rtg_9mm_35Rnd_mag"};
	RTG_RECOIL(aug_9)
	RTG_WEAPON_HANDLING(1.78)
};
class rtg_auga2para_std : hlc_rifle_auga2para {
    RTG_WEAPON_BASE
    baseWeapon = "rtg_auga2para_std";
    class XtdGearInfo { model = "rtg_ace_expanded_aug_para"; camo = "std"; };
	magazineWell[] = {"RTG_9x19"};
    magazines[] = {"rtg_9mm_35Rnd_mag"};
	RTG_RECOIL(aug_9)
	RTG_WEAPON_HANDLING(1.78)
};
class rtg_auga2para_t : hlc_rifle_auga2para_t {
    RTG_WEAPON_BASE
    baseWeapon = "rtg_auga2para_t";
    class XtdGearInfo { model = "rtg_ace_expanded_aug_para"; camo = "t"; };
	magazineWell[] = {"RTG_9x19"};
    magazines[] = {"rtg_9mm_35Rnd_mag"};
	RTG_RECOIL(aug_9)
	RTG_WEAPON_HANDLING(1.78)
};

class rtg_pat_aug : rtg_auga3_std
{
	RTG_WEAPON_BASE
    baseWeapon = "rtg_pat_aug";
    displayName="AUG A3 - Phoebe";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"rtgEquipment\tex\phoebeAUG_A2.paa"};
	RTG_ACEAX_EMPTY 
};