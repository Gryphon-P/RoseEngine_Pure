#pragma once
#include <vector>
#include <raymath.h>

struct Scene {

    std::vector<Entity> sceneObjects;

};

struct cComponent; // Forward declare
struct Entity {

    std::vector<Entity> children;
    std::vector<cComponent> components;
    Matrix transform;

};

struct cComponent {
    
};