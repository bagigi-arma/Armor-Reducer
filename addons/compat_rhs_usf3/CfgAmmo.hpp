class CfgAmmo {
	class rhsusf_40mm_HE;
	class rhsusf_40mm_HEDP: rhsusf_40mm_HE {
		indirectHitRange= 10.7;
	};

	class B_556x45_Ball;
	class rhs_ammo_556x45_M193_Ball: B_556x45_Ball {
		caliber = 0.55;//0.533881;
	};
	class rhs_ammo_556x45_Mk262_Ball: B_556x45_Ball {
		caliber = 0.42;//0.677
	};
	class rhs_ammo_556x45_Mk318_Ball: B_556x45_Ball {
		caliber = 0.5;//0.64
	};
	class rhs_ammo_556x45_M855_Ball: B_556x45_Ball {
		caliber = 0.7;//0.44
	};
	class rhs_ammo_556x45_M855A1_Ball: B_556x45_Ball {
		caliber = 0.88;//0.65
	};
	class rhs_ammo_556x45_M995_AP: B_556x45_Ball {
		caliber = 0.95;//0.868621
	};
};
