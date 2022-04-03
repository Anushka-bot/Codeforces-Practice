#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int l, r, a;
        cin >> l >> r >> a;
        // if (a > r)
        // {
        //     cout << r % a << endl;
        // }
        // else if (a == r)
        // {
        //     cout << r - 1 << endl;
        // }
        // else
        // {
        //     if ((r / a) >= 2)
        //     {
        //         int maxi = max(((r / a) + (r % a)), (((r / a) - 1) + (a - 1)));
        //         cout << maxi << endl;
        //     }
        //     else
        //     {
        //         cout << (r / a) + (r % a) << endl;
        //     }
        // }
        if (l / a == r / a)
        {
            cout << r / a + r % a << endl;
        }
        else
        {
            int ans = max(r / a + r % a, ((r / a) - 1) + a - 1);
            cout << ans << endl;
        }
    }
}