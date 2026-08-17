params ["_prop"];

private _bounds = boundingBoxReal _prop;
if !(_bounds isEqualType [] && {count _bounds >= 2}) exitWith {[_prop] call SR_fnc_getInteractionPoint};

private _boundingBoxMin = _bounds select 0;
if (_prop isKindOf "AllVehicles") then {
    private _boundingBoxMax = _bounds select 1;
    private _centerOfMass = getCenterOfMass _prop;
    private _targetInset = [
        (_boundingBoxMax select 0) * 0.5,
        _boundingBoxMin select 1,
        (((_centerOfMass select 2) * 0.35) max ((_boundingBoxMin select 2) + 0.05)) min 1
    ];

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

if (_surfaceIntersections isNotEqualTo []) exitWith {
    _prop worldToModel (ASLToAGL ((_surfaceIntersections select 0) select 0))
};
};

private _interactionPoint = [_prop] call SR_fnc_getInteractionPoint;
[
    _interactionPoint select 0,
    _interactionPoint select 1,
    _boundingBoxMin select 2
]
