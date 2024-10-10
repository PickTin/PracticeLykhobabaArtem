#ifndef ANIMAL_H
#define ANIMAL_H

#include "Creature.h"

class Animal : public Creature {
private:
    std::string species;
    std::string genus;
    double weight;

public:
    Animal(const std::string& name, const std::string& species, const std::string& genus, double weight);
    void showInfo() const override;
};

#endif // ANIMAL_H
