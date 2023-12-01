#ifndef  MATERIAL_H
#define MATERIAL_H
#define MATERIAL 5
#include <string>
class Material {
    std::string name;
    int number;
public:
    Material(std::string name = "", int number = 0) { this->name = name; this->number = number; }
    void setMaterial(std::string name, int number) { this->name = name; this->number = number; }
    void setName(std::string name) { this->name = name; }
    void setNumber(int number) { this->number = number; }
    std::string getName() { return this->name; }
    int getNumber() { return this->number; }
    bool operator -= (Material a) {
        if (this->number < a.number) return false;
        else if (this->name != a.name) return false;
        this->number -= a.number;
        return true;
    }
};
#endif

