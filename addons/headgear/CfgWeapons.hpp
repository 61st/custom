class CfgWeapons {
    class H_HelmetCrew_B;
	class H_HelmetCrew_I: H_HelmetCrew_B;

    class GVAR(H_HelmetCrew_green): H_HelmetCrew_I {
		author = QAUTHOR;
		displayName = "61st Crew Helmet (Green)";
		picture = QPATHTOF(data\icon_h_i_helmet_crew_ca.paa);
		hiddenSelectionsTextures[] = {QPATHTOF(data\lxim_headgear_ia_helmet_crew_co.paa)};
	};
    class GVAR(H_HelmetCrew_sand): H_HelmetCrew_I {
		author = QAUTHOR;
		displayName = "61st Crew Helmet (Sand)";
		picture = QPATHTOF(data\icon_H_HelmetCrew_I_I_ca.paa);
		hiddenSelectionsTextures[] = {QPATHTOF(data\lxim_H_HelmetCrew_I_I_CO.paa)};
	};
    
    
};
