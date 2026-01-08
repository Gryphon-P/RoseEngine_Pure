ROSE_ENGINE / RoseEngine / rose_engine

ROSE_ENGINE is a custom game engine being created by Gryphon Picciottoli.
My intent with this project is to make a small game engine that aligns with my philosophies
in addition to allowing me greater creative freedom. If the goals of this project will change in the future, 
I am not sure. The "_Pure" just means I will not be using MSVS so that I can use the engine on multiple OSes.

The end goal is to create a git submodule such that it can be cloned and every file in the game can just do
#include "rose_engine.h". The entire engine is meant to be portable, you just clone and go, 
no downloading other programs other than say, GCC and the Python Interpreter.

PROJECT ORGANIZATION (folders):
- includes: C and C++ includes for stuff like GLFW and GLAD
- src: Source code for the engine, stuff I will be working on
- automation_scripts: python scripts that run automated tasks and can make development easier

