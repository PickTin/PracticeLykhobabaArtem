#ifndef CREATURE_H
#define CREATURE_H

#include <iostream>
#include <string>

using namespace std;

class Creature {
protected:
    string name;

public:
    Creature(const string& name);
    void showInfo();
};

#endif // CREATURE_H
