#include "Car.h"
#include <iostream>

using namespace std;

Car::Car(int id, int damage) : Vehicle(id, damage) {

}

void Car::Display() {
//    Vehicle::Display();
    cout << "Car " << "id: " << id << endl;
}
