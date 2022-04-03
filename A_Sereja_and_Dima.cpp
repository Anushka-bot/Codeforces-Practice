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
    int se = 0, di = 0;
    int *head;
    int *tail;
    *head = a[0];
    *tail = a[n-1];
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            if (*head > *tail)
            {
                se = se + *head;
                head = head + 1;
            }
            else
            {
                se = se + *tail;
                tail = tail - 1;
            }
        }
        else if (i % 2 != 0 || i == 1)
        {
            if (*head > *tail)
            {
                di = di + *head;
                head = head + 1;
            }
            else
            {
                di = di + *tail;
                tail = tail - 1;
            }
        }
    }
    cout << se << " " << di;
}