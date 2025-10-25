#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		name = COMPONENT_NAME;
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"armorreducer", "rhsgref_main_loadorder"};
		author = "Bagigi Team";
		authors[] = {"Shiloh", "mrschick"};
		url = "https://www.github.com/bagigi-arma/Armor-Reducer";
		skipWhenMissingDependencies = 1;
		VERSION_CONFIG;
	};
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
