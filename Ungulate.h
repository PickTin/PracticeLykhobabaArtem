#ifndef UNGULATE_H
#define UNGULATE_H

#include "Creature.h"

class Ungulate : public Creature {
private:
    std::string habitat;

public:
    Ungulate(const std::string& name, const std::string& habitat);
    void showInfo() const override;
};

#endif // UNGULATE_H
