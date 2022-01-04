#ifndef POLYMORPHISM_VEHICLEMANAGER_H
#define POLYMORPHISM_VEHICLEMANAGER_H


#include "Vehicle.h"

class VehicleManager {
private:
    int count;
    int maxVehicles;
    Vehicle** vehicles;

public:
    bool Add(Vehicle *v);
    void Display();
    int GetCount();
    Vehicle** GetList();

    VehicleManager(int size);
    ~VehicleManager(void);
};


#endif //POLYMORPHISM_VEHICLEMANAGER_H
