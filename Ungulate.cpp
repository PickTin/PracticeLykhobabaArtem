#include "Ungulate.h"
#include <iostream>

Ungulate::Ungulate(const std::string& name, const std::string& habitat)
    : Creature(name), habitat(habitat) {}

void Ungulate::showInfo() const {
    std::cout << "Ungulate: " << name << ", Habitat: " << habitat << std::endl;
}
