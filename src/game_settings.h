/*
This file is meant to store all the settings data of the game
*/
#pragma once
#include "includes/raymath.h"
#include <vector>
#include <string>

// Defines the windows preprocessor macro
#if defined(_WIN64) || defined(_WIN32)
    #define __windows__
#endif

struct Scene; // Forward declare
static struct GameSettings
{
    Scene* startingScene = nullptr;
    int maxFPS = 60;
    




};
