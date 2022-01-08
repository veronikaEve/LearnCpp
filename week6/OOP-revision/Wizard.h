#ifndef OOP_REVISION_WIZARD_H
#define OOP_REVISION_WIZARD_H
#pragma once

#include <iostream>
#include "Magic.h"

class Wizard {
private:
	int knowledge;
	int magicCount;
	Magic** magicInventory;
	string name;
	int skill;

public:
	~Wizard();

	Wizard(string name,int knowledge, int skill, int maxMagic);
	void AddMagic(Magic* magic);
	void Display();
};


#endif //OOP_REVISION_WIZARD_H
