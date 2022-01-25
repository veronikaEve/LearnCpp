#include <iostream>
#include "Weapon.h"

int main() {
	static Weapon newWeapon;

	try {
		newWeapon.Fire();
	} catch (NoAmmoException& error) {
		cout << "error: " << error.what() << endl;
	} catch (JammedException& error) {
		cout << "error: " << error.what() << endl;
	}

	try {
		newWeapon.Reload();
		newWeapon.Reload();
	} catch (MagazineFullException& error) {
		cout << "error: " << error.what() << endl;
	}

}
