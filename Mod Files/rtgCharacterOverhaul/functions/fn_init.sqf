[] spawn {
    _speedCoef = 0.82;
    while {true} do {
        sleep .05;
        {
            _x setAnimSpeedCoef _speedCoef;
        } forEach allUnits;
    };
};
