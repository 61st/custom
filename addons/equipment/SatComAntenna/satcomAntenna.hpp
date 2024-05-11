class Items_base_F;

class MRH_MT_SatCom_Antenna_Base: Items_base_F {
	author = "Mr H";
	mapSize = 0.07;
	class SimpleObject {
		eden = 1;
		animate[] = {};
		hide[] = {};
		verticalOffset = 0.131;
		verticalOffsetWorld = 0;
		init = "''";
	};
	editorPreview = "z\sixtyone\addons\equipment\SatComAntenna\Data\antennaPreview.jpg";
	//_generalMacro = "Land_BottlePlastic_V2_F";
	scope = 1;
	scopeCurator = 0;
	displayName = "Trivec Avant SATCOM Antenna";
	model = "z\sixtyone\addons\equipment\SatComAntenna\MRH_SatCom_2.p3d";
	
	icon = "iconObject_circle";
	editorCategory = QPREFIX;
	vehicleClass = "Small_items";
	destrType = "DestructNo";
	cost = 100;
	hiddenSelections[] = {};
	hiddenSelectionTextures[] = {};
	// ThingX
	simulation = "thingX";
	////


	
	
};

class MRH_MT_SatCom_Antenna: MRH_MT_SatCom_Antenna_Base {

	scope = 2;
	scopeCurator = 2;

	////
	ace_dragging_canDrag = 1;  // Can be dragged (0-no, 1-yes)
        ace_dragging_dragPosition[] = {0, 1.2, 0};  // Offset of the model from the body while dragging (same as attachTo)
        ace_dragging_dragDirection = 0;  // Model direction while dragging (same as setDir after attachTo)

        // Carrying
        ace_dragging_canCarry = 1;  // Can be carried (0-no, 1-yes)
        ace_dragging_carryPosition[] = {0, 1.2, 0};  // Offset of the model from the body while dragging (same as attachTo)
        ace_dragging_carryDirection = 0;  // Model direction while dragging (same as setDir after attachTo)
	/////
	class ACE_Actions
	{
		class ACE_MainActions
		{
			displayName = "Trivec Avant SATCOM Antenna";
			icon = "";
			distance = 2;
			selection = "mem01";
			class AntennaFold {
					displayName = "Fold antenna";
					condition = "true";
					exceptions[] = {};
					statement = "_storePos = getPosATL _target; deleteVehicle _target; [_storePos] call MRH_fnc_MilsimTools_MiscItems_foldAntenna;";
					icon = "z\sixtyone\addons\equipment\SatComAntenna\Data\bagIco_ca.paa";
					//selection = "mem01";
					//distance = 2;
				};
		};
	};	
};