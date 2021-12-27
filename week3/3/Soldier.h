#ifndef INC_2_SOLDIER_H
#define INC_2_SOLDIER_H
#pragma once

#include "Person.h"
#include "Weapon.h"

class Soldier : public Person {
private:
    Weapon *weapon{};

public:

    Soldier(Weapon *weapon);
    ~Soldier();

    void FireWeapon();
};

#endif //INC_2_SOLDIER_H
