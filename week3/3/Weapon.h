#ifndef INC_3_WEAPON_H
#define INC_3_WEAPON_H
#include <iostream>
#pragma once

using namespace std;

class Weapon {
private:
    int rounds;

public:
    Weapon(void);
    ~Weapon(void);

    bool Fire();
    void Reload();

};

#endif //INC_3_WEAPON_H
