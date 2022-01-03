#ifndef INC_3_WEAPON_H
#define INC_3_WEAPON_H
#include <iostream>
#include "Person.h"

#pragma once

using namespace std;

class Weapon {
private:
    int rounds;

public:
    Weapon(void);
    ~Weapon(void);

    bool Fire(Person *myPerson);
    bool Fire(int burst, Person *myPerson);
    void Reload();

};

#endif //INC_3_WEAPON_H
