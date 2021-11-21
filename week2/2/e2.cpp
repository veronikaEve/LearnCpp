#include <iostream>

using namespace std;

const char PLAYER_1 = 'O';
const char PLAYER_2 = 'X';
char board[3][3];

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

void SetValue(int row, int col, char symbol)
{
    board[row][col] = symbol;
}

bool IsFree(int row, int col)
{
    if (board[row][col] == '-')
    {
        return true;
    }
}

int main()
{
    Initialise();
    Display();
}