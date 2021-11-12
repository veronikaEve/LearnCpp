// Extend exercise 3 by define a reference to an integer type named rAge and assign it the variable age.
// Assign the value 19 to age and display both its value and that of the reference.
// As in exercise 3 both values should be the same.
// This time the reference points to the variable age.

// Reference is an alias for a variable, through which the data within the variable can be modified.
// The reference holds the address of a variable.
// The reference is declared using the reference operator &

#include <iostream>
using namespace std;

int main()
{
    int age;

    int &rAge = age;

    age = 19;

    cout << "the value of age is " << age << ", and the reference value of rAge is " << rAge << "\n";
}