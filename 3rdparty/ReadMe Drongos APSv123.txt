Drongo's Active Protection System
for Arma 3
v1.23

by Drongo
1 Feb 2024

Discord for my mods: https://discord.gg/XSRHPEd

REQUIREMENTS
CBA
Arma 3


KEYS
Alt-A: Open APS dialog (display APS type/status, remaining charges. Click on type to toggle on/off)


OVERVIEW
DAPS is an SP/MP mod for Arma 3 that adds Active Protection Systems (APS) to vehicles. These systems allow vehicles to intercept incoming rockets, missiles and shells. When the APS triggers, players crewing the vehicle will get a direction indicator warning. The APS will also deploy smoke if the vehicle has smoke launchers and turn the turret to face the direction the shot came from. The systems have a minimum engagement range (30 meters for most systems). APS effectiveness is limited by vertical angle (45 degrees by default).

DAPS also includes DIRCM missile defence systems for aircraft.

By default, vanilla Arma 3 MRAPs, IFVs and MBTs, some RHS vehicles and some CUP and MEC vehicles are protected. Vehicles from mods can easily be added by mission editors (see below).

When vehicles rearm at ammo trucks etc, they will automatically rearm their APS.

The player can get a brief report on their type of APS and remaining charges by hitting their DAPS key (cycle throwables by default). Also, this key will attempt to rearm the APS on the player vehicles if a supply unit is nearby.

DAPS includes 15 types of APS:

Light: Protection from rockets (2 charges). 20 meter MDD (Minimum Defeat Distance).
Medium: Protection from rockets and missiles (4 charges). 20 meter MDD.
Heavy: Protection from rockets, missiles and tank shells (6 charges). 20 meter MDD.
Trophy LV: Protection from rockets (4 charges left, 4 charges right). 30 meter MDD.
Trophy MV: Protection from rockets and missiles (3 charges left, 3 charges right). 30 meter MDD.
Trophy HV: Protection from rockets and missiles (5 charges left, 5 charges right). 30 meter MDD.
Trophy HVe: Protection from rockets, missiles and shells (5 charges left, 5 charges right). 30 meter MDD.
Dazzler: Protection from rockets and missiles that use IR or laser guidance (unlimited charges).
Arena: Protection from rockets and missiles (11 charges each side, only covers the front 300 degrees). 30 meter MDD.
Drozd: Protection from rockets and missiles (4 charges each side, only covers the front 60 degrees). 30 meter MDD.
Drozd-2: Protection from rockets and missiles (4 charges each side, only covers the front 120 degrees). 30 meter MDD.
Afganit: Protection from rockets, missiles (5 charges each side, only covers the front 120 degrees). 30 meter MDD.
AfganitE: Protection from rockets, missiles and shells (5 charges each side, only covers the front 120 degrees). 30 meter MDD.
Iron Fist: Protection from rockets and missiles (2 charges left, 2 charges right). 50 meter MDD.
AMAP-ADS: Protection from rockets and missiles and (possibly) HE shells (5 charges left, 5 charges right). 5 meter MDD.

The light, medium and heavy APS are not specifically based on any real-world system, but are intended as generalizations of various systems in use or development. They provide 360 degree protection.

Vanilla NATO and AAF MRAPs use Trophy LV.
Vanilla NATO and AAF IFVs use Trophy MV.
NATO MBTs use Trophy HV.
AAF MBTs use AMAP-ADS.
Vanilla MRAPs use Light.
Vanilla CSAT IFVs use Medium.
The T-100 uses Drozd-2.
The T-140 uses AfganitE.
Some RHS M1 MBT variants use Trophy HV.
Some RHS M2 IFV variants use Trophy MV.
CUP and MEC T-90s use dazzler.
MEC T-72s use dazzler.

As of 0.86 the following vehicles are added (thanks xxsogramboxx):

Trophy HV:
Burnes_M1A1_MEU_01_Public
Burnes_M1A1_MEU_02_Public
EUSAD_CE_leopard_2A7
EUSAD_DAGUET_leopard_2A7
sfp_strv122
sfp_strv122b
BWA3_Leopard2_Tropen
BWA3_Leopard2_Fleck

Iron Fist:
Burnes_FV4034_01
Burnes_FV4034_02

Afganit:
rhs_t90am_tv
rhs_t90sm_tv

Arena, Drozd, Drozd-2 and Afganit/AfganitE can not engage top-attack missiles (basically missiles that are 2 or more meters higher than the vehicle).

AfganitE and TrophyHVe are capable of stopping tank rounds.

AMAP-ADS is capable of stopping HE tank rounds.

