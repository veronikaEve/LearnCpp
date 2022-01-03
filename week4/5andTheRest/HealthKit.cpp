#include <iostream>
#include "HealthKit.h"

using namespace std;

HealthKit::HealthKit(int newId, Location *location) : GameObject(newId, location) {
    cout << "HealthKit Constructor Invoked"<< endl;
}

HealthKit::~HealthKit() {
}



