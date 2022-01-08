#include "Elementalist.h"

Elementalist::~Elementalist() {

}

Elementalist::Elementalist(string name, int knowledge, int skill, int maxMagic, Elementalist::TElements specialism)
	:Wizard(name, knowledge, skill, maxMagic),
	 specialism(specialism) {

}

void Elementalist::Display() {
	Wizard::Display();
	cout << "Specialist Element: " << ends;
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
