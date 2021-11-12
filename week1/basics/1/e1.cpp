// request a person’s first name (type string)
// and age (type int)
// and display the values as confirmation on a single line.
// Use the variable names name and age and declare them as local variables within the main function.
// See presentation on how to pause the console window, so that you can see the output from the program before the window closes

// to run in terminal, go into this directory and run ./e1 (./filename) or cmnd+r (from Compile Run extension)

#include <iostream> // implements I/O operations

using namespace std;

int main()
{
    string name;
    int age;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Your name is " << name << ", and you are " << age << " years old :)";

    return 0; // exit code
}