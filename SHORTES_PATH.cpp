#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int xa = 0, ya = 0, xb = 0, yb = 0, xf = 0, yf = 0;
        cin >> xa >> " " >> ya;
        cin >> xb >> " " >> yb;
        cin >> xf >> " " >> yf;
        if (yf == ya && yf == yb)
        {
            int ans = xb - xa;
            int ans1 = yb - ya;
            if (ans < 0)
            {
                ans = ans * (-1);
            }
            if (ans1 < 0)
            {
                ans1 = ans1 * (-1);
            }
            cout << ans + ans1 + 2 << "\n";
        }
        else
        {
            int ans = xb - xa;
            int ans1 = yb - ya;
            if (ans < 0)
            {
                ans = ans * (-1);
            }
            if (ans1 < 0)
            {
                ans1 = ans1 * (-1);
            }
            cout << ans + ans1 << "\n";
        }
        printf("\n");
    }
    return 0;
}