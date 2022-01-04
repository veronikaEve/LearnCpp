#include <iostream>
#include "Vehicle.h"
#include "Boat.h"
#include "Car.h"
#include "VehicleManager.h"

int main() {

//    Vehicle V1(1,30);
//    Boat B1(2,50);
//    Car C1(3,40);
//
//    V1.Display();
//    B1.Display();
//    C1.Display();

//    Vehicle *vehicles[5];
//    vehicles[0] = new Car(1, 35);
//    vehicles[1] = new Boat(2, 55);
//    vehicles[2] = new Vehicle(3, 30);
//    vehicles[3] = new Car(4, 25);
//    vehicles[4] = new Boat(5, 65);
//
//    for (int i = 0; i < 5 ; ++i) {
//        vehicles[i]->Display();
//    }

    VehicleManager *vm = new VehicleManager(10);
    vm->Add( new Car(1, 35));
    vm->Add(new Boat(2,55));
    vm->Add(new Vehicle(3,30));
    vm->Add(new Car(4,25));
    vm->Add(new Boat(5,65));
    vm->Display();

}
