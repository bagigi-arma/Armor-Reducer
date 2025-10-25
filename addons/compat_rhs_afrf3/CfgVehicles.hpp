#define STANDARD_LOAD_MASS maximumLoad = 440; mass = 25

class CfgVehicles {
	class B_AssaultPack_Base;
	class rhs_assault_umbts: B_AssaultPack_Base { STANDARD_LOAD_MASS; };
	class rhs_rk_sht_30_olive : rhs_assault_umbts { STANDARD_LOAD_MASS; };
	class rhs_r148: B_AssaultPack_Base { STANDARD_LOAD_MASS; };
	class rhs_rpg: B_AssaultPack_Base { STANDARD_LOAD_MASS; };
	class rhs_sidor: B_AssaultPack_Base { STANDARD_LOAD_MASS; };
	class rhs_medic_bag: B_AssaultPack_Base { STANDARD_LOAD_MASS; };
	class rhs_rd54: B_AssaultPack_Base { STANDARD_LOAD_MASS; };

	class B_Carryall_Base;
	class rhs_tortila_grey: B_Carryall_Base { STANDARD_LOAD_MASS; };


	class rhs_rd54_flora1;
	class rhs_rd54_vest_flora1: rhs_rd54_flora1 { STANDARD_LOAD_MASS; };

	class rhs_rd54_flora2;
	class rhs_rd54_vest_flora2: rhs_rd54_flora2 { STANDARD_LOAD_MASS; };

	class rhs_rpg_2;
	class rhs_rpg_6b3: rhs_rpg_2 { STANDARD_LOAD_MASS; };
};
