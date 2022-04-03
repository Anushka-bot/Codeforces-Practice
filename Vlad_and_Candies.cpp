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
        vector<int> v(n);
        while (n--)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end(), greater<>());
        if (n == 1 && v[0] > 1)
        {
            cout << "NO" << endl;
        }
        else if (v[0] - v[1] > 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}