The dazzler does not destroy incoming projectiles, but rather causes those that use IR or laser guidance to veer away and (hopefully) miss the vehicle. Dazzlers have unlimited charges.

Outgoing fire and low-caliber weapons should not trigger the APS. Be warned that firing RPGs while standing next to a friendly vehicle with APS may trigger the friendly APS.

Various modules are provided for managing the system.


DIRCM
https://en.wikipedia.org/wiki/Directional_Infrared_Counter_Measures

There are also DIRCM systems for many aircraft. NATO and AAF use the Nemesis system, CSAT uses Vitebsk. Nemesis can jam IR guided missiles, Vitebsk can jam IR and laser guided missiles. Both systems work in a 360 degree arc and can deflect up to three missiles at once. If the vehicle with the DIRCM takes over 30% damage, the system will be considered damaged and cease functioning.


FORCE RECHECK
Use the Force Recheck module in Zeus to force the system to attempt to register vehicles on which APS did not start properly.


EDITING
Use the DAPS Options module and the Assign APS type to edit which vehicles have which APS.


ASSIGN APS TYPE
Sync empty dummy vehicles to this module. The type of vehicles synced will all be assigned APS of the type selected in the drop-down menu.


ASSIGNING APS TO ONLY ONE VEHICLE BY SCRIPT
This must happen on the server.

_vehicle setVariable["dapsCanSmoke",1,TRUE];
Choose:
_vehicle spawn DAPS_fnc_APSlight;
_vehicle spawn DAPS_fnc_APSmedium;
_vehicle spawn DAPS_fnc_APSheavy;
_vehicle spawn DAPS_fnc_APSTrophyLV;
_vehicle spawn DAPS_fnc_APSTrophyMV;
_vehicle spawn DAPS_fnc_APSTrophyHV;
_vehicle spawn DAPS_fnc_APSTrophyHVe;
_vehicle spawn DAPS_fnc_APSArena;
_vehicle spawn DAPS_fnc_APSDazzler;
_vehicle spawn DAPS_fnc_APSDrozd;
_vehicle spawn DAPS_fnc_APSDrozd2;
_vehicle spawn DAPS_fnc_APSAfganit;
_vehicle spawn DAPS_fnc_APSAfganitE;
_vehicle spawn DAPS_fnc_APSIronFist;
_vehicle spawn DAPS_fnc_APSAMAP;
_vehicle spawn DAPS_fnc_Vitebsk;
_vehicle spawn DAPS_fnc_Nemesis;


EXCLUDING AMMO TYPES
Use this code:

waitUntil{!(isNil"dapsExcludedAmmo")};
dapsExcludedAmmo pushBack "cfgAmmo_classname";
publicVariable"dapsExcludedAmmo";


MISC
There is a gvar named dapsHitLimit which limits the ability of all APS to intercept. The default value is:

dapsHitLimit=2000;

If adjusted, the new value must be set on all clients.


REARMING
Move near a supply vehicle and press the APS dialog key (alt-A by default).


TURNING VEHICLE APS ON/OFF
Open the APS dialog and click on the APS type.


REPORTING BUGS
Please read all of the latest readme. Test with no other mods loaded. Provide detailed error reports and reproduction steps.


THEFT OF MY WORK
My artillery mod was stolen, edited and re-released in violation of the license by BlackAlpha of tier1ops.eu. Here is a video showing my original work and his stolen edit:

https://www.youtube.com/watch?v=Oe7G6WwxQVU

Please share this video and let the community know that BlackAlpha and tier1ops.eu are thieves.


LICENSE
Arma Public License Share Alike (APL-SA)
Brief summary of this Licence

PLEASE, NOTE THAT THIS SUMMARY HAS NO LEGAL EFFECT AND IS ONLY OF AN INFORMATORY NATURE DESIGNED FOR YOU TO GET THE BASIC INFORMATION ABOUT THE CONTENT OF THIS LICENCE. THE ONLY LEGALLY BINDING PROVISIONS ARE THOSE IN THE ORIGINAL AND FULL TEXT OF THIS LICENCE.

With this licence you are free to adapt (i.e. modify, rework or update) and share (i.e. copy, distribute or transmit) the material under the following conditions:

    Attribution - You must attribute the material in the manner specified by the author or licensor (but not in any way that suggests that they endorse you or your use of the material).
    Noncommercial - You may not use this material for any commercial purposes.
    Arma Only - You may not convert or adapt this material to be used in other games than Arma.
    Share Alike - If you adapt, or build upon this material, you may distribute the resulting material only under the same license.

https://www.bohemia.net/community/licenses/arma-public-license-share-alike

