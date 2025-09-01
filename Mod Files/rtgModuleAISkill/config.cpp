class CfgPatches
{
	class TAG_ModuleAISkill
	{
		units[] = { "TAG_ModuleAISkill" };
		requiredVersion = 1.0;
		requiredAddons[] = { "A3_Modules_F" };
	};
};

class CfgFactionClasses
{
	class NO_CATEGORY;
	class TAG_RaiderTacticalGroup: NO_CATEGORY
	{
		displayName = "Raider Tactical Group";
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

	class TAG_ModuleAISkill: Module_F
	{
		scope = 2;
		displayName = "AI Skill Training";
		category = "TAG_RaiderTacticalGroup";

		function = "TAG_fnc_moduleAISkill";
		functionPriority = 1;
		isGlobal = 1;
		isTriggerActivated = 0;
		isDisposable = 0;
		is3DEN = 1;
		curatorCanAttach = 1;

		class Attributes: AttributesBase
		{
			class Side: Combo
			{
				property = "TAG_ModuleAISkill_Side";
				displayName = "Side";
				tooltip = "Select which faction this training applies to";
				typeName = "STRING";
				defaultValue = """BLUFOR""";

				class Values
				{
					class BLUFOR { name = "BLUFOR"; value = "west"; };
					class OPFOR  { name = "OPFOR";  value = "east";  };
					class GRNFOR { name = "GRNFOR"; value = "resistance"; };
				};
			};

			class Training: Combo
			{
				property = "TAG_ModuleAISkill_Training";
				displayName = "Training Level";
				tooltip = "Select training level for AI units";
				typeName = "STRING";
				defaultValue = """Trained""";

				// Green, Milita, Trained, Veteran, SpecialForces
				class Values
				{
					class Green         { name = "Green";         value = "Green"; };
					class Militia       { name = "Militia";       value = "Militia"; };
					class Trained       { name = "Trained";       value = "Trained"; };
					class Veteran       { name = "Veteran";       value = "Veteran"; };
					class SpecialForces { name = "Special Forces"; value = "SpecialForces"; };
				};
			};

			class ModuleDescription: ModuleDescription {};
		};

		class ModuleDescription: ModuleDescription
		{
			description = "Assigns an AI training level to the chosen faction.";
			sync[] = { "AnyBrain" };
		};
	};
};
