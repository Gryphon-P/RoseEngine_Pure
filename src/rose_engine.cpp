#include "rose_engine.h"


void Init()
{
    #ifdef HOT_RELOAD
        std::system("automation_scripts/hot_reload.py");
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



