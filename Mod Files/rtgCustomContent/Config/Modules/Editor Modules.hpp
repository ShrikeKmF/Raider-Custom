class Logic;
class Module_F: Logic
{
	class AttributesBase
	{
		class Default;
		class Edit;
		class Combo;
		class Checkbox;
		class CheckboxNumber;
		class ModuleDescription;
		class Units;
	};

	class ModuleDescription
	{
		class AnyBrain;
	};
};

class rtgChangeGroupFaction: Module_F
{
    scope = 2;
    displayName = "[RTG] Change Group Faction";
    category = "rtgModules";
    function = "/rtgCustomContent/Config/Modules/Functions/fn_changeFaction.sqf";
    functionPriority = 1;
    isGlobal = 0;
    isTriggerActivated = 0;
    isDisposable = 0;
    is3DEN = 1;
    curatorCanAttach = 1;

    class Attributes: AttributesBase
    {
        class Units: Units
        {
            property = "RTG_Module_ChangeFaction_Units";
        };

        class TargetFaction: Combo
        {
            property = "RTG_Module_ChangeFaction_TargetFaction";
            displayName = "Target Faction";
            tooltip = "Select the faction to convert the group to";
            typeName = "STRING";
            defaultValue = "OPF_F";

            class Values
            {
                class BLU_F { name = "BLUFOR"; value = "BLU_F"; };
                class OPF_F { name = "GREENFOR"; value = "OPF_F"; };
                class IND_F { name = "INDEPENDENT"; value = "IND_F"; };
            };
        };

        class ModuleDescription: ModuleDescription {};
    };

    class ModuleDescription: ModuleDescription
    {
        description = "Converts a synced group to a different faction";
        sync[] = {"AnyAI"};
    };
};

class rtgModuleAISkill: Module_F
{
	scope = 2;
	displayName = "[RTG] Set AI Skill";
	category = "rtgModules";
	function = "/rtgCustomContent/Config/Modules/Functions/fn_ModuleAISkill.sqf";
	functionPriority = 1;
	isGlobal = 0;
	isTriggerActivated = 0;
	isDisposable = 0;
	is3DEN = 1;
	curatorCanAttach = 1;

	class Attributes: AttributesBase
	{

		class Training: Combo
		{
			property = "rtgModuleAISkill_Training";
			displayName = "Training Level";
			tooltip = "Select training level for AI units";
			typeName = "STRING";
			defaultValue = "Trained";

			// Green, Milita, Trained, Veteran, SpecialForces
			class Values
			{
				class Green         { name = "Green";         value = "Green"; };
				class Milita       	{ name = "Milita";       value = "Milita"; };
				class Trained       { name = "Trained";       value = "Trained"; };
				class Veteran       { name = "Veteran";       value = "Veteran"; };
				class SpecialForces { name = "Special Forces"; value = "SpecialForces"; };
			};
		};

		class ModuleDescription: ModuleDescription {};
	};

	class ModuleDescription: ModuleDescription
	{
		description = "Assigns an AI training level.";
		sync[] = { "AnyBrain" };
	};
};

class rtgModulePathing: Module_F
{
	scope = 2;
	displayName = "[RTG] Disable Pathing";
	category = "rtgModules";
	function = "/rtgCustomContent/Config/Modules/Functions/fn_modulePathing";
	functionPriority = 1;
	isGlobal = 1;
	isTriggerActivated = 0;
	isDisposable = 0;
	is3DEN = 1;
	curatorCanAttach = 1;

	class ModuleDescription: ModuleDescription
	{
		description = "Stops synced units pathing.";
	};
};