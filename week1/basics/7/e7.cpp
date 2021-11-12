// From within the main function display the following information.
// 1. The number of letters in your surname.
// 2. The first character
// 3. The last character.

#include "../6/MyVars.h"
#include <iostream>

using namespace std;

int main()
{

    cout << "The number of letters in " << surname << " is: " << surname.length() << endl;

    cout << "The first character of this surname is: " << surname[0] << endl;

    cout << "The last character of this surname is: " << surname[surname.length() - 1] << endl;
}
