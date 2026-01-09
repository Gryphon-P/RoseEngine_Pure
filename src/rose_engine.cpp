#include "rose_engine.h"


void Init()
{
    #ifdef HOT_RELOAD
        std::system("automation_scripts/hot_reload.py");
    #endif

    #ifdef SCENE_EDITOR
        // Launches the scene editor, rendering widgets for entities and rendering their starting transforms
        // Then editing the code to make the transforms math the code

    #endif
}

void Update()
{
}

void Render()
{
}

void Destroy()
{
}



