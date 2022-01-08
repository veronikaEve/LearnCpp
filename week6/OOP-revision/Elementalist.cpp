#include "Elementalist.h"

Elementalist::~Elementalist() {

}

Elementalist::Elementalist(string name, int knowledge, int skill, int maxMagic, Elementalist::TElements specialism)
	:Wizard(name, knowledge, skill, maxMagic),
	 specialism(specialism) {

}

void Elementalist::Display() {
	Wizard::Display();
	cout << "Specialist Element: ";
	switch (specialism) {
		case earth:
			cout << "Earth" << endl;
			break;
		case wind:
			cout << "Wind" << endl;
			break;
		case fire:
			cout << "Fire" << endl;
			break;
		case water:
			cout << "Water" << endl;
			break;
	}
}
