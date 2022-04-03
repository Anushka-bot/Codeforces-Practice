#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, a, b, temp1 = 0, temp2 = 0;
    long long int matches_till_now = 0;
    cin >> n >> m;
    int matchboxes_in_container[m], matches_in_boxes[m];
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        matchboxes_in_container[i] = a;
        matches_in_boxes[i] = b;
    }
    for (int i = 0; i < m - 1; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            if (matches_in_boxes[i] < matches_in_boxes[j])
            {
                temp1 = matchboxes_in_container[i];
                matchboxes_in_container[i] = matchboxes_in_container[j];
                matchboxes_in_container[j] = temp1;

                temp2 = matches_in_boxes[i];
                matches_in_boxes[i] = matches_in_boxes[j];
                matches_in_boxes[j] = temp2;
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        if (m == 1)
        {
            if (matchboxes_in_container[i] >= n)
            {
                cout << (long long int)(n * matches_in_boxes[i]);
            }
            else
            {
                cout << (long long int)(matchboxes_in_container[i] * matches_in_boxes[i]);
            }
        }
        else if (matchboxes_in_container[i] >= n)
        {
            cout << (long long int)((n * matches_in_boxes[i]) + matches_till_now);
            break;
        }
        else
        {
            matches_till_now += matchboxes_in_container[i] * matches_in_boxes[i];
            n -= matchboxes_in_container[i];
        }
    }
}