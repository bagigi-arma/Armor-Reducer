#define STANDARD_LOAD_MASS maximumLoad = 440; mass = 25

class CfgVehicles {
	class B_AssaultPack_blk;
	class rhsgref_nat_backpack_mg: B_AssaultPack_blk { STANDARD_LOAD_MASS; };

	class B_Carryall_oli;
	class rhsgref_cdf_backpack_mg: B_Carryall_oli { STANDARD_LOAD_MASS; };
	class rhsgref_cdf_backpack_mg2: B_Carryall_oli { STANDARD_LOAD_MASS; };
	class rhsgref_cdf_backpack_mg3: B_Carryall_oli { STANDARD_LOAD_MASS; };
	class rhsgref_cdf_backpack_engineer: B_Carryall_oli { STANDARD_LOAD_MASS; };
	class rhsgref_cdf_backpack_medic: B_Carryall_oli { STANDARD_LOAD_MASS; };
	class rhsgref_nat_backpack_engineer: B_Carryall_oli { STANDARD_LOAD_MASS; };

	class B_TacticalPack_oli;
	class rhsgref_nat_backpack_medic: B_TacticalPack_oli { STANDARD_LOAD_MASS; };
	class rhsgref_nat_backpack_explosives: B_TacticalPack_oli { STANDARD_LOAD_MASS; };

	class B_FieldPack_khk;
	class rhsgref_ins_pack: B_FieldPack_khk { STANDARD_LOAD_MASS; };

	class B_FieldPack_cbr;
	class rhsgref_ins_pack_GR: B_FieldPack_cbr { STANDARD_LOAD_MASS; };

	class B_TacticalPack_blk;
	class rhsgref_ins_packMG: B_TacticalPack_blk { STANDARD_LOAD_MASS; };

	class B_Carryall_Base;
	class rhsgref_tortila_specter: B_Carryall_Base { STANDARD_LOAD_MASS; };

	class Bag_Base;
	class rhsgref_hidf_alicepack: Bag_Base { STANDARD_LOAD_MASS; };
	class rhsgref_wdl_alicepack: rhsgref_hidf_alicepack { STANDARD_LOAD_MASS; };
	class rhsgref_ttsko_alicepack: rhsgref_hidf_alicepack { STANDARD_LOAD_MASS; };

	class rhsusf_falconii;
	class rhsgref_nat_backpack_mg42: rhsusf_falconii { STANDARD_LOAD_MASS; };
};
