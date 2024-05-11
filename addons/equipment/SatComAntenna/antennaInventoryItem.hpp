
class CBA_MiscItem;
class CBA_MiscItem_ItemInfo;

class MRH_MT_FoldedSatcomAntenna: CBA_MiscItem
{
	author = "Mr H.";
	displayName = "SATCOM Antenna in bag";
	model = "z\sixtyone\addons\equipment\SatComAntenna\antennaBag.p3d";
	scope = 2;      
	scopeArsenal = 2;
	scopeCurator = 2;
	editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Prop.jpg";
	editorCategory = QPREFIX;
	picture = "z\sixtyone\addons\equipment\SatComAntenna\Data\bagIco_ca.paa";
	descriptionShort = "A SATCOM antenna used to transmit long range, can be connected to a tablet";
	//type = 0;
	ace_arsenal_hide = 0;
	class ItemInfo: CBA_MiscItem_ItemInfo
			{
				mass=50;//en lb*10
			};

};

