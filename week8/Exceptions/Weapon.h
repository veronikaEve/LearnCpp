#ifndef EXCEPTIONS_WEAPON_H
#define EXCEPTIONS_WEAPON_H

#include <iostream>
using namespace std;

class Weapon {
private:
	int rounds;
	bool jammed;

public:
	Weapon() {
		rounds = 0;
	}

	void Fire() {
		if (rounds < 1)
			throw (1);
		cout << "Weapon Fired\n" << endl;
		rounds--;
	}

	void Reload() {
		rounds += 10;
		if (rounds > 10)
			rounds = 10;
		cout << "Weapon Reloaded \n" << endl;
	}
};

#endif //EXCEPTIONS_WEAPON_H
