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
        int negatives = 0, v = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < 0)
            {
                negatives++;
                arr[i] = (-1) * (arr[i]);
            }
        }
        for (int i = 0; i < negatives-1; i++)
        {
            if (i < n - 1 && arr[i + 1] > arr[i])
            {
                v = 1;
                break;
            }
        }
        for (int i = negatives; i < n-1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                v = 1;
                break;
            }
        }
        if (v == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}