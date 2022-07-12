#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007

int main()
{
   int t = 0;
   cin >> t;
   while(t--)
   {
        string s;
        cin >> s;
        if((s[0]=='Y' || s[0]=='y') && (s[1]=='E' || s[1]=='e') && (s[2]=='S' || s[2]=='s')){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        
   }
}