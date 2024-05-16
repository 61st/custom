params ["_object", "_selection", "_turnOn", "_args"];

if (_turnOn) then {
	[_object, _selection, _args] call sixtyone_commandcenter_fnc_configureScreen;
} else {
	_object setVariable [format ["SIXTYONE_CC_screen_%1_on", _selection], false, true];
	_object setObjectTextureGlobal [_selection, "z\sixtyone\Addons\Media\images\cc_screen_standby.paa"];

	[_object, _selection] remoteExec ["sixtyone_commandcenter_fnc_deleteCamera", 0];
};