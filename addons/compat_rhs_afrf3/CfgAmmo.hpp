class CfgAmmo {
	class B_556x45_Ball;
	class rhs_B_545x39_Ball: B_556x45_Ball {
		caliber = 0.5;//0.216216;
	};
	class rhs_B_545x39_7N6_Ball: rhs_B_545x39_Ball {
		caliber = 0.55;//0.231884;
	};

	class B_762x51_Ball;
	class rhs_B_762x39_Ball: B_762x51_Ball {
		caliber = 0.85;//0.55;
	};

	class rhs_B_762x54_Ball: B_762x51_Ball {
		caliber = 1.0;//0.341151;
	};

	class BulletBase;
	class rhs_ammo_762x51_M80_Ball: BulletBase {
		caliber = 1.2;//0.45;
	};
	class rhs_ammo_762x51_M62_tracer: rhs_ammo_762x51_M80_Ball {
		caliber = 1.2;//1;
	};
	class rhs_ammo_762x51_M80A1EPR_Ball: rhs_ammo_762x51_M80_Ball {
		caliber = 1.3;//0.55;
	};
	class rhs_ammo_762x51_M118_Special_Ball: rhs_ammo_762x51_M80_Ball {
		caliber = 1.5;//0.52;
	};
	class rhs_ammo_762x51_M61_AP: rhs_ammo_762x51_M80_Ball {
		caliber = 1.8;//0.79;
	};
	class rhs_ammo_762x51_M993_Ball: rhs_ammo_762x51_M80_Ball {
		caliber = 2.3;//1.41176;
	};
};
