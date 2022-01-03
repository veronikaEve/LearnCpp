#ifndef INC_2_SOLDIER_H
#define INC_2_SOLDIER_H
#pragma once

#include "Person.h"
#include "Weapon.h"

class Soldier : public Person {
public:
    Weapon *weapon;

    Soldier(Weapon *weapon);
    ~Soldier();

    void FireWeapon(Person *myPerson);
    void FireWeapon(int burst, Person *person);
};

#endif //INC_2_SOLDIER_H
