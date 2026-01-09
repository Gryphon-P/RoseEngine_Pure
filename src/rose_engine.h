#pragma once
#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include "ecs.h"
#include "rendering.h"

/*
OS Preprocessor macros, useful for multiplatform support. Aim for Linux and Windows:
    _WIN64
    _WIN32
    __APPLE__
    __linux__
    __ANDROID__
*/

void Init();
void Update();
void Render();
void Destroy();