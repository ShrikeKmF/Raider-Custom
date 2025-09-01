class CfgPatches
{
	class rtgEditorModules
	{
		units[] = { "rtgModuleAISkill", "rtgModulePathing" };
		requiredVersion = 1.0;
		requiredAddons[] = { "A3_Modules_F" };
	};
};

class CfgFactionClasses
{
	class NO_CATEGORY;
	class rtgModules: NO_CATEGORY
	{
		displayName = "[RTG] Modules";
	};
};

class CfgVehicles
{
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

	class rtgModuleAISkill: Module_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "[RTG] Set AI Skill";
		category = "rtgModules";
		function = "fn_moduleAISkill";
		functionPriority = 1;
		isGlobal = 1;
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
		function = "fn_modulePathing";
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
};
