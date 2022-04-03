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
        int remove=0;
        map<char, int> m;
        for (auto it : s)
        {
            m[it]++;
        }
        for (auto it = s.begin(); it != s.end(); it++)
        {
            cout << "*it: " << (*it) << endl;
            if (m[(*it)] == 1)
            {
                remove++;
                s.erase(it);
                it--;
            }
        }
        for (int i = 0; i < s.size()-1; i++)
        {
            if (i % 2 == 0 && s[i] != s[i + 1])
            {
                
            }
        }
        cout << remove << endl;
    }
}