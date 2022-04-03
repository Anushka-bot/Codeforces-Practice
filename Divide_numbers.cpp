#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int x = a / b;
        int mod = a % b;
        if (mod == 0)
        {
            cout << 0 << endl;
        }
        else if (x == 0)
        {
            cout << b - a << endl;
        }
        else
        {
            int y = b * (x + 1);
            cout << y - a << endl;
        }
    }
}