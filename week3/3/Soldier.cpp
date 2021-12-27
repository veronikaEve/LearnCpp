#include "Soldier.h"

void Soldier::FireWeapon() {
    weapon->Fire();
}

Soldier::Soldier(Weapon *weapon) : weapon(weapon) {}

Soldier::~Soldier() {
}


