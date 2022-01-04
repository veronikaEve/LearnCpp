#include "VehicleManager.h"
#include <iostream>

using namespace std;

bool VehicleManager::Add(Vehicle *v) {
    if (count < maxVehicles){
        vehicles[count] = v;
        count++;
        return true;
    }
    else {
        return false;
    }
}

void VehicleManager::Display() {
    for (int i = 0; i < count ; ++i) {
        this->vehicles[i]->Display();
    }
}

int VehicleManager::GetCount() {
    return count;
}

Vehicle **VehicleManager::GetList() {
    return vehicles;
}

VehicleManager::VehicleManager(int size):maxVehicles(size) {
    vehicles = new Vehicle*[maxVehicles];
    count = 0;
}

VehicleManager::~VehicleManager(void) {}

// Exercise 8
void VehicleManager::DamagedVehicles(){
    cout << "Damaged Vehicles beep boop " << endl;
    for(int n=0;n < count;n++){
        if (vehicles[n]->damage >= 35){
            vehicles[n]->Display();
        }
    }
}