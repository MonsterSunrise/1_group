#ifndef MACHINE_H
#define MACHINE_H

#include "Material.h"
#include "Recipe.h"
#include "MachineUI.h"

#define RECIPE 3
#define FILL 3

class Machine {
    Material material[MATERIAL];
    Recipe coffee[RECIPE];
    bool operator -= (Recipe r);
    void fill();
    bool make(int recipeIdx);
public:
    Machine();
    void run();
};
#endif
