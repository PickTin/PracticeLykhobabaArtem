#ifndef UNGULATE_H
#define UNGULATE_H

#include "Mammal.h"

class Ungulate : public Mammal {
protected:
    string hoofType;

public:
    Ungulate(const string& name, const string& species, const string& habitat, double weight, const string& hoofType);
    void showInfo();
};

#endif // UNGULATE_H
