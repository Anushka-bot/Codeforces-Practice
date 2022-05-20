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
        int w[n];
        for (int i = 0; i < n; i++)
        {
            cin >> w[i];
        }
        int aliw = 0, bobw = 0, candies = 0, max_candies = 0;
        int ali = 0, bob = n - 1;
        candies += 2;
        aliw += w[ali];
        bobw += w[bob];
        while (ali < bob)
        {
            
            if (aliw < bobw)
            {
                ali++;
                aliw += w[ali];
                candies++;
            }
            else if (bobw < aliw)
            {
                bob--;
                bobw += w[bob];
                candies++;
            }
            if (aliw == bobw)
            {
                max_candies = candies;
                ali++;
                bob--;
                if (ali != bob)
                {
                    aliw += w[ali];
                    bobw += w[bob];
                    candies += 2;
                }
                else
                {
                    break;
                }
            }
        }
        cout << max_candies << endl;
    }
}