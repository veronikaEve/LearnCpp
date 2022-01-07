#include "Transformation.h"

Transformation::~Transformation() {

}

Transformation::Transformation(string newCreature):creature(newCreature) {

}

void Transformation::Display() {
	Magic::Display();
	cout << "Transformation creature: " << creature << endl;
}


