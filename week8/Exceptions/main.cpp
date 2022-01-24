#include <iostream>
#include "Weapon.h"
#include "MagazineFullException.h"

int main() {
	static Weapon newWeapon;

	try {
		newWeapon.Fire();
	} catch (NoAmmoException error) {
		cout << "error: " << error.what() << endl;
	}

	try {
		newWeapon.Reload();
		newWeapon.Reload();
	} catch (MagazineFullException error) {
		cout << "error: " << error.what() << endl;
	}

}
