class ACEAX_Airframe
{
    label = "Airframe";
    author = "Shrike";
    options[] = {"camo", "variant", "googles"};

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
        values[] = {"1", "2", "3", "4", "5", "6"};
        class 1 { label = "1"; description = "Variant 1"; };
        class 2 { label = "2"; description = "Variant 2"; };
        class 3 { label = "3"; description = "Variant 3"; };
        class 4 { label = "4"; description = "Variant 4"; };
        class 5 { label = "5"; description = "Variant 5"; };
        class 6 { label = "6"; description = "Variant 6"; };
    };

    class googles
    {
        values[] = {"yes", "no"};
        class yes { label = "Yes"; description = "Includes integrated goggles"; };
        class no { label = "No"; description = "No goggles equipped"; };
    };
};

class ACEAX_OpsCore
{
    label = "OpsCore";
    author = "Shrike";
    options[] = {"camo", "variant", "googles"};

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
        values[] = {"1", "2", "3", "4", "5", "6"};
        class 1 { label = "1"; description = "Variant 1"; };
        class 2 { label = "2"; description = "Variant 2"; };
        class 3 { label = "3"; description = "Variant 3"; };
        class 4 { label = "4"; description = "Variant 4"; };
        class 5 { label = "5"; description = "Variant 5"; };
        class 6 { label = "6"; description = "Variant 6"; };
    };

    class googles
    {
        values[] = {"yes", "no"};
        class yes { label = "Yes"; description = "Includes integrated goggles"; };
        class no { label = "No"; description = "No goggles equipped"; };
    };
};

class ACEAX_Caps
{
    label = "Caps";
    author = "Shrike";
    options[] = {"camo", "variant", "goggles"};

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
        values[] = {"1", "2", "3"};
        class 1 { label = "1"; description = "Variant 1"; };
        class 2 { label = "2"; description = "Variant 2"; };
        class 3 { label = "3"; description = "Variant 3"; };
    };

    class goggles
    {
        values[] = {"yes", "no"};
        class yes { label = "Yes"; description = "Includes integrated goggles"; };
        class no { label = "No"; description = "No goggles equipped"; };
    };
};
