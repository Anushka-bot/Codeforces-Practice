#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0, i = 0, solutions = 0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        int p = 0, v = 0, t = 0;
        cin >> p >> v >> t;
        if ((p == 1 && v == 1) || (p == 1 && t == 1) || (v == 1 && t == 1))
        {
            solutions++;
        }
    }
    cout << solutions;
    return 0;
}