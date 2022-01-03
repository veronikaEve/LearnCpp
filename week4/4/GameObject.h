#ifndef INC_1_GAMEOBJECT_H
#define INC_1_GAMEOBJECT_H

class GameObject {
private:
    GameObject();

public:
    int id;
    static int instances;

    GameObject(int newId);
};


#endif //INC_1_GAMEOBJECT_H
