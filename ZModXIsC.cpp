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
        int a,b,c;
        cin >> a >> b >> c;
        int x=0,y=0,z=0;
        y = b;
        z = c;
        x = (c/b)*b + a;
        if(z%x != c)
        {
            x = ((c/b)+1)*b +a;
        }
        cout << x << " " << y << " " << z << endl;
   }
}