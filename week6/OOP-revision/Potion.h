#ifndef OOP_REVISION_POTION_H
#define OOP_REVISION_POTION_H

#include "Magic.h"

class Potion: public Magic {
private:
	int dose;

public:
	~Potion();

	Potion(int dose);
	void Display();

};


#endif //OOP_REVISION_POTION_H
