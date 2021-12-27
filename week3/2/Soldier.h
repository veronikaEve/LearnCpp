#ifndef INC_2_SOLDIER_H
#define INC_2_SOLDIER_H
#pragma once

#include "Person.h"

class Soldier : public Person {

public:
    Soldier();
    ~Soldier();

    void FireWeapon();
};

#endif //INC_2_SOLDIER_H
