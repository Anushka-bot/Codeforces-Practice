#include <bits/stdc++.h>
using namespace std;
int main()
{
    int games = 0, i = 0, anton = 0, danik = 0;
    cin >> games;
    char s[games];
    for (i = 0; i < games; i++)
    {
        cin >> s[i];
        if (s[i] == 'A')
        {
            anton++;
        }
        else
        {
            danik++;
        }
    }
    string Anton, Danik, Friendship;
    if (anton > danik)
    {
        cout << "Anton";
    }
    else if (anton < danik)
    {
        cout << "Danik";
    }
    else
    {
        cout << "Friendship";
    }
    return 0;
}