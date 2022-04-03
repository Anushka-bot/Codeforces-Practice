#include <bits/stdc++.h>
using namespace std;
int main()
{
    int no_of_friends = 0, height_of_fence = 0, i = 0;
    cin >> no_of_friends >> height_of_fence;
    int a[no_of_friends];
    for (i = 0; i < no_of_friends; i++)
    {
        cin >> a[i];
    }
    int width = 0, j = 0;
    for (j = 0; j < no_of_friends; j++)
    {
        if (a[j] <= height_of_fence)
        {
            width = width + 1;
        }
        else
        {
            width = width + 2;
        }
    }
    cout << width << endl;

    return 0;
}