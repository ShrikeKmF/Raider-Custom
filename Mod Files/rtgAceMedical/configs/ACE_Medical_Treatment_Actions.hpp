class ace_medical_treatment_actions {
    class Morphine;
    class Pervitin: Morphine {
        displayName = "Inject Super Serum";
        displayNameProgress = "Injecting Super Serum";
        allowedSelections[] = {"Head"};
        allowSelfTreatment = 1;
        treatmentTime = 1;
    };

    class BasicBandage
	{
		treatmentTime = "0.45 * (call ace_medical_treatment_fnc_getBandageTime)";
	};
};
