class CfgMisery_CraftingData {
    class misery_woodplank {
        requiredItems[] = {{"misery_electricHandsaw", 1, 0}, {"misery_woodenlog", 1, 1}};
        craftingTime = 25;
        outputCount = 4;
        code = "if ([10] call misery_common_fnc_rollChance) then {[[misery_electricHandsaw], [misery_electricHandSaw_NoBattery]] call misery_common_fnc_switchItem}";
        audio = "misery_audio_sound_electricSaw";
        outputXP = 5;
        requiredXP = 0;
    };
};
