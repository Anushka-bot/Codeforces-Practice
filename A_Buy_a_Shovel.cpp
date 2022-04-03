#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k = 0, r = 0;
    cin >> k >> r;
    int x = 0;
    int c = pow(10,9);
    if (k == 10|| k == r)
    {
        cout << 1;
    }
    else
    {
        for (int i = 1; i <= c; i++)
        {
            if ((k * i) % 10 == 0)
            {
                x = i;
                break;
            }
            else if (((k * i) - r) % 10 == 0)
            {
                x = i;
                break;
            }
        }
    }
    cout << x;
}