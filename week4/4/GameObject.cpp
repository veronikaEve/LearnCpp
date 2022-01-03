#include "GameObject.h"

int GameObject::instances = 0;

GameObject::GameObject(int newId) {
    id = newId;
    instances ++;
}
