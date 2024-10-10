#include "Mammal.h"

Mammal::Mammal(const string& name, const string& species, const string& habitat, double weight)
    : Animal(name, species, habitat), weight(weight) {}

void Mammal::showInfo() {
    cout << "Mammal: " << name << ", Species: " << species << ", Habitat: " << habitat
        << ", Weight: " << weight << " kg" << endl;
}
