#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		name = COMPONENT_NAME;
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"armorreducer", "bwa3_vests"};
		author = "Bagigi Team";
		authors[] = {"mrschick"};
		url = "https://www.github.com/bagigi-arma/Armor-Reducer";
		skipWhenMissingDependencies = 1;
		VERSION_CONFIG;
	};
};

#include "CfgWeapons.hpp"
