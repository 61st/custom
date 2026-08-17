[
    "SR_defaultLongRangeRadioClass",
    "EDITBOX",
    ["Default Long Range Radio", "TFAR LR backpack class used for all static radios."],
    "TFAR Static Handsets",
    "TFAR_rt1523g",
    1,
    {
        missionNamespace setVariable [
            "SR_defaultLongRangeRadioClass",
            ["TFAR_rt1523g", _this] select (_this call TFAR_fnc_isLRRadio)
        ];
    }
] call CBA_Settings_fnc_init;

[
    "SR_defaultIntercomLike",
    "CHECKBOX",
    ["Default Intercom-Like Mode", "If enabled, picking up the handset immediately starts transmitting like TFAR external intercom. This works best with TFAR Full Duplex enabled."],
    "TFAR Static Handsets",
    true,
    1,
    {
        missionNamespace setVariable ["SR_defaultIntercomLike", _this];
    }
] call CBA_Settings_fnc_init;

[
    "SR_defaultConfigurable",
    "CHECKBOX",
    ["Default Configurable Radios", "If enabled, players can open and reconfigure a static radio while connected to it. Disabled radios stay locked to mission settings."],
    "TFAR Static Handsets",
    false,
    1,
    {
        missionNamespace setVariable ["SR_defaultConfigurable", _this];
    }
] call CBA_Settings_fnc_init;

[
    "SR_defaultFrequency",
    "EDITBOX",
    ["Default Frequency", "Default static radio frequency used for the single locked channel."],
    "TFAR Static Handsets",
    "50",
    1,
    {
        private _value = parseNumber str _this;
        if (_value <= 0) then {
            _value = 50;
        };
        missionNamespace setVariable ["SR_defaultFrequency", _value];
    }
] call CBA_Settings_fnc_init;

[
    "SR_defaultCodeMode",
    "LIST",
    ["Default Encryption Side", "Default TFAR encryption side used for new static radios."],
    "TFAR Static Handsets",
    [[1, 2, 3, 4], ["BLUFOR", "INDFOR", "OPFOR", "Civilian"], 1],
    1,
    {
        missionNamespace setVariable ["SR_defaultCodeMode", _this];
    }
] call CBA_Settings_fnc_init;

[
    "SR_defaultSpeakers",
    "CHECKBOX",
    ["Default Idle Speakers", "Whether new static radios start with speakers enabled."],
    "TFAR Static Handsets",
    true,
    1,
    {
        missionNamespace setVariable ["SR_defaultSpeakers", _this];
    }
] call CBA_Settings_fnc_init;

[
    "SR_defaultVolume",
    "SLIDER",
    ["Default Volume", "Default TFAR volume for new static radios."],
    "TFAR Static Handsets",
    [1, 10, 7, 0],
    1,
    {
        missionNamespace setVariable ["SR_defaultVolume", round _this];
    }
] call CBA_Settings_fnc_init;

[
    "SR_defaultHandsetRange",
    "SLIDER",
    ["Default Handset Range", "Default maximum handset cable range in meters."],
    "TFAR Static Handsets",
    [1, 10, 3, 1],
    1,
    {
        missionNamespace setVariable ["SR_defaultHandsetRange", _this];
    }
] call CBA_Settings_fnc_init;
