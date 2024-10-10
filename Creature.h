#ifndef CREATURE_H
#define CREATURE_H

#include <string>

class Creature {
protected:
    std::string name;

public:
    Creature(const std::string& name);
    virtual void showInfo() const = 0;
    virtual ~Creature();
};

#endif // CREATURE_H
