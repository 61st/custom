class CfgVehicles {

    // INTERACTIONS
    class Man;
    class CAManBase: Man {
        // exceptions[] = {"isNotDead", "isNotUnconscious", "isNotSurrendering", "isNotHandcuffed", "isNotCarrying", "isNotDragging", "isNotEscorting", "isNotSwimming", "isNotRefueling", "isNotOnLadder", "isNotSitting", "isNotInside", "isNotInZeus", "notOnMap"};
        class ACE_SelfActions {
            class LXIM_bags {
                displayName = "Bags";
                class GVAR(Medical_Supplies_Action_FirstAid) {
                    displayName = "Unpack Boo Boo Bag";
                    condition = "[_player] call lxim_medbags_fnc_canUnpackFirstAid";
                    statement = "[_player] call lxim_medbags_fnc_doUnpackFirstAid";
                    exceptions[] = {"isNotInside", "isNotSitting"};
                    icon = QPATHTOF(data\icons\medical_cross_ex_ca.paa);
                    showDisabled = 0;
                };
                class GVAR(Medical_Supplies_Action_MedicKit) {
                    displayName = "Unpack Medic Bag";
                    condition = "[_player] call lxim_medbags_fnc_canUnpackMedicKit";
                    statement = "[_player] call lxim_medbags_fnc_doUnpackMedicKit";
                    exceptions[] = {"isNotInside", "isNotSitting"};
                    icon = QPATHTOF(data\icons\medical_cross_ex_ca.paa);
                    showDisabled = 0;
                };
                class GVAR(Medical_Supplies_Action_CLS) {
                    displayName = "Unpack CLS Bag";
                    condition = "[_player] call lxim_medbags_fnc_canUnpackCLS";
                    statement = "[_player] call lxim_medbags_fnc_doUnpackCLS";
                    exceptions[] = {"isNotInside", "isNotSitting"};
                    icon = QPATHTOF(data\icons\medical_cross_ex_ca.paa);
                    showDisabled = 0;
                };
                class GVAR(Medical_Supplies_Action_Trauma) {
                    displayName = "Unpack Trauma Kit";
                    condition = "[_player] call lxim_medbags_fnc_canUnpackTrauma";
                    statement = "[_player] call lxim_medbags_fnc_doUnpackTrauma";
                    exceptions[] = {"isNotInside", "isNotSitting"};
                    icon = QPATHTOF(data\icons\medical_cross_ex_ca.paa);
                    showDisabled = 0;
                };
                class GVAR(Medical_Supplies_Action_Fluid) {
                    displayName = "Unpack Fluid Kit";
                    condition = "[_player] call lxim_medbags_fnc_canUnpackFluid";
                    statement = "[_player] call lxim_medbags_fnc_doUnpackFluid";
                    exceptions[] = {"isNotInside", "isNotSitting"};
                    icon = QPATHTOF(data\icons\medical_cross_ex_ca.paa);
                    showDisabled = 0;
                };
                class GVAR(Medical_Supplies_Action_DrugKit) {
                    displayName = "Unpack Drug Kit";
                    condition = "[_player] call lxim_medbags_fnc_canUnpackDrugKit";
                    statement = "[_player] call lxim_medbags_fnc_doUnpackDrugKit";
                    exceptions[] = {"isNotInside", "isNotSitting"};
                    icon = QPATHTOF(data\icons\medical_cross_ex_ca.paa);
                    showDisabled = 0;
                };
                class GVAR(Medical_Supplies_Action_mopp) {
                    displayName = "Unpack MOPP Bag";
                    condition = "[_player] call lxim_medbags_fnc_canUnpackmopp";
                    statement = "[_player] call lxim_medbags_fnc_doUnpackmopp";
                    exceptions[] = {"isNotInside", "isNotSitting"};
                    icon = QPATHTOF(data\icons\medical_cross_ex_ca.paa);
                    showDisabled = 0;
                };
            };
        };
    };
    // MEDICAL SUPPLIES
    class Item_Base_F;
    class GVAR(Item_FirstAid): Item_Base_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        author = QAUTHOR;
        displayName = "Boo Boo Bag";
        editorPreview = QPATHTOF(data\previews\firstaid.jpg);
        vehicleClass = "Items";
        class TransportItems {
            name = QGVAR(FirstAid);
            count = 1;
        };
    };
    class GVAR(Item_MedicKit): Item_Base_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        author = QAUTHOR;
        displayName = "Medic Bag";
        editorPreview = QPATHTOF(data\previews\medickit.jpg);
        vehicleClass = "Items";
        class TransportItems {
            name = QGVAR(MedicKit);
            count = 1;
        };
    };
    class GVAR(Item_CLS): Item_Base_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        author = QAUTHOR;
        displayName = "CLS Bag";
        editorPreview = QPATHTOF(data\previews\medickit.jpg);
        vehicleClass = "Items";
        class TransportItems {
            name = QGVAR(CLS);
            count = 1;
        };
    };
    class GVAR(Item_Trauma): Item_Base_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        author = QAUTHOR;
        displayName = "Trauma Kit";
        editorPreview = QPATHTOF(data\previews\medickit.jpg);
        vehicleClass = "Items";
        class TransportItems {
            name = QGVAR(Trauma);
            count = 1;
        };
    };
    class GVAR(Item_Fluid): Item_Base_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        author = QAUTHOR;
        displayName = "Fluid Kit";
        editorPreview = QPATHTOF(data\previews\medickit.jpg);
        vehicleClass = "Items";
        class TransportItems {
            name = QGVAR(Fluid);
            count = 1;
        };
    };
    class GVAR(Item_DrugKit): Item_Base_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        author = QAUTHOR;
        displayName = "Drug Kit";
        editorPreview = QPATHTOF(data\previews\booboo_ca.paa);
        vehicleClass = "Items";
        class TransportItems {
            name = QGVAR(DrugKit);
            count = 1;
        };
    };
    class GVAR(Item_mopp): Item_Base_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        author = QAUTHOR;
        displayName = "MOPP Bag";
        editorPreview = QPATHTOF(data\previews\booboo_ca.paa);
        vehicleClass = "Items";
        class TransportItems {
            name = QGVAR(mopp);
            count = 1;
        };
    };
};
