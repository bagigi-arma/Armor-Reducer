#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		name = COMPONENT_NAME;
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"armorreducer", "rhsusf_main_loadorder"};
		author = "Bagigi Team";
		authors[] = {"Shiloh", "Moose", "mrschick"};
		url = "https://www.github.com/bagigi-arma/Armor-Reducer";
		skipWhenMissingDependencies = 1;
		VERSION_CONFIG;
	};
};

#include "CfgAmmo.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
