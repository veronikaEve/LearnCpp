#include "Weapon.h"

Weapon::Weapon(void) {
    rounds = 10;
}

bool Weapon::Fire(Person *myPerson) {
    if (rounds != 0) {
        cout << "Firing Weapon 💥" << endl;
        rounds = rounds-1;
        cout << rounds << endl;
        myPerson->Damage(1);
        return true;
    } else {
        cout << "You have no ammo!" << endl;
        return false;
    }
}

bool Weapon::Fire(int burst, Person *myPerson) {
    if (burst > rounds) burst = rounds;
    if (rounds > 0) {
        rounds = rounds-burst;
        cout << "Automatic Weapon Fire" << endl;
        myPerson->Damage(burst);
        return true;
    } else {
        cout << "You don't have enough ammo" << endl;
        return false;
    }
}

void Weapon::Reload() {
    rounds = rounds+10;
    cout << "Reloading" << endl;
}