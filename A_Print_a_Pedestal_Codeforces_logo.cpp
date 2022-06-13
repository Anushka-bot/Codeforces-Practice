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
        int h1=0,h2=0,h3=0;
        int x = n/3;
        int left = n-(3*x);
        h1 = x;
        h2 = x;
        h3 = x;
        int diff = 0;
        if(left == 0)
        {
            h1 += 1;
            h3 -= 1;
        }
        else{
            h1 += left;
            if(h1-h2 == 1){
                h1 += 1;
                h3 -= 1;
            }
            else{
                h2 += 1;
                h3 -= 1;
                if((h1-h2)%2 == 0){
                    diff = (h1-h2)/2 -1;
                }
                else{
                    diff = (h1-h2)/2;
                }
                h1 -= diff;
                h2 += diff;
            }
        }
        cout << h2 << " " << h1 << " " << h3 << endl;
   }
}