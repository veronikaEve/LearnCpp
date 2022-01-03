#ifndef INC_1_GAMEOBJECT_H
#define INC_1_GAMEOBJECT_H

#include "Location.h"

class GameObject {
private:
    GameObject();

public:
    int id;
    static int instances;
    Location *location;

    ~GameObject();
    GameObject(int newId, Location *location);
};


#endif //INC_1_GAMEOBJECT_H
