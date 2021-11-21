#include <iostream>

using namespace std;

const char PLAYER_1 = 'O';
const char PLAYER_2 = 'X';
char board[3][3];
int winningStates[8][3][2] = {
    {{0, 0}, {0, 1}, {0, 2}},
    {{1, 0}, {1, 1}, {1, 2}},
    {{2, 0}, {2, 1}, {2, 2}},
    {{0, 0}, {1, 0}, {2, 0}},
    {{0, 1}, {1, 1}, {2, 1}},
    {{0, 2}, {1, 2}, {2, 2}},
    {{0, 0}, {1, 1}, {2, 2}},
    {{0, 2}, {1, 1}, {2, 0}},

};

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
    /* initialize random seed: */
    srand(time(NULL));
    bool gameOver = false;
    int row = 0;
    int col = 0;
    char player = PLAYER_1;
    int count = 0;

    Initialise();
    Display();

    while (!gameOver)
    {
        row = rand() % 3;
        col = rand() % 3;

        while (IsFree(row, col)) //was this written wrong in the pdf? it asked for not free :/ but it doesn't work that way
        {
            SetValue(row, col, player);

            if (player == PLAYER_1)
            {
                player = PLAYER_2;
            }
            else
            {
                player = PLAYER_1;
            }

            count++;

            if (count == 9)
            {
                gameOver = true;
            }

            Display();
        }
    }
}