class CfgWeapons {

    class CBA_MiscItem;
    class CBA_MiscItem_ItemInfo;
    class ACE_ItemCore: CBA_MiscItem {};

    // MEDICAL SUPPLIES

    class GVAR(FirstAid): ACE_ItemCore {
        scope = 2;
        author = QAUTHOR;
        ACE_isMedicalItem = 1;
        displayName = "Boo Boo Bag";
        descriptionShort = "Contains material for first aid";
        editorPreview = QPATHTOF(data\previews\firstaid.jpg);
        picture = QPATHTOF(data\ui\firstaid_ca.paa);
        model = "\a3\weapons_f\ammo\mag_firstaidkit.p3d";
        icon = "iconObject_1x1";
        mapSize = 0.015;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 10;
        };
    };

    class GVAR(MedicKit): ACE_ItemCore {
        scope = 2;
        author = QAUTHOR;
        ACE_isMedicalItem = 1;
        displayName = "Medic Bag";
        descriptionShort = "Contains materials to resupply medics";
        editorPreview = QPATHTOF(data\previews\medickit.jpg);
        picture = QPATHTOF(data\ui\medickit_ca.paa);
        model="\A3\Weapons_F\Items\Medikit";
        icon = "iconObject_1x1";
        mapSize = 0.015;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 24;
        };
    };

    class GVAR(CLS): ACE_ItemCore {
        scope = 2;
        author = QAUTHOR;
        ACE_isMedicalItem = 1;
        displayName = "CLS Bag";
        descriptionShort = "Contains materials to resupply CLS";
        editorPreview = QPATHTOF(data\previews\medickit.jpg);
        picture = QPATHTOF(data\ui\medickit_ca.paa);
        model="\A3\Weapons_F\Items\Medikit";
        icon = "iconObject_1x1";
        mapSize = 0.015;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 24;
        };
    };

    class GVAR(Trauma): ACE_ItemCore {
        scope = 2;
        author = QAUTHOR;
        ACE_isMedicalItem = 1;
        displayName = "Trauma Kit";
        descriptionShort = "Contains materials for medics";
        editorPreview = QPATHTOF(data\previews\medickit.jpg);
        picture = QPATHTOF(data\ui\medickit_ca.paa);
        model="\A3\Weapons_F\Items\Medikit";
        icon = "iconObject_1x1";
        mapSize = 0.015;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 50;
        };
    };

    class GVAR(Fluid): ACE_ItemCore {
        scope = 2;
        author = QAUTHOR;
        ACE_isMedicalItem = 1;
        displayName = "Fluid Kit";
        descriptionShort = "Box of Water";
        editorPreview = QPATHTOF(data\previews\medickit.jpg);
        picture = QPATHTOF(data\ui\medickit_ca.paa);
        model="\A3\Weapons_F\Items\Medikit";
        icon = "iconObject_1x1";
        mapSize = 0.015;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 35;
        };
    };

    class GVAR(DrugKit): ACE_ItemCore {
        scope = 2;
        author = QAUTHOR;
        displayName = "Drug Kit";
        ACE_isMedicalItem = 1;
        descriptionShort = "Contains DURGS!";
        editorPreview = QPATHTOF(data\previews\booboo_ca.paa);
        picture = QPATHTOF(data\previews\booboo_ca.paa);
        model="\A3\Weapons_F\Items\Medikit";
        icon = "iconObject_1x1";
        mapSize = 0.015;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 12;
        };
    };
    class GVAR(mopp): ACE_ItemCore {
        scope = 2;
        author = QAUTHOR;
        displayName = "MOPP Bag";
        ACE_isMedicalItem = 1;
        descriptionShort = "MOPP !!!!!!";
        editorPreview = QPATHTOF(data\previews\booboo_ca.paa);
        picture = QPATHTOF(data\previews\booboo_ca.paa);
        model="\A3\Weapons_F\Items\Medikit";
        icon = "iconObject_1x1";
        mapSize = 0.015;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 18;
        };
    };
};
