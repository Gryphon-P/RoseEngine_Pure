#pragma once
#include <vector>

struct Scene {

    std::vector<Entity> sceneObjects;

};

struct cComponent; // Forward declare
struct Entity {

    std::vector<Entity> children;
    std::vector<cComponent> components;

};

struct cComponent {

};