#include "Creature.h"

Creature::Creature(const string& name) : name(name) {}

void Creature::showInfo() {
    cout << "Creature: " << name << endl;
}
