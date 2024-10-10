#ifndef BIRD_H
#define BIRD_H

#include "Creature.h"

class Bird : public Creature {
private:
    bool isPredator;

public:
    Bird(const std::string& name, bool isPredator);
    void showInfo() const override;
};

#endif // BIRD_H
