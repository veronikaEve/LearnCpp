#include <iostream>

using namespace std;

const char PLAYER_1 = 'O';
const char PLAYER_2 = 'X';
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

void Initialise(char board[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = '-';
        }
    }
}

void Display(char board[3][3])
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

void SetValue(int row, int col, char symbol, char board[3][3])
{
    board[row][col] = symbol;
}

bool IsFree(int row, int col, char board[3][3])
{
    if (board[row][col] == '-')
    {
        return true;
    }
}

bool HasWon(char symbol, char board[3][3])
{
    int row = 0;
    int col = 0;
    bool match = false;

    for (int m = 0; m <= 7; m++)
    {
        for (int s = 0; s <= 2; s++)
        {
            row = winningStates[m][s][0];
            col = winningStates[m][s][1];

            if (board[row][col] == symbol)
            {
                match = true;
            }
            else
            {
                match = false;
                break;
            }
        }

        if (match == true)
        {
            return true;
        }
    }
    return false;
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
    char board[3][3];

    Initialise(board);
    Display(board);

    while (!gameOver)
    {
        row = rand() % 3;
        col = rand() % 3;

        while (IsFree(row, col, board))
        {
            SetValue(row, col, player, board);

            if (player == PLAYER_1)
            {
                player = PLAYER_2;
            }
            else
            {
                player = PLAYER_1;
            }

            gameOver = HasWon(player, board);
            Display(board);
            cout << endl;
        }
    }
}