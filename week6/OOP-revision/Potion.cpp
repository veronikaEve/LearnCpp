#include "Potion.h"

Potion::~Potion() {

}

Potion::Potion(int dose):dose(dose) {

}

void Potion::Display() {
	cout << "Potion dose: " << dose << endl;
}