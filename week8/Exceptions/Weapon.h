#ifndef EXCEPTIONS_WEAPON_H
#define EXCEPTIONS_WEAPON_H

#include <iostream>
#include "NoAmmoException.h"
#include "MagazineFullException.h"
#include "JammedException.h"

using namespace std;

class Weapon {
private:
	int rounds;
	bool jammed;

	NoAmmoException ENoAmmo;
	MagazineFullException EMagFull;
	JammedException EJammed;
public:
	Weapon() {
		rounds = 0;
//		jammed = true;
	}

	void Fire() throw(JammedException, NoAmmoException) {
		if (jammed) throw EJammed;
		if (rounds < 1) throw ENoAmmo;
		cout << "Weapon Fired\n" << endl;
		rounds--;
	}

	void Reload() throw(MagazineFullException) {
		if (rounds == 10) throw EMagFull;
		rounds += 10;
		if (rounds > 10) rounds = 10;
		cout << "Weapon Reloaded\n" << endl;

	}
};

#endif //EXCEPTIONS_WEAPON_H
