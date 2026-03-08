class CfgWeapons {
	//VESTS
	class V_PlateCarrier1_rgr;
	class V_PlateCarrier2_rgr: V_PlateCarrier1_rgr {class ItemInfo;};
	class BWA3_Vest_Fleck: V_PlateCarrier2_rgr {
		class ItemInfo: ItemInfo {
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
};
