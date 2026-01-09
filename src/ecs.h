#pragma once
#include <vector>
#include <string>
#include "../includes/raymath.h"

/*
Reading reccomended to me:
    - https://savas.ca/nomad
    - https://github.com/SanderMertens/flecs
*/

struct cComponent {
    
};

struct Entity {


    std::vector<Entity> children;
    std::vector<cComponent> components;
    Matrix transform;
    std::string name = "New Entity";

    void UpdateChildTransforms();
    void AddChild(Entity child);
    void AddComponent(cComponent component);



};

struct Scene {

    std::vector<Entity> entities;
    std::string name = "New Scene";

};


