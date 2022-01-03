#include "Soldier.h"

void Soldier::FireWeapon(Person *myPerson) {
    if(movementState != MovementStates::crawl) {
        cout << "You chose to fire your weapon" << endl;
        weapon->Fire(myPerson);
    } else {
        cout << "You're crawling!" << endl;
    }
}

void Soldier::FireWeapon(int burst, Person *myPerson) {
    if(movementState != MovementStates::crawl) {
        weapon->Fire(burst, myPerson);
    }
}

Soldier::Soldier(Weapon *weapon) : weapon(weapon) {}

Soldier::~Soldier() {
}



