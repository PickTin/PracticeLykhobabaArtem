#include "Animal.h"

Animal::Animal(const string& name, const string& species, const string& habitat)
    : Creature(name), species(species), habitat(habitat) {}

void Animal::showInfo() {
    cout << "Animal: " << name << ", Species: " << species << ", Habitat: " << habitat << endl;
}
