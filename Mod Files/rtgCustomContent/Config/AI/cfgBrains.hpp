class CfgBrains {
    class DefaultSoldierBrain {
        class Components {
            class AIBrainSuppressionComponent {
                worstDecreaseTime = 35.0;   // in seconds for 0.0 skill
                bestDecreaseTime = 10.0;     // in seconds for 1.0 skill
                causeExplosionWeight = 1.5; //
            };
            class AIBrainAimingErrorComponent {
                worstDecreaseTime = 4.5; // how long (in seconds) it should take 0.0 skilled soldier to stabilize the aim completely
                bestDecreaseTime = 1.5; // how long (in seconds) it should take 1.0 skilled soldier to stabilize the aim completely
                turningInfluence = 1.35; // importance of turning in algorithm, multiplier
            };
        };
    };
};