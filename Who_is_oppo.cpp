#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int a = 0, b = 0, c = 0, v = 0, x = 0, y = 0;
        cin >> a >> b >> c;
        int max1 = max(a, b);
        int min1 = min(a, b);
        int last_no = 0;
        if(max1 - min1 - 1 == min1 - 1)
        {
            last_no = max1;
        }
        else if(max1 - min1 - 1 < min1 - 1)
        {
            cout << -1 << endl;
            continue;
        }
        else if(max1 - min1 - 1 > min1 - 1)
        {
            last_no = max1 + ((max1-min1-1)- (min1 - 1));
        }
        if (max1 - min1 == 1)
        {
            v = 1;
            cout << -1 << endl;
        }
        else if (c > last_no)
        {
            v = 1;
            cout << -1 << endl;
        }
        if (v != 1)
        {
            if (c > min1 && c < max1)
            {
                x = c - min1;
                y = max1 + x;
                if (y > last_no)
                {
                    y = y - last_no;
                }
                cout << y << endl;
            }
            else if (c > max1)
            {
                x = c - max1;
                y = min1 + x;
                cout << y << endl;
            }
            else if (c < min1)
            {
                x = min1 - c;
                y = max1 - x;
                cout << y << endl;
            }
        }
    }
}