#include <iostream>
#include "Wizard.h"
#include "Elementalist.h"
#include "Spellswords.h"
#include "Potion.h"
#include "Transformation.h"
#include "Spell.h"

int main() {
	Wizard **wizards = new Wizard*[2];
	wizards[0] = new Elementalist("Fred",80,20,5,Elementalist::fire);
	wizards[1] = new Spellswords("John",60,50,3,"Wand");

	wizards[0]->AddMagic(new Potion(50));
	wizards[0]->AddMagic(new Transformation("Cat"));
	wizards[1]->AddMagic(new Potion(30));
	wizards[1]->AddMagic(new Spell("Abra cadabra"));
	wizards[1]->AddMagic(new Transformation("Bird"));

	for(int n=0;n < 2;n++) {
		wizards[n]->Display();
	}
}
