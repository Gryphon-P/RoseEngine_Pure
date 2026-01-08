#pragma once
#include <vector>
#include <raymath.h>

struct Scene {

    std::vector<Entity> entities;
    std::string name = "New Scene";

};

struct cComponent; // Forward declare
struct Entity {


    std::vector<Entity> children;
    std::vector<cComponent> components;
    Matrix transform;
    std::string name = "New Entity";

    void UpdateChildTransforms();
    void AddChild(Entity child);
    void AddComponent(cComponent component);



};

struct cComponent {
    
};