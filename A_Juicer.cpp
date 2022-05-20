#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0, b = 0, d = 0;
    cin >> n >> b >> d;
    int oranges[n];
    for (int i = 0; i < n; i++)
    {
        cin >> oranges[i];
    }
    int total_size = 0, empty = 0;
    for (int i = 0; i < n; i++)
    {
        if (oranges[i] <= b)
        {
            total_size += oranges[i];
        }
        if (total_size > d)
        {
            empty++;
            total_size = 0;
        }
    }
    cout << empty;
}