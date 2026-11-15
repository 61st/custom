class ACE_SelfActions: ACE_SelfActions {
	class HMDOn {
		displayName = "HMD";
		condition = "(player in [driver this, this turretUnit [0]]) && (alive this)";
		statement = QUOTE(call FUNC(toggleHMD));
		icon = "";
	};
	class skin {
		displayName = "Nose Art";
		condition = "driver (vehicle _player) == _player";
		statement = "";
		class default {
			displayName = "None";
			condition = "";
			statement = "_target setObjectTextureGlobal [0, 'rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_fuselage_co.paa']; _target setObjectTextureGlobal [1, 'rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_engine_co.paa']";
		};
		class p6: default {
			displayName = "Phoenix 6";
			statement = "_target setObjectTextureGlobal [0, '\z\lxim\addons\lximdap\data\textures\uh60\P6F.paa']; _target setObjectTextureGlobal [1, '\z\lxim\addons\lximdap\data\textures\uh60\E.paa'];";
		};
		class p11: default {
			displayName = "Phoenix 1-1";
			statement = "_target setObjectTextureGlobal [0, '\z\lxim\addons\lximdap\data\textures\uh60\P11F.paa']; _target setObjectTextureGlobal [1, '\z\lxim\addons\lximdap\data\textures\uh60\P11E.paa'];";
		};
		class p12: default {
			displayName = "Phoenix 1-2";
			statement = "_target setObjectTextureGlobal [0, '\z\lxim\addons\lximdap\data\textures\uh60\P12F.paa']; _target setObjectTextureGlobal [1, '\z\lxim\addons\lximdap\data\textures\uh60\E.paa'];";
		};
		class p13: default {
			displayName = "Phoenix 1-3";
			statement = "_target setObjectTextureGlobal [0, '\z\lxim\addons\lximdap\data\textures\uh60\P13F.paa']; _target setObjectTextureGlobal [1, '\z\lxim\addons\lximdap\data\textures\uh60\P13E.paa'];";
		};
		class p14: default {
			displayName = "Phoenix 1-4";
			statement = "_target setObjectTextureGlobal [0, '\z\lxim\addons\lximdap\data\textures\uh60\P14F.paa']; _target setObjectTextureGlobal [1, '\z\lxim\addons\lximdap\data\textures\uh60\E.paa'];";
		};
		};
};
