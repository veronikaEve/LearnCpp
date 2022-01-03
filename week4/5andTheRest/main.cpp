#include <iostream>
#include "GameObject.h"

using namespace std;

int main() {

    GameObject obj2(45, new Location(1,1,1));

    GameObject obj3(45, new Location(2,2,2));
    GameObject obj4(45, new Location(3,3,3));
    GameObject obj5(45, new Location(4,4,4));

//    cout << obj2.location->x << endl;

    obj2.location->Display();
    obj3.location->Display();
    obj4.location->Display();
    obj5.location->Display();

//    cout << ::instances << endl;
}
