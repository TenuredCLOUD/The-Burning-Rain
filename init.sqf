
if (hasInterface) then {

    private _spawnPos = selectRandom ["marker1", "marker2", "marker3", "marker4", "marker5", "marker6", "marker7", "marker8", "marker9", "marker10"];

    if (isNil "misery_persistence_singlePlayerSaveData") then {
        player setPos (getMarkerPos _spawnPos);
    };

    [{!isNull player}, {
        0 fadeRadio 0;
        ["misery_common_tileText", "<t font='PuristaMedium' size='1'>The Burning Rain</t><br/>by TenuredCLOUD"] call CBA_fnc_localEvent;
    }, []] call CBA_fnc_waitUntilAndExecute;
};
