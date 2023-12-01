#include "Machine.h"
Machine::Machine() {
    this->material[0].setMaterial("Coffee", FILL);
    this->material[1].setMaterial("Sugar", FILL);
    this->material[2].setMaterial("CREAM", FILL);
    this->material[3].setMaterial("Water", FILL);
    this->material[4].setMaterial("Cup", FILL);
    this->coffee[0].setRecipe("보통 커피", new int[MATERIAL] {1, 0, 1, 1, 1});
    this->coffee[1].setRecipe("설탕 커피", new int[MATERIAL] {1, 1, 0, 1, 1});
    this->coffee[2].setRecipe("블랙 커피", new int[MATERIAL] {1, 0, 0, 1, 1});
}

bool Machine::operator-= (Recipe r) {
    Material* recipe = r.showMaterial();
    for (int i = 0; i < MATERIAL; i++) {
        if (this->material[i].getNumber() < recipe[i].getNumber())
            return false;
        else if (this->material[i].getName() != recipe[i].getName())
            return false;
    }
    for (int i = 0; i < MATERIAL; i++)
        this->material[i] -= recipe[i];
    return true;
}

bool Machine::make(int recipeIdx) {
    return ((*this) -= this->coffee[recipeIdx]);
}

void Machine::fill() {
    for (int i = 0; i < MATERIAL; i++)
        this->material[i].setNumber(FILL);
}

void Machine::run() {
    MachineUI::greeting();
    while (true) {
        MachineUI::showMaterial(this->material);
        int menu = MachineUI::getMenu(this->coffee, RECIPE);
        switch (menu) {
            case 0:
            case 1:
            case 2:
                if (make(menu)) MachineUI::making(this->coffee[menu].showRecipeName());
                else MachineUI::lacking();
                break;
            case 3:
                fill();
                MachineUI::filling();
                break;
            case 4:
                MachineUI::parting();
                return;
        }
    }
}