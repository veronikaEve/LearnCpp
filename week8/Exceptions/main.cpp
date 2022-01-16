#include <iostream>
#include "Weapon.h"

int main() {
	static Weapon newWeapon;

	try {
		newWeapon.Fire();
	} catch (NoAmmoException error) {
		cout << "error: " << error.what() << endl;
	}
}
