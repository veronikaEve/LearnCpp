#include <iostream>
#include "GameObject.h"

using namespace std;

int GameObject::instances = 0;

GameObject::GameObject(int newId, Location *location) {
id = newId;
instances ++;
GameObject::location = location;

    cout << "GameObject Constructor Invoked"<< endl;
}

//Or
//GameObject::GameObject(int newId,Location *location):id(newId),location(location){
//    instances ++;
//}

GameObject::~GameObject() {}

GameObject::GameObject(GameObject &obj) {
    location = new Location(obj.location->x,obj.location->y,obj.location->z);
}
