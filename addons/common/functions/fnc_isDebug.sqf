/*
 *	ARMA EXTENDED ENVIRONMENT
 *	\ghost_common\functions\diagnostics\fn_isDebug.sqf
 *	by YonV
 *
 *	check if debug is enabled
 *
 *	Arguments:
 *	nothing
 *
 *	Return:
 *	<BOOLEAN>
 *
 *	Example:
 *	[] call ghost_common_fnc_isDebug;
 *
 */

// -------------------------------------------------------------------------------------------------

private _return = (missionNamespace getVariable ["ghost_debug_enabled", false]);

_return;
