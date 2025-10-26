class CfgWeapons {
	// VESTS
	class ItemCore;
	class Vest_Camo_Base: ItemCore {class ItemInfo;};
	class rhssaf_balistic_vest_base: Vest_Camo_Base {
		class ItemInfo: ItemInfo {
			containerClass = "Supply220";
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 0;
					passThrough = 1;
					simulation = "";
				};
				class Chest {
					hitpointName = "HitChest";
					armor = 12;
					passThrough = 0.4;
					simulation = "";
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 0;
					passThrough = 1;
					simulation = "";
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 12;
					passThrough = 0.4;
					simulation = "";
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 12;
					passThrough = 0.4;
					simulation = "";
				};
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 12;
					passThrough = 0.4;
					simulation = "";
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.4;
					simulation = "";
				};
			};
		};
	};
	class rhssaf_vest_otv_md2camo: rhssaf_balistic_vest_base {
		class ItemInfo: ItemInfo {
			containerClass = "Supply220";
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 0;
					passThrough = 1;
					simulation = "";
				};
				class Chest {
					hitpointName = "HitChest";
					armor = 12;
					passThrough = 0.4;
					simulation = "";
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 12;
					passThrough = 0.4;
					simulation = "";
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 3;
					passThrough = 0.6;
					simulation = "";
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.5;
					simulation = "";
				};
			};
		};
	};
};
