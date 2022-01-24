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

// Why does putting everything in one block not work? After one exception I though the code should continue?
//	try {
//		newWeapon.Fire();
//		newWeapon.Reload();
//		newWeapon.Reload();
//	} catch (NoAmmoException error) {
//		cout << "error: " << error.what() << endl;
//	} catch (MagazineFullException error) {
//		cout << "error: " << error.what() << endl;
//	} catch (JammedException error) {
//		cout << "error: " << error.what() << endl;
//	}
// This doesn't work 🤔


}
