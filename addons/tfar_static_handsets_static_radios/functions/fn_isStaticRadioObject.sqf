params [["_object", objNull, [objNull]]];

if (isNull _object) exitWith {false};
if (_object isKindOf "CAManBase") exitWith {false};
if (_object isKindOf "Logic") exitWith {false};
if (getArray (configOf _object >> "agentTasks") isNotEqualTo []) exitWith {false};

true
