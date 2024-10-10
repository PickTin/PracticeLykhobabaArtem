#include "Ungulate.h"

Ungulate::Ungulate(const string& name, const string& species, const string& habitat, double weight, const string& hoofType)
    : Mammal(name, species, habitat, weight), hoofType(hoofType) {}

void Ungulate::showInfo() {
    cout << "Ungulate: " << name << ", Species: " << species << ", Habitat: " << habitat
        << ", Weight: " << weight << " kg, Hoof Type: " << hoofType << endl;
}
