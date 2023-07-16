class rtg_ace_expanded_vest {
    label = "VSM Vest";
    author = "Shrike";
    options[] = {"role", "type", "camo"};
    class role
    {
        label = "Vest Role";
        values[] = {"breacher", "gunner", "operator"};
        class breacher
        {
            label = "Breacher";
            description = "Breacher";
        };
        class gunner
        {
            label = "Gunner";
            description = "Gunner";
        };
        class operator
        {
            label = "Operator";
            description = "Operator";
        };
    };
    class type
    {
        label = "Vest Type";
        values[] = {"facp", "armatus", "lbt6094", "paraclete"};
        class facp
        {
            label = "DT FAPC";
            description = "DT FAPC";
        };
        class armatus
        {
            label = "LBT Armatus";
            description = "LBT Armatus";
        };
        class lbt6094
        {
            label = "LBT 6094";
            description = "LBT 6094";
        };
        class paraclete
        {
            label = "Paraclete RAV";
            description = "Paraclete RAV";
        };
    };
    class camo
    {
        label = "Camo";
        values[] = {"alpine", "arid", "m81", "mcb", "mc", "mct", "tan", "grey", "od", "ph"};
        class alpine
        {
            label = "Alpine";
            description = "Alpine";
        };
        class arid
        {
            label = "Arid";
            description = "Arid";
        };
        class m81
        {
            label = "M81";
            description = "M81";
        };
        class mcb
       {
            label = "Multicam Black";
            description = "MCB";
        };
        class mc
        {
            label = "Multicam";
            description = "MC";
        };
        class mct
        {
            label = "Multicam Tropic";
            description = "MCT";
        };
        class tan
        {
            label = "Tan";
            description = "Tan";
        };
        class grey
        {
            label = "Gray";
            description = "Gray";
        };
        class od
        {
            label = "Olive Drab";
            description = "Olive Drab";
        };
        class ph
        {
            label = "Project Honor";
            description = "Project Honor";
        };
    };
};

class rtg_ace_expanded_avs {
    label = "AVS Vest";
    author = "Shrike";
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
        values[] = {"mcb", "mc", "mct", "tan", "grey", "od"};
        class mcb
       {
            label = "Multicam Black";
            description = "MCB";
        };
        class mc
        {
            label = "Multicam";
            description = "MC";
        };
        class mct
        {
            label = "Multicam Tropic";
            description = "MCT";
        };
        class tan
        {
            label = "Tan";
            description = "Tan";
        };
        class grey
        {
            label = "Gray";
            description = "Gray";
        };
        class od
        {
            label = "Olive Drab";
            description = "Olive Drab";
        };
    };
};

class rtg_ace_expanded_akvest {
    label = "Eastern Vests";
    author = "Shrike";
    options[] = {"equipment", "type", "camo"};
    class equipment
    {
        label = "Vest Equipment";
        values[] = {"N545", "N545gl", "N762", "N762gl", "SVD", "mg"};
        class N545
        {
            label = "5.45";
            description = "5.45";
        };
        class N545gl
        {
            label = "5.45 GL";
            description = "5.45 GL";
        };
        class N762
        {
            label = "7.62";
            description = "7.62";
        };
        class N762gl
        {
            label = "7.62 GL";
            description = "7.62 GL";
        };
        class SVD
        {
            label = "SVD";
            description = "SVD";
        };
        class mg
        {
            label = "MG";
            description = "MG";
        };
    };
    class type
    {
        label = "Vest Type";
        values[] = {"light", "heavy", "lbt6094", "paraclete"};
        class light
        {
            label = "Tactec Light";
            description = "Tactec Light";
        };
        class heavy
        {
            label = "Tactec Heavy";
            description = "Tactec Heavy";
        };
        class lbt6094
        {
            label = "LBT 6094";
            description = "LBT 6094";
        };
        class paraclete
        {
            label = "Paraclete RAV";
            description = "Paraclete RAV";
        };
    };
    class camo
    {
        label = "Camo";
        values[] = {"mc", "fg", "au", "blk"};
        class mc
        {
            label = "Multicam";
            description = "Multicam";
        };
        class fg
        {
            label = "Forest Green";
            description = "Forest Green";
        };
        class au
        {
            label = "Tan";
            description = "Tan";
        };
        class blk
       {
            label = "Black";
            description = "Black";
        };
    };
};