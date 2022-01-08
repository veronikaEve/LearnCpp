#include "Elementalist.h"

Elementalist::~Elementalist() {

}

Elementalist::Elementalist(string name, int knowledge, int skill, int maxMagic, Elementalist::TElements specialism)
	: specialism(specialism),
		Wizard(name, knowledge, skill, maxMagic) {

}

void Elementalist::Display() {
	Wizard::Display();
	switch (specialism) {
		case earth:
			cout << "Earth" << endl;
		case wind:
			cout << "Wind" << endl;
		case fire:
			cout << "Fire" << endl;
		case water:
			cout << "Water" << endl;
		default:
			cout << "Default output" << endl;
	}
}
