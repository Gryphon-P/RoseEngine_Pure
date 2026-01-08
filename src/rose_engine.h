#pragma once
#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include "ecs.h"

/*
OS Preprocessor macros, useful for multiplatform support. Aim for Linux and Windows:
    _WIN64
    _WIN32
    __APPLE__
    __linux__
    __ANDROID__
*/

// Defines the windows preprocessor macro
#if defined(_WIN64) || defined(_WIN32)
#define __windows__
#endif

void Init();
void Update();
void Render();
void Destroy();