In addition, this addon and derivatives thereof may not be used for any purpose by government, military, law enforcement or security groups or individuals. This addon and derivatives thereof may not be used by anyone associated with tier1ops.eu.

If you need an exception, please contact me.


CREDITS
Drongo:			Concept and coding.
Chops:			Testing and input.
James:			Testing, some graphics and video.
Larrow:			Original blast effect script.
Damian:			Info about IRL APS.
Gravekeeper:	Detailed bug-fix advice.
crusaderyn:		Input about MDD.
VedKay:			Warning indicator

Thanks of VedKay for my snazzy new logo.

A huge thanks to my Patrons and supporters:
Ahmad Fadhil Mohamed
Alexander Isaksson Norum
Alex Lacy
Andreas Nilson
Ave Sum
Azza
B. Hinton
Beags and Jam
Ben_at_Arms
Berl Ancell
Bretto1945
Bret Bothelio
Bruno Roberto Corrêa
Bullrich von Salz
Cedric Oliver
Chris Hall
Daniel
Daniel Selby
David Catley
David Husa
David Kudýn
DavidSköld
Declan Emery
Desmond Abrams
Doctor
Elliot Taylor
EO
Fearmonger
Fetus114
Ferdinand
Frédérick Milhomme
Frosties
Gary Jackson
Gordon
gsg94490
Haakon Longbeard
Hogosha
Ian Schonely
Its_the_Jonah
James Hill
James tribbles
Jason Dotson
Jason Kieft
Jayrad
Jessica Ferguson
JimmyJamJams
Jonathan Harris
Karol Zaczek
Kelvin P
Kenneth Kilvington
Kevin Kelly
Logan Scott
LONEWOLF352
Longbeard
Marshall Bouldin
Matt Henderson
Magoo
MoonGuy
Nam
Nicholas Auger
Nicholas Odgers
Nick Gregory
Ole Petter Johnsen
Owen Siegfried
Paramarine Task Force
Paul T
Pernox
PHILLIP HARRIS
Proxno
Pusu npt
Ryan
Rolly uk
Roman Martinez
Sean Martin
sebastiaan reedijk
SETH BARCELLO
Sly
Slav_Man_Shae
Sonny Hermansen
Stuart Burling
swagggenius
Terrance
The One on the Rock
Timothy Hill
Tim O’Ceallaigh
Totem
tunou xiong
VedKay
ViperBAT46 DTF46
Wulf
WW3andMe
YonV
Zakuaz


KNOWN BUGS
The system will sometimes not have time to detect and stop the incoming projectile in the following situations:
 - the launch is at very close range 
 - the projectile is very fast-moving (ie. sabot tank rounds)
 - FPS is low


CHANGELOG
1.23
Fixed:		Bug with assigning AMAP-ADS by module

1.22
Added:		APS can be limited by vertical angle (45deg by default)
Added:		More options to Options module
Added:		Numerous 3rd party vehicles
Fixed:		Vanilla secondary explosions triggering APS that can intercept shells

1.211
Added:		Vitebsk to [Da] Ka-52 (2011)

1.21
Improved:	Performance improvements (thanks to MrThomasM)

1.2
Fixed:		(Possibly) Remaining APS charges going into negatives sometimes in MP

1.19
Added:		Added several vehicles from JFXAM [ESP]'s Japan 2035 mod
Added:		Alt-A now opens an APS dialog
Removed:	Cycle throwables/pistol keybinds for APS functions

1.18
Added:		Trophy HV to RHS M1A2 SEP V2 tanks
Fixed:		DIRCM failed to detect some IR missiles

1.17
Fixed:		ACE damage values were preventing APS from intercepting some ammunition types

1.16
Added:		Vitebsk DIRCM to many aircraft
Added:		Nemesis DIRCM to many aircraft
Fixed:		Many systems now also detect submunition ammo classes
Improved:	Dazzler code

1.15
Changed:	All APS monitor scripts shifted to server (instead of where vehicle is local)

1.14
Added:		Key to turn current APS on/off
Added:		Force Recheck Zeus module
Changed:	DAPS report key is now bound to the cycle throwables key
Fixed:		Ammo deduction bug with generic light, medium and heavy APS
Fixed:		APS triggering multiple times for the same projectile
Fixed:		Miscellaneous bugs

1.12
Added:		Unique key
Added:		Support for Western Sahara CDLC vehicles
Added:		Support for PLA Armored Vehicles Pack
Added:		Dazzler to CUP BMP-3

1.11
Fixed:		Bug with the Dazzler script (thanks nerexis)

