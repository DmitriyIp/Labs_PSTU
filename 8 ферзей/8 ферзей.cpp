#include <iostream>
using namespace std;

int board[8][8];

int test(int c, int r)
{
    for (int i = 0; i < c; i++)
    {
        if (board[i][r])
            return 0;
        if (r - c + i >= 0)
            if (board[i][r - c + i])
                return 0;
        if (r + c - i < 8)
            if (board[i][r + c - i])
                return 0;
    }
    return 1;
}

int vert(int i)
{
    if (i == 8)
        return 1;
    for (int j = 0; j < 8; j++)
        if (test(i, j))
        {
            board[i][j] = 1;
            if (vert(i + 1))
                return 1;
            board[i][j] = 0;
        }
    return 0;
}

int main()
{
    vert(0);
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
            cout << (board[i][j] ? "Q " : ". ");
        cout << endl;
    }
    return 0;
}
