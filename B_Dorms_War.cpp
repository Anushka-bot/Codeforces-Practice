#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n;
        string s;
        cin >> s;
        cin >> k;
        cin.ignore();
        char arr[k];
        vector<int> v(26);
        for (int i = 0; i < k; i++)
        {
            cin >> arr[i];
            v[arr[i] - 97] = 1;
        }
        int num_sc = 0, last_ind_sc = -1, first_ind_sc = -1;
        for (int i = 0; i < n; i++)
        {
            if (v[s[i] - 97] == 1)
            {
                num_sc++;
                if (num_sc == 1)
                {
                    first_ind_sc = i;
                }
                last_ind_sc = i;
            }
        }
        int diff = last_ind_sc - first_ind_sc - 1;
        int max_char = INT_MIN, chars = 0;
        for (int i = 0; i < last_ind_sc; i++)
        {
            if (v[s[i] - 97] == 0 && v[s[i + 1] - 97] == 0)
            {
                chars++;
            }
            else if (v[s[i] - 97] == 0 && v[s[i + 1] - 97] == 1)
            {
                chars++;
                max_char = max(max_char, chars);
                chars = 0;
            }
        }
        if (last_ind_sc == -1)
        {
            cout << 0 << endl;
        }
        else if (num_sc == 1)
        {
            cout << last_ind_sc << endl;
        }
        else if (num_sc == s.size())
        {
            cout << 1 << endl;
        }
        else
        {
            if (diff >= first_ind_sc)
            {
                cout << max_char + 1 << endl;
            }
            else
            {
                cout << max_char << endl;
            }
        }
    }
}