1.0
Added:		Options module
Added:		Threat direction indicator and warning sound
Changed:	General overhaul of system
Changed:	Removed many management scripts (use modules instead)
Fixed:		Various minor issues
Removed:	Clear all APS module
Removed:	Management dialog

0.9
Changed:	APS can be applied to any unit type
Fixed:		Minor bugfix

0.89
Changed:	Slight code optimization
Changed:	License now modified APL-SA

0.88
Added:		Module to clear all APS types
Added:		Module to add any APS type to any vehicle

0.87
Added:		Reduced publicVariable calls to reduce lag

0.86
Added:		Added several modded vehicles (thanks to xxsogramboxx)

0.85
Fixed:		CBA keybind issues. Note: After changing the default key, open the dialog once to save the change.
Added:		10 second delay to starting DAPS at mission start to avoid problems with ACRE2 (thanks Olli)

0.84
Added:		Some more vehicle classes
Various:	Small housekeeping changes

0.83
Fixed:		Afganit/Afghanit typo causing problems
Fixed:		AfganitE/Trophy HVe stopping tank rounds even with no charges remaining

0.82
Added:		Minimum Defeat Distance to all systems except dazzler (thanks crusaderyn)
Changed:	Vehicle engine must be on to use APS (thanks crusaderyn)

0.81
Added: APS management dialog (delete key by default)
Added: Virtual reloading at ammo trucks for player's vehicle
Added: Virtual reloading at ammo trucks for all vehicles on player's side
Added: Debug mode for checking what the APS was triggered by (use dapsDebug=true;)
Fixed: Problem with DAPS_fnc_StartNewDefinitions running on all clients, causing multiple APS instances

0.8
Added: Code to completely disable a given type of APS for the duration of a mission (DAPS_fnc_DisableAPStypeAll)
Added: Trophy HV Enhanced, a variant of Trophy HV that can intercept tank rounds
Added: A new scripted method for mission makers to customize which vehicles have which APS
Fixed: Some double APS were incorrectly designated as single in some scripts
Changed: Vehicles will now attempt to turn to face the incoming projectile and pop smoke as soon as possible
Changed: As per above, DAPS_fnc_React no longer controls facing/popping smoke
Changed: Improved Dazzler functionality
Tweaked: General script tidy up

0.7
Fixed: Arena was incorrectly categorized as a single-arc APS (should be double-arc)
Added: Array "dapsExcludedAmmo" allows specified ammunition classnames to be ignored by APS
Changed: License

0.6
Added: Trophy LV, Trophy MV, Iron Fist, AMAP-ADS
Added: Version of Afganit that can not intercept tank shells
Fixed: Trophy had 10 charges each side (now 5)
Fixed: APS was intercepting cruise missiles (now will not engage missiles with a hit config value over 999)
Changed: Trophy is now Trophy HV
Changed: Afganit is now AfganitE (Afganit Enhanced)
Changed: T-140 now uses AfganitE
Tweaked: Detection of top-attack weapons for Russian systems

0.5
Added: Drozd, Drozd-2 and Afganit APS
Added: Scripts to easily add new vehicle classes to use APS
Changed: Smoke launchers now check they are at the correct facing before firing
Changed: T-100 now uses Drozd-2
Changed: T-140 now uses Afganit
Changed: Panther IFV now used Trophy
Changed: Ammo management now runs on all clients (for reporting purposes)
Changed: Arena can no longer engage top-attack weapons

0.4
Added: Arena APS
Added: Dazzler APS (eg. Shtora)
Added: Dazzlers to CUP and MEC T-90s
Added: Dazzlers to MEC SAA T-72s
Added: Trophy to MEC Merkavas
Added: Registration script now loops to catch spawned vehicles
Added: Various scripts for managing enabling/disabling of APS
Added: Check to reduce smoke launcher spam (minimum 10 seconds between firing smoke launchers)
Fixed: Trophy incorrectly determining which side to fire
Fixed: Disable APS script was not working properly
Changed: NATO and AAF tanks now use Trophy
Changed: T-100 now uses Arena
Tweaked: Light, medium, heavy APS
Tweaked: Pop smoke scripts

0.3
Added: Trophy APS
Added: Added Trophy APS to some RHS vehicles (thanks to Damian of RHS)
Added: Better code for detecting 3rd party smoke launchers
Added: Scripts for disabling and rearming APS
Changed: Switched to spawn instead of execVM
Changed: APS reload time is now 0.7 seconds
Other: Various attempts to optimize
Other: Various tweaks and additions

0.2
Added: Vehicles now turn to face the direction of the fired projectile
Added: Vehicles now try to pop smoke when the APS activates
Added: NATO, CSAT and AAF MRAPs now have light APS

0.1
First release