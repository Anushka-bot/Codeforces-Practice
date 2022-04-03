#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        long long int x0, n, x01;
        cin >> x0 >> n;
        if (n % 4 == 0 || n == 0)
        {
            cout << x0 << endl;
            continue;
        }

        if (x0 < 0)
        {
            x01 = (-1) * x0;
            if (x01 % 2 == 0)
            {
                if (n % 4 == 3)
                {
                    cout << x0 + n + 1 << endl;
                }
                else if (n % 4 == 2)
                {
                    cout << x0 + 1 << endl;
                }
                else
                {
                    cout << x0 - n << endl;
                }
            }
            else
            {
                if (n % 4 == 3)
                {
                    cout << x0 - n - 1 << endl;
                }
                else if (n % 4 == 2)
                {
                    cout << x0 - 1 << endl;
                }
                else
                {
                    cout << x0 + n << endl;
                }
            }
        }
        else
        {
            if (x0 % 2 == 0)
            {
                if (n % 4 == 3)
                {
                    cout << x0 + n + 1 << endl;
                }
                else if (n % 4 == 2)
                {
                    cout << x0 + 1 << endl;
                }
                else
                {
                    cout << x0 - n << endl;
                }
            }
            else
            {
                if (n % 4 == 3)
                {
                    cout << x0 - n - 1 << endl;
                }
                else if (n % 4 == 2)
                {
                    cout << x0 - 1 << endl;
                }
                else
                {
                    cout << x0 + n << endl;
                }
            }
        }
    }
}