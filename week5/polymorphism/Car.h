#ifndef POLYMORPHISM_CAR_H
#define POLYMORPHISM_CAR_H


#include "Vehicle.h"

class Car : public Vehicle{

public:
    Car(int id, int damage);
    void Display();
};


#endif //POLYMORPHISM_CAR_H
