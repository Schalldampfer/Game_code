// Add this to the end of epoch_config/Configs/CfgActionMenu/CfgActionMenu_target.hpp

class VirtualGarage
{
	condition = "dyna_isTrader || dyna_cursorTarget in HSPV_HSBlackmarket";
	action = "createDialog 'SC_vgsDiag'";
	icon =  "a3\ui_f\data\GUI\Rsc\RscDisplayArsenal\spaceGarage_ca.paa";
	tooltip = "Virtual Garage";
};
