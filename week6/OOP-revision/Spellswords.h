#ifndef OOP_REVISION_SPELLSWORDS_H
#define OOP_REVISION_SPELLSWORDS_H

#include "Wizard.h"

class Spellswords: public Wizard {
private:
	string weapon;

public:
	~Spellswords();

	Spellswords(string name, int knowledge, int skill, int maxMagic, string weapon);
	void Display();
};


#endif //OOP_REVISION_SPELLSWORDS_H
