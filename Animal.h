#ifndef ANIMAL_H
#define ANIMAL_H

#include "Creature.h"

class Animal : public Creature {
protected:
    string species;
    string habitat;

public:
    Animal(const string& name, const string& species, const string& habitat);
    void showInfo();
};

#endif // ANIMAL_H
