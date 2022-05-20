#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int positive = 0;
    int untreated = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0 && positive == 0)
        {
            untreated++;
        }
        if (a[i] > 0)
        {
            positive++;
        }
    }
    int arr[positive];
    int r = 0, x = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            arr[r] = i;
            r++;
        }
    }
    for (int i = 0; i < positive; i++)
    {
        if (i == positive - 1)
        {
            if (a[arr[i]] < (n - 1) - arr[i])
            {
                untreated += ((n - 1) - arr[i]) - a[arr[i]];
            }
        }
        else if (arr[j] - arr[i] - 1 > a[arr[i]])
        {
            untreated = untreated + arr[j] - arr[i] - 1 - a[arr[i]];
        }
        else if (arr[j] - arr[i] - 1 < a[arr[i]])
        {
            a[arr[j]] = a[arr[j]] + (a[arr[i]] - arr[j] - arr[i] - 1);
        }
    }
}