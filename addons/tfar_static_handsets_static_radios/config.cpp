class CfgPatches
{
	class SR_static_radios
	{
		name="TFAR Static Handsets";
		author="Eta";
		requiredVersion=2.1400001;
		requiredAddons[]=
		{
			"cba_main",
			"cba_settings",
			"A3_Modules_F",
			"A3_UI_F_Curator",
			"A3_Modules_F_Curator",
			"A3_3DEN",
			"ace_interact_menu",
			"ace_common",
			"tfar_core",
			"tfar_handhelds",
			"tfar_external_intercom",
			"tfar_static_radios"
		};
		units[]=
		{
			"SR_Module_StaticRadio"
		};
		weapons[]={};
	};
};
class CfgFactionClasses
{
	class SR_Modules
	{
		displayName="TFAR Static Handsets";
		priority=1;
		side=7;
	};
};
class CfgFunctions
{
	class SR
	{
		class static_radios
		{
			file="\z\lxim\addons\tfar_static_handsets_static_radios\functions";
			class addInteractions
			{
			};
			class allocateTempRadioId
			{
			};
			class applyRadioProfile
			{
			};
			class applyZeusSettings
			{
			};
			class buildPropSettings
			{
			};
			class canPickupHandset
			{
			};
			class cleanupHandsetObjects
			{
			};
			class cleanupLegacyUnitAttributes
			{
			};
			class cleanupLocalSession
			{
			};
			class cleanupTempHandsetRadios
			{
			};
			class clearClientSessionVars
			{
			};
			class clientConnect
			{
			};
			class clientDisconnect
			{
			};
			class clientNotify
			{
			};
			class compileFunctions
			{
			};
			class connectClientLr
			{
			};
			class connectClientSw
			{
			};
			class createLocalHandsetRope
			{
			};
			class devReload
			{
			};
			class disableStaticRadio
			{
			};
			class enforceLockedRadio
			{
			};
			class ensureRopeBaseHelper
			{
			};
			class finishTempSwConnect
			{
			};
			class getBackendHolder
			{
			};
			class getBackendRadio
			{
			};
			class getCodeMode
			{
			};
			class getConfiguredFrequency
			{
			};
			class getConfiguredRadioClass
			{
			};
			class getCurrentUser
			{
			};
			class getDefaultFrequencies
			{
			};
			class getHandsetPoint
			{
			};
			class getHandsetRange
			{
			};
			class getInteractionPoint
			{
			};
			class getPropSettings
			{
			};
			class initObject
			{
			};
			class initSettings
			{
			};
			class isStaticRadioObject
			{
			};
			class moduleStaticRadio
			{
			};
			class normalizeFrequencies
			{
			};
			class postInit
			{
			};
			class registerClientSessionHandlers
			{
			};
			class releaseTempRadioId
			{
			};
			class releaseRopeBaseHelper
			{
			};
			class removeClientHandlers
			{
			};
			class requestConnect
			{
			};
			class requestDisconnect
			{
			};
			class resetBackend
			{
			};
			class resolveCode
			{
			};
			class restoreSwRadioState
			{
			};
			class runRopeSelfTest
			{
			};
			class serverConnect
			{
			};
			class serverDisconnect
			{
			};
			class setPropSettings
			{
			};
			class startClientSessionMonitor
			{
			};
			class syncBackendObjects
			{
			};
		};
	};
};
class Cfg3DEN
{
	class Object
	{
		class AttributeCategories
		{
			class SR_StaticRadio
			{
				displayName="Static Radio";
				collapsed=1;
				class Attributes
				{
					class SR_StaticRadioEnabled
					{
						displayName="Static Radio State";
						tooltip="Enable or disable the TFAR-backed static radio on this prop.";
						property="SR_StaticRadioEnabled";
						control="Combo";
						expression="if !([_this] call SR_fnc_isStaticRadioObject) exitWith {}; private _srValue = _value; if !(_srValue isEqualType 0) then {_srValue = parseNumber str _srValue;}; _this setVariable ['SR_enabled', (_srValue > 0), true]; _this setVariable ['SR_radioClass', nil, true];";
						defaultValue="0";
						condition="objectVehicle + objectSimulated + objectHasInventoryCargo";
						typeName="NUMBER";
						class Values
						{
							class Disabled
							{
								name="Disabled";
								value=0;
								default=1;
							};
							class Enabled
							{
								name="Enabled";
								value=1;
							};
						};
					};
					class SR_StaticRadioFrequency
					{
						displayName="Frequency";
						tooltip="Single locked frequency used on the radio's active channel.";
						property="SR_StaticRadioFrequency";
						control="Edit";
						expression="if !([_this] call SR_fnc_isStaticRadioObject) exitWith {}; private _srValue = _value; if !(_srValue isEqualType 0) then {_srValue = parseNumber str _srValue;}; if (_srValue > 0) then {_this setVariable ['SR_frequency', _srValue, true];} else {_this setVariable ['SR_frequency', nil, true];}; _this setVariable ['SR_channel', 1, true]; _this setVariable ['SR_frequencies', nil, true];";
						defaultValue="missionNamespace getVariable ['SR_defaultFrequency', 50]";
						validate="number";
						condition="objectVehicle + objectSimulated + objectHasInventoryCargo";
						typeName="STRING";
					};
					class SR_StaticRadioSpeaker
					{
						displayName="Idle Speakers";
						tooltip="If enabled, the radio behaves like a world speaker when nobody is using the handset.";
						property="SR_StaticRadioSpeaker";
						control="Checkbox";
						expression="if !([_this] call SR_fnc_isStaticRadioObject) exitWith {}; _this setVariable ['SR_speakers', _value, true];";
						defaultValue="missionNamespace getVariable ['SR_defaultSpeakers', true]";
						condition="objectVehicle + objectSimulated + objectHasInventoryCargo";
						typeName="BOOL";
					};
					class SR_StaticRadioCodeMode
					{
						displayName="Encryption Code";
						tooltip="Select the TFAR encryption code source used by this radio.";
						property="SR_StaticRadioCodeMode";
						control="Combo";
						expression="if !([_this] call SR_fnc_isStaticRadioObject) exitWith {}; _this setVariable ['SR_codeMode', _value, true]; _this setVariable ['SR_code', nil, true];";
						defaultValue="missionNamespace getVariable ['SR_defaultCodeMode', 1]";
						condition="objectVehicle + objectSimulated + objectHasInventoryCargo";
						typeName="NUMBER";
						class Values
						{
							class Bluefor
							{
								name="BLUFOR";
								value=1;
								default=1;
							};
							class Indfor
							{
								name="INDFOR";
								value=2;
							};
							class Opfor
							{
								name="OPFOR";
								value=3;
							};
							class Civilian
							{
								name="Civilian";
								value=4;
							};
						};
					};
					class SR_StaticRadioVolume
					{
						displayName="Radio Volume";
						tooltip="TFAR radio volume applied to the hidden backend radio.";
						property="SR_StaticRadioVolume";
						control="Edit";
						expression="if !([_this] call SR_fnc_isStaticRadioObject) exitWith {}; private _srValue = _value; if !(_srValue isEqualType 0) then {_srValue = parseNumber str _srValue;}; if (_srValue > 0) then {_this setVariable ['SR_volume', (_srValue max 1) min 10, true];} else {_this setVariable ['SR_volume', nil, true];};";
						defaultValue="missionNamespace getVariable ['SR_defaultVolume', 7]";
						validate="number";
						condition="objectVehicle + objectSimulated + objectHasInventoryCargo";
						typeName="STRING";
					};
					class SR_StaticRadioHandsetPoint
					{
						displayName="Handset Point";
						tooltip="Model-space interaction point, for example [0,-0.12,0.2]. Leave empty to use automatic placement.";
						property="SR_StaticRadioHandsetPoint";
						control="Edit";
						expression="if !([_this] call SR_fnc_isStaticRadioObject) exitWith {}; private _point = []; if (_value != '') then { _point = call compile _value; }; if (_point isEqualType [] && {count _point == 3}) then { _this setVariable ['SR_handsetPoint', _point, true]; } else { _this setVariable ['SR_handsetPoint', nil, true]; };";
						defaultValue="''";
						condition="objectVehicle + objectSimulated + objectHasInventoryCargo";
						typeName="STRING";
					};
					class SR_StaticRadioHandsetRange
					{
						displayName="Handset Range";
						tooltip="Maximum distance in meters before the handset auto-hangs up.";
						property="SR_StaticRadioHandsetRange";
						control="Edit";
						expression="if !([_this] call SR_fnc_isStaticRadioObject) exitWith {}; private _srValue = _value; if !(_srValue isEqualType 0) then {_srValue = parseNumber str _srValue;}; if (_srValue > 0) then {_this setVariable ['SR_handsetRange', _srValue max 1, true];} else {_this setVariable ['SR_handsetRange', nil, true];};";
						defaultValue="missionNamespace getVariable ['SR_defaultHandsetRange', 3]";
						validate="number";
						condition="objectVehicle + objectSimulated + objectHasInventoryCargo";
						typeName="STRING";
					};
					class SR_StaticRadioIntercomLike
					{
						displayName="Intercom-Like Mode";
						tooltip="If enabled, picking up the handset immediately starts transmitting like TFAR external intercom. This works best with TFAR Full Duplex enabled.";
						property="SR_StaticRadioIntercomLike";
						control="Checkbox";
						expression="if !([_this] call SR_fnc_isStaticRadioObject) exitWith {}; _this setVariable ['SR_intercomLike', _value, true];";
						defaultValue="missionNamespace getVariable ['SR_defaultIntercomLike', true]";
						condition="objectVehicle + objectSimulated + objectHasInventoryCargo";
						typeName="BOOL";
					};
					class SR_StaticRadioConfigurable
					{
						displayName="Allow Player Reconfiguration";
						tooltip="If enabled, players can open and reconfigure the connected static radio instead of having its settings locked by the mission.";
						property="SR_StaticRadioConfigurable";
						control="Checkbox";
						expression="if !([_this] call SR_fnc_isStaticRadioObject) exitWith {}; _this setVariable ['SR_configurable', _value, true];";
						defaultValue="missionNamespace getVariable ['SR_defaultConfigurable', false]";
						condition="objectVehicle + objectSimulated + objectHasInventoryCargo";
						typeName="BOOL";
					};
				};
			};
		};
	};
};
class RscText;
class RscEdit;
class RscCombo;
class RscControlsGroupNoScrollbars;
class RscCheckBox;
class ButtonOK;
class ButtonCancel;
class Background;
class Title;
class Content;
class Controls;
class RscDisplayAttributes;
class RscAttributeSRStaticRadio: RscControlsGroupNoScrollbars
{
	idc=2611900;
	x="7 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2)) / 2)";
	y="5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2)) / 2)";
	w="26 * (((safezoneW / safezoneH) min 1.2) / 40)";
	h="7.3 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	class controls
	{
		class FreqTitle: RscText
		{
			idc=2611905;
			text="Frequency";
			x="0 * (((safezoneW / safezoneH) min 1.2) / 40)";
			y="0";
			w="9.5 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h="1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[]={0,0,0,0.5};
		};
		class FreqEdit: RscEdit
		{
			idc=2611906;
			x="9.6 * (((safezoneW / safezoneH) min 1.2) / 40)";
			y="0";
			w="15.6 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h="1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[]={1,1,1,0.1};
		};
		class SpeakerTitle: RscText
		{
			idc=2611909;
			text="Idle Speakers";
			x="0 * (((safezoneW / safezoneH) min 1.2) / 40)";
			y="0.9 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="9.5 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h="1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[]={0,0,0,0.5};
		};
		class SpeakerCheck: RscCheckBox
		{
			idc=2611910;
			text="#(argb,8,8,3)color(0,0,0,0)";
			x="9.6 * (((safezoneW / safezoneH) min 1.2) / 40)";
			y="0.9 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="1 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h="1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class CodeTitle: RscText
		{
			idc=2611911;
			text="Encryption Code";
			x="0 * (((safezoneW / safezoneH) min 1.2) / 40)";
			y="1.8 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="9.5 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h="1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[]={0,0,0,0.5};
		};
		class CodeCombo: RscCombo
		{
			idc=2611912;
			x="9.6 * (((safezoneW / safezoneH) min 1.2) / 40)";
			y="1.8 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="15.6 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h="1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class VolumeTitle: RscText
		{
			idc=2611913;
			text="Radio Volume";
			x="0 * (((safezoneW / safezoneH) min 1.2) / 40)";
			y="2.7 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="9.5 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h="1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[]={0,0,0,0.5};
		};
		class VolumeEdit: RscEdit
		{
			idc=2611914;
			x="9.6 * (((safezoneW / safezoneH) min 1.2) / 40)";
			y="2.7 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="15.6 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h="1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[]={1,1,1,0.1};
		};
		class RangeTitle: RscText
		{
			idc=2611915;
			text="Handset Range";
			x="0 * (((safezoneW / safezoneH) min 1.2) / 40)";
			y="3.6 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="9.5 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h="1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[]={0,0,0,0.5};
		};
		class RangeEdit: RscEdit
		{
			idc=2611916;
			x="9.6 * (((safezoneW / safezoneH) min 1.2) / 40)";
			y="3.6 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="15.6 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h="1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[]={1,1,1,0.1};
		};
		class IntercomLikeTitle: RscText
		{
			idc=2611917;
			text="Intercom-Like Mode";
			x="0 * (((safezoneW / safezoneH) min 1.2) / 40)";
			y="4.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="9.5 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h="1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[]={0,0,0,0.5};
		};
		class IntercomLikeCheck: RscCheckBox
		{
			idc=2611918;
			text="#(argb,8,8,3)color(0,0,0,0)";
			x="9.6 * (((safezoneW / safezoneH) min 1.2) / 40)";
			y="4.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="1 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h="1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ConfigurableTitle: RscText
		{
			idc=2611919;
			text="Allow Player Reconfiguration";
			x="0 * (((safezoneW / safezoneH) min 1.2) / 40)";
			y="5.4 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="9.5 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h="1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[]={0,0,0,0.5};
		};
		class ConfigurableCheck: RscCheckBox
		{
			idc=2611920;
			text="#(argb,8,8,3)color(0,0,0,0)";
			x="9.6 * (((safezoneW / safezoneH) min 1.2) / 40)";
			y="5.4 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="1 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h="1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
};
class RscDisplayAttributesModuleSRStaticRadio: RscDisplayAttributes
{
	onLoad="[""onLoad"", _this, ""RscDisplayAttributesModuleSRStaticRadio""] call (compile preprocessFileLineNumbers ""\a3\ui_f_curator\UI\Displays\RscDisplayAttributes.sqf"")";
	onUnload="[""onUnload"", _this, ""RscDisplayAttributesModuleSRStaticRadio""] call (compile preprocessFileLineNumbers ""\a3\ui_f_curator\UI\Displays\RscDisplayAttributes.sqf"")";
	class Controls: Controls
	{
		class Background: Background
		{
		};
		class Title: Title
		{
			text="Configure Static Radio";
		};
		class Content: Content
		{
			class Controls: Controls
			{
				class StaticRadioSettings: RscAttributeSRStaticRadio
				{
				};
			};
		};
		class ButtonOK: ButtonOK
		{
			onLoad="_this call SR_fnc_moduleStaticRadio";
		};
		class ButtonCancel: ButtonCancel
		{
		};
	};
};
class CfgVehicles
{
	class Module_F;
	class SR_Module_StaticRadio: Module_F
	{
		author="Eta";
		scope=1;
		scopeCurator=2;
		displayName="Static Radio";
		category="SR_Modules";
		curatorCanAttach=1;
		isGlobal=1;
		isTriggerActivated=0;
		functionPriority=1;
		curatorInfoType="RscDisplayAttributesModuleSRStaticRadio";
	};
};
class Extended_PreInit_EventHandlers
{
	class SR_static_radios
	{
		init="call compile preprocessFileLineNumbers '\z\lxim\addons\tfar_static_handsets_static_radios\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class SR_static_radios
	{
		init="call SR_fnc_postInit";
	};
};
class Extended_InitPost_EventHandlers
{
	class ThingX
	{
		class SR_StaticRadio
		{
			init="_this call SR_fnc_initObject";
		};
	};
	class Thing
	{
		class SR_StaticRadio
		{
			init="_this call SR_fnc_initObject";
		};
	};
	class Static
	{
		class SR_StaticRadio
		{
			init="_this call SR_fnc_initObject";
		};
	};
	class House_F
	{
		class SR_StaticRadio
		{
			init="_this call SR_fnc_initObject";
		};
	};
	class ReammoBox_F
	{
		class SR_StaticRadio
		{
			init="_this call SR_fnc_initObject";
		};
	};
};
