// Display the current time in the standard format.
// Then display the seconds elapsed since 01/01/1970
// Finally display the individual values for the hours, minutes and seconds.

#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    time_t rawtime;
    struct tm *timeinfo;

    time(&rawtime);
    timeinfo = localtime(&rawtime);

    cout << "The current time is " << asctime(timeinfo) << endl;
    cout << "Seconds elapsed since 01/01/1970 " << rawtime << endl;
    cout << timeinfo->tm_hour << ":" << timeinfo->tm_min << ":" << timeinfo->tm_sec << endl;
    // Access individual values using dereference operator ->
}