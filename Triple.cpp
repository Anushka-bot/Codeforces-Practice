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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            m[arr[i]]++;
        }
        int v = 0;
        for (auto it : m)
        {
            if (it.second >= 3)
            {
                v = 1;
                cout << it.first << endl;
                break;
            }
        }
        if (v == 0)
        {
            cout << -1 << endl;
        }
    }
}