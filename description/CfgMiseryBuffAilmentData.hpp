class CfgMisery_BuffsAilments {
    class Buffs {
        class NearFire {
            name = "Near Fire";
            image = "z\misery\addons\icons\data\nearfire_ca.paa";
            description = "- When near a fire, you will be warmed from the cold, you can also utilize the fire for cooking, or boiling water to kill off micro-organisms...";
            showCondition = "private _isInflamed = (call misery_common_fnc_nearFire) select 1; _isInflamed"; // True to show
            removeCondition = "private _isInflamed = (call misery_common_fnc_nearFire) select 1; !_isInflamed"; // True to remove
        };
        class Sheltered {
            name = "Sheltered";
            image = "z\misery\addons\icons\data\shelter_ca.paa";
            description = "- You are sheltered from the weather, while inside you cannot build a fire due to smoke inhalation...";
            showCondition = "insideBuilding player isEqualTo 1";
            removeCondition = "insideBuilding player isNotEqualTo 1";
        };
        class ShelteredPowered {
            name = "Power";
            image = "z\misery\addons\icons\data\house_plug_ca.paa";
            description = "- You are sheltered with power being provided by a nearby generator, the generator steadily hums outside while making your shelter comfortable...";
            showCondition = "[player, 150] call misery_generator_fnc_nearGenerator params ['', '_generator']; insideBuilding player isEqualTo 1 && !isNil '_generator' && _generator getVariable ['misery_generator_isRunning', false]";
            removeCondition = "insideBuilding player isNotEqualTo 1";
        };
        class GasMask {
            name = "Gas Mask";
            image = "";
            description = "- You are wearing a gasmask, it can protect your lungs from harmful contaminants like radioactive particles, as well as toxic gases. You should be mindful of your cartridges...";
            showCondition = "[player] call misery_protection_fnc_totalProtection params ['_gasMask', '_scba']; _gasMask > 0 && _scba isEqualTo 0";
            removeCondition = "[player] call misery_protection_fnc_totalProtection params ['_gasMask', '_scba']; _gasMask <= 0";
        };
        class SCBA {
            name = "SCBA";
            image = "z\misery\addons\icons\data\dioxygen_ca.paa";
            description = "- You are wearing an SCBA unit, which is the highest form of respiratory protection you can have...";
            showCondition = "[player] call misery_protection_fnc_totalProtection params ['_gasMask', '_scba']; _scba >= 1";
            removeCondition = "[player] call misery_protection_fnc_totalProtection params ['_gasMask', '_scba']; _scba < 1";
        };
        class Temperate {
            name = "Temperate";
            image = "z\misery\addons\icons\data\thermometer_ca.paa";
            description = "- You are comfortable...";
            showCondition = "private _v = player getVariable ['misery_temperature_exposure', 0]; _v > -0.0005 && _v < 0.0005";
            removeCondition = "private _v = player getVariable ['misery_temperature_exposure', 0]; _v >= 0.0005 || _v < -0.0005";
        };
        class HeatPack {
            name = "Heatpack";
            image = "z\misery\addons\icons\data\thermometer_sun_ca.paa";
            description = "- Heat pack in use";
            showCondition = "misery_temperature_thermalPackHeatActive";
            removeCondition = "!misery_temperature_thermalPackHeatActive";
        };
        class ColdPack {
            name = "Coldpack";
            image = "z\misery\addons\icons\data\thermometer_snowflake_ca.paa";
            description = "- Cold pack in use";
            showCondition = "misery_temperature_thermalPackColdActive";
            removeCondition = "!misery_temperature_thermalPackColdActive";
        };
        class FTRKit {
            name = "FTR Kit";
            image = "z\misery\addons\icons\data\sun_snow_ca.paa";
            description = "- Field thermal regulation kit in use";
            showCondition = "misery_temperature_thermalBagActive";
            removeCondition = "!misery_temperature_thermalBagActive";
        };
    };
    class Ailments {
        class ParasiteInfection {
            name = "Parasite Infection";
            image = "z\misery\addons\icons\data\worm_ca.paa";
            description = "- You are infected with Parasites, You feel a gnawing hunger that is unsatiable, as well as unquenchable thirst...";
            showCondition = "player getVariable ['misery_survival_parasites', 0] > 0";
            removeCondition = "player getVariable ['misery_survival_parasites', 0] <= 0";
        };
        class Tired {
            name = "Tired";
            image = "z\misery\addons\icons\data\bed_ca.paa";
            description = "- You are Tired...";
            showCondition = "player getVariable ['misery_survival_energyDeficit', 0] >= 0.1";
            removeCondition = "player getVariable ['misery_survival_energyDeficit', 0] < 0.1";
        };
        class Terrified {
            name = "Terrified";
            image = "z\misery\addons\icons\data\ghost_ca.paa";
            description = "- Your heart races wildly, breaths come in shallow gasps, dread of sudden death overwhelms you...";
            showCondition = "misery_psychosis_terrifiedState";
            removeCondition = "!misery_psychosis_terrifiedState";
        };
        class Chilly {
            name = "Chilly";
            image = "z\misery\addons\icons\data\thermometer_snowflake_ca.paa";
            description = "- You are getting cold...";
            // Range: Exactly between 0 and -0.25
            showCondition = "private _v = player getVariable ['misery_temperature_exposure', 0]; _v < -0.0005 && _v >= -0.25";
            removeCondition = "private _v = player getVariable ['misery_temperature_exposure', 0]; _v >= 0 || _v < -0.25";
        };
        class Cold {
            name = "Cold";
            image = "z\misery\addons\icons\data\thermometer_snowflake_ca.paa";
            description = "- You are cold...";
            // Range: Lower than -0.25 down to -0.5
            showCondition = "private _v = player getVariable ['misery_temperature_exposure', 0]; _v < -0.25 && _v >= -0.5";
            removeCondition = "private _v = player getVariable ['misery_temperature_exposure', 0]; _v >= -0.25 || _v < -0.5";
        };
        class Freezing {
            name = "Freezing";
            image = "z\misery\addons\icons\data\thermometer_snowflake_ca.paa";
            description = "- You are freezing...";
            // Range: Lower than -0.5 down to -0.75
            showCondition = "private _v = player getVariable ['misery_temperature_exposure', 0]; _v < -0.5 && _v >= -0.75";
            removeCondition = "private _v = player getVariable ['misery_temperature_exposure', 0]; _v >= -0.5 || _v < -0.75";
        };
        class HypothermicRisk {
            name = "Hypothermia risk";
            image = "z\misery\addons\icons\data\thermometer_snowflake_ca.paa";
            description = "- You are at risk of hypothermia...";
            // Range: Lower than -0.75 but not yet -1.0
            showCondition = "private _v = player getVariable ['misery_temperature_exposure', 0]; _v < -0.75 && _v > -1";
            removeCondition = "private _v = player getVariable ['misery_temperature_exposure', 0]; _v >= -0.75 || _v <= -1";
        };
        class Hypothermia {
            name = "Hypothermic";
            image = "z\misery\addons\icons\data\thermometer_snowflake_ca.paa";
            description = "- You are hypothermic...";
            // Range: Exactly -1.0 or lower
            showCondition = "player getVariable ['misery_temperature_exposure', 0] <= -1";
            removeCondition = "player getVariable ['misery_temperature_exposure', 0] > -1";
        };
        class Warm {
            name = "Warm";
            image = "z\misery\addons\icons\data\thermometer_sun_ca.paa";
            description = "- You are feeling warm...";
            showCondition = "private _v = player getVariable ['misery_temperature_exposure', 0]; _v > 0.0005 && _v <= 0.25";
            removeCondition = "private _v = player getVariable ['misery_temperature_exposure', 0]; _v <= 0 || _v > 0.25";
        };
        class Hot {
            name = "Hot";
            image = "z\misery\addons\icons\data\thermometer_sun_ca.paa";
            description = "- You are feeling hot...";
            showCondition = "private _v = player getVariable ['misery_temperature_exposure', 0]; _v > 0.25 && _v <= 0.5";
            removeCondition = "private _v = player getVariable ['misery_temperature_exposure', 0]; _v <= 0.25 || _v > 0.5";
        };
        class Sweating {
            name = "Overheating";
            image = "z\misery\addons\icons\data\thermometer_sun_ca.paa";
            description = "- You are overheating...";
            showCondition = "private _v = player getVariable ['misery_temperature_exposure', 0]; _v > 0.5 && _v <= 0.75";
            removeCondition = "private _v = player getVariable ['misery_temperature_exposure', 0]; _v <= 0.5 || _v > 0.75";
        };
        class HyperthermiaRisk {
            name = "Heatstroke Risk";
            image = "z\misery\addons\icons\data\thermometer_sun_ca.paa";
            description = "- You are at risk of heatstroke...";
            showCondition = "private _v = player getVariable ['misery_temperature_exposure', 0]; _v > 0.75 && _v < 1";
            removeCondition = "private _v = player getVariable ['misery_temperature_exposure', 0]; _v <= 0.75 || _v >= 1";
        };
        class Hyperthermia {
            name = "Heatstroke";
            image = "z\misery\addons\icons\data\thermometer_sun_ca.paa";
            description = "- You have heatstroke...";
            showCondition = "player getVariable ['misery_temperature_exposure', 0] >= 1";
            removeCondition = "player getVariable ['misery_temperature_exposure', 0] < 1";
        };
        class Damp {
            name = "Damp";
            image = "z\misery\addons\icons\data\droplet_ca.paa";
            description = "- Your clothes are slightly damp...";
            // Range: 0.01 to 0.25
            showCondition = "private _v = player getVariable ['misery_temperature_wetness', 0]; _v > 0 && _v <= 0.25";
            removeCondition = "private _v = player getVariable ['misery_temperature_wetness', 0]; _v <= 0 || _v > 0.25";
        };
        class Wet {
            name = "Wet";
            image = "z\misery\addons\icons\data\droplet_ca.paa";
            description = "- Your clothes are wet...";
            // Range: 0.26 to 0.50
            showCondition = "private _v = player getVariable ['misery_temperature_wetness', 0]; _v > 0.25 && _v <= 0.5";
            removeCondition = "private _v = player getVariable ['misery_temperature_wetness', 0]; _v <= 0.25 || _v > 0.5";
        };
        class Soaked {
            name = "Soaked";
            image = "z\misery\addons\icons\data\droplet_ca.paa";
            description = "- Your clothes are soaking wet...";
            // Range: 0.51 to 0.75
            showCondition = "private _v = player getVariable ['misery_temperature_wetness', 0]; _v > 0.5 && _v <= 0.75";
            removeCondition = "private _v = player getVariable ['misery_temperature_wetness', 0]; _v <= 0.5 || _v > 0.75";
        };
        class Drenched {
            name = "Drenched";
            image = "z\misery\addons\icons\data\droplet_ca.paa";
            description = "- You are drenched to the bone...";
            // Range: 0.76 to 0.99
            showCondition = "private _v = player getVariable ['misery_temperature_wetness', 0]; _v > 0.75 && _v < 1";
            removeCondition = "private _v = player getVariable ['misery_temperature_wetness', 0]; _v <= 0.75 || _v >= 1";
        };
        class Saturated {
            name = "Waterlogged";
            image = "z\misery\addons\icons\data\droplet_ca.paa";
            description = "- Your gear is heavy and saturated...";
            // Range: 1.0 (Maximum)
            showCondition = "player getVariable ['misery_temperature_wetness', 0] >= 1";
            removeCondition = "player getVariable ['misery_temperature_wetness', 0] < 1";
        };
        class Tremor {
            name = "Tremor";
            image = "z\misery\addons\icons\data\brain_circuit_ca.paa";
            description = "- You're suffering from uncontrollable shaking...";
            // Range: 1.0 (Maximum)
            showCondition = "player getVariable ['misery_medical_tremor', false]";
            removeCondition = "!(player getVariable ['misery_medical_tremor', false])";
        };
    };
};
