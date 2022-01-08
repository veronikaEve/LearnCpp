#ifndef OOP_REVISION_SPELL_H
#define OOP_REVISION_SPELL_H

#include "Magic.h"

class Spell: public Magic {
private:
	string words;

public:
	~Spell();

	Spell(string words);
	void Display();

};


#endif //OOP_REVISION_SPELL_H
