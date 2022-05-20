#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int start = 0, end = 0, r = 0, b = 0, count = 0, v = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'R')
            {
                r++;
            }
            else if (s[i] == 'B')
            {
                b++;
            }
            else if (i != n - 2 && s[i] == 'W' && s[i + 2] == 'W' && s[i+1] != 'W')
            {
                v = 1;
                cout << "NO" << endl;
                break;
            }
            if (i != n - 1 && s[i] == s[i + 1])
            {
                if (count == 0)
                {
                    start = i;
                }
                count++;
            }
            if (i != n - 1 && count != 0 && s[i] != s[i + 1])
            {
                end = i;
                count = 0;
            }
            if (v == 0 && count == 0 && start >= 0 && end != 0)
            {
                if (start > 0 && end < n - 1 && s[start - 1] == 'W' && s[end + 1] == 'W')
                {
                    v = 1;
                    cout << "NO" << endl;
                    break;
                }
                else if (start > 0 && end == n - 1 && s[start - 1] == 'W')
                {
                    v = 1;
                    cout << "NO" << endl;
                    break;
                }
                else if (start == 0 && end < n - 1 && s[end + 1] == 'W')
                {
                    v = 1;
                    cout << "NO" << endl;
                    break;
                }
            }
        }
        if (count != 0 && v == 0)
        {
            if (start != 0 && s[start - 1] == 'W')
            {
                v = 1;
                count = 0;
                cout << "NO" << endl;
            }
        }
        if (v == 0 && b == 0 && r != 0 || r == 0 && b != 0)
        {
            v = 1;
            cout << "NO" << endl;
        }
        if((b == 0 && r == 0) && v==0)
        {
            cout << "YES" << endl;
            continue;
        }
        if (v == 0)
        {
            v=1;
            cout << "YES" << endl;
        }
    }
}