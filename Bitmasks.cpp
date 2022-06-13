#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
   int t = 0;
   cin >> t;
   while(t--)
   {
        long long int x=0, y=0;
        cin >> x;
        if(x == 1){
            cout << 3 << endl;
        }
        else if(x%2 == 1){
            cout << 1 << endl;
        }
        else if(x<10){
            cout << x+1 << endl;
        }
        else if(x<100){}
        else if(x%10 != 0 && x%2 ==0){
            long long int n=x;
            int d1 = n%10;
            n = n/10;
            // if(n != 0){
                int d2 = n%10;
            // }
            n = n/10;
            // if(n != 0)
            // {
                int d3 = n%10;
            // }
            if(d1%2 == 0 && d2%2 == 0 && d3%2 == 1){
                cout << 4 << endl;
            }
            else if(d1%2 == 0 && d2%2 == 1 && d3%2 == 1){
                cout << 2 << endl;
            }
            else if(d1%2 == 0 && d2%2 == 0 && d3%2 == 0){
                cout << 8 << endl;
            }
        }
        else if(x%10 == 0){
            long long int k  = x/10;
            cout << (long long int)pow(2,k) << endl;
        }
   }
}