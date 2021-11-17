/* 
Create a new C++ console project within Visual Studio.
Within the main function create a statically declared array named scores, to store 100 player scores (of type int).
Within a loop assign each a random score between 0 and 100.
Record the number of scores that lie within the following ranges within a second array named ranges that contains 4 elements
• Novice 0..40
• Intermediate 41..60
• Advanced 61..80
• Hardcore 81..100
and display the number of values within each range.
Note: As local variables are not automatically initialised with a default value, you will
have to explicitly initialise the elements of ranges.
*/

#include <iostream>

using namespace std;

int main()
{
    int scores[100];

    int novice = 0;
    int intermediate = 0;
    int advanced = 0;
    int hardcore = 0;

    for (int index = 0; index < 100; index++)
    {
        scores[index] = rand() % 100;

        if (0 <= scores[index] && scores[index] <= 40)
        {
            novice++;
        }
        else if (41 <= scores[index] && scores[index] <= 60)
        {
            intermediate++;
        }
        else if (61 <= scores[index] && scores[index] <= 80)
        {
            advanced++;
        }
        else if (81 <= scores[index] && scores[index] <= 100)
        {
            hardcore++;
        }
    }

    cout << "There are " << novice << " novice values" << endl;
    cout << "There are " << intermediate << " intermediate values" << endl;
    cout << "There are " << advanced << " advanced values" << endl;
    cout << "There are " << hardcore << " hardcore values" << endl;
}