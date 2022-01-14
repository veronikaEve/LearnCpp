#ifndef FUNCTIONPOINTERSANDTEMPLATES_GAMEOBJECT_H
#define FUNCTIONPOINTERSANDTEMPLATES_GAMEOBJECT_H

#include <iostream>
using namespace std;

class GameObject {
private:
	int id;
	int position[3];

public:
	GameObject(int id, int x, int y, int z);

	void Draw();
	int *Move(int x, int y, int z);

};


#endif //FUNCTIONPOINTERSANDTEMPLATES_GAMEOBJECT_H
