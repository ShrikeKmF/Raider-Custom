class CfgFaces
{
    class Default
    {
        class Custom;
    };
    class Man_A3: Default
    {
        class WhiteHead_01;
        class rtg_Base_Face: WhiteHead_01
        {
            displayname = "Base";
            disabled = 1;
            identityTypes[] = {};
            texture = "Walker\data\drew_co.paa";
            head = "KerryHead_A3";
            material = "\A3\Characters_F\Heads\Data\m_White_06.rvmat";
            materialWounded1 = "A3\Characters_F\Heads\Data\m_White_05_injury.rvmat";
            materialWounded2 = "A3\Characters_F\Heads\Data\m_White_05_injury.rvmat";
            materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
            materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
        };
        class brewHead: rtg_Base_Face
        {
            displayname = "Brewsky";
            disabled = 0;
			
            textureHL = "\rtgEquipment\Textures\Custom Gear (Members)\Faces\tattoo_Brew.paa";
            textureHL2 = "\rtgEquipment\Textures\Custom Gear (Members)\Faces\tattoo_Brew.paa";
        };
        class fizzHead: rtg_Base_Face
        {
            displayname = "Fizz";
            disabled = 0;
			
            textureHL = "\rtgEquipment\Textures\Custom Gear (Members)\Faces\tattoo_Fizz.paa";
            textureHL2 = \rtgEquipment\Textures\Custom Gear (Members)\Faces\tattoo_Fizz.paa";
        };
    };
};
