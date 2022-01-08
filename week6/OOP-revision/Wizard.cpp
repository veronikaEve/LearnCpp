#include "Wizard.h"

Wizard::~Wizard() {

}

Wizard::Wizard(string name, int knowledge, int skill, int maxMagic):name(name),knowledge(knowledge),skill(skill) {
	magicCount=0;

	magicInventory=new Magic*[maxMagic];
}

void Wizard::AddMagic(Magic *magic) {
		magicInventory[magicCount] = magic;
		magicCount++;
}

void Wizard::Display() {
	cout << "knowledge: " << knowledge << endl;
	cout << "magicCount: " << magicCount << endl;
	cout << "name: " << name << endl;
	cout << "skill: " << skill << endl;

	for (int i = 0; i < magicCount ; ++i) {
		this->magicInventory[i]->Display();
	}
}
