#include <bits/stdc++.h>
using namespace std;
int main()
{
    int y = 0, w = 0;
    cin >> y >> w;
    int maxi = max(y, w);
    int numbers_left = 6 - maxj;
    if (numbers_left % 2 == 0)
    {
        int N = numbers_left / 2;
        int D = 3;
        if (N == D)
        {
            cout << '1' << '/' << '1';
        }
        else
        {
            cout << N << '/' << D;
        }
    }
    else if (numbers_left % 3 == 0)
    {
        cout << '1' << '/' << '2';
    }
    else
    {
        printf("%d/6", numbers_left);
    }
}