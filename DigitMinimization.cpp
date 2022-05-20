#include <bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long

int main()
{
   int t = 0;
   cin >> t;
   while(t--)
   {
        int n;
        cin >> n;
        if(n<100)
        {
            cout << n % 10 << endl;
            continue;
        }
        string s = to_string(n);
        int small = s[0]-48;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]-48<small)
            {
                small = s[i]-48;
            }
        }
        cout << small << endl;
   }
}