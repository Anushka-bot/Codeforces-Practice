#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
    }
    int out = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == s[j])
        {
            out++;
        }
    }
    cout << out;
}