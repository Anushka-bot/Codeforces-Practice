#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int k = 0;
        cin >> k;
        int count = 0, x = 0;
        for (int i = 1; i <= 1666; i++)
        {
            count++;
            if (i % 3 == 0 || (i % 10) == 3)
            {
                count--;
            }
            if (count == k)
            {
                x = i;
                break;
            }
        }
        cout << x << endl;
    }
}