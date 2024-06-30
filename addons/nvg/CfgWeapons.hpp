class CfgWeapons {
    class Default {};
    class Binocular: Default {};
    class NVGoggles;

    ///////////////////////
    // class rhsusf_ANPVS_14: NVGoggles {
    //     modelOptics="";
    //     ace_nightvision_bluRadius=-1;
    //     ace_nightvision_border=QPATHTOF(data\single.paa);
    // };
    // class rhsusf_ANPVS_15: rhsusf_ANPVS_14 {
    //     modelOptics="";
    //     ace_nightvision_bluRadius=-1;
    //     ace_nightvision_border=QPATHTOF(data\bi.paa);
    // };
    // class rhs_1PN138: NVGoggles {
    //     modelOptics="";
    //     ace_nightvision_bluRadius=-1;
    //     ace_nightvision_border=QPATHTOF(data\single.paa);
    // };
    class O_NVGoggles_hex_F: NVGoggles {
        modelOptics="";
        ace_nightvision_bluRadius=-1;
        ace_nightvision_border=QPATHTOF(data\quad.paa);
    };
    class ACE_NVG_Biocular: NVGoggles {
        modelOptics="";
        ace_nightvision_bluRadius=-1;
        ace_nightvision_border=QPATHTOF(data\single.paa);
    };
    class ACE_NVG_Monocular: NVGoggles {
        modelOptics="";
        ace_nightvision_bluRadius=-1;
        ace_nightvision_border=QPATHTOF(data\single.paa);
    };
    class ACE_NVG_Binocular: NVGoggles {
        modelOptics="";
        ace_nightvision_bluRadius=-1;
        ace_nightvision_border=QPATHTOF(data\bi.paa);
    };
    class ACE_NVG_Quadocular: NVGoggles {
        modelOptics="";
        ace_nightvision_bluRadius=-1;
        ace_nightvision_border=QPATHTOF(data\quad.paa);
    };
};

