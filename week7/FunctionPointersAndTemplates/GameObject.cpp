#include "GameObject.h"

GameObject::GameObject(int id, int x, int y, int z) :id(id) {
	position[0] = x;
	position[1] = y;
	position[2] = z;

}

void GameObject::Draw() {
	cout << "GameObject " << GameObject::id << endl;
}

int *GameObject::Move(int x, int y, int z) {
	position[0] += x;
	position[1] += y;
	position[2] += z;
	return position;
}
