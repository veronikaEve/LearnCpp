#ifndef INC_3_WEAPON_H
#define INC_3_WEAPON_H
#include <iostream>
#pragma once

using namespace std;

class Weapon {
private:
    int rounds;

public:
    Weapon(int rounds);
    ~Weapon();

    bool Fire();
    void Reload();

};

#endif //INC_3_WEAPON_H
