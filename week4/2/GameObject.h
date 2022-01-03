#ifndef INC_1_GAMEOBJECT_H
#define INC_1_GAMEOBJECT_H

class GameObject {
public:
    int id;

    GameObject() {
        id=1;
    }

    GameObject(int newId) {
        id = newId;
    }
};


#endif //INC_1_GAMEOBJECT_H
