class CfgFaces
{
	class Default
	{
		class Custom;
	};
	class Man_A3: Default
	{
		class WhiteHead_01;
		class brewHead: WhiteHead_01
		{
			displayname = "Brewsky";
			disabled = 0;
			
            identityTypes[] = {};
            texture = "Walker\data\drew_co.paa";
			head = "KerryHead_A3";
            material = "\A3\Characters_F\Heads\Data\m_White_06.rvmat";
            materialWounded1 = "A3\Characters_F\Heads\Data\m_White_05_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_05_injury.rvmat";
            materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
            materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
            textureHL = "rtgEquipment\tex\tattoo_Brew.paa";
            textureHL2 = "rtgEquipment\tex\tattoo_Brew.paa";
		};
        class fizzHead: brewHead
		{
			displayname = "Fizz";
			disabled = 0;
			
            identityTypes[] = {};
            texture = "Walker\data\drew_co.paa";
			head = "KerryHead_A3";
            material = "\A3\Characters_F\Heads\Data\m_White_06.rvmat";
            materialWounded1 = "A3\Characters_F\Heads\Data\m_White_05_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_05_injury.rvmat";
            materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
            materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
            textureHL = "rtgEquipment\tex\tattoo_Fizz.paa";
            textureHL2 = "rtgEquipment\tex\tattoo_Fizz.paa";
		};
    };
};
