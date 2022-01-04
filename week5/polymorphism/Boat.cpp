#include "Boat.h"
#include <iostream>

using namespace std;

Boat::Boat(int id, int damage) : Vehicle(id, damage) {}

void Boat::Display() {
//    Vehicle::Display();
    cout << "Boat " << "id: " << id << endl;
}
