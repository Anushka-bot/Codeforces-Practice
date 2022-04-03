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
        for (long long int i = 1; i <= n; i++)
        {
            if (x0 < 0)
            {
                x01 = (-1) * x0;
                if (x01 % 2 == 0)
                {
                    x0 = x0 - i;
                }
                else
                {
                    x0 = x0 + i;
                }
            }
            else
            {
                if (x0 % 2 == 0)
                {
                    x0 = x0 - i;
                }
                else
                {
                    x0 = x0 + i;
                }
            }
        }
        cout << x0 << endl;
    }
}