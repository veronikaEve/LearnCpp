// Define a global variable named salary of type int and assign it a value of 20000.
// Display its value within main.
// Now define a second global with the same name and type and assign it the value 15000 (the income from your second job).
// Display its value within main.
// Why does the complier not like this?
// Use two namespaces named firstJob and secondJob overcome this problem

#include <iostream>
using namespace std;

namespace firstJob
{
    int salary = 20000;
};

namespace secondJob
{
    int salary = 15000;
};

int main()
{
    cout << "firstJob: " << firstJob::salary << endl;
    cout << "secondJob: " << secondJob::salary << endl;
}