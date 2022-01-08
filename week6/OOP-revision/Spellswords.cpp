#include "Spellswords.h"

Spellswords::~Spellswords() {

}

Spellswords::Spellswords(string name, int knowledge, int skill, int maxMagic, string weapon)
	: weapon(weapon),
			Wizard(name, knowledge, skill, maxMagic) {
}

void Spellswords::Display() {
	Wizard::Display();
	cout << "Weapon: " << weapon << endl;
}
