[] spawn {
    _speedCoef = 0.85;
    while {true} do {
        sleep .05;
        {
            _x setAnimSpeedCoef _speedCoef;
        } forEach allUnits;
    };
};
