#include <iostream>
#include "GameObject.h"

using namespace std;

int GameObject::instances = 0;

GameObject::GameObject(int newId, Location *location) {
id = newId;
instances ++;
GameObject::location = location;
}

//Or
//GameObject::GameObject(int newId,Location *location):id(newId),location(location){
//    instances ++;
//}

GameObject::~GameObject() {}
