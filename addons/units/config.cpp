#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {
            QCLASS(Box_Uniforms),
            QCLASS(Unit_I_Bodyguard),
            QCLASS(Unit_B_Bodyguard),
            QCLASS(Unit_I_Contractor),
            QCLASS(Unit_B_Contractor),
            QCLASS(Unit_I_Contractor_GL),
            QCLASS(Unit_B_Contractor_GL),
            QCLASS(Unit_I_Engineer),
            QCLASS(Unit_B_Engineer),
            QCLASS(Unit_I_Medic),
            QCLASS(Unit_B_Medic),
            QCLASS(Unit_I_Specialist),
            QCLASS(Unit_B_Specialist),
            QCLASS(Unit_I_TeamLeader),
            QCLASS(Unit_B_TeamLeader),
            QCLASS(Unit_I_Sniper),
            QCLASS(Unit_B_Sniper),
            QCLASS(Unit_I_PilotHeli),
            QCLASS(Unit_B_PilotHeli),
            QCLASS(Unit_I_VIP),
            QCLASS(Unit_B_VIP)
        };
        weapons[] = {
            QCLASS(Uniform_Combat_LS_BS_GP_BB),
            QCLASS(Uniform_Combat_LS_BS_GP_TB),
            QCLASS(Uniform_Combat_LS_BS_TP_BB),
            QCLASS(Uniform_Combat_LS_BS_TP_TB),
            QCLASS(Uniform_Combat_LS_GS_BP_BB),
            QCLASS(Uniform_Combat_LS_GS_TP_BB),
            QCLASS(Uniform_Combat_LS_BS_DGP_BB),
            QCLASS(Uniform_Combat_LS_TS_BP_BB),
            QCLASS(Uniform_Combat_LS_TS_GP_BB),
            QCLASS(Uniform_Combat_LS_TS_GP_TB),
            QCLASS(Uniform_Combat_LS_CDBS_GP_TB),
            QCLASS(Uniform_Combat_LS_CLBS_GP_BB),
            QCLASS(Uniform_Combat_LS_CLRS_TP_BB),
            QCLASS(Uniform_Combat_LS_CPS_BP_BB),
            QCLASS(Uniform_Combat_RS_BS_GP_BB),
            QCLASS(Uniform_Combat_RS_BS_GP_TB),
            QCLASS(Uniform_Combat_RS_BS_TP_BB),
            QCLASS(Uniform_Combat_RS_BS_TP_TB),
            QCLASS(Uniform_Combat_RS_GS_BP_BB),
            QCLASS(Uniform_Combat_RS_GS_TP_BB),
            QCLASS(Uniform_Combat_RS_BS_DGP_BB),
            QCLASS(Uniform_Combat_RS_TS_BP_BB),
            QCLASS(Uniform_Combat_RS_TS_GP_BB),
            QCLASS(Uniform_Combat_RS_TS_GP_TB),
            QCLASS(Uniform_Combat_RS_CDBS_GP_TB),
            QCLASS(Uniform_Combat_RS_CLBS_GP_BB),
            QCLASS(Uniform_Combat_RS_CLRS_TP_BB),
            QCLASS(Uniform_Combat_RS_CPS_BP_BB),
            QCLASS(Uniform_Garment_LS_BS_BP_BB),
            QCLASS(Uniform_Garment_LS_BS_GP_BB),
            QCLASS(Uniform_Garment_LS_BS_EP_TB),
            QCLASS(Uniform_Garment_LS_GS_GP_BB),
            QCLASS(Uniform_Garment_LS_GS_BP_BB),
            QCLASS(Uniform_Garment_LS_GS_EP_TB),
            QCLASS(Uniform_Garment_LS_ES_EP_TB),
            QCLASS(Uniform_Garment_LS_ES_BP_BB),
            QCLASS(Uniform_Garment_LS_ES_GP_BB),
            QCLASS(Uniform_Garment_LS_TS_TP_TB),
            QCLASS(Uniform_Garment_LS_GS_TP_TB),
            QCLASS(Uniform_Garment_LS_TS_GP_BB),
            QCLASS(Uniform_Garment_LS_BS_TP_TB),
            QCLASS(Uniform_Garment_LS_TS_BP_BB),
            QCLASS(Uniform_Garment_RS_BS_BP_BB),
            QCLASS(Uniform_Garment_RS_BS_GP_BB),
            QCLASS(Uniform_Garment_RS_BS_EP_TB),
            QCLASS(Uniform_Garment_RS_GS_GP_BB),
            QCLASS(Uniform_Garment_RS_GS_BP_BB),
            QCLASS(Uniform_Garment_RS_GS_EP_TB),
            QCLASS(Uniform_Garment_RS_ES_EP_TB),
            QCLASS(Uniform_Garment_RS_ES_BP_BB),
            QCLASS(Uniform_Garment_RS_ES_GP_BB),
            QCLASS(Uniform_Garment_RS_TS_TP_TB),
            QCLASS(Uniform_Garment_RS_GS_TP_TB),
            QCLASS(Uniform_Garment_RS_TS_GP_BB),
            QCLASS(Uniform_Garment_RS_BS_TP_TB),
            QCLASS(Uniform_Garment_RS_TS_BP_BB),
            QCLASS(Uniform_Polo_TP_LS_TP_TB),
            QCLASS(Uniform_Polo_TP_TS_GP_BB),
            QCLASS(Uniform_Polo_TP_BS_TP_TB),
            QCLASS(Uniform_Polo_TP_BS_LP_BB),
            QCLASS(Uniform_Polo_TP_LS_GP_BB),
            QCLASS(Uniform_Polo_TP_OS_TP_BB),
            QCLASS(Uniform_Polo_TP_OS_LP_BB),
            QCLASS(Uniform_Polo_TP_GS_TP_TB),
            QCLASS(Uniform_Polo_TP_WS_TP_TB),
            QCLASS(Uniform_Polo_TP_WS_LP_BB),
            QCLASS(Uniform_Polo_TP_WS_GP_BB),
            QCLASS(Uniform_Polo_CP_LS_TP_OB),
            QCLASS(Uniform_Polo_CP_RS_LP_BB),
            QCLASS(Uniform_Polo_CP_BS_TP_BB),
            QCLASS(Uniform_TShirt_JP_GS_LP_BB),
            QCLASS(Uniform_TShirt_JP_GS_TP_BB),
            QCLASS(Uniform_TShirt_JP_BS_LP_BB),
            QCLASS(Uniform_TShirt_JP_BS_TP_BB),
            QCLASS(Uniform_TShirt_JP_LS_TP_BB),
            QCLASS(Uniform_TShirt_JP_WS_LP_BB),
            QCLASS(Suit_VIP)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacs_backpacks", "tacs_headgear", "tacs_vests", "tacs_weapons"};
        author[]= {"Pomigit", "BadHabitz", "Jonpas", "Rory"};
        authorUrl = "https://github.com/Theseus-Aegis/TheseusServices";
        VERSION_CONFIG;
    };
};

#include "CfgGroups.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgWorlds.hpp"
