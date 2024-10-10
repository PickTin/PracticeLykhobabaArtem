#include "Task1.h"
#include "Ungulate.h"
#include "Bird.h"
#include "Animal.h"
#include <vector>

//Task1
 

//int main() {
//    D3 obj(1, 2, 3, 4, 5);
//    obj.show_D3(); 
//
//    return 0;
//}



int main() {
    std::vector<Creature*> creatures;

    creatures.push_back(new Ungulate("Horse", "Grassland"));
    creatures.push_back(new Bird("Eagle", true));
    creatures.push_back(new Animal("Elephant", "Loxodonta", "Elephas", 6000));

    for (const auto& creature : creatures) {
        creature->showInfo();
    }

    for (auto& creature : creatures) {
        delete creature;
    }

    return 0;
}
