#define FLAG(COUNTRY) class GVAR(COUNTRY): Flag_White_F { \
    author = "61st Mechanized Infantry Battalion, A3"; \
    displayName = QUOTE(Flag (##COUNTRY##)); \
\
    class EventHandlers { \
        init = QUOTE((_this select 0) setFlagTexture QUOTE(QUOTE(\A3\ui_f\data\map\markers\flags\##COUNTRY##_ca.paa))); \
    }; \
}

FLAG(Belgium);
FLAG(Canada);
FLAG(Croatia);
FLAG(CzechRepublic);
FLAG(Denmark);
FLAG(France);
FLAG(Georgia);
FLAG(Germany);
FLAG(Greece);
FLAG(Hungary);
FLAG(Iceland);
FLAG(Italy);
FLAG(Luxembourg);
FLAG(Netherlands);
FLAG(Norway);
FLAG(Poland);
FLAG(Portugal);
FLAG(Slovakia);
FLAG(Slovenia);
FLAG(Spain);

class GVAR(Russia): Flag_White_F {
    author = "61st Mechanized Infantry Battalion, A3";
    displayName = "Flag (61st)";

    class EventHandlers {
        init = "(_this select 0) setFlagTexture 'z\lxim\addons\media\images\flags\61stflag.paa'";
    };
};
class GVAR(NKorreeno): Flag_White_F {
    author = "61st Mechanized Infantry Battalion, A3";
    displayName = "Flag (N. Korreeno)";

    class EventHandlers {
        init = "(_this select 0) setFlagTexture 'z\lxim\addons\media\images\flags\nkorreno.paa'";
    };
};
class GVAR(SKorreeno): Flag_White_F {
    author = "61st Mechanized Infantry Battalion, A3";
    displayName = "Flag (S. Korreeno)";

    class EventHandlers {
        init = "(_this select 0) setFlagTexture 'z\lxim\addons\media\images\flags\skorreno.paa'";
    };
};
class GVAR(Belvaria): Flag_White_F {
    author = "61st Mechanized Infantry Battalion, A3";
    displayName = "Flag (Belvaria)";

    class EventHandlers {
        init = "(_this select 0) setFlagTexture 'z\lxim\addons\media\images\flags\BELVARIANFLAG.paa'";
    };
};
class GVAR(Banshiri): Flag_White_F {
    author = "61st Mechanized Infantry Battalion, A3";
    displayName = "Flag (Banshiri)";

    class EventHandlers {
        init = "(_this select 0) setFlagTexture 'z\lxim\addons\media\images\flags\PBBFlag.paa'";
    };
};
class GVAR(Banshiri_a): Flag_White_F {
    author = "61st Mechanized Infantry Battalion, A3";
    displayName = "Flag (Banshiri Army)";

    class EventHandlers {
        init = "(_this select 0) setFlagTexture 'z\lxim\addons\media\images\flags\PBBarmyflag.paa'";
    };
};
class GVAR(Zeus): Flag_White_F {
    author = "61st Mechanized Infantry Battalion, A3";
    displayName = "Flag (Xray)";

    class EventHandlers {
        init = "(_this select 0) setFlagTexture 'z\lxim\addons\media\images\flags\xrayflag.paa'";
    };
};
class GVAR(OL11): Flag_White_F {
    author = "61st Mechanized Infantry Battalion, A3";
    displayName = "Flag (Outlaw 1-1)";

    class EventHandlers {
        init = "(_this select 0) setFlagTexture 'z\lxim\addons\media\images\flags\outlaw11.paa'";
    };
};
class GVAR(OL12): Flag_White_F {
    author = "61st Mechanized Infantry Battalion, A3";
    displayName = "Flag (Outlaw 1-2)";

    class EventHandlers {
        init = "(_this select 0) setFlagTexture 'z\lxim\addons\media\images\flags\outlaw12.paa'";
    };
};
class GVAR(OLHQ): Flag_White_F {
    author = "61st Mechanized Infantry Battalion, A3";
    displayName = "Flag (Outlaw HQ)";

    class EventHandlers {
        init = "(_this select 0) setFlagTexture 'z\lxim\addons\media\images\flags\outlawhq.paa'";
    };
};
class GVAR(iron): Flag_White_F {
    author = "61st Mechanized Infantry Battalion, A3";
    displayName = "Flag (Iron Promise)";

    class EventHandlers {
        init = "(_this select 0) setFlagTexture 'z\lxim\addons\media\images\flags\ironpromise.paa'";
    };
};
class GVAR(air): Flag_White_F {
    author = "61st Mechanized Infantry Battalion, A3";
    displayName = "Flag (Phoenix)";

    class EventHandlers {
        init = "(_this select 0) setFlagTexture 'z\lxim\addons\media\images\flags\phoenix.paa'";
    };
};
class GVAR(rhino): Flag_White_F {
    author = "61st Mechanized Infantry Battalion, A3";
    displayName = "Flag (Rhino)";

    class EventHandlers {
        init = "(_this select 0) setFlagTexture 'z\lxim\addons\media\images\flags\rhino.paa'";
    };
};
class GVAR(side): Flag_White_F {
    author = "61st Mechanized Infantry Battalion, A3";
    displayName = "Flag (Side Operation)";

    class EventHandlers {
        init = "(_this select 0) setFlagTexture 'z\lxim\addons\media\images\flags\sideop.paa'";
    };
};
class GVAR(tank): Flag_White_F {
    author = "61st Mechanized Infantry Battalion, A3";
    displayName = "Flag (Thunder)";

    class EventHandlers {
        init = "(_this select 0) setFlagTexture 'z\lxim\addons\media\images\flags\thunder.paa'";
    };
};
class GVAR(med): Flag_White_F {
    author = "61st Mechanized Infantry Battalion, A3";
    displayName = "Flag (Perseus)";

    class EventHandlers {
        init = "(_this select 0) setFlagTexture 'z\lxim\addons\media\images\flags\medic.paa'";
    };
};
