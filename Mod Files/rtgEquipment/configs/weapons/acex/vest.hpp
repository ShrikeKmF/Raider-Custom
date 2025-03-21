class rtg_ace_expanded_vest {
    label = "VSM Vest";
    
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