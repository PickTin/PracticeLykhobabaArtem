#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"

class Mammal : public Animal {
protected:
    double weight;

public:
    Mammal(const string& name, const string& species, const string& habitat, double weight);
    void showInfo();
};

#endif // MAMMAL_H
