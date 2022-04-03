#include <bits/stdc++.h>
using namespace std;
int main()
{
    int teams = 0;
    cin >> teams;
    string arr[teams][2];
    for (int i = 0; i < teams; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }
    int ans = 0;
    for (int i = 0; i < teams; i++)
    {
        for (int j = 0; j < teams; j++)
        {
            if (i != j)
            {
                if (arr[i][0] == arr[j][1])
                {
                    ans++;
                }
            }
        }
    }
    cout << ans;
}