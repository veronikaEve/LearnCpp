#include "Weapon.h"

Weapon::Weapon(int rounds) : rounds(rounds) {
    rounds = 10;
}

bool Weapon::Fire() {
    if (rounds) {
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
