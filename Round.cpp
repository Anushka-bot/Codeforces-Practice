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
        int n;
        cin >> n;
        int x = floor(log10(n));
        // cout << "x: " << x << endl;
        // cout << "pow: " << pow(10,x) << endl;
        cout << (int)((n)-(floor(pow(10,x)))) << endl;
   }
}