#include "Task1.h"
#include "Creature.h"
#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Ungulate.h"

using namespace std;


//Task1
 

//int main() {
//    D3 obj(1, 2, 3, 4, 5);
//    obj.show_D3(); 
//
//    return 0;
//}





int main() {
    Creature creature("Generic Creature");
    creature.showInfo();

    Animal animal("Wolf", "Canine", "Forests");
    animal.showInfo();

    Bird bird("Eagle", "Aquila chrysaetos", "Mountains", true);
    bird.showInfo();

    Mammal mammal("Elephant", "Elephantidae", "Savannas", 6000);
    mammal.showInfo();

    Ungulate ungulate("Horse", "Equus ferus caballus", "Grasslands", 500, "Solid Hoof");
    ungulate.showInfo();


    Creature* creatures[5];
    creatures[0] = &creature;
    creatures[1] = &animal;
    creatures[2] = &bird;
    creatures[3] = &mammal;
    creatures[4] = &ungulate;

    
    for (int i = 0; i < 5; i++) {
        creatures[i]->showInfo(); 
    }

}
