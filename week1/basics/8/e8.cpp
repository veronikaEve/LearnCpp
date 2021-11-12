#include <iostream>
using namespace std;

// Part 1

int main()
{
    int x = 10;
    int *i;
    i = &x;

    *i = 30; // to change the value to 30

    cout << "*i outputs " << *i << endl;
    cout << "i outputs " << i << endl;
}

// Part 2

// Why will this code generate a compiler error?
//   char married = 'Y';
//   float *pChar = &married;

// The pointer must be of the same type as the variable's address it holds