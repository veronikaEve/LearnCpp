#ifndef POLYMORPHISM_BOAT_H
#define POLYMORPHISM_BOAT_H


#include "Vehicle.h"

class Boat : public Vehicle {
public:
    Boat(int id, int damage);
    void Display();
};


#endif //POLYMORPHISM_BOAT_H
