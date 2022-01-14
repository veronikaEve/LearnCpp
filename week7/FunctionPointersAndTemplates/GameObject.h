#ifndef FUNCTIONPOINTERSANDTEMPLATES_GAMEOBJECT_H
#define FUNCTIONPOINTERSANDTEMPLATES_GAMEOBJECT_H

#include <iostream>
using namespace std;

template <class T>
class GameObject {
private:
	int id;
	T position[3];

public:
	GameObject(int id, T x, T y, T z);

	void Draw();
	int *Move(T x, T y, T z);

};


#endif //FUNCTIONPOINTERSANDTEMPLATES_GAMEOBJECT_H
