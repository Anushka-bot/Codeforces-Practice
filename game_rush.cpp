#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        long long int n, x, y, d, jumps = 0;
        cin >> n >> x >> y >> d;
        if (x >= 1 && x <= n && y >= 1 && y <= n && x == y)
        {
            cout << 0 << endl;
        }
        else if (x >= 1 && x <= n && y >= 1 && y <= n && abs(x - y) % d == 0)
        {
            cout << abs(x - y) / d << endl;
        }
        else if (x >= 1 && x <= n && y >= 1 && y <= n && abs(x - 2) % d == 0 && abs(y - 1) % d == 0)
        {
            jumps = 1 + abs(x - 2) / d + abs(y - 1) / d;
            cout << jumps << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}