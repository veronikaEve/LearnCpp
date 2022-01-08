#include "Spell.h"

Spell::~Spell() {

}

Spell::Spell(string spellWords):words(spellWords) {

}

void Spell::Display() {
	cout << "Spell Words: " << words << endl;
}

//Spell::Spell(const string &words) : words(words) { }
// ^ This was the generated constructor for words.
