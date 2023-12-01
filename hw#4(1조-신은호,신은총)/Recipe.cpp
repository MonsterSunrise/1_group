#include "Recipe.h"

void Recipe::setRecipe(std::string name, int* size) {
    this->name = name;
    this->material[0].setMaterial("Coffee", size[0]);
    this->material[1].setMaterial("Sugar", size[1]);
    this->material[2].setMaterial("CREAM", size[2]);
    this->material[3].setMaterial("Water", size[3]);
    this->material[4].setMaterial("Cup", size[4]);
    delete[] size;
}
