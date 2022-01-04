#include "Vehicle.h"
#include <iostream>

using namespace std;

Vehicle::Vehicle(int id, int damage):id(id),damage(damage){

}

void Vehicle::Display() {
    cout << "Vehicle " << "id: " << id << endl;
}
