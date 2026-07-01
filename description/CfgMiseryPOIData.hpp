class CfgMisery_POI {
    class Areas {
        class Campground_1 {
            composition[] = {
                "Land_TentA_F",{0, 0, 0},108.534,
                "Land_TentDome_F",{-4.21191, -1.57813, -0.0222492},112.616,
                "Land_CampingTable_F",{-2.33105, 4.05664, -0.0197315},195.46,
                "Land_FirePlace_F",{-3.59082, 1.25, -0.0213661},0,
                "Box_East_WpsLaunch_F",{-5.42188, 2.84375, -0.0594368},127.895
            };
            position[] = {0, 0, 0};
            nearShore = 0;
            groundLoot = 1;
            faction = "SIDEWEST";
            aiClass = "B_Survivor_F";
            aiCountMax = 3;
            aiCountMin = 1;
            aiSpawnDistance = 1;
            aiWeapPrimaryLoot[] = {"arifle_MX_F", "arifle_MXC_F"};
            aiWeapSecondaryLoot[] = {"hgun_P07_F", "hgun_Rook40_F"};
            aiWeapLauncherLoot[] = {"launch_NLAW_F"};
            aiAmmo = 5;
            aiItemLoot[] = {"FirstAidKit", "ItemMap", "ItemCompass"};
            aiNVGLoot[] = {"NVGoggles"};
            aiFacewearLoot[] = {"G_Spectacles", "G_Aviator"};
            aiHeadgearLoot[] = {"H_HelmetB", "H_Cap_red"};
            aiUniformLoot[] = {"U_B_CombatUniform_mcam", "U_B_CombatUniform_mcam_tshirt"};
            aiVestLoot[] = {"V_PlateCarrier1_rgr", "V_TacVest_khk"};
            aiBackpackLoot[] = {"B_AssaultPack_mcamo", "B_Kitbag_mcamo"};
            crateWeaponLoot[] = {"arifle_MX_F", "arifle_MXC_F"};
            crateWeaponMagLoot = "ALL";
            crateWeaponAttachmentLoot = "ALL";
            crateItemLoot[] = {"FirstAidKit", "ItemMap"};
            crateUniformLoot[] = {"U_B_CombatUniform_mcam"};
            crateVestLoot[] = {"V_PlateCarrier1_rgr"};
            crateBackpackLoot[] = {"B_AssaultPack_mcamo"};
            crateLootCount = 1;
            groundLootItems[] = {"FirstAidKit", "ItemMap"};
            groundLootCount = 3;
            aiAccuracy = 0.25;
            aiShake = 0.25;
            aiSpeed = 0.25;
            spawnChance = 100;
        };
        class HeliWreck_1 {
            composition[] = {
                "Land_Wreck_Heli_Attack_01_F",{0, 0, 0},84.0117,
                "Land_Wreck_Heli_Attack_01_F",{9.52539, -14.3691, -0.194555},0,
                "VirtualReammoBox_camonet_F",{-0.0400391, -5.44336, -0.0183716},0,
                "VirtualReammoBox_small_F",{4.58301, -10.752, -0.0737915},113.072
            };
            position[] = {0, 0, 0};
            nearShore = 0;
            groundLoot = 1;
            crateWeaponLoot[] = {"arifle_MX_F", "arifle_MXC_F"};
            crateWeaponMagLoot = "BASIC";
            crateWeaponAttachmentLoot = "BASIC";
            crateItemLoot[] = {"FirstAidKit", "ItemMap"};
            crateUniformLoot[] = {"U_B_CombatUniform_mcam"};
            crateVestLoot[] = {"V_PlateCarrier1_rgr"};
            crateBackpackLoot[] = {"B_AssaultPack_mcamo"};
            crateLootCount = 1;
            groundLootItems[] = {"FirstAidKit", "ItemMap"};
            groundLootCount = 5;
            spawnChance = 0;
        };
        class ShoreLoot_1 {
            composition[] = {
                "Land_RowBoat_V1_F",{0, 0, 0},97.9878
            };
            position[] = {0, 0, 0};
            nearShore = 1;
            groundLoot = 1;
            crateWeaponLoot[] = {"arifle_MX_F", "arifle_MXC_F"};
            crateWeaponMagLoot = "BASIC";
            crateWeaponAttachmentLoot = "BASIC";
            crateItemLoot[] = {"FirstAidKit", "ItemMap"};
            crateUniformLoot[] = {"U_B_CombatUniform_mcam"};
            crateVestLoot[] = {"V_PlateCarrier1_rgr"};
            crateBackpackLoot[] = {"B_AssaultPack_mcamo"};
            crateLootCount = 1;
            groundLootItems[] = {"FirstAidKit", "ItemMap"};
            groundLootCount = 3;
            spawnChance = 0;
        };
    };
};
