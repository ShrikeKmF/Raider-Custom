class rhs_weap_g36c;
class rhs_weap_g36kv;

class rtg_g36c : rhs_weap_g36c
{
    RTG_WEAPON_BASE
    displayName="G36C";
    baseWeapon = "rtg_g36c";
    magazineWell[] = {"CBA_556x45_STANAG"};
    magazines[] = {"rtg_30rnd_556_45"};
    RTG_RECOIL(g36c)
    RTG_WEAPON_HANDLING(2.6)
}
class rtg_g36kv : rhs_weap_g36kv
{
    RTG_WEAPON_BASE
    displayName="G36KV";
    baseWeapon = "rtg_g36kv";
    magazineWell[] = {"CBA_556x45_STANAG"};
    magazines[] = {"rtg_30rnd_556_45"};
    RTG_RECOIL(g36kv)
    RTG_WEAPON_HANDLING(2.2)
}
