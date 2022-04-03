#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a == 0)
        {
            cout << 1 << endl;

        }
        else
        {
            int total = a + (b * 2);
            cout << total + 1 << endl;
        }
    }
}