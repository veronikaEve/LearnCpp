#ifndef POLYMORPHISM_VEHICLE_H
#define POLYMORPHISM_VEHICLE_H


class Vehicle {
private:
    int damage;

public:
    int id;

    Vehicle(int id, int damage);
    virtual void Display();
};


#endif //POLYMORPHISM_VEHICLE_H
