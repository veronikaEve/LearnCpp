#include <iostream>
#include "Vehicle.h"
#include "Boat.h"
#include "Car.h"

int main() {

    Vehicle V1(1,30);
    Boat B1(2,50);
    Car C1(3,40);

    V1.Display();
    B1.Display();
    C1.Display();
}
