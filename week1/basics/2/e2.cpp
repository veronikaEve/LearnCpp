#include <iostream>
using namespace std;

int main()
{
    string name;
    int ageInYears;
    int ageInDays;

    const int DAYS_IN_YEAR = 365;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> ageInYears;

    ageInDays = ageInYears * DAYS_IN_YEAR;

    cout << "Your name is " << name << ", and you are at least " << ageInDays << " days old :)";

    return 0; // exit code
}