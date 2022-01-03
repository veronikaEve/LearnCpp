#include <iostream>
#include "GameObject.h"

using namespace std;

int main() {

    GameObject obj2(45);
    GameObject obj3(45);
    GameObject obj4(45);
    GameObject obj5(45);

    cout << GameObject::instances << endl;
}
