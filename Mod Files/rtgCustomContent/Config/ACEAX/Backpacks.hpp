class ACEAX_Patrol_Pack
{
    label = "CTRG Patrol Pack";
    author = "Shrike";
    options[] = {"camo"};

    class camo
    {
        values[] = {"arid", "des", "med", "nat", "sha", "temp", "tun", "tro", "urb"};
        class arid { label = "ARID"; description = "Arid environment pattern"; };
        class des { label = "DES"; description = "Desert environment pattern"; };
        class med { label = "MED"; description = "Mediterranean environment pattern"; };
        class nat { label = "NAT"; description = "Natural terrain pattern"; };
        class sha { label = "SHA"; description = "Shadow / Night operations"; };
        class temp { label = "TEMP"; description = "Temperate woodland pattern"; };
        class tun { label = "TUN"; description = "Cold environment tundra pattern"; };
        class tro { label = "TRO"; description = "Tropical jungle pattern"; };
        class urb { label = "URB"; description = "Urban environment pattern"; };
    };
};

class ACEAX_BackPanel : ACEAX_Patrol_Pack
{
    label = "CTRG BackPanel";
    author = "Shrike";
    options[] = {"camo", "variant"};

    class variant
    {
        values[] = {"hydration", "tomahawk", "pointman", "breacher"};
        class hydration { label = "Hydration"; description = "Variant 1"; };
        class tomahawk { label = "tomahawk"; description = "Variant 2"; };
        class pointman { label = "pointman"; description = "Variant 3"; };
        class breacher { label = "breacher"; description = "Variant 4"; };
    };
};

class ACEAX_Radio_Pack
{
    label = "AN/PRC155";
    author = "Shrike";
    options[] = {"camo"};
    class camo {label = "Camo";
        values[] = {"TAN", "BLK", "OD"};};
};

class ACEAX_Radio_Pack_Small : ACEAX_Radio_Pack
{
    label = "AN/PRC155 - Small";
    author = "Shrike";
    options[] = {"camo"};
};

class ACEAX_Medical_Pack : ACEAX_Radio_Pack
{
    label = "Medical Bag";
    author = "Shrike";
    options[] = {"camo"};
};
