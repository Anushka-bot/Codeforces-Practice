#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int head = 0, tail = s.size() - 1;
        int ones = 0, zeros = 0, removed_ones = 0, fmaxi = 0, max_tillnow = INT_MAX;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                ones++;
            }
            else
            {
                zeros++;
            }
        }
        if (zeros == 0)
        {
            cout << 0 << endl;
            continue;
        }
        if (ones == 0)
        {
            cout << 0 << endl;
            continue;
        }
        while (head <= tail)
        {
            if (s[head] == '1' && s[tail] == '1')
            {
                fmaxi = max(removed_ones + 1, zeros);
                max_tillnow = min(fmaxi, max_tillnow);
                removed_ones++;
                head++;
            }
            else if (s[head] == '0' && s[tail] == '0')
            {
                fmaxi = max(removed_ones, zeros - 1);
                max_tillnow = min(fmaxi, max_tillnow);
                zeros--;
                head++;
            }
            else if (s[head] == '1' && s[tail] == '0')
            {
                fmaxi = max(removed_ones, zeros - 1);
                max_tillnow = min(fmaxi, max_tillnow);
                zeros--;
                tail--;
            }
            else if (s[head] == '0' && s[tail] == '1')
            {
                fmaxi = max(removed_ones, zeros - 1);
                max_tillnow = min(fmaxi, max_tillnow);
                zeros--;
                head++;
            }
        }
        cout << max_tillnow << endl;
    }
}