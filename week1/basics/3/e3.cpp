// Extend exercise 2 by defining a pointer(named pAge) to an integer type and assign it the address of the variable age.
// Output the address contained within the pointer to the screen.
// Assign the value 10 to the age variable and output to the display both age and that of the value pointed to by pAge.
// Both should display the same value as the pointer contains the address of the age variable.

// A pointer is a variable that contains the memory address of a variable.
// Pointers are defined using the asterisk symbol.

#include <iostream>
using namespace std;

int main()
{
    int age;

    int *pAge = &age;

    cout << "the address of pAge is " << pAge << "\n";

    age = 10;

    cout << "the value of age is " << age << ", and the value pointed to by pAge is " << *pAge << "\n";
}