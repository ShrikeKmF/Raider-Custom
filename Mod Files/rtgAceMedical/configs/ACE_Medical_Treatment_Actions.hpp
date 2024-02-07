class ace_medical_treatment_actions {
    class Morphine;
    class Pervitin: Morphine {
        displayName = "Take Super Serum";
        displayNameProgress = "Taking Super Serum";
        allowedSelections[] = {"Head"};
        allowSelfTreatment = 1;
        medicRequired = QGVAR(medLvl_Pervitin);
        treatmentTime = 2;
        items[] = {};
        litter[] = {};
        condition = "[_medic, 'kat_Pervitin'] call ace_common_fnc_hasMagazine || [_patient, 'kat_Pervitin'] call ace_common_fnc_hasMagazine";
        callbackSuccess = QFUNC(treatmentAdvanced_Pervitin);
        sounds[] = {{QPATHTO_R(sounds\take_painkillers.wav),5,1,15}};
    };

    class BasicBandage
	{
		treatmentTime = "0.5 * (call ace_medical_treatment_fnc_getBandageTime)";
	};
};
