#ifndef UI_H
#define UI_H
#include <iostream>
#include <iomanip>
#include "Material.h"
#include "Recipe.h"

class MachineUI {
    static bool isErr();
public:
    static void greeting();
    static void parting();
    static void filling();
    static void making(std::string name);
    static void lacking();
    static int getMenu(Recipe* r, int size);
    static void showMaterial(Material* m);
};
#endif

