

#include "script_component.hpp"

_playerUID = getPlayerUID player;

private _uidToName = [
    ["76561198000002705", "us_yonv"],
    ["76561198176590682", "us_carnage"],
    ["76561198068010293", "us_cury"],
    ["76561197997401356", "us_banjo"],
    ["76561198309279053", "us_bigfoot"],
    ["76561198064770218", "us_carnage"],
    ["76561198031991563", "us_dark"],
    ["76561198420345263", "us_delta"],
    ["76561198436112770", "us_finney"],
    ["76561198172117786", "us_flak"],
    ["76561198239878366", "us_fry"],
    ["76561199164737010", "us_invalid"],
    ["76561198233684600", "us_mac"],
    ["76561198272295607", "us_mashed"],
    ["76561198332977952", "us_mendez"],
    ["76561198125390169", "us_midlightt"],
    ["76561199004329880", "us_money"],
    ["76561198149963889", "us_monk"],
    ["76561198311674523", "us_muffins"],
    ["76561199501189993", "us_nightmare"],
    ["76561198138033132", "us_rock"],
    ["76561198989999596", "us_sierra"],
    ["76561198078542421", "us_terminator"],
    ["76561198125989282", "us_bulck"],
    ["76561198098568997", "us_onscreeneel"],
    ["76561198045342621", "us_wilder"],
    ["76561199153445272", "us_abstract"],
    ["76561198422262967", "us_werebear"],
    ["76561198083979010", "us_sora"],
    ["76561198332567290", "us_teru"],
    ["76561198206345929", "us_raven"],
    ["76561198060346334", "us_saika"],
    ["76561198263340747", "us_rexican"],
    ["76561198088548222", "us_aesop"],
    ["76561199081818170", "us_graham"],
    ["76561198227272616", "us_luda"],
    ["76561197983771505", "us_holloway"],
    ["76561198354375612", "us_thirsty"],
    ["76561198043626452", "us_goose"],
    ["76561199053597963", "us_panzer"],
    ["76561198277597338", "us_buck"],
    ["76561198175908683", "us_void"],
    ["76561198024628957", "us_lurburk"],
    ["76561198206345929", "us_viper"]
];

private _getNameFromUID = {
    params ["_uid"];
    (_uidToName select { _x select 0 == _uid }) param [0, ["", ""]] select 1;
};

private _name = [_playerUID] call _getNameFromUID;
if (_name == "") exitWith {};

format ["addons/media/images/names/%1.paa", _name];

