params [["_frequencies", call SR_fnc_getDefaultFrequencies, [[]]]];

if !(_frequencies isEqualType []) exitWith {
    + (call SR_fnc_getDefaultFrequencies)
};

private _defaults = call SR_fnc_getDefaultFrequencies;
private _normalized = [];

{
    private _raw = _x;
    private _fallback = _defaults param [_forEachIndex, 50];
    private _value = _fallback;

    if (_raw isEqualType 0) then {
        if (_raw isEqualTo floor _raw) then {
            _value = floor _raw;
        } else {
            _value = _raw;
        };
    } else {
        private _text = str _raw;
        private _parsed = parseNumber _text;

        if !((_parsed == 0) && {(_text find "0") != 0}) then {
            if (_parsed isEqualTo floor _parsed) then {
                _value = floor _parsed;
            } else {
                _value = _parsed;
            };
        };
    };

    _normalized pushBack _value;
} forEach _frequencies;

_normalized
