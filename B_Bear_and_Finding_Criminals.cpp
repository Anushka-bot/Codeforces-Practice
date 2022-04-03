#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cities, officer, front = 0, back = 0, cach = 0, ans = 0;
    cin >> cities >> officer;
    vector<int> criminals;
    for (int i = 0; i < cities; i++)
    {
        int x;
        cin >> x;
        criminals.push_back(x);
        if (i < officer-1 && criminals[i] == 1)
        {
            front++;
        }
        else if (i > officer-1 && criminals[i] == 1)
        {
            back++;
        }
    }
    for (int i = 1; i < cities; i++)
    {
        if (officer-1 + i < cities && (officer-1 - i) >= 0)
        {
            if (criminals[officer-1 + i] == 1 && criminals[officer-1 - i] == 1)
            {
                cach += 2;
            }
        }
        else if (officer-1 + i >= cities)
        {
            ans = front + (cach / 2);
        }
        else if (officer-1 + i < 0)
        {
            ans = back + (cach / 2);
        }
    }
    if (criminals[officer-1] == 1)
    {
        cout << ans + 1;
    }
    else
    {
        cout << ans;
    }
}