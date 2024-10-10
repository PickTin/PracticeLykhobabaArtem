#include "Bird.h"

Bird::Bird(const string& name, const string& species, const string& habitat, bool isPredator)
    : Animal(name, species, habitat), isPredator(isPredator) {}

void Bird::showInfo() {
    cout << "Bird: " << name << ", Species: " << species << ", Habitat: " << habitat
        << ", Predator: " << (isPredator ? "Yes" : "No") << endl;
}
