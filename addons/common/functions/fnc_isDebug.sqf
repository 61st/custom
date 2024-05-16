/*
 *	ARMA EXTENDED ENVIRONMENT
 *	\sixtyone_common\functions\diagnostics\fn_isDebug.sqf
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
 *	[] call sixtyone_common_fnc_isDebug;
 *
 */

// -------------------------------------------------------------------------------------------------

private _return = (missionNamespace getVariable ["sixtyone_debug_enabled", false]);

_return;
