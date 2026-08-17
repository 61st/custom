params ["_prop"];

private _point = _prop getVariable ["SR_handsetPoint", []];
if !(_point isEqualType []) then {
    _point = [];
};
if (count _point == 3) exitWith {_point};

private _fallback = [0, -0.12, 0.2];
private _bounds = boundingBoxReal _prop;
if !(_bounds isEqualType [] && {count _bounds >= 2}) exitWith {_fallback};

private _boundingBoxMin = _bounds select 0;
private _boundingBoxMax = _bounds select 1;
private _centerOfMass = getCenterOfMass _prop;

private _targetInset = if (_prop isKindOf "AllVehicles") then {
    [
        (_boundingBoxMax select 0) * 0.5,
        _boundingBoxMin select 1,
        ((_centerOfMass select 2) * 0.8) max ((_boundingBoxMin select 2) + 0.05)
    ]
} else {
    [
        ((_boundingBoxMin select 0) + (_boundingBoxMax select 0)) * 0.5,
        _boundingBoxMin select 1,
        ((_centerOfMass select 2) * 0.8) max ((_boundingBoxMin select 2) + 0.05)
    ]
};

private _surfaceIntersections = lineIntersectsSurfaces [
    AGLToASL (_prop modelToWorld _targetInset),
    AGLToASL (_prop modelToWorld _centerOfMass),
    _prop,
    objNull,
    true,
    1,
    "GEOM",
    "NONE"
];

if (_surfaceIntersections isEqualTo []) exitWith {_fallback};

_prop worldToModel (ASLToAGL ((_surfaceIntersections select 0) select 0))
