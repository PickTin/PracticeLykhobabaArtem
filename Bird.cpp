#include "Bird.h"
#include <iostream>

Bird::Bird(const std::string& name, bool isPredator)
    : Creature(name), isPredator(isPredator) {}

void Bird::showInfo() const {
    std::cout << "Bird: " << name << ", Predator: " << (isPredator ? "Yes" : "No") << std::endl;
}
