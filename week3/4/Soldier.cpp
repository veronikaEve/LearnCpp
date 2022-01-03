#include "Soldier.h"

void Soldier::FireWeapon() {
    if(movementState != MovementStates::crawl) {
        cout << "You chose to fire your weapon" << endl;
        weapon->Fire();
    } else {
        cout << "You're crawling!" << endl;
    }
}

Soldier::Soldier(Weapon *weapon) : weapon(weapon) {}

Soldier::~Soldier() {
}


