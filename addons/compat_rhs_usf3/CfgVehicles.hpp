#define STANDARD_LOAD_MASS maximumLoad = 440; mass = 25

class CfgVehicles {
	class B_AssaultPack_rgr;
	class rhsusf_falconii_coy: B_AssaultPack_rgr { STANDARD_LOAD_MASS; };
	class rhsusf_falconii_mc: B_AssaultPack_rgr { STANDARD_LOAD_MASS; };
	class rhsusf_falconii: B_AssaultPack_rgr { STANDARD_LOAD_MASS; };
	class rhsusf_falconii_gr: rhsusf_falconii { STANDARD_LOAD_MASS; };
	class rhsusf_falconii_coy_gr: rhsusf_falconii_coy { STANDARD_LOAD_MASS; };
	class rhsusf_falconii_gr_m32: rhsusf_falconii_coy { STANDARD_LOAD_MASS; };
	class rhsusf_falconii_breach: rhsusf_falconii { STANDARD_LOAD_MASS; };
	class rhsusf_falconii_recon: rhsusf_falconii_coy { STANDARD_LOAD_MASS; };
	class rhsusf_falconii_sarc: rhsusf_falconii { STANDARD_LOAD_MASS; };

	class B_Carryall_cbr;
	class rhsusf_pack_slackman_m240: B_Carryall_cbr { STANDARD_LOAD_MASS; };
	class rhsusf_pack_slackman_m249: B_Carryall_cbr { STANDARD_LOAD_MASS; };

	class B_AssaultPack_Base;
	class rhsusf_assault_eagleaiii_ucp: B_AssaultPack_Base { STANDARD_LOAD_MASS; };
	class rhsusf_assault_eagleaiii_ocp: rhsusf_assault_eagleaiii_ucp { STANDARD_LOAD_MASS; };
	class rhsusf_assault_eagleaiii_ocp_engineer: rhsusf_assault_eagleaiii_ocp { STANDARD_LOAD_MASS; };
	class rhsusf_assault_eagleaiii_ucp_engineer: rhsusf_assault_eagleaiii_ucp { STANDARD_LOAD_MASS; };
	class rhsusf_assault_eagleaiii_ocp_medic: rhsusf_assault_eagleaiii_ocp { STANDARD_LOAD_MASS; };
	class rhsusf_assault_eagleaiii_ucp_medic: rhsusf_assault_eagleaiii_ucp { STANDARD_LOAD_MASS; };
	class rhsusf_assault_eagleaiii_ocp_demo : rhsusf_assault_eagleaiii_ocp { STANDARD_LOAD_MASS; };
	class rhsusf_assault_eagleaiii_ucp_demo: rhsusf_assault_eagleaiii_ucp { STANDARD_LOAD_MASS; };
	class rhsusf_assault_eagleaiii_ocp_ar: rhsusf_assault_eagleaiii_ocp { STANDARD_LOAD_MASS; };
	class rhsusf_assault_eagleaiii_ucp_ar: rhsusf_assault_eagleaiii_ucp { STANDARD_LOAD_MASS; };
	class rhsusf_assault_eagleaiii_ocp_mg: rhsusf_assault_eagleaiii_ocp { STANDARD_LOAD_MASS; };
	class rhsusf_assault_eagleaiii_ucp_mg: rhsusf_assault_eagleaiii_ucp { STANDARD_LOAD_MASS; };
	class rhsusf_assault_eagleaiii_ocp_at: rhsusf_assault_eagleaiii_ocp { STANDARD_LOAD_MASS; };
	class rhsusf_assault_eagleaiii_ucp_at: rhsusf_assault_eagleaiii_ucp { STANDARD_LOAD_MASS; };
	class rhsusf_assault_eagleaiii_ucp_maaws: rhsusf_assault_eagleaiii_ucp { STANDARD_LOAD_MASS; };
	class rhsusf_assault_eagleaiii_ocp_maaws: rhsusf_assault_eagleaiii_ocp { STANDARD_LOAD_MASS; };

	class rhsusf_assault_eagleaiii_coy: rhsusf_assault_eagleaiii_ucp { STANDARD_LOAD_MASS; };
	class rhsusf_assault_eagleaiii_coy_medic: rhsusf_assault_eagleaiii_coy { STANDARD_LOAD_MASS; };
	class rhsusf_assault_eagleaiii_coy_engineer: rhsusf_assault_eagleaiii_coy { STANDARD_LOAD_MASS; };
	class rhsusf_assault_eagleaiii_coy_demo: rhsusf_assault_eagleaiii_coy { STANDARD_LOAD_MASS; };
	class rhsusf_assault_eagleaiii_coy_eod: rhsusf_assault_eagleaiii_coy { STANDARD_LOAD_MASS; };
	class rhsusf_assault_eagleaiii_coy_m27: rhsusf_assault_eagleaiii_coy { STANDARD_LOAD_MASS; };
	class rhsusf_assault_eagleaiii_coy_ar: rhsusf_assault_eagleaiii_coy { STANDARD_LOAD_MASS; };
	class rhsusf_assault_eagleaiii_coy_mg: rhsusf_assault_eagleaiii_coy { STANDARD_LOAD_MASS; };
	class rhsusf_assault_eagleaiii_coy_assaultman: rhsusf_assault_eagleaiii_coy { STANDARD_LOAD_MASS; };
	class rhsusf_assault_eagleaiii_coy_at: rhsusf_assault_eagleaiii_coy { STANDARD_LOAD_MASS; };
	class rhsusf_assault_eagleaiii_coy_aa: rhsusf_assault_eagleaiii_coy { STANDARD_LOAD_MASS; };
};
