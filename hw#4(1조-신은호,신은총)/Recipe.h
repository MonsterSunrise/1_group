#ifndef RECIPE_H
#define RECIPE_H
#include "Material.h"
class Recipe {
    std::string name;
    Material material[MATERIAL];
public:
    Recipe() {}
    void setRecipe(std::string name, int* size);
    std::string showRecipeName() { return this->name; }
    Material* showMaterial() { return this->material; }
};
#endif