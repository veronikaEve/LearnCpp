#include "GameObject.h"
template<class T>
GameObject<T>::GameObject(int id, T x, T y, T z) :id(id) {
	position[0] = x;
	position[1] = y;
	position[2] = z;

}
template<class T>
void GameObject<T>::Draw() {
	cout << "GameObject " << GameObject::id << endl;
}

template<class T>
int *GameObject<T>::Move(T x, T y, T z) {
	position[0] += x;
	position[1] += y;
	position[2] += z;
	return position;
}
