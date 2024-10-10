#include "Animal.h"
#include <iostream>

Animal::Animal(const std::string& name, const std::string& species, const std::string& genus, double weight)
    : Creature(name), species(species), genus(genus), weight(weight) {}

void Animal::showInfo() const {
    std::cout << "Animal: " << name << ", Species: " << species << ", Genus: " << genus
        << ", Weight: " << weight << " kg" << std::endl;
}
