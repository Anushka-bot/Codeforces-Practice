#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a1 = 0, a2 = 0, a3 = 0, a4 = 0;
    int one = 0, two = 0, three = 0, four = 0;
    string s;
    cin >> a1 >> a2 >> a3 >> a4;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            one++;
        }
        if (s[i] == '2')
        {
            two++;
        }
        if (s[i] == '3')
        {
            three++;
        }
        if (s[i] == '4')
        {
            four++;
        }
    }
    int sum = one * a1 + two * a2 + three * a3 + four * a4;
    cout << sum;
}