#include "script_component.hpp"
if (isServer) then {
	LXIM_dynamicGroups = getArray(missionConfigFile >> "Dynamic_Groups" >> "group_setup");
	{
		_x params ["","_roles"];
		_x pushBack grpNull;

		private _roleCount = count _roles;
		private _playerArray = [];
		for "_i" from 1 to _roleCount do {
			_playerArray pushBack objNull;
		};
		_x pushBack _playerArray;
	} forEach LXIM_dynamicGroups;

	[LXIM_dynamicGroups] remoteExecCall [QFUNC(updateGroups),-2,"LXIM_DG_JIP"];

	addMissionEventHandler ["HandleDisconnect",FUNC(handleDisconnect)];
};