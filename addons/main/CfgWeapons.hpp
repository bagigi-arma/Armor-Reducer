class CfgWeapons {
	// HEADGEAR
	//class HeadgearItem;
	/*class H_HelmetB;
	class H_HelmetLeaderO_ocamo: H_HelmetO_ocamo {
		class ItemInfo: HeadgearItem {
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 8;
					passThrough = 0.5;
				};
				class Face {
					hitpointName = "HitFace";
					armor = 0;
					passThrough = 1;
				};
			};
		};
	};*/

	// CSAT Protector Helmet
	/*class H_HelmetO_ocamo: H_HelmetB {
		class ItemInfo: HeadgearItem {
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 8;
					passThrough = 0.5;
				};
			};
		};
	};
	// CSAT Defender Helmet
	class H_HelmetLeaderO_ocamo: H_HelmetO_ocamo {
		class ItemInfo: HeadgearItem {
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 8;
					passThrough = 0.5;
				};
			};
		};
	};*/

	// AAF Light Platecarriers
	class ItemCore;
	class Vest_NoCamo_Base: ItemCore {class ItemInfo;};
	class V_PlateCarrierIA1_dgtl: Vest_NoCamo_Base {
		class ItemInfo: ItemInfo {
			class HitpointsProtectionInfo {
				class Chest {
					hitpointName = "HitChest";
					armor = 12;//16;
					passThrough = 0.4;//0.3;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 12;//16;
					passThrough = 0.4;//0.3;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 12;//16;
					passThrough = 0.4;//0.3;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.4;//0.3;
				};
			};
		};
	};
	class V_PlateCarrierIA2_dgtl: V_PlateCarrierIA1_dgtl {
		class ItemInfo: ItemInfo {
			class HitpointsProtectionInfo {
				class Chest {
					hitpointName = "HitChest";
					armor = 12;//16;
					passThrough = 0.4;//0.3;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 12;//16;
					passThrough = 0.4;//0.3;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 12;//16;
					passThrough = 0.4;//0.3;
				};
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 12;//16;
					passThrough = 0.4;//0.3;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.4;//0.3;
				};
			};
		};
	};

	// AAF Heavy Platecarrier
	class V_PlateCarrierIAGL_dgtl: V_PlateCarrierIA2_dgtl {
		class ItemInfo: ItemInfo {
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 8;
					passThrough = 0.5;
				};
				class Chest {
					hitpointName = "HitChest";
					armor = 16;//78;
					passThrough = 0.6;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 8;
					passThrough = 0.5;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 16;//78;
					passThrough = 0.6;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 14;
					passThrough = 0.3;
				};
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 12;
					passThrough = 0.3;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.6;
				};
			};
		};
	};

	// NATO Light Platecarriers
	class V_PlateCarrier1_rgr: Vest_NoCamo_Base {
		class ItemInfo: ItemInfo {
			class HitpointsProtectionInfo {
				class Chest {
					hitpointName = "HitChest";
					armor = 12;//16;
					passThrough = 0.4;//0.3;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 12;//16;
					passThrough = 0.6;//0.3;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 12;//16;
					passThrough = 0.4;//0.3;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.6;//0.3;
				};
			};
		};
	};
	class V_PlateCarrier2_rgr: V_PlateCarrier1_rgr {
		class ItemInfo: ItemInfo {
			class HitpointsProtectionInfo {
				class Chest {
					hitpointName = "HitChest";
					armor = 14;//20;
					passThrough = 0.4;//0.2;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 14;//20;
					passThrough = 0.6;//0.2;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 14;//20;
					passThrough = 0.4;//0.2;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.6;//0.2;
				};
			};
		};
	};

	// NATO Heavy Platecarriers
	class V_PlateCarrierGL_rgr: Vest_NoCamo_Base {
		class ItemInfo: ItemInfo {
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 8;
					passThrough = 0.5;
				};
				class Chest {
					hitpointName = "HitChest";
					armor = 16;//78;
					passThrough = 0.4;//0.6;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 8;
					passThrough = 0.5;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 14;//78;
					passThrough = 0.6;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 14;//16;
					passThrough = 0.4;//0.3;
				};
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 12;
					passThrough = 0.4;//0.3;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.6;
				};
			};
		};
	};
	class V_PlateCarrierSpec_rgr: Vest_NoCamo_Base {
		class ItemInfo: ItemInfo {
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 8;
					passThrough = 0.5;
				};
				class Chest {
					hitpointName = "HitChest";
					armor = 16;//24;
					passThrough = 0.4;//0.1;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 8;
					passThrough = 0.5;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 16;//24;
					passThrough = 0.6;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 14;//24;
					passThrough = 0.3;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
		};
	};
};
