#include <iostream>

using namespace std;

const char PLAYER_1 = 'O';
const char PLAYER_2 = 'X';
char board[3][3] = {0};

void Initialise()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = '-';
        }
    }
}

void Display()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << board[i][j] << "\t" << ends;
        }
        cout << "\t" << endl;
    }
}

int main()
{
    Initialise();
    Display();
}