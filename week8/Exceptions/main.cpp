#include <iostream>
#include "Weapon.h"

int main() {

	static Weapon newWeapon;
	try {
		newWeapon.Fire();
	} catch (int error) {
		cout << "error: " << error << endl;
	}
}
