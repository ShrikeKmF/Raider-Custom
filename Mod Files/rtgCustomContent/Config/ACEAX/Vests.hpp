class ACEAX_Crye_AVS {
    label = "Crye AVS";
    
    options[] = {"variant", "type", "camo"};
    class variant
    {
        label = "Vest Variant";
        values[] = {"N1", "N2", "N3", "N4"};
        class N1
        {
            label = "1";
            description = "1";
        };
        class N2
        {
            label = "2";
            description = "2";
        };
        class N3
        {
            label = "3";
            description = "3";
        };
        class N4
        {
            label = "4";
            description = "4";
        };
    };
    class type
    {
        label = "Vest Type";
        values[] = {"gunner", "comms", "assaulter"};
        class gunner
        {
            label = "Gunner";
            description = "Gunner";
        };
        class comms
        {
            label = "Comms";
            description = "Comms";
        };
        class assaulter
        {
            label = "Assualter";
            description = "Assualter";
        };
    };
    class camo
    {
        label = "Camo";
        values[] = {"mcb", "mc", "mct", "CYT", "GRY", "OD"};
    };
};

class ACEAX_JPC
{
    label = "JPC";
    author = "Shrike";
    options[] = {"camo", "variant", "belt"};

    class camo
    {
        values[] = {"arid", "des", "med", "nat", "sha", "temp", "tun", "tro", "urb"};
        class arid { label = "Arid"; description = "Arid environment pattern"; };
        class des { label = "Desert"; description = "Desert environment pattern"; };
        class med { label = "Mediterranean"; description = "Mediterranean environment pattern"; };
        class nat { label = "Natural"; description = "Natural terrain pattern"; };
        class sha { label = "Shadow"; description = "Shadow / Night operations"; };
        class temp { label = "Temperate"; description = "Temperate woodland pattern"; };
        class tun { label = "Tundra"; description = "Cold environment tundra pattern"; };
        class tro { label = "Tropic"; description = "Tropical jungle pattern"; };
        class urb { label = "Urban"; description = "Urban environment pattern"; };
    };

    class variant
    {
        values[] = {"Assaulter", "Grenadier", "Light", "hgunner", "Marksman", "medic", "teamleader"};
        class Assaulter { label = "Assaulter"; description = "Variant 1"; };
        class Grenadier { label = "Grenadier"; description = "Variant 2"; };
        class Light { label = "Light"; description = "Variant 3"; };
        class hgunner { label = "Machine Gunner"; description = "Variant 4"; };
        class Marksman { label = "Marksman"; description = "Variant 5"; };
        class medic { label = "Medic"; description = "Variant 6"; };
        class teamleader { label = "Team Leader"; description = "Variant 6"; };
    };

    class belt
    {
        values[] = {"yes", "no"};
        class yes { label = "Yes"; description = "Includes integrated goggles"; };
        class no { label = "No"; description = "No goggles equipped"; };
    };
};

class ACEAX_CIRAS : ACEAX_JPC
{
    label = "CIRAS";
};

class ACEAX_MMAC : ACEAX_JPC
{
    label = "MMAC";
};