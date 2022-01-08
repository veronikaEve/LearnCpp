#ifndef OOP_REVISION_ELEMENTALIST_H
#define OOP_REVISION_ELEMENTALIST_H

#include "Wizard.h"

class Elementalist: public Wizard{
public:
	enum TElements { earth, wind, fire, water };

	~Elementalist();

	Elementalist(string name, int knowledge, int skill, int maxMagic, TElements specialism );
	void Display();

private:
	TElements specialism;

};


#endif //OOP_REVISION_ELEMENTALIST_H
