if (!hasInterface) exitWith {false};

private _savedActiveSwRadio = ACE_player getVariable ["SR_savedActiveSwRadio", ""];
if (_savedActiveSwRadio == "") exitWith {false};

private _allRadios = ACE_player call TFAR_fnc_radiosList;
if !(_savedActiveSwRadio in _allRadios) exitWith {false};
if ((call TFAR_fnc_activeSwRadio) == _savedActiveSwRadio) exitWith {false};

[_savedActiveSwRadio] call TFAR_fnc_setActiveSwRadio;
TFAR_lastLoadoutChange = diag_tickTime;
true
