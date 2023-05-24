class ace_medical_treatment_actions {
    class Epinephrine;
    class rtgSerum : Epinephrine {
        displayName = "Inject Super Serum";
        displayNameProgress = "Injecting Super Serum";
        icon = "\z\ace\addons\medical_gui\ui\auto_injector.paa";
        items[] = {"rtgSuperSerum"};
        litter[] = {{"ACE_MedicalLitter_epinephrine"}};
    };
};
