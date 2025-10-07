class arifle_SCAR_base_F: Rifle_Base_F
{
    magazines[]               = { "rtg_20Rnd_68x51" };
    magazineWell[]            = { "MX_65x39_MSBS" };
}

class arifle_ARX_base_F: Rifle_Base_F
{
    class Secondary: Rifle_Base_F
    {
        magazines[]               = { "rtg_10rnd_10bw" };
        magazineWell[]            = { "50BW" };
    }
}