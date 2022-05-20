#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n, m, v = 0, c = 0;
        cin >> n >> m;
        char a[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        vector<pair<int, int>> pos;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (a[i][j] == 'R')
                {
                    pos.push_back({i, j});
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (a[i][j] == 'R')
                {
                    c = 1;
                    for (int k = 0; k < pos.size(); k++)
                    {
                        if (pos[k].second < j)
                        {
                            v = 1;
                            break;
                        }
                    }
                }
                if (c == 1 && v == 0)
                {
                    break;
                }
            }
            if (c == 1 && v == 0)
            {
                break;
            }
        }
        if (v == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}