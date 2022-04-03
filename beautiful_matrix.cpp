#include <bits/stdc++.h>
using namespace std;
int main()
{
    int mat[6][6];
    int i = 0, j = 0, x = 0, y = 0;
    for (i = 1; i < 6; i++)
    {
        for (j = 1; j < 6; j++)
        {
            cin >> mat[i][j];
            if (mat[i][j] == 1)
            {
                x = i;
                y = j;
            }
        }
    }
    int moves = 3 - x;
    if (moves < 0)
    {
        moves = (-1) * moves;
    }
    int moves_2 = 3 - y;
    if (moves_2 < 0)
    {
        moves_2 = (-1) * moves_2;
    }
    cout << moves + moves_2;
    return 0;
}