#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"

class Bird : public Animal {
protected:
    bool isPredator;

public:
    Bird(const string& name, const string& species, const string& habitat, bool isPredator);
    void showInfo();
};

#endif // BIRD_H
