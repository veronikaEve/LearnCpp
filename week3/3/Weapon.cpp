#include "Weapon.h"

Weapon::Weapon(void) {
    rounds = 10;
}

bool Weapon::Fire() {
    if (rounds != 0) {
        cout << "Firing Weapon 💥" << endl;
        rounds = rounds-1;
        return true;
    } else {
        cout << "You have no ammo!" << endl;
        return false;
    }
}

void Weapon::Reload() {
    rounds = rounds+10;
    cout << "Reloading" << endl;
}
