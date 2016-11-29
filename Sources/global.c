// Filename: global.c

#include "cheats.h"

char    statusOutlines[40] = "Value not found",
	    currentEXP[40] = "Value not found",
        storedGender[40] = "Value not found",
        storedSkintone[40] = "Value not found";

u8      currentGender,
        currentSkintone;

// Index numbers for cheats with notes or disableCheat() commands
int i_increaseEXP,
    i_increaseEXP10,
    i_decreaseEXP,
    i_decreaseEXP10,
    i_resetEXP,
    i_walkThruWalls,
    i_shinyPokemon,
    i_instantEgg,
    i_allItems,
    i_allMedicine,
    i_allTMs,
    i_allBerries,
    i_allClothes,
    i_toggleOutlines,
    i_rematchTrainers,
    i_pcAnywhere,
    i_setGender,
    i_setSkintone,
    i_switchLooks;
