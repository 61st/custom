class ACE_Medical_Treatment_Actions {
    class CPR;
    
    class GHOST_Defibrillator: CPR {
        displayName = CSTRING(Defib_Action_Use);
        displayNameProgress = "$STR_ghost_defib_AED_PROGRESS";
        icon = QPATHTOF(ui\defib.paa);
        items[] = {"ghost_defib_AED"};
        treatmentTime = 10;
        consumeItem = 0;
        callbackStart = "call ace_medical_treatment_fnc_cprStart; _patient setVariable ['ghost_AEDinUse', true, true];";
        callbackProgress = "call ace_medical_treatment_fnc_cprProgress; call ghost_defib_fnc_AED_sound;";
        callbackSuccess = "[_medic, _patient, 'AED'] call ghost_defib_fnc_AEDSuccess; _patient setVariable ['ghost_AEDinUse', false, true];";
        callbackFailure = "call ace_medical_treatment_fnc_cprFailure; _medic setVariable ['ghost_soundplayed', false, true]; _patient setVariable ['ghost_AEDinUse', false, true];";
        animationMedic = "AinvPknlMstpSnonWnonDr_medic0";
        treatmentLocations = "GVAR(useLocation_AED)";
        medicRequired = QGVAR(medLvl_AED);
        animationPatient = "";
        animationPatientUnconscious = "AinjPpneMstpSnonWrflDnon_rolltoback";
        animationPatientUnconsciousExcludeOn[] = {"ainjppnemstpsnonwrfldnon"};
    };
};
