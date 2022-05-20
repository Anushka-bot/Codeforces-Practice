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
        int a[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int odd = 0, eaen = 0;
        // for (int i = 1; i <= n; i++)
        // {
        //     if (i % 2 == 0 && a[i] % 2 == 0)
        //     {
        //         eaen++;
        //     }
        //     if (i % 2 != 0 && a[i] % 2 != 0)
        //     {
        //         odd++;
        //     }
        // }
        // if ((odd == (n + 1) / 2 && eaen == 0) || (odd == 0 && eaen == (n + 1) / 2) || (odd == 0 && eaen == 0))
        // {
        //     cout << "YES" << endl;
        // }
        // else if (n % 2 == 0 && (eaen == (n) / 2 && odd == (n) / 2))
        // {
        //     cout << "YES" << endl;
        // }
        // else if (n % 2 != 0 && (eaen == (n) / 2 && odd == (n + 1) / 2))
        // {
        //     cout << "YES" << endl;
        // }
        // else
        // {
        //     cout << "NO" << endl;
        // }
        int v = 1;
        if (a[1] % 2 == 0)
        {
            if (a[2] % 2 == 0)
            {
                for (int i = 3; i <= n; i++)
                {
                    if (a[i] % 2 != 0)
                    {
                        v = 2;
                        cout << "NO" << endl;
                        break;
                    }
                }
            }
            else
            {
                for (int i = 3; i <= n; i++)
                {
                    if (i % 2 != 0 && a[i] % 2 != 0)
                    {
                        v = 2;
                        cout << "NO" << endl;
                        break;
                    }
                    else if (i % 2 == 0 && a[i] % 2 == 0)
                    {
                        v = 2;
                        cout << "NO" << endl;
                        break;
                    }
                }
            }
        }
        else
        {
            if (a[2] % 2 != 0)
            {
                for (int i = 3; i <= n; i++)
                {
                    if (a[i] % 2 == 0)
                    {
                        v = 2;
                        cout << "NO" << endl;
                        break;
                    }
                }
            }
            else
            {
                for (int i = 3; i <= n; i++)
                {
                    if (i % 2 != 0 && a[i] % 2 == 0)
                    {
                        v = 2;
                        cout << "NO" << endl;
                        break;
                    }
                    else if (i % 2 == 0 && a[i] % 2 != 0)
                    {
                        v = 2;
                        cout << "NO" << endl;
                        break;
                    }
                }
            }
        }
        if (v == 1)
        {
            cout << "YES" << endl;
        }
    }
}