#include <iostream>
#include "Location.h"

using namespace std;

Location::Location() {}

Location::~Location() {}

Location::Location(int x, int y, int z) : x(x), y(y), z(z) {}


void Location::Display() {
    cout << " x: " << x << " y: " << y << " z: " << z << endl;
}

void Location::Set(int x, int y, int z) {
    Location::x = x;
    Location::y = y;
    Location::z = z;
}

