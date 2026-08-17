if (!hasInterface) exitWith {};

[] spawn {
    private _player = ACE_player;
    private _playerStart = getPosATL _player;
    private _playerDir = getDir _player;

    private _testCases = [
        ["vehicle", "B_G_Quadbike_01_F", [0, 6, 0]],
        ["static", "Land_PortableLongRangeRadio_F", [3, 6, 0]]
    ];

    {
        _x params ["_label", "_className", "_offset"];

        private _spawnPos = _playerStart vectorAdd _offset;
        private _testObject = createVehicle [_className, _spawnPos, [], 0, "CAN_COLLIDE"];
        _testObject setDir _playerDir;
        _testObject setPosATL _spawnPos;

        ACE_player setVariable ["SR_connectedProp", _testObject];
        if !(_testObject isKindOf "AllVehicles") then {
            [_testObject] remoteExecCall ["SR_fnc_ensureRopeBaseHelper", 2];
            sleep 0.2;
        };
        [_testObject, 3] call SR_fnc_createLocalHandsetRope;
        sleep 0.5;

        private _handset = ACE_player getVariable ["SR_handsetObject", objNull];
        private _ropeId = ACE_player getVariable ["SR_handsetRope", nil];

        private _ropeCreated = !isNil "_ropeId";
        private _sampleStart = if (isNull _handset) then {[0, 0, 0]} else {getPosWorld _handset};
        private _maxTravel = 0;
        private _maxHeadDistance = 0;

        {
            _player setPosATL (_playerStart vectorAdd _x);
            sleep 0.15;

            if (!isNull _handset) then {
                private _samplePos = getPosWorld _handset;
                private _headPos = AGLToASL (_player modelToWorldVisual (_player selectionPosition "head"));
                _maxTravel = _maxTravel max (_samplePos distance _sampleStart);
                _maxHeadDistance = _maxHeadDistance max (_samplePos distance _headPos);
            };
        } forEach [
            [0.2, 0, 0],
            [0.4, 0, 0],
            [0.4, 0.2, 0],
            [0.2, 0.2, 0],
            [0, 0, 0]
        ];

        private _endpointMoved = _maxTravel > 0.15;
        private _endpointNearHead = _maxHeadDistance < 0.5;

        diag_log format [
            "[SR TEST] case=%1 class=%2 ropeCreated=%3 handsetType=%4 anchorType=%5 endpointMoved=%6 endpointNearHead=%7 maxTravel=%8 maxHeadDistance=%9",
            _label,
            typeOf _testObject,
            _ropeCreated,
            typeOf _handset,
            "<none>",
            _endpointMoved,
            _endpointNearHead,
            _maxTravel,
            _maxHeadDistance
        ];

        [_testObject] call SR_fnc_cleanupLocalSession;
        ACE_player setVariable ["SR_connectedProp", nil];
        if !(_testObject isKindOf "AllVehicles") then {
            [_testObject] remoteExecCall ["SR_fnc_releaseRopeBaseHelper", 2];
            sleep 0.1;
        };
        deleteVehicle _testObject;
        _player setPosATL _playerStart;
        _player setDir _playerDir;
        sleep 0.25;
    } forEach _testCases;

    systemChat "SR rope self-test complete. Check RPT for [SR TEST] lines.";
};
